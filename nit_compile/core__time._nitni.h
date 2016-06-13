/*
	Extern implementation of Nit module time
*/
#ifndef CORE__TIME_NITG_NITNI_H
#define CORE__TIME_NITG_NITNI_H

#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_FlatString
#define NIT_TYPE_FlatString 1
typedef struct nitni_instance *FlatString;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_FlatString
#define NIT_TYPE_FlatString 1
typedef struct nitni_instance *FlatString;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#include "core__time._ffi.h"
#include <stdint.h>
extern void nitni_global_ref_incr(void*);
extern void nitni_global_ref_decr(void*);
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
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
#ifndef FlatString_incr_ref
	#define FlatString_incr_ref(from) nitni_global_ref_incr((FlatString)(from))
#endif
#ifndef FlatString_decr_ref
	#define FlatString_decr_ref(from) nitni_global_ref_decr((FlatString)(from))
#endif
extern struct nitni_instance * core__time___NativeString_to_s_with_copy( char* self );
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
#ifndef FlatString_incr_ref
	#define FlatString_incr_ref(from) nitni_global_ref_incr((FlatString)(from))
#endif
#ifndef FlatString_decr_ref
	#define FlatString_decr_ref(from) nitni_global_ref_decr((FlatString)(from))
#endif
extern struct nitni_instance * core__time___NativeString_to_s_with_copy( char* self );
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
extern char* core__time___String_to_cstring( struct nitni_instance * self );
extern struct nitni_instance * core__time___NativeString_to_s( char* self );
#endif
