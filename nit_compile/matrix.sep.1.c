#include "matrix.sep.0.h"
/* method matrix#Matrix#width for (self: Matrix): Int */
long matrix___matrix__Matrix___width(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_matrix__Matrix___width].l; /* _width on <self:Matrix> */
var = var1;
RET_LABEL:;
return var;
}
/* method matrix#Matrix#width= for (self: Matrix, Int) */
void matrix___matrix__Matrix___width_61d(val* self, long p0) {
self->attrs[COLOR_matrix__Matrix___width].l = p0; /* _width on <self:Matrix> */
RET_LABEL:;
}
/* method matrix#Matrix#height for (self: Matrix): Int */
long matrix___matrix__Matrix___height(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_matrix__Matrix___height].l; /* _height on <self:Matrix> */
var = var1;
RET_LABEL:;
return var;
}
/* method matrix#Matrix#height= for (self: Matrix, Int) */
void matrix___matrix__Matrix___height_61d(val* self, long p0) {
self->attrs[COLOR_matrix__Matrix___height].l = p0; /* _height on <self:Matrix> */
RET_LABEL:;
}
/* method matrix#Matrix#items for (self: Matrix): Array[Float] */
val* matrix___matrix__Matrix___items(val* self) {
val* var /* : Array[Float] */;
short int var1 /* : Bool */;
val* var2 /* : Array[Float] */;
val* var3 /* : Array[Float] */;
val* var5 /* : Array[Float] */;
long var6 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
val* var12 /* : nullable Object */;
var1 = self->attrs[COLOR_matrix__Matrix___items].val != NULL; /* _items on <self:Matrix> */
if(likely(var1)) {
var2 = self->attrs[COLOR_matrix__Matrix___items].val; /* _items on <self:Matrix> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 30);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__Array(&type_core__Array__core__Float);
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__height]))(self); /* height on <self:Matrix>*/
}
{
{ /* Inline kernel#Int#* (var6,var7) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var11 = var6 * var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var12 = BOX_core__Float(0.0); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0, long p1))(var5->class->vft[COLOR_core__array__Array__filled_with]))(var5, var12, var8); /* filled_with on <var5:Array[Float]>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_matrix__Matrix___items].val = var3; /* _items on <self:Matrix> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method matrix#Matrix#items= for (self: Matrix, Array[Float]) */
void matrix___matrix__Matrix___items_61d(val* self, val* p0) {
self->attrs[COLOR_matrix__Matrix___items].val = p0; /* _items on <self:Matrix> */
RET_LABEL:;
}
/* method matrix#Matrix#from for (self: Matrix, SequenceRead[SequenceRead[Float]]) */
void matrix___matrix__Matrix___from(val* self, val* p0) {
val* var_items /* var items: SequenceRead[SequenceRead[Float]] */;
short int var /* : Bool */;
val* var1 /* : nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
val* var5 /* : Range[Int] */;
val* var_ /* var : Range[Int] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[Int] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
long var10 /* : Int */;
long var_j /* var j: Int */;
val* var11 /* : nullable Object */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
val* var18 /* : Range[Int] */;
val* var_19 /* var : Range[Int] */;
val* var20 /* : Iterator[nullable Object] */;
val* var_21 /* var : Iterator[Int] */;
short int var22 /* : Bool */;
val* var24 /* : nullable Object */;
long var25 /* : Int */;
long var_j26 /* var j: Int */;
long var27 /* : Int */;
val* var28 /* : Range[Int] */;
val* var_29 /* var : Range[Int] */;
val* var30 /* : Iterator[nullable Object] */;
val* var_31 /* var : Iterator[Int] */;
short int var32 /* : Bool */;
val* var34 /* : nullable Object */;
long var35 /* : Int */;
long var_i /* var i: Int */;
val* var36 /* : nullable Object */;
val* var37 /* : nullable Object */;
double var38 /* : Float */;
var_items = p0;
{
var = ((short int(*)(val* self))((((long)var_items&3)?class_info[((long)var_items&3)]:var_items->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_items); /* is_empty on <var_items:SequenceRead[SequenceRead[Float]]>*/
}
if (var){
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_matrix__Matrix__width_61d]))(self, 0l); /* width= on <self:Matrix>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_matrix__Matrix__height_61d]))(self, 0l); /* height= on <self:Matrix>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:Matrix>*/
}
goto RET_LABEL;
} else {
}
{
var1 = ((val*(*)(val* self))((((long)var_items&3)?class_info[((long)var_items&3)]:var_items->class)->vft[COLOR_core__abstract_collection__Collection__first]))(var_items); /* first on <var_items:SequenceRead[SequenceRead[Float]]>*/
}
{
var2 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var1); /* length on <var1:nullable Object(SequenceRead[Float])>*/
}
{
var3 = ((long(*)(val* self))((((long)var_items&3)?class_info[((long)var_items&3)]:var_items->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_items); /* length on <var_items:SequenceRead[SequenceRead[Float]]>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_matrix__Matrix__width_61d]))(self, var2); /* width= on <self:Matrix>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_matrix__Matrix__height_61d]))(self, var3); /* height= on <self:Matrix>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:Matrix>*/
}
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__height]))(self); /* height on <self:Matrix>*/
}
var5 = core__range___Int___times(var4);
var_ = var5;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Range[Int]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[Int]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[Int]>*/
}
var10 = (long)(var9)>>2;
var_j = var10;
{
var11 = ((val*(*)(val* self, long p0))((((long)var_items&3)?class_info[((long)var_items&3)]:var_items->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_items, var_j); /* [] on <var_items:SequenceRead[SequenceRead[Float]]>*/
}
{
var12 = ((long(*)(val* self))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var11); /* length on <var11:nullable Object(SequenceRead[Float])>*/
}
{
var13 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
{
{ /* Inline kernel#Int#== (var12,var13) on <var12:Int> */
var16 = var12 == var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 55);
fatal_exit(1);
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[Int]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[Int]>*/
}
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__height]))(self); /* height on <self:Matrix>*/
}
var18 = core__range___Int___times(var17);
var_19 = var18;
{
var20 = ((val*(*)(val* self))(var_19->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_19); /* iterator on <var_19:Range[Int]>*/
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_21); /* is_ok on <var_21:Iterator[Int]>*/
}
if (var22){
} else {
goto BREAK_label23;
}
{
var24 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_21); /* item on <var_21:Iterator[Int]>*/
}
var25 = (long)(var24)>>2;
var_j26 = var25;
{
var27 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
var28 = core__range___Int___times(var27);
var_29 = var28;
{
var30 = ((val*(*)(val* self))(var_29->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_29); /* iterator on <var_29:Range[Int]>*/
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:Iterator[Int]>*/
}
if (var32){
} else {
goto BREAK_label33;
}
{
var34 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:Iterator[Int]>*/
}
var35 = (long)(var34)>>2;
var_i = var35;
{
var36 = ((val*(*)(val* self, long p0))((((long)var_items&3)?class_info[((long)var_items&3)]:var_items->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_items, var_j26); /* [] on <var_items:SequenceRead[SequenceRead[Float]]>*/
}
{
var37 = ((val*(*)(val* self, long p0))((((long)var36&3)?class_info[((long)var36&3)]:var36->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var36, var_i); /* [] on <var36:nullable Object(SequenceRead[Float])>*/
}
{
var38 = ((struct instance_core__Float*)var37)->value; /* autounbox from nullable Object to Float */;
((void(*)(val* self, long p0, long p1, double p2))(self->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(self, var_j26, var_i, var38); /* []= on <self:Matrix>*/
}
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:Iterator[Int]>*/
}
}
BREAK_label33: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:Iterator[Int]>*/
}
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_21); /* next on <var_21:Iterator[Int]>*/
}
}
BREAK_label23: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_21); /* finish on <var_21:Iterator[Int]>*/
}
RET_LABEL:;
}
/* method matrix#Matrix#to_a for (self: Matrix): Array[Array[Float]] */
val* matrix___matrix__Matrix___to_a(val* self) {
val* var /* : Array[Array[Float]] */;
val* var1 /* : Array[Array[Float]] */;
val* var_a /* var a: Array[Array[Float]] */;
long var2 /* : Int */;
val* var3 /* : Range[Int] */;
val* var_ /* var : Range[Int] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[Int] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
long var8 /* : Int */;
long var_j /* var j: Int */;
val* var9 /* : Array[Float] */;
val* var_row /* var row: Array[Float] */;
long var10 /* : Int */;
val* var11 /* : Range[Int] */;
val* var_12 /* var : Range[Int] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : Iterator[Int] */;
short int var15 /* : Bool */;
val* var17 /* : nullable Object */;
long var18 /* : Int */;
long var_i /* var i: Int */;
double var19 /* : Float */;
val* var20 /* : nullable Object */;
var1 = NEW_core__Array(&type_core__Array__core__Array__core__Float);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[Array[Float]]>*/
}
var_a = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__height]))(self); /* height on <self:Matrix>*/
}
var3 = core__range___Int___times(var2);
var_ = var3;
{
var4 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Range[Int]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[Int]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[Int]>*/
}
var8 = (long)(var7)>>2;
var_j = var8;
var9 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:Array[Float]>*/
}
var_row = var9;
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
var11 = core__range___Int___times(var10);
var_12 = var11;
{
var13 = ((val*(*)(val* self))(var_12->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_12); /* iterator on <var_12:Range[Int]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[Int]>*/
}
if (var15){
} else {
goto BREAK_label16;
}
{
var17 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[Int]>*/
}
var18 = (long)(var17)>>2;
var_i = var18;
{
var19 = ((double(*)(val* self, long p0, long p1))(self->class->vft[COLOR_matrix__Matrix___91d_93d]))(self, var_j, var_i); /* [] on <self:Matrix>*/
}
{
var20 = BOX_core__Float(var19); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_row->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_row, var20); /* add on <var_row:Array[Float]>*/
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[Int]>*/
}
}
BREAK_label16: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[Int]>*/
}
{
((void(*)(val* self, val* p0))(var_a->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_a, var_row); /* add on <var_a:Array[Array[Float]]>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[Int]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[Int]>*/
}
var = var_a;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method matrix#Matrix#from_array for (self: Matrix, Int, Int, SequenceRead[Float]) */
void matrix___matrix__Matrix___from_array(val* self, long p0, long p1, val* p2) {
long var_width /* var width: Int */;
long var_height /* var height: Int */;
val* var_array /* var array: SequenceRead[Float] */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
val* var26 /* : Range[Int] */;
val* var_ /* var : Range[Int] */;
val* var27 /* : Iterator[nullable Object] */;
val* var_28 /* var : Iterator[Int] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
long var31 /* : Int */;
long var_i /* var i: Int */;
val* var32 /* : Range[Int] */;
val* var_33 /* var : Range[Int] */;
val* var34 /* : Iterator[nullable Object] */;
val* var_35 /* var : Iterator[Int] */;
short int var36 /* : Bool */;
val* var38 /* : nullable Object */;
long var39 /* : Int */;
long var_j /* var j: Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
val* var54 /* : nullable Object */;
double var55 /* : Float */;
var_width = p0;
var_height = p1;
var_array = p2;
{
{ /* Inline kernel#Int#> (var_width,0l) on <var_width:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var3 = var_width > 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 99);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#> (var_height,0l) on <var_height:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var10 = var_height > 0l;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 100);
fatal_exit(1);
}
{
var11 = ((long(*)(val* self))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:SequenceRead[Float]>*/
}
{
{ /* Inline kernel#Int#* (var_width,var_height) on <var_width:Int> */
/* Covariant cast for argument 0 (i) <var_height:Int> isa OTHER */
/* <var_height:Int> isa OTHER */
var14 = 1; /* easy <var_height:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var18 = var_width * var_height;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var11,var12) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var21 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var25 = var11 >= var12;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 101);
fatal_exit(1);
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_matrix__Matrix__width_61d]))(self, var_width); /* width= on <self:Matrix>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_matrix__Matrix__height_61d]))(self, var_height); /* height= on <self:Matrix>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:Matrix>*/
}
var26 = core__range___Int___times(var_height);
var_ = var26;
{
var27 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Range[Int]>*/
}
var_28 = var27;
for(;;) {
{
var29 = ((short int(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_28); /* is_ok on <var_28:Iterator[Int]>*/
}
if (var29){
} else {
goto BREAK_label;
}
{
var30 = ((val*(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_28); /* item on <var_28:Iterator[Int]>*/
}
var31 = (long)(var30)>>2;
var_i = var31;
var32 = core__range___Int___times(var_width);
var_33 = var32;
{
var34 = ((val*(*)(val* self))(var_33->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_33); /* iterator on <var_33:Range[Int]>*/
}
var_35 = var34;
for(;;) {
{
var36 = ((short int(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_35); /* is_ok on <var_35:Iterator[Int]>*/
}
if (var36){
} else {
goto BREAK_label37;
}
{
var38 = ((val*(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_35); /* item on <var_35:Iterator[Int]>*/
}
var39 = (long)(var38)>>2;
var_j = var39;
{
{ /* Inline kernel#Int#* (var_j,var_width) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_width:Int> isa OTHER */
/* <var_width:Int> isa OTHER */
var42 = 1; /* easy <var_width:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var46 = var_j * var_width;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,var40) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var49 = 1; /* easy <var40:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var53 = var_i + var40;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
var54 = ((val*(*)(val* self, long p0))((((long)var_array&3)?class_info[((long)var_array&3)]:var_array->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_array, var47); /* [] on <var_array:SequenceRead[Float]>*/
}
{
var55 = ((struct instance_core__Float*)var54)->value; /* autounbox from nullable Object to Float */;
((void(*)(val* self, long p0, long p1, double p2))(self->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(self, var_j, var_i, var55); /* []= on <self:Matrix>*/
}
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_35); /* next on <var_35:Iterator[Int]>*/
}
}
BREAK_label37: (void)0;
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_35); /* finish on <var_35:Iterator[Int]>*/
}
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_28); /* next on <var_28:Iterator[Int]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_28); /* finish on <var_28:Iterator[Int]>*/
}
RET_LABEL:;
}
/* method matrix#Matrix#identity for (self: Matrix, Int): Matrix */
val* matrix___matrix__Matrix___identity(val* self, long p0) {
val* var /* : Matrix */;
long var_size /* var size: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : Matrix */;
val* var_matrix /* var matrix: Matrix */;
val* var6 /* : Range[Int] */;
val* var_ /* var : Range[Int] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[Int] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
long var11 /* : Int */;
long var_i /* var i: Int */;
val* var12 /* : Range[Int] */;
val* var_13 /* var : Range[Int] */;
val* var14 /* : Iterator[nullable Object] */;
val* var_15 /* var : Iterator[Int] */;
short int var16 /* : Bool */;
val* var18 /* : nullable Object */;
long var19 /* : Int */;
long var_j /* var j: Int */;
double var20 /* : Float */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
var_size = p0;
{
{ /* Inline kernel#Int#>= (var_size,0l) on <var_size:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var4 = var_size >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 125);
fatal_exit(1);
}
var5 = NEW_matrix__Matrix(&type_matrix__Matrix);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_matrix__Matrix__width_61d]))(var5, var_size); /* width= on <var5:Matrix>*/
}
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_matrix__Matrix__height_61d]))(var5, var_size); /* height= on <var5:Matrix>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:Matrix>*/
}
var_matrix = var5;
var6 = core__range___Int___times(var_size);
var_ = var6;
{
var7 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Range[Int]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[Int]>*/
}
if (var9){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[Int]>*/
}
var11 = (long)(var10)>>2;
var_i = var11;
var12 = core__range___Int___times(var_size);
var_13 = var12;
{
var14 = ((val*(*)(val* self))(var_13->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_13); /* iterator on <var_13:Range[Int]>*/
}
var_15 = var14;
for(;;) {
{
var16 = ((short int(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_15); /* is_ok on <var_15:Iterator[Int]>*/
}
if (var16){
} else {
goto BREAK_label17;
}
{
var18 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_15); /* item on <var_15:Iterator[Int]>*/
}
var19 = (long)(var18)>>2;
var_j = var19;
{
{ /* Inline kernel#Int#== (var_i,var_j) on <var_i:Int> */
var23 = var_i == var_j;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
var20 = 1.0;
} else {
var20 = 0.0;
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_matrix->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_matrix, var_j, var_i, var20); /* []= on <var_matrix:Matrix>*/
}
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_15); /* next on <var_15:Iterator[Int]>*/
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_15); /* finish on <var_15:Iterator[Int]>*/
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[Int]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[Int]>*/
}
var = var_matrix;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method matrix#Matrix#clone for (self: Matrix): Matrix */
val* matrix___matrix__Matrix___core__kernel__Cloneable__clone(val* self) {
val* var /* : Matrix */;
val* var1 /* : Matrix */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : Array[Float] */;
val* var5 /* : Cloneable */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_matrix__Matrix(&type_matrix__Matrix);
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__height]))(self); /* height on <self:Matrix>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__items]))(self); /* items on <self:Matrix>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__kernel__Cloneable__clone]))(var4); /* clone on <var4:Array[Float]>*/
}
{
((void(*)(val* self, long p0, long p1, val* p2))(var1->class->vft[COLOR_matrix__Matrix__from_array]))(var1, var2, var3, var5); /* from_array on <var1:Matrix>*/
}
/* <var1:Matrix> isa SELF */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Object__SELF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var6 = 0;
} else {
var6 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var6)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 137);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method matrix#Matrix#[] for (self: Matrix, Int, Int): Float */
double matrix___matrix__Matrix____91d_93d(val* self, long p0, long p1) {
double var /* : Float */;
long var_y /* var y: Int */;
long var_x /* var x: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
short int var_22 /* var : Bool */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
val* var31 /* : Array[Float] */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
val* var47 /* : nullable Object */;
double var48 /* : Float */;
var_y = p0;
var_x = p1;
{
{ /* Inline kernel#Int#>= (var_x,0l) on <var_x:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var5 = var_x >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
{
{ /* Inline kernel#Int#< (var_x,var6) on <var_x:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var13 = var_x < var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var1 = var7;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 154);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#>= (var_y,0l) on <var_y:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var21 = var_y >= 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_22 = var15;
if (var15){
{
var23 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__height]))(self); /* height on <self:Matrix>*/
}
{
{ /* Inline kernel#Int#< (var_y,var23) on <var_y:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var30 = var_y < var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var14 = var24;
} else {
var14 = var_22;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 155);
fatal_exit(1);
}
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__items]))(self); /* items on <self:Matrix>*/
}
{
var32 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
{
{ /* Inline kernel#Int#* (var_y,var32) on <var_y:Int> */
/* Covariant cast for argument 0 (i) <var32:Int> isa OTHER */
/* <var32:Int> isa OTHER */
var35 = 1; /* easy <var32:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var39 = var_y * var32;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_x,var33) on <var_x:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var42 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var46 = var_x + var33;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
var47 = ((val*(*)(val* self, long p0))(var31->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var31, var40); /* [] on <var31:Array[Float]>*/
}
var48 = ((struct instance_core__Float*)var47)->value; /* autounbox from nullable Object to Float */;
var = var48;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method matrix#Matrix#[]= for (self: Matrix, Int, Int, Float) */
void matrix___matrix__Matrix____91d_93d_61d(val* self, long p0, long p1, double p2) {
long var_y /* var y: Int */;
long var_x /* var x: Int */;
double var_value /* var value: Float */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
short int var_21 /* var : Bool */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
val* var30 /* : Array[Float] */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
val* var46 /* : nullable Object */;
var_y = p0;
var_x = p1;
var_value = p2;
{
{ /* Inline kernel#Int#>= (var_x,0l) on <var_x:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var4 = var_x >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
{
{ /* Inline kernel#Int#< (var_x,var5) on <var_x:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var12 = var_x < var5;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var = var6;
} else {
var = var_;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 178);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#>= (var_y,0l) on <var_y:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var16 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var20 = var_y >= 0l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_21 = var14;
if (var14){
{
var22 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__height]))(self); /* height on <self:Matrix>*/
}
{
{ /* Inline kernel#Int#< (var_y,var22) on <var_y:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var29 = var_y < var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var13 = var23;
} else {
var13 = var_21;
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 179);
fatal_exit(1);
}
{
var30 = ((val*(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__items]))(self); /* items on <self:Matrix>*/
}
{
var31 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
{
{ /* Inline kernel#Int#* (var_y,var31) on <var_y:Int> */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var34 = 1; /* easy <var31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var38 = var_y * var31;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_x,var32) on <var_x:Int> */
/* Covariant cast for argument 0 (i) <var32:Int> isa OTHER */
/* <var32:Int> isa OTHER */
var41 = 1; /* easy <var32:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var45 = var_x + var32;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
var46 = BOX_core__Float(var_value); /* autobox from Float to nullable Object */
((void(*)(val* self, long p0, val* p1))(var30->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var30, var39, var46); /* []= on <var30:Array[Float]>*/
}
RET_LABEL:;
}
/* method matrix#Matrix#* for (self: Matrix, Matrix): Matrix */
val* matrix___matrix__Matrix____42d(val* self, val* p0) {
val* var /* : Matrix */;
val* var_other /* var other: Matrix */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Matrix */;
long var7 /* : Int */;
long var8 /* : Int */;
val* var_out /* var out: Matrix */;
long var9 /* : Int */;
val* var10 /* : Range[Int] */;
val* var_ /* var : Range[Int] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : Iterator[Int] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
long var15 /* : Int */;
long var_j /* var j: Int */;
long var16 /* : Int */;
val* var17 /* : Range[Int] */;
val* var_18 /* var : Range[Int] */;
val* var19 /* : Iterator[nullable Object] */;
val* var_20 /* var : Iterator[Int] */;
short int var21 /* : Bool */;
val* var23 /* : nullable Object */;
long var24 /* : Int */;
long var_i /* var i: Int */;
val* var25 /* : Array[Float] */;
val* var26 /* : nullable Object */;
double var27 /* : Float */;
double var28 /* : Float */;
double var_sum /* var sum: Float */;
long var29 /* : Int */;
val* var30 /* : Range[Int] */;
val* var_31 /* var : Range[Int] */;
val* var32 /* : Iterator[nullable Object] */;
val* var_33 /* var : Iterator[Int] */;
short int var34 /* : Bool */;
val* var36 /* : nullable Object */;
long var37 /* : Int */;
long var_k /* var k: Int */;
double var38 /* : Float */;
double var39 /* : Float */;
double var40 /* : Float */;
short int var42 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var43 /* : Float */;
double var44 /* : Float */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
double var50 /* : Float */;
var_other = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
{
var2 = ((long(*)(val* self))(var_other->class->vft[COLOR_matrix__Matrix__height]))(var_other); /* height on <var_other:Matrix>*/
}
{
{ /* Inline kernel#Int#== (var1,var2) on <var1:Int> */
var5 = var1 == var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 210);
fatal_exit(1);
}
var6 = NEW_matrix__Matrix(&type_matrix__Matrix);
{
var7 = ((long(*)(val* self))(var_other->class->vft[COLOR_matrix__Matrix__width]))(var_other); /* width on <var_other:Matrix>*/
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__height]))(self); /* height on <self:Matrix>*/
}
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_matrix__Matrix__width_61d]))(var6, var7); /* width= on <var6:Matrix>*/
}
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_matrix__Matrix__height_61d]))(var6, var8); /* height= on <var6:Matrix>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:Matrix>*/
}
var_out = var6;
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__height]))(self); /* height on <self:Matrix>*/
}
var10 = core__range___Int___times(var9);
var_ = var10;
{
var11 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Range[Int]>*/
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:Iterator[Int]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:Iterator[Int]>*/
}
var15 = (long)(var14)>>2;
var_j = var15;
{
var16 = ((long(*)(val* self))(var_other->class->vft[COLOR_matrix__Matrix__width]))(var_other); /* width on <var_other:Matrix>*/
}
var17 = core__range___Int___times(var16);
var_18 = var17;
{
var19 = ((val*(*)(val* self))(var_18->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_18); /* iterator on <var_18:Range[Int]>*/
}
var_20 = var19;
for(;;) {
{
var21 = ((short int(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_20); /* is_ok on <var_20:Iterator[Int]>*/
}
if (var21){
} else {
goto BREAK_label22;
}
{
var23 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_20); /* item on <var_20:Iterator[Int]>*/
}
var24 = (long)(var23)>>2;
var_i = var24;
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__items]))(self); /* items on <self:Matrix>*/
}
{
var26 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_collection__Collection__first]))(var25); /* first on <var25:Array[Float]>*/
}
var28 = ((struct instance_core__Float*)var26)->value; /* autounbox from nullable Object to Float */;
var27 = core___core__Float___Numeric__zero(var28);
var_sum = var27;
{
var29 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
var30 = core__range___Int___times(var29);
var_31 = var30;
{
var32 = ((val*(*)(val* self))(var_31->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_31); /* iterator on <var_31:Range[Int]>*/
}
var_33 = var32;
for(;;) {
{
var34 = ((short int(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_33); /* is_ok on <var_33:Iterator[Int]>*/
}
if (var34){
} else {
goto BREAK_label35;
}
{
var36 = ((val*(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_33); /* item on <var_33:Iterator[Int]>*/
}
var37 = (long)(var36)>>2;
var_k = var37;
{
var38 = ((double(*)(val* self, long p0, long p1))(self->class->vft[COLOR_matrix__Matrix___91d_93d]))(self, var_j, var_k); /* [] on <self:Matrix>*/
}
{
var39 = ((double(*)(val* self, long p0, long p1))(var_other->class->vft[COLOR_matrix__Matrix___91d_93d]))(var_other, var_k, var_i); /* [] on <var_other:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var38,var39) on <var38:Float> */
/* Covariant cast for argument 0 (i) <var39:Float> isa OTHER */
/* <var39:Float> isa OTHER */
var42 = 1; /* easy <var39:Float> isa OTHER*/
if (unlikely(!var42)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var43 = var38 * var39;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var_sum,var40) on <var_sum:Float> */
/* Covariant cast for argument 0 (i) <var40:Float> isa OTHER */
/* <var40:Float> isa OTHER */
var46 = 1; /* easy <var40:Float> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var50 = var_sum + var40;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_sum = var44;
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_33); /* next on <var_33:Iterator[Int]>*/
}
}
BREAK_label35: (void)0;
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_33); /* finish on <var_33:Iterator[Int]>*/
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_out->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_out, var_j, var_i, var_sum); /* []= on <var_out:Matrix>*/
}
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_20); /* next on <var_20:Iterator[Int]>*/
}
}
BREAK_label22: (void)0;
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_20); /* finish on <var_20:Iterator[Int]>*/
}
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:Iterator[Int]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:Iterator[Int]>*/
}
var = var_out;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method matrix#Matrix#transposed for (self: Matrix): Matrix */
val* matrix___matrix__Matrix___transposed(val* self) {
val* var /* : Matrix */;
val* var1 /* : Matrix */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var_out /* var out: Matrix */;
val* var_ /* var : Matrix */;
val* var4 /* : MapIterator[MatrixCoordinate, Float] */;
val* var_5 /* var : MapIterator[MatrixCoordinate, Float] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_k /* var k: MatrixCoordinate */;
val* var8 /* : nullable Object */;
double var9 /* : Float */;
double var_v /* var v: Float */;
long var10 /* : Int */;
long var11 /* : Int */;
var1 = NEW_matrix__Matrix(&type_matrix__Matrix);
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__height]))(self); /* height on <self:Matrix>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_matrix__Matrix__width_61d]))(var1, var2); /* width= on <var1:Matrix>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_matrix__Matrix__height_61d]))(var1, var3); /* height= on <var1:Matrix>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Matrix>*/
}
var_out = var1;
var_ = self;
{
var4 = ((val*(*)(val* self))(var_->class->vft[COLOR_matrix__Matrix__iterator]))(var_); /* iterator on <var_:Matrix>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_5); /* is_ok on <var_5:MapIterator[MatrixCoordinate, Float]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_5); /* key on <var_5:MapIterator[MatrixCoordinate, Float]>*/
}
var_k = var7;
{
var8 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_5); /* item on <var_5:MapIterator[MatrixCoordinate, Float]>*/
}
var9 = ((struct instance_core__Float*)var8)->value; /* autounbox from nullable Object to Float */;
var_v = var9;
{
var10 = ((long(*)(val* self))(var_k->class->vft[COLOR_matrix__MatrixCoordinate__x]))(var_k); /* x on <var_k:MatrixCoordinate>*/
}
{
var11 = ((long(*)(val* self))(var_k->class->vft[COLOR_matrix__MatrixCoordinate__y]))(var_k); /* y on <var_k:MatrixCoordinate>*/
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_out->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_out, var10, var11, var_v); /* []= on <var_out:Matrix>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_5); /* next on <var_5:MapIterator[MatrixCoordinate, Float]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__MapIterator__finish]))(var_5); /* finish on <var_5:MapIterator[MatrixCoordinate, Float]>*/
}
var = var_out;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method matrix#Matrix#iterator for (self: Matrix): MapIterator[MatrixCoordinate, Float] */
val* matrix___matrix__Matrix___iterator(val* self) {
val* var /* : MapIterator[MatrixCoordinate, Float] */;
val* var1 /* : MatrixIndexIterator */;
var1 = NEW_matrix__MatrixIndexIterator(&type_matrix__MatrixIndexIterator);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_matrix__MatrixIndexIterator__matrix_61d]))(var1, self); /* matrix= on <var1:MatrixIndexIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:MatrixIndexIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method matrix#Matrix#to_s for (self: Matrix): String */
val* matrix___matrix__Matrix___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[String] */;
val* var_lines /* var lines: Array[String] */;
long var2 /* : Int */;
val* var3 /* : Range[Int] */;
val* var_ /* var : Range[Int] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[Int] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
long var8 /* : Int */;
long var_y /* var y: Int */;
val* var9 /* : Array[Float] */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
long var15 /* : Int */;
val* var16 /* : Array[nullable Object] */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : String */;
val* var25 /* : String */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_lines = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__height]))(self); /* height on <self:Matrix>*/
}
var3 = core__range___Int___times(var2);
var_ = var3;
{
var4 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Range[Int]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[Int]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[Int]>*/
}
var8 = (long)(var7)>>2;
var_y = var8;
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__items]))(self); /* items on <self:Matrix>*/
}
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
{
{ /* Inline kernel#Int#* (var_y,var10) on <var_y:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var14 = var_y * var10;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
{
var16 = ((val*(*)(val* self, long p0, long p1))(var9->class->vft[COLOR_core__collection__Sequence__subarray]))(var9, var11, var15); /* subarray on <var9:Array[Float]>*/
}
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = " ";
var19 = core__flat___NativeString___to_s_full(var18, 1l, 1l);
var17 = var19;
varonce = var17;
}
{
var20 = ((val*(*)(val* self, val* p0))(var16->class->vft[COLOR_core__abstract_text__Collection__join]))(var16, var17); /* join on <var16:Array[nullable Object](Array[Float])>*/
}
{
((void(*)(val* self, val* p0))(var_lines->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_lines, var20); /* add on <var_lines:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[Int]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[Int]>*/
}
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "\n";
var24 = core__flat___NativeString___to_s_full(var23, 1l, 1l);
var22 = var24;
varonce21 = var22;
}
{
var25 = ((val*(*)(val* self, val* p0))(var_lines->class->vft[COLOR_core__abstract_text__Collection__join]))(var_lines, var22); /* join on <var_lines:Array[String]>*/
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method matrix#Matrix#== for (self: Matrix, nullable Object): Bool */
short int matrix___matrix__Matrix___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : Array[Float] */;
val* var4 /* : Array[Float] */;
short int var5 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Matrix */
cltype = type_matrix__Matrix.color;
idtype = type_matrix__Matrix.id;
if(var_other == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
{
var3 = ((val*(*)(val* self))(var_other->class->vft[COLOR_matrix__Matrix__items]))(var_other); /* items on <var_other:nullable Object(Matrix)>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__items]))(self); /* items on <self:Matrix>*/
}
{
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, var4); /* == on <var3:Array[Float]>*/
}
var1 = var5;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method matrix#Matrix#hash for (self: Matrix): Int */
long matrix___matrix__Matrix___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : Array[Float] */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__items]))(self); /* items on <self:Matrix>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__hash]))(var1); /* hash on <var1:Array[Float]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method matrix#Matrix#init for (self: Matrix) */
void matrix___matrix__Matrix___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_matrix___matrix__Matrix___core__kernel__Object__init]))(self); /* init on <self:Matrix>*/
}
RET_LABEL:;
}
/* method matrix#MatrixIndexIterator#matrix for (self: MatrixIndexIterator): Matrix */
val* matrix___matrix__MatrixIndexIterator___matrix(val* self) {
val* var /* : Matrix */;
val* var1 /* : Matrix */;
var1 = self->attrs[COLOR_matrix__MatrixIndexIterator___matrix].val; /* _matrix on <self:MatrixIndexIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _matrix");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 261);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method matrix#MatrixIndexIterator#matrix= for (self: MatrixIndexIterator, Matrix) */
void matrix___matrix__MatrixIndexIterator___matrix_61d(val* self, val* p0) {
self->attrs[COLOR_matrix__MatrixIndexIterator___matrix].val = p0; /* _matrix on <self:MatrixIndexIterator> */
RET_LABEL:;
}
/* method matrix#MatrixIndexIterator#key for (self: MatrixIndexIterator): MatrixCoordinate */
val* matrix___matrix__MatrixIndexIterator___core__abstract_collection__MapIterator__key(val* self) {
val* var /* : MatrixCoordinate */;
val* var1 /* : MatrixCoordinate */;
var1 = self->attrs[COLOR_matrix__MatrixIndexIterator___key].val; /* _key on <self:MatrixIndexIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _key");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 263);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method matrix#MatrixIndexIterator#key= for (self: MatrixIndexIterator, MatrixCoordinate) */
void matrix___matrix__MatrixIndexIterator___key_61d(val* self, val* p0) {
self->attrs[COLOR_matrix__MatrixIndexIterator___key].val = p0; /* _key on <self:MatrixIndexIterator> */
RET_LABEL:;
}
/* method matrix#MatrixIndexIterator#is_ok for (self: MatrixIndexIterator): Bool */
short int matrix___matrix__MatrixIndexIterator___core__abstract_collection__MapIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable Object */;
long var2 /* : Int */;
val* var3 /* : Matrix */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__MapIterator__key]))(self); /* key on <self:MatrixIndexIterator>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_matrix__MatrixCoordinate__y]))(var1); /* y on <var1:nullable Object(MatrixCoordinate)>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_matrix__MatrixIndexIterator__matrix]))(self); /* matrix on <self:MatrixIndexIterator>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_matrix__Matrix__height]))(var3); /* height on <var3:Matrix>*/
}
{
{ /* Inline kernel#Int#< (var2,var4) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var8 = var2 < var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method matrix#MatrixIndexIterator#item for (self: MatrixIndexIterator): Float */
double matrix___matrix__MatrixIndexIterator___core__abstract_collection__MapIterator__item(val* self) {
double var /* : Float */;
short int var1 /* : Bool */;
val* var2 /* : Matrix */;
val* var3 /* : nullable Object */;
long var4 /* : Int */;
val* var5 /* : nullable Object */;
long var6 /* : Int */;
double var7 /* : Float */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(self); /* is_ok on <self:MatrixIndexIterator>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 269);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_matrix__MatrixIndexIterator__matrix]))(self); /* matrix on <self:MatrixIndexIterator>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__MapIterator__key]))(self); /* key on <self:MatrixIndexIterator>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_matrix__MatrixCoordinate__y]))(var3); /* y on <var3:nullable Object(MatrixCoordinate)>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__MapIterator__key]))(self); /* key on <self:MatrixIndexIterator>*/
}
{
var6 = ((long(*)(val* self))(var5->class->vft[COLOR_matrix__MatrixCoordinate__x]))(var5); /* x on <var5:nullable Object(MatrixCoordinate)>*/
}
{
var7 = ((double(*)(val* self, long p0, long p1))(var2->class->vft[COLOR_matrix__Matrix___91d_93d]))(var2, var4, var6); /* [] on <var2:Matrix>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method matrix#MatrixIndexIterator#item for (self: MapIterator[nullable Object, nullable Object]): nullable Object */
val* VIRTUAL_matrix___matrix__MatrixIndexIterator___core__abstract_collection__MapIterator__item(val* self) {
val* var /* : nullable Object */;
double var1 /* : Float */;
val* var2 /* : nullable Object */;
var1 = matrix___matrix__MatrixIndexIterator___core__abstract_collection__MapIterator__item(self);
var2 = BOX_core__Float(var1); /* autobox from Float to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method matrix#MatrixIndexIterator#next for (self: MatrixIndexIterator) */
void matrix___matrix__MatrixIndexIterator___core__abstract_collection__MapIterator__next(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable Object */;
val* var_key /* var key: MatrixCoordinate */;
long var2 /* : Int */;
val* var3 /* : Matrix */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var_ /* var : MatrixCoordinate */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
val* var_20 /* var : MatrixCoordinate */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(self); /* is_ok on <self:MatrixIndexIterator>*/
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix, 275);
fatal_exit(1);
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__MapIterator__key]))(self); /* key on <self:MatrixIndexIterator>*/
}
var_key = var1;
{
var2 = ((long(*)(val* self))(var_key->class->vft[COLOR_matrix__MatrixCoordinate__x]))(var_key); /* x on <var_key:MatrixCoordinate>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_matrix__MatrixIndexIterator__matrix]))(self); /* matrix on <self:MatrixIndexIterator>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_matrix__Matrix__width]))(var3); /* width on <var3:Matrix>*/
}
{
{ /* Inline kernel#Int#- (var4,1l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var4 - 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var2,var5) on <var2:Int> */
var11 = var2 == var5;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
((void(*)(val* self, long p0))(var_key->class->vft[COLOR_matrix__MatrixCoordinate__x_61d]))(var_key, 0l); /* x= on <var_key:MatrixCoordinate>*/
}
var_ = var_key;
{
var12 = ((long(*)(val* self))(var_->class->vft[COLOR_matrix__MatrixCoordinate__y]))(var_); /* y on <var_:MatrixCoordinate>*/
}
{
{ /* Inline kernel#Int#+ (var12,1l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var19 = var12 + 1l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_matrix__MatrixCoordinate__y_61d]))(var_, var13); /* y= on <var_:MatrixCoordinate>*/
}
} else {
var_20 = var_key;
{
var21 = ((long(*)(val* self))(var_20->class->vft[COLOR_matrix__MatrixCoordinate__x]))(var_20); /* x on <var_20:MatrixCoordinate>*/
}
{
{ /* Inline kernel#Int#+ (var21,1l) on <var21:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var28 = var21 + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_20->class->vft[COLOR_matrix__MatrixCoordinate__x_61d]))(var_20, var22); /* x= on <var_20:MatrixCoordinate>*/
}
}
RET_LABEL:;
}
/* method matrix#MatrixIndexIterator#init for (self: MatrixIndexIterator) */
void matrix___matrix__MatrixIndexIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_matrix___matrix__MatrixIndexIterator___core__kernel__Object__init]))(self); /* init on <self:MatrixIndexIterator>*/
}
RET_LABEL:;
}
/* method matrix#MatrixCoordinate#x for (self: MatrixCoordinate): Int */
long matrix___matrix__MatrixCoordinate___x(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_matrix__MatrixCoordinate___x].l; /* _x on <self:MatrixCoordinate> */
var = var1;
RET_LABEL:;
return var;
}
/* method matrix#MatrixCoordinate#x= for (self: MatrixCoordinate, Int) */
void matrix___matrix__MatrixCoordinate___x_61d(val* self, long p0) {
self->attrs[COLOR_matrix__MatrixCoordinate___x].l = p0; /* _x on <self:MatrixCoordinate> */
RET_LABEL:;
}
/* method matrix#MatrixCoordinate#y for (self: MatrixCoordinate): Int */
long matrix___matrix__MatrixCoordinate___y(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_matrix__MatrixCoordinate___y].l; /* _y on <self:MatrixCoordinate> */
var = var1;
RET_LABEL:;
return var;
}
/* method matrix#MatrixCoordinate#y= for (self: MatrixCoordinate, Int) */
void matrix___matrix__MatrixCoordinate___y_61d(val* self, long p0) {
self->attrs[COLOR_matrix__MatrixCoordinate___y].l = p0; /* _y on <self:MatrixCoordinate> */
RET_LABEL:;
}
/* method matrix#MatrixCoordinate#to_s for (self: MatrixCoordinate): String */
val* matrix___matrix__MatrixCoordinate___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
long var14 /* : Int */;
val* var15 /* : String */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "(";
var5 = core__flat___NativeString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ",";
var9 = core__flat___NativeString___to_s_full(var8, 1l, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ")";
var13 = core__flat___NativeString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[4]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__MatrixCoordinate__x]))(self); /* x on <self:MatrixCoordinate>*/
}
var15 = core__flat___Int___core__abstract_text__Object__to_s(var14);
((struct instance_core__NativeArray*)var1)->values[1]=var15;
{
var16 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__MatrixCoordinate__y]))(self); /* y on <self:MatrixCoordinate>*/
}
var17 = core__flat___Int___core__abstract_text__Object__to_s(var16);
((struct instance_core__NativeArray*)var1)->values[3]=var17;
{
var18 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method matrix#MatrixCoordinate#init for (self: MatrixCoordinate) */
void matrix___matrix__MatrixCoordinate___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_matrix___matrix__MatrixCoordinate___core__kernel__Object__init]))(self); /* init on <self:MatrixCoordinate>*/
}
RET_LABEL:;
}
