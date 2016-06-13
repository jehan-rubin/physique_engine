/*
	Extern implementation of Nit module glesv2
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "glesv2._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define String_to_cstring glesv2___String_to_cstring
GLuint glesv2___new_GLProgram___impl(  )
{
#line 50 "../../lib/glesv2/glesv2.nit"

 return glCreateProgram(); }
void glesv2___GLProgram_bind_attrib_location___impl( GLuint self, long index, String name )
{
#line 53 "../../lib/glesv2/glesv2.nit"


		GLchar *c_name = String_to_cstring(name);
		glBindAttribLocation(self, index, c_name);
	}
long glesv2___GLProgram_attrib_location___impl( GLuint self, String name )
{
#line 61 "../../lib/glesv2/glesv2.nit"


		GLchar *c_name = String_to_cstring(name);
		return glGetAttribLocation(self, c_name);
	}
long glesv2___GLProgram_uniform_location___impl( GLuint self, String name )
{
#line 69 "../../lib/glesv2/glesv2.nit"


		GLchar *c_name = String_to_cstring(name);
		return glGetUniformLocation(self, c_name);
	}
void glesv2___GLProgram_active_attrib_name_native___impl( GLuint self, long index, long max_size, char* name )
{
#line 113 "../../lib/glesv2/glesv2.nit"


		// We get more values than we need, for compatibility. At least the
		// NVidia driver tries to fill them even if NULL.

		int size;
		GLenum type;
		glGetActiveAttrib(self, index, max_size, NULL, &size, &type, name);
	}
long glesv2___GLProgram_active_attrib_size___impl( GLuint self, long index )
{
#line 123 "../../lib/glesv2/glesv2.nit"


		int size;
		GLenum type;
		glGetActiveAttrib(self, index, 0, NULL, &size, &type, NULL);
		return size;
	}
 GLenum  glesv2___GLProgram_active_attrib_type___impl( GLuint self, long index )
{
#line 133 "../../lib/glesv2/glesv2.nit"


		int size;
		GLenum type;
		glGetActiveAttrib(self, index, 0, NULL, &size, &type, NULL);
		return type;
	}
void glesv2___GLProgram_active_uniform_name_native___impl( GLuint self, long index, long max_size, char* name )
{
#line 149 "../../lib/glesv2/glesv2.nit"


		int size;
		GLenum type;
		glGetActiveUniform(self, index, max_size, NULL, &size, &type, name);
	}
long glesv2___GLProgram_active_uniform_size___impl( GLuint self, long index )
{
#line 156 "../../lib/glesv2/glesv2.nit"


		int size;
		GLenum type;
		glGetActiveUniform(self, index, 0, NULL, &size, &type, NULL);
		return size;
	}
 GLenum  glesv2___GLProgram_active_uniform_type___impl( GLuint self, long index )
{
#line 166 "../../lib/glesv2/glesv2.nit"


		int size;
		GLenum type = 0;
		glGetActiveUniform(self, index, 0, NULL, &size, &type, NULL);
		return type;
	}
char* glesv2___GLShader_source_native___impl( GLuint self, long size )
{
#line 235 "../../lib/glesv2/glesv2.nit"


		GLchar *code = malloc(size);
		glGetShaderSource(self, size, NULL, code);
		return code;
	}
GLuint glesv2___new_GLFragmentShader___impl(  )
{
#line 324 "../../lib/glesv2/glesv2.nit"

 return glCreateShader(GL_FRAGMENT_SHADER); }
GLuint glesv2___new_GLVertexShader___impl(  )
{
#line 334 "../../lib/glesv2/glesv2.nit"

 return glCreateShader(GL_VERTEX_SHADER); }
void glesv2___VertexArray_attrib_pointer_intern___impl( VertexArray self, long index, long count,  GLfloat*  array )
{
#line 357 "../../lib/glesv2/glesv2.nit"


		glVertexAttribPointer(index, count, GL_FLOAT, GL_FALSE, 0, array);
	}
 GLfloat*  glesv2___new_NativeGLfloatArray___impl( long size )
{
#line 456 "../../lib/glesv2/glesv2.nit"

 return calloc(size, sizeof(GLfloat)); }
double glesv2___NativeGLfloatArray__index___impl(  GLfloat*  self, long index )
{
#line 458 "../../lib/glesv2/glesv2.nit"

 return self[index]; }
void glesv2___NativeGLfloatArray__index_assign___impl(  GLfloat*  self, long index, double val )
{
#line 459 "../../lib/glesv2/glesv2.nit"

 self[index] = val; }
 GLfloat*  glesv2___NativeGLfloatArray__plus___impl(  GLfloat*  self, long offset )
{
#line 461 "../../lib/glesv2/glesv2.nit"

 return self + offset; }
long glesv2___GLEnum_hash___impl(  GLenum  self )
{
#line 467 "../../lib/glesv2/glesv2.nit"

 return self; }
void glesv2___GLCap_enable_native___impl( GLCap self, long cap )
{
#line 672 "../../lib/glesv2/glesv2.nit"

 glEnable(cap); }
void glesv2___GLCap_disable_native___impl( GLCap self, long cap )
{
#line 676 "../../lib/glesv2/glesv2.nit"

 glDisable(cap); }
GLuint glesv2___Sys_glCreateProgram___impl( Sys self )
{
#line 175 "../../lib/glesv2/glesv2.nit"

 return glCreateProgram(); }
void glesv2___Sys_glUseProgram___impl( Sys self, GLuint program )
{
#line 178 "../../lib/glesv2/glesv2.nit"

 glUseProgram(program); }
void glesv2___Sys_glLinkProgram___impl( Sys self, GLuint program )
{
#line 181 "../../lib/glesv2/glesv2.nit"

 glLinkProgram(program); }
void glesv2___Sys_glValidateProgram___impl( Sys self, GLuint program )
{
#line 184 "../../lib/glesv2/glesv2.nit"

 glValidateProgram(program); }
void glesv2___Sys_glDeleteProgram___impl( Sys self, GLuint program )
{
#line 187 "../../lib/glesv2/glesv2.nit"

 glDeleteProgram(program); }
int glesv2___Sys_glIsProgram___impl( Sys self, GLuint name )
{
#line 190 "../../lib/glesv2/glesv2.nit"

 return glIsProgram(name); }
void glesv2___Sys_glAttachShader___impl( Sys self, GLuint program, GLuint shader )
{
#line 193 "../../lib/glesv2/glesv2.nit"

 glAttachShader(program, shader); }
void glesv2___Sys_glDetachShader___impl( Sys self, GLuint program, GLuint shader )
{
#line 196 "../../lib/glesv2/glesv2.nit"

 glDetachShader(program, shader); }
long glesv2___Sys_glGetProgramiv___impl( Sys self, GLuint program,  GLenum  pname )
{
#line 199 "../../lib/glesv2/glesv2.nit"


	int value;
	glGetProgramiv(program, pname, &value);
	return value;
}
long glesv2___Sys_native_glGetProgramInfoLog___impl( Sys self, GLuint program, long buf_size, char* buf )
{
#line 215 "../../lib/glesv2/glesv2.nit"


	int length;
	glGetProgramInfoLog(program, buf_size, &length, buf);
	return length;
}
long glesv2___Sys_glGetShaderiv___impl( Sys self, GLuint shader,  GLenum  pname )
{
#line 249 "../../lib/glesv2/glesv2.nit"


	int val;
	glGetShaderiv(shader, pname, &val);
	return val;
}
 GLenum  glesv2___Sys_gl_INFO_LOG_LENGTH___impl( Sys self )
{
#line 260 "../../lib/glesv2/glesv2.nit"

 return GL_INFO_LOG_LENGTH; }
 GLenum  glesv2___Sys_gl_DELETE_STATUS___impl( Sys self )
{
#line 261 "../../lib/glesv2/glesv2.nit"

 return GL_DELETE_STATUS; }
 GLenum  glesv2___Sys_gl_SHADER_TYPE___impl( Sys self )
{
#line 263 "../../lib/glesv2/glesv2.nit"

 return GL_SHADER_TYPE; }
 GLenum  glesv2___Sys_gl_COMPILE_STATUS___impl( Sys self )
{
#line 264 "../../lib/glesv2/glesv2.nit"

 return GL_COMPILE_STATUS; }
 GLenum  glesv2___Sys_gl_SHADER_SOURCE_LENGTH___impl( Sys self )
{
#line 265 "../../lib/glesv2/glesv2.nit"

 return GL_SHADER_SOURCE_LENGTH; }
 GLenum  glesv2___Sys_gl_ACTIVE_ATTRIBUTES___impl( Sys self )
{
#line 267 "../../lib/glesv2/glesv2.nit"

 return GL_ACTIVE_ATTRIBUTES; }
 GLenum  glesv2___Sys_gl_ACTIVE_ATTRIBUTE_MAX_LENGTH___impl( Sys self )
{
#line 268 "../../lib/glesv2/glesv2.nit"

 return GL_ACTIVE_ATTRIBUTE_MAX_LENGTH; }
 GLenum  glesv2___Sys_gl_ACTIVE_UNIFORMS___impl( Sys self )
{
#line 269 "../../lib/glesv2/glesv2.nit"

 return GL_ACTIVE_UNIFORMS; }
 GLenum  glesv2___Sys_gl_ACTIVE_UNIFORM_MAX_LENGTH___impl( Sys self )
{
#line 270 "../../lib/glesv2/glesv2.nit"

 return GL_ACTIVE_UNIFORM_MAX_LENGTH; }
 GLenum  glesv2___Sys_gl_ATTACHED_SHADERS___impl( Sys self )
{
#line 271 "../../lib/glesv2/glesv2.nit"

 return GL_ATTACHED_SHADERS; }
 GLenum  glesv2___Sys_gl_LINK_STATUS___impl( Sys self )
{
#line 272 "../../lib/glesv2/glesv2.nit"

 return GL_LINK_STATUS; }
 GLenum  glesv2___Sys_gl_VALIDATE_STATUS___impl( Sys self )
{
#line 273 "../../lib/glesv2/glesv2.nit"

 return GL_VALIDATE_STATUS; }
long glesv2___Sys_native_glGetShaderInfoLog___impl( Sys self, GLuint shader, long buf_size, char* buffer )
{
#line 284 "../../lib/glesv2/glesv2.nit"


	int length;
	glGetShaderInfoLog(shader, buf_size, &length, buffer);
	return length;
}
 GLenum  glesv2___Sys_gl_VERTEX_SHADER___impl( Sys self )
{
#line 295 "../../lib/glesv2/glesv2.nit"

 return GL_VERTEX_SHADER; }
 GLenum  glesv2___Sys_gl_FRAGMENT_SHADER___impl( Sys self )
{
#line 296 "../../lib/glesv2/glesv2.nit"

 return GL_FRAGMENT_SHADER; }
GLuint glesv2___Sys_glCreateShader___impl( Sys self,  GLenum  shader_type )
{
#line 299 "../../lib/glesv2/glesv2.nit"


	return glCreateShader(shader_type);
}
void glesv2___Sys_glShaderSource___impl( Sys self, GLuint shader, char* code )
{
#line 304 "../../lib/glesv2/glesv2.nit"


	glShaderSource(shader, 1, (GLchar const **)&code, NULL);
}
void glesv2___Sys_glCompileShader___impl( Sys self, GLuint shader )
{
#line 309 "../../lib/glesv2/glesv2.nit"

 glCompileShader(shader); }
void glesv2___Sys_glDeleteShader___impl( Sys self, GLuint shader )
{
#line 312 "../../lib/glesv2/glesv2.nit"

 glDeleteShader(shader); }
int glesv2___Sys_glIsShader___impl( Sys self, GLuint name )
{
#line 315 "../../lib/glesv2/glesv2.nit"

 return glIsShader(name); }
void glesv2___Sys_glEnableVertexAttribArray___impl( Sys self, long index )
{
#line 369 "../../lib/glesv2/glesv2.nit"

 glEnableVertexAttribArray(index); }
void glesv2___Sys_glDisableVertexAttribArray___impl( Sys self, long index )
{
#line 372 "../../lib/glesv2/glesv2.nit"

 glDisableVertexAttribArray(index); }
void glesv2___Sys_glDrawArrays___impl( Sys self,  GLenum  mode, long from, long count )
{
#line 375 "../../lib/glesv2/glesv2.nit"

 glDrawArrays(mode, from, count); }
void glesv2___Sys_glDrawElements___impl( Sys self,  GLenum  mode, long count,  GLenum  typ, void* indices )
{
#line 378 "../../lib/glesv2/glesv2.nit"


	glDrawElements(mode, count, typ, indices);
}
void glesv2___Sys_glVertexAttribPointer___impl( Sys self, long index, long size,  GLenum  typ, int normalized, long stride,  GLfloat*  array )
{
#line 383 "../../lib/glesv2/glesv2.nit"


	glVertexAttribPointer(index, size, typ, normalized, stride, array);
}
void glesv2___Sys_glVertexAttrib1f___impl( Sys self, long index, double x )
{
#line 388 "../../lib/glesv2/glesv2.nit"

 glVertexAttrib1f(index, x); }
void glesv2___Sys_glVertexAttrib2f___impl( Sys self, long index, double x, double y )
{
#line 391 "../../lib/glesv2/glesv2.nit"

 glVertexAttrib2f(index, x, y); }
void glesv2___Sys_glVertexAttrib3f___impl( Sys self, long index, double x, double y, double z )
{
#line 394 "../../lib/glesv2/glesv2.nit"

 glVertexAttrib3f(index, x, y, z); }
void glesv2___Sys_glVertexAttrib4f___impl( Sys self, long index, double x, double y, double z, double w )
{
#line 397 "../../lib/glesv2/glesv2.nit"

 glVertexAttrib4f(index, x, y, z, w); }
void glesv2___Sys_glUniform1i___impl( Sys self, long index, long x )
{
#line 400 "../../lib/glesv2/glesv2.nit"

 glUniform1i(index, x); }
void glesv2___Sys_glUniform2i___impl( Sys self, long index, long x, long y )
{
#line 403 "../../lib/glesv2/glesv2.nit"

 glUniform2i(index, x, y); }
void glesv2___Sys_glUniform3i___impl( Sys self, long index, long x, long y, long z )
{
#line 406 "../../lib/glesv2/glesv2.nit"

 glUniform3i(index, x, y, z); }
void glesv2___Sys_glUniform4i___impl( Sys self, long index, long x, long y, long z, long w )
{
#line 409 "../../lib/glesv2/glesv2.nit"

 glUniform4i(index, x, y, z, w); }
void glesv2___Sys_glUniform1f___impl( Sys self, long index, double x )
{
#line 412 "../../lib/glesv2/glesv2.nit"

 glUniform1f(index, x); }
void glesv2___Sys_glUniform2f___impl( Sys self, long index, double x, double y )
{
#line 415 "../../lib/glesv2/glesv2.nit"

 glUniform2f(index, x, y); }
void glesv2___Sys_glUniform3f___impl( Sys self, long index, double x, double y, double z )
{
#line 418 "../../lib/glesv2/glesv2.nit"

 glUniform3f(index, x, y, z); }
void glesv2___Sys_glUniform4f___impl( Sys self, long index, double x, double y, double z, double w )
{
#line 421 "../../lib/glesv2/glesv2.nit"

 glUniform4f(index, x, y, z, w); }
 GLenum  glesv2___Sys_glGetError___impl( Sys self )
{
#line 473 "../../lib/glesv2/glesv2.nit"

 return glGetError(); }
 GLenum  glesv2___Sys_gl_NO_ERROR___impl( Sys self )
{
#line 491 "../../lib/glesv2/glesv2.nit"

 return GL_NO_ERROR; }
 GLenum  glesv2___Sys_gl_INVALID_ENUM___impl( Sys self )
{
#line 492 "../../lib/glesv2/glesv2.nit"

 return GL_INVALID_ENUM; }
 GLenum  glesv2___Sys_gl_INVALID_VALUE___impl( Sys self )
{
#line 493 "../../lib/glesv2/glesv2.nit"

 return GL_INVALID_VALUE; }
 GLenum  glesv2___Sys_gl_INVALID_OPERATION___impl( Sys self )
{
#line 494 "../../lib/glesv2/glesv2.nit"

 return GL_INVALID_OPERATION; }
 GLenum  glesv2___Sys_gl_INVALID_FRAMEBUFFER_OPERATION___impl( Sys self )
{
#line 495 "../../lib/glesv2/glesv2.nit"

 return GL_INVALID_FRAMEBUFFER_OPERATION; }
 GLenum  glesv2___Sys_gl_OUT_OF_MEMORY___impl( Sys self )
{
#line 496 "../../lib/glesv2/glesv2.nit"

 return GL_OUT_OF_MEMORY; }
 GLenum  glesv2___Sys_gl_TEXTURE0___impl( Sys self )
{
#line 512 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE0; }
 GLenum  glesv2___Sys_gl_TEXTURE1___impl( Sys self )
{
#line 513 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE1; }
 GLenum  glesv2___Sys_gl_TEXTURE2___impl( Sys self )
{
#line 514 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE2; }
 GLenum  glesv2___Sys_gl_TEXTURE3___impl( Sys self )
{
#line 515 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE3; }
 GLenum  glesv2___Sys_gl_TEXTURE4___impl( Sys self )
{
#line 516 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE4; }
 GLenum  glesv2___Sys_gl_TEXTURE5___impl( Sys self )
{
#line 517 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE5; }
 GLenum  glesv2___Sys_gl_TEXTURE6___impl( Sys self )
{
#line 518 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE6; }
 GLenum  glesv2___Sys_gl_TEXTURE7___impl( Sys self )
{
#line 519 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE7; }
 GLenum  glesv2___Sys_gl_TEXTURE8___impl( Sys self )
{
#line 520 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE8; }
 GLenum  glesv2___Sys_gl_TEXTURE9___impl( Sys self )
{
#line 521 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE9; }
 GLenum  glesv2___Sys_gl_TEXTURE10___impl( Sys self )
{
#line 522 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE10; }
 GLenum  glesv2___Sys_gl_TEXTURE11___impl( Sys self )
{
#line 523 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE11; }
 GLenum  glesv2___Sys_gl_TEXTURE12___impl( Sys self )
{
#line 524 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE12; }
 GLenum  glesv2___Sys_gl_TEXTURE13___impl( Sys self )
{
#line 525 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE13; }
 GLenum  glesv2___Sys_gl_TEXTURE14___impl( Sys self )
{
#line 526 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE14; }
 GLenum  glesv2___Sys_gl_TEXTURE15___impl( Sys self )
{
#line 527 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE15; }
 GLenum  glesv2___Sys_gl_TEXTURE16___impl( Sys self )
{
#line 528 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE16; }
 GLenum  glesv2___Sys_gl_TEXTURE17___impl( Sys self )
{
#line 529 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE17; }
 GLenum  glesv2___Sys_gl_TEXTURE18___impl( Sys self )
{
#line 530 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE18; }
 GLenum  glesv2___Sys_gl_TEXTURE19___impl( Sys self )
{
#line 531 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE19; }
 GLenum  glesv2___Sys_gl_TEXTURE20___impl( Sys self )
{
#line 532 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE20; }
 GLenum  glesv2___Sys_gl_TEXTURE21___impl( Sys self )
{
#line 533 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE21; }
 GLenum  glesv2___Sys_gl_TEXTURE22___impl( Sys self )
{
#line 534 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE22; }
 GLenum  glesv2___Sys_gl_TEXTURE23___impl( Sys self )
{
#line 535 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE23; }
 GLenum  glesv2___Sys_gl_TEXTURE24___impl( Sys self )
{
#line 536 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE24; }
 GLenum  glesv2___Sys_gl_TEXTURE25___impl( Sys self )
{
#line 537 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE25; }
 GLenum  glesv2___Sys_gl_TEXTURE26___impl( Sys self )
{
#line 538 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE26; }
 GLenum  glesv2___Sys_gl_TEXTURE27___impl( Sys self )
{
#line 539 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE27; }
 GLenum  glesv2___Sys_gl_TEXTURE28___impl( Sys self )
{
#line 540 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE28; }
 GLenum  glesv2___Sys_gl_TEXTURE29___impl( Sys self )
{
#line 541 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE29; }
 GLenum  glesv2___Sys_gl_TEXTURE30___impl( Sys self )
{
#line 542 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE30; }
 GLenum  glesv2___Sys_gl_TEXTURE31___impl( Sys self )
{
#line 543 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE31; }
 GLenum  glesv2___Sys_gl_TEXTURE___impl( Sys self, long offset )
{
#line 546 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE0 + offset; }
void glesv2___Sys_native_glGenTextures___impl( Sys self, long n,  int*  textures )
{
#line 558 "../../lib/glesv2/glesv2.nit"


	glGenTextures(n, (GLuint*)textures);
}
void glesv2___Sys_glActiveTexture___impl( Sys self,  GLenum  texture )
{
#line 563 "../../lib/glesv2/glesv2.nit"

 glActiveTexture(texture); }
void glesv2___Sys_glBindTexture___impl( Sys self,  GLenum  target, long texture )
{
#line 566 "../../lib/glesv2/glesv2.nit"


	glBindTexture(target, texture);
}
void glesv2___Sys_native_glDeleteTextures___impl( Sys self, long n,  int*  textures )
{
#line 579 "../../lib/glesv2/glesv2.nit"


	glDeleteTextures(n, (const GLuint *)textures);
}
int glesv2___Sys_glIsTexture___impl( Sys self, long name )
{
#line 584 "../../lib/glesv2/glesv2.nit"

 return glIsTexture(name); }
void glesv2___Sys_glPixelStorei___impl( Sys self,  GLenum  parameter, long val )
{
#line 587 "../../lib/glesv2/glesv2.nit"

 glPixelStorei(parameter, val); }
 GLenum  glesv2___Sys_gl_PACK_ALIGNEMENT___impl( Sys self )
{
#line 595 "../../lib/glesv2/glesv2.nit"

 return GL_PACK_ALIGNMENT; }
 GLenum  glesv2___Sys_gl_UNPACK_ALIGNEMENT___impl( Sys self )
{
#line 598 "../../lib/glesv2/glesv2.nit"

 return GL_UNPACK_ALIGNMENT; }
void glesv2___Sys_glTexImage2D___impl( Sys self,  GLenum  target, long level,  GLenum  internalformat, long width, long height, long border,  GLenum  format,  GLenum  typ, void* data )
{
#line 606 "../../lib/glesv2/glesv2.nit"


	glTexImage2D(target, level, internalformat, width, height, border, format, typ, data);
}
void glesv2___Sys_glTexSubImage2D___impl( Sys self,  GLenum  target, long level, long xoffset, long yoffset, long width, long height, long border,  GLenum  format,  GLenum  typ, void* data )
{
#line 613 "../../lib/glesv2/glesv2.nit"


	glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, typ, data);
}
void glesv2___Sys_glCopyTexImage2D___impl( Sys self,  GLenum  target, long level,  GLenum  internalformat, long x, long y, long width, long height, long border )
{
#line 619 "../../lib/glesv2/glesv2.nit"


	glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}
void glesv2___Sys_glCopyTexSubImage2D___impl( Sys self,  GLenum  target, long level, long xoffset, long yoffset, long x, long y, long width, long height )
{
#line 624 "../../lib/glesv2/glesv2.nit"


	glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}
void glesv2___Sys_glReadPixels___impl( Sys self, long x, long y, long width, long height,  GLenum  format,  GLenum  typ, void* data )
{
#line 629 "../../lib/glesv2/glesv2.nit"


	glReadPixels(x, y, width, height, format, typ, data);
}
 GLenum  glesv2___Sys_gl_NEAREST___impl( Sys self )
{
#line 638 "../../lib/glesv2/glesv2.nit"

 return GL_NEAREST; }
 GLenum  glesv2___Sys_gl_LINEAR___impl( Sys self )
{
#line 639 "../../lib/glesv2/glesv2.nit"

 return GL_LINEAR; }
 GLenum  glesv2___Sys_gl_NEAREST_MIPMAP_NEAREST___impl( Sys self )
{
#line 640 "../../lib/glesv2/glesv2.nit"

 return GL_NEAREST_MIPMAP_NEAREST; }
 GLenum  glesv2___Sys_gl_LINEAR_MIPMAP_NEAREST___impl( Sys self )
{
#line 641 "../../lib/glesv2/glesv2.nit"

 return GL_LINEAR_MIPMAP_NEAREST; }
 GLenum  glesv2___Sys_gl_NEAREST_MIPMAP_NINEAR___impl( Sys self )
{
#line 642 "../../lib/glesv2/glesv2.nit"

 return GL_NEAREST_MIPMAP_LINEAR; }
 GLenum  glesv2___Sys_gl_LINEAR_MIPMAP_LINEAR___impl( Sys self )
{
#line 643 "../../lib/glesv2/glesv2.nit"

 return GL_LINEAR_MIPMAP_LINEAR; }
 GLenum  glesv2___Sys_gl_CLAMP_TO_EDGE___impl( Sys self )
{
#line 644 "../../lib/glesv2/glesv2.nit"

 return GL_CLAMP_TO_EDGE; }
 GLenum  glesv2___Sys_gl_MIRRORED_REPEAT___impl( Sys self )
{
#line 645 "../../lib/glesv2/glesv2.nit"

 return GL_MIRRORED_REPEAT; }
 GLenum  glesv2___Sys_gl_REPEAT___impl( Sys self )
{
#line 646 "../../lib/glesv2/glesv2.nit"

 return GL_REPEAT; }
 GLenum  glesv2___Sys_gl_TEXTURE_2D___impl( Sys self )
{
#line 654 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE_2D; }
 GLenum  glesv2___Sys_gl_TEXTURE_CUBE_MAP___impl( Sys self )
{
#line 657 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE_CUBE_MAP; }
void glesv2___Sys_native_glGenRenderbuffers___impl( Sys self, long n,  int*  renderbuffers )
{
#line 692 "../../lib/glesv2/glesv2.nit"


	glGenRenderbuffers(n, (GLuint *)renderbuffers);
}
int glesv2___Sys_glIsRenderbuffer___impl( Sys self, long name )
{
#line 697 "../../lib/glesv2/glesv2.nit"


	return glIsRenderbuffer(name);
}
void glesv2___Sys_native_glDeleteRenderbuffers___impl( Sys self, long n,  int*  renderbuffers )
{
#line 710 "../../lib/glesv2/glesv2.nit"


	return glDeleteRenderbuffers(n, (const GLuint *)renderbuffers);
}
void glesv2___Sys_glFramebufferRenderbuffer___impl( Sys self,  GLenum  target,  GLenum  attachment,  GLenum  renderbuffertarget, long renderbuffer )
{
#line 716 "../../lib/glesv2/glesv2.nit"


	glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}
void glesv2___Sys_glRenderbufferStorage___impl( Sys self,  GLenum  target,  GLenum  format, long width, long height )
{
#line 721 "../../lib/glesv2/glesv2.nit"


	glRenderbufferStorage(GL_RENDERBUFFER, format, width, height);
}
 GLenum  glesv2___Sys_gl_RGBA4___impl( Sys self )
{
#line 731 "../../lib/glesv2/glesv2.nit"

 return GL_RGBA4; }
 GLenum  glesv2___Sys_gl_RGB565___impl( Sys self )
{
#line 734 "../../lib/glesv2/glesv2.nit"

 return GL_RGB565; }
 GLenum  glesv2___Sys_gl_RGB_A1___impl( Sys self )
{
#line 737 "../../lib/glesv2/glesv2.nit"

 return GL_RGB5_A1; }
 GLenum  glesv2___Sys_gl_DEPTH_COMPNENT16___impl( Sys self )
{
#line 740 "../../lib/glesv2/glesv2.nit"

 return GL_DEPTH_COMPONENT16; }
 GLenum  glesv2___Sys_gl_STENCIL_INDEX8___impl( Sys self )
{
#line 743 "../../lib/glesv2/glesv2.nit"

 return GL_STENCIL_INDEX8; }
 GLenum  glesv2___Sys_gl_COLOR_ATTACHMENT0___impl( Sys self )
{
#line 751 "../../lib/glesv2/glesv2.nit"

 return GL_COLOR_ATTACHMENT0; }
 GLenum  glesv2___Sys_gl_DEPTH_ATTACHMENT___impl( Sys self )
{
#line 754 "../../lib/glesv2/glesv2.nit"

 return GL_DEPTH_ATTACHMENT; }
 GLenum  glesv2___Sys_gl_STENCIL_ATTACHMENT___impl( Sys self )
{
#line 757 "../../lib/glesv2/glesv2.nit"

 return GL_STENCIL_ATTACHMENT; }
void glesv2___Sys_glClearColor___impl( Sys self, double red, double green, double blue, double alpha )
{
#line 800 "../../lib/glesv2/glesv2.nit"


	glClearColor(red, green, blue, alpha);
}
void glesv2___Sys_glClearDepthf___impl( Sys self, double value )
{
#line 805 "../../lib/glesv2/glesv2.nit"

 glClearDepthf(value); }
void glesv2___Sys_glClearStencil___impl( Sys self, long value )
{
#line 808 "../../lib/glesv2/glesv2.nit"

 glClearStencil(value); }
void glesv2___Sys_glClear___impl( Sys self,  GLbitfield  buffer )
{
#line 811 "../../lib/glesv2/glesv2.nit"

 glClear(buffer); }
void glesv2___Sys_glColorMask___impl( Sys self, int red, int green, int blue, int alpha )
{
#line 814 "../../lib/glesv2/glesv2.nit"

 glColorMask(red, green, blue, alpha); }
void glesv2___Sys_glViewport___impl( Sys self, long x, long y, long width, long height )
{
#line 817 "../../lib/glesv2/glesv2.nit"

 glViewport(x, y, width, height); }
void glesv2___Sys_glFinish___impl( Sys self )
{
#line 820 "../../lib/glesv2/glesv2.nit"

 glFinish(); }
void glesv2___Sys_glFlush___impl( Sys self )
{
#line 823 "../../lib/glesv2/glesv2.nit"

 glFlush(); }
void glesv2___Sys_glTexParameteri___impl( Sys self,  GLenum  target,  GLenum  pname,  GLenum  param )
{
#line 826 "../../lib/glesv2/glesv2.nit"


	glTexParameteri(target, pname, param);
}
 GLenum  glesv2___Sys_gl_TEXTURE_MIN_FILTER___impl( Sys self )
{
#line 835 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE_MIN_FILTER; }
 GLenum  glesv2___Sys_gl_TEXTURE_MAG_FILTER___impl( Sys self )
{
#line 836 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE_MAG_FILTER; }
 GLenum  glesv2___Sys_gl_TEXTURE_WRAP_S___impl( Sys self )
{
#line 837 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE_WRAP_S; }
 GLenum  glesv2___Sys_gl_TEXTURE_WRAP_T___impl( Sys self )
{
#line 838 "../../lib/glesv2/glesv2.nit"

 return GL_TEXTURE_WRAP_T; }
void glesv2___Sys_glBindFramebuffer___impl( Sys self,  GLenum  target, long framebuffer )
{
#line 843 "../../lib/glesv2/glesv2.nit"


	glBindFramebuffer(target, framebuffer);
}
 GLenum  glesv2___Sys_gl_FRAMEBUFFER___impl( Sys self )
{
#line 853 "../../lib/glesv2/glesv2.nit"

 return GL_FRAMEBUFFER; }
void glesv2___Sys_glBindRenderbuffer___impl( Sys self,  GLenum  target, long renderbuffer )
{
#line 858 "../../lib/glesv2/glesv2.nit"


	glBindRenderbuffer(target, renderbuffer);
}
 GLenum  glesv2___Sys_gl_RENDERBUFFER___impl( Sys self )
{
#line 868 "../../lib/glesv2/glesv2.nit"

 return GL_RENDERBUFFER; }
void glesv2___Sys_glHint___impl( Sys self,  GLenum  target,  GLenum  mode )
{
#line 871 "../../lib/glesv2/glesv2.nit"


	glHint(target, mode);
}
void glesv2___Sys_glGenerateMipmap___impl( Sys self,  GLenum  target )
{
#line 876 "../../lib/glesv2/glesv2.nit"

 glGenerateMipmap(target); }
void glesv2___Sys_glBindBuffer___impl( Sys self,  GLenum  target, long buffer )
{
#line 879 "../../lib/glesv2/glesv2.nit"

 glBindBuffer(target, buffer); }
 GLenum  glesv2___Sys_gl_ARRAY_BUFFER___impl( Sys self )
{
#line 887 "../../lib/glesv2/glesv2.nit"

 return GL_ARRAY_BUFFER; }
 GLenum  glesv2___Sys_gl_ELEMENT_ARRAY_BUFFER___impl( Sys self )
{
#line 890 "../../lib/glesv2/glesv2.nit"

 return GL_ELEMENT_ARRAY_BUFFER; }
 GLenum  glesv2___Sys_glCheckFramebufferStatus___impl( Sys self,  GLenum  target )
{
#line 893 "../../lib/glesv2/glesv2.nit"


	return glCheckFramebufferStatus(target);
}
 GLenum  glesv2___Sys_gl_FRAMEBUFFER_COMPLETE___impl( Sys self )
{
#line 913 "../../lib/glesv2/glesv2.nit"


	return GL_FRAMEBUFFER_COMPLETE;
}
 GLenum  glesv2___Sys_gl_FRAMEBUFFER_INCOMPLETE_ATTACHMENT___impl( Sys self )
{
#line 918 "../../lib/glesv2/glesv2.nit"


	return GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
}
 GLenum  glesv2___Sys_gl_FRAMEBUFFER_INCOMPLETE_DIMENSIONS___impl( Sys self )
{
#line 923 "../../lib/glesv2/glesv2.nit"


	return GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
}
 GLenum  glesv2___Sys_gl_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT___impl( Sys self )
{
#line 928 "../../lib/glesv2/glesv2.nit"


	return GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
}
 GLenum  glesv2___Sys_gl_FRAMEBUFFER_UNSUPPORTED___impl( Sys self )
{
#line 933 "../../lib/glesv2/glesv2.nit"


	return GL_FRAMEBUFFER_UNSUPPORTED;
}
 GLenum  glesv2___Sys_gl_GENERATE_MIPMAP_HINT___impl( Sys self )
{
#line 943 "../../lib/glesv2/glesv2.nit"

 return GL_GENERATE_MIPMAP_HINT; }
 GLenum  glesv2___Sys_gl_FASTEST___impl( Sys self )
{
#line 951 "../../lib/glesv2/glesv2.nit"

 return GL_FASTEST; }
 GLenum  glesv2___Sys_gl_NICEST___impl( Sys self )
{
#line 954 "../../lib/glesv2/glesv2.nit"

 return GL_NICEST; }
 GLenum  glesv2___Sys_gl_DONT_CARE___impl( Sys self )
{
#line 957 "../../lib/glesv2/glesv2.nit"

 return GL_DONT_CARE; }
void glesv2___Sys_native_glGenFramebuffers___impl( Sys self, long n,  int*  textures )
{
#line 969 "../../lib/glesv2/glesv2.nit"


	glGenFramebuffers(n, (GLuint *)textures);
}
int glesv2___Sys_glIsFramebuffer___impl( Sys self, long name )
{
#line 974 "../../lib/glesv2/glesv2.nit"


	return glIsFramebuffer(name);
}
void glesv2___Sys_native_glDeleteFramebuffers___impl( Sys self, long n,  int*  framebuffers )
{
#line 987 "../../lib/glesv2/glesv2.nit"


	return glDeleteFramebuffers(n, (const GLuint *)framebuffers);
}
void glesv2___Sys_glFramebufferTexture2D___impl( Sys self,  GLenum  target,  GLenum  attachment,  GLenum  texture_target, long texture, long level )
{
#line 993 "../../lib/glesv2/glesv2.nit"


	glFramebufferTexture2D(target, attachment, texture_target, texture, level);
}
 GLenum  glesv2___Sys_gl_FLOAT___impl( Sys self )
{
#line 1054 "../../lib/glesv2/glesv2.nit"

 return GL_FLOAT; }
 GLenum  glesv2___Sys_gl_FLOAT_VEC2___impl( Sys self )
{
#line 1055 "../../lib/glesv2/glesv2.nit"

 return GL_FLOAT_VEC2; }
 GLenum  glesv2___Sys_gl_FLOAT_VEC3___impl( Sys self )
{
#line 1056 "../../lib/glesv2/glesv2.nit"

 return GL_FLOAT_VEC3; }
 GLenum  glesv2___Sys_gl_FLOAT_VEC4___impl( Sys self )
{
#line 1057 "../../lib/glesv2/glesv2.nit"

 return GL_FLOAT_VEC4; }
 GLenum  glesv2___Sys_gl_FLOAT_MAT2___impl( Sys self )
{
#line 1058 "../../lib/glesv2/glesv2.nit"

 return GL_FLOAT_MAT2; }
 GLenum  glesv2___Sys_gl_FLOAT_MAT3___impl( Sys self )
{
#line 1059 "../../lib/glesv2/glesv2.nit"

 return GL_FLOAT_MAT3; }
 GLenum  glesv2___Sys_gl_FLOAT_MAT4___impl( Sys self )
{
#line 1060 "../../lib/glesv2/glesv2.nit"

 return GL_FLOAT_MAT4; }
 GLenum  glesv2___Sys_gl_BYTE___impl( Sys self )
{
#line 1062 "../../lib/glesv2/glesv2.nit"

 return GL_BYTE; }
 GLenum  glesv2___Sys_gl_UNSIGNED_BYTE___impl( Sys self )
{
#line 1063 "../../lib/glesv2/glesv2.nit"

 return GL_UNSIGNED_BYTE; }
 GLenum  glesv2___Sys_gl_SHORT___impl( Sys self )
{
#line 1064 "../../lib/glesv2/glesv2.nit"

 return GL_SHORT; }
 GLenum  glesv2___Sys_gl_UNSIGNED_SHORT___impl( Sys self )
{
#line 1065 "../../lib/glesv2/glesv2.nit"

 return GL_UNSIGNED_SHORT; }
 GLenum  glesv2___Sys_gl_INT___impl( Sys self )
{
#line 1066 "../../lib/glesv2/glesv2.nit"

 return GL_INT; }
 GLenum  glesv2___Sys_gl_UNSIGNED_INT___impl( Sys self )
{
#line 1067 "../../lib/glesv2/glesv2.nit"

 return GL_UNSIGNED_INT; }
 GLenum  glesv2___Sys_gl_FIXED___impl( Sys self )
{
#line 1068 "../../lib/glesv2/glesv2.nit"

 return GL_FIXED; }
 GLenum  glesv2___Sys_gl_INT_VEC2___impl( Sys self )
{
#line 1069 "../../lib/glesv2/glesv2.nit"

 return GL_INT_VEC2; }
 GLenum  glesv2___Sys_gl_INT_VEC3___impl( Sys self )
{
#line 1070 "../../lib/glesv2/glesv2.nit"

 return GL_INT_VEC3; }
 GLenum  glesv2___Sys_gl_INT_VEC4___impl( Sys self )
{
#line 1071 "../../lib/glesv2/glesv2.nit"

 return GL_INT_VEC4; }
 GLenum  glesv2___Sys_gl_BOOL___impl( Sys self )
{
#line 1072 "../../lib/glesv2/glesv2.nit"

 return GL_BOOL; }
 GLenum  glesv2___Sys_gl_BOOL_VEC2___impl( Sys self )
{
#line 1073 "../../lib/glesv2/glesv2.nit"

 return GL_BOOL_VEC2; }
 GLenum  glesv2___Sys_gl_BOOL_VEC3___impl( Sys self )
{
#line 1074 "../../lib/glesv2/glesv2.nit"

 return GL_BOOL_VEC3; }
 GLenum  glesv2___Sys_gl_BOOL_VEC4___impl( Sys self )
{
#line 1075 "../../lib/glesv2/glesv2.nit"

 return GL_BOOL_VEC4; }
 GLenum  glesv2___Sys_gl_SAMPLER_2D___impl( Sys self )
{
#line 1076 "../../lib/glesv2/glesv2.nit"

 return GL_SAMPLER_2D; }
 GLenum  glesv2___Sys_gl_SAMPLER_CUBE___impl( Sys self )
{
#line 1077 "../../lib/glesv2/glesv2.nit"

 return GL_SAMPLER_CUBE; }
 GLenum  glesv2___Sys_gl_UNSIGNED_SHORT_5_6_5___impl( Sys self )
{
#line 1079 "../../lib/glesv2/glesv2.nit"

 return GL_UNSIGNED_SHORT_5_6_5; }
 GLenum  glesv2___Sys_gl_UNSIGNED_SHORT_4_4_4_4___impl( Sys self )
{
#line 1080 "../../lib/glesv2/glesv2.nit"

 return GL_UNSIGNED_SHORT_4_4_4_4; }
 GLenum  glesv2___Sys_gl_UNSIGNED_SHORT_5_5_5_1___impl( Sys self )
{
#line 1081 "../../lib/glesv2/glesv2.nit"

 return GL_UNSIGNED_SHORT_5_5_5_1; }
 GLenum  glesv2___Sys_gl_POINTS___impl( Sys self )
{
#line 1088 "../../lib/glesv2/glesv2.nit"

 return GL_POINTS; }
 GLenum  glesv2___Sys_gl_LINES___impl( Sys self )
{
#line 1089 "../../lib/glesv2/glesv2.nit"

 return GL_LINES; }
 GLenum  glesv2___Sys_gl_LINE_LOOP___impl( Sys self )
{
#line 1090 "../../lib/glesv2/glesv2.nit"

 return GL_LINE_LOOP; }
 GLenum  glesv2___Sys_gl_LINE_STRIP___impl( Sys self )
{
#line 1091 "../../lib/glesv2/glesv2.nit"

 return GL_LINE_STRIP; }
 GLenum  glesv2___Sys_gl_TRIANGLES___impl( Sys self )
{
#line 1092 "../../lib/glesv2/glesv2.nit"

 return GL_TRIANGLES; }
 GLenum  glesv2___Sys_gl_TRIANGLE_STRIP___impl( Sys self )
{
#line 1093 "../../lib/glesv2/glesv2.nit"

 return GL_TRIANGLE_STRIP; }
 GLenum  glesv2___Sys_gl_TRIANGLE_FAN___impl( Sys self )
{
#line 1094 "../../lib/glesv2/glesv2.nit"

 return GL_TRIANGLE_FAN; }
 GLenum  glesv2___Sys_gl_ZERO___impl( Sys self )
{
#line 1101 "../../lib/glesv2/glesv2.nit"

 return GL_ZERO; }
 GLenum  glesv2___Sys_gl_ONE___impl( Sys self )
{
#line 1102 "../../lib/glesv2/glesv2.nit"

 return GL_ONE; }
 GLenum  glesv2___Sys_gl_SRC_COLOR___impl( Sys self )
{
#line 1103 "../../lib/glesv2/glesv2.nit"

 return GL_SRC_COLOR; }
 GLenum  glesv2___Sys_gl_ONE_MINUS_SRC_COLOR___impl( Sys self )
{
#line 1104 "../../lib/glesv2/glesv2.nit"

 return GL_ONE_MINUS_SRC_COLOR; }
 GLenum  glesv2___Sys_gl_SRC_ALPHA___impl( Sys self )
{
#line 1105 "../../lib/glesv2/glesv2.nit"

 return GL_SRC_ALPHA; }
 GLenum  glesv2___Sys_gl_ONE_MINUS_SRC_ALPHA___impl( Sys self )
{
#line 1106 "../../lib/glesv2/glesv2.nit"

 return GL_ONE_MINUS_SRC_ALPHA; }
 GLenum  glesv2___Sys_gl_DST_ALPHA___impl( Sys self )
{
#line 1107 "../../lib/glesv2/glesv2.nit"

 return GL_DST_ALPHA; }
 GLenum  glesv2___Sys_gl_ONE_MINUS_DST_ALPHA___impl( Sys self )
{
#line 1108 "../../lib/glesv2/glesv2.nit"

 return GL_ONE_MINUS_DST_ALPHA; }
 GLenum  glesv2___Sys_gl_DST_COLOR___impl( Sys self )
{
#line 1109 "../../lib/glesv2/glesv2.nit"

 return GL_DST_COLOR; }
 GLenum  glesv2___Sys_gl_ONE_MINUS_DST_COLOR___impl( Sys self )
{
#line 1110 "../../lib/glesv2/glesv2.nit"

 return GL_ONE_MINUS_DST_COLOR; }
 GLenum  glesv2___Sys_gl_SRC_ALPHA_SATURATE___impl( Sys self )
{
#line 1111 "../../lib/glesv2/glesv2.nit"

 return GL_SRC_ALPHA_SATURATE; }
 GLenum  glesv2___Sys_gl_NEVER___impl( Sys self )
{
#line 1118 "../../lib/glesv2/glesv2.nit"

 return GL_NEVER; }
 GLenum  glesv2___Sys_gl_LESS___impl( Sys self )
{
#line 1119 "../../lib/glesv2/glesv2.nit"

 return GL_LESS; }
 GLenum  glesv2___Sys_gl_EQUAL___impl( Sys self )
{
#line 1120 "../../lib/glesv2/glesv2.nit"

 return GL_EQUAL; }
 GLenum  glesv2___Sys_gl_LEQUAL___impl( Sys self )
{
#line 1121 "../../lib/glesv2/glesv2.nit"

 return GL_LEQUAL; }
 GLenum  glesv2___Sys_gl_GREATER___impl( Sys self )
{
#line 1122 "../../lib/glesv2/glesv2.nit"

 return GL_GREATER; }
 GLenum  glesv2___Sys_gl_NOTEQUAL___impl( Sys self )
{
#line 1123 "../../lib/glesv2/glesv2.nit"

 return GL_NOTEQUAL; }
 GLenum  glesv2___Sys_gl_GEQUAL___impl( Sys self )
{
#line 1124 "../../lib/glesv2/glesv2.nit"

 return GL_GEQUAL; }
 GLenum  glesv2___Sys_gl_ALWAYS___impl( Sys self )
{
#line 1125 "../../lib/glesv2/glesv2.nit"

 return GL_ALWAYS; }
 GLenum  glesv2___Sys_gl_ALPHA___impl( Sys self )
{
#line 1132 "../../lib/glesv2/glesv2.nit"

 return GL_ALPHA; }
 GLenum  glesv2___Sys_gl_RGB___impl( Sys self )
{
#line 1133 "../../lib/glesv2/glesv2.nit"

 return GL_RGB; }
 GLenum  glesv2___Sys_gl_RGBA___impl( Sys self )
{
#line 1134 "../../lib/glesv2/glesv2.nit"

 return GL_RGBA; }
 GLbitfield  glesv2___Sys_gl_DEPTH_BUFFER_BIT___impl( Sys self )
{
#line 1142 "../../lib/glesv2/glesv2.nit"

 return GL_DEPTH_BUFFER_BIT; }
 GLbitfield  glesv2___Sys_gl_STENCIL_BUFFER_BIT___impl( Sys self )
{
#line 1143 "../../lib/glesv2/glesv2.nit"

 return GL_STENCIL_BUFFER_BIT; }
 GLbitfield  glesv2___Sys_gl_COLOR_BUFFER_BIT___impl( Sys self )
{
#line 1144 "../../lib/glesv2/glesv2.nit"

 return GL_COLOR_BUFFER_BIT; }
void glesv2___Sys_glFrontFace___impl( Sys self,  GLenum  mode )
{
#line 1147 "../../lib/glesv2/glesv2.nit"

 glFrontFace(mode); }
 GLenum  glesv2___Sys_gl_CW___impl( Sys self )
{
#line 1154 "../../lib/glesv2/glesv2.nit"

 return GL_CW; }
 GLenum  glesv2___Sys_gl_CCW___impl( Sys self )
{
#line 1155 "../../lib/glesv2/glesv2.nit"

 return GL_CCW; }
void glesv2___Sys_glCullFace___impl( Sys self,  GLenum  mode )
{
#line 1158 "../../lib/glesv2/glesv2.nit"

 glCullFace(mode); }
 GLenum  glesv2___Sys_gl_FRONT___impl( Sys self )
{
#line 1165 "../../lib/glesv2/glesv2.nit"

 return GL_FRONT; }
 GLenum  glesv2___Sys_gl_BACK___impl( Sys self )
{
#line 1166 "../../lib/glesv2/glesv2.nit"

 return GL_BACK; }
 GLenum  glesv2___Sys_gl_FRONT_AND_BACK___impl( Sys self )
{
#line 1167 "../../lib/glesv2/glesv2.nit"

 return GL_FRONT_AND_BACK; }
void glesv2___Sys_glDepthRangef___impl( Sys self, double near, double far )
{
#line 1172 "../../lib/glesv2/glesv2.nit"

 glDepthRangef(near, far); }
void glesv2___Sys_glDepthMask___impl( Sys self, int value )
{
#line 1175 "../../lib/glesv2/glesv2.nit"

 glDepthMask(value); }
void glesv2___Sys_glDepthFunc___impl( Sys self,  GLenum  func )
{
#line 1180 "../../lib/glesv2/glesv2.nit"

 glDepthFunc(func); }
void glesv2___Sys_glBlendFunc___impl( Sys self,  GLenum  src_factor,  GLenum  dst_factor )
{
#line 1187 "../../lib/glesv2/glesv2.nit"


	glBlendFunc(src_factor, dst_factor);
}
void glesv2___Sys_glPolygonOffset___impl( Sys self, double factor, double units )
{
#line 1192 "../../lib/glesv2/glesv2.nit"

 glPolygonOffset(factor, units); }
void glesv2___Sys_glLineWidth___impl( Sys self, double width )
{
#line 1195 "../../lib/glesv2/glesv2.nit"

 glLineWidth(width); }
int glesv2___Sys_glGetBooleanv___impl( Sys self,  GLenum  pname )
{
#line 1198 "../../lib/glesv2/glesv2.nit"


	GLboolean v;
	glGetBooleanv(pname, &v);
	return v;
}
double glesv2___Sys_glGetFloatv___impl( Sys self,  GLenum  pname )
{
#line 1205 "../../lib/glesv2/glesv2.nit"


	GLfloat v;
	glGetFloatv(pname, &v);
	return v;
}
long glesv2___Sys_glGetIntegerv___impl( Sys self,  GLenum  pname )
{
#line 1212 "../../lib/glesv2/glesv2.nit"


	GLint v;
	glGetIntegerv(pname, &v);
	return v;
}
 GLenum  glesv2___Sys_gl_MAX_TEXTURE_SIZE___impl( Sys self )
{
#line 1218 "../../lib/glesv2/glesv2.nit"

 return GL_MAX_TEXTURE_SIZE; }
 GLenum  glesv2___Sys_gl_MAX_VIEWPORT_DIMS___impl( Sys self )
{
#line 1219 "../../lib/glesv2/glesv2.nit"

 return GL_MAX_VIEWPORT_DIMS; }
 GLenum  glesv2___Sys_gl_MAX_VERTEX_ATTRIBS___impl( Sys self )
{
#line 1220 "../../lib/glesv2/glesv2.nit"

 return GL_MAX_VERTEX_ATTRIBS; }
 GLenum  glesv2___Sys_gl_MAX_VERTEX_UNIFORM_VECTORS___impl( Sys self )
{
#line 1221 "../../lib/glesv2/glesv2.nit"

 return GL_MAX_VERTEX_UNIFORM_VECTORS; }
 GLenum  glesv2___Sys_gl_MAX_VARYING_VECTORS___impl( Sys self )
{
#line 1222 "../../lib/glesv2/glesv2.nit"

 return GL_MAX_VARYING_VECTORS; }
 GLenum  glesv2___Sys_gl_MAX_COMBINED_TEXTURE_IMAGE_UNITS___impl( Sys self )
{
#line 1223 "../../lib/glesv2/glesv2.nit"

 return GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS; }
 GLenum  glesv2___Sys_gl_MAX_VERTEX_TEXTURE_IMAGE_UNITS___impl( Sys self )
{
#line 1224 "../../lib/glesv2/glesv2.nit"

 return GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS; }
 GLenum  glesv2___Sys_gl_MAX_TEXTURE_IMAGE_UNITS___impl( Sys self )
{
#line 1225 "../../lib/glesv2/glesv2.nit"

 return GL_MAX_TEXTURE_IMAGE_UNITS; }
 GLenum  glesv2___Sys_gl_MAX_FRAGMENT_UNIFORM_VECTORS___impl( Sys self )
{
#line 1226 "../../lib/glesv2/glesv2.nit"

 return GL_MAX_FRAGMENT_UNIFORM_VECTORS; }
int glesv2___GLES_get_bool___impl( GLES self, long key )
{
#line 770 "../../lib/glesv2/glesv2.nit"


		GLboolean val;
		glGetBooleanv(key, &val);
		return val == GL_TRUE;
	}
double glesv2___GLES_get_float___impl( GLES self, long key )
{
#line 777 "../../lib/glesv2/glesv2.nit"


		GLfloat val;
		glGetFloatv(key, &val);
		return val;
	}
long glesv2___GLES_get_int___impl( GLES self, long key )
{
#line 784 "../../lib/glesv2/glesv2.nit"


		GLint val;
		glGetIntegerv(key, &val);
		return val;
	}
 GLbitfield  glesv2___GLBuffer__pipe___impl(  GLbitfield  self,  GLbitfield  other )
{
#line 1139 "../../lib/glesv2/glesv2.nit"

 return self | other; }
