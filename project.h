#ifndef IGL_PROJECT_H
#define IGL_PROJECT_H
#include "igl_inline.h"
namespace igl
{
  // Wrapper for gluProject that uses the current GL_MODELVIEW_MATRIX,
  // GL_PROJECTION_MATRIX, and GL_VIEWPORT
  // Inputs:
  //   obj*  3D objects' x, y, and z coordinates respectively
  // Outputs:
  //   win*  pointers to screen space x, y, and z coordinates respectively
  // Returns return value of gluProject call
  IGL_INLINE int project(
    const double objX,
    const double objY,
    const double objZ,
    double* winX,
    double* winY,
    double* winZ);
}

#ifdef IGL_HEADER_ONLY
#  include "project.cpp"
#endif

#endif