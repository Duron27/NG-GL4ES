
#include "../glx/hardext.h"
#include "gles.h"
#include "init.h"
#include "loader.h"


void gl4es_glClipControlEXT(GLenum origin, GLenum depthMode) {
    LOAD_GLES(glClipControlEXT);
    gles_glClipControlEXT(origin, depthMode);
}

void gl4es_glClipControl(GLenum origin, GLenum depthMode) {
    LOAD_GLES(glClipControlEXT);
    gles_glClipControlEXT(origin, depthMode);
}

void glClipControl(GLenum origin, GLenum depthMode) AliasExport("gl4es_glClipControl");
void glClipControlEXT(GLenum origin, GLenum depthMode) AliasExport("gl4es_glClipControlEXT");



typedef void (*glEnableiEXT_PTR)(GLenum target, GLuint index);
void gl4es_glEnableiEXT(GLenum target, GLuint index);

void gl4es_glEnableiEXT(GLenum target, GLuint index)
{
    LOAD_GLES(glEnableiEXT);
    gles_glEnableiEXT(target, index);
}

void glEnableiEXT(GLenum target, GLuint index) AliasExport("gl4es_glEnableiEXT");
void glEnablei(GLenum target, GLuint index) AliasExport("gl4es_glEnableiEXT");

typedef void (*glDisableiEXT_PTR)(GLenum target, GLuint index);
void gl4es_glDisableiEXT(GLenum target, GLuint index)
{
    LOAD_GLES(glDisableiEXT);
    gles_glDisableiEXT(target, index);
}

void glDisableiEXT(GLenum target, GLuint index) AliasExport("gl4es_glDisableiEXT");
void glDisablei(GLenum target, GLuint index) AliasExport("gl4es_glDisableiEXT");

typedef void (*glBlendEquationiEXT_PTR)(GLuint buf, GLenum mode);
void gl4es_glBlendEquationiEXT(GLuint buf, GLenum mode)
{
    LOAD_GLES(glBlendEquationiEXT);
    gles_glBlendEquationiEXT(buf, mode);
}

void glBlendEquationiEXT(GLuint buf, GLenum mode) AliasExport("gl4es_glBlendEquationiEXT");
void glBlendEquationi(GLuint buf, GLenum mode) AliasExport("gl4es_glBlendEquationiEXT");

typedef void (*glBlendFunciEXT_PTR)(GLuint buf, GLenum src, GLenum dst);
void gl4es_glBlendFunciEXT(GLuint buf, GLenum src, GLenum dst)
{
    LOAD_GLES(glBlendFunciEXT);
    gles_glBlendFunciEXT(buf, src, dst);
}

void glBlendFunciEXT(GLuint buf, GLenum src, GLenum dst) AliasExport("gl4es_glBlendFunciEXT");
void glBlendFunci(GLuint buf, GLenum src, GLenum dst) AliasExport("gl4es_glBlendFunciEXT");

typedef void (*glBlendFuncSeparateiEXT_PTR)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
void gl4es_glBlendFuncSeparateiEXT(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
    LOAD_GLES(glBlendFuncSeparateiEXT);
    gles_glBlendFuncSeparateiEXT(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void glBlendFuncSeparateiEXT(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) AliasExport("gl4es_glBlendFuncSeparateiEXT");
void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) AliasExport("gl4es_glBlendFuncSeparateiEXT");


typedef void (*glColorMaskiEXT_PTR)(GLuint buf, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
void gl4es_glColorMaskiEXT(GLuint buf, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    LOAD_GLES(glColorMaskiEXT);
    gles_glColorMaskiEXT(buf, r, g, b, a);
}

void glColorMaskiEXT(GLuint buf, GLboolean r, GLboolean g, GLboolean b, GLboolean a) AliasExport("gl4es_glColorMaskiEXT");
void glColorMaski(GLuint buf, GLboolean r, GLboolean g, GLboolean b, GLboolean a) AliasExport("gl4es_glColorMaskiEXT");


typedef GLboolean (*glIsEnablediEXT_PTR)(GLenum target, GLuint index);
GLboolean gl4es_glIsEnablediEXT(GLenum target, GLuint index)
{
    LOAD_GLES(glIsEnablediEXT);
    return gles_glIsEnablediEXT(target, index);
}

void glIsEnablediEXT(GLenum target, GLuint index) AliasExport("gl4es_glIsEnablediEXT");
void glIsEnabledi(GLenum target, GLuint index) AliasExport("gl4es_glIsEnablediEXT");


typedef void (*glClipControlEXT_PTR)(GLenum origin, GLenum depthMode);
GLboolean gl4es_glClipControlEXT(GLenum origin, GLenum depthMode)
{
    LOAD_GLES(glClipControlEXT);
    return gles_glClipControlEXT(GLenum origin, GLenum depthMode);
}

void glClipControlEXT(GLenum origin, GLenum depthMode) AliasExport("gl4es_glClipControlEXT");




