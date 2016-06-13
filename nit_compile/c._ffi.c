/*
	Extern implementation of Nit module c
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "c._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
 int*  c___new_NativeCIntArray___impl( long size )
{
#line 112 "../../lib/c.nit"

 return calloc(size, sizeof(int)); }
long c___NativeCIntArray__index___impl(  int*  self, long index )
{
#line 114 "../../lib/c.nit"

 return self[index]; }
void c___NativeCIntArray__index_assign___impl(  int*  self, long index, long val )
{
#line 115 "../../lib/c.nit"

 self[index] = val; }
 int*  c___NativeCIntArray__plus___impl(  int*  self, long offset )
{
#line 117 "../../lib/c.nit"

 return self + offset; }
 uint16_t*  c___new_NativeCUInt16Array___impl( long size )
{
#line 148 "../../lib/c.nit"

 return calloc(size, sizeof(uint16_t)); }
long c___NativeCUInt16Array__index___impl(  uint16_t*  self, long index )
{
#line 150 "../../lib/c.nit"

 return self[index]; }
void c___NativeCUInt16Array__index_assign___impl(  uint16_t*  self, long index, long val )
{
#line 151 "../../lib/c.nit"

 self[index] = val; }
 uint16_t*  c___NativeCUInt16Array__plus___impl(  uint16_t*  self, long offset )
{
#line 153 "../../lib/c.nit"

 return self + offset; }
 unsigned char*  c___new_NativeCByteArray___impl( long size )
{
#line 196 "../../lib/c.nit"

 return calloc(size, sizeof(unsigned char)); }
unsigned char c___NativeCByteArray__index___impl(  unsigned char*  self, long index )
{
#line 198 "../../lib/c.nit"

 return self[index]; }
void c___NativeCByteArray__index_assign___impl(  unsigned char*  self, long index, unsigned char val )
{
#line 199 "../../lib/c.nit"

 self[index] = val; }
 unsigned char*  c___NativeCByteArray__plus___impl(  unsigned char*  self, long offset )
{
#line 201 "../../lib/c.nit"

 return self + offset; }
void c___NativeCByteArray_move___impl(  unsigned char*  self, long dst_offset, long src_offset, long n )
{
#line 204 "../../lib/c.nit"


		memmove(self+dst_offset, self+src_offset, n);
	}
 char**  c___new_NativeCStringArray___impl( long size )
{
#line 239 "../../lib/c.nit"

 return calloc(size, sizeof(char*)); }
char* c___NativeCStringArray__index___impl(  char**  self, long index )
{
#line 241 "../../lib/c.nit"

 return self[index]; }
void c___NativeCStringArray__index_assign___impl(  char**  self, long index, char* val )
{
#line 242 "../../lib/c.nit"

 self[index] = val; }
 char**  c___NativeCStringArray__plus___impl(  char**  self, long offset )
{
#line 243 "../../lib/c.nit"

 return self + offset; }
char* c___NativeString__plus___impl( char* self, long offset )
{
#line 250 "../../lib/c.nit"

 return self + offset; }
