/*
	Extern implementation of Nit module c
*/
#ifndef C_NITG_NITNI_H
#define C_NITG_NITNI_H

#include "c._ffi.h"
#include <stdint.h>
extern void nitni_global_ref_incr(void*);
extern void nitni_global_ref_decr(void*);
#endif
