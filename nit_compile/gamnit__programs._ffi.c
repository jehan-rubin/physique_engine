/*
	Extern implementation of Nit module programs
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "gamnit__programs._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
void gamnit__programs___Uniform_uniform_1i___impl( Uniform self, long index, long x )
{
#line 153 "../../lib/gamnit/programs.nit"

 glUniform1i(index, x); }
void gamnit__programs___UniformMat4_uniform_matrix_4f___impl( UniformMat4 self, long index, long count, int transpose,  GLfloat*  data )
{
#line 223 "../../lib/gamnit/programs.nit"


		glUniformMatrix4fv(index, count, transpose, data);
	}
 GLfloat*  gamnit__programs___new_NativeGLfloatArray_matrix___impl(  )
{
#line 535 "../../lib/gamnit/programs.nit"

 return malloc(4*4*sizeof(GLfloat)); }
double gamnit__programs___NativeGLfloatArray_matrix_get___impl(  GLfloat*  self, long x, long y )
{
#line 548 "../../lib/gamnit/programs.nit"

 return self[y*4+x]; }
void gamnit__programs___NativeGLfloatArray_matrix_set___impl(  GLfloat*  self, long x, long y, double val )
{
#line 551 "../../lib/gamnit/programs.nit"

 self[y*4+x] = val; }
