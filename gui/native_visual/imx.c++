/**
 * The MIT License (MIT)
 *
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

#include "gui/native_visual/imx.h++"
#include <core/debug.h++>
#include <GLES/gl.h>
#include <zconf.h>


namespace skui::gui::native_visual {
    namespace {
        base::gl_function_type egl_get(void *, const char name[]) {
            base::gl_function_type ptr = eglGetProcAddress(name);
            if (!ptr) {
                if (0 == std::strcmp("eglQueryString", name))
                    return reinterpret_cast<base::gl_function_type>(eglQueryString);
                else if (0 == std::strcmp("eglGetCurrentDisplay", name))
                    return reinterpret_cast<base::gl_function_type>(eglGetCurrentDisplay);
            }
            return ptr;
        }
    }

    imx::imx() {
        egl_display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
        if (egl_display == EGL_NO_DISPLAY) {
            core::debug_print("EGL_NO_DISPLAY\n");
            return;
        }
        if (!eglInitialize(egl_display, nullptr, nullptr)) {
            core::debug_print("eglInitialize failed\n");
            return;
        }
    }

    imx::~imx() {
        if (egl_context) {
            eglMakeCurrent(egl_display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
            eglDestroyContext(egl_display, egl_context);
        }
        if (egl_surface)
            eglDestroySurface(egl_display, egl_surface);
        if (egl_display)
            eglTerminate(egl_display);
    }

    void imx::make_current() const {
        eglMakeCurrent(egl_display, egl_surface, egl_surface, egl_context);
    }

    void imx::swap_buffers(const graphics::pixel_size &size) const {
        eglSwapBuffers(egl_display, egl_surface);
    }

    void imx::create_surface(std::uintptr_t window) {
        EGLint ctxAttribs[] =
                {
                        EGL_CONTEXT_CLIENT_VERSION, 2,
                        EGL_NONE
                };

        EGLint numConfigs;
        const EGLint attribs[] = {
                EGL_RED_SIZE, 8,
                EGL_GREEN_SIZE, 8,
                EGL_BLUE_SIZE, 8,
                EGL_ALPHA_SIZE, 8,
                EGL_NONE
        };
        if (!eglChooseConfig(egl_display, attribs, &egl_config, 1, &numConfigs)) {
            core::debug_print("eglChooseConfig failed\n");
            return;
        }
        egl_context = eglCreateContext(egl_display, egl_config, EGL_NO_CONTEXT, ctxAttribs);
        egl_surface = eglCreateWindowSurface(egl_display, egl_config, reinterpret_cast<EGLNativeWindowType>(window),
                                             nullptr);
    }

    base::gl_get_function_type imx::get_gl_function() const {
        return &egl_get;
    }

}
