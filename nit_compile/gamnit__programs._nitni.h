/*
	Extern implementation of Nit module programs
*/
#ifndef GAMNIT__PROGRAMS_NITG_NITNI_H
#define GAMNIT__PROGRAMS_NITG_NITNI_H

#ifndef NIT_TYPE_Uniform
#define NIT_TYPE_Uniform 1
typedef struct nitni_instance *Uniform;
#endif
#ifndef NIT_TYPE_UniformMat4
#define NIT_TYPE_UniformMat4 1
typedef struct nitni_instance *UniformMat4;
#endif
#include "gamnit__programs._ffi.h"
#include <stdint.h>
extern void nitni_global_ref_incr(void*);
extern void nitni_global_ref_decr(void*);
#ifndef Uniform_incr_ref
	#define Uniform_incr_ref(from) nitni_global_ref_incr((Uniform)(from))
#endif
#ifndef Uniform_decr_ref
	#define Uniform_decr_ref(from) nitni_global_ref_decr((Uniform)(from))
#endif
#ifndef UniformMat4_incr_ref
	#define UniformMat4_incr_ref(from) nitni_global_ref_incr((UniformMat4)(from))
#endif
#ifndef UniformMat4_decr_ref
	#define UniformMat4_decr_ref(from) nitni_global_ref_decr((UniformMat4)(from))
#endif
#endif
