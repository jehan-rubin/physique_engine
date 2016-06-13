/*
	Extern implementation of Nit module x11
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "x11._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define String_to_cstring x11___String_to_cstring
#line 19 "../../lib/x11.nit"


	#include <X11/Xlib.h>
void* x11___Sys_x_open_default_display___impl( Sys self )
{
#line 26 "../../lib/x11.nit"


	return (void*)(long)XOpenDisplay(NULL);
}
void* x11___Sys_x_open_display___impl( Sys self, String name )
{
#line 35 "../../lib/x11.nit"


	return (void*)XOpenDisplay(String_to_cstring(name));
}
