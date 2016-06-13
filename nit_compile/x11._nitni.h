/*
	Extern implementation of Nit module x11
*/
#ifndef X11_NITG_NITNI_H
#define X11_NITG_NITNI_H

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
#include "x11._ffi.h"
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
extern char* x11___String_to_cstring( struct nitni_instance * self );
#endif
