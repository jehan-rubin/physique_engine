/*
	Extern implementation of Nit module egl
*/
#ifndef EGL_NITG_NITNI_H
#define EGL_NITG_NITNI_H

#ifndef NIT_TYPE_nullable_Array_of_EGLConfig
#define NIT_TYPE_nullable_Array_of_EGLConfig 1
typedef struct nitni_instance *nullable_Array_of_EGLConfig;
#endif
#ifndef NIT_TYPE_Array_of_Int
#define NIT_TYPE_Array_of_Int 1
typedef struct nitni_instance *Array_of_Int;
#endif
#ifndef NIT_TYPE_nullable_Object
#define NIT_TYPE_nullable_Object 1
typedef struct nitni_instance *nullable_Object;
#endif
#ifndef NIT_TYPE_Array_of_EGLConfig
#define NIT_TYPE_Array_of_EGLConfig 1
typedef struct nitni_instance *Array_of_EGLConfig;
#endif
#ifndef NIT_TYPE_Array_of_Int
#define NIT_TYPE_Array_of_Int 1
typedef struct nitni_instance *Array_of_Int;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#include "egl._ffi.h"
#include <stdint.h>
extern void nitni_global_ref_incr(void*);
extern void nitni_global_ref_decr(void*);
#ifndef nullable_Array_of_EGLConfig_incr_ref
	#define nullable_Array_of_EGLConfig_incr_ref(from) nitni_global_ref_incr((nullable_Array_of_EGLConfig)(from))
#endif
#ifndef nullable_Array_of_EGLConfig_decr_ref
	#define nullable_Array_of_EGLConfig_decr_ref(from) nitni_global_ref_decr((nullable_Array_of_EGLConfig)(from))
#endif
extern struct nitni_instance * NIT_NULL___null_Array_of_EGLConfig();
#define null_Array_of_EGLConfig NIT_NULL___null_Array_of_EGLConfig
#ifndef Array_of_Int_incr_ref
	#define Array_of_Int_incr_ref(from) nitni_global_ref_incr((Array_of_Int)(from))
#endif
#ifndef Array_of_Int_decr_ref
	#define Array_of_Int_decr_ref(from) nitni_global_ref_decr((Array_of_Int)(from))
#endif
#ifndef nullable_Object_incr_ref
	#define nullable_Object_incr_ref(from) nitni_global_ref_incr((nullable_Object)(from))
#endif
#ifndef nullable_Object_decr_ref
	#define nullable_Object_decr_ref(from) nitni_global_ref_decr((nullable_Object)(from))
#endif
extern struct nitni_instance * NIT_NULL___null_Object();
#define null_Object NIT_NULL___null_Object
#ifndef Array_of_EGLConfig_incr_ref
	#define Array_of_EGLConfig_incr_ref(from) nitni_global_ref_incr((Array_of_EGLConfig)(from))
#endif
#ifndef Array_of_EGLConfig_decr_ref
	#define Array_of_EGLConfig_decr_ref(from) nitni_global_ref_decr((Array_of_EGLConfig)(from))
#endif
extern long egl___Array_of_Int_length( struct nitni_instance * self );
extern long egl___Array_of_Int__index( struct nitni_instance * self, long index );
extern struct nitni_instance * egl___new_Array_of_EGLConfig(  );
extern void egl___Array_of_EGLConfig_add( struct nitni_instance * self, void* item );
extern void egl___EGLDisplay_report_egl_error( void* self, char* cmsg );
extern int egl___Array_of_EGLConfig_is_a_nullable_Array_of_EGLConfig(struct nitni_instance *);
#ifndef Array_of_EGLConfig_is_a_nullable_Array_of_EGLConfig
#define Array_of_EGLConfig_is_a_nullable_Array_of_EGLConfig egl___Array_of_EGLConfig_is_a_nullable_Array_of_EGLConfig
#endif
extern struct nitni_instance * egl___Array_of_EGLConfig_as_nullable_Array_of_EGLConfig(struct nitni_instance *);
#ifndef Array_of_EGLConfig_as_nullable_Array_of_EGLConfig
#define Array_of_EGLConfig_as_nullable_Array_of_EGLConfig egl___Array_of_EGLConfig_as_nullable_Array_of_EGLConfig
#endif
#ifndef Array_of_EGLConfig_as_nullable
#define Array_of_EGLConfig_as_nullable Array_of_EGLConfig_as_nullable_Array_of_EGLConfig
#endif
#ifndef Array_of_Int_incr_ref
	#define Array_of_Int_incr_ref(from) nitni_global_ref_incr((Array_of_Int)(from))
#endif
#ifndef Array_of_Int_decr_ref
	#define Array_of_Int_decr_ref(from) nitni_global_ref_decr((Array_of_Int)(from))
#endif
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
extern struct nitni_instance * egl___NativeString_to_s( char* self );
#ifndef Sys_incr_ref
	#define Sys_incr_ref(from) nitni_global_ref_incr((Sys)(from))
#endif
#ifndef Sys_decr_ref
	#define Sys_decr_ref(from) nitni_global_ref_decr((Sys)(from))
#endif
#ifndef Sys_incr_ref
	#define Sys_incr_ref(from) nitni_global_ref_incr((Sys)(from))
#endif
#ifndef Sys_decr_ref
	#define Sys_decr_ref(from) nitni_global_ref_decr((Sys)(from))
#endif
#ifndef Sys_incr_ref
	#define Sys_incr_ref(from) nitni_global_ref_incr((Sys)(from))
#endif
#ifndef Sys_decr_ref
	#define Sys_decr_ref(from) nitni_global_ref_decr((Sys)(from))
#endif
#ifndef Sys_incr_ref
	#define Sys_incr_ref(from) nitni_global_ref_incr((Sys)(from))
#endif
#ifndef Sys_decr_ref
	#define Sys_decr_ref(from) nitni_global_ref_decr((Sys)(from))
#endif
#endif
