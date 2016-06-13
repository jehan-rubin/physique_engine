#include "geometry__points_and_lines.sep.0.h"
/* method points_and_lines#IPoint#x for (self: IPoint[Numeric]): Numeric */
val* geometry___geometry__IPoint___x(val* self) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "x", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 25);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method points_and_lines#IPoint#y for (self: IPoint[Numeric]): Numeric */
val* geometry___geometry__IPoint___y(val* self) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "y", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 28);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method points_and_lines#IPoint#to_s for (self: IPoint[Numeric]): String */
val* geometry___geometry__IPoint___core__abstract_text__Object__to_s(val* self) {
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
val* var14 /* : Numeric */;
val* var15 /* : String */;
val* var16 /* : Numeric */;
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
var8 = ", ";
var9 = core__flat___NativeString___to_s_full(var8, 2l, 2l);
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
var14 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__x]))(self); /* x on <self:IPoint[Numeric]>*/
}
{
var15 = ((val*(*)(val* self))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var14); /* to_s on <var14:Numeric>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var15;
{
var16 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__y]))(self); /* y on <self:IPoint[Numeric]>*/
}
{
var17 = ((val*(*)(val* self))((((long)var16&3)?class_info[((long)var16&3)]:var16->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var16); /* to_s on <var16:Numeric>*/
}
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
/* method points_and_lines#IPoint#dist for (self: IPoint[Numeric], Point[Numeric]): Numeric */
val* geometry___geometry__IPoint___dist(val* self, val* p0) {
val* var /* : Numeric */;
val* var_other /* var other: Point[Numeric] */;
val* var1 /* : Numeric */;
val* var2 /* : Numeric */;
double var3 /* : Float */;
double var4 /* : Float */;
val* var5 /* : Numeric */;
val* var6 /* : Numeric */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_other = p0;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__x]))(self); /* x on <self:IPoint[Numeric]>*/
}
{
var2 = ((val*(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__dist2]))(self, var_other); /* dist2 on <self:IPoint[Numeric]>*/
}
{
var3 = ((double(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var2); /* to_f on <var2:Numeric>*/
}
var4 = core__math___Float___sqrt(var3);
{
var5 = BOX_core__Float(var4); /* autobox from Float to Numeric */
var6 = ((val*(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Numeric__value_of]))(var1, var5); /* value_of on <var1:Numeric>*/
}
/* <var6:Numeric> isa N */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_geometry__IPoint___35dN];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)var6&3)?type_info[((long)var6&3)]:var6->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var6&3)?type_info[((long)var6&3)]:var6->type)->type_table[cltype] == idtype;
}
if (unlikely(!var7)) {
var_class_name = var6 == NULL ? "null" : (((long)var6&3)?type_info[((long)var6&3)]:var6->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 44);
fatal_exit(1);
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method points_and_lines#IPoint#dist2 for (self: IPoint[Numeric], Point[Numeric]): Numeric */
val* geometry___geometry__IPoint___dist2(val* self, val* p0) {
val* var /* : Numeric */;
val* var_other /* var other: Point[Numeric] */;
val* var1 /* : Numeric */;
val* var2 /* : Numeric */;
val* var3 /* : Numeric */;
val* var_dx /* var dx: Numeric */;
val* var4 /* : Numeric */;
val* var5 /* : Numeric */;
val* var6 /* : Numeric */;
val* var_dy /* var dy: Numeric */;
val* var7 /* : Numeric */;
val* var8 /* : Numeric */;
val* var9 /* : Numeric */;
val* var_s /* var s: Numeric */;
val* var10 /* : Numeric */;
val* var11 /* : Numeric */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_other = p0;
{
var1 = ((val*(*)(val* self))(var_other->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_other); /* x on <var_other:Point[Numeric]>*/
}
{
var2 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__x]))(self); /* x on <self:IPoint[Numeric]>*/
}
{
var3 = ((val*(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__numeric__Numeric__sub]))(var1, var2); /* sub on <var1:Numeric>*/
}
var_dx = var3;
{
var4 = ((val*(*)(val* self))(var_other->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_other); /* y on <var_other:Point[Numeric]>*/
}
{
var5 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__y]))(self); /* y on <self:IPoint[Numeric]>*/
}
{
var6 = ((val*(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__numeric__Numeric__sub]))(var4, var5); /* sub on <var4:Numeric>*/
}
var_dy = var6;
{
var7 = ((val*(*)(val* self, val* p0))((((long)var_dx&3)?class_info[((long)var_dx&3)]:var_dx->class)->vft[COLOR_core__numeric__Numeric__mul]))(var_dx, var_dx); /* mul on <var_dx:Numeric>*/
}
{
var8 = ((val*(*)(val* self, val* p0))((((long)var_dy&3)?class_info[((long)var_dy&3)]:var_dy->class)->vft[COLOR_core__numeric__Numeric__mul]))(var_dy, var_dy); /* mul on <var_dy:Numeric>*/
}
{
var9 = ((val*(*)(val* self, val* p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__numeric__Numeric__add]))(var7, var8); /* add on <var7:Numeric>*/
}
var_s = var9;
{
var10 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__x]))(self); /* x on <self:IPoint[Numeric]>*/
}
{
var11 = ((val*(*)(val* self, val* p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_core__kernel__Numeric__value_of]))(var10, var_s); /* value_of on <var10:Numeric>*/
}
/* <var11:Numeric> isa N */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_geometry__IPoint___35dN];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)var11&3)?type_info[((long)var11&3)]:var11->type)->table_size) {
var12 = 0;
} else {
var12 = (((long)var11&3)?type_info[((long)var11&3)]:var11->type)->type_table[cltype] == idtype;
}
if (unlikely(!var12)) {
var_class_name = var11 == NULL ? "null" : (((long)var11&3)?type_info[((long)var11&3)]:var11->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 63);
fatal_exit(1);
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method points_and_lines#IPoint#lerp for (self: IPoint[Numeric], Point[Numeric], Float): Point[Numeric] */
val* geometry___geometry__IPoint___lerp(val* self, val* p0, double p1) {
val* var /* : Point[Numeric] */;
val* var_other /* var other: Point[Numeric] */;
double var_p /* var p: Float */;
val* var1 /* : Numeric */;
double var2 /* : Float */;
val* var3 /* : Numeric */;
double var4 /* : Float */;
val* var5 /* : Numeric */;
double var6 /* : Float */;
double var7 /* : Float */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var10 /* : Float */;
double var11 /* : Float */;
double var12 /* : Float */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
double var18 /* : Float */;
double var19 /* : Float */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
double var25 /* : Float */;
double var_xx /* var xx: Float */;
val* var26 /* : Numeric */;
double var27 /* : Float */;
val* var28 /* : Numeric */;
double var29 /* : Float */;
val* var30 /* : Numeric */;
double var31 /* : Float */;
double var32 /* : Float */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
double var38 /* : Float */;
double var39 /* : Float */;
double var40 /* : Float */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
double var46 /* : Float */;
double var47 /* : Float */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
double var53 /* : Float */;
double var_yy /* var yy: Float */;
val* var54 /* : Point[Numeric] */;
val* var55 /* : Numeric */;
val* var56 /* : Numeric */;
val* var57 /* : Numeric */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const struct type* type_struct;
const char* var_class_name61;
val* var62 /* : Numeric */;
val* var63 /* : Numeric */;
val* var64 /* : Numeric */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const struct type* type_struct68;
const char* var_class_name69;
var_other = p0;
var_p = p1;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__x]))(self); /* x on <self:IPoint[Numeric]>*/
}
{
var2 = ((double(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var1); /* to_f on <var1:Numeric>*/
}
{
var3 = ((val*(*)(val* self))(var_other->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_other); /* x on <var_other:Point[Numeric]>*/
}
{
var4 = ((double(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var3); /* to_f on <var3:Numeric>*/
}
{
var5 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__x]))(self); /* x on <self:IPoint[Numeric]>*/
}
{
var6 = ((double(*)(val* self))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var5); /* to_f on <var5:Numeric>*/
}
{
{ /* Inline kernel#Float#- (var4,var6) on <var4:Float> */
/* Covariant cast for argument 0 (i) <var6:Float> isa OTHER */
/* <var6:Float> isa OTHER */
var9 = 1; /* easy <var6:Float> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var10 = var4 - var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var11 = core___core__Float___Numeric__to_f(var7);
{
{ /* Inline kernel#Float#* (var11,var_p) on <var11:Float> */
/* Covariant cast for argument 0 (i) <var_p:Float> isa OTHER */
/* <var_p:Float> isa OTHER */
var14 = 1; /* easy <var_p:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var18 = var11 * var_p;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var2,var12) on <var2:Float> */
/* Covariant cast for argument 0 (i) <var12:Float> isa OTHER */
/* <var12:Float> isa OTHER */
var21 = 1; /* easy <var12:Float> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var25 = var2 + var12;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_xx = var19;
{
var26 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__y]))(self); /* y on <self:IPoint[Numeric]>*/
}
{
var27 = ((double(*)(val* self))((((long)var26&3)?class_info[((long)var26&3)]:var26->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var26); /* to_f on <var26:Numeric>*/
}
{
var28 = ((val*(*)(val* self))(var_other->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_other); /* y on <var_other:Point[Numeric]>*/
}
{
var29 = ((double(*)(val* self))((((long)var28&3)?class_info[((long)var28&3)]:var28->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var28); /* to_f on <var28:Numeric>*/
}
{
var30 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__y]))(self); /* y on <self:IPoint[Numeric]>*/
}
{
var31 = ((double(*)(val* self))((((long)var30&3)?class_info[((long)var30&3)]:var30->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var30); /* to_f on <var30:Numeric>*/
}
{
{ /* Inline kernel#Float#- (var29,var31) on <var29:Float> */
/* Covariant cast for argument 0 (i) <var31:Float> isa OTHER */
/* <var31:Float> isa OTHER */
var34 = 1; /* easy <var31:Float> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var38 = var29 - var31;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var39 = core___core__Float___Numeric__to_f(var32);
{
{ /* Inline kernel#Float#* (var39,var_p) on <var39:Float> */
/* Covariant cast for argument 0 (i) <var_p:Float> isa OTHER */
/* <var_p:Float> isa OTHER */
var42 = 1; /* easy <var_p:Float> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var46 = var39 * var_p;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var27,var40) on <var27:Float> */
/* Covariant cast for argument 0 (i) <var40:Float> isa OTHER */
/* <var40:Float> isa OTHER */
var49 = 1; /* easy <var40:Float> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var53 = var27 + var40;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_yy = var47;
var54 = NEW_geometry__Point((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_geometry__Point__geometry__IPoint___35dN]);
{
var55 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__x]))(self); /* x on <self:IPoint[Numeric]>*/
}
{
var56 = BOX_core__Float(var_xx); /* autobox from Float to Numeric */
var57 = ((val*(*)(val* self, val* p0))((((long)var55&3)?class_info[((long)var55&3)]:var55->class)->vft[COLOR_core__kernel__Numeric__value_of]))(var55, var56); /* value_of on <var55:Numeric>*/
}
/* <var57:Numeric> isa N */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_geometry__IPoint___35dN];
cltype59 = type_struct->color;
idtype60 = type_struct->id;
if(cltype59 >= (((long)var57&3)?type_info[((long)var57&3)]:var57->type)->table_size) {
var58 = 0;
} else {
var58 = (((long)var57&3)?type_info[((long)var57&3)]:var57->type)->type_table[cltype59] == idtype60;
}
if (unlikely(!var58)) {
var_class_name61 = var57 == NULL ? "null" : (((long)var57&3)?type_info[((long)var57&3)]:var57->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "N", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 81);
fatal_exit(1);
}
{
var62 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__y]))(self); /* y on <self:IPoint[Numeric]>*/
}
{
var63 = BOX_core__Float(var_yy); /* autobox from Float to Numeric */
var64 = ((val*(*)(val* self, val* p0))((((long)var62&3)?class_info[((long)var62&3)]:var62->class)->vft[COLOR_core__kernel__Numeric__value_of]))(var62, var63); /* value_of on <var62:Numeric>*/
}
/* <var64:Numeric> isa N */
type_struct68 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_geometry__IPoint___35dN];
cltype66 = type_struct68->color;
idtype67 = type_struct68->id;
if(cltype66 >= (((long)var64&3)?type_info[((long)var64&3)]:var64->type)->table_size) {
var65 = 0;
} else {
var65 = (((long)var64&3)?type_info[((long)var64&3)]:var64->type)->type_table[cltype66] == idtype67;
}
if (unlikely(!var65)) {
var_class_name69 = var64 == NULL ? "null" : (((long)var64&3)?type_info[((long)var64&3)]:var64->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "N", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 81);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var54, var57); /* x= on <var54:Point[Numeric]>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var54, var64); /* y= on <var54:Point[Numeric]>*/
}
{
((void(*)(val* self))(var54->class->vft[COLOR_core__kernel__Object__init]))(var54); /* init on <var54:Point[Numeric]>*/
}
var = var54;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method points_and_lines#IPoint#== for (self: IPoint[Numeric], nullable Object): Bool */
short int geometry___geometry__IPoint___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : Numeric */;
val* var5 /* : Numeric */;
short int var6 /* : Bool */;
short int var_7 /* var : Bool */;
val* var8 /* : Numeric */;
val* var9 /* : Numeric */;
short int var10 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa IPoint[Numeric] */
cltype = type_geometry__IPoint__core__Numeric.color;
idtype = type_geometry__IPoint__core__Numeric.id;
if(var_o == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var_ = var3;
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_o); /* x on <var_o:nullable Object(IPoint[Numeric])>*/
}
{
var5 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__x]))(self); /* x on <self:IPoint[Numeric]>*/
}
{
var6 = ((short int(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var4, var5); /* == on <var4:Numeric>*/
}
var2 = var6;
} else {
var2 = var_;
}
var_7 = var2;
if (var2){
{
var8 = ((val*(*)(val* self))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_o); /* y on <var_o:nullable Object(IPoint[Numeric])>*/
}
{
var9 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__y]))(self); /* y on <self:IPoint[Numeric]>*/
}
{
var10 = ((short int(*)(val* self, val* p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var8, var9); /* == on <var8:Numeric>*/
}
var1 = var10;
} else {
var1 = var_7;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method points_and_lines#IPoint#core_serialize_to for (self: IPoint[Numeric], Serializer) */
void geometry___geometry__IPoint___serialization__Serializable__core_serialize_to(val* self, val* p0) {
val* var_v /* var v: Serializer */;
var_v = p0;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry___geometry__IPoint___serialization__Serializable__core_serialize_to]))(self, p0); /* core_serialize_to on <self:IPoint[Numeric]>*/
}
RET_LABEL:;
}
/* method points_and_lines#IPoint#from_deserializer for (self: IPoint[Numeric], Deserializer) */
void geometry___geometry__IPoint___serialization__Serializable__from_deserializer(val* self, val* p0) {
val* var_v /* var v: Deserializer */;
var_v = p0;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry___geometry__IPoint___serialization__Serializable__from_deserializer]))(self, p0); /* from_deserializer on <self:IPoint[Numeric]>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__notify_of_creation]))(var_v, self); /* notify_of_creation on <var_v:Deserializer>*/
}
RET_LABEL:;
}
/* method points_and_lines#Point#x for (self: Point[Numeric]): Numeric */
val* geometry___geometry__Point___IPoint__x(val* self) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
var1 = self->attrs[COLOR_geometry__points_and_lines__Point___x].val; /* _x on <self:Point[Numeric]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _x");
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 91);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method points_and_lines#Point#x= for (self: Point[Numeric], Numeric) */
void geometry___geometry__Point___x_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (x) <p0:Numeric> isa N */
/* <p0:Numeric> isa N */
type_struct = self->type->resolution_table->types[COLOR_geometry__Point___35dN];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 91);
fatal_exit(1);
}
self->attrs[COLOR_geometry__points_and_lines__Point___x].val = p0; /* _x on <self:Point[Numeric]> */
RET_LABEL:;
}
/* method points_and_lines#Point#y for (self: Point[Numeric]): Numeric */
val* geometry___geometry__Point___IPoint__y(val* self) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
var1 = self->attrs[COLOR_geometry__points_and_lines__Point___y].val; /* _y on <self:Point[Numeric]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _y");
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 92);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method points_and_lines#Point#y= for (self: Point[Numeric], Numeric) */
void geometry___geometry__Point___y_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (y) <p0:Numeric> isa N */
/* <p0:Numeric> isa N */
type_struct = self->type->resolution_table->types[COLOR_geometry__Point___35dN];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 92);
fatal_exit(1);
}
self->attrs[COLOR_geometry__points_and_lines__Point___y].val = p0; /* _y on <self:Point[Numeric]> */
RET_LABEL:;
}
/* method points_and_lines#Point#core_serialize_to for (self: Point[Numeric], Serializer) */
void geometry___geometry__Point___serialization__Serializable__core_serialize_to(val* self, val* p0) {
val* var_v /* var v: Serializer */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : Numeric */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
val* var8 /* : Numeric */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry___geometry__Point___serialization__Serializable__core_serialize_to]))(self, p0); /* core_serialize_to on <self:Point[Numeric]>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "x";
var2 = core__flat___NativeString___to_s_full(var1, 1l, 1l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(self); /* x on <self:Point[Numeric]>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var_v&3)?class_info[((long)var_v&3)]:var_v->class)->vft[COLOR_serialization__Serializer__serialize_attribute]))(var_v, var, var3); /* serialize_attribute on <var_v:Serializer>*/
}
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "y";
var7 = core__flat___NativeString___to_s_full(var6, 1l, 1l);
var5 = var7;
varonce4 = var5;
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(self); /* y on <self:Point[Numeric]>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var_v&3)?class_info[((long)var_v&3)]:var_v->class)->vft[COLOR_serialization__Serializer__serialize_attribute]))(var_v, var5, var8); /* serialize_attribute on <var_v:Serializer>*/
}
RET_LABEL:;
}
/* method points_and_lines#Point#from_deserializer for (self: Point[Numeric], Deserializer) */
void geometry___geometry__Point___serialization__Serializable__from_deserializer(val* self, val* p0) {
val* var_v /* var v: Deserializer */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : nullable Object */;
val* var_x /* var x: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
short int var5 /* : Bool */;
val* var6 /* : Array[Error] */;
val* var7 /* : AttributeTypeError */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : nullable Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
val* var30 /* : nullable Object */;
val* var_y /* var y: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const struct type* type_struct34;
short int is_nullable35;
short int var36 /* : Bool */;
val* var37 /* : Array[Error] */;
val* var38 /* : AttributeTypeError */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
val* var51 /* : nullable Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry___geometry__Point___serialization__Serializable__from_deserializer]))(self, p0); /* from_deserializer on <self:Point[Numeric]>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__notify_of_creation]))(var_v, self); /* notify_of_creation on <var_v:Deserializer>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "x";
var2 = core__flat___NativeString___to_s_full(var1, 1l, 1l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__deserialize_attribute]))(var_v, var); /* deserialize_attribute on <var_v:Deserializer>*/
}
var_x = var3;
/* <var_x:nullable Object> isa N */
type_struct = self->type->resolution_table->types[COLOR_geometry__Point___35dN];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_x == NULL) {
var4 = is_nullable;
} else {
if(cltype >= (((long)var_x&3)?type_info[((long)var_x&3)]:var_x->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_x&3)?type_info[((long)var_x&3)]:var_x->type)->type_table[cltype] == idtype;
}
}
var5 = !var4;
if (var5){
{
var6 = ((val*(*)(val* self))(var_v->class->vft[COLOR_serialization__Deserializer__errors]))(var_v); /* errors on <var_v:Deserializer>*/
}
var7 = NEW_serialization__AttributeTypeError(&type_serialization__AttributeTypeError);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "TODO remove this arg on c_src regen";
var11 = core__flat___NativeString___to_s_full(var10, 35l, 35l);
var9 = var11;
varonce8 = var9;
}
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "x";
var15 = core__flat___NativeString___to_s_full(var14, 1l, 1l);
var13 = var15;
varonce12 = var13;
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "N";
var19 = core__flat___NativeString___to_s_full(var18, 1l, 1l);
var17 = var19;
varonce16 = var17;
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_core__error__Error__message_61d]))(var7, var9); /* message= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_serialization__AttributeTypeError__receiver_61d]))(var7, self); /* receiver= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_serialization__AttributeTypeError__attribute_name_61d]))(var7, var13); /* attribute_name= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_serialization__AttributeTypeError__attribute_61d]))(var7, var_x); /* attribute= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_serialization__AttributeTypeError__expected_type_61d]))(var7, var17); /* expected_type= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self))(var7->class->vft[COLOR_core__kernel__Object__init]))(var7); /* init on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var6, var7); /* add on <var6:Array[Error]>*/
}
{
var20 = ((val*(*)(val* self))(var_v->class->vft[COLOR_serialization__Deserializer__keep_going]))(var_v); /* keep_going on <var_v:Deserializer>*/
}
if (var20 == NULL) {
var21 = 0; /* <0:Bool> cannot be null */
} else {
{ /* Inline kernel#Bool#== (var20,0) on <var20:nullable Bool> */
if ((var20 != NULL)) {
var25 = (short int)((long)(var20)>>2);
var24 = var25 == 0;
} else var24 = 0;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
goto RET_LABEL;
} else {
}
} else {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(self, var_x); /* x= on <self:Point[Numeric]>*/
}
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "y";
var29 = core__flat___NativeString___to_s_full(var28, 1l, 1l);
var27 = var29;
varonce26 = var27;
}
{
var30 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__deserialize_attribute]))(var_v, var27); /* deserialize_attribute on <var_v:Deserializer>*/
}
var_y = var30;
/* <var_y:nullable Object> isa N */
type_struct34 = self->type->resolution_table->types[COLOR_geometry__Point___35dN];
cltype32 = type_struct34->color;
idtype33 = type_struct34->id;
is_nullable35 = type_struct34->is_nullable;
if(var_y == NULL) {
var31 = is_nullable35;
} else {
if(cltype32 >= (((long)var_y&3)?type_info[((long)var_y&3)]:var_y->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_y&3)?type_info[((long)var_y&3)]:var_y->type)->type_table[cltype32] == idtype33;
}
}
var36 = !var31;
if (var36){
{
var37 = ((val*(*)(val* self))(var_v->class->vft[COLOR_serialization__Deserializer__errors]))(var_v); /* errors on <var_v:Deserializer>*/
}
var38 = NEW_serialization__AttributeTypeError(&type_serialization__AttributeTypeError);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "TODO remove this arg on c_src regen";
var42 = core__flat___NativeString___to_s_full(var41, 35l, 35l);
var40 = var42;
varonce39 = var40;
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "y";
var46 = core__flat___NativeString___to_s_full(var45, 1l, 1l);
var44 = var46;
varonce43 = var44;
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "N";
var50 = core__flat___NativeString___to_s_full(var49, 1l, 1l);
var48 = var50;
varonce47 = var48;
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_core__error__Error__message_61d]))(var38, var40); /* message= on <var38:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_serialization__AttributeTypeError__receiver_61d]))(var38, self); /* receiver= on <var38:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_serialization__AttributeTypeError__attribute_name_61d]))(var38, var44); /* attribute_name= on <var38:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_serialization__AttributeTypeError__attribute_61d]))(var38, var_y); /* attribute= on <var38:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_serialization__AttributeTypeError__expected_type_61d]))(var38, var48); /* expected_type= on <var38:AttributeTypeError>*/
}
{
((void(*)(val* self))(var38->class->vft[COLOR_core__kernel__Object__init]))(var38); /* init on <var38:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var37->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var37, var38); /* add on <var37:Array[Error]>*/
}
{
var51 = ((val*(*)(val* self))(var_v->class->vft[COLOR_serialization__Deserializer__keep_going]))(var_v); /* keep_going on <var_v:Deserializer>*/
}
if (var51 == NULL) {
var52 = 0; /* <0:Bool> cannot be null */
} else {
{ /* Inline kernel#Bool#== (var51,0) on <var51:nullable Bool> */
if ((var51 != NULL)) {
var56 = (short int)((long)(var51)>>2);
var55 = var56 == 0;
} else var55 = 0;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
goto RET_LABEL;
} else {
}
} else {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(self, var_y); /* y= on <self:Point[Numeric]>*/
}
}
RET_LABEL:;
}
/* method points_and_lines#Point#init for (self: Point[Numeric]) */
void geometry___geometry__Point___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_geometry___geometry__Point___core__kernel__Object__init]))(self); /* init on <self:Point[Numeric]>*/
}
RET_LABEL:;
}
/* method points_and_lines#IPoint3d#z for (self: IPoint3d[Numeric]): Numeric */
val* geometry___geometry__IPoint3d___z(val* self) {
val* var /* : Numeric */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "z", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 99);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method points_and_lines#IPoint3d#to_s for (self: IPoint3d[Numeric]): String */
val* geometry___geometry__IPoint3d___core__abstract_text__Object__to_s(val* self) {
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
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : Numeric */;
val* var19 /* : String */;
val* var20 /* : Numeric */;
val* var21 /* : String */;
val* var22 /* : Numeric */;
val* var23 /* : String */;
val* var24 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
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
var8 = ", ";
var9 = core__flat___NativeString___to_s_full(var8, 2l, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ", ";
var13 = core__flat___NativeString___to_s_full(var12, 2l, 2l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[4]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ")";
var17 = core__flat___NativeString___to_s_full(var16, 1l, 1l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var1)->values[6]=var15;
} else {
var1 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__x]))(self); /* x on <self:IPoint3d[Numeric]>*/
}
{
var19 = ((val*(*)(val* self))((((long)var18&3)?class_info[((long)var18&3)]:var18->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var18); /* to_s on <var18:Numeric>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var19;
{
var20 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint__y]))(self); /* y on <self:IPoint3d[Numeric]>*/
}
{
var21 = ((val*(*)(val* self))((((long)var20&3)?class_info[((long)var20&3)]:var20->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var20); /* to_s on <var20:Numeric>*/
}
((struct instance_core__NativeArray*)var1)->values[3]=var21;
{
var22 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__IPoint3d__z]))(self); /* z on <self:IPoint3d[Numeric]>*/
}
{
var23 = ((val*(*)(val* self))((((long)var22&3)?class_info[((long)var22&3)]:var22->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var22); /* to_s on <var22:Numeric>*/
}
((struct instance_core__NativeArray*)var1)->values[5]=var23;
{
var24 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method points_and_lines#IPoint3d#core_serialize_to for (self: IPoint3d[Numeric], Serializer) */
void geometry___geometry__IPoint3d___serialization__Serializable__core_serialize_to(val* self, val* p0) {
val* var_v /* var v: Serializer */;
var_v = p0;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry___geometry__IPoint3d___serialization__Serializable__core_serialize_to]))(self, p0); /* core_serialize_to on <self:IPoint3d[Numeric]>*/
}
RET_LABEL:;
}
/* method points_and_lines#IPoint3d#from_deserializer for (self: IPoint3d[Numeric], Deserializer) */
void geometry___geometry__IPoint3d___serialization__Serializable__from_deserializer(val* self, val* p0) {
val* var_v /* var v: Deserializer */;
var_v = p0;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry___geometry__IPoint3d___serialization__Serializable__from_deserializer]))(self, p0); /* from_deserializer on <self:IPoint3d[Numeric]>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__notify_of_creation]))(var_v, self); /* notify_of_creation on <var_v:Deserializer>*/
}
RET_LABEL:;
}
/* method points_and_lines#Point3d#z for (self: Point3d[Numeric]): Numeric */
val* geometry___geometry__Point3d___IPoint3d__z(val* self) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
var1 = self->attrs[COLOR_geometry__points_and_lines__Point3d___z].val; /* _z on <self:Point3d[Numeric]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _z");
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 110);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method points_and_lines#Point3d#z= for (self: Point3d[Numeric], Numeric) */
void geometry___geometry__Point3d___z_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (z) <p0:Numeric> isa N */
/* <p0:Numeric> isa N */
type_struct = self->type->resolution_table->types[COLOR_geometry__Point3d___35dN];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "N", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 110);
fatal_exit(1);
}
self->attrs[COLOR_geometry__points_and_lines__Point3d___z].val = p0; /* _z on <self:Point3d[Numeric]> */
RET_LABEL:;
}
/* method points_and_lines#Point3d#core_serialize_to for (self: Point3d[Numeric], Serializer) */
void geometry___geometry__Point3d___serialization__Serializable__core_serialize_to(val* self, val* p0) {
val* var_v /* var v: Serializer */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : Numeric */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry___geometry__Point3d___serialization__Serializable__core_serialize_to]))(self, p0); /* core_serialize_to on <self:Point3d[Numeric]>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "z";
var2 = core__flat___NativeString___to_s_full(var1, 1l, 1l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_geometry__points_and_lines__IPoint3d__z]))(self); /* z on <self:Point3d[Numeric]>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var_v&3)?class_info[((long)var_v&3)]:var_v->class)->vft[COLOR_serialization__Serializer__serialize_attribute]))(var_v, var, var3); /* serialize_attribute on <var_v:Serializer>*/
}
RET_LABEL:;
}
/* method points_and_lines#Point3d#from_deserializer for (self: Point3d[Numeric], Deserializer) */
void geometry___geometry__Point3d___serialization__Serializable__from_deserializer(val* self, val* p0) {
val* var_v /* var v: Deserializer */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : nullable Object */;
val* var_z /* var z: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
short int var5 /* : Bool */;
val* var6 /* : Array[Error] */;
val* var7 /* : AttributeTypeError */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : nullable Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry___geometry__Point3d___serialization__Serializable__from_deserializer]))(self, p0); /* from_deserializer on <self:Point3d[Numeric]>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__notify_of_creation]))(var_v, self); /* notify_of_creation on <var_v:Deserializer>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "z";
var2 = core__flat___NativeString___to_s_full(var1, 1l, 1l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__deserialize_attribute]))(var_v, var); /* deserialize_attribute on <var_v:Deserializer>*/
}
var_z = var3;
/* <var_z:nullable Object> isa N */
type_struct = self->type->resolution_table->types[COLOR_geometry__Point3d___35dN];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_z == NULL) {
var4 = is_nullable;
} else {
if(cltype >= (((long)var_z&3)?type_info[((long)var_z&3)]:var_z->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_z&3)?type_info[((long)var_z&3)]:var_z->type)->type_table[cltype] == idtype;
}
}
var5 = !var4;
if (var5){
{
var6 = ((val*(*)(val* self))(var_v->class->vft[COLOR_serialization__Deserializer__errors]))(var_v); /* errors on <var_v:Deserializer>*/
}
var7 = NEW_serialization__AttributeTypeError(&type_serialization__AttributeTypeError);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "TODO remove this arg on c_src regen";
var11 = core__flat___NativeString___to_s_full(var10, 35l, 35l);
var9 = var11;
varonce8 = var9;
}
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "z";
var15 = core__flat___NativeString___to_s_full(var14, 1l, 1l);
var13 = var15;
varonce12 = var13;
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "N";
var19 = core__flat___NativeString___to_s_full(var18, 1l, 1l);
var17 = var19;
varonce16 = var17;
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_core__error__Error__message_61d]))(var7, var9); /* message= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_serialization__AttributeTypeError__receiver_61d]))(var7, self); /* receiver= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_serialization__AttributeTypeError__attribute_name_61d]))(var7, var13); /* attribute_name= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_serialization__AttributeTypeError__attribute_61d]))(var7, var_z); /* attribute= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_serialization__AttributeTypeError__expected_type_61d]))(var7, var17); /* expected_type= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self))(var7->class->vft[COLOR_core__kernel__Object__init]))(var7); /* init on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var6, var7); /* add on <var6:Array[Error]>*/
}
{
var20 = ((val*(*)(val* self))(var_v->class->vft[COLOR_serialization__Deserializer__keep_going]))(var_v); /* keep_going on <var_v:Deserializer>*/
}
if (var20 == NULL) {
var21 = 0; /* <0:Bool> cannot be null */
} else {
{ /* Inline kernel#Bool#== (var20,0) on <var20:nullable Bool> */
if ((var20 != NULL)) {
var25 = (short int)((long)(var20)>>2);
var24 = var25 == 0;
} else var24 = 0;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
goto RET_LABEL;
} else {
}
} else {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(self, var_z); /* z= on <self:Point3d[Numeric]>*/
}
}
RET_LABEL:;
}
/* method points_and_lines#Point3d#init for (self: Point3d[Numeric]) */
void geometry___geometry__Point3d___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_geometry___geometry__Point3d___core__kernel__Object__init]))(self); /* init on <self:Point3d[Numeric]>*/
}
RET_LABEL:;
}
/* method points_and_lines#ILine#point_left for (self: ILine[Numeric]): IPoint[Numeric] */
val* geometry___geometry__ILine___point_left(val* self) {
val* var /* : IPoint[Numeric] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "point_left", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 118);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method points_and_lines#ILine#point_right for (self: ILine[Numeric]): IPoint[Numeric] */
val* geometry___geometry__ILine___point_right(val* self) {
val* var /* : IPoint[Numeric] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "point_right", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 121);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method points_and_lines#ILine#to_s for (self: ILine[Numeric]): String */
val* geometry___geometry__ILine___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
val* var6 /* : IPoint[Numeric] */;
val* var7 /* : String */;
val* var8 /* : IPoint[Numeric] */;
val* var9 /* : String */;
val* var10 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "--";
var5 = core__flat___NativeString___to_s_full(var4, 2l, 2l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__ILine__point_left]))(self); /* point_left on <self:ILine[Numeric]>*/
}
{
var7 = ((val*(*)(val* self))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var6); /* to_s on <var6:IPoint[Numeric]>*/
}
((struct instance_core__NativeArray*)var1)->values[0]=var7;
{
var8 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry__points_and_lines__ILine__point_right]))(self); /* point_right on <self:ILine[Numeric]>*/
}
{
var9 = ((val*(*)(val* self))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var8); /* to_s on <var8:IPoint[Numeric]>*/
}
((struct instance_core__NativeArray*)var1)->values[2]=var9;
{
var10 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method points_and_lines#ILine#core_serialize_to for (self: ILine[Numeric], Serializer) */
void geometry___geometry__ILine___serialization__Serializable__core_serialize_to(val* self, val* p0) {
val* var_v /* var v: Serializer */;
var_v = p0;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry___geometry__ILine___serialization__Serializable__core_serialize_to]))(self, p0); /* core_serialize_to on <self:ILine[Numeric]>*/
}
RET_LABEL:;
}
/* method points_and_lines#ILine#from_deserializer for (self: ILine[Numeric], Deserializer) */
void geometry___geometry__ILine___serialization__Serializable__from_deserializer(val* self, val* p0) {
val* var_v /* var v: Deserializer */;
var_v = p0;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry___geometry__ILine___serialization__Serializable__from_deserializer]))(self, p0); /* from_deserializer on <self:ILine[Numeric]>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__notify_of_creation]))(var_v, self); /* notify_of_creation on <var_v:Deserializer>*/
}
RET_LABEL:;
}
/* method points_and_lines#Line#point_left for (self: Line[Numeric]): IPoint[Numeric] */
val* geometry___geometry__Line___ILine__point_left(val* self) {
val* var /* : IPoint[Numeric] */;
val* var1 /* : IPoint[Numeric] */;
var1 = self->attrs[COLOR_geometry__points_and_lines__Line___point_left].val; /* _point_left on <self:Line[Numeric]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _point_left");
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 131);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method points_and_lines#Line#point_left= for (self: Line[Numeric], IPoint[Numeric]) */
void geometry___geometry__Line___point_left_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (point_left) <p0:IPoint[Numeric]> isa P */
/* <p0:IPoint[Numeric]> isa P */
type_struct = self->type->resolution_table->types[COLOR_geometry__points_and_lines__ILine__P];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "P", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 131);
fatal_exit(1);
}
self->attrs[COLOR_geometry__points_and_lines__Line___point_left].val = p0; /* _point_left on <self:Line[Numeric]> */
RET_LABEL:;
}
/* method points_and_lines#Line#point_right for (self: Line[Numeric]): IPoint[Numeric] */
val* geometry___geometry__Line___ILine__point_right(val* self) {
val* var /* : IPoint[Numeric] */;
val* var1 /* : IPoint[Numeric] */;
var1 = self->attrs[COLOR_geometry__points_and_lines__Line___point_right].val; /* _point_right on <self:Line[Numeric]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _point_right");
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 132);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method points_and_lines#Line#point_right= for (self: Line[Numeric], IPoint[Numeric]) */
void geometry___geometry__Line___point_right_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (point_right) <p0:IPoint[Numeric]> isa P */
/* <p0:IPoint[Numeric]> isa P */
type_struct = self->type->resolution_table->types[COLOR_geometry__points_and_lines__ILine__P];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "P", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_geometry__points_and_lines, 132);
fatal_exit(1);
}
self->attrs[COLOR_geometry__points_and_lines__Line___point_right].val = p0; /* _point_right on <self:Line[Numeric]> */
RET_LABEL:;
}
/* method points_and_lines#Line#init for (self: Line[Numeric]) */
void geometry___geometry__Line___core__kernel__Object__init(val* self) {
val* var /* : IPoint[Numeric] */;
val* var_a /* var a: IPoint[Numeric] */;
val* var1 /* : IPoint[Numeric] */;
val* var_b /* var b: IPoint[Numeric] */;
val* var2 /* : Numeric */;
val* var3 /* : Numeric */;
short int var4 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_geometry___geometry__Line___core__kernel__Object__init]))(self); /* init on <self:Line[Numeric]>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_geometry__points_and_lines__ILine__point_left]))(self); /* point_left on <self:Line[Numeric]>*/
}
var_a = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_geometry__points_and_lines__ILine__point_right]))(self); /* point_right on <self:Line[Numeric]>*/
}
var_b = var1;
{
var2 = ((val*(*)(val* self))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_a); /* x on <var_a:IPoint[Numeric]>*/
}
{
var3 = ((val*(*)(val* self))((((long)var_b&3)?class_info[((long)var_b&3)]:var_b->class)->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_b); /* x on <var_b:IPoint[Numeric]>*/
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__kernel__Comparable___62d]))(var2, var3); /* > on <var2:Numeric>*/
}
if (var4){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry__points_and_lines__Line__point_left_61d]))(self, var_b); /* point_left= on <self:Line[Numeric]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry__points_and_lines__Line__point_right_61d]))(self, var_a); /* point_right= on <self:Line[Numeric]>*/
}
} else {
}
RET_LABEL:;
}
/* method points_and_lines#Line#core_serialize_to for (self: Line[Numeric], Serializer) */
void geometry___geometry__Line___serialization__Serializable__core_serialize_to(val* self, val* p0) {
val* var_v /* var v: Serializer */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : IPoint[Numeric] */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
val* var8 /* : IPoint[Numeric] */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry___geometry__Line___serialization__Serializable__core_serialize_to]))(self, p0); /* core_serialize_to on <self:Line[Numeric]>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "point_left";
var2 = core__flat___NativeString___to_s_full(var1, 10l, 10l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_geometry__points_and_lines__ILine__point_left]))(self); /* point_left on <self:Line[Numeric]>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var_v&3)?class_info[((long)var_v&3)]:var_v->class)->vft[COLOR_serialization__Serializer__serialize_attribute]))(var_v, var, var3); /* serialize_attribute on <var_v:Serializer>*/
}
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "point_right";
var7 = core__flat___NativeString___to_s_full(var6, 11l, 11l);
var5 = var7;
varonce4 = var5;
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_geometry__points_and_lines__ILine__point_right]))(self); /* point_right on <self:Line[Numeric]>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var_v&3)?class_info[((long)var_v&3)]:var_v->class)->vft[COLOR_serialization__Serializer__serialize_attribute]))(var_v, var5, var8); /* serialize_attribute on <var_v:Serializer>*/
}
RET_LABEL:;
}
/* method points_and_lines#Line#from_deserializer for (self: Line[Numeric], Deserializer) */
void geometry___geometry__Line___serialization__Serializable__from_deserializer(val* self, val* p0) {
val* var_v /* var v: Deserializer */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : nullable Object */;
val* var_point_left /* var point_left: nullable Object */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
short int var5 /* : Bool */;
val* var6 /* : Array[Error] */;
val* var7 /* : AttributeTypeError */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : nullable Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
val* var30 /* : nullable Object */;
val* var_point_right /* var point_right: nullable Object */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const struct type* type_struct34;
short int is_nullable35;
short int var36 /* : Bool */;
val* var37 /* : Array[Error] */;
val* var38 /* : AttributeTypeError */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
val* var51 /* : nullable Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry___geometry__Line___serialization__Serializable__from_deserializer]))(self, p0); /* from_deserializer on <self:Line[Numeric]>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__notify_of_creation]))(var_v, self); /* notify_of_creation on <var_v:Deserializer>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "point_left";
var2 = core__flat___NativeString___to_s_full(var1, 10l, 10l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__deserialize_attribute]))(var_v, var); /* deserialize_attribute on <var_v:Deserializer>*/
}
var_point_left = var3;
/* <var_point_left:nullable Object> isa P */
type_struct = self->type->resolution_table->types[COLOR_geometry__points_and_lines__ILine__P];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_point_left == NULL) {
var4 = is_nullable;
} else {
if(cltype >= (((long)var_point_left&3)?type_info[((long)var_point_left&3)]:var_point_left->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_point_left&3)?type_info[((long)var_point_left&3)]:var_point_left->type)->type_table[cltype] == idtype;
}
}
var5 = !var4;
if (var5){
{
var6 = ((val*(*)(val* self))(var_v->class->vft[COLOR_serialization__Deserializer__errors]))(var_v); /* errors on <var_v:Deserializer>*/
}
var7 = NEW_serialization__AttributeTypeError(&type_serialization__AttributeTypeError);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "TODO remove this arg on c_src regen";
var11 = core__flat___NativeString___to_s_full(var10, 35l, 35l);
var9 = var11;
varonce8 = var9;
}
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "point_left";
var15 = core__flat___NativeString___to_s_full(var14, 10l, 10l);
var13 = var15;
varonce12 = var13;
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "PlaceHolderTypeWhichShouldNotExist";
var19 = core__flat___NativeString___to_s_full(var18, 34l, 34l);
var17 = var19;
varonce16 = var17;
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_core__error__Error__message_61d]))(var7, var9); /* message= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_serialization__AttributeTypeError__receiver_61d]))(var7, self); /* receiver= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_serialization__AttributeTypeError__attribute_name_61d]))(var7, var13); /* attribute_name= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_serialization__AttributeTypeError__attribute_61d]))(var7, var_point_left); /* attribute= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_serialization__AttributeTypeError__expected_type_61d]))(var7, var17); /* expected_type= on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self))(var7->class->vft[COLOR_core__kernel__Object__init]))(var7); /* init on <var7:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var6, var7); /* add on <var6:Array[Error]>*/
}
{
var20 = ((val*(*)(val* self))(var_v->class->vft[COLOR_serialization__Deserializer__keep_going]))(var_v); /* keep_going on <var_v:Deserializer>*/
}
if (var20 == NULL) {
var21 = 0; /* <0:Bool> cannot be null */
} else {
{ /* Inline kernel#Bool#== (var20,0) on <var20:nullable Bool> */
if ((var20 != NULL)) {
var25 = (short int)((long)(var20)>>2);
var24 = var25 == 0;
} else var24 = 0;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
goto RET_LABEL;
} else {
}
} else {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry__points_and_lines__Line__point_left_61d]))(self, var_point_left); /* point_left= on <self:Line[Numeric]>*/
}
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "point_right";
var29 = core__flat___NativeString___to_s_full(var28, 11l, 11l);
var27 = var29;
varonce26 = var27;
}
{
var30 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__deserialize_attribute]))(var_v, var27); /* deserialize_attribute on <var_v:Deserializer>*/
}
var_point_right = var30;
/* <var_point_right:nullable Object> isa P */
type_struct34 = self->type->resolution_table->types[COLOR_geometry__points_and_lines__ILine__P];
cltype32 = type_struct34->color;
idtype33 = type_struct34->id;
is_nullable35 = type_struct34->is_nullable;
if(var_point_right == NULL) {
var31 = is_nullable35;
} else {
if(cltype32 >= (((long)var_point_right&3)?type_info[((long)var_point_right&3)]:var_point_right->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var_point_right&3)?type_info[((long)var_point_right&3)]:var_point_right->type)->type_table[cltype32] == idtype33;
}
}
var36 = !var31;
if (var36){
{
var37 = ((val*(*)(val* self))(var_v->class->vft[COLOR_serialization__Deserializer__errors]))(var_v); /* errors on <var_v:Deserializer>*/
}
var38 = NEW_serialization__AttributeTypeError(&type_serialization__AttributeTypeError);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "TODO remove this arg on c_src regen";
var42 = core__flat___NativeString___to_s_full(var41, 35l, 35l);
var40 = var42;
varonce39 = var40;
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "point_right";
var46 = core__flat___NativeString___to_s_full(var45, 11l, 11l);
var44 = var46;
varonce43 = var44;
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "PlaceHolderTypeWhichShouldNotExist";
var50 = core__flat___NativeString___to_s_full(var49, 34l, 34l);
var48 = var50;
varonce47 = var48;
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_core__error__Error__message_61d]))(var38, var40); /* message= on <var38:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_serialization__AttributeTypeError__receiver_61d]))(var38, self); /* receiver= on <var38:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_serialization__AttributeTypeError__attribute_name_61d]))(var38, var44); /* attribute_name= on <var38:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_serialization__AttributeTypeError__attribute_61d]))(var38, var_point_right); /* attribute= on <var38:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_serialization__AttributeTypeError__expected_type_61d]))(var38, var48); /* expected_type= on <var38:AttributeTypeError>*/
}
{
((void(*)(val* self))(var38->class->vft[COLOR_core__kernel__Object__init]))(var38); /* init on <var38:AttributeTypeError>*/
}
{
((void(*)(val* self, val* p0))(var37->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var37, var38); /* add on <var37:Array[Error]>*/
}
{
var51 = ((val*(*)(val* self))(var_v->class->vft[COLOR_serialization__Deserializer__keep_going]))(var_v); /* keep_going on <var_v:Deserializer>*/
}
if (var51 == NULL) {
var52 = 0; /* <0:Bool> cannot be null */
} else {
{ /* Inline kernel#Bool#== (var51,0) on <var51:nullable Bool> */
if ((var51 != NULL)) {
var56 = (short int)((long)(var51)>>2);
var55 = var56 == 0;
} else var55 = 0;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
goto RET_LABEL;
} else {
}
} else {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry__points_and_lines__Line__point_right_61d]))(self, var_point_right); /* point_right= on <self:Line[Numeric]>*/
}
}
RET_LABEL:;
}
/* method points_and_lines#ILine3d#core_serialize_to for (self: ILine3d[Numeric], Serializer) */
void geometry___geometry__ILine3d___serialization__Serializable__core_serialize_to(val* self, val* p0) {
val* var_v /* var v: Serializer */;
var_v = p0;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry___geometry__ILine3d___serialization__Serializable__core_serialize_to]))(self, p0); /* core_serialize_to on <self:ILine3d[Numeric]>*/
}
RET_LABEL:;
}
/* method points_and_lines#ILine3d#from_deserializer for (self: ILine3d[Numeric], Deserializer) */
void geometry___geometry__ILine3d___serialization__Serializable__from_deserializer(val* self, val* p0) {
val* var_v /* var v: Deserializer */;
var_v = p0;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_geometry___geometry__ILine3d___serialization__Serializable__from_deserializer]))(self, p0); /* from_deserializer on <self:ILine3d[Numeric]>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__notify_of_creation]))(var_v, self); /* notify_of_creation on <var_v:Deserializer>*/
}
RET_LABEL:;
}
/* method points_and_lines#Line3d#core_serialize_to for (self: Line3d[Numeric], Serializer) */
void geometry___geometry__Line3d___serialization__Serializable__core_serialize_to(val* self, val* p0) {
val* var_v /* var v: Serializer */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry___geometry__Line3d___serialization__Serializable__core_serialize_to]))(self, p0); /* core_serialize_to on <self:Line3d[Numeric]>*/
}
RET_LABEL:;
}
/* method points_and_lines#Line3d#from_deserializer for (self: Line3d[Numeric], Deserializer) */
void geometry___geometry__Line3d___serialization__Serializable__from_deserializer(val* self, val* p0) {
val* var_v /* var v: Deserializer */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry___geometry__Line3d___serialization__Serializable__from_deserializer]))(self, p0); /* from_deserializer on <self:Line3d[Numeric]>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__notify_of_creation]))(var_v, self); /* notify_of_creation on <var_v:Deserializer>*/
}
RET_LABEL:;
}
/* method points_and_lines#Deserializer#deserialize_class_intern for (self: Deserializer, String): nullable Object */
val* geometry__points_and_lines___serialization__Deserializer___deserialize_class_intern(val* self, val* p0) {
val* var /* : nullable Object */;
val* var_name /* var name: String */;
val* var1 /* : nullable Object */;
var_name = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_geometry__points_and_lines___serialization__Deserializer___deserialize_class_intern]))(self, p0); /* deserialize_class_intern on <self:Deserializer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method points_and_lines#Deserializer#core_serialize_to for (self: Deserializer, Serializer) */
void geometry__points_and_lines___serialization__Deserializer___serialization__Serializable__core_serialize_to(val* self, val* p0) {
val* var_v /* var v: Serializer */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry__points_and_lines___serialization__Deserializer___serialization__Serializable__core_serialize_to]))(self, p0); /* core_serialize_to on <self:Deserializer>*/
}
RET_LABEL:;
}
/* method points_and_lines#Deserializer#from_deserializer for (self: Deserializer, Deserializer) */
void geometry__points_and_lines___serialization__Deserializer___serialization__Serializable__from_deserializer(val* self, val* p0) {
val* var_v /* var v: Deserializer */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_geometry__points_and_lines___serialization__Deserializer___serialization__Serializable__from_deserializer]))(self, p0); /* from_deserializer on <self:Deserializer>*/
}
{
((void(*)(val* self, val* p0))(var_v->class->vft[COLOR_serialization__Deserializer__notify_of_creation]))(var_v, self); /* notify_of_creation on <var_v:Deserializer>*/
}
RET_LABEL:;
}
