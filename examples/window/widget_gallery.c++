/**
 * The MIT License (MIT)
 *
 * Copyright © 2017-2020 Ruben Van Boxem
 * Copyright © 2019-2020 CZH
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 **/

/*
 * window
 * Program showing off all skui test.
 */

#include <core/application.h++>
#include <core/debug.h++>

#include <graphics/color.h++>

#include <graphics/gradient/sweep_gradient.h++>

#include <graphics/scene.h++>

#include <graphics/shape/ellipse.h++>
#include <graphics/shape/rectangle.h++>
#include <graphics/shape/text.h++>

#include <gui/element/graphics_view.h++>
#include <gui/element/label.h++>
#include <gui/element/spacer.h++>
#include <gui/layout/column.h++>
#include <gui/window.h++>

#include <memory>

using namespace skui::graphics;

auto make_label(const char *text) {
    auto label = std::make_unique<skui::gui::label>(text);
    label->border.thickness = 1;
    label->border.color = skui::graphics::colors::blue;
    label->border.radius = 5;
    label->background = skui::graphics::colors::red;
    label->fill = skui::graphics::colors::black;
    label->font.size = 40;

    return label;
}


skui::graphics::scene setup_graphics_scene() {
    scene scene;

    scene.background_color = colors::light_sea_green;

    auto square = std::make_unique<rectangle>(scalar_size{400, 400});
    square->fill = colors::pale_golden_rod;
    square->border.thickness = 4;
    square->border.radius = 20;
    square->border.color = colors::black;

    auto circle = std::make_unique<ellipse>(scalar_size{300, 300});
    const scalar_position center{150, 150};
    const std::vector<color> rainbow{colors::cyan,
                                     colors::magenta,
                                     colors::yellow,
                                     colors::cyan};
    circle->fill = sweep_gradient{center, rainbow};

    auto text_label = std::make_unique<text>("Skui test");
    text_label->border.color = colors::black;
    text_label->border.thickness = 1;
    text_label->fill = sweep_gradient{center, rainbow};
    text_label->font.size = 48;

    scene.drawables.emplace_back(scalar_position{1000, 10}, std::move(square));
    scene.drawables.emplace_back(scalar_position{0, 240}, std::move(circle));
    scene.drawables.emplace_back(scalar_position{0, 0}, std::move(text_label));

    return scene;
}

auto make_spacer(const skui::graphics::scalar_size &size) {
    auto spacer = std::make_unique<skui::gui::spacer>(size);
    return spacer;
}

int main(int argc, char *argv[]) {
    skui::gui::element::show_invisible = true;

    using skui::core::application;

    application app{argc, argv, "Widget Gallery"};

    skui::gui::window window{{0,    0},
                             {1920, 720}};

    auto scene = setup_graphics_scene();
    auto view = std::make_unique<skui::gui::graphics_view>(scene);
    view->size = skui::graphics::scalar_size{1920, 720};

    auto column = std::make_unique<skui::gui::column>(
            std::make_unique<skui::gui::spacer>(skui::graphics::scalar_size{800, 50}),
            make_label("mHello SkUI!"),
            std::move(view)

    );
    window.element = std::move(column);

    window.show();

    return app.execute();
}
