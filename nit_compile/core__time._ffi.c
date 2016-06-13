/*
	Extern implementation of Nit module time
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__time._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define NativeString_to_s_with_copy core__time___NativeString_to_s_with_copy
#define String_to_cstring core__time___String_to_cstring
#define NativeString_to_s core__time___NativeString_to_s
void core__time___Sys_nanosleep___impl( Sys self, long sec, long nanosec )
{
#line 28 "../../lib/core/time.nit"


		const struct timespec req = {sec, nanosec};
		nanosleep(&req, NULL);
	}
long core__time___Sys_get_time___impl( Sys self )
{
#line 24 "../../lib/core/time.nit"

 return time(NULL); }
void core__time___Float_sleep___impl( double self )
{
#line 36 "../../lib/core/time.nit"


		time_t s = self;
		long ns = (self-s) * 1000000000.0;
		const struct timespec req = {s, ns};
		nanosleep(&req, NULL);
	}
time_t core__time___new_TimeT___impl(  )
{
#line 48 "../../lib/core/time.nit"

 return time(NULL); }
time_t core__time___new_TimeT_from_i___impl( long i )
{
#line 51 "../../lib/core/time.nit"

 return i; }
void core__time___TimeT_update___impl( time_t self )
{
#line 54 "../../lib/core/time.nit"

 time(&self); }
String core__time___TimeT_ctime___impl( time_t self )
{
#line 57 "../../lib/core/time.nit"


		return NativeString_to_s_with_copy( ctime(&self) );
	}
double core__time___TimeT_difftime___impl( time_t self, time_t start )
{
#line 62 "../../lib/core/time.nit"

 return difftime(self, start); }
long core__time___TimeT_to_i___impl( time_t self )
{
#line 67 "../../lib/core/time.nit"

 return (int)self; }
struct tm * core__time___new_Tm_gmtime___impl(  )
{
#line 74 "../../lib/core/time.nit"


		struct tm *tm;
		time_t t = time(NULL);
		tm = gmtime(&t);
		return tm;
	}
struct tm * core__time___new_Tm_gmtime_from_timet___impl( time_t t )
{
#line 82 "../../lib/core/time.nit"


		struct tm *tm;
		tm = gmtime(&t);
		return tm;
	}
struct tm * core__time___new_Tm_localtime___impl(  )
{
#line 89 "../../lib/core/time.nit"


		struct tm *tm;
		time_t t = time(NULL);
		tm = localtime(&t);
		return tm;
	}
struct tm * core__time___new_Tm_localtime_from_timet___impl( time_t t )
{
#line 97 "../../lib/core/time.nit"


		struct tm *tm;
		tm = localtime(&t);
		return tm;
	}
time_t core__time___Tm_to_timet___impl( struct tm * self )
{
#line 104 "../../lib/core/time.nit"

 return mktime(self); }
long core__time___Tm_sec___impl( struct tm * self )
{
#line 107 "../../lib/core/time.nit"

 return self->tm_sec; }
long core__time___Tm_min___impl( struct tm * self )
{
#line 110 "../../lib/core/time.nit"

 return self->tm_min; }
long core__time___Tm_hour___impl( struct tm * self )
{
#line 113 "../../lib/core/time.nit"

 return self->tm_hour; }
long core__time___Tm_mday___impl( struct tm * self )
{
#line 116 "../../lib/core/time.nit"

 return self->tm_mday; }
long core__time___Tm_mon___impl( struct tm * self )
{
#line 119 "../../lib/core/time.nit"

 return self->tm_mon; }
long core__time___Tm_year___impl( struct tm * self )
{
#line 122 "../../lib/core/time.nit"

 return self->tm_year; }
long core__time___Tm_wday___impl( struct tm * self )
{
#line 125 "../../lib/core/time.nit"

 return self->tm_wday; }
long core__time___Tm_yday___impl( struct tm * self )
{
#line 128 "../../lib/core/time.nit"

 return self->tm_yday; }
int core__time___Tm_is_dst___impl( struct tm * self )
{
#line 131 "../../lib/core/time.nit"

 return self->tm_isdst; }
String core__time___Tm_asctime___impl( struct tm * self )
{
#line 134 "../../lib/core/time.nit"


		return NativeString_to_s_with_copy( asctime(self) );
	}
String core__time___Tm_strftime___impl( struct tm * self, String format )
{
#line 140 "../../lib/core/time.nit"


		char* buf, *c_format;

		buf = (char*)malloc(100);
		c_format = String_to_cstring(format);

		strftime(buf, 100, c_format, self);
		String s = NativeString_to_s_with_copy(buf);
		free(buf);
		return s;
	}
