
#include "../glx/hardext.h"
#include "gles.h"
#include "init.h"
#include "loader.h"

// glClipControl
typedef void (*glClipControlEXT_PTR)(GLenum origin, GLenum depthMode);
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


// Multi render targets
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

bool glIsEnablediEXT(GLenum target, GLuint index) AliasExport("gl4es_glIsEnablediEXT");
bool glIsEnabledi(GLenum target, GLuint index) AliasExport("gl4es_glIsEnablediEXT");

// Uniform buffer objects
typedef void (*glGetUniformBlockIndex_PTR) (GLuint program, const GLchar* name);
void gl4es_glGetUniformBlockIndex(GLuint program, const GLchar* name)
{
    LOAD_GLES(glGetUniformBlockIndex);
    gles_glGetUniformBlockIndex(program, name);
}
void glGetUniformBlockIndex(GLuint program, const GLchar* name) AliasExport("gl4es_glGetUniformBlockIndex");

typedef void (*glGetUniformIndices_PTR) (GLuint program, GLsizei uniformCount, const GLchar* const* uniformNames, GLuint* uniformIndices);
void gl4es_glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar* const* uniformNames, GLuint* uniformIndices)
{
    LOAD_GLES(glGetUniformIndices);
    gles_glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}
void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar* const* uniformNames, GLuint* uniformIndices) AliasExport("gl4es_glGetUniformIndices");

typedef void (*glGetActiveUniformsiv_PTR) (GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params);
void gl4es_glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params)
{
    LOAD_GLES(glGetActiveUniformsiv);
    gles_glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}
void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params) AliasExport("gl4es_glGetActiveUniformsiv");

typedef void (*glGetActiveUniformBlockiv_PTR) (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params);
void gl4es_glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params)
{
    LOAD_GLES(glGetActiveUniformBlockiv);
    gles_glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}
void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params) AliasExport("gl4es_glGetActiveUniformBlockiv");

typedef void (*glGetActiveUniformBlockName_PTR) (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName);
void gl4es_glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName)
{
    LOAD_GLES(glGetActiveUniformBlockName);
    gles_glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}
void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName) AliasExport("gl4es_glGetActiveUniformBlockName");

typedef void (*glUniformBlockBinding_PTR) (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
void gl4es_glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
    LOAD_GLES(glUniformBlockBinding);
    return gles_glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}
void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) AliasExport("gl4es_glUniformBlockBinding");


// disjoint_timer_query
typedef void (*glGenQueriesEXT_PTR) (GLsizei n, GLuint *ids);
typedef void (*glDeleteQueriesEXT_PTR) (GLsizei n, const GLuint *ids);
typedef GLboolean (*glIsQueryEXT_PTR) (GLuint id);
typedef void (*glBeginQueryEXT_PTR) (GLenum target, GLuint id);
typedef void (*GL_APIENTRY glEndQueryEXT_PTR) (GLenum target);
typedef void (*GL_APIENTRY glGetQueryivEXT_PTR) (GLenum target, GLenum pname, GLint *params);
typedef void (*GL_APIENTRY glGetQueryObjectuivEXT_PTR) (GLuint id, GLenum pname, GLuint *params);
//typedef void (*GL_APIENTRY glGetInteger64vEXT_PTR) (GLenum pname, GLint64 *data);

void gl4es_glGenQueriesEXT(GLsizei n, GLuint *ids)
{
    LOAD_GLES(glGenQueriesEXT);
    gles_glGenQueriesEXT(n, ids);
}
void glGenQueriesEXT(GLsizei n, GLuint *ids) AliasExport("gl4es_glGenQueriesEXT");

void gl4es_glDeleteQueriesEXT(GLsizei n, const GLuint *ids)
{
    LOAD_GLES(glDeleteQueriesEXT);
    gles_glDeleteQueriesEXT(n, ids);
}
void glDeleteQueriesEXT(GLsizei n, const GLuint *ids) AliasExport("gl4es_glDeleteQueriesEXT");

GLboolean gl4es_glIsQueryEXT(GLuint id)
{
    LOAD_GLES(glIsQueryEXT);
    return gles_glIsQueryEXT(id);
}
GLboolean glIsQueryEXT(GLuint id) AliasExport("gl4es_glIsQueryEXT");

void gl4es_glBeginQueryEXT(GLenum target, GLuint id)
{
    LOAD_GLES(glBeginQueryEXT);
    gles_glBeginQueryEXT(target, id);
}
void glBeginQueryEXT(GLenum target, GLuint id) AliasExport("gl4es_glBeginQueryEXT");

void gl4es_glEndQueryEXT(GLenum target)
{
    LOAD_GLES(glEndQueryEXT);
    gles_glEndQueryEXT(target);
}
void glEndQueryEXT(GLenum target) AliasExport("gl4es_glEndQueryEXT");

void gl4es_glGetQueryivEXT(GLenum target, GLenum pname, GLint *params)
{	
    LOAD_GLES(glGetQueryivEXT);
    gles_glGetQueryivEXT(target, pname, params);
}
void glGetQueryivEXT(GLenum target, GLenum pname, GLint *params) AliasExport("gl4es_glGetQueryivEXT");

void gl4es_glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint *params)
{
    LOAD_GLES(glGetQueryObjectuivEXT);
    gles_glGetQueryObjectuivEXT(id, pname, params);
}
void glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint *params) AliasExport("gl4es_glGetQueryObjectuivEXT");




