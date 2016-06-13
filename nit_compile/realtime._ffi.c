/*
	Extern implementation of Nit module realtime
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "realtime._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 23 "../../lib/realtime.nit"



#ifdef __MACH__
/* OS X does not have clock_gettime, mascarade it and use clock_get_time
 * cf http://stackoverflow.com/questions/11680461/monotonic-clock-on-osx
*/
#include <mach/clock.h>
#include <mach/mach.h>
#define CLOCK_REALTIME CALENDAR_CLOCK
#define CLOCK_MONOTONIC SYSTEM_CLOCK
void clock_gettime(clock_t clock_name, struct timespec *ts) {
	clock_serv_t cclock;
	mach_timespec_t mts;
	host_get_clock_service(mach_host_self(), clock_name, &cclock);
	clock_get_time(cclock, &mts);
	mach_port_deallocate(mach_task_self(), cclock);
	ts->tv_sec = mts.tv_sec;
	ts->tv_nsec = mts.tv_nsec;
}
#endif
struct timespec* realtime___new_Timespec___impl( long s, long ns )
{
#line 49 "../../lib/realtime.nit"


		struct timespec* tv = malloc( sizeof(struct timespec) );
		tv->tv_sec = s; tv->tv_nsec = ns;
		return tv;
	}
struct timespec* realtime___new_Timespec_monotonic_now___impl(  )
{
#line 56 "../../lib/realtime.nit"


		struct timespec* tv = malloc( sizeof(struct timespec) );
		clock_gettime( CLOCK_MONOTONIC, tv );
		return tv;
	}
struct timespec* realtime___new_Timespec_copy_of___impl( struct timespec* other )
{
#line 63 "../../lib/realtime.nit"


		struct timespec* tv = malloc( sizeof(struct timespec) );
		tv->tv_sec = other->tv_sec;
		tv->tv_nsec = other->tv_nsec;
		return tv;
	}
void realtime___Timespec_update___impl( struct timespec* self )
{
#line 71 "../../lib/realtime.nit"


		clock_gettime(CLOCK_MONOTONIC, self);
	}
long realtime___Timespec_sec___impl( struct timespec* self )
{
#line 85 "../../lib/realtime.nit"


		return self->tv_sec;
	}
long realtime___Timespec_nanosec___impl( struct timespec* self )
{
#line 92 "../../lib/realtime.nit"


		return self->tv_nsec;
	}
long realtime___Timespec_microsec___impl( struct timespec* self )
{
#line 99 "../../lib/realtime.nit"


		return self->tv_sec*1000000 + self->tv_nsec/1000;
	}
long realtime___Timespec_millisec___impl( struct timespec* self )
{
#line 106 "../../lib/realtime.nit"


		return self->tv_sec*1000 + self->tv_nsec/1000000;
	}
struct timespec* realtime___Clock_resolution___impl( Clock self )
{
#line 127 "../../lib/realtime.nit"


		struct timespec* tv = malloc( sizeof(struct timespec) );
#ifdef __MACH__
		clock_serv_t cclock;
		int nsecs;
		mach_msg_type_number_t count;
		host_get_clock_service(mach_host_self(), SYSTEM_CLOCK, &cclock);
		clock_get_attributes(cclock, CLOCK_GET_TIME_RES, (clock_attr_t)&nsecs, &count);
		mach_port_deallocate(mach_task_self(), cclock);
		tv->tv_sec = 0;
		tv->tv_nsec = nsecs;
#else
		clock_getres( CLOCK_MONOTONIC, tv );
#endif
		return tv;
	}
