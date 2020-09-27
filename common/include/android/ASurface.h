//
// Created by gotang on 18-12-5.
//

#ifndef ANDROID_ASURFACE_H
#define ANDROID_ASURFACE_H

#include <android/native_window.h>

__BEGIN_DECLS

struct ASurface;

typedef struct ASurface ASurface;

ASurface *ASurface_create(const char *name, int w, int h, int format);

ANativeWindow *ASurface_getNativeWindow(ASurface *surface);

int ASurface_setLayer(ASurface *surface, int layer);

int ASurface_setAlpha(ASurface *surface, float alpha = 1.0f);

int ASurface_hide(ASurface *surface);

int ASurface_show(ASurface *surface);

void ASurface_destory(ASurface *surface);


__END_DECLS
#endif //ANDROID_ASURFACE_H
