#include "c.sep.0.h"
/* method c#CArray#native_array for (self: CArray[nullable Object]): NativeCArray */
val* c___c__CArray___native_array(val* self) {
val* var /* : NativeCArray */;
val* var1 /* : NativeCArray */;
var1 = self->attrs[COLOR_c__CArray___native_array].val; /* _native_array on <self:CArray[nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native_array");
PRINT_ERROR(" (%s:%d)\n", FILE_c, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c#CArray#native_array= for (self: CArray[nullable Object], NativeCArray) */
void c___c__CArray___native_array_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (native_array) <p0:NativeCArray> isa NATIVE */
/* <p0:NativeCArray> isa NATIVE */
type_struct = self->type->resolution_table->types[COLOR_c__CArray__NATIVE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NATIVE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 30);
fatal_exit(1);
}
self->attrs[COLOR_c__CArray___native_array].val = p0; /* _native_array on <self:CArray[nullable Object]> */
RET_LABEL:;
}
/* method c#CArray#init for (self: CArray[nullable Object], Int) */
void c___c__CArray___init(val* self, long p0) {
long var_length /* var length: Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:CArray[nullable Object]>*/
}
var_length = p0;
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = var_length; /* _length on <self:CArray[nullable Object]> */
RET_LABEL:;
}
/* method c#CArray#[] for (self: CArray[nullable Object], Int): nullable Object */
val* c___c__CArray___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
long var_index /* var index: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : NativeCArray */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name21;
var_index = p0;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_c__CArray__destroyed]))(self); /* destroyed on <self:CArray[nullable Object]>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_c, 37);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var7 = var_index >= 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:CArray[nullable Object]>*/
}
{
{ /* Inline kernel#Int#< (var_index,var8) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var15 = var_index < var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var3 = var9;
} else {
var3 = var_;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_c, 38);
fatal_exit(1);
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_c__CArray__native_array]))(self); /* native_array on <self:CArray[nullable Object]>*/
}
{
var17 = ((val*(*)(val* self, long p0))(var16->class->vft[COLOR_c__NativeCArray___91d_93d]))(var16, var_index); /* [] on <var16:NativeCArray>*/
}
/* <var17:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_c__CArray___35dE];
cltype19 = type_struct->color;
idtype20 = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var17 == NULL) {
var18 = is_nullable;
} else {
if(cltype19 >= (((long)var17&3)?type_info[((long)var17&3)]:var17->type)->table_size) {
var18 = 0;
} else {
var18 = (((long)var17&3)?type_info[((long)var17&3)]:var17->type)->type_table[cltype19] == idtype20;
}
}
if (unlikely(!var18)) {
var_class_name21 = var17 == NULL ? "null" : (((long)var17&3)?type_info[((long)var17&3)]:var17->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 39);
fatal_exit(1);
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#CArray#[]= for (self: CArray[nullable Object], Int, nullable Object) */
void c___c__CArray____91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
long var_index /* var index: Int */;
val* var_val /* var val: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
val* var19 /* : NativeCArray */;
/* Covariant cast for argument 1 (val) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_c__CArray___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 42);
fatal_exit(1);
}
var_index = p0;
var_val = p1;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_c__CArray__destroyed]))(self); /* destroyed on <self:CArray[nullable Object]>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_c, 45);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var10 = var_index >= 0l;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
{
var11 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:CArray[nullable Object]>*/
}
{
{ /* Inline kernel#Int#< (var_index,var11) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var18 = var_index < var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var3 = var12;
} else {
var3 = var_;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_c, 46);
fatal_exit(1);
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_c__CArray__native_array]))(self); /* native_array on <self:CArray[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var19->class->vft[COLOR_c__NativeCArray___91d_93d_61d]))(var19, var_index, var_val); /* []= on <var19:NativeCArray>*/
}
RET_LABEL:;
}
/* method c#CArray#destroyed for (self: CArray[nullable Object]): Bool */
short int c___c__CArray___destroyed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_c__CArray___destroyed].s; /* _destroyed on <self:CArray[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method c#CArray#destroyed= for (self: CArray[nullable Object], Bool) */
void c___c__CArray___destroyed_61d(val* self, short int p0) {
self->attrs[COLOR_c__CArray___destroyed].s = p0; /* _destroyed on <self:CArray[nullable Object]> */
RET_LABEL:;
}
/* method c#CArray#destroy for (self: CArray[nullable Object]) */
void c___c__CArray___destroy(val* self) {
short int var /* : Bool */;
val* var1 /* : NativeCArray */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_c__CArray__destroyed]))(self); /* destroyed on <self:CArray[nullable Object]>*/
}
if (var){
goto RET_LABEL;
} else {
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_c__CArray__native_array]))(self); /* native_array on <self:CArray[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Pointer__free]))(var1); /* free on <var1:NativeCArray>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_c__CArray__destroyed_61d]))(self, 1); /* destroyed= on <self:CArray[nullable Object]>*/
}
RET_LABEL:;
}
/* method c#NativeCArray#[] for (self: NativeCArray, Int): nullable Object */
val* c___c__NativeCArray____91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "[]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 73);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method c#NativeCArray#[]= for (self: NativeCArray, Int, nullable Object) */
void c___c__NativeCArray____91d_93d_61d(val* self, long p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "[]=", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 76);
fatal_exit(1);
RET_LABEL:;
}
/* method c#NativeCArray#+ for (self: NativeCArray, Int): NativeCArray */
val* c___c__NativeCArray____43d(val* self, long p0) {
val* var /* : NativeCArray */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "+", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 79);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method c#CIntArray#init for (self: CIntArray, Int) */
void c___c__CIntArray___init(val* self, long p0) {
long var_size /* var size: Int */;
val* var /* : NativeCIntArray */;
val* var1 /* : NativeCIntArray */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_size = p0;
var = NEW_c__NativeCIntArray(&type_c__NativeCIntArray);
{
var1 = ((val*(*)(val* self, long p0))(var->class->vft[COLOR_c__NativeCIntArray__new]))(var, var_size); /* new on <var:NativeCIntArray>*/
}
/* <var1:NativeCIntArray> isa NATIVE */
type_struct = self->type->resolution_table->types[COLOR_c__CArray__NATIVE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NATIVE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 92);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_c__CArray__native_array_61d]))(self, var1); /* native_array= on <self:CIntArray>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_c__CArray__init]))(self, var_size); /* init on <self:CIntArray>*/
}
RET_LABEL:;
}
/* method c#CIntArray#from for (self: CIntArray, SequenceRead[Int]): CIntArray */
val* c___c__CIntArray___from(val* self, val* p0) {
val* var /* : CIntArray */;
val* var_array /* var array: SequenceRead[Int] */;
val* var1 /* : CIntArray */;
long var2 /* : Int */;
val* var_carray /* var carray: CIntArray */;
long var3 /* : Int */;
val* var4 /* : Range[Int] */;
val* var_ /* var : Range[Int] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : Iterator[Int] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
long var_i /* var i: Int */;
val* var10 /* : nullable Object */;
var_array = p0;
var1 = NEW_c__CIntArray(&type_c__CIntArray);
{
var2 = ((long(*)(val* self))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:SequenceRead[Int]>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_c__CIntArray__init]))(var1, var2); /* init on <var1:CIntArray>*/
}
var_carray = var1;
{
var3 = ((long(*)(val* self))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:SequenceRead[Int]>*/
}
var4 = core__range___Int___times(var3);
var_ = var4;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Range[Int]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:Iterator[Int]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:Iterator[Int]>*/
}
var9 = (long)(var8)>>2;
var_i = var9;
{
var10 = ((val*(*)(val* self, long p0))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_array, var_i); /* [] on <var_array:SequenceRead[Int]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_carray->class->vft[COLOR_c__CArray___91d_93d_61d]))(var_carray, var_i, var10); /* []= on <var_carray:CIntArray>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:Iterator[Int]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:Iterator[Int]>*/
}
var = var_carray;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeCIntArray#new for (self: NativeCIntArray, Int): NativeCIntArray */
val* c___c__NativeCIntArray___new(val* self, long p0) {
val* var /* : NativeCIntArray */;
val* var1 /* : NativeCIntArray */;
val* var2 /* : NativeCIntArray */;
var1 = c___new_NativeCIntArray___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeCIntArray */
var2->type = &type_c__NativeCIntArray;
var2->class = &class_c__NativeCIntArray;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeCIntArray#[] for (self: NativeCIntArray, Int): Int */
long c___c__NativeCIntArray___NativeCArray___91d_93d(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeCIntArray for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeCIntArray */
var1 = c___NativeCIntArray__index___impl(var2, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeCIntArray#[] for (self: NativeCArray, Int): nullable Object */
val* VIRTUAL_c___c__NativeCIntArray___NativeCArray___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
long var1 /* : Int */;
val* var2 /* : nullable Object */;
var1 = c___c__NativeCIntArray___NativeCArray___91d_93d(self, p0);
var2 = (val*)(var1<<2|1);
var = var2;
RET_LABEL:;
return var;
}
/* method c#NativeCIntArray#[]= for (self: NativeCIntArray, Int, Int) */
void c___c__NativeCIntArray___NativeCArray___91d_93d_61d(val* self, long p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
void* var1 /* : NativeCIntArray for extern */;
/* Covariant cast for argument 1 (val) <p1:Int> isa E */
/* <p1:Int> isa E */
var = 1; /* easy <p1:Int> isa E*/
if (unlikely(!var)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 116);
fatal_exit(1);
}
var1 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeCIntArray */
c___NativeCIntArray__index_assign___impl(var1, p0, p1);
RET_LABEL:;
}
/* method c#NativeCIntArray#[]= for (self: NativeCArray, Int, nullable Object) */
void VIRTUAL_c___c__NativeCIntArray___NativeCArray___91d_93d_61d(val* self, long p0, val* p1) {
long var /* : Int */;
var = (long)(p1)>>2;
c___c__NativeCIntArray___NativeCArray___91d_93d_61d(self, p0, var); /* Direct call c#NativeCIntArray#[]= on <self:NativeCArray(NativeCIntArray)>*/
RET_LABEL:;
}
/* method c#NativeCIntArray#+ for (self: NativeCIntArray, Int): NativeCIntArray */
val* c___c__NativeCIntArray___NativeCArray___43d(val* self, long p0) {
val* var /* : NativeCIntArray */;
val* var1 /* : NativeCIntArray */;
void* var2 /* : NativeCIntArray for extern */;
val* var3 /* : NativeCIntArray */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeCIntArray */
var1 = c___NativeCIntArray__plus___impl(var2, p0);
var3 = BOX_core__Pointer(var1); /* boxing NativeCIntArray */
var3->type = &type_c__NativeCIntArray;
var3->class = &class_c__NativeCIntArray;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#CUInt16Array#init for (self: CUInt16Array, Int) */
void c___c__CUInt16Array___init(val* self, long p0) {
long var_size /* var size: Int */;
val* var /* : NativeCUInt16Array */;
val* var1 /* : NativeCUInt16Array */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_size = p0;
var = NEW_c__NativeCUInt16Array(&type_c__NativeCUInt16Array);
{
var1 = ((val*(*)(val* self, long p0))(var->class->vft[COLOR_c__NativeCUInt16Array__new]))(var, var_size); /* new on <var:NativeCUInt16Array>*/
}
/* <var1:NativeCUInt16Array> isa NATIVE */
type_struct = self->type->resolution_table->types[COLOR_c__CArray__NATIVE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NATIVE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 128);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_c__CArray__native_array_61d]))(self, var1); /* native_array= on <self:CUInt16Array>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_c__CArray__init]))(self, var_size); /* init on <self:CUInt16Array>*/
}
RET_LABEL:;
}
/* method c#CUInt16Array#from for (self: CUInt16Array, SequenceRead[Int]): CUInt16Array */
val* c___c__CUInt16Array___from(val* self, val* p0) {
val* var /* : CUInt16Array */;
val* var_array /* var array: SequenceRead[Int] */;
val* var1 /* : CUInt16Array */;
long var2 /* : Int */;
val* var_carray /* var carray: CUInt16Array */;
long var3 /* : Int */;
val* var4 /* : Range[Int] */;
val* var_ /* var : Range[Int] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : Iterator[Int] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
long var_i /* var i: Int */;
val* var10 /* : nullable Object */;
var_array = p0;
var1 = NEW_c__CUInt16Array(&type_c__CUInt16Array);
{
var2 = ((long(*)(val* self))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:SequenceRead[Int]>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_c__CUInt16Array__init]))(var1, var2); /* init on <var1:CUInt16Array>*/
}
var_carray = var1;
{
var3 = ((long(*)(val* self))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:SequenceRead[Int]>*/
}
var4 = core__range___Int___times(var3);
var_ = var4;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Range[Int]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:Iterator[Int]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:Iterator[Int]>*/
}
var9 = (long)(var8)>>2;
var_i = var9;
{
var10 = ((val*(*)(val* self, long p0))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_array, var_i); /* [] on <var_array:SequenceRead[Int]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_carray->class->vft[COLOR_c__CArray___91d_93d_61d]))(var_carray, var_i, var10); /* []= on <var_carray:CUInt16Array>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:Iterator[Int]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:Iterator[Int]>*/
}
var = var_carray;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeCUInt16Array#new for (self: NativeCUInt16Array, Int): NativeCUInt16Array */
val* c___c__NativeCUInt16Array___new(val* self, long p0) {
val* var /* : NativeCUInt16Array */;
val* var1 /* : NativeCUInt16Array */;
val* var2 /* : NativeCUInt16Array */;
var1 = c___new_NativeCUInt16Array___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeCUInt16Array */
var2->type = &type_c__NativeCUInt16Array;
var2->class = &class_c__NativeCUInt16Array;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeCUInt16Array#[] for (self: NativeCUInt16Array, Int): Int */
long c___c__NativeCUInt16Array___NativeCArray___91d_93d(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeCUInt16Array for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeCUInt16Array */
var1 = c___NativeCUInt16Array__index___impl(var2, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeCUInt16Array#[] for (self: NativeCArray, Int): nullable Object */
val* VIRTUAL_c___c__NativeCUInt16Array___NativeCArray___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
long var1 /* : Int */;
val* var2 /* : nullable Object */;
var1 = c___c__NativeCUInt16Array___NativeCArray___91d_93d(self, p0);
var2 = (val*)(var1<<2|1);
var = var2;
RET_LABEL:;
return var;
}
/* method c#NativeCUInt16Array#[]= for (self: NativeCUInt16Array, Int, Int) */
void c___c__NativeCUInt16Array___NativeCArray___91d_93d_61d(val* self, long p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
void* var1 /* : NativeCUInt16Array for extern */;
/* Covariant cast for argument 1 (val) <p1:Int> isa E */
/* <p1:Int> isa E */
var = 1; /* easy <p1:Int> isa E*/
if (unlikely(!var)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 152);
fatal_exit(1);
}
var1 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeCUInt16Array */
c___NativeCUInt16Array__index_assign___impl(var1, p0, p1);
RET_LABEL:;
}
/* method c#NativeCUInt16Array#[]= for (self: NativeCArray, Int, nullable Object) */
void VIRTUAL_c___c__NativeCUInt16Array___NativeCArray___91d_93d_61d(val* self, long p0, val* p1) {
long var /* : Int */;
var = (long)(p1)>>2;
c___c__NativeCUInt16Array___NativeCArray___91d_93d_61d(self, p0, var); /* Direct call c#NativeCUInt16Array#[]= on <self:NativeCArray(NativeCUInt16Array)>*/
RET_LABEL:;
}
/* method c#NativeCUInt16Array#+ for (self: NativeCUInt16Array, Int): NativeCUInt16Array */
val* c___c__NativeCUInt16Array___NativeCArray___43d(val* self, long p0) {
val* var /* : NativeCUInt16Array */;
val* var1 /* : NativeCUInt16Array */;
void* var2 /* : NativeCUInt16Array for extern */;
val* var3 /* : NativeCUInt16Array */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeCUInt16Array */
var1 = c___NativeCUInt16Array__plus___impl(var2, p0);
var3 = BOX_core__Pointer(var1); /* boxing NativeCUInt16Array */
var3->type = &type_c__NativeCUInt16Array;
var3->class = &class_c__NativeCUInt16Array;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#CByteArray#init for (self: CByteArray, Int) */
void c___c__CByteArray___init(val* self, long p0) {
long var_size /* var size: Int */;
val* var /* : NativeCByteArray */;
val* var1 /* : NativeCByteArray */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_size = p0;
var = NEW_c__NativeCByteArray(&type_c__NativeCByteArray);
{
var1 = ((val*(*)(val* self, long p0))(var->class->vft[COLOR_c__NativeCByteArray__new]))(var, var_size); /* new on <var:NativeCByteArray>*/
}
/* <var1:NativeCByteArray> isa NATIVE */
type_struct = self->type->resolution_table->types[COLOR_c__CArray__NATIVE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NATIVE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 164);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_c__CArray__native_array_61d]))(self, var1); /* native_array= on <self:CByteArray>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_c__CArray__init]))(self, var_size); /* init on <self:CByteArray>*/
}
RET_LABEL:;
}
/* method c#CByteArray#from for (self: CByteArray, SequenceRead[Byte]): CByteArray */
val* c___c__CByteArray___from(val* self, val* p0) {
val* var /* : CByteArray */;
val* var_array /* var array: SequenceRead[Byte] */;
val* var1 /* : CByteArray */;
long var2 /* : Int */;
val* var_carray /* var carray: CByteArray */;
long var3 /* : Int */;
val* var4 /* : Range[Int] */;
val* var_ /* var : Range[Int] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : Iterator[Int] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
long var_i /* var i: Int */;
val* var10 /* : nullable Object */;
var_array = p0;
var1 = NEW_c__CByteArray(&type_c__CByteArray);
{
var2 = ((long(*)(val* self))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:SequenceRead[Byte]>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_c__CByteArray__init]))(var1, var2); /* init on <var1:CByteArray>*/
}
var_carray = var1;
{
var3 = ((long(*)(val* self))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:SequenceRead[Byte]>*/
}
var4 = core__range___Int___times(var3);
var_ = var4;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Range[Int]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:Iterator[Int]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:Iterator[Int]>*/
}
var9 = (long)(var8)>>2;
var_i = var9;
{
var10 = ((val*(*)(val* self, long p0))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_array, var_i); /* [] on <var_array:SequenceRead[Byte]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_carray->class->vft[COLOR_c__CArray___91d_93d_61d]))(var_carray, var_i, var10); /* []= on <var_carray:CByteArray>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:Iterator[Int]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:Iterator[Int]>*/
}
var = var_carray;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#CByteArray#move for (self: CByteArray, Int, Int, Int) */
void c___c__CByteArray___move(val* self, long p0, long p1, long p2) {
long var_dst_offset /* var dst_offset: Int */;
long var_src_offset /* var src_offset: Int */;
long var_n /* var n: Int */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
short int var_13 /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
val* var51 /* : NativeCArray */;
var_dst_offset = p0;
var_src_offset = p1;
var_n = p2;
{
{ /* Inline kernel#Int#>= (var_dst_offset,0l) on <var_dst_offset:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var5 = var_dst_offset >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel#Int#>= (var_src_offset,0l) on <var_src_offset:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var12 = var_src_offset >= 0l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
var_13 = var1;
if (var1){
{
{ /* Inline kernel#Int#>= (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var16 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var20 = var_n >= 0l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var = var14;
} else {
var = var_13;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_c, 183);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#+ (var_dst_offset,var_n) on <var_dst_offset:Int> */
/* Covariant cast for argument 0 (i) <var_n:Int> isa OTHER */
/* <var_n:Int> isa OTHER */
var23 = 1; /* easy <var_n:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var27 = var_dst_offset + var_n;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var28 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:CByteArray>*/
}
{
{ /* Inline kernel#Int#<= (var21,var28) on <var21:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var31 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var35 = var21 <= var28;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_c, 184);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#+ (var_src_offset,var_n) on <var_src_offset:Int> */
/* Covariant cast for argument 0 (i) <var_n:Int> isa OTHER */
/* <var_n:Int> isa OTHER */
var38 = 1; /* easy <var_n:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var42 = var_src_offset + var_n;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
var43 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:CByteArray>*/
}
{
{ /* Inline kernel#Int#<= (var36,var43) on <var36:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var50 = var36 <= var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (unlikely(!var44)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_c, 185);
fatal_exit(1);
}
{
var51 = ((val*(*)(val* self))(self->class->vft[COLOR_c__CArray__native_array]))(self); /* native_array on <self:CByteArray>*/
}
{
((void(*)(val* self, long p0, long p1, long p2))(var51->class->vft[COLOR_c__NativeCByteArray__move]))(var51, var_dst_offset, var_src_offset, var_n); /* move on <var51:NativeCArray(NativeCByteArray)>*/
}
RET_LABEL:;
}
/* method c#NativeCByteArray#new for (self: NativeCByteArray, Int): NativeCByteArray */
val* c___c__NativeCByteArray___new(val* self, long p0) {
val* var /* : NativeCByteArray */;
val* var1 /* : NativeCByteArray */;
val* var2 /* : NativeCByteArray */;
var1 = c___new_NativeCByteArray___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeCByteArray */
var2->type = &type_c__NativeCByteArray;
var2->class = &class_c__NativeCByteArray;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeCByteArray#[] for (self: NativeCByteArray, Int): Byte */
unsigned char c___c__NativeCByteArray___NativeCArray___91d_93d(val* self, long p0) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
void* var2 /* : NativeCByteArray for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeCByteArray */
var1 = c___NativeCByteArray__index___impl(var2, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeCByteArray#[] for (self: NativeCArray, Int): nullable Object */
val* VIRTUAL_c___c__NativeCByteArray___NativeCArray___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = c___c__NativeCByteArray___NativeCArray___91d_93d(self, p0);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method c#NativeCByteArray#[]= for (self: NativeCByteArray, Int, Byte) */
void c___c__NativeCByteArray___NativeCArray___91d_93d_61d(val* self, long p0, unsigned char p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
void* var1 /* : NativeCByteArray for extern */;
/* Covariant cast for argument 1 (val) <p1:Byte> isa E */
/* <p1:Byte> isa E */
var = 1; /* easy <p1:Byte> isa E*/
if (unlikely(!var)) {
var_class_name = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 200);
fatal_exit(1);
}
var1 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeCByteArray */
c___NativeCByteArray__index_assign___impl(var1, p0, p1);
RET_LABEL:;
}
/* method c#NativeCByteArray#[]= for (self: NativeCArray, Int, nullable Object) */
void VIRTUAL_c___c__NativeCByteArray___NativeCArray___91d_93d_61d(val* self, long p0, val* p1) {
unsigned char var /* : Byte */;
var = ((struct instance_core__Byte*)p1)->value; /* autounbox from nullable Object to Byte */;
c___c__NativeCByteArray___NativeCArray___91d_93d_61d(self, p0, var); /* Direct call c#NativeCByteArray#[]= on <self:NativeCArray(NativeCByteArray)>*/
RET_LABEL:;
}
/* method c#NativeCByteArray#+ for (self: NativeCByteArray, Int): NativeCByteArray */
val* c___c__NativeCByteArray___NativeCArray___43d(val* self, long p0) {
val* var /* : NativeCByteArray */;
val* var1 /* : NativeCByteArray */;
void* var2 /* : NativeCByteArray for extern */;
val* var3 /* : NativeCByteArray */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeCByteArray */
var1 = c___NativeCByteArray__plus___impl(var2, p0);
var3 = BOX_core__Pointer(var1); /* boxing NativeCByteArray */
var3->type = &type_c__NativeCByteArray;
var3->class = &class_c__NativeCByteArray;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeCByteArray#move for (self: NativeCByteArray, Int, Int, Int) */
void c___c__NativeCByteArray___move(val* self, long p0, long p1, long p2) {
void* var /* : NativeCByteArray for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeCByteArray */
c___NativeCByteArray_move___impl(var, p0, p1, p2);
RET_LABEL:;
}
/* method c#CNativeStringArray#init for (self: CNativeStringArray, Int) */
void c___c__CNativeStringArray___init(val* self, long p0) {
long var_size /* var size: Int */;
val* var /* : NativeCStringArray */;
val* var1 /* : NativeCStringArray */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_size = p0;
var = NEW_c__NativeCStringArray(&type_c__NativeCStringArray);
{
var1 = ((val*(*)(val* self, long p0))(var->class->vft[COLOR_c__NativeCStringArray__new]))(var, var_size); /* new on <var:NativeCStringArray>*/
}
/* <var1:NativeCStringArray> isa NATIVE */
type_struct = self->type->resolution_table->types[COLOR_c__CArray__NATIVE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NATIVE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 218);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_c__CArray__native_array_61d]))(self, var1); /* native_array= on <self:CNativeStringArray>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_c__CArray__init]))(self, var_size); /* init on <self:CNativeStringArray>*/
}
RET_LABEL:;
}
/* method c#CNativeStringArray#from for (self: CNativeStringArray, SequenceRead[NativeString]): CNativeStringArray */
val* c___c__CNativeStringArray___from(val* self, val* p0) {
val* var /* : CNativeStringArray */;
val* var_array /* var array: SequenceRead[NativeString] */;
val* var1 /* : CNativeStringArray */;
long var2 /* : Int */;
val* var_carray /* var carray: CNativeStringArray */;
long var3 /* : Int */;
val* var4 /* : Range[Int] */;
val* var_ /* var : Range[Int] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : Iterator[Int] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
long var_i /* var i: Int */;
val* var10 /* : nullable Object */;
var_array = p0;
var1 = NEW_c__CNativeStringArray(&type_c__CNativeStringArray);
{
var2 = ((long(*)(val* self))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:SequenceRead[NativeString]>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_c__CNativeStringArray__init]))(var1, var2); /* init on <var1:CNativeStringArray>*/
}
var_carray = var1;
{
var3 = ((long(*)(val* self))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:SequenceRead[NativeString]>*/
}
var4 = core__range___Int___times(var3);
var_ = var4;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Range[Int]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:Iterator[Int]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:Iterator[Int]>*/
}
var9 = (long)(var8)>>2;
var_i = var9;
{
var10 = ((val*(*)(val* self, long p0))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_array, var_i); /* [] on <var_array:SequenceRead[NativeString]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_carray->class->vft[COLOR_c__CArray___91d_93d_61d]))(var_carray, var_i, var10); /* []= on <var_carray:CNativeStringArray>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:Iterator[Int]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:Iterator[Int]>*/
}
var = var_carray;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeCStringArray#new for (self: NativeCStringArray, Int): NativeCStringArray */
val* c___c__NativeCStringArray___new(val* self, long p0) {
val* var /* : NativeCStringArray */;
val* var1 /* : NativeCStringArray */;
val* var2 /* : NativeCStringArray */;
var1 = c___new_NativeCStringArray___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeCStringArray */
var2->type = &type_c__NativeCStringArray;
var2->class = &class_c__NativeCStringArray;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeCStringArray#[] for (self: NativeCStringArray, Int): NativeString */
char* c___c__NativeCStringArray___NativeCArray___91d_93d(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
void* var2 /* : NativeCStringArray for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeCStringArray */
var1 = c___NativeCStringArray__index___impl(var2, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeCStringArray#[] for (self: NativeCArray, Int): nullable Object */
val* VIRTUAL_c___c__NativeCStringArray___NativeCArray___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
char* var1 /* : NativeString */;
val* var2 /* : nullable Object */;
var1 = c___c__NativeCStringArray___NativeCArray___91d_93d(self, p0);
var2 = BOX_core__NativeString(var1); /* autobox from NativeString to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method c#NativeCStringArray#[]= for (self: NativeCStringArray, Int, NativeString) */
void c___c__NativeCStringArray___NativeCArray___91d_93d_61d(val* self, long p0, char* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
void* var1 /* : NativeCStringArray for extern */;
/* Covariant cast for argument 1 (val) <p1:NativeString> isa E */
/* <p1:NativeString> isa E */
type_struct = self->type->resolution_table->types[COLOR_c__NativeCArray__E];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_core__NativeString)->table_size) {
var = 0;
} else {
var = (&type_core__NativeString)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = type_core__NativeString.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_c, 243);
fatal_exit(1);
}
var1 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeCStringArray */
c___NativeCStringArray__index_assign___impl(var1, p0, p1);
RET_LABEL:;
}
/* method c#NativeCStringArray#[]= for (self: NativeCArray, Int, nullable Object) */
void VIRTUAL_c___c__NativeCStringArray___NativeCArray___91d_93d_61d(val* self, long p0, val* p1) {
char* var /* : NativeString */;
var = ((struct instance_core__NativeString*)p1)->value; /* autounbox from nullable Object to NativeString */;
c___c__NativeCStringArray___NativeCArray___91d_93d_61d(self, p0, var); /* Direct call c#NativeCStringArray#[]= on <self:NativeCArray(NativeCStringArray)>*/
RET_LABEL:;
}
/* method c#NativeCStringArray#+ for (self: NativeCStringArray, Int): NativeCStringArray */
val* c___c__NativeCStringArray___NativeCArray___43d(val* self, long p0) {
val* var /* : NativeCStringArray */;
val* var1 /* : NativeCStringArray */;
void* var2 /* : NativeCStringArray for extern */;
val* var3 /* : NativeCStringArray */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeCStringArray */
var1 = c___NativeCStringArray__plus___impl(var2, p0);
var3 = BOX_core__Pointer(var1); /* boxing NativeCStringArray */
var3->type = &type_c__NativeCStringArray;
var3->class = &class_c__NativeCStringArray;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeString#+ for (self: NativeString, Int): NativeString */
char* c___core__NativeString___NativeCArray___43d(char* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = c___NativeString__plus___impl(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c#NativeString#+ for (self: NativeCArray, Int): NativeCArray */
val* VIRTUAL_c___core__NativeString___NativeCArray___43d(val* self, long p0) {
val* var /* : NativeCArray */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
val* var3 /* : NativeCArray */;
var2 = ((struct instance_core__NativeString*)self)->value; /* autounbox from NativeCArray to NativeString */;
var1 = c___core__NativeString___NativeCArray___43d(var2, p0);
var3 = BOX_core__Pointer(var1); /* autobox from NativeString to NativeCArray */
var = var3;
RET_LABEL:;
return var;
}
