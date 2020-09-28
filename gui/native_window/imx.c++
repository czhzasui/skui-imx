/**
 * The MIT License (MIT)
 *
 * Copyright © 2017-2020 CZH
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

#include <zconf.h>
#include <GLES/gl.h>
#include <thread>
#include <core/application.h++>
#include "gui/native_window/imx.h++"
#include "core/debug.h++"


namespace skui::gui::native_window {

    imx::imx() : base(std::make_unique<native_visual::imx>()) {
    }

    imx::~imx() {

    }

    void imx::create(const graphics::pixel_position &position, const graphics::pixel_size &size) {
        if (asurface == nullptr) {
            asurface = ASurface_create(getprogname(), size.width, size.height, WINDOW_FORMAT_RGBA_8888);
        }
        if (asurface == nullptr) {
            core::debug_print("createSurface failed\n");
            return;
        }
        if (ASurface_setLayer(asurface, 0x7fffffff) < 0) {
            core::debug_print("setLayer failed\n");
            return;
        }
        native_visual->create_surface(reinterpret_cast<std::uintptr_t>(ASurface_getNativeWindow(asurface)));
    }

    void imx::show() {
        ASurface_show(asurface);
    }

    void imx::hide() {
        ASurface_hide(asurface);
    }

    void imx::close() {
        ASurface_destory(asurface);
    }

    core::string imx::get_title() const {
        return {};
    }

    void imx::set_title(const core::string &title) {

    }

    std::pair<graphics::pixel_position, graphics::pixel_size> imx::get_current_geometry() const {
        return {};
    }
}
