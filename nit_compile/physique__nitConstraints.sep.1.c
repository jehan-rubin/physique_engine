#include "physique__nitConstraints.sep.0.h"
/* method nitConstraints#Position_2d#x for (self: Position_2d): Float */
double physique___physique__Position_95d2d___x(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_physique__nitConstraints__Position_95d2d___x].d; /* _x on <self:Position_2d> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitConstraints#Position_2d#x= for (self: Position_2d, Float) */
void physique___physique__Position_95d2d___x_61d(val* self, double p0) {
self->attrs[COLOR_physique__nitConstraints__Position_95d2d___x].d = p0; /* _x on <self:Position_2d> */
RET_LABEL:;
}
/* method nitConstraints#Position_2d#y for (self: Position_2d): Float */
double physique___physique__Position_95d2d___y(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_physique__nitConstraints__Position_95d2d___y].d; /* _y on <self:Position_2d> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitConstraints#Position_2d#y= for (self: Position_2d, Float) */
void physique___physique__Position_95d2d___y_61d(val* self, double p0) {
self->attrs[COLOR_physique__nitConstraints__Position_95d2d___y].d = p0; /* _y on <self:Position_2d> */
RET_LABEL:;
}
/* method nitConstraints#Position_2d#update_position for (self: Position_2d, Float, Float) */
void physique___physique__Position_95d2d___update_position(val* self, double p0, double p1) {
double var_x /* var x: Float */;
double var_y /* var y: Float */;
var_x = p0;
var_y = p1;
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_physique__nitConstraints__Position_95d2d__x_61d]))(self, var_x); /* x= on <self:Position_2d>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_physique__nitConstraints__Position_95d2d__y_61d]))(self, var_y); /* y= on <self:Position_2d>*/
}
RET_LABEL:;
}
/* method nitConstraints#Position_2d#init for (self: Position_2d) */
void physique___physique__Position_95d2d___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_physique___physique__Position_95d2d___core__kernel__Object__init]))(self); /* init on <self:Position_2d>*/
}
RET_LABEL:;
}
/* method nitConstraints#Dimensions_2d#height for (self: Dimensions_2d): Float */
double physique___physique__Dimensions_95d2d___height(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_physique__nitConstraints__Dimensions_95d2d___height].d; /* _height on <self:Dimensions_2d> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitConstraints#Dimensions_2d#height= for (self: Dimensions_2d, Float) */
void physique___physique__Dimensions_95d2d___height_61d(val* self, double p0) {
self->attrs[COLOR_physique__nitConstraints__Dimensions_95d2d___height].d = p0; /* _height on <self:Dimensions_2d> */
RET_LABEL:;
}
/* method nitConstraints#Dimensions_2d#width for (self: Dimensions_2d): Float */
double physique___physique__Dimensions_95d2d___width(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_physique__nitConstraints__Dimensions_95d2d___width].d; /* _width on <self:Dimensions_2d> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitConstraints#Dimensions_2d#width= for (self: Dimensions_2d, Float) */
void physique___physique__Dimensions_95d2d___width_61d(val* self, double p0) {
self->attrs[COLOR_physique__nitConstraints__Dimensions_95d2d___width].d = p0; /* _width on <self:Dimensions_2d> */
RET_LABEL:;
}
/* method nitConstraints#Dimensions_2d#init for (self: Dimensions_2d) */
void physique___physique__Dimensions_95d2d___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_physique___physique__Dimensions_95d2d___core__kernel__Object__init]))(self); /* init on <self:Dimensions_2d>*/
}
RET_LABEL:;
}
/* method nitConstraints#Area_2d#p1 for (self: Area_2d): Position_2d */
val* physique___physique__Area_95d2d___p1(val* self) {
val* var /* : Position_2d */;
val* var1 /* : Position_2d */;
var1 = self->attrs[COLOR_physique__nitConstraints__Area_95d2d___p1].val; /* _p1 on <self:Area_2d> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _p1");
PRINT_ERROR(" (%s:%d)\n", FILE_physique__nitConstraints, 26);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitConstraints#Area_2d#p1= for (self: Area_2d, Position_2d) */
void physique___physique__Area_95d2d___p1_61d(val* self, val* p0) {
self->attrs[COLOR_physique__nitConstraints__Area_95d2d___p1].val = p0; /* _p1 on <self:Area_2d> */
RET_LABEL:;
}
/* method nitConstraints#Area_2d#p2 for (self: Area_2d): Position_2d */
val* physique___physique__Area_95d2d___p2(val* self) {
val* var /* : Position_2d */;
val* var1 /* : Position_2d */;
var1 = self->attrs[COLOR_physique__nitConstraints__Area_95d2d___p2].val; /* _p2 on <self:Area_2d> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _p2");
PRINT_ERROR(" (%s:%d)\n", FILE_physique__nitConstraints, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitConstraints#Area_2d#p2= for (self: Area_2d, Position_2d) */
void physique___physique__Area_95d2d___p2_61d(val* self, val* p0) {
self->attrs[COLOR_physique__nitConstraints__Area_95d2d___p2].val = p0; /* _p2 on <self:Area_2d> */
RET_LABEL:;
}
/* method nitConstraints#Area_2d#init for (self: Area_2d) */
void physique___physique__Area_95d2d___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_physique___physique__Area_95d2d___core__kernel__Object__init]))(self); /* init on <self:Area_2d>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_physique__nitConstraints__Area_95d2d__compute_area]))(self); /* compute_area on <self:Area_2d>*/
}
RET_LABEL:;
}
/* method nitConstraints#Area_2d#compute_area for (self: Area_2d) */
void physique___physique__Area_95d2d___compute_area(val* self) {
RET_LABEL:;
}
/* method nitConstraints#Area_2d#contains for (self: Area_2d, Position_2d): Bool */
short int physique___physique__Area_95d2d___contains(val* self, val* p0) {
short int var /* : Bool */;
val* var_p /* var p: Position_2d */;
var_p = p0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitConstraints#Vector_2d#v_x for (self: Vector_2d): Float */
double physique___physique__Vector_95d2d___v_x(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_physique__nitConstraints__Vector_95d2d___v_x].d; /* _v_x on <self:Vector_2d> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitConstraints#Vector_2d#v_x= for (self: Vector_2d, Float) */
void physique___physique__Vector_95d2d___v_x_61d(val* self, double p0) {
self->attrs[COLOR_physique__nitConstraints__Vector_95d2d___v_x].d = p0; /* _v_x on <self:Vector_2d> */
RET_LABEL:;
}
/* method nitConstraints#Vector_2d#v_y for (self: Vector_2d): Float */
double physique___physique__Vector_95d2d___v_y(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_physique__nitConstraints__Vector_95d2d___v_y].d; /* _v_y on <self:Vector_2d> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitConstraints#Vector_2d#v_y= for (self: Vector_2d, Float) */
void physique___physique__Vector_95d2d___v_y_61d(val* self, double p0) {
self->attrs[COLOR_physique__nitConstraints__Vector_95d2d___v_y].d = p0; /* _v_y on <self:Vector_2d> */
RET_LABEL:;
}
/* method nitConstraints#Vector_2d#transform_vector for (self: Vector_2d, Vector_2d) */
void physique___physique__Vector_95d2d___transform_vector(val* self, val* p0) {
val* var_v /* var v: Vector_2d */;
double var /* : Float */;
double var_temp /* var temp: Float */;
double var1 /* : Float */;
double var2 /* : Float */;
double var3 /* : Float */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var6 /* : Float */;
double var7 /* : Float */;
double var8 /* : Float */;
double var9 /* : Float */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
double var15 /* : Float */;
double var16 /* : Float */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
double var22 /* : Float */;
double var23 /* : Float */;
double var24 /* : Float */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
double var30 /* : Float */;
double var31 /* : Float */;
double var32 /* : Float */;
double var33 /* : Float */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
double var39 /* : Float */;
double var40 /* : Float */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
double var46 /* : Float */;
var_v = p0;
{
var = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(self); /* v_x on <self:Vector_2d>*/
}
var_temp = var;
{
var1 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(self); /* v_x on <self:Vector_2d>*/
}
{
var2 = ((double(*)(val* self))(var_v->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var_v); /* v_y on <var_v:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var1,var2) on <var1:Float> */
/* Covariant cast for argument 0 (i) <var2:Float> isa OTHER */
/* <var2:Float> isa OTHER */
var5 = 1; /* easy <var2:Float> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var6 = var1 * var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(self); /* v_y on <self:Vector_2d>*/
}
{
var8 = ((double(*)(val* self))(var_v->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var_v); /* v_x on <var_v:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var7,var8) on <var7:Float> */
/* Covariant cast for argument 0 (i) <var8:Float> isa OTHER */
/* <var8:Float> isa OTHER */
var11 = 1; /* easy <var8:Float> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var15 = var7 * var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var3,var9) on <var3:Float> */
/* Covariant cast for argument 0 (i) <var9:Float> isa OTHER */
/* <var9:Float> isa OTHER */
var18 = 1; /* easy <var9:Float> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var22 = var3 - var9;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(self, var16); /* v_x= on <self:Vector_2d>*/
}
{
var23 = ((double(*)(val* self))(var_v->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var_v); /* v_x on <var_v:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var_temp,var23) on <var_temp:Float> */
/* Covariant cast for argument 0 (i) <var23:Float> isa OTHER */
/* <var23:Float> isa OTHER */
var26 = 1; /* easy <var23:Float> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var30 = var_temp * var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var31 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(self); /* v_y on <self:Vector_2d>*/
}
{
var32 = ((double(*)(val* self))(var_v->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var_v); /* v_y on <var_v:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var31,var32) on <var31:Float> */
/* Covariant cast for argument 0 (i) <var32:Float> isa OTHER */
/* <var32:Float> isa OTHER */
var35 = 1; /* easy <var32:Float> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var39 = var31 * var32;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var24,var33) on <var24:Float> */
/* Covariant cast for argument 0 (i) <var33:Float> isa OTHER */
/* <var33:Float> isa OTHER */
var42 = 1; /* easy <var33:Float> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var46 = var24 + var33;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(self, var40); /* v_y= on <self:Vector_2d>*/
}
RET_LABEL:;
}
/* method nitConstraints#Vector_2d#length for (self: Vector_2d): Float */
double physique___physique__Vector_95d2d___length(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
double var3 /* : Float */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var6 /* : Float */;
double var7 /* : Float */;
double var8 /* : Float */;
double var9 /* : Float */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
double var15 /* : Float */;
double var16 /* : Float */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
double var22 /* : Float */;
double var23 /* : Float */;
{
var1 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(self); /* v_x on <self:Vector_2d>*/
}
{
var2 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(self); /* v_x on <self:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var1,var2) on <var1:Float> */
/* Covariant cast for argument 0 (i) <var2:Float> isa OTHER */
/* <var2:Float> isa OTHER */
var5 = 1; /* easy <var2:Float> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var6 = var1 * var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(self); /* v_y on <self:Vector_2d>*/
}
{
var8 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(self); /* v_y on <self:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var7,var8) on <var7:Float> */
/* Covariant cast for argument 0 (i) <var8:Float> isa OTHER */
/* <var8:Float> isa OTHER */
var11 = 1; /* easy <var8:Float> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var15 = var7 * var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var3,var9) on <var3:Float> */
/* Covariant cast for argument 0 (i) <var9:Float> isa OTHER */
/* <var9:Float> isa OTHER */
var18 = 1; /* easy <var9:Float> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var22 = var3 + var9;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var23 = core__math___Float___sqrt(var16);
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitConstraints#Vector_2d#get_normalized_vector for (self: Vector_2d): Vector_2d */
val* physique___physique__Vector_95d2d___get_normalized_vector(val* self) {
val* var /* : Vector_2d */;
val* var1 /* : Vector_2d */;
double var2 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var7 /* : Float */;
double var8 /* : Float */;
double var9 /* : Float */;
double var10 /* : Float */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
double var16 /* : Float */;
var1 = NEW_physique__Vector_95d2d(&type_physique__Vector_95d2d);
{
var2 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(self); /* v_x on <self:Vector_2d>*/
}
{
var3 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__length]))(self); /* length on <self:Vector_2d>*/
}
{
{ /* Inline kernel#Float#/ (var2,var3) on <var2:Float> */
/* Covariant cast for argument 0 (i) <var3:Float> isa OTHER */
/* <var3:Float> isa OTHER */
var6 = 1; /* easy <var3:Float> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var7 = var2 / var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var8 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(self); /* v_y on <self:Vector_2d>*/
}
{
var9 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__length]))(self); /* length on <self:Vector_2d>*/
}
{
{ /* Inline kernel#Float#/ (var8,var9) on <var8:Float> */
/* Covariant cast for argument 0 (i) <var9:Float> isa OTHER */
/* <var9:Float> isa OTHER */
var12 = 1; /* easy <var9:Float> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var16 = var8 / var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
((void(*)(val* self, double p0))(var1->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var1, var4); /* v_x= on <var1:Vector_2d>*/
}
{
((void(*)(val* self, double p0))(var1->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(var1, var10); /* v_y= on <var1:Vector_2d>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Vector_2d>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitConstraints#Vector_2d#add for (self: Vector_2d, Vector_2d) */
void physique___physique__Vector_95d2d___add(val* self, val* p0) {
val* var_v /* var v: Vector_2d */;
val* var_ /* var : Vector_2d */;
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var5 /* : Float */;
val* var_6 /* var : Vector_2d */;
double var7 /* : Float */;
double var8 /* : Float */;
double var9 /* : Float */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
double var15 /* : Float */;
var_v = p0;
var_ = self;
{
var = ((double(*)(val* self))(var_->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var_); /* v_x on <var_:Vector_2d>*/
}
{
var1 = ((double(*)(val* self))(var_v->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var_v); /* v_x on <var_v:Vector_2d>*/
}
{
{ /* Inline kernel#Float#+ (var,var1) on <var:Float> */
/* Covariant cast for argument 0 (i) <var1:Float> isa OTHER */
/* <var1:Float> isa OTHER */
var4 = 1; /* easy <var1:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var5 = var + var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, double p0))(var_->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var_, var2); /* v_x= on <var_:Vector_2d>*/
}
var_6 = self;
{
var7 = ((double(*)(val* self))(var_6->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var_6); /* v_y on <var_6:Vector_2d>*/
}
{
var8 = ((double(*)(val* self))(var_v->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var_v); /* v_y on <var_v:Vector_2d>*/
}
{
{ /* Inline kernel#Float#+ (var7,var8) on <var7:Float> */
/* Covariant cast for argument 0 (i) <var8:Float> isa OTHER */
/* <var8:Float> isa OTHER */
var11 = 1; /* easy <var8:Float> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var15 = var7 + var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
((void(*)(val* self, double p0))(var_6->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(var_6, var9); /* v_y= on <var_6:Vector_2d>*/
}
RET_LABEL:;
}
/* method nitConstraints#Vector_2d#intensify for (self: Vector_2d, Float) */
void physique___physique__Vector_95d2d___intensify(val* self, double p0) {
double var_i /* var i: Float */;
val* var_ /* var : Vector_2d */;
double var /* : Float */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var4 /* : Float */;
val* var_5 /* var : Vector_2d */;
double var6 /* : Float */;
double var7 /* : Float */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
double var13 /* : Float */;
var_i = p0;
var_ = self;
{
var = ((double(*)(val* self))(var_->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var_); /* v_x on <var_:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var,var_i) on <var:Float> */
/* Covariant cast for argument 0 (i) <var_i:Float> isa OTHER */
/* <var_i:Float> isa OTHER */
var3 = 1; /* easy <var_i:Float> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var4 = var * var_i;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
((void(*)(val* self, double p0))(var_->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var_, var1); /* v_x= on <var_:Vector_2d>*/
}
var_5 = self;
{
var6 = ((double(*)(val* self))(var_5->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var_5); /* v_y on <var_5:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var6,var_i) on <var6:Float> */
/* Covariant cast for argument 0 (i) <var_i:Float> isa OTHER */
/* <var_i:Float> isa OTHER */
var9 = 1; /* easy <var_i:Float> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var13 = var6 * var_i;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, double p0))(var_5->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(var_5, var7); /* v_y= on <var_5:Vector_2d>*/
}
RET_LABEL:;
}
/* method nitConstraints#Vector_2d#init for (self: Vector_2d) */
void physique___physique__Vector_95d2d___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_physique___physique__Vector_95d2d___core__kernel__Object__init]))(self); /* init on <self:Vector_2d>*/
}
RET_LABEL:;
}
