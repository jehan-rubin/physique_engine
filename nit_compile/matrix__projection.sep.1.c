#include "matrix__projection.sep.0.h"
/* method projection#Matrix#orthogonal for (self: Matrix, Float, Float, Float, Float, Float, Float): Matrix */
val* matrix__projection___Matrix___orthogonal(val* self, double p0, double p1, double p2, double p3, double p4, double p5) {
val* var /* : Matrix */;
double var_left /* var left: Float */;
double var_right /* var right: Float */;
double var_bottom /* var bottom: Float */;
double var_top /* var top: Float */;
double var_near /* var near: Float */;
double var_far /* var far: Float */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var4 /* : Float */;
double var_dx /* var dx: Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
double var11 /* : Float */;
double var_dy /* var dy: Float */;
double var12 /* : Float */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
double var18 /* : Float */;
double var_dz /* var dz: Float */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var_29 /* var : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : Matrix */;
val* var35 /* : Matrix */;
val* var_mat /* var mat: Matrix */;
double var36 /* : Float */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
double var42 /* : Float */;
double var43 /* : Float */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
double var49 /* : Float */;
double var50 /* : Float */;
double var52 /* : Float */;
double var53 /* : Float */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
double var59 /* : Float */;
double var60 /* : Float */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
double var66 /* : Float */;
double var67 /* : Float */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
double var73 /* : Float */;
double var74 /* : Float */;
double var76 /* : Float */;
double var77 /* : Float */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
double var83 /* : Float */;
double var84 /* : Float */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
double var90 /* : Float */;
double var91 /* : Float */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
double var97 /* : Float */;
double var98 /* : Float */;
double var100 /* : Float */;
double var101 /* : Float */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
double var107 /* : Float */;
var_left = p0;
var_right = p1;
var_bottom = p2;
var_top = p3;
var_near = p4;
var_far = p5;
{
{ /* Inline kernel#Float#- (var_right,var_left) on <var_right:Float> */
/* Covariant cast for argument 0 (i) <var_left:Float> isa OTHER */
/* <var_left:Float> isa OTHER */
var3 = 1; /* easy <var_left:Float> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var4 = var_right - var_left;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_dx = var1;
{
{ /* Inline kernel#Float#- (var_top,var_bottom) on <var_top:Float> */
/* Covariant cast for argument 0 (i) <var_bottom:Float> isa OTHER */
/* <var_bottom:Float> isa OTHER */
var7 = 1; /* easy <var_bottom:Float> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var11 = var_top - var_bottom;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_dy = var5;
{
{ /* Inline kernel#Float#- (var_far,var_near) on <var_far:Float> */
/* Covariant cast for argument 0 (i) <var_near:Float> isa OTHER */
/* <var_near:Float> isa OTHER */
var14 = 1; /* easy <var_near:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var18 = var_far - var_near;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_dz = var12;
{
{ /* Inline kernel#Float#!= (var_dx,0.0) on <var_dx:Float> */
var23 = var_dx == 0.0;
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_ = var21;
if (var21){
{
{ /* Inline kernel#Float#!= (var_dy,0.0) on <var_dy:Float> */
var27 = var_dy == 0.0;
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var20 = var25;
} else {
var20 = var_;
}
var_29 = var20;
if (var20){
{
{ /* Inline kernel#Float#!= (var_dz,0.0) on <var_dz:Float> */
var32 = var_dz == 0.0;
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var19 = var30;
} else {
var19 = var_29;
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix__projection, 31);
fatal_exit(1);
}
var34 = NEW_matrix__Matrix(&type_matrix__Matrix);
{
var35 = ((val*(*)(val* self, long p0))(var34->class->vft[COLOR_matrix__Matrix__identity]))(var34, 4l); /* identity on <var34:Matrix>*/
}
var_mat = var35;
{
{ /* Inline kernel#Float#/ (2.0,var_dx) on <2.0:Float> */
/* Covariant cast for argument 0 (i) <var_dx:Float> isa OTHER */
/* <var_dx:Float> isa OTHER */
var38 = 1; /* easy <var_dx:Float> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var42 = 2.0 / var_dx;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 0l, 0l, var36); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#+ (var_right,var_left) on <var_right:Float> */
/* Covariant cast for argument 0 (i) <var_left:Float> isa OTHER */
/* <var_left:Float> isa OTHER */
var45 = 1; /* easy <var_left:Float> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var49 = var_right + var_left;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Float#unary - (var43) on <var43:Float> */
var52 = -var43;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var50,var_dx) on <var50:Float> */
/* Covariant cast for argument 0 (i) <var_dx:Float> isa OTHER */
/* <var_dx:Float> isa OTHER */
var55 = 1; /* easy <var_dx:Float> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var59 = var50 / var_dx;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 3l, 0l, var53); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#/ (2.0,var_dy) on <2.0:Float> */
/* Covariant cast for argument 0 (i) <var_dy:Float> isa OTHER */
/* <var_dy:Float> isa OTHER */
var62 = 1; /* easy <var_dy:Float> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var66 = 2.0 / var_dy;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 1l, 1l, var60); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#+ (var_top,var_bottom) on <var_top:Float> */
/* Covariant cast for argument 0 (i) <var_bottom:Float> isa OTHER */
/* <var_bottom:Float> isa OTHER */
var69 = 1; /* easy <var_bottom:Float> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var73 = var_top + var_bottom;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline kernel#Float#unary - (var67) on <var67:Float> */
var76 = -var67;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var74,var_dy) on <var74:Float> */
/* Covariant cast for argument 0 (i) <var_dy:Float> isa OTHER */
/* <var_dy:Float> isa OTHER */
var79 = 1; /* easy <var_dy:Float> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var83 = var74 / var_dy;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 3l, 1l, var77); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#/ (2.0,var_dz) on <2.0:Float> */
/* Covariant cast for argument 0 (i) <var_dz:Float> isa OTHER */
/* <var_dz:Float> isa OTHER */
var86 = 1; /* easy <var_dz:Float> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var90 = 2.0 / var_dz;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 2l, 2l, var84); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#+ (var_near,var_far) on <var_near:Float> */
/* Covariant cast for argument 0 (i) <var_far:Float> isa OTHER */
/* <var_far:Float> isa OTHER */
var93 = 1; /* easy <var_far:Float> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var97 = var_near + var_far;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel#Float#unary - (var91) on <var91:Float> */
var100 = -var91;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var98,var_dz) on <var98:Float> */
/* Covariant cast for argument 0 (i) <var_dz:Float> isa OTHER */
/* <var_dz:Float> isa OTHER */
var103 = 1; /* easy <var_dz:Float> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var107 = var98 / var_dz;
var101 = var107;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 3l, 2l, var101); /* []= on <var_mat:Matrix>*/
}
var = var_mat;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method projection#Matrix#perspective for (self: Matrix, Float, Float, Float, Float): Matrix */
val* matrix__projection___Matrix___perspective(val* self, double p0, double p1, double p2, double p3) {
val* var /* : Matrix */;
double var_field_of_view_y /* var field_of_view_y: Float */;
double var_aspect_ratio /* var aspect_ratio: Float */;
double var_near /* var near: Float */;
double var_far /* var far: Float */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
double var6 /* : Float */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
double var12 /* : Float */;
double var_frustum_height /* var frustum_height: Float */;
double var13 /* : Float */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
double var19 /* : Float */;
double var_frustum_width /* var frustum_width: Float */;
val* var20 /* : Matrix */;
double var21 /* : Float */;
double var23 /* : Float */;
double var24 /* : Float */;
double var26 /* : Float */;
val* var27 /* : Matrix */;
var_field_of_view_y = p0;
var_aspect_ratio = p1;
var_near = p2;
var_far = p3;
{
{ /* Inline kernel#Float#/ (var_field_of_view_y,2.0) on <var_field_of_view_y:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var3 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var4 = var_field_of_view_y / 2.0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var5 = core__math___Float___tan(var1);
{
{ /* Inline kernel#Float#* (var5,var_near) on <var5:Float> */
/* Covariant cast for argument 0 (i) <var_near:Float> isa OTHER */
/* <var_near:Float> isa OTHER */
var8 = 1; /* easy <var_near:Float> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var12 = var5 * var_near;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_frustum_height = var6;
{
{ /* Inline kernel#Float#* (var_frustum_height,var_aspect_ratio) on <var_frustum_height:Float> */
/* Covariant cast for argument 0 (i) <var_aspect_ratio:Float> isa OTHER */
/* <var_aspect_ratio:Float> isa OTHER */
var15 = 1; /* easy <var_aspect_ratio:Float> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var19 = var_frustum_height * var_aspect_ratio;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_frustum_width = var13;
var20 = NEW_matrix__Matrix(&type_matrix__Matrix);
{
{ /* Inline kernel#Float#unary - (var_frustum_width) on <var_frustum_width:Float> */
var23 = -var_frustum_width;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Float#unary - (var_frustum_height) on <var_frustum_height:Float> */
var26 = -var_frustum_height;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var27 = ((val*(*)(val* self, double p0, double p1, double p2, double p3, double p4, double p5))(var20->class->vft[COLOR_matrix__projection__Matrix__frustum]))(var20, var21, var_frustum_width, var24, var_frustum_height, var_near, var_far); /* frustum on <var20:Matrix>*/
}
var = var27;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method projection#Matrix#frustum for (self: Matrix, Float, Float, Float, Float, Float, Float): Matrix */
val* matrix__projection___Matrix___frustum(val* self, double p0, double p1, double p2, double p3, double p4, double p5) {
val* var /* : Matrix */;
double var_left /* var left: Float */;
double var_right /* var right: Float */;
double var_bottom /* var bottom: Float */;
double var_top /* var top: Float */;
double var_near /* var near: Float */;
double var_far /* var far: Float */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var4 /* : Float */;
double var_dx /* var dx: Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
double var11 /* : Float */;
double var_dy /* var dy: Float */;
double var12 /* : Float */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
double var18 /* : Float */;
double var_dz /* var dz: Float */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
short int var53 /* : Bool */;
val* var54 /* : Matrix */;
val* var_mat /* var mat: Matrix */;
double var55 /* : Float */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
double var61 /* : Float */;
double var62 /* : Float */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
double var68 /* : Float */;
double var69 /* : Float */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
double var75 /* : Float */;
double var76 /* : Float */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
double var82 /* : Float */;
double var83 /* : Float */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
double var89 /* : Float */;
double var90 /* : Float */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
double var96 /* : Float */;
double var97 /* : Float */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
const char* var_class_name102;
double var103 /* : Float */;
double var104 /* : Float */;
short int var106 /* : Bool */;
int cltype107;
int idtype108;
const char* var_class_name109;
double var110 /* : Float */;
double var111 /* : Float */;
short int var113 /* : Bool */;
int cltype114;
int idtype115;
const char* var_class_name116;
double var117 /* : Float */;
double var118 /* : Float */;
double var120 /* : Float */;
double var121 /* : Float */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
const char* var_class_name126;
double var127 /* : Float */;
double var128 /* : Float */;
double var130 /* : Float */;
double var131 /* : Float */;
double var133 /* : Float */;
double var134 /* : Float */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
double var140 /* : Float */;
double var141 /* : Float */;
short int var143 /* : Bool */;
int cltype144;
int idtype145;
const char* var_class_name146;
double var147 /* : Float */;
double var148 /* : Float */;
short int var150 /* : Bool */;
int cltype151;
int idtype152;
const char* var_class_name153;
double var154 /* : Float */;
var_left = p0;
var_right = p1;
var_bottom = p2;
var_top = p3;
var_near = p4;
var_far = p5;
{
{ /* Inline kernel#Float#- (var_right,var_left) on <var_right:Float> */
/* Covariant cast for argument 0 (i) <var_left:Float> isa OTHER */
/* <var_left:Float> isa OTHER */
var3 = 1; /* easy <var_left:Float> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var4 = var_right - var_left;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_dx = var1;
{
{ /* Inline kernel#Float#- (var_top,var_bottom) on <var_top:Float> */
/* Covariant cast for argument 0 (i) <var_bottom:Float> isa OTHER */
/* <var_bottom:Float> isa OTHER */
var7 = 1; /* easy <var_bottom:Float> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var11 = var_top - var_bottom;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_dy = var5;
{
{ /* Inline kernel#Float#- (var_far,var_near) on <var_far:Float> */
/* Covariant cast for argument 0 (i) <var_near:Float> isa OTHER */
/* <var_near:Float> isa OTHER */
var14 = 1; /* easy <var_near:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var18 = var_far - var_near;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_dz = var12;
{
{ /* Inline kernel#Float#> (var_near,0.0) on <var_near:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var21 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 532);
fatal_exit(1);
}
var25 = var_near > 0.0;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix__projection, 66);
fatal_exit(1);
}
{
{ /* Inline kernel#Float#> (var_far,0.0) on <var_far:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var28 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 532);
fatal_exit(1);
}
var32 = var_far > 0.0;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix__projection, 67);
fatal_exit(1);
}
{
{ /* Inline kernel#Float#> (var_dx,0.0) on <var_dx:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var35 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 532);
fatal_exit(1);
}
var39 = var_dx > 0.0;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (unlikely(!var33)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix__projection, 68);
fatal_exit(1);
}
{
{ /* Inline kernel#Float#> (var_dy,0.0) on <var_dy:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var42 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 532);
fatal_exit(1);
}
var46 = var_dy > 0.0;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (unlikely(!var40)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix__projection, 69);
fatal_exit(1);
}
{
{ /* Inline kernel#Float#> (var_dz,0.0) on <var_dz:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var49 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 532);
fatal_exit(1);
}
var53 = var_dz > 0.0;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (unlikely(!var47)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_matrix__projection, 70);
fatal_exit(1);
}
var54 = NEW_matrix__Matrix(&type_matrix__Matrix);
{
((void(*)(val* self, long p0))(var54->class->vft[COLOR_matrix__Matrix__width_61d]))(var54, 4l); /* width= on <var54:Matrix>*/
}
{
((void(*)(val* self, long p0))(var54->class->vft[COLOR_matrix__Matrix__height_61d]))(var54, 4l); /* height= on <var54:Matrix>*/
}
{
((void(*)(val* self))(var54->class->vft[COLOR_core__kernel__Object__init]))(var54); /* init on <var54:Matrix>*/
}
var_mat = var54;
{
{ /* Inline kernel#Float#* (2.0,var_near) on <2.0:Float> */
/* Covariant cast for argument 0 (i) <var_near:Float> isa OTHER */
/* <var_near:Float> isa OTHER */
var57 = 1; /* easy <var_near:Float> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var61 = 2.0 * var_near;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var55,var_dx) on <var55:Float> */
/* Covariant cast for argument 0 (i) <var_dx:Float> isa OTHER */
/* <var_dx:Float> isa OTHER */
var64 = 1; /* easy <var_dx:Float> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var68 = var55 / var_dx;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 0l, 0l, var62); /* []= on <var_mat:Matrix>*/
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 0l, 1l, 0.0); /* []= on <var_mat:Matrix>*/
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 0l, 2l, 0.0); /* []= on <var_mat:Matrix>*/
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 0l, 3l, 0.0); /* []= on <var_mat:Matrix>*/
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 1l, 0l, 0.0); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#* (2.0,var_near) on <2.0:Float> */
/* Covariant cast for argument 0 (i) <var_near:Float> isa OTHER */
/* <var_near:Float> isa OTHER */
var71 = 1; /* easy <var_near:Float> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var75 = 2.0 * var_near;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var69,var_dy) on <var69:Float> */
/* Covariant cast for argument 0 (i) <var_dy:Float> isa OTHER */
/* <var_dy:Float> isa OTHER */
var78 = 1; /* easy <var_dy:Float> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var82 = var69 / var_dy;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 1l, 1l, var76); /* []= on <var_mat:Matrix>*/
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 1l, 2l, 0.0); /* []= on <var_mat:Matrix>*/
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 1l, 3l, 0.0); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#+ (var_right,var_left) on <var_right:Float> */
/* Covariant cast for argument 0 (i) <var_left:Float> isa OTHER */
/* <var_left:Float> isa OTHER */
var85 = 1; /* easy <var_left:Float> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var89 = var_right + var_left;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var83,var_dx) on <var83:Float> */
/* Covariant cast for argument 0 (i) <var_dx:Float> isa OTHER */
/* <var_dx:Float> isa OTHER */
var92 = 1; /* easy <var_dx:Float> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var96 = var83 / var_dx;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 2l, 0l, var90); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#+ (var_top,var_bottom) on <var_top:Float> */
/* Covariant cast for argument 0 (i) <var_bottom:Float> isa OTHER */
/* <var_bottom:Float> isa OTHER */
var99 = 1; /* easy <var_bottom:Float> isa OTHER*/
if (unlikely(!var99)) {
var_class_name102 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name102);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var103 = var_top + var_bottom;
var97 = var103;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var97,var_dy) on <var97:Float> */
/* Covariant cast for argument 0 (i) <var_dy:Float> isa OTHER */
/* <var_dy:Float> isa OTHER */
var106 = 1; /* easy <var_dy:Float> isa OTHER*/
if (unlikely(!var106)) {
var_class_name109 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name109);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var110 = var97 / var_dy;
var104 = var110;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 2l, 1l, var104); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#+ (var_near,var_far) on <var_near:Float> */
/* Covariant cast for argument 0 (i) <var_far:Float> isa OTHER */
/* <var_far:Float> isa OTHER */
var113 = 1; /* easy <var_far:Float> isa OTHER*/
if (unlikely(!var113)) {
var_class_name116 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name116);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var117 = var_near + var_far;
var111 = var117;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline kernel#Float#unary - (var111) on <var111:Float> */
var120 = -var111;
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var118,var_dz) on <var118:Float> */
/* Covariant cast for argument 0 (i) <var_dz:Float> isa OTHER */
/* <var_dz:Float> isa OTHER */
var123 = 1; /* easy <var_dz:Float> isa OTHER*/
if (unlikely(!var123)) {
var_class_name126 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name126);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var127 = var118 / var_dz;
var121 = var127;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 2l, 2l, var121); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#unary - (1.0) on <1.0:Float> */
var130 = -1.0;
var128 = var130;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 2l, 3l, var128); /* []= on <var_mat:Matrix>*/
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 3l, 0l, 0.0); /* []= on <var_mat:Matrix>*/
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 3l, 1l, 0.0); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#unary - (2.0) on <2.0:Float> */
var133 = -2.0;
var131 = var133;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var131,var_near) on <var131:Float> */
/* Covariant cast for argument 0 (i) <var_near:Float> isa OTHER */
/* <var_near:Float> isa OTHER */
var136 = 1; /* easy <var_near:Float> isa OTHER*/
if (unlikely(!var136)) {
var_class_name139 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var140 = var131 * var_near;
var134 = var140;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var134,var_far) on <var134:Float> */
/* Covariant cast for argument 0 (i) <var_far:Float> isa OTHER */
/* <var_far:Float> isa OTHER */
var143 = 1; /* easy <var_far:Float> isa OTHER*/
if (unlikely(!var143)) {
var_class_name146 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name146);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var147 = var134 * var_far;
var141 = var147;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var141,var_dz) on <var141:Float> */
/* Covariant cast for argument 0 (i) <var_dz:Float> isa OTHER */
/* <var_dz:Float> isa OTHER */
var150 = 1; /* easy <var_dz:Float> isa OTHER*/
if (unlikely(!var150)) {
var_class_name153 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name153);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var154 = var141 / var_dz;
var148 = var154;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 3l, 2l, var148); /* []= on <var_mat:Matrix>*/
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 3l, 3l, 0.0); /* []= on <var_mat:Matrix>*/
}
var = var_mat;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method projection#Matrix#translate for (self: Matrix, Float, Float, Float) */
void matrix__projection___Matrix___translate(val* self, double p0, double p1, double p2) {
double var_x /* var x: Float */;
double var_y /* var y: Float */;
double var_z /* var z: Float */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
double var4 /* : Float */;
double var5 /* : Float */;
double var6 /* : Float */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
double var12 /* : Float */;
double var13 /* : Float */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
double var19 /* : Float */;
double var20 /* : Float */;
double var21 /* : Float */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
double var27 /* : Float */;
double var28 /* : Float */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
double var34 /* : Float */;
double var35 /* : Float */;
double var36 /* : Float */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
double var42 /* : Float */;
double var43 /* : Float */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
double var49 /* : Float */;
long var50 /* : Int */;
var_x = p0;
var_y = p1;
var_z = p2;
var_i = 0l;
var_ = 3l;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var2 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var3 = var_i <= var_;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
} else {
goto BREAK_label;
}
{
var4 = ((double(*)(val* self, long p0, long p1))(self->class->vft[COLOR_matrix__Matrix___91d_93d]))(self, 3l, var_i); /* [] on <self:Matrix>*/
}
{
var5 = ((double(*)(val* self, long p0, long p1))(self->class->vft[COLOR_matrix__Matrix___91d_93d]))(self, 0l, var_i); /* [] on <self:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var5,var_x) on <var5:Float> */
/* Covariant cast for argument 0 (i) <var_x:Float> isa OTHER */
/* <var_x:Float> isa OTHER */
var8 = 1; /* easy <var_x:Float> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var12 = var5 * var_x;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var4,var6) on <var4:Float> */
/* Covariant cast for argument 0 (i) <var6:Float> isa OTHER */
/* <var6:Float> isa OTHER */
var15 = 1; /* easy <var6:Float> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var19 = var4 + var6;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
var20 = ((double(*)(val* self, long p0, long p1))(self->class->vft[COLOR_matrix__Matrix___91d_93d]))(self, 1l, var_i); /* [] on <self:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var20,var_y) on <var20:Float> */
/* Covariant cast for argument 0 (i) <var_y:Float> isa OTHER */
/* <var_y:Float> isa OTHER */
var23 = 1; /* easy <var_y:Float> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var27 = var20 * var_y;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var13,var21) on <var13:Float> */
/* Covariant cast for argument 0 (i) <var21:Float> isa OTHER */
/* <var21:Float> isa OTHER */
var30 = 1; /* easy <var21:Float> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var34 = var13 + var21;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
var35 = ((double(*)(val* self, long p0, long p1))(self->class->vft[COLOR_matrix__Matrix___91d_93d]))(self, 2l, var_i); /* [] on <self:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var35,var_z) on <var35:Float> */
/* Covariant cast for argument 0 (i) <var_z:Float> isa OTHER */
/* <var_z:Float> isa OTHER */
var38 = 1; /* easy <var_z:Float> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var42 = var35 * var_z;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var28,var36) on <var28:Float> */
/* Covariant cast for argument 0 (i) <var36:Float> isa OTHER */
/* <var36:Float> isa OTHER */
var45 = 1; /* easy <var36:Float> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var49 = var28 + var36;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(self->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(self, 3l, var_i, var43); /* []= on <self:Matrix>*/
}
var50 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var50;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method projection#Matrix#scale for (self: Matrix, Float, Float, Float) */
void matrix__projection___Matrix___scale(val* self, double p0, double p1, double p2) {
double var_x /* var x: Float */;
double var_y /* var y: Float */;
double var_z /* var z: Float */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
double var4 /* : Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
double var11 /* : Float */;
double var12 /* : Float */;
double var13 /* : Float */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
double var19 /* : Float */;
double var20 /* : Float */;
double var21 /* : Float */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
double var27 /* : Float */;
long var28 /* : Int */;
var_x = p0;
var_y = p1;
var_z = p2;
var_i = 0l;
var_ = 3l;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var2 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var3 = var_i <= var_;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
} else {
goto BREAK_label;
}
{
var4 = ((double(*)(val* self, long p0, long p1))(self->class->vft[COLOR_matrix__Matrix___91d_93d]))(self, 0l, var_i); /* [] on <self:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var4,var_x) on <var4:Float> */
/* Covariant cast for argument 0 (i) <var_x:Float> isa OTHER */
/* <var_x:Float> isa OTHER */
var7 = 1; /* easy <var_x:Float> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var11 = var4 * var_x;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(self->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(self, 0l, var_i, var5); /* []= on <self:Matrix>*/
}
{
var12 = ((double(*)(val* self, long p0, long p1))(self->class->vft[COLOR_matrix__Matrix___91d_93d]))(self, 1l, var_i); /* [] on <self:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var12,var_y) on <var12:Float> */
/* Covariant cast for argument 0 (i) <var_y:Float> isa OTHER */
/* <var_y:Float> isa OTHER */
var15 = 1; /* easy <var_y:Float> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var19 = var12 * var_y;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(self->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(self, 1l, var_i, var13); /* []= on <self:Matrix>*/
}
{
var20 = ((double(*)(val* self, long p0, long p1))(self->class->vft[COLOR_matrix__Matrix___91d_93d]))(self, 2l, var_i); /* [] on <self:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var20,var_z) on <var20:Float> */
/* Covariant cast for argument 0 (i) <var_z:Float> isa OTHER */
/* <var_z:Float> isa OTHER */
var23 = 1; /* easy <var_z:Float> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var27 = var20 * var_z;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(self->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(self, 2l, var_i, var21); /* []= on <self:Matrix>*/
}
var28 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var28;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method projection#Matrix#rotation for (self: Matrix, Float, Float, Float, Float): Matrix */
val* matrix__projection___Matrix___rotation(val* self, double p0, double p1, double p2, double p3) {
val* var /* : Matrix */;
double var_angle /* var angle: Float */;
double var_x /* var x: Float */;
double var_y /* var y: Float */;
double var_z /* var z: Float */;
val* var1 /* : Matrix */;
val* var2 /* : Matrix */;
val* var_mat /* var mat: Matrix */;
double var3 /* : Float */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var6 /* : Float */;
double var7 /* : Float */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
double var13 /* : Float */;
double var14 /* : Float */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
double var20 /* : Float */;
double var21 /* : Float */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
double var27 /* : Float */;
double var28 /* : Float */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
double var34 /* : Float */;
double var35 /* : Float */;
double var_mag /* var mag: Float */;
double var36 /* : Float */;
double var_sin /* var sin: Float */;
double var37 /* : Float */;
double var_cos /* var cos: Float */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
double var45 /* : Float */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
double var51 /* : Float */;
double var52 /* : Float */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
double var58 /* : Float */;
double var59 /* : Float */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
double var65 /* : Float */;
double var66 /* : Float */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
double var72 /* : Float */;
double var_inv_cos /* var inv_cos: Float */;
double var73 /* : Float */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
double var79 /* : Float */;
double var80 /* : Float */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
double var86 /* : Float */;
double var87 /* : Float */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
double var93 /* : Float */;
double var94 /* : Float */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name99;
double var100 /* : Float */;
double var101 /* : Float */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
double var107 /* : Float */;
double var108 /* : Float */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
const char* var_class_name113;
double var114 /* : Float */;
double var115 /* : Float */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
const char* var_class_name120;
double var121 /* : Float */;
double var122 /* : Float */;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
const char* var_class_name127;
double var128 /* : Float */;
double var129 /* : Float */;
short int var131 /* : Bool */;
int cltype132;
int idtype133;
const char* var_class_name134;
double var135 /* : Float */;
double var136 /* : Float */;
short int var138 /* : Bool */;
int cltype139;
int idtype140;
const char* var_class_name141;
double var142 /* : Float */;
double var143 /* : Float */;
short int var145 /* : Bool */;
int cltype146;
int idtype147;
const char* var_class_name148;
double var149 /* : Float */;
double var150 /* : Float */;
short int var152 /* : Bool */;
int cltype153;
int idtype154;
const char* var_class_name155;
double var156 /* : Float */;
double var157 /* : Float */;
short int var159 /* : Bool */;
int cltype160;
int idtype161;
const char* var_class_name162;
double var163 /* : Float */;
double var164 /* : Float */;
short int var166 /* : Bool */;
int cltype167;
int idtype168;
const char* var_class_name169;
double var170 /* : Float */;
double var171 /* : Float */;
short int var173 /* : Bool */;
int cltype174;
int idtype175;
const char* var_class_name176;
double var177 /* : Float */;
double var178 /* : Float */;
short int var180 /* : Bool */;
int cltype181;
int idtype182;
const char* var_class_name183;
double var184 /* : Float */;
double var185 /* : Float */;
short int var187 /* : Bool */;
int cltype188;
int idtype189;
const char* var_class_name190;
double var191 /* : Float */;
double var192 /* : Float */;
short int var194 /* : Bool */;
int cltype195;
int idtype196;
const char* var_class_name197;
double var198 /* : Float */;
double var199 /* : Float */;
short int var201 /* : Bool */;
int cltype202;
int idtype203;
const char* var_class_name204;
double var205 /* : Float */;
double var206 /* : Float */;
short int var208 /* : Bool */;
int cltype209;
int idtype210;
const char* var_class_name211;
double var212 /* : Float */;
double var213 /* : Float */;
short int var215 /* : Bool */;
int cltype216;
int idtype217;
const char* var_class_name218;
double var219 /* : Float */;
double var220 /* : Float */;
short int var222 /* : Bool */;
int cltype223;
int idtype224;
const char* var_class_name225;
double var226 /* : Float */;
double var227 /* : Float */;
short int var229 /* : Bool */;
int cltype230;
int idtype231;
const char* var_class_name232;
double var233 /* : Float */;
double var234 /* : Float */;
short int var236 /* : Bool */;
int cltype237;
int idtype238;
const char* var_class_name239;
double var240 /* : Float */;
double var241 /* : Float */;
short int var243 /* : Bool */;
int cltype244;
int idtype245;
const char* var_class_name246;
double var247 /* : Float */;
double var248 /* : Float */;
short int var250 /* : Bool */;
int cltype251;
int idtype252;
const char* var_class_name253;
double var254 /* : Float */;
double var255 /* : Float */;
short int var257 /* : Bool */;
int cltype258;
int idtype259;
const char* var_class_name260;
double var261 /* : Float */;
double var262 /* : Float */;
short int var264 /* : Bool */;
int cltype265;
int idtype266;
const char* var_class_name267;
double var268 /* : Float */;
double var269 /* : Float */;
short int var271 /* : Bool */;
int cltype272;
int idtype273;
const char* var_class_name274;
double var275 /* : Float */;
double var276 /* : Float */;
short int var278 /* : Bool */;
int cltype279;
int idtype280;
const char* var_class_name281;
double var282 /* : Float */;
double var283 /* : Float */;
short int var285 /* : Bool */;
int cltype286;
int idtype287;
const char* var_class_name288;
double var289 /* : Float */;
double var290 /* : Float */;
short int var292 /* : Bool */;
int cltype293;
int idtype294;
const char* var_class_name295;
double var296 /* : Float */;
double var297 /* : Float */;
short int var299 /* : Bool */;
int cltype300;
int idtype301;
const char* var_class_name302;
double var303 /* : Float */;
var_angle = p0;
var_x = p1;
var_y = p2;
var_z = p3;
var1 = NEW_matrix__Matrix(&type_matrix__Matrix);
{
var2 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_matrix__Matrix__identity]))(var1, 4l); /* identity on <var1:Matrix>*/
}
var_mat = var2;
{
{ /* Inline kernel#Float#* (var_x,var_x) on <var_x:Float> */
/* Covariant cast for argument 0 (i) <var_x:Float> isa OTHER */
/* <var_x:Float> isa OTHER */
var5 = 1; /* easy <var_x:Float> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var6 = var_x * var_x;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var_y,var_y) on <var_y:Float> */
/* Covariant cast for argument 0 (i) <var_y:Float> isa OTHER */
/* <var_y:Float> isa OTHER */
var9 = 1; /* easy <var_y:Float> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var13 = var_y * var_y;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var3,var7) on <var3:Float> */
/* Covariant cast for argument 0 (i) <var7:Float> isa OTHER */
/* <var7:Float> isa OTHER */
var16 = 1; /* easy <var7:Float> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var20 = var3 + var7;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var_z,var_z) on <var_z:Float> */
/* Covariant cast for argument 0 (i) <var_z:Float> isa OTHER */
/* <var_z:Float> isa OTHER */
var23 = 1; /* easy <var_z:Float> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var27 = var_z * var_z;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var14,var21) on <var14:Float> */
/* Covariant cast for argument 0 (i) <var21:Float> isa OTHER */
/* <var21:Float> isa OTHER */
var30 = 1; /* easy <var21:Float> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var34 = var14 + var21;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var35 = core__math___Float___sqrt(var28);
var_mag = var35;
var36 = core__math___Float___sin(var_angle);
var_sin = var36;
var37 = core__math___Float___cos(var_angle);
var_cos = var37;
{
{ /* Inline kernel#Float#> (var_mag,0.0) on <var_mag:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var40 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 532);
fatal_exit(1);
}
var44 = var_mag > 0.0;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
{ /* Inline kernel#Float#/ (var_x,var_mag) on <var_x:Float> */
/* Covariant cast for argument 0 (i) <var_mag:Float> isa OTHER */
/* <var_mag:Float> isa OTHER */
var47 = 1; /* easy <var_mag:Float> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var51 = var_x / var_mag;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_x = var45;
{
{ /* Inline kernel#Float#/ (var_y,var_mag) on <var_y:Float> */
/* Covariant cast for argument 0 (i) <var_mag:Float> isa OTHER */
/* <var_mag:Float> isa OTHER */
var54 = 1; /* easy <var_mag:Float> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var58 = var_y / var_mag;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var_y = var52;
{
{ /* Inline kernel#Float#/ (var_z,var_mag) on <var_z:Float> */
/* Covariant cast for argument 0 (i) <var_mag:Float> isa OTHER */
/* <var_mag:Float> isa OTHER */
var61 = 1; /* easy <var_mag:Float> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var65 = var_z / var_mag;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_z = var59;
{
{ /* Inline kernel#Float#- (1.0,var_cos) on <1.0:Float> */
/* Covariant cast for argument 0 (i) <var_cos:Float> isa OTHER */
/* <var_cos:Float> isa OTHER */
var68 = 1; /* easy <var_cos:Float> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var72 = 1.0 - var_cos;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var_inv_cos = var66;
{
{ /* Inline kernel#Float#* (var_inv_cos,var_x) on <var_inv_cos:Float> */
/* Covariant cast for argument 0 (i) <var_x:Float> isa OTHER */
/* <var_x:Float> isa OTHER */
var75 = 1; /* easy <var_x:Float> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var79 = var_inv_cos * var_x;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var73,var_x) on <var73:Float> */
/* Covariant cast for argument 0 (i) <var_x:Float> isa OTHER */
/* <var_x:Float> isa OTHER */
var82 = 1; /* easy <var_x:Float> isa OTHER*/
if (unlikely(!var82)) {
var_class_name85 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var86 = var73 * var_x;
var80 = var86;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var80,var_cos) on <var80:Float> */
/* Covariant cast for argument 0 (i) <var_cos:Float> isa OTHER */
/* <var_cos:Float> isa OTHER */
var89 = 1; /* easy <var_cos:Float> isa OTHER*/
if (unlikely(!var89)) {
var_class_name92 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var93 = var80 + var_cos;
var87 = var93;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 0l, 0l, var87); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var_inv_cos,var_x) on <var_inv_cos:Float> */
/* Covariant cast for argument 0 (i) <var_x:Float> isa OTHER */
/* <var_x:Float> isa OTHER */
var96 = 1; /* easy <var_x:Float> isa OTHER*/
if (unlikely(!var96)) {
var_class_name99 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name99);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var100 = var_inv_cos * var_x;
var94 = var100;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var94,var_y) on <var94:Float> */
/* Covariant cast for argument 0 (i) <var_y:Float> isa OTHER */
/* <var_y:Float> isa OTHER */
var103 = 1; /* easy <var_y:Float> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var107 = var94 * var_y;
var101 = var107;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var_z,var_sin) on <var_z:Float> */
/* Covariant cast for argument 0 (i) <var_sin:Float> isa OTHER */
/* <var_sin:Float> isa OTHER */
var110 = 1; /* easy <var_sin:Float> isa OTHER*/
if (unlikely(!var110)) {
var_class_name113 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name113);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var114 = var_z * var_sin;
var108 = var114;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var101,var108) on <var101:Float> */
/* Covariant cast for argument 0 (i) <var108:Float> isa OTHER */
/* <var108:Float> isa OTHER */
var117 = 1; /* easy <var108:Float> isa OTHER*/
if (unlikely(!var117)) {
var_class_name120 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name120);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var121 = var101 - var108;
var115 = var121;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 0l, 1l, var115); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var_inv_cos,var_z) on <var_inv_cos:Float> */
/* Covariant cast for argument 0 (i) <var_z:Float> isa OTHER */
/* <var_z:Float> isa OTHER */
var124 = 1; /* easy <var_z:Float> isa OTHER*/
if (unlikely(!var124)) {
var_class_name127 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var128 = var_inv_cos * var_z;
var122 = var128;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var122,var_x) on <var122:Float> */
/* Covariant cast for argument 0 (i) <var_x:Float> isa OTHER */
/* <var_x:Float> isa OTHER */
var131 = 1; /* easy <var_x:Float> isa OTHER*/
if (unlikely(!var131)) {
var_class_name134 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name134);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var135 = var122 * var_x;
var129 = var135;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var_y,var_sin) on <var_y:Float> */
/* Covariant cast for argument 0 (i) <var_sin:Float> isa OTHER */
/* <var_sin:Float> isa OTHER */
var138 = 1; /* easy <var_sin:Float> isa OTHER*/
if (unlikely(!var138)) {
var_class_name141 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name141);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var142 = var_y * var_sin;
var136 = var142;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var129,var136) on <var129:Float> */
/* Covariant cast for argument 0 (i) <var136:Float> isa OTHER */
/* <var136:Float> isa OTHER */
var145 = 1; /* easy <var136:Float> isa OTHER*/
if (unlikely(!var145)) {
var_class_name148 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name148);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var149 = var129 + var136;
var143 = var149;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 0l, 2l, var143); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var_inv_cos,var_x) on <var_inv_cos:Float> */
/* Covariant cast for argument 0 (i) <var_x:Float> isa OTHER */
/* <var_x:Float> isa OTHER */
var152 = 1; /* easy <var_x:Float> isa OTHER*/
if (unlikely(!var152)) {
var_class_name155 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name155);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var156 = var_inv_cos * var_x;
var150 = var156;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var150,var_y) on <var150:Float> */
/* Covariant cast for argument 0 (i) <var_y:Float> isa OTHER */
/* <var_y:Float> isa OTHER */
var159 = 1; /* easy <var_y:Float> isa OTHER*/
if (unlikely(!var159)) {
var_class_name162 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name162);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var163 = var150 * var_y;
var157 = var163;
goto RET_LABEL158;
RET_LABEL158:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var_z,var_sin) on <var_z:Float> */
/* Covariant cast for argument 0 (i) <var_sin:Float> isa OTHER */
/* <var_sin:Float> isa OTHER */
var166 = 1; /* easy <var_sin:Float> isa OTHER*/
if (unlikely(!var166)) {
var_class_name169 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name169);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var170 = var_z * var_sin;
var164 = var170;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var157,var164) on <var157:Float> */
/* Covariant cast for argument 0 (i) <var164:Float> isa OTHER */
/* <var164:Float> isa OTHER */
var173 = 1; /* easy <var164:Float> isa OTHER*/
if (unlikely(!var173)) {
var_class_name176 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name176);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var177 = var157 + var164;
var171 = var177;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 1l, 0l, var171); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var_inv_cos,var_y) on <var_inv_cos:Float> */
/* Covariant cast for argument 0 (i) <var_y:Float> isa OTHER */
/* <var_y:Float> isa OTHER */
var180 = 1; /* easy <var_y:Float> isa OTHER*/
if (unlikely(!var180)) {
var_class_name183 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name183);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var184 = var_inv_cos * var_y;
var178 = var184;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var178,var_y) on <var178:Float> */
/* Covariant cast for argument 0 (i) <var_y:Float> isa OTHER */
/* <var_y:Float> isa OTHER */
var187 = 1; /* easy <var_y:Float> isa OTHER*/
if (unlikely(!var187)) {
var_class_name190 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name190);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var191 = var178 * var_y;
var185 = var191;
goto RET_LABEL186;
RET_LABEL186:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var185,var_cos) on <var185:Float> */
/* Covariant cast for argument 0 (i) <var_cos:Float> isa OTHER */
/* <var_cos:Float> isa OTHER */
var194 = 1; /* easy <var_cos:Float> isa OTHER*/
if (unlikely(!var194)) {
var_class_name197 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name197);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var198 = var185 + var_cos;
var192 = var198;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 1l, 1l, var192); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var_inv_cos,var_y) on <var_inv_cos:Float> */
/* Covariant cast for argument 0 (i) <var_y:Float> isa OTHER */
/* <var_y:Float> isa OTHER */
var201 = 1; /* easy <var_y:Float> isa OTHER*/
if (unlikely(!var201)) {
var_class_name204 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name204);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var205 = var_inv_cos * var_y;
var199 = var205;
goto RET_LABEL200;
RET_LABEL200:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var199,var_z) on <var199:Float> */
/* Covariant cast for argument 0 (i) <var_z:Float> isa OTHER */
/* <var_z:Float> isa OTHER */
var208 = 1; /* easy <var_z:Float> isa OTHER*/
if (unlikely(!var208)) {
var_class_name211 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name211);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var212 = var199 * var_z;
var206 = var212;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var_x,var_sin) on <var_x:Float> */
/* Covariant cast for argument 0 (i) <var_sin:Float> isa OTHER */
/* <var_sin:Float> isa OTHER */
var215 = 1; /* easy <var_sin:Float> isa OTHER*/
if (unlikely(!var215)) {
var_class_name218 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name218);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var219 = var_x * var_sin;
var213 = var219;
goto RET_LABEL214;
RET_LABEL214:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var206,var213) on <var206:Float> */
/* Covariant cast for argument 0 (i) <var213:Float> isa OTHER */
/* <var213:Float> isa OTHER */
var222 = 1; /* easy <var213:Float> isa OTHER*/
if (unlikely(!var222)) {
var_class_name225 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name225);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var226 = var206 - var213;
var220 = var226;
goto RET_LABEL221;
RET_LABEL221:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 1l, 2l, var220); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var_inv_cos,var_z) on <var_inv_cos:Float> */
/* Covariant cast for argument 0 (i) <var_z:Float> isa OTHER */
/* <var_z:Float> isa OTHER */
var229 = 1; /* easy <var_z:Float> isa OTHER*/
if (unlikely(!var229)) {
var_class_name232 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name232);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var233 = var_inv_cos * var_z;
var227 = var233;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var227,var_x) on <var227:Float> */
/* Covariant cast for argument 0 (i) <var_x:Float> isa OTHER */
/* <var_x:Float> isa OTHER */
var236 = 1; /* easy <var_x:Float> isa OTHER*/
if (unlikely(!var236)) {
var_class_name239 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name239);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var240 = var227 * var_x;
var234 = var240;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var_y,var_sin) on <var_y:Float> */
/* Covariant cast for argument 0 (i) <var_sin:Float> isa OTHER */
/* <var_sin:Float> isa OTHER */
var243 = 1; /* easy <var_sin:Float> isa OTHER*/
if (unlikely(!var243)) {
var_class_name246 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name246);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var247 = var_y * var_sin;
var241 = var247;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var234,var241) on <var234:Float> */
/* Covariant cast for argument 0 (i) <var241:Float> isa OTHER */
/* <var241:Float> isa OTHER */
var250 = 1; /* easy <var241:Float> isa OTHER*/
if (unlikely(!var250)) {
var_class_name253 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name253);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var254 = var234 - var241;
var248 = var254;
goto RET_LABEL249;
RET_LABEL249:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 2l, 0l, var248); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var_inv_cos,var_y) on <var_inv_cos:Float> */
/* Covariant cast for argument 0 (i) <var_y:Float> isa OTHER */
/* <var_y:Float> isa OTHER */
var257 = 1; /* easy <var_y:Float> isa OTHER*/
if (unlikely(!var257)) {
var_class_name260 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name260);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var261 = var_inv_cos * var_y;
var255 = var261;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var255,var_z) on <var255:Float> */
/* Covariant cast for argument 0 (i) <var_z:Float> isa OTHER */
/* <var_z:Float> isa OTHER */
var264 = 1; /* easy <var_z:Float> isa OTHER*/
if (unlikely(!var264)) {
var_class_name267 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name267);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var268 = var255 * var_z;
var262 = var268;
goto RET_LABEL263;
RET_LABEL263:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var_x,var_sin) on <var_x:Float> */
/* Covariant cast for argument 0 (i) <var_sin:Float> isa OTHER */
/* <var_sin:Float> isa OTHER */
var271 = 1; /* easy <var_sin:Float> isa OTHER*/
if (unlikely(!var271)) {
var_class_name274 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name274);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var275 = var_x * var_sin;
var269 = var275;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var262,var269) on <var262:Float> */
/* Covariant cast for argument 0 (i) <var269:Float> isa OTHER */
/* <var269:Float> isa OTHER */
var278 = 1; /* easy <var269:Float> isa OTHER*/
if (unlikely(!var278)) {
var_class_name281 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name281);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var282 = var262 + var269;
var276 = var282;
goto RET_LABEL277;
RET_LABEL277:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 2l, 1l, var276); /* []= on <var_mat:Matrix>*/
}
{
{ /* Inline kernel#Float#* (var_inv_cos,var_z) on <var_inv_cos:Float> */
/* Covariant cast for argument 0 (i) <var_z:Float> isa OTHER */
/* <var_z:Float> isa OTHER */
var285 = 1; /* easy <var_z:Float> isa OTHER*/
if (unlikely(!var285)) {
var_class_name288 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name288);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var289 = var_inv_cos * var_z;
var283 = var289;
goto RET_LABEL284;
RET_LABEL284:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var283,var_z) on <var283:Float> */
/* Covariant cast for argument 0 (i) <var_z:Float> isa OTHER */
/* <var_z:Float> isa OTHER */
var292 = 1; /* easy <var_z:Float> isa OTHER*/
if (unlikely(!var292)) {
var_class_name295 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name295);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var296 = var283 * var_z;
var290 = var296;
goto RET_LABEL291;
RET_LABEL291:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var290,var_cos) on <var290:Float> */
/* Covariant cast for argument 0 (i) <var_cos:Float> isa OTHER */
/* <var_cos:Float> isa OTHER */
var299 = 1; /* easy <var_cos:Float> isa OTHER*/
if (unlikely(!var299)) {
var_class_name302 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name302);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var303 = var290 + var_cos;
var297 = var303;
goto RET_LABEL298;
RET_LABEL298:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_mat->class->vft[COLOR_matrix__Matrix___91d_93d_61d]))(var_mat, 2l, 2l, var297); /* []= on <var_mat:Matrix>*/
}
} else {
}
var = var_mat;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method projection#Matrix#rotate for (self: Matrix, Float, Float, Float, Float) */
void matrix__projection___Matrix___rotate(val* self, double p0, double p1, double p2, double p3) {
double var_angle /* var angle: Float */;
double var_x /* var x: Float */;
double var_y /* var y: Float */;
double var_z /* var z: Float */;
val* var /* : Matrix */;
val* var1 /* : Matrix */;
val* var_rotation /* var rotation: Matrix */;
val* var2 /* : Matrix */;
val* var_rotated /* var rotated: Matrix */;
val* var3 /* : Array[Float] */;
var_angle = p0;
var_x = p1;
var_y = p2;
var_z = p3;
var = NEW_matrix__Matrix(&type_matrix__Matrix);
{
var1 = ((val*(*)(val* self, double p0, double p1, double p2, double p3))(var->class->vft[COLOR_matrix__projection__Matrix__rotation]))(var, var_angle, var_x, var_y, var_z); /* rotation on <var:Matrix>*/
}
var_rotation = var1;
{
var2 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_matrix__Matrix___42d]))(self, var_rotation); /* * on <self:Matrix>*/
}
var_rotated = var2;
{
var3 = ((val*(*)(val* self))(var_rotated->class->vft[COLOR_matrix__Matrix__items]))(var_rotated); /* items on <var_rotated:Matrix>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_matrix__Matrix__items_61d]))(self, var3); /* items= on <self:Matrix>*/
}
RET_LABEL:;
}
