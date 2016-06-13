#include "core__collection.sep.0.h"
/* method collection#Sequence#subarray for (self: Sequence[nullable Object], Int, Int): Array[nullable Object] */
val* core__collection___Sequence___subarray(val* self, long p0, long p1) {
val* var /* : Array[nullable Object] */;
long var_start /* var start: Int */;
long var_len /* var len: Int */;
val* var1 /* : Array[nullable Object] */;
val* var_a /* var a: Array[nullable Object] */;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_ /* var : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
var_start = p0;
var_len = p1;
var1 = NEW_core__Array((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Array__core__Sequence___35dE]);
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__array__Array__with_capacity]))(var1, var_len); /* with_capacity on <var1:Array[nullable Object]>*/
}
var_a = var1;
var_i = var_start;
{
{ /* Inline kernel#Int#+ (var_start,var_len) on <var_start:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var4 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_start + var_len;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var12 = var_i < var_;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self, long p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_i); /* [] on <self:Sequence[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var_a->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_a, var13); /* add on <var_a:Array[nullable Object]>*/
}
var14 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var14;
}
BREAK_label: (void)0;
var = var_a;
goto RET_LABEL;
RET_LABEL:;
return var;
}
