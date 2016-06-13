#include "physique__nitSimulation.sep.0.h"
/* method nitSimulation#Entity#position for (self: Entity): Point3d[Float] */
val* physique___physique__Entity___position(val* self) {
val* var /* : Point3d[Float] */;
val* var1 /* : Point3d[Float] */;
var1 = self->attrs[COLOR_physique__nitSimulation__Entity___position].val; /* _position on <self:Entity> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _position");
PRINT_ERROR(" (%s:%d)\n", FILE_physique__nitSimulation, 11);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Entity#position= for (self: Entity, Point3d[Float]) */
void physique___physique__Entity___position_61d(val* self, val* p0) {
self->attrs[COLOR_physique__nitSimulation__Entity___position].val = p0; /* _position on <self:Entity> */
RET_LABEL:;
}
/* method nitSimulation#Entity#dimensions for (self: Entity): Dimensions_2d */
val* physique___physique__Entity___dimensions(val* self) {
val* var /* : Dimensions_2d */;
val* var1 /* : Dimensions_2d */;
var1 = self->attrs[COLOR_physique__nitSimulation__Entity___dimensions].val; /* _dimensions on <self:Entity> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dimensions");
PRINT_ERROR(" (%s:%d)\n", FILE_physique__nitSimulation, 13);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Entity#dimensions= for (self: Entity, Dimensions_2d) */
void physique___physique__Entity___dimensions_61d(val* self, val* p0) {
self->attrs[COLOR_physique__nitSimulation__Entity___dimensions].val = p0; /* _dimensions on <self:Entity> */
RET_LABEL:;
}
/* method nitSimulation#Entity#mass for (self: Entity): Float */
double physique___physique__Entity___mass(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_physique__nitSimulation__Entity___mass].d; /* _mass on <self:Entity> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Entity#mass= for (self: Entity, Float) */
void physique___physique__Entity___mass_61d(val* self, double p0) {
self->attrs[COLOR_physique__nitSimulation__Entity___mass].d = p0; /* _mass on <self:Entity> */
RET_LABEL:;
}
/* method nitSimulation#Entity#is_dynamic for (self: Entity): Bool */
short int physique___physique__Entity___is_dynamic(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_physique__nitSimulation__Entity___is_dynamic].s; /* _is_dynamic on <self:Entity> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Entity#is_dynamic= for (self: Entity, Bool) */
void physique___physique__Entity___is_dynamic_61d(val* self, short int p0) {
self->attrs[COLOR_physique__nitSimulation__Entity___is_dynamic].s = p0; /* _is_dynamic on <self:Entity> */
RET_LABEL:;
}
/* method nitSimulation#Entity#is_moovable for (self: Entity): Bool */
short int physique___physique__Entity___is_moovable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_physique__nitSimulation__Entity___is_moovable].s; /* _is_moovable on <self:Entity> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Entity#is_moovable= for (self: Entity, Bool) */
void physique___physique__Entity___is_moovable_61d(val* self, short int p0) {
self->attrs[COLOR_physique__nitSimulation__Entity___is_moovable].s = p0; /* _is_moovable on <self:Entity> */
RET_LABEL:;
}
/* method nitSimulation#Entity#is_colision for (self: Entity): Bool */
short int physique___physique__Entity___is_colision(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_physique__nitSimulation__Entity___is_colision].s; /* _is_colision on <self:Entity> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Entity#is_colision= for (self: Entity, Bool) */
void physique___physique__Entity___is_colision_61d(val* self, short int p0) {
self->attrs[COLOR_physique__nitSimulation__Entity___is_colision].s = p0; /* _is_colision on <self:Entity> */
RET_LABEL:;
}
/* method nitSimulation#Entity#vector for (self: Entity): Vector_2d */
val* physique___physique__Entity___vector(val* self) {
val* var /* : Vector_2d */;
val* var1 /* : Vector_2d */;
var1 = self->attrs[COLOR_physique__nitSimulation__Entity___vector].val; /* _vector on <self:Entity> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vector");
PRINT_ERROR(" (%s:%d)\n", FILE_physique__nitSimulation, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Entity#vector= for (self: Entity, Vector_2d) */
void physique___physique__Entity___vector_61d(val* self, val* p0) {
self->attrs[COLOR_physique__nitSimulation__Entity___vector].val = p0; /* _vector on <self:Entity> */
RET_LABEL:;
}
/* method nitSimulation#Entity#texture for (self: Entity): Texture */
val* physique___physique__Entity___texture(val* self) {
val* var /* : Texture */;
val* var1 /* : Texture */;
var1 = self->attrs[COLOR_physique__nitSimulation__Entity___texture].val; /* _texture on <self:Entity> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _texture");
PRINT_ERROR(" (%s:%d)\n", FILE_physique__nitSimulation, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Entity#texture= for (self: Entity, Texture) */
void physique___physique__Entity___texture_61d(val* self, val* p0) {
self->attrs[COLOR_physique__nitSimulation__Entity___texture].val = p0; /* _texture on <self:Entity> */
RET_LABEL:;
}
/* method nitSimulation#Entity#init for (self: Entity) */
void physique___physique__Entity___core__kernel__Object__init(val* self) {
val* var /* : Vector_2d */;
val* var1 /* : Dimensions_2d */;
{
((void(*)(val* self))(self->class->vft[COLOR_physique___physique__Entity___core__kernel__Object__init]))(self); /* init on <self:Entity>*/
}
var = NEW_physique__Vector_95d2d(&type_physique__Vector_95d2d);
{
((void(*)(val* self, double p0))(var->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var, 0.0); /* v_x= on <var:Vector_2d>*/
}
{
((void(*)(val* self, double p0))(var->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(var, 0.0); /* v_y= on <var:Vector_2d>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Vector_2d>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_physique__nitSimulation__Entity__vector_61d]))(self, var); /* vector= on <self:Entity>*/
}
var1 = NEW_physique__Dimensions_95d2d(&type_physique__Dimensions_95d2d);
{
((void(*)(val* self, double p0))(var1->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height_61d]))(var1, 0.0); /* height= on <var1:Dimensions_2d>*/
}
{
((void(*)(val* self, double p0))(var1->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width_61d]))(var1, 0.0); /* width= on <var1:Dimensions_2d>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Dimensions_2d>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_physique__nitSimulation__Entity__dimensions_61d]))(self, var1); /* dimensions= on <self:Entity>*/
}
RET_LABEL:;
}
/* method nitSimulation#Entity#dynamic for (self: Entity, Bool) */
void physique___physique__Entity___dynamic(val* self, short int p0) {
short int var_s /* var s: Bool */;
var_s = p0;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_physique__nitSimulation__Entity__is_dynamic_61d]))(self, var_s); /* is_dynamic= on <self:Entity>*/
}
RET_LABEL:;
}
/* method nitSimulation#Entity#update for (self: Entity, Float) */
void physique___physique__Entity___update(val* self, double p0) {
double var_dt /* var dt: Float */;
var_dt = p0;
{
((void(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__update_position]))(self); /* update_position on <self:Entity>*/
}
RET_LABEL:;
}
/* method nitSimulation#Entity#update_position for (self: Entity) */
void physique___physique__Entity___update_position(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Point3d[Float] */;
val* var_ /* var : Point3d[Float] */;
val* var5 /* : Numeric */;
val* var6 /* : Vector_2d */;
double var7 /* : Float */;
double var8 /* : Float */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var11 /* : Float */;
double var12 /* : Float */;
val* var13 /* : Numeric */;
val* var14 /* : Point3d[Float] */;
val* var_15 /* var : Point3d[Float] */;
val* var16 /* : Numeric */;
val* var17 /* : Vector_2d */;
double var18 /* : Float */;
double var19 /* : Float */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
double var25 /* : Float */;
double var26 /* : Float */;
val* var27 /* : Numeric */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__is_dynamic]))(self); /* is_dynamic on <self:Entity>*/
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
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Entity>*/
}
var_ = var4;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_); /* x on <var_:Point3d[Float]>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(self); /* vector on <self:Entity>*/
}
{
var7 = ((double(*)(val* self))(var6->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var6); /* v_x on <var6:Vector_2d>*/
}
{
{ /* Inline kernel#Float#+ (var5,var7) on <var5:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var7:Float> isa OTHER */
/* <var7:Float> isa OTHER */
var10 = 1; /* easy <var7:Float> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var11 = ((struct instance_core__Float*)var5)->value; /* autounbox from Numeric to Float */;
var12 = var11 + var7;
var8 = var12;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var13 = BOX_core__Float(var8); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var_, var13); /* x= on <var_:Point3d[Float]>*/
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Entity>*/
}
var_15 = var14;
{
var16 = ((val*(*)(val* self))(var_15->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_15); /* y on <var_15:Point3d[Float]>*/
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(self); /* vector on <self:Entity>*/
}
{
var18 = ((double(*)(val* self))(var17->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var17); /* v_y on <var17:Vector_2d>*/
}
{
{ /* Inline kernel#Float#+ (var16,var18) on <var16:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var18:Float> isa OTHER */
/* <var18:Float> isa OTHER */
var21 = 1; /* easy <var18:Float> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var25 = ((struct instance_core__Float*)var16)->value; /* autounbox from Numeric to Float */;
var26 = var25 + var18;
var19 = var26;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
var27 = BOX_core__Float(var19); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var_15->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var_15, var27); /* y= on <var_15:Point3d[Float]>*/
}
} else {
}
RET_LABEL:;
}
/* method nitSimulation#Entity#play_back for (self: Entity) */
void physique___physique__Entity___play_back(val* self) {
val* var /* : Point3d[Float] */;
val* var_ /* var : Point3d[Float] */;
val* var1 /* : Numeric */;
val* var2 /* : Vector_2d */;
double var3 /* : Float */;
double var4 /* : Float */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var7 /* : Float */;
double var8 /* : Float */;
val* var9 /* : Numeric */;
val* var10 /* : Point3d[Float] */;
val* var_11 /* var : Point3d[Float] */;
val* var12 /* : Numeric */;
val* var13 /* : Vector_2d */;
double var14 /* : Float */;
double var15 /* : Float */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
double var21 /* : Float */;
double var22 /* : Float */;
val* var23 /* : Numeric */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Entity>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_); /* x on <var_:Point3d[Float]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(self); /* vector on <self:Entity>*/
}
{
var3 = ((double(*)(val* self))(var2->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var2); /* v_x on <var2:Vector_2d>*/
}
{
{ /* Inline kernel#Float#- (var1,var3) on <var1:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var3:Float> isa OTHER */
/* <var3:Float> isa OTHER */
var6 = 1; /* easy <var3:Float> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var7 = ((struct instance_core__Float*)var1)->value; /* autounbox from Numeric to Float */;
var8 = var7 - var3;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var9 = BOX_core__Float(var4); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var_, var9); /* x= on <var_:Point3d[Float]>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Entity>*/
}
var_11 = var10;
{
var12 = ((val*(*)(val* self))(var_11->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_11); /* y on <var_11:Point3d[Float]>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(self); /* vector on <self:Entity>*/
}
{
var14 = ((double(*)(val* self))(var13->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var13); /* v_y on <var13:Vector_2d>*/
}
{
{ /* Inline kernel#Float#- (var12,var14) on <var12:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var14:Float> isa OTHER */
/* <var14:Float> isa OTHER */
var17 = 1; /* easy <var14:Float> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var21 = ((struct instance_core__Float*)var12)->value; /* autounbox from Numeric to Float */;
var22 = var21 - var14;
var15 = var22;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var23 = BOX_core__Float(var15); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var_11->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var_11, var23); /* y= on <var_11:Point3d[Float]>*/
}
RET_LABEL:;
}
/* method nitSimulation#Entity#set_vector for (self: Entity, Vector_2d) */
void physique___physique__Entity___set_vector(val* self, val* p0) {
val* var_v /* var v: Vector_2d */;
val* var /* : Vector_2d */;
double var1 /* : Float */;
val* var2 /* : Vector_2d */;
double var3 /* : Float */;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(self); /* vector on <self:Entity>*/
}
{
var1 = ((double(*)(val* self))(var_v->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var_v); /* v_x on <var_v:Vector_2d>*/
}
{
((void(*)(val* self, double p0))(var->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var, var1); /* v_x= on <var:Vector_2d>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(self); /* vector on <self:Entity>*/
}
{
var3 = ((double(*)(val* self))(var_v->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var_v); /* v_y on <var_v:Vector_2d>*/
}
{
((void(*)(val* self, double p0))(var2->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(var2, var3); /* v_y= on <var2:Vector_2d>*/
}
RET_LABEL:;
}
/* method nitSimulation#Entity#set_dimensions for (self: Entity, Dimensions_2d) */
void physique___physique__Entity___set_dimensions(val* self, val* p0) {
val* var_dimensions /* var dimensions: Dimensions_2d */;
val* var /* : Dimensions_2d */;
double var1 /* : Float */;
val* var2 /* : Dimensions_2d */;
double var3 /* : Float */;
var_dimensions = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(self); /* dimensions on <self:Entity>*/
}
{
var1 = ((double(*)(val* self))(var_dimensions->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height]))(var_dimensions); /* height on <var_dimensions:Dimensions_2d>*/
}
{
((void(*)(val* self, double p0))(var->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height_61d]))(var, var1); /* height= on <var:Dimensions_2d>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(self); /* dimensions on <self:Entity>*/
}
{
var3 = ((double(*)(val* self))(var_dimensions->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width]))(var_dimensions); /* width on <var_dimensions:Dimensions_2d>*/
}
{
((void(*)(val* self, double p0))(var2->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width_61d]))(var2, var3); /* width= on <var2:Dimensions_2d>*/
}
RET_LABEL:;
}
/* method nitSimulation#Shape#volume for (self: Shape): Float */
double physique___physique__Shape___volume(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_physique__nitSimulation__Shape___volume].d; /* _volume on <self:Shape> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Shape#volume= for (self: Shape, Float) */
void physique___physique__Shape___volume_61d(val* self, double p0) {
self->attrs[COLOR_physique__nitSimulation__Shape___volume].d = p0; /* _volume on <self:Shape> */
RET_LABEL:;
}
/* method nitSimulation#Shape#density for (self: Shape): Float */
double physique___physique__Shape___density(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_physique__nitSimulation__Shape___density].d; /* _density on <self:Shape> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Shape#density= for (self: Shape, Float) */
void physique___physique__Shape___density_61d(val* self, double p0) {
self->attrs[COLOR_physique__nitSimulation__Shape___density].d = p0; /* _density on <self:Shape> */
RET_LABEL:;
}
/* method nitSimulation#Shape#init for (self: Shape) */
void physique___physique__Shape___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_physique___physique__Shape___core__kernel__Object__init]))(self); /* init on <self:Shape>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Shape__compute_volume]))(self); /* compute_volume on <self:Shape>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Shape__compute_mass]))(self); /* compute_mass on <self:Shape>*/
}
RET_LABEL:;
}
/* method nitSimulation#Shape#check_outline for (self: Shape, Point3d[Float]): Bool */
short int physique___physique__Shape___check_outline(val* self, val* p0) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "check_outline", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_physique__nitSimulation, 81);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method nitSimulation#Shape#set_density for (self: Shape, Float) */
void physique___physique__Shape___set_density(val* self, double p0) {
double var_d /* var d: Float */;
var_d = p0;
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_physique__nitSimulation__Shape__density_61d]))(self, var_d); /* density= on <self:Shape>*/
}
RET_LABEL:;
}
/* method nitSimulation#Shape#compute_mass for (self: Shape) */
void physique___physique__Shape___compute_mass(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var5 /* : Float */;
{
var = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Shape__volume]))(self); /* volume on <self:Shape>*/
}
{
var1 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Shape__density]))(self); /* density on <self:Shape>*/
}
{
{ /* Inline kernel#Float#* (var,var1) on <var:Float> */
/* Covariant cast for argument 0 (i) <var1:Float> isa OTHER */
/* <var1:Float> isa OTHER */
var4 = 1; /* easy <var1:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var5 = var * var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_physique__nitSimulation__Entity__mass_61d]))(self, var2); /* mass= on <self:Shape>*/
}
RET_LABEL:;
}
/* method nitSimulation#Shape#compute_volume for (self: Shape) */
void physique___physique__Shape___compute_volume(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "compute_volume", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_physique__nitSimulation, 87);
fatal_exit(1);
RET_LABEL:;
}
/* method nitSimulation#Polygone#vertices for (self: Polygone): Array[Point3d[Float]] */
val* physique___physique__Polygone___vertices(val* self) {
val* var /* : Array[Point3d[Float]] */;
val* var1 /* : Array[Point3d[Float]] */;
var1 = self->attrs[COLOR_physique__nitSimulation__Polygone___vertices].val; /* _vertices on <self:Polygone> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vertices");
PRINT_ERROR(" (%s:%d)\n", FILE_physique__nitSimulation, 96);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Polygone#vertices= for (self: Polygone, Array[Point3d[Float]]) */
void physique___physique__Polygone___vertices_61d(val* self, val* p0) {
self->attrs[COLOR_physique__nitSimulation__Polygone___vertices].val = p0; /* _vertices on <self:Polygone> */
RET_LABEL:;
}
/* method nitSimulation#Polygone#init for (self: Polygone) */
void physique___physique__Polygone___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_physique___physique__Polygone___core__kernel__Object__init]))(self); /* init on <self:Polygone>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_physique__nitSimulation__Entity__is_dynamic_61d]))(self, 0); /* is_dynamic= on <self:Polygone>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_physique__nitSimulation__Entity__is_moovable_61d]))(self, 0); /* is_moovable= on <self:Polygone>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Polygone__compute_vertices]))(self); /* compute_vertices on <self:Polygone>*/
}
RET_LABEL:;
}
/* method nitSimulation#Polygone#compute_volume for (self: Polygone) */
void physique___physique__Polygone___Shape__compute_volume(val* self) {
val* var /* : Dimensions_2d */;
double var1 /* : Float */;
val* var2 /* : Dimensions_2d */;
double var3 /* : Float */;
double var4 /* : Float */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var7 /* : Float */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(self); /* dimensions on <self:Polygone>*/
}
{
var1 = ((double(*)(val* self))(var->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height]))(var); /* height on <var:Dimensions_2d>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(self); /* dimensions on <self:Polygone>*/
}
{
var3 = ((double(*)(val* self))(var2->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width]))(var2); /* width on <var2:Dimensions_2d>*/
}
{
{ /* Inline kernel#Float#* (var1,var3) on <var1:Float> */
/* Covariant cast for argument 0 (i) <var3:Float> isa OTHER */
/* <var3:Float> isa OTHER */
var6 = 1; /* easy <var3:Float> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var7 = var1 * var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_physique__nitSimulation__Shape__volume_61d]))(self, var4); /* volume= on <self:Polygone>*/
}
RET_LABEL:;
}
/* method nitSimulation#Polygone#compute_vertices for (self: Polygone) */
void physique___physique__Polygone___compute_vertices(val* self) {
val* var /* : Point3d[Float] */;
val* var_p /* var p: Point3d[Float] */;
val* var1 /* : Array[Point3d[Float]] */;
val* var2 /* : Point3d[Float] */;
val* var3 /* : Numeric */;
val* var4 /* : Dimensions_2d */;
double var5 /* : Float */;
double var6 /* : Float */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var9 /* : Float */;
double var10 /* : Float */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
double var16 /* : Float */;
double var17 /* : Float */;
double var18 /* : Float */;
val* var19 /* : Numeric */;
val* var20 /* : Dimensions_2d */;
double var21 /* : Float */;
double var22 /* : Float */;
double var23 /* : Float */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
double var29 /* : Float */;
double var30 /* : Float */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
double var36 /* : Float */;
double var37 /* : Float */;
val* var38 /* : Numeric */;
val* var39 /* : Numeric */;
val* var40 /* : Numeric */;
val* var41 /* : Array[Point3d[Float]] */;
val* var42 /* : Point3d[Float] */;
val* var43 /* : Numeric */;
val* var44 /* : Dimensions_2d */;
double var45 /* : Float */;
double var46 /* : Float */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
double var52 /* : Float */;
double var53 /* : Float */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
double var59 /* : Float */;
double var60 /* : Float */;
double var61 /* : Float */;
val* var62 /* : Numeric */;
val* var63 /* : Dimensions_2d */;
double var64 /* : Float */;
double var65 /* : Float */;
double var66 /* : Float */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
double var72 /* : Float */;
double var73 /* : Float */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
double var79 /* : Float */;
double var80 /* : Float */;
val* var81 /* : Numeric */;
val* var82 /* : Numeric */;
val* var83 /* : Numeric */;
val* var84 /* : Array[Point3d[Float]] */;
val* var85 /* : Point3d[Float] */;
val* var86 /* : Numeric */;
val* var87 /* : Dimensions_2d */;
double var88 /* : Float */;
double var89 /* : Float */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
double var95 /* : Float */;
double var96 /* : Float */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
double var102 /* : Float */;
double var103 /* : Float */;
double var104 /* : Float */;
val* var105 /* : Numeric */;
val* var106 /* : Dimensions_2d */;
double var107 /* : Float */;
double var108 /* : Float */;
double var109 /* : Float */;
short int var111 /* : Bool */;
int cltype112;
int idtype113;
const char* var_class_name114;
double var115 /* : Float */;
double var116 /* : Float */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
double var122 /* : Float */;
double var123 /* : Float */;
val* var124 /* : Numeric */;
val* var125 /* : Numeric */;
val* var126 /* : Numeric */;
val* var127 /* : Array[Point3d[Float]] */;
val* var128 /* : Point3d[Float] */;
val* var129 /* : Numeric */;
val* var130 /* : Dimensions_2d */;
double var131 /* : Float */;
double var132 /* : Float */;
short int var134 /* : Bool */;
int cltype135;
int idtype136;
const char* var_class_name137;
double var138 /* : Float */;
double var139 /* : Float */;
short int var141 /* : Bool */;
int cltype142;
int idtype143;
const char* var_class_name144;
double var145 /* : Float */;
double var146 /* : Float */;
double var147 /* : Float */;
val* var148 /* : Numeric */;
val* var149 /* : Dimensions_2d */;
double var150 /* : Float */;
double var151 /* : Float */;
double var152 /* : Float */;
short int var154 /* : Bool */;
int cltype155;
int idtype156;
const char* var_class_name157;
double var158 /* : Float */;
double var159 /* : Float */;
short int var161 /* : Bool */;
int cltype162;
int idtype163;
const char* var_class_name164;
double var165 /* : Float */;
double var166 /* : Float */;
val* var167 /* : Numeric */;
val* var168 /* : Numeric */;
val* var169 /* : Numeric */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Polygone>*/
}
var_p = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Polygone__vertices]))(self); /* vertices on <self:Polygone>*/
}
var2 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var3 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_p); /* x on <var_p:Point3d[Float]>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(self); /* dimensions on <self:Polygone>*/
}
{
var5 = ((double(*)(val* self))(var4->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width]))(var4); /* width on <var4:Dimensions_2d>*/
}
{
{ /* Inline kernel#Float#/ (var5,2.0) on <var5:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var8 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var9 = var5 / 2.0;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var3,var6) on <var3:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var6:Float> isa OTHER */
/* <var6:Float> isa OTHER */
var12 = 1; /* easy <var6:Float> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var16 = ((struct instance_core__Float*)var3)->value; /* autounbox from Numeric to Float */;
var17 = var16 - var6;
var10 = var17;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var18 = core___core__Float___Numeric__to_f(var10);
{
var19 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_p); /* y on <var_p:Point3d[Float]>*/
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(self); /* dimensions on <self:Polygone>*/
}
{
var21 = ((double(*)(val* self))(var20->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height]))(var20); /* height on <var20:Dimensions_2d>*/
}
var22 = core___core__Float___Numeric__to_f(2.0);
{
{ /* Inline kernel#Float#/ (var21,var22) on <var21:Float> */
/* Covariant cast for argument 0 (i) <var22:Float> isa OTHER */
/* <var22:Float> isa OTHER */
var25 = 1; /* easy <var22:Float> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var29 = var21 / var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var19,var23) on <var19:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var23:Float> isa OTHER */
/* <var23:Float> isa OTHER */
var32 = 1; /* easy <var23:Float> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var36 = ((struct instance_core__Float*)var19)->value; /* autounbox from Numeric to Float */;
var37 = var36 + var23;
var30 = var37;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
var38 = BOX_core__Float(var18); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var2, var38); /* x= on <var2:Point3d[Float]>*/
}
{
var39 = BOX_core__Float(var30); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var2, var39); /* y= on <var2:Point3d[Float]>*/
}
{
var40 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var2, var40); /* z= on <var2:Point3d[Float]>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:Point3d[Float]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var1, var2); /* add on <var1:Array[Point3d[Float]]>*/
}
{
var41 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Polygone__vertices]))(self); /* vertices on <self:Polygone>*/
}
var42 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var43 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_p); /* x on <var_p:Point3d[Float]>*/
}
{
var44 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(self); /* dimensions on <self:Polygone>*/
}
{
var45 = ((double(*)(val* self))(var44->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width]))(var44); /* width on <var44:Dimensions_2d>*/
}
{
{ /* Inline kernel#Float#/ (var45,2.0) on <var45:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var48 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var52 = var45 / 2.0;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var43,var46) on <var43:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var46:Float> isa OTHER */
/* <var46:Float> isa OTHER */
var55 = 1; /* easy <var46:Float> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var59 = ((struct instance_core__Float*)var43)->value; /* autounbox from Numeric to Float */;
var60 = var59 + var46;
var53 = var60;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var61 = core___core__Float___Numeric__to_f(var53);
{
var62 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_p); /* y on <var_p:Point3d[Float]>*/
}
{
var63 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(self); /* dimensions on <self:Polygone>*/
}
{
var64 = ((double(*)(val* self))(var63->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height]))(var63); /* height on <var63:Dimensions_2d>*/
}
var65 = core___core__Float___Numeric__to_f(2.0);
{
{ /* Inline kernel#Float#/ (var64,var65) on <var64:Float> */
/* Covariant cast for argument 0 (i) <var65:Float> isa OTHER */
/* <var65:Float> isa OTHER */
var68 = 1; /* easy <var65:Float> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var72 = var64 / var65;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var62,var66) on <var62:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var66:Float> isa OTHER */
/* <var66:Float> isa OTHER */
var75 = 1; /* easy <var66:Float> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var79 = ((struct instance_core__Float*)var62)->value; /* autounbox from Numeric to Float */;
var80 = var79 + var66;
var73 = var80;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
{
var81 = BOX_core__Float(var61); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var42, var81); /* x= on <var42:Point3d[Float]>*/
}
{
var82 = BOX_core__Float(var73); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var42, var82); /* y= on <var42:Point3d[Float]>*/
}
{
var83 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var42, var83); /* z= on <var42:Point3d[Float]>*/
}
{
((void(*)(val* self))(var42->class->vft[COLOR_core__kernel__Object__init]))(var42); /* init on <var42:Point3d[Float]>*/
}
{
((void(*)(val* self, val* p0))(var41->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var41, var42); /* add on <var41:Array[Point3d[Float]]>*/
}
{
var84 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Polygone__vertices]))(self); /* vertices on <self:Polygone>*/
}
var85 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var86 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_p); /* x on <var_p:Point3d[Float]>*/
}
{
var87 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(self); /* dimensions on <self:Polygone>*/
}
{
var88 = ((double(*)(val* self))(var87->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width]))(var87); /* width on <var87:Dimensions_2d>*/
}
{
{ /* Inline kernel#Float#/ (var88,2.0) on <var88:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var91 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var95 = var88 / 2.0;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var86,var89) on <var86:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var89:Float> isa OTHER */
/* <var89:Float> isa OTHER */
var98 = 1; /* easy <var89:Float> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var102 = ((struct instance_core__Float*)var86)->value; /* autounbox from Numeric to Float */;
var103 = var102 - var89;
var96 = var103;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var104 = core___core__Float___Numeric__to_f(var96);
{
var105 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_p); /* y on <var_p:Point3d[Float]>*/
}
{
var106 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(self); /* dimensions on <self:Polygone>*/
}
{
var107 = ((double(*)(val* self))(var106->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height]))(var106); /* height on <var106:Dimensions_2d>*/
}
var108 = core___core__Float___Numeric__to_f(2.0);
{
{ /* Inline kernel#Float#/ (var107,var108) on <var107:Float> */
/* Covariant cast for argument 0 (i) <var108:Float> isa OTHER */
/* <var108:Float> isa OTHER */
var111 = 1; /* easy <var108:Float> isa OTHER*/
if (unlikely(!var111)) {
var_class_name114 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name114);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var115 = var107 / var108;
var109 = var115;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var105,var109) on <var105:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var109:Float> isa OTHER */
/* <var109:Float> isa OTHER */
var118 = 1; /* easy <var109:Float> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var122 = ((struct instance_core__Float*)var105)->value; /* autounbox from Numeric to Float */;
var123 = var122 - var109;
var116 = var123;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
{
var124 = BOX_core__Float(var104); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var85->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var85, var124); /* x= on <var85:Point3d[Float]>*/
}
{
var125 = BOX_core__Float(var116); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var85->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var85, var125); /* y= on <var85:Point3d[Float]>*/
}
{
var126 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var85->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var85, var126); /* z= on <var85:Point3d[Float]>*/
}
{
((void(*)(val* self))(var85->class->vft[COLOR_core__kernel__Object__init]))(var85); /* init on <var85:Point3d[Float]>*/
}
{
((void(*)(val* self, val* p0))(var84->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var84, var85); /* add on <var84:Array[Point3d[Float]]>*/
}
{
var127 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Polygone__vertices]))(self); /* vertices on <self:Polygone>*/
}
var128 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var129 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_p); /* x on <var_p:Point3d[Float]>*/
}
{
var130 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(self); /* dimensions on <self:Polygone>*/
}
{
var131 = ((double(*)(val* self))(var130->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width]))(var130); /* width on <var130:Dimensions_2d>*/
}
{
{ /* Inline kernel#Float#/ (var131,2.0) on <var131:Float> */
/* Covariant cast for argument 0 (i) <2.0:Float> isa OTHER */
/* <2.0:Float> isa OTHER */
var134 = 1; /* easy <2.0:Float> isa OTHER*/
if (unlikely(!var134)) {
var_class_name137 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name137);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var138 = var131 / 2.0;
var132 = var138;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var129,var132) on <var129:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var132:Float> isa OTHER */
/* <var132:Float> isa OTHER */
var141 = 1; /* easy <var132:Float> isa OTHER*/
if (unlikely(!var141)) {
var_class_name144 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name144);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var145 = ((struct instance_core__Float*)var129)->value; /* autounbox from Numeric to Float */;
var146 = var145 + var132;
var139 = var146;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
}
var147 = core___core__Float___Numeric__to_f(var139);
{
var148 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_p); /* y on <var_p:Point3d[Float]>*/
}
{
var149 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__dimensions]))(self); /* dimensions on <self:Polygone>*/
}
{
var150 = ((double(*)(val* self))(var149->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height]))(var149); /* height on <var149:Dimensions_2d>*/
}
var151 = core___core__Float___Numeric__to_f(2.0);
{
{ /* Inline kernel#Float#/ (var150,var151) on <var150:Float> */
/* Covariant cast for argument 0 (i) <var151:Float> isa OTHER */
/* <var151:Float> isa OTHER */
var154 = 1; /* easy <var151:Float> isa OTHER*/
if (unlikely(!var154)) {
var_class_name157 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name157);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var158 = var150 / var151;
var152 = var158;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline kernel#Float#- (var148,var152) on <var148:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var152:Float> isa OTHER */
/* <var152:Float> isa OTHER */
var161 = 1; /* easy <var152:Float> isa OTHER*/
if (unlikely(!var161)) {
var_class_name164 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name164);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var165 = ((struct instance_core__Float*)var148)->value; /* autounbox from Numeric to Float */;
var166 = var165 - var152;
var159 = var166;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
}
{
var167 = BOX_core__Float(var147); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var128->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var128, var167); /* x= on <var128:Point3d[Float]>*/
}
{
var168 = BOX_core__Float(var159); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var128->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var128, var168); /* y= on <var128:Point3d[Float]>*/
}
{
var169 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var128->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var128, var169); /* z= on <var128:Point3d[Float]>*/
}
{
((void(*)(val* self))(var128->class->vft[COLOR_core__kernel__Object__init]))(var128); /* init on <var128:Point3d[Float]>*/
}
{
((void(*)(val* self, val* p0))(var127->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var127, var128); /* add on <var127:Array[Point3d[Float]]>*/
}
RET_LABEL:;
}
/* method nitSimulation#Polygone#check_outline for (self: Polygone, Point3d[Float]): Bool */
short int physique___physique__Polygone___Shape__check_outline(val* self, val* p0) {
short int var /* : Bool */;
val* var_p /* var p: Point3d[Float] */;
var_p = p0;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitSimulation#Circle#radius for (self: Circle): Float */
double physique___physique__Circle___radius(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_physique__nitSimulation__Circle___radius].d; /* _radius on <self:Circle> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Circle#radius= for (self: Circle, Float) */
void physique___physique__Circle___radius_61d(val* self, double p0) {
self->attrs[COLOR_physique__nitSimulation__Circle___radius].d = p0; /* _radius on <self:Circle> */
RET_LABEL:;
}
/* method nitSimulation#Circle#coef_elas for (self: Circle): Float */
double physique___physique__Circle___coef_elas(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_physique__nitSimulation__Circle___coef_elas].d; /* _coef_elas on <self:Circle> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Circle#coef_elas= for (self: Circle, Float) */
void physique___physique__Circle___coef_elas_61d(val* self, double p0) {
self->attrs[COLOR_physique__nitSimulation__Circle___coef_elas].d = p0; /* _coef_elas on <self:Circle> */
RET_LABEL:;
}
/* method nitSimulation#Circle#init for (self: Circle) */
void physique___physique__Circle___core__kernel__Object__init(val* self) {
val* var /* : Dimensions_2d */;
double var1 /* : Float */;
double var2 /* : Float */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var5 /* : Float */;
double var6 /* : Float */;
double var7 /* : Float */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
double var13 /* : Float */;
{
((void(*)(val* self))(self->class->vft[COLOR_physique___physique__Circle___core__kernel__Object__init]))(self); /* init on <self:Circle>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_physique__nitSimulation__Circle__radius_61d]))(self, 45.5); /* radius= on <self:Circle>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_physique__nitSimulation__Entity__is_dynamic_61d]))(self, 1); /* is_dynamic= on <self:Circle>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_physique__nitSimulation__Entity__is_moovable_61d]))(self, 0); /* is_moovable= on <self:Circle>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_physique__nitSimulation__Circle__coef_elas_61d]))(self, 0.20); /* coef_elas= on <self:Circle>*/
}
var = NEW_physique__Dimensions_95d2d(&type_physique__Dimensions_95d2d);
{
var1 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Circle__radius]))(self); /* radius on <self:Circle>*/
}
{
{ /* Inline kernel#Float#* (2.0,var1) on <2.0:Float> */
/* Covariant cast for argument 0 (i) <var1:Float> isa OTHER */
/* <var1:Float> isa OTHER */
var4 = 1; /* easy <var1:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var5 = 2.0 * var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var6 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Circle__radius]))(self); /* radius on <self:Circle>*/
}
{
{ /* Inline kernel#Float#* (2.0,var6) on <2.0:Float> */
/* Covariant cast for argument 0 (i) <var6:Float> isa OTHER */
/* <var6:Float> isa OTHER */
var9 = 1; /* easy <var6:Float> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var13 = 2.0 * var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, double p0))(var->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height_61d]))(var, var2); /* height= on <var:Dimensions_2d>*/
}
{
((void(*)(val* self, double p0))(var->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width_61d]))(var, var7); /* width= on <var:Dimensions_2d>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Dimensions_2d>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_physique__nitSimulation__Entity__set_dimensions]))(self, var); /* set_dimensions on <self:Circle>*/
}
RET_LABEL:;
}
/* method nitSimulation#Circle#set_elasticity for (self: Circle, Float) */
void physique___physique__Circle___set_elasticity(val* self, double p0) {
double var_e /* var e: Float */;
var_e = p0;
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_physique__nitSimulation__Circle__coef_elas_61d]))(self, var_e); /* coef_elas= on <self:Circle>*/
}
RET_LABEL:;
}
/* method nitSimulation#Circle#distance_topoint for (self: Circle, Point3d[Float]): Float */
double physique___physique__Circle___distance_topoint(val* self, val* p0) {
double var /* : Float */;
val* var_p /* var p: Point3d[Float] */;
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
val* var10 /* : Numeric */;
val* var11 /* : Point3d[Float] */;
val* var12 /* : Numeric */;
double var13 /* : Float */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
double var19 /* : Float */;
double var20 /* : Float */;
double var21 /* : Float */;
double var22 /* : Float */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
double var28 /* : Float */;
val* var29 /* : Numeric */;
val* var30 /* : Point3d[Float] */;
val* var31 /* : Numeric */;
double var32 /* : Float */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
double var38 /* : Float */;
double var39 /* : Float */;
double var40 /* : Float */;
val* var41 /* : Numeric */;
val* var42 /* : Point3d[Float] */;
val* var43 /* : Numeric */;
double var44 /* : Float */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
double var50 /* : Float */;
double var51 /* : Float */;
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
var_p = p0;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_p); /* x on <var_p:Point3d[Float]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Circle>*/
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
{
var10 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_p); /* x on <var_p:Point3d[Float]>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Circle>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var11); /* x on <var11:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#- (var10,var12) on <var10:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var12:Numeric(Float)> isa OTHER */
/* <var12:Numeric(Float)> isa OTHER */
var15 = 1; /* easy <var12:Numeric(Float)> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = var12 == NULL ? "null" : (((long)var12&3)?type_info[((long)var12&3)]:var12->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var19 = ((struct instance_core__Float*)var10)->value; /* autounbox from Numeric to Float */;
var20 = ((struct instance_core__Float*)var12)->value; /* autounbox from Numeric to Float */;
var21 = var19 - var20;
var13 = var21;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var4,var13) on <var4:Float> */
/* Covariant cast for argument 0 (i) <var13:Float> isa OTHER */
/* <var13:Float> isa OTHER */
var24 = 1; /* easy <var13:Float> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var28 = var4 * var13;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
var29 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_p); /* y on <var_p:Point3d[Float]>*/
}
{
var30 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Circle>*/
}
{
var31 = ((val*(*)(val* self))(var30->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var30); /* y on <var30:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#- (var29,var31) on <var29:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var31:Numeric(Float)> isa OTHER */
/* <var31:Numeric(Float)> isa OTHER */
var34 = 1; /* easy <var31:Numeric(Float)> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = var31 == NULL ? "null" : (((long)var31&3)?type_info[((long)var31&3)]:var31->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var38 = ((struct instance_core__Float*)var29)->value; /* autounbox from Numeric to Float */;
var39 = ((struct instance_core__Float*)var31)->value; /* autounbox from Numeric to Float */;
var40 = var38 - var39;
var32 = var40;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
var41 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_p); /* y on <var_p:Point3d[Float]>*/
}
{
var42 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Circle>*/
}
{
var43 = ((val*(*)(val* self))(var42->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var42); /* y on <var42:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#- (var41,var43) on <var41:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var43:Numeric(Float)> isa OTHER */
/* <var43:Numeric(Float)> isa OTHER */
var46 = 1; /* easy <var43:Numeric(Float)> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = var43 == NULL ? "null" : (((long)var43&3)?type_info[((long)var43&3)]:var43->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var50 = ((struct instance_core__Float*)var41)->value; /* autounbox from Numeric to Float */;
var51 = ((struct instance_core__Float*)var43)->value; /* autounbox from Numeric to Float */;
var52 = var50 - var51;
var44 = var52;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var32,var44) on <var32:Float> */
/* Covariant cast for argument 0 (i) <var44:Float> isa OTHER */
/* <var44:Float> isa OTHER */
var55 = 1; /* easy <var44:Float> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var59 = var32 * var44;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var22,var53) on <var22:Float> */
/* Covariant cast for argument 0 (i) <var53:Float> isa OTHER */
/* <var53:Float> isa OTHER */
var62 = 1; /* easy <var53:Float> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var66 = var22 + var53;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var67 = core__math___Float___sqrt(var60);
var = var67;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitSimulation#Circle#compute_volume for (self: Circle) */
void physique___physique__Circle___Shape__compute_volume(val* self) {
double var /* : Float */;
double var1 /* : Float */;
double var2 /* : Float */;
double var3 /* : Float */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var6 /* : Float */;
{
var = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Shape__density]))(self); /* density on <self:Circle>*/
}
{
var1 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Circle__radius]))(self); /* radius on <self:Circle>*/
}
var2 = core__math___Float___pow(var1, 2.0);
{
{ /* Inline kernel#Float#* (var,var2) on <var:Float> */
/* Covariant cast for argument 0 (i) <var2:Float> isa OTHER */
/* <var2:Float> isa OTHER */
var5 = 1; /* easy <var2:Float> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var6 = var * var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_physique__nitSimulation__Shape__volume_61d]))(self, var3); /* volume= on <self:Circle>*/
}
RET_LABEL:;
}
/* method nitSimulation#Circle#check_outline for (self: Circle, Point3d[Float]): Bool */
short int physique___physique__Circle___Shape__check_outline(val* self, val* p0) {
short int var /* : Bool */;
val* var_p /* var p: Point3d[Float] */;
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
val* var10 /* : Numeric */;
val* var11 /* : Point3d[Float] */;
val* var12 /* : Numeric */;
double var13 /* : Float */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
double var19 /* : Float */;
double var20 /* : Float */;
double var21 /* : Float */;
double var22 /* : Float */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
double var28 /* : Float */;
val* var29 /* : Numeric */;
val* var30 /* : Point3d[Float] */;
val* var31 /* : Numeric */;
double var32 /* : Float */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
double var38 /* : Float */;
double var39 /* : Float */;
double var40 /* : Float */;
val* var41 /* : Numeric */;
val* var42 /* : Point3d[Float] */;
val* var43 /* : Numeric */;
double var44 /* : Float */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
double var50 /* : Float */;
double var51 /* : Float */;
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
double var_distance /* var distance: Float */;
short int var68 /* : Bool */;
double var69 /* : Float */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
short int var_ /* var : Bool */;
double var77 /* : Float */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
var_p = p0;
{
var1 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_p); /* x on <var_p:Point3d[Float]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Circle>*/
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
{
var10 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_p); /* x on <var_p:Point3d[Float]>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Circle>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var11); /* x on <var11:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#- (var10,var12) on <var10:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var12:Numeric(Float)> isa OTHER */
/* <var12:Numeric(Float)> isa OTHER */
var15 = 1; /* easy <var12:Numeric(Float)> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = var12 == NULL ? "null" : (((long)var12&3)?type_info[((long)var12&3)]:var12->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var19 = ((struct instance_core__Float*)var10)->value; /* autounbox from Numeric to Float */;
var20 = ((struct instance_core__Float*)var12)->value; /* autounbox from Numeric to Float */;
var21 = var19 - var20;
var13 = var21;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var4,var13) on <var4:Float> */
/* Covariant cast for argument 0 (i) <var13:Float> isa OTHER */
/* <var13:Float> isa OTHER */
var24 = 1; /* easy <var13:Float> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var28 = var4 * var13;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
var29 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_p); /* y on <var_p:Point3d[Float]>*/
}
{
var30 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Circle>*/
}
{
var31 = ((val*(*)(val* self))(var30->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var30); /* y on <var30:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#- (var29,var31) on <var29:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var31:Numeric(Float)> isa OTHER */
/* <var31:Numeric(Float)> isa OTHER */
var34 = 1; /* easy <var31:Numeric(Float)> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = var31 == NULL ? "null" : (((long)var31&3)?type_info[((long)var31&3)]:var31->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var38 = ((struct instance_core__Float*)var29)->value; /* autounbox from Numeric to Float */;
var39 = ((struct instance_core__Float*)var31)->value; /* autounbox from Numeric to Float */;
var40 = var38 - var39;
var32 = var40;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
var41 = ((val*(*)(val* self))(var_p->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_p); /* y on <var_p:Point3d[Float]>*/
}
{
var42 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Circle>*/
}
{
var43 = ((val*(*)(val* self))(var42->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var42); /* y on <var42:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#- (var41,var43) on <var41:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var43:Numeric(Float)> isa OTHER */
/* <var43:Numeric(Float)> isa OTHER */
var46 = 1; /* easy <var43:Numeric(Float)> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = var43 == NULL ? "null" : (((long)var43&3)?type_info[((long)var43&3)]:var43->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var50 = ((struct instance_core__Float*)var41)->value; /* autounbox from Numeric to Float */;
var51 = ((struct instance_core__Float*)var43)->value; /* autounbox from Numeric to Float */;
var52 = var50 - var51;
var44 = var52;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var32,var44) on <var32:Float> */
/* Covariant cast for argument 0 (i) <var44:Float> isa OTHER */
/* <var44:Float> isa OTHER */
var55 = 1; /* easy <var44:Float> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var59 = var32 * var44;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var22,var53) on <var22:Float> */
/* Covariant cast for argument 0 (i) <var53:Float> isa OTHER */
/* <var53:Float> isa OTHER */
var62 = 1; /* easy <var53:Float> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var66 = var22 + var53;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var67 = core__math___Float___sqrt(var60);
var_distance = var67;
{
var69 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Circle__radius]))(self); /* radius on <self:Circle>*/
}
{
{ /* Inline kernel#Float#< (var_distance,var69) on <var_distance:Float> */
/* Covariant cast for argument 0 (i) <var69:Float> isa OTHER */
/* <var69:Float> isa OTHER */
var72 = 1; /* easy <var69:Float> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 530);
fatal_exit(1);
}
var76 = var_distance < var69;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_ = var70;
if (var70){
var68 = var_;
} else {
{
var77 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Circle__radius]))(self); /* radius on <self:Circle>*/
}
{
{ /* Inline kernel#Float#== (var_distance,var77) on <var_distance:Float> */
var80 = var_distance == var77;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var68 = var78;
}
if (var68){
var = 1;
goto RET_LABEL;
} else {
var = 0;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method nitSimulation#Player#name for (self: Player): String */
val* physique___physique__Player___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_physique__nitSimulation__Player___name].val; /* _name on <self:Player> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_physique__nitSimulation, 171);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitSimulation#Player#name= for (self: Player, String) */
void physique___physique__Player___name_61d(val* self, val* p0) {
self->attrs[COLOR_physique__nitSimulation__Player___name].val = p0; /* _name on <self:Player> */
RET_LABEL:;
}
/* method nitSimulation#Player#init for (self: Player) */
void physique___physique__Player___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_physique___physique__Player___core__kernel__Object__init]))(self); /* init on <self:Player>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_physique__nitSimulation__Entity__is_dynamic_61d]))(self, 0); /* is_dynamic= on <self:Player>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_physique__nitSimulation__Entity__is_moovable_61d]))(self, 1); /* is_moovable= on <self:Player>*/
}
RET_LABEL:;
}
/* method nitSimulation#Player#update_position for (self: Player) */
void physique___physique__Player___Entity__update_position(val* self) {
val* var /* : Point3d[Float] */;
val* var_ /* var : Point3d[Float] */;
val* var1 /* : Numeric */;
val* var2 /* : Vector_2d */;
double var3 /* : Float */;
double var4 /* : Float */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var7 /* : Float */;
double var8 /* : Float */;
val* var9 /* : Numeric */;
val* var10 /* : Point3d[Float] */;
val* var_11 /* var : Point3d[Float] */;
val* var12 /* : Numeric */;
val* var13 /* : Vector_2d */;
double var14 /* : Float */;
double var15 /* : Float */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
double var21 /* : Float */;
double var22 /* : Float */;
val* var23 /* : Numeric */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Player>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_); /* x on <var_:Point3d[Float]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(self); /* vector on <self:Player>*/
}
{
var3 = ((double(*)(val* self))(var2->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var2); /* v_x on <var2:Vector_2d>*/
}
{
{ /* Inline kernel#Float#+ (var1,var3) on <var1:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var3:Float> isa OTHER */
/* <var3:Float> isa OTHER */
var6 = 1; /* easy <var3:Float> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var7 = ((struct instance_core__Float*)var1)->value; /* autounbox from Numeric to Float */;
var8 = var7 + var3;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var9 = BOX_core__Float(var4); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var_, var9); /* x= on <var_:Point3d[Float]>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Player>*/
}
var_11 = var10;
{
var12 = ((val*(*)(val* self))(var_11->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var_11); /* y on <var_11:Point3d[Float]>*/
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(self); /* vector on <self:Player>*/
}
{
var14 = ((double(*)(val* self))(var13->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y]))(var13); /* v_y on <var13:Vector_2d>*/
}
{
{ /* Inline kernel#Float#+ (var12,var14) on <var12:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <var14:Float> isa OTHER */
/* <var14:Float> isa OTHER */
var17 = 1; /* easy <var14:Float> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var21 = ((struct instance_core__Float*)var12)->value; /* autounbox from Numeric to Float */;
var22 = var21 + var14;
var15 = var22;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var23 = BOX_core__Float(var15); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var_11->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var_11, var23); /* y= on <var_11:Point3d[Float]>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Player__check_limit]))(self); /* check_limit on <self:Player>*/
}
RET_LABEL:;
}
/* method nitSimulation#Player#check_limit for (self: Player) */
void physique___physique__Player___check_limit(val* self) {
val* var /* : Point3d[Float] */;
val* var1 /* : Numeric */;
double var2 /* : Float */;
double var3 /* : Float */;
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
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
double var22 /* : Float */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
val* var30 /* : Point3d[Float] */;
val* var31 /* : Numeric */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
double var38 /* : Float */;
short int var39 /* : Bool */;
val* var40 /* : Vector_2d */;
val* var41 /* : Vector_2d */;
double var42 /* : Float */;
double var43 /* : Float */;
double var45 /* : Float */;
double var46 /* : Float */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
double var52 /* : Float */;
val* var53 /* : Point3d[Float] */;
val* var_ /* var : Point3d[Float] */;
val* var54 /* : Numeric */;
double var55 /* : Float */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
double var61 /* : Float */;
double var62 /* : Float */;
val* var63 /* : Numeric */;
val* var64 /* : Vector_2d */;
val* var65 /* : Vector_2d */;
double var66 /* : Float */;
double var67 /* : Float */;
double var69 /* : Float */;
double var70 /* : Float */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
double var76 /* : Float */;
val* var77 /* : Point3d[Float] */;
val* var_78 /* var : Point3d[Float] */;
val* var79 /* : Numeric */;
double var80 /* : Float */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
double var86 /* : Float */;
double var87 /* : Float */;
val* var88 /* : Numeric */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Player>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var); /* x on <var:Point3d[Float]>*/
}
var3 = ((struct instance_core__Float*)var1)->value; /* autounbox from Numeric to Float */;
var2 = core__math___Float___abs(var3);
{
var4 = ((double(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Circle__radius]))(self); /* radius on <self:Player>*/
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
{ /* Inline kernel#Float#+ (var2,var5) on <var2:Float> */
/* Covariant cast for argument 0 (i) <var5:Float> isa OTHER */
/* <var5:Float> isa OTHER */
var11 = 1; /* easy <var5:Float> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var15 = var2 + var5;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Float#- (340.0,50.0) on <340.0:Float> */
/* Covariant cast for argument 0 (i) <50.0:Float> isa OTHER */
/* <50.0:Float> isa OTHER */
var18 = 1; /* easy <50.0:Float> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var22 = 340.0 - 50.0;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Float#> (var9,var16) on <var9:Float> */
/* Covariant cast for argument 0 (i) <var16:Float> isa OTHER */
/* <var16:Float> isa OTHER */
var25 = 1; /* easy <var16:Float> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 532);
fatal_exit(1);
}
var29 = var9 > var16;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
var30 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Player>*/
}
{
var31 = ((val*(*)(val* self))(var30->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var30); /* x on <var30:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#> (var31,0.0) on <var31:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var34 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 532);
fatal_exit(1);
}
var38 = ((struct instance_core__Float*)var31)->value; /* autounbox from Numeric to Float */;
var39 = var38 > 0.0;
var32 = var39;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
{
var40 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(self); /* vector on <self:Player>*/
}
{
var41 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(self); /* vector on <self:Player>*/
}
{
var42 = ((double(*)(val* self))(var41->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var41); /* v_x on <var41:Vector_2d>*/
}
{
{ /* Inline kernel#Float#unary - (2.0) on <2.0:Float> */
var45 = -2.0;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var42,var43) on <var42:Float> */
/* Covariant cast for argument 0 (i) <var43:Float> isa OTHER */
/* <var43:Float> isa OTHER */
var48 = 1; /* easy <var43:Float> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var52 = var42 / var43;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
((void(*)(val* self, double p0))(var40->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var40, var46); /* v_x= on <var40:Vector_2d>*/
}
{
var53 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Player>*/
}
var_ = var53;
{
var54 = ((val*(*)(val* self))(var_->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_); /* x on <var_:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#- (var54,10.0) on <var54:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <10.0:Float> isa OTHER */
/* <10.0:Float> isa OTHER */
var57 = 1; /* easy <10.0:Float> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var61 = ((struct instance_core__Float*)var54)->value; /* autounbox from Numeric to Float */;
var62 = var61 - 10.0;
var55 = var62;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
{
var63 = BOX_core__Float(var55); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var_, var63); /* x= on <var_:Point3d[Float]>*/
}
} else {
{
var64 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(self); /* vector on <self:Player>*/
}
{
var65 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(self); /* vector on <self:Player>*/
}
{
var66 = ((double(*)(val* self))(var65->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var65); /* v_x on <var65:Vector_2d>*/
}
{
{ /* Inline kernel#Float#unary - (2.0) on <2.0:Float> */
var69 = -2.0;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var66,var67) on <var66:Float> */
/* Covariant cast for argument 0 (i) <var67:Float> isa OTHER */
/* <var67:Float> isa OTHER */
var72 = 1; /* easy <var67:Float> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var76 = var66 / var67;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
{
((void(*)(val* self, double p0))(var64->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var64, var70); /* v_x= on <var64:Vector_2d>*/
}
{
var77 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__nitSimulation__Entity__position]))(self); /* position on <self:Player>*/
}
var_78 = var77;
{
var79 = ((val*(*)(val* self))(var_78->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var_78); /* x on <var_78:Point3d[Float]>*/
}
{
{ /* Inline kernel#Float#+ (var79,10.0) on <var79:Numeric(Float)> */
/* Covariant cast for argument 0 (i) <10.0:Float> isa OTHER */
/* <10.0:Float> isa OTHER */
var82 = 1; /* easy <10.0:Float> isa OTHER*/
if (unlikely(!var82)) {
var_class_name85 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var86 = ((struct instance_core__Float*)var79)->value; /* autounbox from Numeric to Float */;
var87 = var86 + 10.0;
var80 = var87;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
{
var88 = BOX_core__Float(var80); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var_78->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var_78, var88); /* x= on <var_78:Point3d[Float]>*/
}
}
} else {
}
RET_LABEL:;
}
