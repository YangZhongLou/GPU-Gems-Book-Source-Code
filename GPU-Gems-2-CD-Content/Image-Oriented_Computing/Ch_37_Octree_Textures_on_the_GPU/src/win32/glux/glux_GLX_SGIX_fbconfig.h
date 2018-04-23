// --------------------------------------------------------
#ifndef WIN32

// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:33 2004)
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

#ifndef __GLUX_GLX_SGIX_fbconfig__
#define __GLUX_GLX_SGIX_fbconfig__

GLUX_NEW_PLUGIN(GLX_SGIX_fbconfig);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GLX_WINDOW_BIT_SGIX
#  define GLX_WINDOW_BIT_SGIX 0x00000001
#endif
#ifndef GLX_PIXMAP_BIT_SGIX
#  define GLX_PIXMAP_BIT_SGIX 0x00000002
#endif
#ifndef GLX_RGBA_BIT_SGIX
#  define GLX_RGBA_BIT_SGIX 0x00000001
#endif
#ifndef GLX_COLOR_INDEX_BIT_SGIX
#  define GLX_COLOR_INDEX_BIT_SGIX 0x00000002
#endif
#ifndef GLX_DRAWABLE_TYPE_SGIX
#  define GLX_DRAWABLE_TYPE_SGIX 0x8010
#endif
#ifndef GLX_RENDER_TYPE_SGIX
#  define GLX_RENDER_TYPE_SGIX 0x8011
#endif
#ifndef GLX_X_RENDERABLE_SGIX
#  define GLX_X_RENDERABLE_SGIX 0x8012
#endif
#ifndef GLX_FBCONFIG_ID_SGIX
#  define GLX_FBCONFIG_ID_SGIX 0x8013
#endif
#ifndef GLX_RGBA_TYPE_SGIX
#  define GLX_RGBA_TYPE_SGIX 0x8014
#endif
#ifndef GLX_COLOR_INDEX_TYPE_SGIX
#  define GLX_COLOR_INDEX_TYPE_SGIX 0x8015
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glXGetFBConfigAttribSGIX
typedef int (APIENTRYP PFNXGLUXGETFBCONFIGATTRIBSGIXPROC) (Display *dpy, GLXFBConfigSGIX config, int attribute, int *value);
#endif
#ifndef __GLUX__GLFCT_glXChooseFBConfigSGIX
typedef GLXFBConfigSGIX * (APIENTRYP PFNXGLUXCHOOSEFBCONFIGSGIXPROC) (Display *dpy, int screen, int *attrib_list, int *nelements);
#endif
#ifndef __GLUX__GLFCT_glXCreateGLXPixmapWithConfigSGIX
typedef GLXPixmap (APIENTRYP PFNXGLUXCREATEGLXPIXMAPWITHCONFIGSGIXPROC) (Display *dpy, GLXFBConfigSGIX config, Pixmap pixmap);
#endif
#ifndef __GLUX__GLFCT_glXCreateContextWithConfigSGIX
typedef GLXContext (APIENTRYP PFNXGLUXCREATECONTEXTWITHCONFIGSGIXPROC) (Display *dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);
#endif
#ifndef __GLUX__GLFCT_glXGetVisualFromFBConfigSGIX
typedef XVisualInfo * (APIENTRYP PFNXGLUXGETVISUALFROMFBCONFIGSGIXPROC) (Display *dpy, GLXFBConfigSGIX config);
#endif
#ifndef __GLUX__GLFCT_glXGetFBConfigFromVisualSGIX
typedef GLXFBConfigSGIX (APIENTRYP PFNXGLUXGETFBCONFIGFROMVISUALSGIXPROC) (Display *dpy, XVisualInfo *vis);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glXGetFBConfigAttribSGIX
extern PFNXGLUXGETFBCONFIGATTRIBSGIXPROC glXGetFBConfigAttribSGIX;
#endif
#ifndef __GLUX__GLFCT_glXChooseFBConfigSGIX
extern PFNXGLUXCHOOSEFBCONFIGSGIXPROC glXChooseFBConfigSGIX;
#endif
#ifndef __GLUX__GLFCT_glXCreateGLXPixmapWithConfigSGIX
extern PFNXGLUXCREATEGLXPIXMAPWITHCONFIGSGIXPROC glXCreateGLXPixmapWithConfigSGIX;
#endif
#ifndef __GLUX__GLFCT_glXCreateContextWithConfigSGIX
extern PFNXGLUXCREATECONTEXTWITHCONFIGSGIXPROC glXCreateContextWithConfigSGIX;
#endif
#ifndef __GLUX__GLFCT_glXGetVisualFromFBConfigSGIX
extern PFNXGLUXGETVISUALFROMFBCONFIGSGIXPROC glXGetVisualFromFBConfigSGIX;
#endif
#ifndef __GLUX__GLFCT_glXGetFBConfigFromVisualSGIX
extern PFNXGLUXGETFBCONFIGFROMVISUALSGIXPROC glXGetFBConfigFromVisualSGIX;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------
