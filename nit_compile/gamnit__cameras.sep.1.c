#include "gamnit__cameras.sep.0.h"
/* method cameras#Camera#display for (self: Camera): GamnitDisplay */
val* gamnit___gamnit__Camera___display(val* self) {
val* var /* : GamnitDisplay */;
val* var1 /* : GamnitDisplay */;
var1 = self->attrs[COLOR_gamnit__cameras__Camera___display].val; /* _display on <self:Camera> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _display");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__cameras, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method cameras#Camera#display= for (self: Camera, GamnitDisplay) */
void gamnit___gamnit__Camera___display_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__cameras__Camera___display].val = p0; /* _display on <self:Camera> */
RET_LABEL:;
}
/* method cameras#Camera#position for (self: Camera): Point3d[Float] */
val* gamnit___gamnit__Camera___position(val* self) {
val* var /* : Point3d[Float] */;
val* var1 /* : Point3d[Float] */;
var1 = self->attrs[COLOR_gamnit__cameras__Camera___position].val; /* _position on <self:Camera> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _position");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__cameras, 31);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method cameras#Camera#position= for (self: Camera, Point3d[Float]) */
void gamnit___gamnit__Camera___position_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__cameras__Camera___position].val = p0; /* _position on <self:Camera> */
RET_LABEL:;
}
/* method cameras#Camera#mvp_matrix for (self: Camera): Matrix */
val* gamnit___gamnit__Camera___mvp_matrix(val* self) {
val* var /* : Matrix */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "mvp_matrix", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__cameras, 34);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method cameras#Camera#init for (self: Camera) */
void gamnit___gamnit__Camera___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit___gamnit__Camera___core__kernel__Object__init]))(self); /* init on <self:Camera>*/
}
RET_LABEL:;
}
/* method cameras#EulerCamera#pitch for (self: EulerCamera): Float */
double gamnit___gamnit__EulerCamera___pitch(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__cameras__EulerCamera___pitch].d; /* _pitch on <self:EulerCamera> */
var = var1;
RET_LABEL:;
return var;
}
/* method cameras#EulerCamera#pitch= for (self: EulerCamera, Float) */
void gamnit___gamnit__EulerCamera___pitch_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__cameras__EulerCamera___pitch].d = p0; /* _pitch on <self:EulerCamera> */
RET_LABEL:;
}
/* method cameras#EulerCamera#yaw for (self: EulerCamera): Float */
double gamnit___gamnit__EulerCamera___yaw(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__cameras__EulerCamera___yaw].d; /* _yaw on <self:EulerCamera> */
var = var1;
RET_LABEL:;
return var;
}
/* method cameras#EulerCamera#yaw= for (self: EulerCamera, Float) */
void gamnit___gamnit__EulerCamera___yaw_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__cameras__EulerCamera___yaw].d = p0; /* _yaw on <self:EulerCamera> */
RET_LABEL:;
}
/* method cameras#EulerCamera#roll for (self: EulerCamera): Float */
double gamnit___gamnit__EulerCamera___roll(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__cameras__EulerCamera___roll].d; /* _roll on <self:EulerCamera> */
var = var1;
RET_LABEL:;
return var;
}
/* method cameras#EulerCamera#roll= for (self: EulerCamera, Float) */
void gamnit___gamnit__EulerCamera___roll_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__cameras__EulerCamera___roll].d = p0; /* _roll on <self:EulerCamera> */
RET_LABEL:;
}
/* method cameras#EulerCamera#field_of_view_y for (self: EulerCamera): Float */
double gamnit___gamnit__EulerCamera___field_of_view_y(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__cameras__EulerCamera___field_of_view_y].d; /* _field_of_view_y on <self:EulerCamera> */
var = var1;
RET_LABEL:;
return var;
}
/* method cameras#EulerCamera#field_of_view_y= for (self: EulerCamera, Float) */
void gamnit___gamnit__EulerCamera___field_of_view_y_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__cameras__EulerCamera___field_of_view_y].d = p0; /* _field_of_view_y on <self:EulerCamera> */
RET_LABEL:;
}
/* method cameras#EulerCamera#near for (self: EulerCamera): Float */
double gamnit___gamnit__EulerCamera___near(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__cameras__EulerCamera___near].d; /* _near on <self:EulerCamera> */
var = var1;
RET_LABEL:;
return var;
}
/* method cameras#EulerCamera#near= for (self: EulerCamera, Float) */
void gamnit___gamnit__EulerCamera___near_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__cameras__EulerCamera___near].d = p0; /* _near on <self:EulerCamera> */
RET_LABEL:;
}
/* method cameras#EulerCamera#far for (self: EulerCamera): Float */
double gamnit___gamnit__EulerCamera___far(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__cameras__EulerCamera___far].d; /* _far on <self:EulerCamera> */
var = var1;
RET_LABEL:;
return var;
}
/* method cameras#EulerCamera#far= for (self: EulerCamera, Float) */
void gamnit___gamnit__EulerCamera___far_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__cameras__EulerCamera___far].d = p0; /* _far on <self:EulerCamera> */
RET_LABEL:;
}
/* method cameras#EulerCamera#sensitivity for (self: EulerCamera): Float */
double gamnit___gamnit__EulerCamera___sensitivity(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__cameras__EulerCamera___sensitivity].d; /* _sensitivity on <self:EulerCamera> */
var = var1;
RET_LABEL:;
return var;
}
/* method cameras#EulerCamera#sensitivity= for (self: EulerCamera, Float) */
void gamnit___gamnit__EulerCamera___sensitivity_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__cameras__EulerCamera___sensitivity].d = p0; /* _sensitivity on <self:EulerCamera> */
RET_LABEL:;
}
/* method cameras#EulerCamera#turn for (self: EulerCamera, Float, Float) */
void gamnit___gamnit__EulerCamera___turn(val* self, double p0, double p1) {
double var_dx /* var dx: Float */;
double var_dy /* var dy: Float */;
val* var_ /* var : EulerCamera */;
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var5 /* : Float */;
double var6 /* : Float */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
double var12 /* : Float */;
val* var_13 /* var : EulerCamera */;
double var14 /* : Float */;
double var15 /* : Float */;
double var16 /* : Float */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
double var22 /* : Float */;
double var23 /* : Float */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
double var29 /* : Float */;
double var30 /* : Float */;
val* var31 /* : Sys */;
double var32 /* : Float */;
double var33 /* : Float */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
double var39 /* : Float */;
double var40 /* : Float */;
double var41 /* : Float */;
val* var42 /* : Sys */;
double var43 /* : Float */;
double var44 /* : Float */;
double var46 /* : Float */;
double var47 /* : Float */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
double var53 /* : Float */;
double var54 /* : Float */;
var_dx = p0;
var_dy = p1;
var_ = self;
{
var = ((double(*)(val* self))(var_->class->vft[COLOR_gamnit__cameras__EulerCamera__yaw]))(var_); /* yaw on <var_:EulerCamera>*/
}
{
var1 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__sensitivity]))(self); /* sensitivity on <self:EulerCamera>*/
}
{
{ /* Inline kernel#Float#* (var_dx,var1) on <var_dx:Float> */
/* Covariant cast for argument 0 (i) <var1:Float> isa OTHER */
/* <var1:Float> isa OTHER */
var4 = 1; /* easy <var1:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var5 = var_dx * var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var,var2) on <var:Float> */
/* Covariant cast for argument 0 (i) <var2:Float> isa OTHER */
/* <var2:Float> isa OTHER */
var8 = 1; /* easy <var2:Float> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var12 = var - var2;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, double p0))(var_->class->vft[COLOR_gamnit__cameras__EulerCamera__yaw_61d]))(var_, var6); /* yaw= on <var_:EulerCamera>*/
}
var_13 = self;
{
var14 = ((double(*)(val* self))(var_13->class->vft[COLOR_gamnit__cameras__EulerCamera__pitch]))(var_13); /* pitch on <var_13:EulerCamera>*/
}
{
var15 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__sensitivity]))(self); /* sensitivity on <self:EulerCamera>*/
}
{
{ /* Inline kernel#Float#* (var_dy,var15) on <var_dy:Float> */
/* Covariant cast for argument 0 (i) <var15:Float> isa OTHER */
/* <var15:Float> isa OTHER */
var18 = 1; /* easy <var15:Float> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var22 = var_dy * var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var14,var16) on <var14:Float> */
/* Covariant cast for argument 0 (i) <var16:Float> isa OTHER */
/* <var16:Float> isa OTHER */
var25 = 1; /* easy <var16:Float> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var29 = var14 - var16;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
((void(*)(val* self, double p0))(var_13->class->vft[COLOR_gamnit__cameras__EulerCamera__pitch_61d]))(var_13, var23); /* pitch= on <var_13:EulerCamera>*/
}
{
var30 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__pitch]))(self); /* pitch on <self:EulerCamera>*/
}
var31 = glob_sys;
{
var32 = ((double(*)(val* self))(var31->class->vft[COLOR_core__math__Sys__pi]))(var31); /* pi on <var31:Sys>*/
}
{
{ /* Inline kernel#Float#/ (var32,2.0) on <var32:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var35 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var39 = var32 / 2.0;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var40 = core___core__Float___Comparable__min(var30, var33);
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__pitch_61d]))(self, var40); /* pitch= on <self:EulerCamera>*/
}
{
var41 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__pitch]))(self); /* pitch on <self:EulerCamera>*/
}
var42 = glob_sys;
{
var43 = ((double(*)(val* self))(var42->class->vft[COLOR_core__math__Sys__pi]))(var42); /* pi on <var42:Sys>*/
}
{
{ /* Inline kernel#Float#unary - (var43) on <var43:Float> */
var46 = -var43;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var44,2.0) on <var44:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var49 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var53 = var44 / 2.0;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var54 = core___core__Float___Comparable__max(var41, var47);
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__pitch_61d]))(self, var54); /* pitch= on <self:EulerCamera>*/
}
RET_LABEL:;
}
/* method cameras#EulerCamera#move for (self: EulerCamera, Float, Float, Float) */
void gamnit___gamnit__EulerCamera___move(val* self, double p0, double p1, double p2) {
double var_dx /* var dx: Float */;
double var_dy /* var dy: Float */;
double var_dz /* var dz: Float */;
val* var /* : Point3d[Float] */;
val* var_ /* var : Point3d[Float] */;
val* var1 /* : Numeric */;
double var2 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var7 /* : Float */;
double var8 /* : Float */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
double var14 /* : Float */;
double var15 /* : Float */;
val* var16 /* : Numeric */;
val* var17 /* : Point3d[Float] */;
val* var_18 /* var : Point3d[Float] */;
val* var19 /* : Numeric */;
double var20 /* : Float */;
double var21 /* : Float */;
double var22 /* : Float */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
double var28 /* : Float */;
double var29 /* : Float */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
double var35 /* : Float */;
double var36 /* : Float */;
val* var37 /* : Numeric */;
val* var38 /* : Point3d[Float] */;
val* var_39 /* var : Point3d[Float] */;
val* var40 /* : Numeric */;
double var41 /* : Float */;
double var42 /* : Float */;
double var43 /* : Float */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
double var49 /* : Float */;
double var50 /* : Float */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
double var56 /* : Float */;
double var57 /* : Float */;
val* var58 /* : Numeric */;
val* var59 /* : Point3d[Float] */;
val* var_60 /* var : Point3d[Float] */;
val* var61 /* : Numeric */;
double var62 /* : Float */;
double var63 /* : Float */;
double var64 /* : Float */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
double var70 /* : Float */;
double var71 /* : Float */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
double var77 /* : Float */;
double var78 /* : Float */;
val* var79 /* : Numeric */;
val* var80 /* : Point3d[Float] */;
val* var_81 /* var : Point3d[Float] */;
val* var82 /* : Numeric */;
double var83 /* : Float */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
double var89 /* : Float */;
double var90 /* : Float */;
val* var91 /* : Numeric */;
var_dx = p0;
var_dy = p1;
var_dz = p2;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_); /* x on <var_:Point3d[Float]>*/
}
{
var2 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__yaw]))(self); /* yaw on <self:EulerCamera>*/
}
var3 = core__math___Float___sin(var2);
{
{ /* Inline kernel#Float#* (var3,var_dz) on <var3:Float> */
/* Covariant cast for argument 0 (i) <var_dz:Float> isa OTHER */
/* <var_dz:Float> isa OTHER */
var6 = 1; /* easy <var_dz:Float> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var7 = var3 * var_dz;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var1,var4) on <var1:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var4:Float> isa OTHER */
/* <var4:Float> isa OTHER */
var10 = 1; /* easy <var4:Float> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var14 = ((struct instance_core__Float*)var1)->value; /* autounbox from Numeric to Float */;
var15 = var14 - var4;
var8 = var15;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var16 = BOX_core__Float(var8); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var_, var16); /* x= on <var_:Point3d[Float]>*/
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
var_18 = var17;
{
var19 = ((val*(*)(val* self))(var_18->class->vft[COLOR_geometry__points_and_lines__IPoint3d__z]))(var_18); /* z on <var_18:Point3d[Float]>*/
}
{
var20 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__yaw]))(self); /* yaw on <self:EulerCamera>*/
}
var21 = core__math___Float___cos(var20);
{
{ /* Inline kernel#Float#* (var21,var_dz) on <var21:Float> */
/* Covariant cast for argument 0 (i) <var_dz:Float> isa OTHER */
/* <var_dz:Float> isa OTHER */
var24 = 1; /* easy <var_dz:Float> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var28 = var21 * var_dz;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var19,var22) on <var19:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var22:Float> isa OTHER */
/* <var22:Float> isa OTHER */
var31 = 1; /* easy <var22:Float> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var35 = ((struct instance_core__Float*)var19)->value; /* autounbox from Numeric to Float */;
var36 = var35 - var22;
var29 = var36;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
var37 = BOX_core__Float(var29); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var_18->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var_18, var37); /* z= on <var_18:Point3d[Float]>*/
}
{
var38 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
var_39 = var38;
{
var40 = ((val*(*)(val* self))(var_39->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_39); /* x on <var_39:Point3d[Float]>*/
}
{
var41 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__yaw]))(self); /* yaw on <self:EulerCamera>*/
}
var42 = core__math___Float___cos(var41);
{
{ /* Inline kernel#Float#* (var42,var_dx) on <var42:Float> */
/* Covariant cast for argument 0 (i) <var_dx:Float> isa OTHER */
/* <var_dx:Float> isa OTHER */
var45 = 1; /* easy <var_dx:Float> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var49 = var42 * var_dx;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var40,var43) on <var40:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var43:Float> isa OTHER */
/* <var43:Float> isa OTHER */
var52 = 1; /* easy <var43:Float> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var56 = ((struct instance_core__Float*)var40)->value; /* autounbox from Numeric to Float */;
var57 = var56 + var43;
var50 = var57;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
var58 = BOX_core__Float(var50); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var_39->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var_39, var58); /* x= on <var_39:Point3d[Float]>*/
}
{
var59 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
var_60 = var59;
{
var61 = ((val*(*)(val* self))(var_60->class->vft[COLOR_geometry__points_and_lines__IPoint3d__z]))(var_60); /* z on <var_60:Point3d[Float]>*/
}
{
var62 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__yaw]))(self); /* yaw on <self:EulerCamera>*/
}
var63 = core__math___Float___sin(var62);
{
{ /* Inline kernel#Float#* (var63,var_dx) on <var63:Float> */
/* Covariant cast for argument 0 (i) <var_dx:Float> isa OTHER */
/* <var_dx:Float> isa OTHER */
var66 = 1; /* easy <var_dx:Float> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var70 = var63 * var_dx;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var61,var64) on <var61:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var64:Float> isa OTHER */
/* <var64:Float> isa OTHER */
var73 = 1; /* easy <var64:Float> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var77 = ((struct instance_core__Float*)var61)->value; /* autounbox from Numeric to Float */;
var78 = var77 - var64;
var71 = var78;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
var79 = BOX_core__Float(var71); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var_60->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var_60, var79); /* z= on <var_60:Point3d[Float]>*/
}
{
var80 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
var_81 = var80;
{
var82 = ((val*(*)(val* self))(var_81->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_81); /* y on <var_81:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#+ (var82,var_dy) on <var82:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var_dy:Float> isa OTHER */
/* <var_dy:Float> isa OTHER */
var85 = 1; /* easy <var_dy:Float> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var89 = ((struct instance_core__Float*)var82)->value; /* autounbox from Numeric to Float */;
var90 = var89 + var_dy;
var83 = var90;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
{
var91 = BOX_core__Float(var83); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var_81->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var_81, var91); /* y= on <var_81:Point3d[Float]>*/
}
RET_LABEL:;
}
/* method cameras#EulerCamera#look_at for (self: EulerCamera, Float, Float, Float) */
void gamnit___gamnit__EulerCamera___look_at(val* self, double p0, double p1, double p2) {
double var_x /* var x: Float */;
double var_y /* var y: Float */;
double var_z /* var z: Float */;
val* var /* : Point3d[Float] */;
val* var1 /* : Numeric */;
double var2 /* : Float */;
double var_dx /* var dx: Float */;
val* var3 /* : Point3d[Float] */;
val* var4 /* : Numeric */;
double var5 /* : Float */;
double var_dy /* var dy: Float */;
val* var6 /* : Point3d[Float] */;
val* var7 /* : Numeric */;
double var8 /* : Float */;
double var_dz /* var dz: Float */;
val* var9 /* : Sys */;
double var10 /* : Float */;
val* var11 /* : Sys */;
double var12 /* : Float */;
double var14 /* : Float */;
double var15 /* : Float */;
var_x = p0;
var_y = p1;
var_z = p2;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var); /* x on <var:Point3d[Float]>*/
}
var2 = ((struct instance_core__Float*)var1)->value; /* autounbox from Numeric to Float */;
var_dx = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var3); /* y on <var3:Point3d[Float]>*/
}
var5 = ((struct instance_core__Float*)var4)->value; /* autounbox from Numeric to Float */;
var_dy = var5;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_geometry__points_and_lines__IPoint3d__z]))(var6); /* z on <var6:Point3d[Float]>*/
}
var8 = ((struct instance_core__Float*)var7)->value; /* autounbox from Numeric to Float */;
var_dz = var8;
var9 = glob_sys;
{
var10 = ((double(*)(val* self, double p0, double p1))(var9->class->vft[COLOR_core__math__Sys__atan2]))(var9, var_dx, var_dz); /* atan2 on <var9:Sys>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__yaw_61d]))(self, var10); /* yaw= on <self:EulerCamera>*/
}
var11 = glob_sys;
{
{ /* Inline kernel#Float#unary - (var_dy) on <var_dy:Float> */
var14 = -var_dy;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var15 = ((double(*)(val* self, double p0, double p1))(var11->class->vft[COLOR_core__math__Sys__atan2]))(var11, var12, var_dz); /* atan2 on <var11:Sys>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__pitch_61d]))(self, var15); /* pitch= on <self:EulerCamera>*/
}
RET_LABEL:;
}
/* method cameras#EulerCamera#rotation_matrix for (self: EulerCamera): Matrix */
val* gamnit___gamnit__EulerCamera___rotation_matrix(val* self) {
val* var /* : Matrix */;
val* var1 /* : Matrix */;
val* var2 /* : Matrix */;
val* var_view /* var view: Matrix */;
double var3 /* : Float */;
double var4 /* : Float */;
double var5 /* : Float */;
var1 = NEW_matrix__Matrix(&type_matrix__Matrix);
{
var2 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_matrix__Matrix__identity]))(var1, 4l); /* identity on <var1:Matrix>*/
}
var_view = var2;
{
var3 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__yaw]))(self); /* yaw on <self:EulerCamera>*/
}
{
((void(*)(val* self, double p0, double p1, double p2, double p3))(var_view->class->vft[COLOR_matrix__projection__Matrix__rotate]))(var_view, var3, 0.0, 1.0, 0.0); /* rotate on <var_view:Matrix>*/
}
{
var4 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__pitch]))(self); /* pitch on <self:EulerCamera>*/
}
{
((void(*)(val* self, double p0, double p1, double p2, double p3))(var_view->class->vft[COLOR_matrix__projection__Matrix__rotate]))(var_view, var4, 1.0, 0.0, 0.0); /* rotate on <var_view:Matrix>*/
}
{
var5 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__roll]))(self); /* roll on <self:EulerCamera>*/
}
{
((void(*)(val* self, double p0, double p1, double p2, double p3))(var_view->class->vft[COLOR_matrix__projection__Matrix__rotate]))(var_view, var5, 0.0, 0.0, 1.0); /* rotate on <var_view:Matrix>*/
}
var = var_view;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cameras#EulerCamera#mvp_matrix for (self: EulerCamera): Matrix */
val* gamnit___gamnit__EulerCamera___Camera__mvp_matrix(val* self) {
val* var /* : Matrix */;
val* var1 /* : Matrix */;
val* var2 /* : Matrix */;
val* var_view /* var view: Matrix */;
val* var3 /* : Point3d[Float] */;
val* var4 /* : Numeric */;
double var5 /* : Float */;
double var7 /* : Float */;
double var8 /* : Float */;
val* var9 /* : Point3d[Float] */;
val* var10 /* : Numeric */;
double var11 /* : Float */;
double var13 /* : Float */;
double var14 /* : Float */;
val* var15 /* : Point3d[Float] */;
val* var16 /* : Numeric */;
double var17 /* : Float */;
double var19 /* : Float */;
double var20 /* : Float */;
val* var21 /* : Matrix */;
val* var22 /* : Matrix */;
val* var23 /* : Matrix */;
val* var24 /* : Sys */;
double var25 /* : Float */;
double var26 /* : Float */;
double var27 /* : Float */;
short int var29 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var30 /* : Float */;
double var31 /* : Float */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
double var37 /* : Float */;
val* var38 /* : GamnitDisplay */;
double var39 /* : Float */;
double var40 /* : Float */;
double var41 /* : Float */;
val* var42 /* : Matrix */;
val* var_projection /* var projection: Matrix */;
val* var43 /* : Matrix */;
var1 = NEW_matrix__Matrix(&type_matrix__Matrix);
{
var2 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_matrix__Matrix__identity]))(var1, 4l); /* identity on <var1:Matrix>*/
}
var_view = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var3); /* x on <var3:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#unary - (var4) on <var4:Numeric(Float)> */
var7 = ((struct instance_core__Float*)var4)->value; /* autounbox from Numeric to Float */;
var8 = -var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var9); /* y on <var9:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#unary - (var10) on <var10:Numeric(Float)> */
var13 = ((struct instance_core__Float*)var10)->value; /* autounbox from Numeric to Float */;
var14 = -var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_geometry__points_and_lines__IPoint3d__z]))(var15); /* z on <var15:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#unary - (var16) on <var16:Numeric(Float)> */
var19 = ((struct instance_core__Float*)var16)->value; /* autounbox from Numeric to Float */;
var20 = -var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
((void(*)(val* self, double p0, double p1, double p2))(var_view->class->vft[COLOR_matrix__projection__Matrix__translate]))(var_view, var5, var11, var17); /* translate on <var_view:Matrix>*/
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__rotation_matrix]))(self); /* rotation_matrix on <self:EulerCamera>*/
}
{
var22 = ((val*(*)(val* self, val* p0))(var_view->class->vft[COLOR_matrix__Matrix___42d]))(var_view, var21); /* * on <var_view:Matrix>*/
}
var_view = var22;
var23 = NEW_matrix__Matrix(&type_matrix__Matrix);
var24 = glob_sys;
{
var25 = ((double(*)(val* self))(var24->class->vft[COLOR_core__math__Sys__pi]))(var24); /* pi on <var24:Sys>*/
}
{
var26 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__field_of_view_y]))(self); /* field_of_view_y on <self:EulerCamera>*/
}
{
{ /* Inline kernel#Float#* (var25,var26) on <var25:Float> */
/* Covariant cast for argument 0 (i) <var26:Float> isa OTHER */
/* <var26:Float> isa OTHER */
var29 = 1; /* easy <var26:Float> isa OTHER*/
if (unlikely(!var29)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var30 = var25 * var26;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var27,2.0) on <var27:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var33 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var37 = var27 / 2.0;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
var38 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__display]))(self); /* display on <self:EulerCamera>*/
}
{
var39 = ((double(*)(val* self))(var38->class->vft[COLOR_gamnit__display__GamnitDisplay__aspect_ratio]))(var38); /* aspect_ratio on <var38:GamnitDisplay>*/
}
{
var40 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__near]))(self); /* near on <self:EulerCamera>*/
}
{
var41 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__far]))(self); /* far on <self:EulerCamera>*/
}
{
var42 = ((val*(*)(val* self, double p0, double p1, double p2, double p3))(var23->class->vft[COLOR_matrix__projection__Matrix__perspective]))(var23, var31, var39, var40, var41); /* perspective on <var23:Matrix>*/
}
var_projection = var42;
{
var43 = ((val*(*)(val* self, val* p0))(var_view->class->vft[COLOR_matrix__Matrix___42d]))(var_view, var_projection); /* * on <var_view:Matrix>*/
}
var = var43;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cameras#EulerCamera#reset_height for (self: EulerCamera, nullable Float) */
void gamnit___gamnit__EulerCamera___reset_height(val* self, val* p0) {
val* var_height /* var height: nullable Float */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : GamnitDisplay */;
long var5 /* : Int */;
double var6 /* : Float */;
double var8 /* : Float */;
val* var9 /* : nullable Float */;
double var10 /* : Float */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var13 /* : Float */;
double var14 /* : Float */;
double var_opp /* var opp: Float */;
double var15 /* : Float */;
double var16 /* : Float */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
double var22 /* : Float */;
double var_angle /* var angle: Float */;
double var23 /* : Float */;
double var24 /* : Float */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
double var30 /* : Float */;
double var_adj /* var adj: Float */;
val* var31 /* : Point3d[Float] */;
val* var32 /* : Numeric */;
val* var33 /* : Point3d[Float] */;
val* var34 /* : Numeric */;
val* var35 /* : Point3d[Float] */;
val* var36 /* : Numeric */;
var_height = p0;
if (var_height == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Float#== (var_height,((val*)NULL)) on <var_height:nullable Float> */
var3 = 0; /* incompatible types Float vs. null; cannot be NULL */
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__display]))(self); /* display on <self:EulerCamera>*/
}
{
var5 = ((long(*)(val* self))(var4->class->vft[COLOR_gamnit__display__GamnitDisplay__height]))(var4); /* height on <var4:GamnitDisplay>*/
}
{
{ /* Inline kernel#Int#to_f (var5) on <var5:Int> */
var8 = (double)var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var9 = BOX_core__Float(var6); /* autobox from Float to nullable Float */
var_height = var9;
} else {
}
{
{ /* Inline kernel#Float#/ (var_height,2.0) on <var_height:nullable Float(Float)> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var12 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var13 = ((struct instance_core__Float*)var_height)->value; /* autounbox from nullable Float to Float */;
var14 = var13 / 2.0;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_opp = var10;
{
var15 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__field_of_view_y]))(self); /* field_of_view_y on <self:EulerCamera>*/
}
{
{ /* Inline kernel#Float#/ (var15,2.0) on <var15:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var18 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var22 = var15 / 2.0;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_angle = var16;
var23 = core__math___Float___tan(var_angle);
{
{ /* Inline kernel#Float#/ (var_opp,var23) on <var_opp:Float> */
/* Covariant cast for argument 0 (i) <var23:Float> isa OTHER */
/* <var23:Float> isa OTHER */
var26 = 1; /* easy <var23:Float> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var30 = var_opp / var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_adj = var24;
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
{
var32 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var31, var32); /* x= on <var31:Point3d[Float]>*/
}
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
{
var34 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var33, var34); /* y= on <var33:Point3d[Float]>*/
}
{
var35 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:EulerCamera>*/
}
{
var36 = BOX_core__Float(var_adj); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var35, var36); /* z= on <var35:Point3d[Float]>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__pitch_61d]))(self, 0.0); /* pitch= on <self:EulerCamera>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__yaw_61d]))(self, 0.0); /* yaw= on <self:EulerCamera>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__cameras__EulerCamera__roll_61d]))(self, 0.0); /* roll= on <self:EulerCamera>*/
}
RET_LABEL:;
}
/* method cameras#UICamera#near for (self: UICamera): Float */
double gamnit___gamnit__UICamera___near(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__cameras__UICamera___near].d; /* _near on <self:UICamera> */
var = var1;
RET_LABEL:;
return var;
}
/* method cameras#UICamera#near= for (self: UICamera, Float) */
void gamnit___gamnit__UICamera___near_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__cameras__UICamera___near].d = p0; /* _near on <self:UICamera> */
RET_LABEL:;
}
/* method cameras#UICamera#far for (self: UICamera): Float */
double gamnit___gamnit__UICamera___far(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__cameras__UICamera___far].d; /* _far on <self:UICamera> */
var = var1;
RET_LABEL:;
return var;
}
/* method cameras#UICamera#far= for (self: UICamera, Float) */
void gamnit___gamnit__UICamera___far_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__cameras__UICamera___far].d = p0; /* _far on <self:UICamera> */
RET_LABEL:;
}
/* method cameras#UICamera#width for (self: UICamera): Float */
double gamnit___gamnit__UICamera___width(val* self) {
double var /* : Float */;
short int var1 /* : Bool */;
double var2 /* : Float */;
val* var3 /* : GamnitDisplay */;
long var4 /* : Int */;
double var5 /* : Float */;
double var7 /* : Float */;
var1 = self->attrs[COLOR_gamnit__cameras__UICamera__lazy_32d_width].s; /* lazy _width on <self:UICamera> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__cameras__UICamera___width].d; /* _width on <self:UICamera> */
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__display]))(self); /* display on <self:UICamera>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_gamnit__display__GamnitDisplay__width]))(var3); /* width on <var3:GamnitDisplay>*/
}
{
{ /* Inline kernel#Int#to_f (var4) on <var4:Int> */
var7 = (double)var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
self->attrs[COLOR_gamnit__cameras__UICamera___width].d = var5; /* _width on <self:UICamera> */
var2 = var5;
self->attrs[COLOR_gamnit__cameras__UICamera__lazy_32d_width].s = 1; /* lazy _width on <self:UICamera> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method cameras#UICamera#width= for (self: UICamera, Float) */
void gamnit___gamnit__UICamera___width_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__cameras__UICamera___width].d = p0; /* _width on <self:UICamera> */
self->attrs[COLOR_gamnit__cameras__UICamera__lazy_32d_width].s = 1; /* lazy _width on <self:UICamera> */
RET_LABEL:;
}
/* method cameras#UICamera#height for (self: UICamera): Float */
double gamnit___gamnit__UICamera___height(val* self) {
double var /* : Float */;
short int var1 /* : Bool */;
double var2 /* : Float */;
val* var3 /* : GamnitDisplay */;
long var4 /* : Int */;
double var5 /* : Float */;
double var7 /* : Float */;
var1 = self->attrs[COLOR_gamnit__cameras__UICamera__lazy_32d_height].s; /* lazy _height on <self:UICamera> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__cameras__UICamera___height].d; /* _height on <self:UICamera> */
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__display]))(self); /* display on <self:UICamera>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_gamnit__display__GamnitDisplay__height]))(var3); /* height on <var3:GamnitDisplay>*/
}
{
{ /* Inline kernel#Int#to_f (var4) on <var4:Int> */
var7 = (double)var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
self->attrs[COLOR_gamnit__cameras__UICamera___height].d = var5; /* _height on <self:UICamera> */
var2 = var5;
self->attrs[COLOR_gamnit__cameras__UICamera__lazy_32d_height].s = 1; /* lazy _height on <self:UICamera> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method cameras#UICamera#height= for (self: UICamera, Float) */
void gamnit___gamnit__UICamera___height_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__cameras__UICamera___height].d = p0; /* _height on <self:UICamera> */
self->attrs[COLOR_gamnit__cameras__UICamera__lazy_32d_height].s = 1; /* lazy _height on <self:UICamera> */
RET_LABEL:;
}
/* method cameras#UICamera#reset_height for (self: UICamera, nullable Float) */
void gamnit___gamnit__UICamera___reset_height(val* self, val* p0) {
val* var_height /* var height: nullable Float */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : GamnitDisplay */;
long var5 /* : Int */;
double var6 /* : Float */;
double var8 /* : Float */;
val* var9 /* : nullable Float */;
double var10 /* : Float */;
val* var11 /* : GamnitDisplay */;
double var12 /* : Float */;
double var13 /* : Float */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var16 /* : Float */;
double var17 /* : Float */;
var_height = p0;
if (var_height == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Float#== (var_height,((val*)NULL)) on <var_height:nullable Float> */
var3 = 0; /* incompatible types Float vs. null; cannot be NULL */
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__display]))(self); /* display on <self:UICamera>*/
}
{
var5 = ((long(*)(val* self))(var4->class->vft[COLOR_gamnit__display__GamnitDisplay__height]))(var4); /* height on <var4:GamnitDisplay>*/
}
{
{ /* Inline kernel#Int#to_f (var5) on <var5:Int> */
var8 = (double)var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var9 = BOX_core__Float(var6); /* autobox from Float to nullable Float */
var_height = var9;
} else {
}
{
var10 = ((struct instance_core__Float*)var_height)->value; /* autounbox from nullable Float to Float */;
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__cameras__UICamera__height_61d]))(self, var10); /* height= on <self:UICamera>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__display]))(self); /* display on <self:UICamera>*/
}
{
var12 = ((double(*)(val* self))(var11->class->vft[COLOR_gamnit__display__GamnitDisplay__aspect_ratio]))(var11); /* aspect_ratio on <var11:GamnitDisplay>*/
}
{
{ /* Inline kernel#Float#* (var_height,var12) on <var_height:nullable Float(Float)> */
/* Covariant cast for argument 0 (i) <var12:Float> isa OTHER */
/* <var12:Float> isa OTHER */
var15 = 1; /* easy <var12:Float> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var16 = ((struct instance_core__Float*)var_height)->value; /* autounbox from nullable Float to Float */;
var17 = var16 * var12;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__cameras__UICamera__width_61d]))(self, var13); /* width= on <self:UICamera>*/
}
RET_LABEL:;
}
/* method cameras#UICamera#camera_to_ui for (self: UICamera, Numeric, Numeric): Point[Float] */
val* gamnit___gamnit__UICamera___camera_to_ui(val* self, val* p0, val* p1) {
val* var /* : Point[Float] */;
val* var_x /* var x: Numeric */;
val* var_y /* var y: Numeric */;
double var1 /* : Float */;
double var2 /* : Float */;
double var3 /* : Float */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var6 /* : Float */;
val* var7 /* : GamnitDisplay */;
long var8 /* : Int */;
double var9 /* : Float */;
double var11 /* : Float */;
double var12 /* : Float */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
double var18 /* : Float */;
val* var19 /* : Point3d[Float] */;
val* var20 /* : Numeric */;
double var21 /* : Float */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
double var27 /* : Float */;
double var28 /* : Float */;
double var_wx /* var wx: Float */;
double var29 /* : Float */;
double var30 /* : Float */;
double var31 /* : Float */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
double var37 /* : Float */;
val* var38 /* : GamnitDisplay */;
long var39 /* : Int */;
double var40 /* : Float */;
double var42 /* : Float */;
double var43 /* : Float */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
double var49 /* : Float */;
val* var50 /* : Point3d[Float] */;
val* var51 /* : Numeric */;
double var52 /* : Float */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
double var58 /* : Float */;
double var59 /* : Float */;
double var_wy /* var wy: Float */;
val* var60 /* : Point[Float] */;
val* var61 /* : Numeric */;
val* var62 /* : Numeric */;
var_x = p0;
var_y = p1;
{
var1 = ((double(*)(val* self))((((long)var_x&3)?class_info[((long)var_x&3)]:var_x->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var_x); /* to_f on <var_x:Numeric>*/
}
{
var2 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__UICamera__width]))(self); /* width on <self:UICamera>*/
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
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__display]))(self); /* display on <self:UICamera>*/
}
{
var8 = ((long(*)(val* self))(var7->class->vft[COLOR_gamnit__display__GamnitDisplay__width]))(var7); /* width on <var7:GamnitDisplay>*/
}
{
{ /* Inline kernel#Int#to_f (var8) on <var8:Int> */
var11 = (double)var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var3,var9) on <var3:Float> */
/* Covariant cast for argument 0 (i) <var9:Float> isa OTHER */
/* <var9:Float> isa OTHER */
var14 = 1; /* easy <var9:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var18 = var3 / var9;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var19); /* x on <var19:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#- (var12,var20) on <var12:Float> */
/* Covariant cast for argument 0 (i) <var20:Numeric(Float)> isa OTHER */
/* <var20:Numeric(Float)> isa OTHER */
var23 = 1; /* easy <var20:Numeric(Float)> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = var20 == NULL ? "null" : (((long)var20&3)?type_info[((long)var20&3)]:var20->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var27 = ((struct instance_core__Float*)var20)->value; /* autounbox from Numeric to Float */;
var28 = var12 - var27;
var21 = var28;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_wx = var21;
{
var29 = ((double(*)(val* self))((((long)var_y&3)?class_info[((long)var_y&3)]:var_y->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var_y); /* to_f on <var_y:Numeric>*/
}
{
var30 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__UICamera__height]))(self); /* height on <self:UICamera>*/
}
{
{ /* Inline kernel#Float#* (var29,var30) on <var29:Float> */
/* Covariant cast for argument 0 (i) <var30:Float> isa OTHER */
/* <var30:Float> isa OTHER */
var33 = 1; /* easy <var30:Float> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var37 = var29 * var30;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
var38 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__display]))(self); /* display on <self:UICamera>*/
}
{
var39 = ((long(*)(val* self))(var38->class->vft[COLOR_gamnit__display__GamnitDisplay__height]))(var38); /* height on <var38:GamnitDisplay>*/
}
{
{ /* Inline kernel#Int#to_f (var39) on <var39:Int> */
var42 = (double)var39;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var31,var40) on <var31:Float> */
/* Covariant cast for argument 0 (i) <var40:Float> isa OTHER */
/* <var40:Float> isa OTHER */
var45 = 1; /* easy <var40:Float> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var49 = var31 / var40;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
var50 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var51 = ((val*(*)(val* self))(var50->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var50); /* y on <var50:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#- (var43,var51) on <var43:Float> */
/* Covariant cast for argument 0 (i) <var51:Numeric(Float)> isa OTHER */
/* <var51:Numeric(Float)> isa OTHER */
var54 = 1; /* easy <var51:Numeric(Float)> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = var51 == NULL ? "null" : (((long)var51&3)?type_info[((long)var51&3)]:var51->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var58 = ((struct instance_core__Float*)var51)->value; /* autounbox from Numeric to Float */;
var59 = var43 - var58;
var52 = var59;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var_wy = var52;
var60 = NEW_geometry__Point(&type_geometry__Point__core__Float);
{
var61 = BOX_core__Float(var_wx); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var60->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var60, var61); /* x= on <var60:Point[Float]>*/
}
{
var62 = BOX_core__Float(var_wy); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var60->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var60, var62); /* y= on <var60:Point[Float]>*/
}
{
((void(*)(val* self))(var60->class->vft[COLOR_core__kernel__Object__init]))(var60); /* init on <var60:Point[Float]>*/
}
var = var60;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cameras#UICamera#center for (self: UICamera): Point3d[Float] */
val* gamnit___gamnit__UICamera___center(val* self) {
val* var /* : Point3d[Float] */;
val* var1 /* : Point3d[Float] */;
val* var2 /* : Point3d[Float] */;
val* var3 /* : Numeric */;
double var4 /* : Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var8 /* : Float */;
double var9 /* : Float */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
double var15 /* : Float */;
double var16 /* : Float */;
val* var17 /* : Point3d[Float] */;
val* var18 /* : Numeric */;
double var19 /* : Float */;
double var20 /* : Float */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
double var26 /* : Float */;
double var27 /* : Float */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
double var33 /* : Float */;
double var34 /* : Float */;
val* var35 /* : Numeric */;
val* var36 /* : Numeric */;
val* var37 /* : Numeric */;
var1 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var2); /* x on <var2:Point3d[Float]>*/
}
{
var4 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__UICamera__width]))(self); /* width on <self:UICamera>*/
}
{
{ /* Inline kernel#Float#/ (var4,2.0) on <var4:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var7 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var8 = var4 / 2.0;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var3,var5) on <var3:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var5:Float> isa OTHER */
/* <var5:Float> isa OTHER */
var11 = 1; /* easy <var5:Float> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var15 = ((struct instance_core__Float*)var3)->value; /* autounbox from Numeric to Float */;
var16 = var15 + var5;
var9 = var16;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var17); /* y on <var17:Point3d[Float]>*/
}
{
var19 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__UICamera__height]))(self); /* height on <self:UICamera>*/
}
{
{ /* Inline kernel#Float#/ (var19,2.0) on <var19:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var22 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var26 = var19 / 2.0;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var18,var20) on <var18:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var20:Float> isa OTHER */
/* <var20:Float> isa OTHER */
var29 = 1; /* easy <var20:Float> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var33 = ((struct instance_core__Float*)var18)->value; /* autounbox from Numeric to Float */;
var34 = var33 - var20;
var27 = var34;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
var35 = BOX_core__Float(var9); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var1, var35); /* x= on <var1:Point3d[Float]>*/
}
{
var36 = BOX_core__Float(var27); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var1, var36); /* y= on <var1:Point3d[Float]>*/
}
{
var37 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var1, var37); /* z= on <var1:Point3d[Float]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Point3d[Float]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cameras#UICamera#top_left for (self: UICamera): Point3d[Float] */
val* gamnit___gamnit__UICamera___top_left(val* self) {
val* var /* : Point3d[Float] */;
val* var1 /* : Point3d[Float] */;
val* var2 /* : Point3d[Float] */;
val* var3 /* : Numeric */;
val* var4 /* : Point3d[Float] */;
val* var5 /* : Numeric */;
val* var6 /* : Numeric */;
var1 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var2); /* x on <var2:Point3d[Float]>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var4); /* y on <var4:Point3d[Float]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var1, var3); /* x= on <var1:Point3d[Float]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var1, var5); /* y= on <var1:Point3d[Float]>*/
}
{
var6 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var1, var6); /* z= on <var1:Point3d[Float]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Point3d[Float]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cameras#UICamera#top_right for (self: UICamera): Point3d[Float] */
val* gamnit___gamnit__UICamera___top_right(val* self) {
val* var /* : Point3d[Float] */;
val* var1 /* : Point3d[Float] */;
val* var2 /* : Point3d[Float] */;
val* var3 /* : Numeric */;
double var4 /* : Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var8 /* : Float */;
double var9 /* : Float */;
val* var10 /* : Point3d[Float] */;
val* var11 /* : Numeric */;
val* var12 /* : Numeric */;
val* var13 /* : Numeric */;
var1 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var2); /* x on <var2:Point3d[Float]>*/
}
{
var4 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__UICamera__width]))(self); /* width on <self:UICamera>*/
}
{
{ /* Inline kernel#Float#+ (var3,var4) on <var3:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var4:Float> isa OTHER */
/* <var4:Float> isa OTHER */
var7 = 1; /* easy <var4:Float> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var8 = ((struct instance_core__Float*)var3)->value; /* autounbox from Numeric to Float */;
var9 = var8 + var4;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var10); /* y on <var10:Point3d[Float]>*/
}
{
var12 = BOX_core__Float(var5); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var1, var12); /* x= on <var1:Point3d[Float]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var1, var11); /* y= on <var1:Point3d[Float]>*/
}
{
var13 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var1, var13); /* z= on <var1:Point3d[Float]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Point3d[Float]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cameras#UICamera#bottom_left for (self: UICamera): Point3d[Float] */
val* gamnit___gamnit__UICamera___bottom_left(val* self) {
val* var /* : Point3d[Float] */;
val* var1 /* : Point3d[Float] */;
val* var2 /* : Point3d[Float] */;
val* var3 /* : Numeric */;
val* var4 /* : Point3d[Float] */;
val* var5 /* : Numeric */;
double var6 /* : Float */;
double var7 /* : Float */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var10 /* : Float */;
double var11 /* : Float */;
val* var12 /* : Numeric */;
val* var13 /* : Numeric */;
var1 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var2); /* x on <var2:Point3d[Float]>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var4); /* y on <var4:Point3d[Float]>*/
}
{
var6 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__UICamera__height]))(self); /* height on <self:UICamera>*/
}
{
{ /* Inline kernel#Float#- (var5,var6) on <var5:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var6:Float> isa OTHER */
/* <var6:Float> isa OTHER */
var9 = 1; /* easy <var6:Float> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var10 = ((struct instance_core__Float*)var5)->value; /* autounbox from Numeric to Float */;
var11 = var10 - var6;
var7 = var11;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var1, var3); /* x= on <var1:Point3d[Float]>*/
}
{
var12 = BOX_core__Float(var7); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var1, var12); /* y= on <var1:Point3d[Float]>*/
}
{
var13 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var1, var13); /* z= on <var1:Point3d[Float]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Point3d[Float]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cameras#UICamera#bottom_right for (self: UICamera): Point3d[Float] */
val* gamnit___gamnit__UICamera___bottom_right(val* self) {
val* var /* : Point3d[Float] */;
val* var1 /* : Point3d[Float] */;
val* var2 /* : Point3d[Float] */;
val* var3 /* : Numeric */;
double var4 /* : Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var8 /* : Float */;
double var9 /* : Float */;
val* var10 /* : Point3d[Float] */;
val* var11 /* : Numeric */;
double var12 /* : Float */;
double var13 /* : Float */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
double var19 /* : Float */;
double var20 /* : Float */;
val* var21 /* : Numeric */;
val* var22 /* : Numeric */;
val* var23 /* : Numeric */;
var1 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var2); /* x on <var2:Point3d[Float]>*/
}
{
var4 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__UICamera__width]))(self); /* width on <self:UICamera>*/
}
{
{ /* Inline kernel#Float#+ (var3,var4) on <var3:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var4:Float> isa OTHER */
/* <var4:Float> isa OTHER */
var7 = 1; /* easy <var4:Float> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var8 = ((struct instance_core__Float*)var3)->value; /* autounbox from Numeric to Float */;
var9 = var8 + var4;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var10); /* y on <var10:Point3d[Float]>*/
}
{
var12 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__UICamera__height]))(self); /* height on <self:UICamera>*/
}
{
{ /* Inline kernel#Float#- (var11,var12) on <var11:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var12:Float> isa OTHER */
/* <var12:Float> isa OTHER */
var15 = 1; /* easy <var12:Float> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var19 = ((struct instance_core__Float*)var11)->value; /* autounbox from Numeric to Float */;
var20 = var19 - var12;
var13 = var20;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
var21 = BOX_core__Float(var5); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var1, var21); /* x= on <var1:Point3d[Float]>*/
}
{
var22 = BOX_core__Float(var13); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var1, var22); /* y= on <var1:Point3d[Float]>*/
}
{
var23 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var1, var23); /* z= on <var1:Point3d[Float]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Point3d[Float]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cameras#UICamera#mvp_matrix for (self: UICamera): Matrix */
val* gamnit___gamnit__UICamera___Camera__mvp_matrix(val* self) {
val* var /* : Matrix */;
val* var1 /* : Matrix */;
val* var2 /* : Matrix */;
val* var_view /* var view: Matrix */;
val* var3 /* : Point3d[Float] */;
val* var4 /* : Numeric */;
double var5 /* : Float */;
double var7 /* : Float */;
double var8 /* : Float */;
val* var9 /* : Point3d[Float] */;
val* var10 /* : Numeric */;
double var11 /* : Float */;
double var13 /* : Float */;
double var14 /* : Float */;
val* var15 /* : Point3d[Float] */;
val* var16 /* : Numeric */;
double var17 /* : Float */;
double var19 /* : Float */;
double var20 /* : Float */;
val* var21 /* : Matrix */;
double var22 /* : Float */;
double var23 /* : Float */;
double var24 /* : Float */;
double var26 /* : Float */;
double var27 /* : Float */;
double var28 /* : Float */;
val* var29 /* : Matrix */;
val* var_projection /* var projection: Matrix */;
val* var30 /* : Matrix */;
var1 = NEW_matrix__Matrix(&type_matrix__Matrix);
{
var2 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_matrix__Matrix__identity]))(var1, 4l); /* identity on <var1:Matrix>*/
}
var_view = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var3); /* x on <var3:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#unary - (var4) on <var4:Numeric(Float)> */
var7 = ((struct instance_core__Float*)var4)->value; /* autounbox from Numeric to Float */;
var8 = -var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var9); /* y on <var9:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#unary - (var10) on <var10:Numeric(Float)> */
var13 = ((struct instance_core__Float*)var10)->value; /* autounbox from Numeric to Float */;
var14 = -var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__Camera__position]))(self); /* position on <self:UICamera>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_geometry__points_and_lines__IPoint3d__z]))(var15); /* z on <var15:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#unary - (var16) on <var16:Numeric(Float)> */
var19 = ((struct instance_core__Float*)var16)->value; /* autounbox from Numeric to Float */;
var20 = -var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
((void(*)(val* self, double p0, double p1, double p2))(var_view->class->vft[COLOR_matrix__projection__Matrix__translate]))(var_view, var5, var11, var17); /* translate on <var_view:Matrix>*/
}
var21 = NEW_matrix__Matrix(&type_matrix__Matrix);
{
var22 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__UICamera__width]))(self); /* width on <self:UICamera>*/
}
{
var23 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__UICamera__height]))(self); /* height on <self:UICamera>*/
}
{
{ /* Inline kernel#Float#unary - (var23) on <var23:Float> */
var26 = -var23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var27 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__UICamera__near]))(self); /* near on <self:UICamera>*/
}
{
var28 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__cameras__UICamera__far]))(self); /* far on <self:UICamera>*/
}
{
var29 = ((val*(*)(val* self, double p0, double p1, double p2, double p3, double p4, double p5))(var21->class->vft[COLOR_matrix__projection__Matrix__orthogonal]))(var21, 0.0, var22, var24, 0.0, var27, var28); /* orthogonal on <var21:Matrix>*/
}
var_projection = var29;
{
var30 = ((val*(*)(val* self, val* p0))(var_view->class->vft[COLOR_matrix__Matrix___42d]))(var_view, var_projection); /* * on <var_view:Matrix>*/
}
var = var30;
goto RET_LABEL;
RET_LABEL:;
return var;
}
