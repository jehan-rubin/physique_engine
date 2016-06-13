#include "gamnit__display.sep.0.h"
/* method display#GamnitDisplay#width for (self: GamnitDisplay): Int */
long gamnit___gamnit__GamnitDisplay___width(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "width", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__display, 30);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method display#GamnitDisplay#height for (self: GamnitDisplay): Int */
long gamnit___gamnit__GamnitDisplay___height(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "height", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__display, 33);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method display#GamnitDisplay#aspect_ratio for (self: GamnitDisplay): Float */
double gamnit___gamnit__GamnitDisplay___aspect_ratio(val* self) {
double var /* : Float */;
short int var1 /* : Bool */;
double var2 /* : Float */;
double var3 /* : Float */;
long var5 /* : Int */;
double var6 /* : Float */;
double var8 /* : Float */;
long var9 /* : Int */;
double var10 /* : Float */;
double var12 /* : Float */;
double var13 /* : Float */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var16 /* : Float */;
var1 = self->attrs[COLOR_gamnit__display__GamnitDisplay__lazy_32d_aspect_ratio].s; /* lazy _aspect_ratio on <self:GamnitDisplay> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__display__GamnitDisplay___aspect_ratio].d; /* _aspect_ratio on <self:GamnitDisplay> */
} else {
{
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__display__GamnitDisplay__width]))(self); /* width on <self:GamnitDisplay>*/
}
{
{ /* Inline kernel#Int#to_f (var5) on <var5:Int> */
var8 = (double)var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__display__GamnitDisplay__height]))(self); /* height on <self:GamnitDisplay>*/
}
{
{ /* Inline kernel#Int#to_f (var9) on <var9:Int> */
var12 = (double)var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var6,var10) on <var6:Float> */
/* Covariant cast for argument 0 (i) <var10:Float> isa OTHER */
/* <var10:Float> isa OTHER */
var15 = 1; /* easy <var10:Float> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var16 = var6 / var10;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var3 = var13;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_gamnit__display__GamnitDisplay___aspect_ratio].d = var3; /* _aspect_ratio on <self:GamnitDisplay> */
var2 = var3;
self->attrs[COLOR_gamnit__display__GamnitDisplay__lazy_32d_aspect_ratio].s = 1; /* lazy _aspect_ratio on <self:GamnitDisplay> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method display#GamnitDisplay#aspect_ratio= for (self: GamnitDisplay, Float) */
void gamnit___gamnit__GamnitDisplay___aspect_ratio_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__display__GamnitDisplay___aspect_ratio].d = p0; /* _aspect_ratio on <self:GamnitDisplay> */
self->attrs[COLOR_gamnit__display__GamnitDisplay__lazy_32d_aspect_ratio].s = 1; /* lazy _aspect_ratio on <self:GamnitDisplay> */
RET_LABEL:;
}
/* method display#GamnitDisplay#lock_cursor for (self: GamnitDisplay): Bool */
short int gamnit___gamnit__GamnitDisplay___lock_cursor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_gamnit__display__GamnitDisplay___lock_cursor].s; /* _lock_cursor on <self:GamnitDisplay> */
var = var1;
RET_LABEL:;
return var;
}
/* method display#GamnitDisplay#lock_cursor= for (self: GamnitDisplay, Bool) */
void gamnit___gamnit__GamnitDisplay___lock_cursor_61d(val* self, short int p0) {
self->attrs[COLOR_gamnit__display__GamnitDisplay___lock_cursor].s = p0; /* _lock_cursor on <self:GamnitDisplay> */
RET_LABEL:;
}
/* method display#GamnitDisplay#show_cursor for (self: GamnitDisplay): Bool */
short int gamnit___gamnit__GamnitDisplay___show_cursor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_gamnit__display__GamnitDisplay___show_cursor].s; /* _show_cursor on <self:GamnitDisplay> */
var = var1;
RET_LABEL:;
return var;
}
/* method display#GamnitDisplay#show_cursor= for (self: GamnitDisplay, Bool) */
void gamnit___gamnit__GamnitDisplay___show_cursor_61d(val* self, short int p0) {
self->attrs[COLOR_gamnit__display__GamnitDisplay___show_cursor].s = p0; /* _show_cursor on <self:GamnitDisplay> */
RET_LABEL:;
}
/* method display#GamnitDisplay#setup for (self: GamnitDisplay) */
void gamnit___gamnit__GamnitDisplay___setup(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "setup", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__display, 47);
fatal_exit(1);
RET_LABEL:;
}
/* method display#GamnitDisplay#close for (self: GamnitDisplay) */
void gamnit___gamnit__GamnitDisplay___close(val* self) {
RET_LABEL:;
}
/* method display#GamnitDisplay#flip for (self: GamnitDisplay) */
void gamnit___gamnit__GamnitDisplay___flip(val* self) {
RET_LABEL:;
}
/* method display#GamnitDisplay#feed_events for (self: GamnitDisplay) */
void gamnit___gamnit__GamnitDisplay___feed_events(val* self) {
RET_LABEL:;
}
/* method display#Sys#debug_gamnit for (self: Sys): Bool */
short int gamnit__display___core__Sys___debug_gamnit(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
