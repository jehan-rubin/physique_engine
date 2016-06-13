/*
	Extern implementation of Nit module realtime
*/
#ifndef REALTIME_NIT_H
#define REALTIME_NIT_H

#include <stdint.h>
#include "realtime._nitni.h"
#line 15 "../../lib/realtime.nit"


#ifdef _POSIX_C_SOURCE
	#undef _POSIX_C_SOURCE
#endif
#define _POSIX_C_SOURCE 199309L
#include <time.h>
#include "core__math._ffi.h"
#include "core__time._ffi.h"
#include "core__file._ffi.h"
#endif
