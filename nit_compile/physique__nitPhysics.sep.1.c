#include "physique__nitPhysics.sep.0.h"
/* method nitPhysics#Collision#check_collision for (self: Collision, Entity, Entity) */
void physique___physique__Collision___check_collision(val* self, val* p0, val* p1) {
val* var_e1 /* var e1: Entity */;
val* var_e2 /* var e2: Entity */;
val* var /* : Point3d[Float] */;
val* var1 /* : Numeric */;
val* var2 /* : Point3d[Float] */;
val* var3 /* : Numeric */;
double var4 /* : Float */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var7 /* : Float */;
double var8 /* : Float */;
double var9 /* : Float */;
double var_dx /* var dx: Float */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
double var17 /* : Float */;
double var19 /* : Float */;
double var20 /* : Float */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
double var26 /* : Float */;
val* var27 /* : Point3d[Float] */;
val* var28 /* : Numeric */;
val* var29 /* : Point3d[Float] */;
val* var30 /* : Numeric */;
double var31 /* : Float */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
double var37 /* : Float */;
double var38 /* : Float */;
double var39 /* : Float */;
double var_dy /* var dy: Float */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var46 /* : Bool */;
double var47 /* : Float */;
double var49 /* : Float */;
double var50 /* : Float */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
double var56 /* : Float */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
short int var_ /* var : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
short int var64 /* : Bool */;
double var65 /* : Float */;
val* var66 /* : Dimensions_2d */;
double var67 /* : Float */;
double var68 /* : Float */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
double var74 /* : Float */;
double var75 /* : Float */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
double var81 /* : Float */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
short int var88 /* : Bool */;
short int var_89 /* var : Bool */;
double var90 /* : Float */;
val* var91 /* : Dimensions_2d */;
double var92 /* : Float */;
double var93 /* : Float */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
const char* var_class_name98;
double var99 /* : Float */;
double var100 /* : Float */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
double var106 /* : Float */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
int cltype116;
int idtype117;
short int var_118 /* var : Bool */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
val* var122 /* : Point3d[Float] */;
double var123 /* : Float */;
double var124 /* : Float */;
double var125 /* : Float */;
double var126 /* : Float */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
const char* var_class_name131;
double var132 /* : Float */;
short int var133 /* : Bool */;
short int var135 /* : Bool */;
int cltype136;
int idtype137;
const char* var_class_name138;
short int var139 /* : Bool */;
var_e1 = p0;
var_e2 = p1;
{
var = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e2); /* position on <var_e2:Entity>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var); /* x on <var:Point3d[Float]>*/
}
{
var2 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e1); /* position on <var_e1:Entity>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var2); /* x on <var2:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#- (var1,var3) on <var1:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var3:Numeric(Float)> isa OTHER */
/* <var3:Numeric(Float)> isa OTHER */
var6 = 1; /* easy <var3:Numeric(Float)> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = var3 == NULL ? "null" : (((long)var3&3)?type_info[((long)var3&3)]:var3->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var7 = ((struct instance_core__Float*)var1)->value; /* autounbox from Numeric to Float */;
var8 = ((struct instance_core__Float*)var3)->value; /* autounbox from Numeric to Float */;
var9 = var7 - var8;
var4 = var9;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_dx = var4;
{
{ /* Inline kernel#Float#< (var_dx,0.0) on <var_dx:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var12 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 530);
fatal_exit(1);
}
var16 = var_dx < 0.0;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
{ /* Inline kernel#Float#unary - (1.0) on <1.0:Float> */
var19 = -1.0;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var_dx,var17) on <var_dx:Float> */
/* Covariant cast for argument 0 (i) <var17:Float> isa OTHER */
/* <var17:Float> isa OTHER */
var22 = 1; /* easy <var17:Float> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var26 = var_dx * var17;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_dx = var20;
} else {
}
{
var27 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e2); /* position on <var_e2:Entity>*/
}
{
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var27); /* y on <var27:Point3d[Float]>*/
}
{
var29 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e1); /* position on <var_e1:Entity>*/
}
{
var30 = ((val*(*)(val* self))(var29->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var29); /* y on <var29:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#- (var28,var30) on <var28:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var30:Numeric(Float)> isa OTHER */
/* <var30:Numeric(Float)> isa OTHER */
var33 = 1; /* easy <var30:Numeric(Float)> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = var30 == NULL ? "null" : (((long)var30&3)?type_info[((long)var30&3)]:var30->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var37 = ((struct instance_core__Float*)var28)->value; /* autounbox from Numeric to Float */;
var38 = ((struct instance_core__Float*)var30)->value; /* autounbox from Numeric to Float */;
var39 = var37 - var38;
var31 = var39;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_dy = var31;
{
{ /* Inline kernel#Float#< (var_dy,0.0) on <var_dy:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var42 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 530);
fatal_exit(1);
}
var46 = var_dy < 0.0;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
{
{ /* Inline kernel#Float#unary - (1.0) on <1.0:Float> */
var49 = -1.0;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var_dy,var47) on <var_dy:Float> */
/* Covariant cast for argument 0 (i) <var47:Float> isa OTHER */
/* <var47:Float> isa OTHER */
var52 = 1; /* easy <var47:Float> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var56 = var_dy * var47;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_dy = var50;
} else {
}
/* <var_e1:Entity> isa Circle */
cltype59 = type_physique__Circle.color;
idtype60 = type_physique__Circle.id;
if(cltype59 >= var_e1->type->table_size) {
var58 = 0;
} else {
var58 = var_e1->type->type_table[cltype59] == idtype60;
}
var_ = var58;
if (var58){
/* <var_e2:Entity> isa Polygone */
cltype62 = type_physique__Polygone.color;
idtype63 = type_physique__Polygone.id;
if(cltype62 >= var_e2->type->table_size) {
var61 = 0;
} else {
var61 = var_e2->type->type_table[cltype62] == idtype63;
}
var57 = var61;
} else {
var57 = var_;
}
if (var57){
{
var65 = ((double(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Circle__radius]))(var_e1); /* radius on <var_e1:Entity(Circle)>*/
}
{
var66 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(var_e2); /* dimensions on <var_e2:Entity(Polygone)>*/
}
{
var67 = ((double(*)(val* self))(var66->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width]))(var66); /* width on <var66:Dimensions_2d>*/
}
{
{ /* Inline kernel#Float#/ (var67,2.0) on <var67:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var70 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var74 = var67 / 2.0;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var65,var68) on <var65:Float> */
/* Covariant cast for argument 0 (i) <var68:Float> isa OTHER */
/* <var68:Float> isa OTHER */
var77 = 1; /* easy <var68:Float> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var81 = var65 + var68;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline kernel#Float#<= (var_dx,var75) on <var_dx:Float> */
/* Covariant cast for argument 0 (i) <var75:Float> isa OTHER */
/* <var75:Float> isa OTHER */
var84 = 1; /* easy <var75:Float> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 529);
fatal_exit(1);
}
var88 = var_dx <= var75;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var_89 = var82;
if (var82){
{
var90 = ((double(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Circle__radius]))(var_e1); /* radius on <var_e1:Entity(Circle)>*/
}
{
var91 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(var_e2); /* dimensions on <var_e2:Entity(Polygone)>*/
}
{
var92 = ((double(*)(val* self))(var91->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height]))(var91); /* height on <var91:Dimensions_2d>*/
}
{
{ /* Inline kernel#Float#/ (var92,2.0) on <var92:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var95 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var95)) {
var_class_name98 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name98);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var99 = var92 / 2.0;
var93 = var99;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var90,var93) on <var90:Float> */
/* Covariant cast for argument 0 (i) <var93:Float> isa OTHER */
/* <var93:Float> isa OTHER */
var102 = 1; /* easy <var93:Float> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var106 = var90 + var93;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline kernel#Float#<= (var_dy,var100) on <var_dy:Float> */
/* Covariant cast for argument 0 (i) <var100:Float> isa OTHER */
/* <var100:Float> isa OTHER */
var109 = 1; /* easy <var100:Float> isa OTHER*/
if (unlikely(!var109)) {
var_class_name112 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 529);
fatal_exit(1);
}
var113 = var_dy <= var100;
var107 = var113;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var64 = var107;
} else {
var64 = var_89;
}
if (var64){
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_physique__nitPhysics__Collision__resolve_collision]))(self, var_e1, var_e2); /* resolve_collision on <self:Collision>*/
}
} else {
}
} else {
}
/* <var_e1:Entity> isa Circle */
cltype116 = type_physique__Circle.color;
idtype117 = type_physique__Circle.id;
if(cltype116 >= var_e1->type->table_size) {
var115 = 0;
} else {
var115 = var_e1->type->type_table[cltype116] == idtype117;
}
var_118 = var115;
if (var115){
/* <var_e2:Entity> isa Circle */
cltype120 = type_physique__Circle.color;
idtype121 = type_physique__Circle.id;
if(cltype120 >= var_e2->type->table_size) {
var119 = 0;
} else {
var119 = var_e2->type->type_table[cltype120] == idtype121;
}
var114 = var119;
} else {
var114 = var_118;
}
if (var114){
{
var122 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e2); /* position on <var_e2:Entity(Circle)>*/
}
{
var123 = ((double(*)(val* self, val* p0))(var_e1->class->vft[COLOR_physique__nitSimulation__Circle__distance_topoint]))(var_e1, var122); /* distance_topoint on <var_e1:Entity(Circle)>*/
}
{
var124 = ((double(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Circle__radius]))(var_e1); /* radius on <var_e1:Entity(Circle)>*/
}
{
var125 = ((double(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Circle__radius]))(var_e2); /* radius on <var_e2:Entity(Circle)>*/
}
{
{ /* Inline kernel#Float#+ (var124,var125) on <var124:Float> */
/* Covariant cast for argument 0 (i) <var125:Float> isa OTHER */
/* <var125:Float> isa OTHER */
var128 = 1; /* easy <var125:Float> isa OTHER*/
if (unlikely(!var128)) {
var_class_name131 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name131);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var132 = var124 + var125;
var126 = var132;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline kernel#Float#<= (var123,var126) on <var123:Float> */
/* Covariant cast for argument 0 (i) <var126:Float> isa OTHER */
/* <var126:Float> isa OTHER */
var135 = 1; /* easy <var126:Float> isa OTHER*/
if (unlikely(!var135)) {
var_class_name138 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name138);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 529);
fatal_exit(1);
}
var139 = var123 <= var126;
var133 = var139;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
}
if (var133){
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_physique__nitPhysics__Collision__resolve_collision]))(self, var_e1, var_e2); /* resolve_collision on <self:Collision>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method nitPhysics#Collision#resolve_collision for (self: Collision, Entity, Entity) */
void physique___physique__Collision___resolve_collision(val* self, val* p0, val* p1) {
val* var_e1 /* var e1: Entity */;
val* var_e2 /* var e2: Entity */;
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
short int var5 /* : Bool */;
val* var6 /* : Point3d[Float] */;
val* var7 /* : Numeric */;
val* var8 /* : Point3d[Float] */;
val* var9 /* : Numeric */;
val* var10 /* : Dimensions_2d */;
double var11 /* : Float */;
double var12 /* : Float */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name;
double var17 /* : Float */;
double var18 /* : Float */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
double var24 /* : Float */;
double var25 /* : Float */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
double var32 /* : Float */;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
val* var35 /* : Point3d[Float] */;
val* var36 /* : Numeric */;
val* var37 /* : Point3d[Float] */;
val* var38 /* : Numeric */;
val* var39 /* : Dimensions_2d */;
double var40 /* : Float */;
double var41 /* : Float */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
double var47 /* : Float */;
double var48 /* : Float */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
double var54 /* : Float */;
double var55 /* : Float */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
double var62 /* : Float */;
short int var63 /* : Bool */;
val* var64 /* : Vector_2d */;
val* var_65 /* var : Vector_2d */;
double var66 /* : Float */;
double var67 /* : Float */;
double var68 /* : Float */;
double var70 /* : Float */;
double var71 /* : Float */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
double var77 /* : Float */;
short int var78 /* : Bool */;
val* var79 /* : Point3d[Float] */;
val* var80 /* : Numeric */;
val* var81 /* : Point3d[Float] */;
val* var82 /* : Numeric */;
val* var83 /* : Dimensions_2d */;
double var84 /* : Float */;
double var85 /* : Float */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
double var91 /* : Float */;
double var92 /* : Float */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
double var98 /* : Float */;
double var99 /* : Float */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
double var106 /* : Float */;
short int var107 /* : Bool */;
short int var_108 /* var : Bool */;
val* var109 /* : Point3d[Float] */;
val* var110 /* : Numeric */;
val* var111 /* : Point3d[Float] */;
val* var112 /* : Numeric */;
val* var113 /* : Dimensions_2d */;
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
short int var130 /* : Bool */;
short int var132 /* : Bool */;
int cltype133;
int idtype134;
const char* var_class_name135;
double var136 /* : Float */;
short int var137 /* : Bool */;
val* var138 /* : Vector_2d */;
val* var_139 /* var : Vector_2d */;
double var140 /* : Float */;
double var141 /* : Float */;
double var142 /* : Float */;
double var144 /* : Float */;
double var145 /* : Float */;
short int var147 /* : Bool */;
int cltype148;
int idtype149;
const char* var_class_name150;
double var151 /* : Float */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
int cltype154;
int idtype155;
short int var_156 /* var : Bool */;
short int var157 /* : Bool */;
int cltype158;
int idtype159;
var_e1 = p0;
var_e2 = p1;
/* <var_e1:Entity> isa Circle */
cltype = type_physique__Circle.color;
idtype = type_physique__Circle.id;
if(cltype >= var_e1->type->table_size) {
var1 = 0;
} else {
var1 = var_e1->type->type_table[cltype] == idtype;
}
var_ = var1;
if (var1){
/* <var_e2:Entity> isa Polygone */
cltype3 = type_physique__Polygone.color;
idtype4 = type_physique__Polygone.id;
if(cltype3 >= var_e2->type->table_size) {
var2 = 0;
} else {
var2 = var_e2->type->type_table[cltype3] == idtype4;
}
var = var2;
} else {
var = var_;
}
if (var){
{
var6 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e1); /* position on <var_e1:Entity(Circle)>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var6); /* x on <var6:Point3d[Float]>*/
}
{
var8 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e2); /* position on <var_e2:Entity(Polygone)>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var8); /* x on <var8:Point3d[Float]>*/
}
{
var10 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(var_e2); /* dimensions on <var_e2:Entity(Polygone)>*/
}
{
var11 = ((double(*)(val* self))(var10->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width]))(var10); /* width on <var10:Dimensions_2d>*/
}
{
{ /* Inline kernel#Float#/ (var11,2.0) on <var11:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var14 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var17 = var11 / 2.0;
var12 = var17;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var9,var12) on <var9:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var12:Float> isa OTHER */
/* <var12:Float> isa OTHER */
var20 = 1; /* easy <var12:Float> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var24 = ((struct instance_core__Float*)var9)->value; /* autounbox from Numeric to Float */;
var25 = var24 + var12;
var18 = var25;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Float#<= (var7,var18) on <var7:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var18:Float> isa OTHER */
/* <var18:Float> isa OTHER */
var28 = 1; /* easy <var18:Float> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 529);
fatal_exit(1);
}
var32 = ((struct instance_core__Float*)var7)->value; /* autounbox from Numeric to Float */;
var33 = var32 <= var18;
var26 = var33;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_34 = var26;
if (var26){
{
var35 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e1); /* position on <var_e1:Entity(Circle)>*/
}
{
var36 = ((val*(*)(val* self))(var35->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var35); /* x on <var35:Point3d[Float]>*/
}
{
var37 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e2); /* position on <var_e2:Entity(Polygone)>*/
}
{
var38 = ((val*(*)(val* self))(var37->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var37); /* x on <var37:Point3d[Float]>*/
}
{
var39 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(var_e2); /* dimensions on <var_e2:Entity(Polygone)>*/
}
{
var40 = ((double(*)(val* self))(var39->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width]))(var39); /* width on <var39:Dimensions_2d>*/
}
{
{ /* Inline kernel#Float#/ (var40,2.0) on <var40:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var43 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var47 = var40 / 2.0;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var38,var41) on <var38:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var41:Float> isa OTHER */
/* <var41:Float> isa OTHER */
var50 = 1; /* easy <var41:Float> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var54 = ((struct instance_core__Float*)var38)->value; /* autounbox from Numeric to Float */;
var55 = var54 - var41;
var48 = var55;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel#Float#>= (var36,var48) on <var36:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var48:Float> isa OTHER */
/* <var48:Float> isa OTHER */
var58 = 1; /* easy <var48:Float> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 531);
fatal_exit(1);
}
var62 = ((struct instance_core__Float*)var36)->value; /* autounbox from Numeric to Float */;
var63 = var62 >= var48;
var56 = var63;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var5 = var56;
} else {
var5 = var_34;
}
if (var5){
{
((void(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__play_back]))(var_e1); /* play_back on <var_e1:Entity(Circle)>*/
}
{
var64 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e1); /* vector on <var_e1:Entity(Circle)>*/
}
var_65 = var64;
{
var66 = ((double(*)(val* self))(var_65->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var_65); /* v_y on <var_65:Vector_2d>*/
}
{
var67 = ((double(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Circle__coef_elas]))(var_e1); /* coef_elas on <var_e1:Entity(Circle)>*/
}
{
{ /* Inline kernel#Float#unary - (var67) on <var67:Float> */
var70 = -var67;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var66,var68) on <var66:Float> */
/* Covariant cast for argument 0 (i) <var68:Float> isa OTHER */
/* <var68:Float> isa OTHER */
var73 = 1; /* easy <var68:Float> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var77 = var66 * var68;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
((void(*)(val* self, double p0))(var_65->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(var_65, var71); /* v_y= on <var_65:Vector_2d>*/
}
} else {
}
{
var79 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e1); /* position on <var_e1:Entity(Circle)>*/
}
{
var80 = ((val*(*)(val* self))(var79->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var79); /* y on <var79:Point3d[Float]>*/
}
{
var81 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e2); /* position on <var_e2:Entity(Polygone)>*/
}
{
var82 = ((val*(*)(val* self))(var81->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var81); /* y on <var81:Point3d[Float]>*/
}
{
var83 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(var_e2); /* dimensions on <var_e2:Entity(Polygone)>*/
}
{
var84 = ((double(*)(val* self))(var83->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height]))(var83); /* height on <var83:Dimensions_2d>*/
}
{
{ /* Inline kernel#Float#/ (var84,2.0) on <var84:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var87 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var91 = var84 / 2.0;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var82,var85) on <var82:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var85:Float> isa OTHER */
/* <var85:Float> isa OTHER */
var94 = 1; /* easy <var85:Float> isa OTHER*/
if (unlikely(!var94)) {
var_class_name97 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var98 = ((struct instance_core__Float*)var82)->value; /* autounbox from Numeric to Float */;
var99 = var98 + var85;
var92 = var99;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline kernel#Float#<= (var80,var92) on <var80:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var92:Float> isa OTHER */
/* <var92:Float> isa OTHER */
var102 = 1; /* easy <var92:Float> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 529);
fatal_exit(1);
}
var106 = ((struct instance_core__Float*)var80)->value; /* autounbox from Numeric to Float */;
var107 = var106 <= var92;
var100 = var107;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var_108 = var100;
if (var100){
{
var109 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e1); /* position on <var_e1:Entity(Circle)>*/
}
{
var110 = ((val*(*)(val* self))(var109->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var109); /* y on <var109:Point3d[Float]>*/
}
{
var111 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e2); /* position on <var_e2:Entity(Polygone)>*/
}
{
var112 = ((val*(*)(val* self))(var111->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var111); /* y on <var111:Point3d[Float]>*/
}
{
var113 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(var_e2); /* dimensions on <var_e2:Entity(Polygone)>*/
}
{
var114 = ((double(*)(val* self))(var113->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height]))(var113); /* height on <var113:Dimensions_2d>*/
}
{
{ /* Inline kernel#Float#/ (var114,2.0) on <var114:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var117 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var117)) {
var_class_name120 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name120);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var121 = var114 / 2.0;
var115 = var121;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var112,var115) on <var112:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var115:Float> isa OTHER */
/* <var115:Float> isa OTHER */
var124 = 1; /* easy <var115:Float> isa OTHER*/
if (unlikely(!var124)) {
var_class_name127 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var128 = ((struct instance_core__Float*)var112)->value; /* autounbox from Numeric to Float */;
var129 = var128 - var115;
var122 = var129;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline kernel#Float#>= (var110,var122) on <var110:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var122:Float> isa OTHER */
/* <var122:Float> isa OTHER */
var132 = 1; /* easy <var122:Float> isa OTHER*/
if (unlikely(!var132)) {
var_class_name135 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name135);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 531);
fatal_exit(1);
}
var136 = ((struct instance_core__Float*)var110)->value; /* autounbox from Numeric to Float */;
var137 = var136 >= var122;
var130 = var137;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
}
var78 = var130;
} else {
var78 = var_108;
}
if (var78){
{
((void(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__play_back]))(var_e1); /* play_back on <var_e1:Entity(Circle)>*/
}
{
var138 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e1); /* vector on <var_e1:Entity(Circle)>*/
}
var_139 = var138;
{
var140 = ((double(*)(val* self))(var_139->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var_139); /* v_x on <var_139:Vector_2d>*/
}
{
var141 = ((double(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Circle__coef_elas]))(var_e1); /* coef_elas on <var_e1:Entity(Circle)>*/
}
{
{ /* Inline kernel#Float#unary - (var141) on <var141:Float> */
var144 = -var141;
var142 = var144;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var140,var142) on <var140:Float> */
/* Covariant cast for argument 0 (i) <var142:Float> isa OTHER */
/* <var142:Float> isa OTHER */
var147 = 1; /* easy <var142:Float> isa OTHER*/
if (unlikely(!var147)) {
var_class_name150 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name150);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var151 = var140 * var142;
var145 = var151;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
}
{
((void(*)(val* self, double p0))(var_139->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var_139, var145); /* v_x= on <var_139:Vector_2d>*/
}
} else {
}
} else {
}
/* <var_e1:Entity> isa Circle */
cltype154 = type_physique__Circle.color;
idtype155 = type_physique__Circle.id;
if(cltype154 >= var_e1->type->table_size) {
var153 = 0;
} else {
var153 = var_e1->type->type_table[cltype154] == idtype155;
}
var_156 = var153;
if (var153){
/* <var_e2:Entity> isa Circle */
cltype158 = type_physique__Circle.color;
idtype159 = type_physique__Circle.id;
if(cltype158 >= var_e2->type->table_size) {
var157 = 0;
} else {
var157 = var_e2->type->type_table[cltype158] == idtype159;
}
var152 = var157;
} else {
var152 = var_156;
}
if (var152){
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_physique__nitPhysics__Collision__vectorial_behaviour]))(self, var_e1, var_e2); /* vectorial_behaviour on <self:Collision>*/
}
} else {
}
RET_LABEL:;
}
/* method nitPhysics#Collision#vectorial_behaviour for (self: Collision, Entity, Entity) */
void physique___physique__Collision___vectorial_behaviour(val* self, val* p0, val* p1) {
val* var_e1 /* var e1: Entity */;
val* var_e2 /* var e2: Entity */;
val* var /* : Vector_2d */;
val* var1 /* : Point3d[Float] */;
val* var2 /* : Numeric */;
val* var3 /* : Point3d[Float] */;
val* var4 /* : Numeric */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var8 /* : Float */;
double var9 /* : Float */;
double var10 /* : Float */;
val* var11 /* : Point3d[Float] */;
val* var12 /* : Numeric */;
val* var13 /* : Point3d[Float] */;
val* var14 /* : Numeric */;
double var15 /* : Float */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
double var21 /* : Float */;
double var22 /* : Float */;
double var23 /* : Float */;
val* var24 /* : Vector_2d */;
val* var_normalized_vector_e1_e2 /* var normalized_vector_e1_e2: Vector_2d */;
double var25 /* : Float */;
val* var26 /* : Vector_2d */;
double var27 /* : Float */;
double var28 /* : Float */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
double var34 /* : Float */;
double var35 /* : Float */;
val* var36 /* : Vector_2d */;
double var37 /* : Float */;
double var38 /* : Float */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
double var44 /* : Float */;
double var45 /* : Float */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
double var51 /* : Float */;
double var_normalized_Scalaire_e1 /* var normalized_Scalaire_e1: Float */;
double var52 /* : Float */;
val* var53 /* : Vector_2d */;
double var54 /* : Float */;
double var55 /* : Float */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
double var61 /* : Float */;
double var62 /* : Float */;
val* var63 /* : Vector_2d */;
double var64 /* : Float */;
double var65 /* : Float */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
double var71 /* : Float */;
double var72 /* : Float */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
double var78 /* : Float */;
double var_normalized_Scalaire_e2 /* var normalized_Scalaire_e2: Float */;
double var79 /* : Float */;
double var80 /* : Float */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
double var86 /* : Float */;
double var87 /* : Float */;
double var88 /* : Float */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
double var94 /* : Float */;
double var95 /* : Float */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
const char* var_class_name100;
double var101 /* : Float */;
double var_resX /* var resX: Float */;
double var102 /* : Float */;
double var103 /* : Float */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
double var109 /* : Float */;
double var110 /* : Float */;
double var111 /* : Float */;
short int var113 /* : Bool */;
int cltype114;
int idtype115;
const char* var_class_name116;
double var117 /* : Float */;
double var118 /* : Float */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const char* var_class_name123;
double var124 /* : Float */;
double var_resY /* var resY: Float */;
val* var125 /* : Vector_2d */;
val* var126 /* : Vector_2d */;
double var127 /* : Float */;
double var128 /* : Float */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
const char* var_class_name133;
double var134 /* : Float */;
val* var135 /* : Vector_2d */;
val* var136 /* : Vector_2d */;
double var137 /* : Float */;
double var138 /* : Float */;
short int var140 /* : Bool */;
int cltype141;
int idtype142;
const char* var_class_name143;
double var144 /* : Float */;
val* var145 /* : Vector_2d */;
val* var146 /* : Vector_2d */;
double var147 /* : Float */;
double var148 /* : Float */;
short int var150 /* : Bool */;
int cltype151;
int idtype152;
const char* var_class_name153;
double var154 /* : Float */;
val* var155 /* : Vector_2d */;
val* var156 /* : Vector_2d */;
double var157 /* : Float */;
double var158 /* : Float */;
short int var160 /* : Bool */;
int cltype161;
int idtype162;
const char* var_class_name163;
double var164 /* : Float */;
var_e1 = p0;
var_e2 = p1;
var = NEW_physique__Vector_95d2d(&type_physique__Vector_95d2d);
{
var1 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e1); /* position on <var_e1:Entity>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var1); /* x on <var1:Point3d[Float]>*/
}
{
var3 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e2); /* position on <var_e2:Entity>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var3); /* x on <var3:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#- (var2,var4) on <var2:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var4:Numeric(Float)> isa OTHER */
/* <var4:Numeric(Float)> isa OTHER */
var7 = 1; /* easy <var4:Numeric(Float)> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = var4 == NULL ? "null" : (((long)var4&3)?type_info[((long)var4&3)]:var4->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var8 = ((struct instance_core__Float*)var2)->value; /* autounbox from Numeric to Float */;
var9 = ((struct instance_core__Float*)var4)->value; /* autounbox from Numeric to Float */;
var10 = var8 - var9;
var5 = var10;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var11 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e1); /* position on <var_e1:Entity>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var11); /* y on <var11:Point3d[Float]>*/
}
{
var13 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e2); /* position on <var_e2:Entity>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var13); /* y on <var13:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#- (var12,var14) on <var12:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var14:Numeric(Float)> isa OTHER */
/* <var14:Numeric(Float)> isa OTHER */
var17 = 1; /* easy <var14:Numeric(Float)> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = var14 == NULL ? "null" : (((long)var14&3)?type_info[((long)var14&3)]:var14->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var21 = ((struct instance_core__Float*)var12)->value; /* autounbox from Numeric to Float */;
var22 = ((struct instance_core__Float*)var14)->value; /* autounbox from Numeric to Float */;
var23 = var21 - var22;
var15 = var23;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
((void(*)(val* self, double p0))(var->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var, var5); /* v_x= on <var:Vector_2d>*/
}
{
((void(*)(val* self, double p0))(var->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(var, var15); /* v_y= on <var:Vector_2d>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Vector_2d>*/
}
{
var24 = ((val*(*)(val* self))(var->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__get_normalized_vector]))(var); /* get_normalized_vector on <var:Vector_2d>*/
}
var_normalized_vector_e1_e2 = var24;
{
var25 = ((double(*)(val* self))(var_normalized_vector_e1_e2->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var_normalized_vector_e1_e2); /* v_x on <var_normalized_vector_e1_e2:Vector_2d>*/
}
{
var26 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e1); /* vector on <var_e1:Entity>*/
}
{
var27 = ((double(*)(val* self))(var26->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var26); /* v_x on <var26:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var25,var27) on <var25:Float> */
/* Covariant cast for argument 0 (i) <var27:Float> isa OTHER */
/* <var27:Float> isa OTHER */
var30 = 1; /* easy <var27:Float> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var34 = var25 * var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
var35 = ((double(*)(val* self))(var_normalized_vector_e1_e2->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var_normalized_vector_e1_e2); /* v_y on <var_normalized_vector_e1_e2:Vector_2d>*/
}
{
var36 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e1); /* vector on <var_e1:Entity>*/
}
{
var37 = ((double(*)(val* self))(var36->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var36); /* v_y on <var36:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var35,var37) on <var35:Float> */
/* Covariant cast for argument 0 (i) <var37:Float> isa OTHER */
/* <var37:Float> isa OTHER */
var40 = 1; /* easy <var37:Float> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var44 = var35 * var37;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var28,var38) on <var28:Float> */
/* Covariant cast for argument 0 (i) <var38:Float> isa OTHER */
/* <var38:Float> isa OTHER */
var47 = 1; /* easy <var38:Float> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var51 = var28 + var38;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_normalized_Scalaire_e1 = var45;
{
var52 = ((double(*)(val* self))(var_normalized_vector_e1_e2->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var_normalized_vector_e1_e2); /* v_x on <var_normalized_vector_e1_e2:Vector_2d>*/
}
{
var53 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e2); /* vector on <var_e2:Entity>*/
}
{
var54 = ((double(*)(val* self))(var53->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var53); /* v_x on <var53:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var52,var54) on <var52:Float> */
/* Covariant cast for argument 0 (i) <var54:Float> isa OTHER */
/* <var54:Float> isa OTHER */
var57 = 1; /* easy <var54:Float> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var61 = var52 * var54;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
{
var62 = ((double(*)(val* self))(var_normalized_vector_e1_e2->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var_normalized_vector_e1_e2); /* v_y on <var_normalized_vector_e1_e2:Vector_2d>*/
}
{
var63 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e2); /* vector on <var_e2:Entity>*/
}
{
var64 = ((double(*)(val* self))(var63->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var63); /* v_y on <var63:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var62,var64) on <var62:Float> */
/* Covariant cast for argument 0 (i) <var64:Float> isa OTHER */
/* <var64:Float> isa OTHER */
var67 = 1; /* easy <var64:Float> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var71 = var62 * var64;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var55,var65) on <var55:Float> */
/* Covariant cast for argument 0 (i) <var65:Float> isa OTHER */
/* <var65:Float> isa OTHER */
var74 = 1; /* easy <var65:Float> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var78 = var55 + var65;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var_normalized_Scalaire_e2 = var72;
{
var79 = ((double(*)(val* self))(var_normalized_vector_e1_e2->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var_normalized_vector_e1_e2); /* v_x on <var_normalized_vector_e1_e2:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var79,var_normalized_Scalaire_e2) on <var79:Float> */
/* Covariant cast for argument 0 (i) <var_normalized_Scalaire_e2:Float> isa OTHER */
/* <var_normalized_Scalaire_e2:Float> isa OTHER */
var82 = 1; /* easy <var_normalized_Scalaire_e2:Float> isa OTHER*/
if (unlikely(!var82)) {
var_class_name85 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var86 = var79 * var_normalized_Scalaire_e2;
var80 = var86;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
{
var87 = ((double(*)(val* self))(var_normalized_vector_e1_e2->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var_normalized_vector_e1_e2); /* v_x on <var_normalized_vector_e1_e2:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var87,var_normalized_Scalaire_e1) on <var87:Float> */
/* Covariant cast for argument 0 (i) <var_normalized_Scalaire_e1:Float> isa OTHER */
/* <var_normalized_Scalaire_e1:Float> isa OTHER */
var90 = 1; /* easy <var_normalized_Scalaire_e1:Float> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var94 = var87 * var_normalized_Scalaire_e1;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var80,var88) on <var80:Float> */
/* Covariant cast for argument 0 (i) <var88:Float> isa OTHER */
/* <var88:Float> isa OTHER */
var97 = 1; /* easy <var88:Float> isa OTHER*/
if (unlikely(!var97)) {
var_class_name100 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name100);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var101 = var80 - var88;
var95 = var101;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var_resX = var95;
{
var102 = ((double(*)(val* self))(var_normalized_vector_e1_e2->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var_normalized_vector_e1_e2); /* v_y on <var_normalized_vector_e1_e2:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var102,var_normalized_Scalaire_e2) on <var102:Float> */
/* Covariant cast for argument 0 (i) <var_normalized_Scalaire_e2:Float> isa OTHER */
/* <var_normalized_Scalaire_e2:Float> isa OTHER */
var105 = 1; /* easy <var_normalized_Scalaire_e2:Float> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var109 = var102 * var_normalized_Scalaire_e2;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
{
var110 = ((double(*)(val* self))(var_normalized_vector_e1_e2->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var_normalized_vector_e1_e2); /* v_y on <var_normalized_vector_e1_e2:Vector_2d>*/
}
{
{ /* Inline kernel#Float#* (var110,var_normalized_Scalaire_e1) on <var110:Float> */
/* Covariant cast for argument 0 (i) <var_normalized_Scalaire_e1:Float> isa OTHER */
/* <var_normalized_Scalaire_e1:Float> isa OTHER */
var113 = 1; /* easy <var_normalized_Scalaire_e1:Float> isa OTHER*/
if (unlikely(!var113)) {
var_class_name116 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name116);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var117 = var110 * var_normalized_Scalaire_e1;
var111 = var117;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var103,var111) on <var103:Float> */
/* Covariant cast for argument 0 (i) <var111:Float> isa OTHER */
/* <var111:Float> isa OTHER */
var120 = 1; /* easy <var111:Float> isa OTHER*/
if (unlikely(!var120)) {
var_class_name123 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name123);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var124 = var103 - var111;
var118 = var124;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
var_resY = var118;
{
((void(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__play_back]))(var_e1); /* play_back on <var_e1:Entity>*/
}
{
var125 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e1); /* vector on <var_e1:Entity>*/
}
{
var126 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e1); /* vector on <var_e1:Entity>*/
}
{
var127 = ((double(*)(val* self))(var126->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var126); /* v_x on <var126:Vector_2d>*/
}
{
{ /* Inline kernel#Float#+ (var127,var_resX) on <var127:Float> */
/* Covariant cast for argument 0 (i) <var_resX:Float> isa OTHER */
/* <var_resX:Float> isa OTHER */
var130 = 1; /* easy <var_resX:Float> isa OTHER*/
if (unlikely(!var130)) {
var_class_name133 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name133);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var134 = var127 + var_resX;
var128 = var134;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
{
((void(*)(val* self, double p0))(var125->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var125, var128); /* v_x= on <var125:Vector_2d>*/
}
{
var135 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e1); /* vector on <var_e1:Entity>*/
}
{
var136 = ((val*(*)(val* self))(var_e1->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e1); /* vector on <var_e1:Entity>*/
}
{
var137 = ((double(*)(val* self))(var136->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var136); /* v_y on <var136:Vector_2d>*/
}
{
{ /* Inline kernel#Float#+ (var137,var_resY) on <var137:Float> */
/* Covariant cast for argument 0 (i) <var_resY:Float> isa OTHER */
/* <var_resY:Float> isa OTHER */
var140 = 1; /* easy <var_resY:Float> isa OTHER*/
if (unlikely(!var140)) {
var_class_name143 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name143);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var144 = var137 + var_resY;
var138 = var144;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
{
((void(*)(val* self, double p0))(var135->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(var135, var138); /* v_y= on <var135:Vector_2d>*/
}
{
((void(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__play_back]))(var_e2); /* play_back on <var_e2:Entity>*/
}
{
var145 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e2); /* vector on <var_e2:Entity>*/
}
{
var146 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e2); /* vector on <var_e2:Entity>*/
}
{
var147 = ((double(*)(val* self))(var146->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var146); /* v_x on <var146:Vector_2d>*/
}
{
{ /* Inline kernel#Float#- (var147,var_resX) on <var147:Float> */
/* Covariant cast for argument 0 (i) <var_resX:Float> isa OTHER */
/* <var_resX:Float> isa OTHER */
var150 = 1; /* easy <var_resX:Float> isa OTHER*/
if (unlikely(!var150)) {
var_class_name153 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name153);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var154 = var147 - var_resX;
var148 = var154;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
{
((void(*)(val* self, double p0))(var145->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var145, var148); /* v_x= on <var145:Vector_2d>*/
}
{
var155 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e2); /* vector on <var_e2:Entity>*/
}
{
var156 = ((val*(*)(val* self))(var_e2->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e2); /* vector on <var_e2:Entity>*/
}
{
var157 = ((double(*)(val* self))(var156->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var156); /* v_y on <var156:Vector_2d>*/
}
{
{ /* Inline kernel#Float#- (var157,var_resY) on <var157:Float> */
/* Covariant cast for argument 0 (i) <var_resY:Float> isa OTHER */
/* <var_resY:Float> isa OTHER */
var160 = 1; /* easy <var_resY:Float> isa OTHER*/
if (unlikely(!var160)) {
var_class_name163 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name163);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var164 = var157 - var_resY;
var158 = var164;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
{
((void(*)(val* self, double p0))(var155->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(var155, var158); /* v_y= on <var155:Vector_2d>*/
}
RET_LABEL:;
}
/* method nitPhysics#Force#intensity for (self: Force): Float */
double physique___physique__Force___intensity(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_physique__nitPhysics__Force___intensity].d; /* _intensity on <self:Force> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitPhysics#Force#intensity= for (self: Force, Float) */
void physique___physique__Force___intensity_61d(val* self, double p0) {
self->attrs[COLOR_physique__nitPhysics__Force___intensity].d = p0; /* _intensity on <self:Force> */
RET_LABEL:;
}
/* method nitPhysics#Force#vector for (self: Force): Vector_2d */
val* physique___physique__Force___vector(val* self) {
val* var /* : Vector_2d */;
val* var1 /* : Vector_2d */;
var1 = self->attrs[COLOR_physique__nitPhysics__Force___vector].val; /* _vector on <self:Force> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vector");
PRINT_ERROR(" (%s:%d)\n", FILE_physique__nitPhysics, 74);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitPhysics#Force#vector= for (self: Force, Vector_2d) */
void physique___physique__Force___vector_61d(val* self, val* p0) {
self->attrs[COLOR_physique__nitPhysics__Force___vector].val = p0; /* _vector on <self:Force> */
RET_LABEL:;
}
/* method nitPhysics#Force#apply_force for (self: Force, Entity) */
void physique___physique__Force___apply_force(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "apply_force", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_physique__nitPhysics, 76);
fatal_exit(1);
RET_LABEL:;
}
/* method nitPhysics#Force#update_intensity for (self: Force) */
void physique___physique__Force___update_intensity(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "update_intensity", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_physique__nitPhysics, 78);
fatal_exit(1);
RET_LABEL:;
}
/* method nitPhysics#Force#init for (self: Force) */
void physique___physique__Force___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_physique___physique__Force___core__kernel__Object__init]))(self); /* init on <self:Force>*/
}
RET_LABEL:;
}
/* method nitPhysics#Gravity#init for (self: Gravity) */
void physique___physique__Gravity___core__kernel__Object__init(val* self) {
val* var /* : Vector_2d */;
double var1 /* : Float */;
double var3 /* : Float */;
{
((void(*)(val* self))(self->class->vft[COLOR_physique___physique__Gravity___core__kernel__Object__init]))(self); /* init on <self:Gravity>*/
}
var = NEW_physique__Vector_95d2d(&type_physique__Vector_95d2d);
{
{ /* Inline kernel#Float#unary - (0.01) on <0.01:Float> */
var3 = -0.01;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
((void(*)(val* self, double p0))(var->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var, 0.0); /* v_x= on <var:Vector_2d>*/
}
{
((void(*)(val* self, double p0))(var->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(var, var1); /* v_y= on <var:Vector_2d>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Vector_2d>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_physique__nitPhysics__Force__vector_61d]))(self, var); /* vector= on <self:Gravity>*/
}
RET_LABEL:;
}
/* method nitPhysics#Gravity#apply_force for (self: Gravity, Entity) */
void physique___physique__Gravity___Force__apply_force(val* self, val* p0) {
val* var_e /* var e: Entity */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Vector_2d */;
double var5 /* : Float */;
val* var6 /* : Vector_2d */;
val* var7 /* : Vector_2d */;
var_e = p0;
{
var = ((short int(*)(val* self))(var_e->class->vft[COLOR_physique__nitSimulation__Entity__is_dynamic]))(var_e); /* is_dynamic on <var_e:Entity>*/
}
{
{ /* Inline kernel#Bool#== (var,1) on <var:Bool> */
var3 = var == 1;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitPhysics__Force__vector]))(self); /* vector on <self:Gravity>*/
}
{
var5 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitPhysics__Force__intensity]))(self); /* intensity on <self:Gravity>*/
}
{
((void(*)(val* self, double p0))(var4->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__intensify]))(var4, var5); /* intensify on <var4:Vector_2d>*/
}
{
var6 = ((val*(*)(val* self))(var_e->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var_e); /* vector on <var_e:Entity>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitPhysics__Force__vector]))(self); /* vector on <self:Gravity>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__add]))(var6, var7); /* add on <var6:Vector_2d>*/
}
} else {
}
RET_LABEL:;
}
