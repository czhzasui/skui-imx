/**
 * The MIT License (MIT)
 *
 * Copyright © 2017-2020 Ruben Van Boxem
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
 * OpenGL function types.
 */

#ifndef SKUI_OPENGL_FUNCTION_TYPE_H
#define SKUI_OPENGL_FUNCTION_TYPE_H

#include "opengl/function.h++"
#include "opengl/version.h++"

#ifdef _WIN32
#ifndef WIN32_MEAN_AND_LEAN
#define WIN32_MEAN_AND_LEAN
#endif

#include <windows.h>
#undef WIN32_MEAN_AND_LEAN
#define GLAPI __declspec(dllimport)
#endif

#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__
#define GL_GLEXT_LEGACY
#define GL_DO_NOT_WARN_IF_MULTI_GL_VERSION_HEADERS_INCLUDED
//#undef GL_GLEXT_FUNCTION_POINTERS
#include <OpenGL/gl.h>
#include <OpenGL/gl3.h>
//#include <OpenGL/gl3ext.h>
#else
#include <GL/gl.h>
#endif
#include <GL/glext.h>

#define DEFINE_OPENGL_FUNCTION_TYPE(function) \
  template<> struct function_type<function> \
  { \
    using type = decltype(&::function); \
  };

namespace skui::graphics::opengl
{
  template<function f> struct function_type;

  DEFINE_OPENGL_FUNCTION_TYPE(glAccum)
  DEFINE_OPENGL_FUNCTION_TYPE(glActiveShaderProgram)
  DEFINE_OPENGL_FUNCTION_TYPE(glActiveTexture)
  DEFINE_OPENGL_FUNCTION_TYPE(glAlphaFunc)
  DEFINE_OPENGL_FUNCTION_TYPE(glAreTexturesResident)
  DEFINE_OPENGL_FUNCTION_TYPE(glArrayElement)
  DEFINE_OPENGL_FUNCTION_TYPE(glAttachShader)
  DEFINE_OPENGL_FUNCTION_TYPE(glBegin)
  DEFINE_OPENGL_FUNCTION_TYPE(glBeginConditionalRender)
  DEFINE_OPENGL_FUNCTION_TYPE(glBeginQuery)
  DEFINE_OPENGL_FUNCTION_TYPE(glBeginQueryIndexed)
  DEFINE_OPENGL_FUNCTION_TYPE(glBeginTransformFeedback)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindAttribLocation)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindBuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindBufferBase)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindBufferRange)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindBuffersBase)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindBuffersRange)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindFragDataLocation)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindFragDataLocationIndexed)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindFramebuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindImageTexture)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindImageTextures)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindProgramPipeline)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindRenderbuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindSampler)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindSamplers)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindTexture)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindTextureUnit)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindTextures)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindTransformFeedback)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindVertexArray)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindVertexBuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glBindVertexBuffers)
  DEFINE_OPENGL_FUNCTION_TYPE(glBitmap)
  DEFINE_OPENGL_FUNCTION_TYPE(glBlendColor)
  DEFINE_OPENGL_FUNCTION_TYPE(glBlendEquation)
  DEFINE_OPENGL_FUNCTION_TYPE(glBlendEquationSeparate)
  DEFINE_OPENGL_FUNCTION_TYPE(glBlendFunc)
  DEFINE_OPENGL_FUNCTION_TYPE(glBlendFuncSeparate)
  DEFINE_OPENGL_FUNCTION_TYPE(glBlitFramebuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glBufferData)
  DEFINE_OPENGL_FUNCTION_TYPE(glBufferStorage)
  DEFINE_OPENGL_FUNCTION_TYPE(glBufferSubData)
  DEFINE_OPENGL_FUNCTION_TYPE(glCallList)
  DEFINE_OPENGL_FUNCTION_TYPE(glCallLists)
  DEFINE_OPENGL_FUNCTION_TYPE(glCheckFramebufferStatus)
  DEFINE_OPENGL_FUNCTION_TYPE(glClampColor)
  DEFINE_OPENGL_FUNCTION_TYPE(glClear)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearAccum)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearBufferiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearBufferuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearBufferfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearBufferfi)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearBufferData)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearBufferSubData)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearColor)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearDepth)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearIndex)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearNamedFramebufferiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearNamedFramebufferuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearNamedFramebufferfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearNamedFramebufferfi)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearStencil)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearTexImage)
  DEFINE_OPENGL_FUNCTION_TYPE(glClearTexSubImage)
  DEFINE_OPENGL_FUNCTION_TYPE(glClientActiveTexture)
  DEFINE_OPENGL_FUNCTION_TYPE(glClientWaitSync)
  DEFINE_OPENGL_FUNCTION_TYPE(glClipControl)
  DEFINE_OPENGL_FUNCTION_TYPE(glClipPlane)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor3b)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor3s)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor3i)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor3f)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor3d)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor3ub)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor3us)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor3ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor4b)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor4s)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor4i)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor4f)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor4d)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor4ub)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor4us)
  DEFINE_OPENGL_FUNCTION_TYPE(glColor4ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glColorMask)
  DEFINE_OPENGL_FUNCTION_TYPE(glColorMaterial)
  DEFINE_OPENGL_FUNCTION_TYPE(glColorPointer)
  DEFINE_OPENGL_FUNCTION_TYPE(glCompileShader)
  DEFINE_OPENGL_FUNCTION_TYPE(glCompressedTexImage1D)
  DEFINE_OPENGL_FUNCTION_TYPE(glCompressedTexImage2D)
  DEFINE_OPENGL_FUNCTION_TYPE(glCompressedTexImage3D)
  DEFINE_OPENGL_FUNCTION_TYPE(glCompressedTexSubImage1D)
  DEFINE_OPENGL_FUNCTION_TYPE(glCompressedTexSubImage2D)
  DEFINE_OPENGL_FUNCTION_TYPE(glCompressedTexSubImage3D)
  DEFINE_OPENGL_FUNCTION_TYPE(glCopyBufferSubData)
  DEFINE_OPENGL_FUNCTION_TYPE(glCopyImageSubData)
  DEFINE_OPENGL_FUNCTION_TYPE(glCopyPixels)
  DEFINE_OPENGL_FUNCTION_TYPE(glCopyTexImage1D)
  DEFINE_OPENGL_FUNCTION_TYPE(glCopyTexImage2D)
  DEFINE_OPENGL_FUNCTION_TYPE(glCopyTexSubImage1D)
  DEFINE_OPENGL_FUNCTION_TYPE(glCopyTexSubImage2D)
  DEFINE_OPENGL_FUNCTION_TYPE(glCopyTexSubImage3D)
  DEFINE_OPENGL_FUNCTION_TYPE(glCreateBuffers)
  DEFINE_OPENGL_FUNCTION_TYPE(glCreateFramebuffers)
  DEFINE_OPENGL_FUNCTION_TYPE(glCreateProgram)
  DEFINE_OPENGL_FUNCTION_TYPE(glCreateProgramPipelines)
  DEFINE_OPENGL_FUNCTION_TYPE(glCreateQueries)
  DEFINE_OPENGL_FUNCTION_TYPE(glCreateRenderbuffers)
  DEFINE_OPENGL_FUNCTION_TYPE(glCreateSamplers)
  DEFINE_OPENGL_FUNCTION_TYPE(glCreateShader)
  DEFINE_OPENGL_FUNCTION_TYPE(glCreateShaderProgramv)
  DEFINE_OPENGL_FUNCTION_TYPE(glCreateTextures)
  DEFINE_OPENGL_FUNCTION_TYPE(glCreateTransformFeedbacks)
  DEFINE_OPENGL_FUNCTION_TYPE(glCreateVertexArrays)
  DEFINE_OPENGL_FUNCTION_TYPE(glCullFace)
  DEFINE_OPENGL_FUNCTION_TYPE(glDebugMessageCallback)
  DEFINE_OPENGL_FUNCTION_TYPE(glDebugMessageControl)
  DEFINE_OPENGL_FUNCTION_TYPE(glDebugMessageInsert)
  DEFINE_OPENGL_FUNCTION_TYPE(glDeleteBuffers)
  DEFINE_OPENGL_FUNCTION_TYPE(glDeleteFramebuffers)
  DEFINE_OPENGL_FUNCTION_TYPE(glDeleteLists)
  DEFINE_OPENGL_FUNCTION_TYPE(glDeleteProgram)
  DEFINE_OPENGL_FUNCTION_TYPE(glDeleteProgramPipelines)
  DEFINE_OPENGL_FUNCTION_TYPE(glDeleteQueries)
  DEFINE_OPENGL_FUNCTION_TYPE(glDeleteRenderbuffers)
  DEFINE_OPENGL_FUNCTION_TYPE(glDeleteSamplers)
  DEFINE_OPENGL_FUNCTION_TYPE(glDeleteShader)
  DEFINE_OPENGL_FUNCTION_TYPE(glDeleteSync)
  DEFINE_OPENGL_FUNCTION_TYPE(glDeleteTextures)
  DEFINE_OPENGL_FUNCTION_TYPE(glDeleteTransformFeedbacks)
  DEFINE_OPENGL_FUNCTION_TYPE(glDeleteVertexArrays)
  DEFINE_OPENGL_FUNCTION_TYPE(glDepthFunc)
  DEFINE_OPENGL_FUNCTION_TYPE(glDepthMask)
  DEFINE_OPENGL_FUNCTION_TYPE(glDepthRange)
  DEFINE_OPENGL_FUNCTION_TYPE(glDepthRangeArrayv)
  DEFINE_OPENGL_FUNCTION_TYPE(glDepthRangeIndexed)
  DEFINE_OPENGL_FUNCTION_TYPE(glDetachShader)
  DEFINE_OPENGL_FUNCTION_TYPE(glDisable)
  DEFINE_OPENGL_FUNCTION_TYPE(glDisableClientState)
  DEFINE_OPENGL_FUNCTION_TYPE(glDisableVertexAttribArray)
  DEFINE_OPENGL_FUNCTION_TYPE(glDispatchCompute)
  DEFINE_OPENGL_FUNCTION_TYPE(glDispatchComputeIndirect)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawArrays)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawArraysIndirect)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawArraysInstanced)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawArraysInstancedBaseInstance)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawBuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawBuffers)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawElements)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawElementsBaseVertex)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawElementsIndirect)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawElementsInstanced)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawElementsInstancedBaseInstance)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawElementsInstancedBaseVertex)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawElementsInstancedBaseVertexBaseInstance)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawPixels)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawRangeElements)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawRangeElementsBaseVertex)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawTransformFeedback)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawTransformFeedbackInstanced)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawTransformFeedbackStream)
  DEFINE_OPENGL_FUNCTION_TYPE(glDrawTransformFeedbackStreamInstanced)
  DEFINE_OPENGL_FUNCTION_TYPE(glEdgeFlag)
  DEFINE_OPENGL_FUNCTION_TYPE(glEdgeFlagPointer)
  DEFINE_OPENGL_FUNCTION_TYPE(glEnable)
  DEFINE_OPENGL_FUNCTION_TYPE(glEnableClientState)
  DEFINE_OPENGL_FUNCTION_TYPE(glEnableVertexAttribArray)
  DEFINE_OPENGL_FUNCTION_TYPE(glEnd)
  DEFINE_OPENGL_FUNCTION_TYPE(glEndConditionalRender)
  DEFINE_OPENGL_FUNCTION_TYPE(glEndList)
  DEFINE_OPENGL_FUNCTION_TYPE(glEndQuery)
  DEFINE_OPENGL_FUNCTION_TYPE(glEndQueryIndexed)
  DEFINE_OPENGL_FUNCTION_TYPE(glEndTransformFeedback)
  DEFINE_OPENGL_FUNCTION_TYPE(glEvalCoord1f)
  DEFINE_OPENGL_FUNCTION_TYPE(glEvalCoord1d)
  DEFINE_OPENGL_FUNCTION_TYPE(glEvalCoord2f)
  DEFINE_OPENGL_FUNCTION_TYPE(glEvalCoord2d)
  DEFINE_OPENGL_FUNCTION_TYPE(glEvalMesh1)
  DEFINE_OPENGL_FUNCTION_TYPE(glEvalPoint1)
  DEFINE_OPENGL_FUNCTION_TYPE(glEvalPoint2)
  DEFINE_OPENGL_FUNCTION_TYPE(glFeedbackBuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glFenceSync)
  DEFINE_OPENGL_FUNCTION_TYPE(glFinish)
  DEFINE_OPENGL_FUNCTION_TYPE(glFlush)
  DEFINE_OPENGL_FUNCTION_TYPE(glFlushMappedBufferRange)
  DEFINE_OPENGL_FUNCTION_TYPE(glFogf)
  DEFINE_OPENGL_FUNCTION_TYPE(glFogi)
  DEFINE_OPENGL_FUNCTION_TYPE(glFogCoordd)
  DEFINE_OPENGL_FUNCTION_TYPE(glFogCoordf)
  DEFINE_OPENGL_FUNCTION_TYPE(glFogCoordPointer)
  DEFINE_OPENGL_FUNCTION_TYPE(glFramebufferParameteri)
  DEFINE_OPENGL_FUNCTION_TYPE(glFramebufferRenderbuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glFramebufferTexture)
  DEFINE_OPENGL_FUNCTION_TYPE(glFramebufferTextureLayer)
  DEFINE_OPENGL_FUNCTION_TYPE(glFrontFace)
  DEFINE_OPENGL_FUNCTION_TYPE(glFrustum)
  DEFINE_OPENGL_FUNCTION_TYPE(glGenBuffers)
  DEFINE_OPENGL_FUNCTION_TYPE(glGenFramebuffers)
  DEFINE_OPENGL_FUNCTION_TYPE(glGenLists)
  DEFINE_OPENGL_FUNCTION_TYPE(glGenProgramPipelines)
  DEFINE_OPENGL_FUNCTION_TYPE(glGenQueries)
  DEFINE_OPENGL_FUNCTION_TYPE(glGenRenderbuffers)
  DEFINE_OPENGL_FUNCTION_TYPE(glGenSamplers)
  DEFINE_OPENGL_FUNCTION_TYPE(glGenTextures)
  DEFINE_OPENGL_FUNCTION_TYPE(glGenTransformFeedbacks)
  DEFINE_OPENGL_FUNCTION_TYPE(glGenVertexArrays)
  DEFINE_OPENGL_FUNCTION_TYPE(glGenerateMipmap)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetBooleanv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetDoublev)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetFloatv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetIntegerv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetInteger64v)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetBooleani_v)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetIntegeri_v)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetFloati_v)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetDoublei_v)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetInteger64i_v)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetActiveAtomicCounterBufferiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetActiveAttrib)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetActiveSubroutineName)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetActiveSubroutineUniformiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetActiveSubroutineUniformName)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetActiveUniform)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetActiveUniformBlockiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetActiveUniformBlockName)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetActiveUniformName)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetActiveUniformsiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetAttachedShaders)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetAttribLocation)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetBufferParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetBufferParameteri64v)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetBufferPointerv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetBufferSubData)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetClipPlane)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetCompressedTexImage)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetCompressedTextureSubImage)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetDebugMessageLog)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetError)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetFragDataIndex)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetFragDataLocation)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetFramebufferAttachmentParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetFramebufferParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetGraphicsResetStatus)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetInternalformativ)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetInternalformati64v)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetLightfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetLightiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetMapdv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetMapfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetMapiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetMaterialfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetMaterialiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetMultisamplefv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetNamedBufferParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetNamedBufferParameteri64v)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetNamedFramebufferAttachmentParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetNamedFramebufferParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetNamedRenderbufferParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetObjectLabel)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetObjectPtrLabel)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetPixelMapfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetPixelMapuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetPixelMapusv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetPointerv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetPolygonStipple)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetProgramiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetProgramBinary)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetProgramInfoLog)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetProgramInterfaceiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetProgramPipelineiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetProgramPipelineInfoLog)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetProgramResourceiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetProgramResourceIndex)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetProgramResourceLocation)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetProgramResourceLocationIndex)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetProgramResourceName)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetProgramStageiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetQueryIndexediv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetQueryObjectiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetQueryObjectuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetQueryObjecti64v)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetQueryObjectui64v)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetQueryiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetRenderbufferParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetSamplerParameterfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetSamplerParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetSamplerParameterIiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetSamplerParameterIuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetShaderiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetShaderInfoLog)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetShaderPrecisionFormat)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetShaderSource)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetString)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetSubroutineIndex)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetSubroutineUniformLocation)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetSynciv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTexEnvfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTexEnviv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTexGendv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTexGenfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTexGeniv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTexImage)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTexLevelParameterfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTexLevelParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTexParameterfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTexParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTexParameterIiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTexParameterIuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTextureParameterfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTextureParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTextureParameterIiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTextureParameterIuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTextureLevelParameterfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTextureLevelParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTextureSubImage)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTransformFeedbackiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTransformFeedbacki_v)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTransformFeedbacki64_v)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetTransformFeedbackVarying)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetUniformfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetUniformiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetUniformuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetUniformdv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetnUniformfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetnUniformiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetnUniformuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetnUniformdv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetUniformBlockIndex)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetUniformIndices)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetUniformLocation)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetUniformSubroutineuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetVertexArrayIndexed64iv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetVertexArrayIndexediv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetVertexArrayiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetVertexAttribdv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetVertexAttribfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetVertexAttribiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetVertexAttribIiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetVertexAttribIuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetVertexAttribLdv)
  DEFINE_OPENGL_FUNCTION_TYPE(glGetVertexAttribPointerv)
  DEFINE_OPENGL_FUNCTION_TYPE(glHint)
  DEFINE_OPENGL_FUNCTION_TYPE(glIndexs)
  DEFINE_OPENGL_FUNCTION_TYPE(glIndexi)
  DEFINE_OPENGL_FUNCTION_TYPE(glIndexf)
  DEFINE_OPENGL_FUNCTION_TYPE(glIndexd)
  DEFINE_OPENGL_FUNCTION_TYPE(glIndexub)
  DEFINE_OPENGL_FUNCTION_TYPE(glIndexMask)
  DEFINE_OPENGL_FUNCTION_TYPE(glIndexPointer)
  DEFINE_OPENGL_FUNCTION_TYPE(glInitNames)
  DEFINE_OPENGL_FUNCTION_TYPE(glInterleavedArrays)
  DEFINE_OPENGL_FUNCTION_TYPE(glInvalidateBufferData)
  DEFINE_OPENGL_FUNCTION_TYPE(glInvalidateBufferSubData)
  DEFINE_OPENGL_FUNCTION_TYPE(glInvalidateFramebuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glInvalidateSubFramebuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glInvalidateTexImage)
  DEFINE_OPENGL_FUNCTION_TYPE(glInvalidateTexSubImage)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsBuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsEnabled)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsFramebuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsList)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsProgram)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsProgramPipeline)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsQuery)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsRenderbuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsSampler)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsShader)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsSync)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsTexture)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsTransformFeedback)
  DEFINE_OPENGL_FUNCTION_TYPE(glIsVertexArray)
  DEFINE_OPENGL_FUNCTION_TYPE(glLightf)
  DEFINE_OPENGL_FUNCTION_TYPE(glLighti)
  DEFINE_OPENGL_FUNCTION_TYPE(glLightModelf)
  DEFINE_OPENGL_FUNCTION_TYPE(glLightModeli)
  DEFINE_OPENGL_FUNCTION_TYPE(glLineStipple)
  DEFINE_OPENGL_FUNCTION_TYPE(glLineWidth)
  DEFINE_OPENGL_FUNCTION_TYPE(glLinkProgram)
  DEFINE_OPENGL_FUNCTION_TYPE(glListBase)
  DEFINE_OPENGL_FUNCTION_TYPE(glLoadIdentity)
  DEFINE_OPENGL_FUNCTION_TYPE(glLoadMatrixd)
  DEFINE_OPENGL_FUNCTION_TYPE(glLoadMatrixf)
  DEFINE_OPENGL_FUNCTION_TYPE(glLoadName)
  DEFINE_OPENGL_FUNCTION_TYPE(glLoadTransposeMatrixd)
  DEFINE_OPENGL_FUNCTION_TYPE(glLoadTransposeMatrixf)
  DEFINE_OPENGL_FUNCTION_TYPE(glLogicOp)
  DEFINE_OPENGL_FUNCTION_TYPE(glMap1f)
  DEFINE_OPENGL_FUNCTION_TYPE(glMap1d)
  DEFINE_OPENGL_FUNCTION_TYPE(glMap2f)
  DEFINE_OPENGL_FUNCTION_TYPE(glMap2d)
  DEFINE_OPENGL_FUNCTION_TYPE(glMapBuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glMapBufferRange)
  DEFINE_OPENGL_FUNCTION_TYPE(glMapGrid1d)
  DEFINE_OPENGL_FUNCTION_TYPE(glMapGrid1f)
  DEFINE_OPENGL_FUNCTION_TYPE(glMapGrid2d)
  DEFINE_OPENGL_FUNCTION_TYPE(glMapGrid2f)
  DEFINE_OPENGL_FUNCTION_TYPE(glMaterialf)
  DEFINE_OPENGL_FUNCTION_TYPE(glMateriali)
  DEFINE_OPENGL_FUNCTION_TYPE(glMatrixMode)
  DEFINE_OPENGL_FUNCTION_TYPE(glMemoryBarrier)
  DEFINE_OPENGL_FUNCTION_TYPE(glMinSampleShading)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultMatrixd)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultMatrixf)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultTransposeMatrixd)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultTransposeMatrixf)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiDrawArrays)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiDrawArraysIndirect)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiDrawElements)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiDrawElementsBaseVertex)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiDrawElementsIndirect)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord1s)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord1i)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord1f)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord1d)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord2s)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord2i)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord2f)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord2d)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord3s)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord3i)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord3f)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord3d)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord4s)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord4i)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord4f)
  DEFINE_OPENGL_FUNCTION_TYPE(glMultiTexCoord4d)
  DEFINE_OPENGL_FUNCTION_TYPE(glNewList)
  DEFINE_OPENGL_FUNCTION_TYPE(glNormal3b)
  DEFINE_OPENGL_FUNCTION_TYPE(glNormal3d)
  DEFINE_OPENGL_FUNCTION_TYPE(glNormal3f)
  DEFINE_OPENGL_FUNCTION_TYPE(glNormal3i)
  DEFINE_OPENGL_FUNCTION_TYPE(glNormal3s)
  DEFINE_OPENGL_FUNCTION_TYPE(glNormalPointer)
  DEFINE_OPENGL_FUNCTION_TYPE(glObjectLabel)
  DEFINE_OPENGL_FUNCTION_TYPE(glObjectPtrLabel)
  DEFINE_OPENGL_FUNCTION_TYPE(glOrtho)
  DEFINE_OPENGL_FUNCTION_TYPE(glPassThrough)
  DEFINE_OPENGL_FUNCTION_TYPE(glPatchParameteri)
  DEFINE_OPENGL_FUNCTION_TYPE(glPatchParameterfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glPauseTransformFeedback)
  DEFINE_OPENGL_FUNCTION_TYPE(glPixelMapfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glPixelMapuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glPixelMapusv)
  DEFINE_OPENGL_FUNCTION_TYPE(glPixelStoref)
  DEFINE_OPENGL_FUNCTION_TYPE(glPixelStorei)
  DEFINE_OPENGL_FUNCTION_TYPE(glPixelTransferf)
  DEFINE_OPENGL_FUNCTION_TYPE(glPixelTransferi)
  DEFINE_OPENGL_FUNCTION_TYPE(glPixelZoom)
  DEFINE_OPENGL_FUNCTION_TYPE(glPointParameterf)
  DEFINE_OPENGL_FUNCTION_TYPE(glPointParameteri)
  DEFINE_OPENGL_FUNCTION_TYPE(glPointParameterfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glPointParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glPointSize)
  DEFINE_OPENGL_FUNCTION_TYPE(glPolygonMode)
  DEFINE_OPENGL_FUNCTION_TYPE(glPolygonOffset)
  DEFINE_OPENGL_FUNCTION_TYPE(glPolygonStipple)
  DEFINE_OPENGL_FUNCTION_TYPE(glPopAttrib)
  DEFINE_OPENGL_FUNCTION_TYPE(glPopClientAttrib)
  DEFINE_OPENGL_FUNCTION_TYPE(glPopDebugGroup)
  DEFINE_OPENGL_FUNCTION_TYPE(glPopMatrix)
  DEFINE_OPENGL_FUNCTION_TYPE(glPopName)
  DEFINE_OPENGL_FUNCTION_TYPE(glPrimitiveRestartIndex)
  DEFINE_OPENGL_FUNCTION_TYPE(glPrioritizeTextures)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramBinary)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramParameteri)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform1f)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform2f)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform3f)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform4f)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform1i)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform2i)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform3i)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform4i)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform1ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform2ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform3ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform4ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform1fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform2fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform3fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform4fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform1iv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform2iv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform3iv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform1uiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform2uiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform3uiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniform4uiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniformMatrix2fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniformMatrix3fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniformMatrix4fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniformMatrix2x3fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniformMatrix3x2fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniformMatrix2x4fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniformMatrix4x2fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniformMatrix3x4fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProgramUniformMatrix4x3fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glProvokingVertex)
  DEFINE_OPENGL_FUNCTION_TYPE(glPushAttrib)
  DEFINE_OPENGL_FUNCTION_TYPE(glPushClientAttrib)
  DEFINE_OPENGL_FUNCTION_TYPE(glPushDebugGroup)
  DEFINE_OPENGL_FUNCTION_TYPE(glPushMatrix)
  DEFINE_OPENGL_FUNCTION_TYPE(glPushName)
  DEFINE_OPENGL_FUNCTION_TYPE(glQueryCounter)
  DEFINE_OPENGL_FUNCTION_TYPE(glRasterPos2s)
  DEFINE_OPENGL_FUNCTION_TYPE(glRasterPos2i)
  DEFINE_OPENGL_FUNCTION_TYPE(glRasterPos2f)
  DEFINE_OPENGL_FUNCTION_TYPE(glRasterPos2d)
  DEFINE_OPENGL_FUNCTION_TYPE(glRasterPos3s)
  DEFINE_OPENGL_FUNCTION_TYPE(glRasterPos3i)
  DEFINE_OPENGL_FUNCTION_TYPE(glRasterPos3f)
  DEFINE_OPENGL_FUNCTION_TYPE(glRasterPos3d)
  DEFINE_OPENGL_FUNCTION_TYPE(glRasterPos4s)
  DEFINE_OPENGL_FUNCTION_TYPE(glRasterPos4i)
  DEFINE_OPENGL_FUNCTION_TYPE(glRasterPos4f)
  DEFINE_OPENGL_FUNCTION_TYPE(glRasterPos4d)
  DEFINE_OPENGL_FUNCTION_TYPE(glReadBuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glReadPixels)
  DEFINE_OPENGL_FUNCTION_TYPE(glRectd)
  DEFINE_OPENGL_FUNCTION_TYPE(glRectf)
  DEFINE_OPENGL_FUNCTION_TYPE(glRecti)
  DEFINE_OPENGL_FUNCTION_TYPE(glRects)
  DEFINE_OPENGL_FUNCTION_TYPE(glReleaseShaderCompiler)
  DEFINE_OPENGL_FUNCTION_TYPE(glRenderMode)
  DEFINE_OPENGL_FUNCTION_TYPE(glRenderbufferStorage)
  DEFINE_OPENGL_FUNCTION_TYPE(glRenderbufferStorageMultisample)
  DEFINE_OPENGL_FUNCTION_TYPE(glResumeTransformFeedback)
  DEFINE_OPENGL_FUNCTION_TYPE(glRotated)
  DEFINE_OPENGL_FUNCTION_TYPE(glRotatef)
  DEFINE_OPENGL_FUNCTION_TYPE(glSampleCoverage)
  DEFINE_OPENGL_FUNCTION_TYPE(glSampleMaski)
  DEFINE_OPENGL_FUNCTION_TYPE(glSamplerParameterf)
  DEFINE_OPENGL_FUNCTION_TYPE(glSamplerParameteri)
  DEFINE_OPENGL_FUNCTION_TYPE(glSamplerParameterfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glSamplerParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glSamplerParameterIiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glSamplerParameterIuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glScaled)
  DEFINE_OPENGL_FUNCTION_TYPE(glScalef)
  DEFINE_OPENGL_FUNCTION_TYPE(glScissor)
  DEFINE_OPENGL_FUNCTION_TYPE(glScissorArrayv)
  DEFINE_OPENGL_FUNCTION_TYPE(glScissorIndexed)
  DEFINE_OPENGL_FUNCTION_TYPE(glSecondaryColor3b)
  DEFINE_OPENGL_FUNCTION_TYPE(glSecondaryColor3s)
  DEFINE_OPENGL_FUNCTION_TYPE(glSecondaryColor3i)
  DEFINE_OPENGL_FUNCTION_TYPE(glSecondaryColor3f)
  DEFINE_OPENGL_FUNCTION_TYPE(glSecondaryColor3d)
  DEFINE_OPENGL_FUNCTION_TYPE(glSecondaryColor3ub)
  DEFINE_OPENGL_FUNCTION_TYPE(glSecondaryColor3us)
  DEFINE_OPENGL_FUNCTION_TYPE(glSecondaryColor3ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glSecondaryColorPointer)
  DEFINE_OPENGL_FUNCTION_TYPE(glSelectBuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glShadeModel)
  DEFINE_OPENGL_FUNCTION_TYPE(glShaderBinary)
  DEFINE_OPENGL_FUNCTION_TYPE(glShaderSource)
  DEFINE_OPENGL_FUNCTION_TYPE(glShaderStorageBlockBinding)
  DEFINE_OPENGL_FUNCTION_TYPE(glStencilFunc)
  DEFINE_OPENGL_FUNCTION_TYPE(glStencilFuncSeparate)
  DEFINE_OPENGL_FUNCTION_TYPE(glStencilMask)
  DEFINE_OPENGL_FUNCTION_TYPE(glStencilMaskSeparate)
  DEFINE_OPENGL_FUNCTION_TYPE(glStencilOp)
  DEFINE_OPENGL_FUNCTION_TYPE(glStencilOpSeparate)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexBuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexBufferRange)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord1s)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord1i)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord1f)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord1d)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord2s)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord2i)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord2f)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord2d)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord3s)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord3i)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord3f)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord3d)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord4s)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord4i)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord4f)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoord4d)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexCoordPointer)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexEnvf)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexEnvi)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexGeni)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexGenf)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexGend)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexImage1D)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexImage2D)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexImage2DMultisample)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexImage3D)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexImage3DMultisample)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexParameterf)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexParameteri)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexParameterfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexParameterIiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexParameterIuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glTextureParameterf)
  DEFINE_OPENGL_FUNCTION_TYPE(glTextureParameteri)
  DEFINE_OPENGL_FUNCTION_TYPE(glTextureParameterfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glTextureParameteriv)
  DEFINE_OPENGL_FUNCTION_TYPE(glTextureParameterIiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glTextureParameterIuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexStorage1D)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexStorage2D)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexStorage2DMultisample)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexStorage3D)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexStorage3DMultisample)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexSubImage1D)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexSubImage2D)
  DEFINE_OPENGL_FUNCTION_TYPE(glTexSubImage3D)
  DEFINE_OPENGL_FUNCTION_TYPE(glTextureBarrier)
  DEFINE_OPENGL_FUNCTION_TYPE(glTextureView)
  DEFINE_OPENGL_FUNCTION_TYPE(glTransformFeedbackBufferBase)
  DEFINE_OPENGL_FUNCTION_TYPE(glTransformFeedbackBufferRange)
  DEFINE_OPENGL_FUNCTION_TYPE(glTransformFeedbackVaryings)
  DEFINE_OPENGL_FUNCTION_TYPE(glTranslated)
  DEFINE_OPENGL_FUNCTION_TYPE(glTranslatef)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform1f)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform2f)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform3f)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform4f)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform1i)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform2i)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform3i)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform4i)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform1ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform2ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform3ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform4ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform1fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform2fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform3fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform4fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform1iv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform2iv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform3iv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform4iv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform1uiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform2uiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform3uiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniform4uiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniformMatrix2fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniformMatrix3fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniformMatrix4fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniformMatrix2x3fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniformMatrix3x2fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniformMatrix2x4fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniformMatrix4x2fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniformMatrix3x4fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniformMatrix4x3fv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniformBlockBinding)
  DEFINE_OPENGL_FUNCTION_TYPE(glUniformSubroutinesuiv)
  DEFINE_OPENGL_FUNCTION_TYPE(glUnmapBuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glUseProgram)
  DEFINE_OPENGL_FUNCTION_TYPE(glUseProgramStages)
  DEFINE_OPENGL_FUNCTION_TYPE(glValidateProgram)
  DEFINE_OPENGL_FUNCTION_TYPE(glValidateProgramPipeline)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertex2s)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertex2i)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertex2f)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertex2d)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertex3s)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertex3i)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertex3f)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertex3d)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertex4s)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertex4i)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertex4f)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertex4d)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexArrayElementBuffer)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttrib1f)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttrib1s)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttrib1d)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttribI1i)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttribI1ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttrib2f)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttrib2s)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttrib2d)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttribI2i)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttribI2ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttrib3f)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttrib3s)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttrib3d)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttribI3i)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttribI3ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttrib4f)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttrib4s)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttrib4d)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttribI4i)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttribI4ui)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttribBinding)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttribDivisor)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttribFormat)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexAttribPointer)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexBindingDivisor)
  DEFINE_OPENGL_FUNCTION_TYPE(glVertexPointer)
  DEFINE_OPENGL_FUNCTION_TYPE(glViewport)
  DEFINE_OPENGL_FUNCTION_TYPE(glViewportArrayv)
  DEFINE_OPENGL_FUNCTION_TYPE(glViewportIndexedf)
  DEFINE_OPENGL_FUNCTION_TYPE(glViewportIndexedfv)
  DEFINE_OPENGL_FUNCTION_TYPE(glWaitSync)
  DEFINE_OPENGL_FUNCTION_TYPE(glWindowPos2s)
  DEFINE_OPENGL_FUNCTION_TYPE(glWindowPos2i)
  DEFINE_OPENGL_FUNCTION_TYPE(glWindowPos2f)
  DEFINE_OPENGL_FUNCTION_TYPE(glWindowPos2d)
  DEFINE_OPENGL_FUNCTION_TYPE(glWindowPos3s)
  DEFINE_OPENGL_FUNCTION_TYPE(glWindowPos3i)
  DEFINE_OPENGL_FUNCTION_TYPE(glWindowPos3f)
  DEFINE_OPENGL_FUNCTION_TYPE(glWindowPos3d)

#ifdef _WIN32
  DEFINE_OPENGL_FUNCTION_TYPE(wglCopyContext)
  DEFINE_OPENGL_FUNCTION_TYPE(wglCreateContext)
  DEFINE_OPENGL_FUNCTION_TYPE(wglCreateLayerContext)
  DEFINE_OPENGL_FUNCTION_TYPE(wglDeleteContext)
  DEFINE_OPENGL_FUNCTION_TYPE(wglDescribeLayerPlane)
  DEFINE_OPENGL_FUNCTION_TYPE(wglGetCurrentContext)
  DEFINE_OPENGL_FUNCTION_TYPE(wglGetCurrentDC)
  DEFINE_OPENGL_FUNCTION_TYPE(wglGetLayerPaletteEntries)
  DEFINE_OPENGL_FUNCTION_TYPE(wglGetProcAddress)
  DEFINE_OPENGL_FUNCTION_TYPE(wglMakeCurrent)
  DEFINE_OPENGL_FUNCTION_TYPE(wglRealizeLayerPalette)
  DEFINE_OPENGL_FUNCTION_TYPE(wglSetLayerPaletteEntries)
  DEFINE_OPENGL_FUNCTION_TYPE(wglShareLists)
  DEFINE_OPENGL_FUNCTION_TYPE(wglSwapLayerBuffers)
  DEFINE_OPENGL_FUNCTION_TYPE(wglUseFontBitmapsA)
  DEFINE_OPENGL_FUNCTION_TYPE(wglUseFontBitmapsW)
  DEFINE_OPENGL_FUNCTION_TYPE(wglUseFontOutlinesA)
  DEFINE_OPENGL_FUNCTION_TYPE(wglUseFontOutlinesW)
#endif
  template<function f> using type_t = typename function_type<f>::type;
}

#undef DEFINE_OPENGL_FUNCTION_TYPE

#endif
