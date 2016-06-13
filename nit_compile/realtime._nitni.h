/*
	Extern implementation of Nit module realtime
*/
#ifndef REALTIME_NITG_NITNI_H
#define REALTIME_NITG_NITNI_H

#ifndef NIT_TYPE_Clock
#define NIT_TYPE_Clock 1
typedef struct nitni_instance *Clock;
#endif
#include "realtime._ffi.h"
#include <stdint.h>
extern void nitni_global_ref_incr(void*);
extern void nitni_global_ref_decr(void*);
#ifndef Clock_incr_ref
	#define Clock_incr_ref(from) nitni_global_ref_incr((Clock)(from))
#endif
#ifndef Clock_decr_ref
	#define Clock_decr_ref(from) nitni_global_ref_decr((Clock)(from))
#endif
#endif
