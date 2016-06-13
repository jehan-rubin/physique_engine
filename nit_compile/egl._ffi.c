/*
	Extern implementation of Nit module egl
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "egl._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define Array_of_Int_length egl___Array_of_Int_length
#define Array_of_Int__index egl___Array_of_Int__index
#define new_Array_of_EGLConfig egl___new_Array_of_EGLConfig
#define Array_of_EGLConfig_add egl___Array_of_EGLConfig_add
#define EGLDisplay_report_egl_error egl___EGLDisplay_report_egl_error
#define NativeString_to_s egl___NativeString_to_s
 EGLNativeDisplayType  egl___new_EGLNativeDisplayType_from_x11___impl( void* handle )
{
#line 34 "../../lib/egl.nit"

 return (EGLNativeDisplayType)handle; }
 EGLDisplay  egl___new_EGLDisplay_current___impl(  )
{
#line 38 "../../lib/egl.nit"

 return eglGetCurrentDisplay(); }
 EGLDisplay  egl___new_EGLDisplay___impl( void* handle )
{
#line 39 "../../lib/egl.nit"

 return eglGetDisplay(handle); }
int egl___EGLDisplay_is_valid___impl(  EGLDisplay  self )
{
#line 41 "../../lib/egl.nit"

 return self != EGL_NO_DISPLAY; }
int egl___EGLDisplay_initialize___impl(  EGLDisplay  self )
{
#line 43 "../../lib/egl.nit"


		EGLBoolean r = eglInitialize(self, NULL, NULL);
		if (r == EGL_FALSE) {
			fprintf(stderr, "Unable to eglInitialize");
			return 0;
		}
		return 1;
	}
long egl___EGLDisplay_major_version___impl(  EGLDisplay  self )
{
#line 52 "../../lib/egl.nit"


		EGLint val;
		eglInitialize(self, &val, NULL);
		return val;
	}
long egl___EGLDisplay_minor_version___impl(  EGLDisplay  self )
{
#line 57 "../../lib/egl.nit"


		EGLint val;
		eglInitialize(self, NULL, &val);
		return val;
	}
nullable_Array_of_EGLConfig egl___EGLDisplay_choose_configs___impl(  EGLDisplay  self, Array_of_Int attribs )
{
#line 68 "../../lib/egl.nit"


		EGLConfig *configs;
		int n_configs;
		int n_attribs = Array_of_Int_length(attribs);
		int i;
		int *c_attribs = malloc(sizeof(int)*n_attribs);
		for (i = 0; i < n_attribs; i ++) {
			c_attribs[i] = Array_of_Int__index(attribs, i);
		}

		// get number of configs
		EGLBoolean r = eglChooseConfig(self, c_attribs, NULL, 0, &n_configs);

		if (r == EGL_FALSE) {
			EGLDisplay_report_egl_error(self, "failed to get number of available configs.");
			return null_Array_of_EGLConfig();
		} else if (n_configs == 0) {
			EGLDisplay_report_egl_error(self, "no config available.");
			return null_Array_of_EGLConfig();
		}

		configs = (EGLConfig*)malloc(sizeof(EGLConfig)*n_configs);
 
		r = eglChooseConfig(self, c_attribs, configs, n_configs, &n_configs);

		if (r == EGL_FALSE) {
			EGLDisplay_report_egl_error(self, "failed to load config.");
			return null_Array_of_EGLConfig();
		} else {
			Array_of_EGLConfig array = new_Array_of_EGLConfig();
			for (i=0; i < n_configs; i++)
				Array_of_EGLConfig_add(array, configs[i]);

			return Array_of_EGLConfig_as_nullable(array);
		}
	}
long egl___EGLDisplay_config_attrib___impl(  EGLDisplay  self,  EGLConfig  config, long attribute )
{
#line 112 "../../lib/egl.nit"


		EGLint val;
		EGLBoolean r = eglGetConfigAttrib(self, config, attribute, &val);
		if (r == EGL_FALSE)
			return -1;
		else
			return val;
	}
int egl___EGLDisplay_terminate___impl(  EGLDisplay  self )
{
#line 121 "../../lib/egl.nit"


		return eglTerminate(self) == EGL_TRUE;
	}
 EGLSurface  egl___EGLDisplay_create_window_surface___impl(  EGLDisplay  self,  EGLConfig  config, void* native_window, Array_of_Int attribs )
{
#line 125 "../../lib/egl.nit"


		EGLSurface surface = eglCreateWindowSurface(self, config, (EGLNativeWindowType)native_window, NULL);
		return surface;
	}
 EGLContext  egl___EGLDisplay_create_context___impl(  EGLDisplay  self,  EGLConfig  config )
{
#line 131 "../../lib/egl.nit"


		EGLint context_attribs[] = {EGL_CONTEXT_CLIENT_VERSION, 2, EGL_NONE, EGL_NONE}; // TODO move out!
		EGLContext context = eglCreateContext(self, config, EGL_NO_CONTEXT, context_attribs);
		return context;
	}
int egl___EGLDisplay_make_current___impl(  EGLDisplay  self,  EGLSurface  draw,  EGLSurface  read,  EGLContext  context )
{
#line 137 "../../lib/egl.nit"


		if (eglMakeCurrent(self, draw, read, context) == EGL_FALSE) {
			fprintf(stderr, "Unable to eglMakeCurrent");
			return 0;
		}
		return 1;
	}
long egl___EGLDisplay_query_surface___impl(  EGLDisplay  self,  EGLSurface  surface, long attribute )
{
#line 146 "../../lib/egl.nit"


		int val;
		EGLBoolean r = eglQuerySurface(self, surface, attribute, &val);
		if (r == EGL_FALSE)
			return -1;
		else
			return val;
	}
int egl___EGLDisplay_destroy_context___impl(  EGLDisplay  self,  EGLContext  context )
{
#line 155 "../../lib/egl.nit"


		return eglDestroyContext(self, context);
	}
int egl___EGLDisplay_destroy_surface___impl(  EGLDisplay  self,  EGLSurface  surface )
{
#line 159 "../../lib/egl.nit"


		return eglDestroySurface(self, surface);
	}
 EGLint  egl___EGLDisplay_error___impl(  EGLDisplay  self )
{
#line 163 "../../lib/egl.nit"

 return eglGetError(); }
String egl___EGLDisplay_query_string___impl(  EGLDisplay  self, long name )
{
#line 175 "../../lib/egl.nit"


		return NativeString_to_s((char *)eglQueryString(self, name));
	}
void egl___EGLDisplay_swap_buffers___impl(  EGLDisplay  self,  EGLSurface  surface )
{
#line 187 "../../lib/egl.nit"

 eglSwapBuffers(self, surface); }
 EGLSurface  egl___new_EGLSurface_current_draw___impl(  )
{
#line 197 "../../lib/egl.nit"

 return eglGetCurrentSurface(EGL_DRAW); }
 EGLSurface  egl___new_EGLSurface_current_read___impl(  )
{
#line 198 "../../lib/egl.nit"

 return eglGetCurrentSurface(EGL_READ); }
 EGLSurface  egl___new_EGLSurface_none___impl(  )
{
#line 199 "../../lib/egl.nit"

 return EGL_NO_SURFACE; }
int egl___EGLSurface_is_ok___impl(  EGLSurface  self )
{
#line 201 "../../lib/egl.nit"

 return self != EGL_NO_SURFACE; }
 EGLContext  egl___new_EGLContext_current___impl(  )
{
#line 209 "../../lib/egl.nit"

 return eglGetCurrentContext(); }
 EGLContext  egl___new_EGLContext_none___impl(  )
{
#line 210 "../../lib/egl.nit"

 return EGL_NO_CONTEXT; }
int egl___EGLContext_is_ok___impl(  EGLContext  self )
{
#line 212 "../../lib/egl.nit"

 return self != EGL_NO_CONTEXT; }
 EGLint  egl___new_EGLConfigCaveat_from_i___impl( long val )
{
#line 241 "../../lib/egl.nit"

 return (EGLint)val; }
long egl___EGLConfigCaveat_to_i___impl(  EGLint  self )
{
#line 242 "../../lib/egl.nit"

 return self; }
 EGLint  egl___new_EGLConfigCaveat_none___impl(  )
{
#line 244 "../../lib/egl.nit"

 return EGL_NONE; }
int egl___EGLConfigCaveat_is_none___impl(  EGLint  self )
{
#line 245 "../../lib/egl.nit"

 return self == EGL_NONE; }
 EGLint  egl___new_EGLConfigCaveat_dont_care___impl(  )
{
#line 247 "../../lib/egl.nit"

 return EGL_DONT_CARE; }
int egl___EGLConfigCaveat_is_dont_care___impl(  EGLint  self )
{
#line 248 "../../lib/egl.nit"

 return self == EGL_DONT_CARE; }
 EGLint  egl___new_EGLConfigCaveat_slow___impl(  )
{
#line 250 "../../lib/egl.nit"

 return EGL_SLOW_CONFIG; }
int egl___EGLConfigCaveat_is_slow___impl(  EGLint  self )
{
#line 251 "../../lib/egl.nit"

 return self == EGL_SLOW_CONFIG; }
 EGLint  egl___new_EGLConfigCaveat_non_conformant___impl(  )
{
#line 254 "../../lib/egl.nit"

 return EGL_NON_CONFORMANT_CONFIG; }
int egl___EGLConfigCaveat_is_non_conformant___impl(  EGLint  self )
{
#line 255 "../../lib/egl.nit"

 return self == EGL_NON_CONFORMANT_CONFIG; }
 EGLint  egl___new_EGLConformant___impl(  )
{
#line 268 "../../lib/egl.nit"

 return (EGLint)0; }
 EGLint  egl___new_EGLConformant_from_i___impl( long val )
{
#line 269 "../../lib/egl.nit"

 return (EGLint)val; }
long egl___EGLConformant_to_i___impl(  EGLint  self )
{
#line 270 "../../lib/egl.nit"

 return self; }
int egl___EGLConformant_opengl___impl(  EGLint  self )
{
#line 272 "../../lib/egl.nit"

 return self & EGL_OPENGL_BIT; }
 EGLint  egl___EGLConformant_with_opengl___impl(  EGLint  self )
{
#line 273 "../../lib/egl.nit"

 return self | EGL_OPENGL_BIT; }
int egl___EGLConformant_opengl_es___impl(  EGLint  self )
{
#line 275 "../../lib/egl.nit"

 return self & EGL_OPENGL_ES_BIT; }
 EGLint  egl___EGLConformant_with_opengl_es___impl(  EGLint  self )
{
#line 276 "../../lib/egl.nit"

 return self | EGL_OPENGL_ES_BIT; }
int egl___EGLConformant_opengl_es2___impl(  EGLint  self )
{
#line 278 "../../lib/egl.nit"

 return self & EGL_OPENGL_ES2_BIT; }
 EGLint  egl___EGLConformant_with_opengl_es2___impl(  EGLint  self )
{
#line 279 "../../lib/egl.nit"

 return self | EGL_OPENGL_ES2_BIT; }
int egl___EGLConformant_openvg___impl(  EGLint  self )
{
#line 281 "../../lib/egl.nit"

 return self & EGL_OPENVG_BIT; }
 EGLint  egl___EGLConformant_with_openvg___impl(  EGLint  self )
{
#line 282 "../../lib/egl.nit"

 return self | EGL_OPENVG_BIT; }
int egl___EGLError_is_success___impl(  EGLint  self )
{
#line 320 "../../lib/egl.nit"

 return self == EGL_SUCCESS; }
int egl___EGLError_is_not_initialized___impl(  EGLint  self )
{
#line 322 "../../lib/egl.nit"

 return self == EGL_NOT_INITIALIZED; }
int egl___EGLError_is_bad_access___impl(  EGLint  self )
{
#line 323 "../../lib/egl.nit"

 return self == EGL_BAD_ACCESS; }
int egl___EGLError_is_bad_alloc___impl(  EGLint  self )
{
#line 324 "../../lib/egl.nit"

 return self == EGL_BAD_ALLOC; }
int egl___EGLError_is_bad_attribute___impl(  EGLint  self )
{
#line 325 "../../lib/egl.nit"

 return self == EGL_BAD_ATTRIBUTE; }
int egl___EGLError_is_bad_config___impl(  EGLint  self )
{
#line 326 "../../lib/egl.nit"

 return self == EGL_BAD_CONFIG; }
int egl___EGLError_is_bad_context___impl(  EGLint  self )
{
#line 327 "../../lib/egl.nit"

 return self == EGL_BAD_CONTEXT; }
int egl___EGLError_is_bad_current_surface___impl(  EGLint  self )
{
#line 328 "../../lib/egl.nit"

 return self == EGL_BAD_CURRENT_SURFACE; }
int egl___EGLError_is_bad_display___impl(  EGLint  self )
{
#line 329 "../../lib/egl.nit"

 return self == EGL_BAD_DISPLAY; }
int egl___EGLError_is_bad_match___impl(  EGLint  self )
{
#line 330 "../../lib/egl.nit"

 return self == EGL_BAD_MATCH; }
int egl___EGLError_is_bad_native_pixmap___impl(  EGLint  self )
{
#line 331 "../../lib/egl.nit"

 return self == EGL_BAD_NATIVE_PIXMAP; }
int egl___EGLError_is_bad_native_window___impl(  EGLint  self )
{
#line 332 "../../lib/egl.nit"

 return self == EGL_BAD_NATIVE_WINDOW; }
int egl___EGLError_is_bad_parameter___impl(  EGLint  self )
{
#line 333 "../../lib/egl.nit"

 return self == EGL_BAD_PARAMETER; }
int egl___EGLError_is_bad_surface___impl(  EGLint  self )
{
#line 334 "../../lib/egl.nit"

 return self == EGL_BAD_SURFACE; }
int egl___EGLError_is_context_lost___impl(  EGLint  self )
{
#line 335 "../../lib/egl.nit"

 return self == EGL_CONTEXT_LOST; }
 EGLint  egl___new_EGLContextAttribute_buffer_size___impl(  )
{
#line 358 "../../lib/egl.nit"

 return EGL_BUFFER_SIZE; }
 EGLint  egl___new_EGLContextAttribute_alpha_size___impl(  )
{
#line 359 "../../lib/egl.nit"

 return EGL_ALPHA_SIZE; }
 EGLint  egl___new_EGLContextAttribute_blue_size___impl(  )
{
#line 360 "../../lib/egl.nit"

 return EGL_BLUE_SIZE; }
 EGLint  egl___new_EGLContextAttribute_green_size___impl(  )
{
#line 361 "../../lib/egl.nit"

 return EGL_GREEN_SIZE; }
 EGLint  egl___new_EGLContextAttribute_red_size___impl(  )
{
#line 362 "../../lib/egl.nit"

 return EGL_RED_SIZE; }
 EGLint  egl___new_EGLContextAttribute_depth_size___impl(  )
{
#line 363 "../../lib/egl.nit"

 return EGL_DEPTH_SIZE; }
 EGLint  egl___new_EGLContextAttribute_stencil_size___impl(  )
{
#line 364 "../../lib/egl.nit"

 return EGL_STENCIL_SIZE; }
 EGLint  egl___new_EGLContextAttribute_config_caveat___impl(  )
{
#line 365 "../../lib/egl.nit"

 return EGL_CONFIG_CAVEAT; }
 EGLint  egl___new_EGLContextAttribute_config_id___impl(  )
{
#line 366 "../../lib/egl.nit"

 return EGL_CONFIG_ID; }
 EGLint  egl___new_EGLContextAttribute_level___impl(  )
{
#line 367 "../../lib/egl.nit"

 return EGL_LEVEL; }
 EGLint  egl___new_EGLContextAttribute_max_pbuffer_height___impl(  )
{
#line 368 "../../lib/egl.nit"

 return EGL_MAX_PBUFFER_HEIGHT; }
 EGLint  egl___new_EGLContextAttribute_max_pbuffer_pixels___impl(  )
{
#line 369 "../../lib/egl.nit"

 return EGL_MAX_PBUFFER_PIXELS; }
 EGLint  egl___new_EGLContextAttribute_max_pbuffer_width___impl(  )
{
#line 370 "../../lib/egl.nit"

 return EGL_MAX_PBUFFER_WIDTH; }
 EGLint  egl___new_EGLContextAttribute_native_renderable___impl(  )
{
#line 371 "../../lib/egl.nit"

 return EGL_NATIVE_RENDERABLE; }
 EGLint  egl___new_EGLContextAttribute_native_visual_id___impl(  )
{
#line 372 "../../lib/egl.nit"

 return EGL_NATIVE_VISUAL_ID; }
 EGLint  egl___new_EGLContextAttribute_native_visual_type___impl(  )
{
#line 373 "../../lib/egl.nit"

 return EGL_NATIVE_VISUAL_TYPE; }
 EGLint  egl___new_EGLContextAttribute_samples___impl(  )
{
#line 374 "../../lib/egl.nit"

 return EGL_SAMPLES; }
 EGLint  egl___new_EGLContextAttribute_sample_buffers___impl(  )
{
#line 375 "../../lib/egl.nit"

 return EGL_SAMPLE_BUFFERS; }
 EGLint  egl___new_EGLContextAttribute_surface_type___impl(  )
{
#line 376 "../../lib/egl.nit"

 return EGL_SURFACE_TYPE; }
 EGLint  egl___new_EGLContextAttribute_transparent_type___impl(  )
{
#line 377 "../../lib/egl.nit"

 return EGL_TRANSPARENT_TYPE; }
 EGLint  egl___new_EGLContextAttribute_transparent_blue_value___impl(  )
{
#line 378 "../../lib/egl.nit"

 return EGL_TRANSPARENT_BLUE_VALUE; }
 EGLint  egl___new_EGLContextAttribute_transparent_green_value___impl(  )
{
#line 379 "../../lib/egl.nit"

 return EGL_TRANSPARENT_GREEN_VALUE; }
 EGLint  egl___new_EGLContextAttribute_transparent_red_value___impl(  )
{
#line 380 "../../lib/egl.nit"

 return EGL_TRANSPARENT_RED_VALUE; }
 EGLint  egl___new_EGLContextAttribute_bind_to_texture_rgb___impl(  )
{
#line 381 "../../lib/egl.nit"

 return EGL_BIND_TO_TEXTURE_RGB; }
 EGLint  egl___new_EGLContextAttribute_bind_to_texture_rgba___impl(  )
{
#line 382 "../../lib/egl.nit"

 return EGL_BIND_TO_TEXTURE_RGBA; }
 EGLint  egl___new_EGLContextAttribute_min_swap_interval___impl(  )
{
#line 383 "../../lib/egl.nit"

 return EGL_MIN_SWAP_INTERVAL; }
 EGLint  egl___new_EGLContextAttribute_max_swap_interval___impl(  )
{
#line 384 "../../lib/egl.nit"

 return EGL_MAX_SWAP_INTERVAL; }
 EGLint  egl___new_EGLContextAttribute_limunance_size___impl(  )
{
#line 385 "../../lib/egl.nit"

 return EGL_LUMINANCE_SIZE; }
 EGLint  egl___new_EGLContextAttribute_alpha_mask_size___impl(  )
{
#line 386 "../../lib/egl.nit"

 return EGL_ALPHA_MASK_SIZE; }
 EGLint  egl___new_EGLContextAttribute_color_buffer_type___impl(  )
{
#line 387 "../../lib/egl.nit"

 return EGL_COLOR_BUFFER_TYPE; }
 EGLint  egl___new_EGLContextAttribute_renderable_type___impl(  )
{
#line 388 "../../lib/egl.nit"

 return EGL_RENDERABLE_TYPE; }
 EGLint  egl___new_EGLContextAttribute_match_native_pixmap___impl(  )
{
#line 389 "../../lib/egl.nit"

 return EGL_MATCH_NATIVE_PIXMAP; }
 EGLint  egl___new_EGLContextAttribute_conformant___impl(  )
{
#line 390 "../../lib/egl.nit"

 return EGL_CONFORMANT; }
 EGLint  egl___new_EGLContextAttribute_none___impl(  )
{
#line 393 "../../lib/egl.nit"

 return EGL_NONE; }
int egl___Sys_egl_bind_opengl_api___impl( Sys self )
{
#line 451 "../../lib/egl.nit"

 return eglBindAPI(EGL_OPENGL_API); }
int egl___Sys_egl_bind_opengl_es_api___impl( Sys self )
{
#line 452 "../../lib/egl.nit"

 return eglBindAPI(EGL_OPENGL_ES_API); }
int egl___Sys_egl_bind_openvg_api___impl( Sys self )
{
#line 453 "../../lib/egl.nit"

 return eglBindAPI(EGL_OPENVG_API); }
void* egl___Sys_egl_default_display___impl( Sys self )
{
#line 456 "../../lib/egl.nit"

 return EGL_DEFAULT_DISPLAY; }
