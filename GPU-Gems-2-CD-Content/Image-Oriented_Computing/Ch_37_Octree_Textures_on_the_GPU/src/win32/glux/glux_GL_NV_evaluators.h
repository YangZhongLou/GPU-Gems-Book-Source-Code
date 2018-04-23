
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:34 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_NV_evaluators__
#define __GLUX_GL_NV_evaluators__

GLUX_NEW_PLUGIN(GL_NV_evaluators);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_EVAL_2D_NV
#  define GL_EVAL_2D_NV 0x86C0
#endif
#ifndef GL_EVAL_TRIANGULAR_2D_NV
#  define GL_EVAL_TRIANGULAR_2D_NV 0x86C1
#endif
#ifndef GL_MAP_TESSELLATION_NV
#  define GL_MAP_TESSELLATION_NV 0x86C2
#endif
#ifndef GL_MAP_ATTRIB_U_ORDER_NV
#  define GL_MAP_ATTRIB_U_ORDER_NV 0x86C3
#endif
#ifndef GL_MAP_ATTRIB_V_ORDER_NV
#  define GL_MAP_ATTRIB_V_ORDER_NV 0x86C4
#endif
#ifndef GL_EVAL_FRACTIONAL_TESSELLATION_NV
#  define GL_EVAL_FRACTIONAL_TESSELLATION_NV 0x86C5
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB0_NV
#  define GL_EVAL_VERTEX_ATTRIB0_NV 0x86C6
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB1_NV
#  define GL_EVAL_VERTEX_ATTRIB1_NV 0x86C7
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB2_NV
#  define GL_EVAL_VERTEX_ATTRIB2_NV 0x86C8
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB3_NV
#  define GL_EVAL_VERTEX_ATTRIB3_NV 0x86C9
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB4_NV
#  define GL_EVAL_VERTEX_ATTRIB4_NV 0x86CA
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB5_NV
#  define GL_EVAL_VERTEX_ATTRIB5_NV 0x86CB
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB6_NV
#  define GL_EVAL_VERTEX_ATTRIB6_NV 0x86CC
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB7_NV
#  define GL_EVAL_VERTEX_ATTRIB7_NV 0x86CD
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB8_NV
#  define GL_EVAL_VERTEX_ATTRIB8_NV 0x86CE
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB9_NV
#  define GL_EVAL_VERTEX_ATTRIB9_NV 0x86CF
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB10_NV
#  define GL_EVAL_VERTEX_ATTRIB10_NV 0x86D0
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB11_NV
#  define GL_EVAL_VERTEX_ATTRIB11_NV 0x86D1
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB12_NV
#  define GL_EVAL_VERTEX_ATTRIB12_NV 0x86D2
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB13_NV
#  define GL_EVAL_VERTEX_ATTRIB13_NV 0x86D3
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB14_NV
#  define GL_EVAL_VERTEX_ATTRIB14_NV 0x86D4
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB15_NV
#  define GL_EVAL_VERTEX_ATTRIB15_NV 0x86D5
#endif
#ifndef GL_MAX_MAP_TESSELLATION_NV
#  define GL_MAX_MAP_TESSELLATION_NV 0x86D6
#endif
#ifndef GL_MAX_RATIONAL_EVAL_ORDER_NV
#  define GL_MAX_RATIONAL_EVAL_ORDER_NV 0x86D7
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glMapControlPointsNV
typedef void (APIENTRYP PFNGLUXMAPCONTROLPOINTSNVPROC) (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid *points);
#endif
#ifndef __GLUX__GLFCT_glMapParameterivNV
typedef void (APIENTRYP PFNGLUXMAPPARAMETERIVNVPROC) (GLenum target, GLenum pname, const GLint *params);
#endif
#ifndef __GLUX__GLFCT_glMapParameterfvNV
typedef void (APIENTRYP PFNGLUXMAPPARAMETERFVNVPROC) (GLenum target, GLenum pname, const GLfloat *params);
#endif
#ifndef __GLUX__GLFCT_glGetMapControlPointsNV
typedef void (APIENTRYP PFNGLUXGETMAPCONTROLPOINTSNVPROC) (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid *points);
#endif
#ifndef __GLUX__GLFCT_glGetMapParameterivNV
typedef void (APIENTRYP PFNGLUXGETMAPPARAMETERIVNVPROC) (GLenum target, GLenum pname, GLint *params);
#endif
#ifndef __GLUX__GLFCT_glGetMapParameterfvNV
typedef void (APIENTRYP PFNGLUXGETMAPPARAMETERFVNVPROC) (GLenum target, GLenum pname, GLfloat *params);
#endif
#ifndef __GLUX__GLFCT_glGetMapAttribParameterivNV
typedef void (APIENTRYP PFNGLUXGETMAPATTRIBPARAMETERIVNVPROC) (GLenum target, GLuint index, GLenum pname, GLint *params);
#endif
#ifndef __GLUX__GLFCT_glGetMapAttribParameterfvNV
typedef void (APIENTRYP PFNGLUXGETMAPATTRIBPARAMETERFVNVPROC) (GLenum target, GLuint index, GLenum pname, GLfloat *params);
#endif
#ifndef __GLUX__GLFCT_glEvalMapsNV
typedef void (APIENTRYP PFNGLUXEVALMAPSNVPROC) (GLenum target, GLenum mode);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glMapControlPointsNV
extern PFNGLUXMAPCONTROLPOINTSNVPROC glMapControlPointsNV;
#endif
#ifndef __GLUX__GLFCT_glMapParameterivNV
extern PFNGLUXMAPPARAMETERIVNVPROC glMapParameterivNV;
#endif
#ifndef __GLUX__GLFCT_glMapParameterfvNV
extern PFNGLUXMAPPARAMETERFVNVPROC glMapParameterfvNV;
#endif
#ifndef __GLUX__GLFCT_glGetMapControlPointsNV
extern PFNGLUXGETMAPCONTROLPOINTSNVPROC glGetMapControlPointsNV;
#endif
#ifndef __GLUX__GLFCT_glGetMapParameterivNV
extern PFNGLUXGETMAPPARAMETERIVNVPROC glGetMapParameterivNV;
#endif
#ifndef __GLUX__GLFCT_glGetMapParameterfvNV
extern PFNGLUXGETMAPPARAMETERFVNVPROC glGetMapParameterfvNV;
#endif
#ifndef __GLUX__GLFCT_glGetMapAttribParameterivNV
extern PFNGLUXGETMAPATTRIBPARAMETERIVNVPROC glGetMapAttribParameterivNV;
#endif
#ifndef __GLUX__GLFCT_glGetMapAttribParameterfvNV
extern PFNGLUXGETMAPATTRIBPARAMETERFVNVPROC glGetMapAttribParameterfvNV;
#endif
#ifndef __GLUX__GLFCT_glEvalMapsNV
extern PFNGLUXEVALMAPSNVPROC glEvalMapsNV;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
