#include "physique__engine.sep.0.h"
/* method engine#App#maximum_fps for (self: App): Float */
double physique__engine___app__App___maximum_fps(val* self) {
double var /* : Float */;
var = 60.0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method engine#App#world for (self: App): World */
val* physique__engine___app__App___world(val* self) {
val* var /* : World */;
val* var1 /* : World */;
var1 = self->attrs[COLOR_physique__engine__App___world].val; /* _world on <self:App> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _world");
PRINT_ERROR(" (%s:%d)\n", FILE_physique__engine, 16);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method engine#App#world= for (self: App, World) */
void physique__engine___app__App___world_61d(val* self, val* p0) {
self->attrs[COLOR_physique__engine__App___world].val = p0; /* _world on <self:App> */
RET_LABEL:;
}
/* method engine#App#entities for (self: App): Array[Entity] */
val* physique__engine___app__App___entities(val* self) {
val* var /* : Array[Entity] */;
val* var1 /* : Array[Entity] */;
var1 = self->attrs[COLOR_physique__engine__App___entities].val; /* _entities on <self:App> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _entities");
PRINT_ERROR(" (%s:%d)\n", FILE_physique__engine, 18);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method engine#App#entities= for (self: App, Array[Entity]) */
void physique__engine___app__App___entities_61d(val* self, val* p0) {
self->attrs[COLOR_physique__engine__App___entities].val = p0; /* _entities on <self:App> */
RET_LABEL:;
}
/* method engine#App#on_create for (self: App) */
void physique__engine___app__App___app__app_base__AppComponent__on_create(val* self) {
val* var /* : World */;
val* var1 /* : Gravity */;
{
((void(*)(val* self))(self->class->vft[COLOR_physique__engine___app__App___app__app_base__AppComponent__on_create]))(self); /* on_create on <self:App>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__world]))(self); /* world on <self:App>*/
}
var1 = NEW_physique__Gravity(&type_physique__Gravity);
{
((void(*)(val* self, double p0))(var1->class->vft[COLOR_physique__nitPhysics__Force__intensity_61d]))(var1, 0.0); /* intensity= on <var1:Gravity>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Gravity>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_physique__world__World__add_force]))(var, var1); /* add_force on <var:World>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_physique__engine__App__draw_walls]))(self); /* draw_walls on <self:App>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_physique__engine__App__draw_squars]))(self); /* draw_squars on <self:App>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_physique__engine__App__create_player]))(self); /* create_player on <self:App>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_physique__engine__App__load_world_entities]))(self); /* load_world_entities on <self:App>*/
}
RET_LABEL:;
}
/* method engine#App#update for (self: App, Float) */
void physique__engine___app__App___update(val* self, double p0) {
double var_dt /* var dt: Float */;
val* var /* : World */;
var_dt = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__world]))(self); /* world on <self:App>*/
}
{
((void(*)(val* self, double p0))(var->class->vft[COLOR_physique__world__World__update]))(var, var_dt); /* update on <var:World>*/
}
RET_LABEL:;
}
/* method engine#App#draw_walls for (self: App) */
void physique__engine___app__App___draw_walls(val* self) {
val* var /* : Polygone */;
val* var1 /* : Point3d[Float] */;
val* var2 /* : Numeric */;
val* var3 /* : Numeric */;
val* var4 /* : Numeric */;
val* var5 /* : Texture */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : Texture */;
val* var_wall_top /* var wall_top: Polygone */;
val* var10 /* : Polygone */;
val* var11 /* : Point3d[Float] */;
double var12 /* : Float */;
double var14 /* : Float */;
val* var15 /* : Numeric */;
val* var16 /* : Numeric */;
val* var17 /* : Numeric */;
val* var18 /* : Texture */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
val* var23 /* : Texture */;
val* var_wall_bottom /* var wall_bottom: Polygone */;
val* var24 /* : Polygone */;
val* var25 /* : Point3d[Float] */;
val* var26 /* : Numeric */;
val* var27 /* : Numeric */;
val* var28 /* : Numeric */;
val* var29 /* : Texture */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
val* var34 /* : Texture */;
val* var_wall_right /* var wall_right: Polygone */;
val* var35 /* : Polygone */;
val* var36 /* : Point3d[Float] */;
double var37 /* : Float */;
double var39 /* : Float */;
val* var40 /* : Numeric */;
val* var41 /* : Numeric */;
val* var42 /* : Numeric */;
val* var43 /* : Texture */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : String */;
val* var48 /* : Texture */;
val* var_wall_left /* var wall_left: Polygone */;
val* var49 /* : Dimensions_2d */;
val* var50 /* : Dimensions_2d */;
val* var51 /* : Dimensions_2d */;
val* var52 /* : Dimensions_2d */;
val* var53 /* : Array[Entity] */;
val* var54 /* : Array[Entity] */;
val* var55 /* : Array[Entity] */;
val* var56 /* : Array[Entity] */;
var = NEW_physique__Polygone(&type_physique__Polygone);
var1 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var2 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var1, var2); /* x= on <var1:Point3d[Float]>*/
}
{
var3 = BOX_core__Float(411.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var1, var3); /* y= on <var1:Point3d[Float]>*/
}
{
var4 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var1, var4); /* z= on <var1:Point3d[Float]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Point3d[Float]>*/
}
var5 = NEW_gamnit__Texture(&type_gamnit__Texture);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "images/wall_horizontal.jpg";
var8 = core__flat___NativeString___to_s_full(var7, 26l, 26l);
var6 = var8;
varonce = var6;
}
{
var9 = ((val*(*)(val* self, val* p0))(var5->class->vft[COLOR_gamnit__textures__Texture__new]))(var5, var6); /* new on <var5:Texture>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_physique__nitSimulation__Entity__position_61d]))(var, var1); /* position= on <var:Polygone>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_physique__nitSimulation__Entity__texture_61d]))(var, var9); /* texture= on <var:Polygone>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Polygone>*/
}
var_wall_top = var;
var10 = NEW_physique__Polygone(&type_physique__Polygone);
var11 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
{ /* Inline kernel#Float#unary - (411.0) on <411.0:Float> */
var14 = -411.0;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var15 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var11, var15); /* x= on <var11:Point3d[Float]>*/
}
{
var16 = BOX_core__Float(var12); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var11, var16); /* y= on <var11:Point3d[Float]>*/
}
{
var17 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var11, var17); /* z= on <var11:Point3d[Float]>*/
}
{
((void(*)(val* self))(var11->class->vft[COLOR_core__kernel__Object__init]))(var11); /* init on <var11:Point3d[Float]>*/
}
var18 = NEW_gamnit__Texture(&type_gamnit__Texture);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "images/wall_horizontal.jpg";
var22 = core__flat___NativeString___to_s_full(var21, 26l, 26l);
var20 = var22;
varonce19 = var20;
}
{
var23 = ((val*(*)(val* self, val* p0))(var18->class->vft[COLOR_gamnit__textures__Texture__new]))(var18, var20); /* new on <var18:Texture>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_physique__nitSimulation__Entity__position_61d]))(var10, var11); /* position= on <var10:Polygone>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_physique__nitSimulation__Entity__texture_61d]))(var10, var23); /* texture= on <var10:Polygone>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:Polygone>*/
}
var_wall_bottom = var10;
var24 = NEW_physique__Polygone(&type_physique__Polygone);
var25 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var26 = BOX_core__Float(411.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var25, var26); /* x= on <var25:Point3d[Float]>*/
}
{
var27 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var25, var27); /* y= on <var25:Point3d[Float]>*/
}
{
var28 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var25, var28); /* z= on <var25:Point3d[Float]>*/
}
{
((void(*)(val* self))(var25->class->vft[COLOR_core__kernel__Object__init]))(var25); /* init on <var25:Point3d[Float]>*/
}
var29 = NEW_gamnit__Texture(&type_gamnit__Texture);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "images/wall_vertical.jpg";
var33 = core__flat___NativeString___to_s_full(var32, 24l, 24l);
var31 = var33;
varonce30 = var31;
}
{
var34 = ((val*(*)(val* self, val* p0))(var29->class->vft[COLOR_gamnit__textures__Texture__new]))(var29, var31); /* new on <var29:Texture>*/
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_physique__nitSimulation__Entity__position_61d]))(var24, var25); /* position= on <var24:Polygone>*/
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_physique__nitSimulation__Entity__texture_61d]))(var24, var34); /* texture= on <var24:Polygone>*/
}
{
((void(*)(val* self))(var24->class->vft[COLOR_core__kernel__Object__init]))(var24); /* init on <var24:Polygone>*/
}
var_wall_right = var24;
var35 = NEW_physique__Polygone(&type_physique__Polygone);
var36 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
{ /* Inline kernel#Float#unary - (411.0) on <411.0:Float> */
var39 = -411.0;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
var40 = BOX_core__Float(var37); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var36, var40); /* x= on <var36:Point3d[Float]>*/
}
{
var41 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var36, var41); /* y= on <var36:Point3d[Float]>*/
}
{
var42 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var36, var42); /* z= on <var36:Point3d[Float]>*/
}
{
((void(*)(val* self))(var36->class->vft[COLOR_core__kernel__Object__init]))(var36); /* init on <var36:Point3d[Float]>*/
}
var43 = NEW_gamnit__Texture(&type_gamnit__Texture);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "images/wall_vertical.jpg";
var47 = core__flat___NativeString___to_s_full(var46, 24l, 24l);
var45 = var47;
varonce44 = var45;
}
{
var48 = ((val*(*)(val* self, val* p0))(var43->class->vft[COLOR_gamnit__textures__Texture__new]))(var43, var45); /* new on <var43:Texture>*/
}
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_physique__nitSimulation__Entity__position_61d]))(var35, var36); /* position= on <var35:Polygone>*/
}
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_physique__nitSimulation__Entity__texture_61d]))(var35, var48); /* texture= on <var35:Polygone>*/
}
{
((void(*)(val* self))(var35->class->vft[COLOR_core__kernel__Object__init]))(var35); /* init on <var35:Polygone>*/
}
var_wall_left = var35;
var49 = NEW_physique__Dimensions_95d2d(&type_physique__Dimensions_95d2d);
{
((void(*)(val* self, double p0))(var49->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height_61d]))(var49, 20.0); /* height= on <var49:Dimensions_2d>*/
}
{
((void(*)(val* self, double p0))(var49->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width_61d]))(var49, 800.0); /* width= on <var49:Dimensions_2d>*/
}
{
((void(*)(val* self))(var49->class->vft[COLOR_core__kernel__Object__init]))(var49); /* init on <var49:Dimensions_2d>*/
}
{
((void(*)(val* self, val* p0))(var_wall_top->class->vft[COLOR_physique__nitSimulation__Entity__set_dimensions]))(var_wall_top, var49); /* set_dimensions on <var_wall_top:Polygone>*/
}
var50 = NEW_physique__Dimensions_95d2d(&type_physique__Dimensions_95d2d);
{
((void(*)(val* self, double p0))(var50->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height_61d]))(var50, 20.0); /* height= on <var50:Dimensions_2d>*/
}
{
((void(*)(val* self, double p0))(var50->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width_61d]))(var50, 800.0); /* width= on <var50:Dimensions_2d>*/
}
{
((void(*)(val* self))(var50->class->vft[COLOR_core__kernel__Object__init]))(var50); /* init on <var50:Dimensions_2d>*/
}
{
((void(*)(val* self, val* p0))(var_wall_bottom->class->vft[COLOR_physique__nitSimulation__Entity__set_dimensions]))(var_wall_bottom, var50); /* set_dimensions on <var_wall_bottom:Polygone>*/
}
var51 = NEW_physique__Dimensions_95d2d(&type_physique__Dimensions_95d2d);
{
((void(*)(val* self, double p0))(var51->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height_61d]))(var51, 800.0); /* height= on <var51:Dimensions_2d>*/
}
{
((void(*)(val* self, double p0))(var51->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width_61d]))(var51, 20.0); /* width= on <var51:Dimensions_2d>*/
}
{
((void(*)(val* self))(var51->class->vft[COLOR_core__kernel__Object__init]))(var51); /* init on <var51:Dimensions_2d>*/
}
{
((void(*)(val* self, val* p0))(var_wall_right->class->vft[COLOR_physique__nitSimulation__Entity__set_dimensions]))(var_wall_right, var51); /* set_dimensions on <var_wall_right:Polygone>*/
}
var52 = NEW_physique__Dimensions_95d2d(&type_physique__Dimensions_95d2d);
{
((void(*)(val* self, double p0))(var52->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__height_61d]))(var52, 800.0); /* height= on <var52:Dimensions_2d>*/
}
{
((void(*)(val* self, double p0))(var52->class->vft[COLOR_physique__nitConstraints__Dimensions_95d2d__width_61d]))(var52, 20.0); /* width= on <var52:Dimensions_2d>*/
}
{
((void(*)(val* self))(var52->class->vft[COLOR_core__kernel__Object__init]))(var52); /* init on <var52:Dimensions_2d>*/
}
{
((void(*)(val* self, val* p0))(var_wall_left->class->vft[COLOR_physique__nitSimulation__Entity__set_dimensions]))(var_wall_left, var52); /* set_dimensions on <var_wall_left:Polygone>*/
}
{
var53 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
{
((void(*)(val* self, val* p0))(var53->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var53, var_wall_top); /* add on <var53:Array[Entity]>*/
}
{
var54 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var54, var_wall_bottom); /* add on <var54:Array[Entity]>*/
}
{
var55 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
{
((void(*)(val* self, val* p0))(var55->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var55, var_wall_right); /* add on <var55:Array[Entity]>*/
}
{
var56 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var56, var_wall_left); /* add on <var56:Array[Entity]>*/
}
RET_LABEL:;
}
/* method engine#App#draw_squars for (self: App) */
void physique__engine___app__App___draw_squars(val* self) {
val* var /* : Circle */;
val* var1 /* : Point3d[Float] */;
val* var2 /* : Numeric */;
val* var3 /* : Numeric */;
val* var4 /* : Numeric */;
val* var5 /* : Spritesheet */;
val* var6 /* : Texture */;
val* var_s1 /* var s1: Circle */;
double var_random /* var random: Float */;
val* var7 /* : Vector_2d */;
double var8 /* : Float */;
double var9 /* : Float */;
val* var10 /* : Array[Entity] */;
var = NEW_physique__Circle(&type_physique__Circle);
var1 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var2 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var1, var2); /* x= on <var1:Point3d[Float]>*/
}
{
var3 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var1, var3); /* y= on <var1:Point3d[Float]>*/
}
{
var4 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var1, var4); /* z= on <var1:Point3d[Float]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Point3d[Float]>*/
}
var5 = NEW_physique__Spritesheet(&type_physique__Spritesheet);
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:Spritesheet>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_physique__spritesheet__Spritesheet__ufo_green]))(var5); /* ufo_green on <var5:Spritesheet>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_physique__nitSimulation__Entity__position_61d]))(var, var1); /* position= on <var:Circle>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_physique__nitSimulation__Entity__texture_61d]))(var, var6); /* texture= on <var:Circle>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Circle>*/
}
var_s1 = var;
var_random = 10.0;
var7 = NEW_physique__Vector_95d2d(&type_physique__Vector_95d2d);
var8 = core__math___Float___rand(var_random);
var9 = core__math___Float___rand(var_random);
{
((void(*)(val* self, double p0))(var7->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var7, var8); /* v_x= on <var7:Vector_2d>*/
}
{
((void(*)(val* self, double p0))(var7->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(var7, var9); /* v_y= on <var7:Vector_2d>*/
}
{
((void(*)(val* self))(var7->class->vft[COLOR_core__kernel__Object__init]))(var7); /* init on <var7:Vector_2d>*/
}
{
((void(*)(val* self, val* p0))(var_s1->class->vft[COLOR_physique__nitSimulation__Entity__set_vector]))(var_s1, var7); /* set_vector on <var_s1:Circle>*/
}
{
((void(*)(val* self, double p0))(var_s1->class->vft[COLOR_physique__nitSimulation__Circle__set_elasticity]))(var_s1, 1.0); /* set_elasticity on <var_s1:Circle>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var10, var_s1); /* add on <var10:Array[Entity]>*/
}
RET_LABEL:;
}
/* method engine#App#create_player for (self: App) */
void physique__engine___app__App___create_player(val* self) {
val* var /* : Player */;
val* var1 /* : Point3d[Float] */;
double var2 /* : Float */;
double var4 /* : Float */;
val* var5 /* : Numeric */;
val* var6 /* : Numeric */;
val* var7 /* : Numeric */;
val* var8 /* : Spritesheet */;
val* var9 /* : Texture */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var_p1 /* var p1: Player */;
val* var13 /* : Player */;
val* var14 /* : Point3d[Float] */;
val* var15 /* : Numeric */;
val* var16 /* : Numeric */;
val* var17 /* : Numeric */;
val* var18 /* : Spritesheet */;
val* var19 /* : Texture */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
val* var_p2 /* var p2: Player */;
val* var24 /* : Vector_2d */;
val* var25 /* : Vector_2d */;
val* var26 /* : Sys */;
val* var27 /* : String */;
val* var28 /* : Array[Entity] */;
val* var29 /* : Array[Entity] */;
var = NEW_physique__Player(&type_physique__Player);
var1 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
{ /* Inline kernel#Float#unary - (300.0) on <300.0:Float> */
var4 = -300.0;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var5 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var1, var5); /* x= on <var1:Point3d[Float]>*/
}
{
var6 = BOX_core__Float(var2); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var1, var6); /* y= on <var1:Point3d[Float]>*/
}
{
var7 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var1, var7); /* z= on <var1:Point3d[Float]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Point3d[Float]>*/
}
var8 = NEW_physique__Spritesheet(&type_physique__Spritesheet);
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:Spritesheet>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_physique__spritesheet__Spritesheet__ufo_yellow]))(var8); /* ufo_yellow on <var8:Spritesheet>*/
}
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "player1";
var12 = core__flat___NativeString___to_s_full(var11, 7l, 7l);
var10 = var12;
varonce = var10;
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_physique__nitSimulation__Entity__position_61d]))(var, var1); /* position= on <var:Player>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_physique__nitSimulation__Entity__texture_61d]))(var, var9); /* texture= on <var:Player>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_physique__nitSimulation__Player__name_61d]))(var, var10); /* name= on <var:Player>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Player>*/
}
var_p1 = var;
var13 = NEW_physique__Player(&type_physique__Player);
var14 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var15 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var14, var15); /* x= on <var14:Point3d[Float]>*/
}
{
var16 = BOX_core__Float(300.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var14, var16); /* y= on <var14:Point3d[Float]>*/
}
{
var17 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var14, var17); /* z= on <var14:Point3d[Float]>*/
}
{
((void(*)(val* self))(var14->class->vft[COLOR_core__kernel__Object__init]))(var14); /* init on <var14:Point3d[Float]>*/
}
var18 = NEW_physique__Spritesheet(&type_physique__Spritesheet);
{
((void(*)(val* self))(var18->class->vft[COLOR_core__kernel__Object__init]))(var18); /* init on <var18:Spritesheet>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_physique__spritesheet__Spritesheet__ufo_yellow]))(var18); /* ufo_yellow on <var18:Spritesheet>*/
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "player2";
var23 = core__flat___NativeString___to_s_full(var22, 7l, 7l);
var21 = var23;
varonce20 = var21;
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_physique__nitSimulation__Entity__position_61d]))(var13, var14); /* position= on <var13:Player>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_physique__nitSimulation__Entity__texture_61d]))(var13, var19); /* texture= on <var13:Player>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_physique__nitSimulation__Player__name_61d]))(var13, var21); /* name= on <var13:Player>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:Player>*/
}
var_p2 = var13;
var24 = NEW_physique__Vector_95d2d(&type_physique__Vector_95d2d);
{
((void(*)(val* self, double p0))(var24->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var24, 0.0); /* v_x= on <var24:Vector_2d>*/
}
{
((void(*)(val* self, double p0))(var24->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(var24, 0.0); /* v_y= on <var24:Vector_2d>*/
}
{
((void(*)(val* self))(var24->class->vft[COLOR_core__kernel__Object__init]))(var24); /* init on <var24:Vector_2d>*/
}
{
((void(*)(val* self, val* p0))(var_p1->class->vft[COLOR_physique__nitSimulation__Entity__set_vector]))(var_p1, var24); /* set_vector on <var_p1:Player>*/
}
var25 = NEW_physique__Vector_95d2d(&type_physique__Vector_95d2d);
{
((void(*)(val* self, double p0))(var25->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var25, 0.0); /* v_x= on <var25:Vector_2d>*/
}
{
((void(*)(val* self, double p0))(var25->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_y_61d]))(var25, 0.0); /* v_y= on <var25:Vector_2d>*/
}
{
((void(*)(val* self))(var25->class->vft[COLOR_core__kernel__Object__init]))(var25); /* init on <var25:Vector_2d>*/
}
{
((void(*)(val* self, val* p0))(var_p2->class->vft[COLOR_physique__nitSimulation__Entity__set_vector]))(var_p2, var25); /* set_vector on <var_p2:Player>*/
}
var26 = glob_sys;
{
var27 = ((val*(*)(val* self))(var_p1->class->vft[COLOR_physique__nitSimulation__Player__name]))(var_p1); /* name on <var_p1:Player>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_core__file__Sys__print]))(var26, var27); /* print on <var26:Sys>*/
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var28, var_p1); /* add on <var28:Array[Entity]>*/
}
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
{
((void(*)(val* self, val* p0))(var29->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var29, var_p2); /* add on <var29:Array[Entity]>*/
}
RET_LABEL:;
}
/* method engine#App#load_world_entities for (self: App) */
void physique__engine___app__App___load_world_entities(val* self) {
val* var /* : Array[Entity] */;
val* var_ /* var : Array[Entity] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : IndexedIterator[Entity] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_e /* var e: Entity */;
val* var5 /* : World */;
val* var6 /* : World */;
val* var7 /* : Array[Entity] */;
val* var_8 /* var : Array[Entity] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : IndexedIterator[Entity] */;
short int var11 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_e14 /* var e: Entity */;
val* var15 /* : Sequence[Sprite] */;
val* var16 /* : Sprite */;
val* var17 /* : Texture */;
val* var18 /* : Point3d[Float] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Entity]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:IndexedIterator[Entity]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:IndexedIterator[Entity]>*/
}
var_e = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__world]))(self); /* world on <self:App>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_physique__world__World__add_entity]))(var5, var_e); /* add_entity on <var5:World>*/
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:IndexedIterator[Entity]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:IndexedIterator[Entity]>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__world]))(self); /* world on <self:App>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_physique__world__World__entities]))(var6); /* entities on <var6:World>*/
}
var_8 = var7;
{
var9 = ((val*(*)(val* self))(var_8->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_8); /* iterator on <var_8:Array[Entity]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:IndexedIterator[Entity]>*/
}
if (var11){
} else {
goto BREAK_label12;
}
{
var13 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:IndexedIterator[Entity]>*/
}
var_e14 = var13;
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__sprites]))(self); /* sprites on <self:App>*/
}
var16 = NEW_gamnit__Sprite(&type_gamnit__Sprite);
{
var17 = ((val*(*)(val* self))(var_e14->class->vft[COLOR_physique__nitSimulation__Entity__texture]))(var_e14); /* texture on <var_e14:Entity>*/
}
{
var18 = ((val*(*)(val* self))(var_e14->class->vft[COLOR_physique__nitSimulation__Entity__position]))(var_e14); /* position on <var_e14:Entity>*/
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_gamnit__flat__Sprite__texture_61d]))(var16, var17); /* texture= on <var16:Sprite>*/
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_gamnit__flat__Sprite__center_61d]))(var16, var18); /* center= on <var16:Sprite>*/
}
{
((void(*)(val* self))(var16->class->vft[COLOR_core__kernel__Object__init]))(var16); /* init on <var16:Sprite>*/
}
{
((void(*)(val* self, val* p0))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var15, var16); /* add on <var15:Sequence[Sprite]>*/
}
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:IndexedIterator[Entity]>*/
}
}
BREAK_label12: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:IndexedIterator[Entity]>*/
}
RET_LABEL:;
}
/* method engine#App#accept_event for (self: App, InputEvent): Bool */
short int physique__engine___app__App___accept_event(val* self, val* p0) {
short int var /* : Bool */;
val* var_event /* var event: InputEvent */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : Sys */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
double var7 /* : Float */;
double var_move /* var move: Float */;
double var8 /* : Float */;
double var_move2 /* var move2: Float */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : Array[Entity] */;
val* var_ /* var : Array[Entity] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : IndexedIterator[Entity] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_e /* var e: Entity */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
short int var_21 /* var : Bool */;
val* var22 /* : String */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : String */;
short int var26 /* : Bool */;
val* var27 /* : World */;
double var28 /* : Float */;
double var30 /* : Float */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : Array[Entity] */;
val* var_35 /* var : Array[Entity] */;
val* var36 /* : Iterator[nullable Object] */;
val* var_37 /* var : IndexedIterator[Entity] */;
short int var38 /* : Bool */;
val* var40 /* : nullable Object */;
val* var_e41 /* var e: Entity */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
short int var_46 /* var : Bool */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
short int var52 /* : Bool */;
val* var53 /* : World */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : Array[Entity] */;
val* var_58 /* var : Array[Entity] */;
val* var59 /* : Iterator[nullable Object] */;
val* var_60 /* var : IndexedIterator[Entity] */;
short int var61 /* : Bool */;
val* var63 /* : nullable Object */;
val* var_e64 /* var e: Entity */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
val* var68 /* : World */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : Array[Entity] */;
val* var_73 /* var : Array[Entity] */;
val* var74 /* : Iterator[nullable Object] */;
val* var_75 /* var : IndexedIterator[Entity] */;
short int var76 /* : Bool */;
val* var78 /* : nullable Object */;
val* var_e79 /* var e: Entity */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
short int var_84 /* var : Bool */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
short int var90 /* : Bool */;
val* var91 /* : World */;
double var92 /* : Float */;
double var94 /* : Float */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
val* var98 /* : Array[Entity] */;
val* var_99 /* var : Array[Entity] */;
val* var100 /* : Iterator[nullable Object] */;
val* var_101 /* var : IndexedIterator[Entity] */;
short int var102 /* : Bool */;
val* var104 /* : nullable Object */;
val* var_e105 /* var e: Entity */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
int cltype108;
int idtype109;
short int var_110 /* var : Bool */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
val* var115 /* : String */;
short int var116 /* : Bool */;
val* var117 /* : World */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
val* var121 /* : Array[Entity] */;
val* var_122 /* var : Array[Entity] */;
val* var123 /* : Iterator[nullable Object] */;
val* var_124 /* var : IndexedIterator[Entity] */;
short int var125 /* : Bool */;
val* var127 /* : nullable Object */;
val* var_e128 /* var e: Entity */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
val* var132 /* : World */;
var_event = p0;
/* <var_event:InputEvent> isa QuitEvent */
cltype = type_mnit__QuitEvent.color;
idtype = type_mnit__QuitEvent.id;
if(cltype >= (((long)var_event&3)?type_info[((long)var_event&3)]:var_event->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_event&3)?type_info[((long)var_event&3)]:var_event->type)->type_table[cltype] == idtype;
}
if (var1){
var2 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var2,0l) on <var2:Sys> */
exit(0l);
RET_LABEL3:(void)0;
}
}
} else {
/* <var_event:InputEvent> isa KeyEvent */
cltype5 = type_mnit__KeyEvent.color;
idtype6 = type_mnit__KeyEvent.id;
if(cltype5 >= (((long)var_event&3)?type_info[((long)var_event&3)]:var_event->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_event&3)?type_info[((long)var_event&3)]:var_event->type)->type_table[cltype5] == idtype6;
}
if (var4){
{
var7 = ((double(*)(val* self))((((long)var_event&3)?class_info[((long)var_event&3)]:var_event->class)->vft[COLOR_physique__engine__KeyEvent__move]))(var_event); /* move on <var_event:InputEvent(KeyEvent)>*/
}
var_move = var7;
{
var8 = ((double(*)(val* self))((((long)var_event&3)?class_info[((long)var_event&3)]:var_event->class)->vft[COLOR_physique__engine__KeyEvent__move_bis]))(var_event); /* move_bis on <var_event:InputEvent(KeyEvent)>*/
}
var_move2 = var8;
{
{ /* Inline kernel#Float#== (var_move,1.0) on <var_move:Float> */
var11 = var_move == 1.0;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
var_ = var12;
{
var13 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Entity]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:IndexedIterator[Entity]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:IndexedIterator[Entity]>*/
}
var_e = var16;
/* <var_e:Entity> isa Player */
cltype19 = type_physique__Player.color;
idtype20 = type_physique__Player.id;
if(cltype19 >= var_e->type->table_size) {
var18 = 0;
} else {
var18 = var_e->type->type_table[cltype19] == idtype20;
}
var_21 = var18;
if (var18){
{
var22 = ((val*(*)(val* self))(var_e->class->vft[COLOR_physique__nitSimulation__Player__name]))(var_e); /* name on <var_e:Entity(Player)>*/
}
if (likely(varonce!=NULL)) {
var23 = varonce;
} else {
var24 = "player1";
var25 = core__flat___NativeString___to_s_full(var24, 7l, 7l);
var23 = var25;
varonce = var23;
}
{
var26 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_core__kernel__Object___61d_61d]))(var22, var23); /* == on <var22:String>*/
}
var17 = var26;
} else {
var17 = var_21;
}
if (var17){
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__world]))(self); /* world on <self:App>*/
}
{
((void(*)(val* self, double p0, val* p1))(var27->class->vft[COLOR_physique__world__World__apply_event]))(var27, var_move, var_e); /* apply_event on <var27:World>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:IndexedIterator[Entity]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:IndexedIterator[Entity]>*/
}
} else {
{
{ /* Inline kernel#Float#unary - (1.0) on <1.0:Float> */
var30 = -1.0;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Float#== (var_move,var28) on <var_move:Float> */
var33 = var_move == var28;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
var34 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
var_35 = var34;
{
var36 = ((val*(*)(val* self))(var_35->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_35); /* iterator on <var_35:Array[Entity]>*/
}
var_37 = var36;
for(;;) {
{
var38 = ((short int(*)(val* self))((((long)var_37&3)?class_info[((long)var_37&3)]:var_37->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_37); /* is_ok on <var_37:IndexedIterator[Entity]>*/
}
if (var38){
} else {
goto BREAK_label39;
}
{
var40 = ((val*(*)(val* self))((((long)var_37&3)?class_info[((long)var_37&3)]:var_37->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_37); /* item on <var_37:IndexedIterator[Entity]>*/
}
var_e41 = var40;
/* <var_e41:Entity> isa Player */
cltype44 = type_physique__Player.color;
idtype45 = type_physique__Player.id;
if(cltype44 >= var_e41->type->table_size) {
var43 = 0;
} else {
var43 = var_e41->type->type_table[cltype44] == idtype45;
}
var_46 = var43;
if (var43){
{
var47 = ((val*(*)(val* self))(var_e41->class->vft[COLOR_physique__nitSimulation__Player__name]))(var_e41); /* name on <var_e41:Entity(Player)>*/
}
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "player1";
var51 = core__flat___NativeString___to_s_full(var50, 7l, 7l);
var49 = var51;
varonce48 = var49;
}
{
var52 = ((short int(*)(val* self, val* p0))(var47->class->vft[COLOR_core__kernel__Object___61d_61d]))(var47, var49); /* == on <var47:String>*/
}
var42 = var52;
} else {
var42 = var_46;
}
if (var42){
{
var53 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__world]))(self); /* world on <self:App>*/
}
{
((void(*)(val* self, double p0, val* p1))(var53->class->vft[COLOR_physique__world__World__apply_event]))(var53, var_move, var_e41); /* apply_event on <var53:World>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_37&3)?class_info[((long)var_37&3)]:var_37->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_37); /* next on <var_37:IndexedIterator[Entity]>*/
}
}
BREAK_label39: (void)0;
{
((void(*)(val* self))((((long)var_37&3)?class_info[((long)var_37&3)]:var_37->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_37); /* finish on <var_37:IndexedIterator[Entity]>*/
}
} else {
{
{ /* Inline kernel#Float#== (var_move,0.0) on <var_move:Float> */
var56 = var_move == 0.0;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (var54){
{
var57 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
var_58 = var57;
{
var59 = ((val*(*)(val* self))(var_58->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_58); /* iterator on <var_58:Array[Entity]>*/
}
var_60 = var59;
for(;;) {
{
var61 = ((short int(*)(val* self))((((long)var_60&3)?class_info[((long)var_60&3)]:var_60->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_60); /* is_ok on <var_60:IndexedIterator[Entity]>*/
}
if (var61){
} else {
goto BREAK_label62;
}
{
var63 = ((val*(*)(val* self))((((long)var_60&3)?class_info[((long)var_60&3)]:var_60->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_60); /* item on <var_60:IndexedIterator[Entity]>*/
}
var_e64 = var63;
/* <var_e64:Entity> isa Player */
cltype66 = type_physique__Player.color;
idtype67 = type_physique__Player.id;
if(cltype66 >= var_e64->type->table_size) {
var65 = 0;
} else {
var65 = var_e64->type->type_table[cltype66] == idtype67;
}
if (var65){
{
var68 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__world]))(self); /* world on <self:App>*/
}
{
((void(*)(val* self, double p0, val* p1))(var68->class->vft[COLOR_physique__world__World__apply_event]))(var68, var_move, var_e64); /* apply_event on <var68:World>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_60&3)?class_info[((long)var_60&3)]:var_60->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_60); /* next on <var_60:IndexedIterator[Entity]>*/
}
}
BREAK_label62: (void)0;
{
((void(*)(val* self))((((long)var_60&3)?class_info[((long)var_60&3)]:var_60->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_60); /* finish on <var_60:IndexedIterator[Entity]>*/
}
} else {
}
}
}
{
{ /* Inline kernel#Float#== (var_move2,1.0) on <var_move2:Float> */
var71 = var_move2 == 1.0;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
if (var69){
{
var72 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
var_73 = var72;
{
var74 = ((val*(*)(val* self))(var_73->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_73); /* iterator on <var_73:Array[Entity]>*/
}
var_75 = var74;
for(;;) {
{
var76 = ((short int(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_75); /* is_ok on <var_75:IndexedIterator[Entity]>*/
}
if (var76){
} else {
goto BREAK_label77;
}
{
var78 = ((val*(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_75); /* item on <var_75:IndexedIterator[Entity]>*/
}
var_e79 = var78;
/* <var_e79:Entity> isa Player */
cltype82 = type_physique__Player.color;
idtype83 = type_physique__Player.id;
if(cltype82 >= var_e79->type->table_size) {
var81 = 0;
} else {
var81 = var_e79->type->type_table[cltype82] == idtype83;
}
var_84 = var81;
if (var81){
{
var85 = ((val*(*)(val* self))(var_e79->class->vft[COLOR_physique__nitSimulation__Player__name]))(var_e79); /* name on <var_e79:Entity(Player)>*/
}
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "player2";
var89 = core__flat___NativeString___to_s_full(var88, 7l, 7l);
var87 = var89;
varonce86 = var87;
}
{
var90 = ((short int(*)(val* self, val* p0))(var85->class->vft[COLOR_core__kernel__Object___61d_61d]))(var85, var87); /* == on <var85:String>*/
}
var80 = var90;
} else {
var80 = var_84;
}
if (var80){
{
var91 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__world]))(self); /* world on <self:App>*/
}
{
((void(*)(val* self, double p0, val* p1))(var91->class->vft[COLOR_physique__world__World__apply_event]))(var91, var_move2, var_e79); /* apply_event on <var91:World>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_75); /* next on <var_75:IndexedIterator[Entity]>*/
}
}
BREAK_label77: (void)0;
{
((void(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_75); /* finish on <var_75:IndexedIterator[Entity]>*/
}
} else {
{
{ /* Inline kernel#Float#unary - (1.0) on <1.0:Float> */
var94 = -1.0;
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline kernel#Float#== (var_move2,var92) on <var_move2:Float> */
var97 = var_move2 == var92;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
if (var95){
{
var98 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
var_99 = var98;
{
var100 = ((val*(*)(val* self))(var_99->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_99); /* iterator on <var_99:Array[Entity]>*/
}
var_101 = var100;
for(;;) {
{
var102 = ((short int(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_101); /* is_ok on <var_101:IndexedIterator[Entity]>*/
}
if (var102){
} else {
goto BREAK_label103;
}
{
var104 = ((val*(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_101); /* item on <var_101:IndexedIterator[Entity]>*/
}
var_e105 = var104;
/* <var_e105:Entity> isa Player */
cltype108 = type_physique__Player.color;
idtype109 = type_physique__Player.id;
if(cltype108 >= var_e105->type->table_size) {
var107 = 0;
} else {
var107 = var_e105->type->type_table[cltype108] == idtype109;
}
var_110 = var107;
if (var107){
{
var111 = ((val*(*)(val* self))(var_e105->class->vft[COLOR_physique__nitSimulation__Player__name]))(var_e105); /* name on <var_e105:Entity(Player)>*/
}
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "player2";
var115 = core__flat___NativeString___to_s_full(var114, 7l, 7l);
var113 = var115;
varonce112 = var113;
}
{
var116 = ((short int(*)(val* self, val* p0))(var111->class->vft[COLOR_core__kernel__Object___61d_61d]))(var111, var113); /* == on <var111:String>*/
}
var106 = var116;
} else {
var106 = var_110;
}
if (var106){
{
var117 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__world]))(self); /* world on <self:App>*/
}
{
((void(*)(val* self, double p0, val* p1))(var117->class->vft[COLOR_physique__world__World__apply_event]))(var117, var_move2, var_e105); /* apply_event on <var117:World>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_101); /* next on <var_101:IndexedIterator[Entity]>*/
}
}
BREAK_label103: (void)0;
{
((void(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_101); /* finish on <var_101:IndexedIterator[Entity]>*/
}
} else {
{
{ /* Inline kernel#Float#== (var_move2,0.0) on <var_move2:Float> */
var120 = var_move2 == 0.0;
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
if (var118){
{
var121 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__entities]))(self); /* entities on <self:App>*/
}
var_122 = var121;
{
var123 = ((val*(*)(val* self))(var_122->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_122); /* iterator on <var_122:Array[Entity]>*/
}
var_124 = var123;
for(;;) {
{
var125 = ((short int(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_124); /* is_ok on <var_124:IndexedIterator[Entity]>*/
}
if (var125){
} else {
goto BREAK_label126;
}
{
var127 = ((val*(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_124); /* item on <var_124:IndexedIterator[Entity]>*/
}
var_e128 = var127;
/* <var_e128:Entity> isa Player */
cltype130 = type_physique__Player.color;
idtype131 = type_physique__Player.id;
if(cltype130 >= var_e128->type->table_size) {
var129 = 0;
} else {
var129 = var_e128->type->type_table[cltype130] == idtype131;
}
if (var129){
{
var132 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__engine__App__world]))(self); /* world on <self:App>*/
}
{
((void(*)(val* self, double p0, val* p1))(var132->class->vft[COLOR_physique__world__World__apply_event]))(var132, var_move2, var_e128); /* apply_event on <var132:World>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_124); /* next on <var_124:IndexedIterator[Entity]>*/
}
}
BREAK_label126: (void)0;
{
((void(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_124); /* finish on <var_124:IndexedIterator[Entity]>*/
}
} else {
}
}
}
} else {
}
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method engine#KeyEvent#move for (self: KeyEvent): Float */
double physique__engine___mnit__KeyEvent___move(val* self) {
double var /* : Float */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
double var3 /* : Float */;
double var5 /* : Float */;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_mnit__input__KeyEvent__is_arrow_right]))(self); /* is_arrow_right on <self:KeyEvent>*/
}
if (var1){
var = 1.0;
goto RET_LABEL;
} else {
{
var2 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_mnit__input__KeyEvent__is_arrow_left]))(self); /* is_arrow_left on <self:KeyEvent>*/
}
if (var2){
{
{ /* Inline kernel#Float#unary - (1.0) on <1.0:Float> */
var5 = -1.0;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
} else {
var = 0.0;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method engine#KeyEvent#move_bis for (self: KeyEvent): Float */
double physique__engine___mnit__KeyEvent___move_bis(val* self) {
double var /* : Float */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
short int var11 /* : Bool */;
double var12 /* : Float */;
double var14 /* : Float */;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_mnit__input__KeyEvent__name]))(self); /* name on <self:KeyEvent>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "e";
var4 = core__flat___NativeString___to_s_full(var3, 1l, 1l);
var2 = var4;
varonce = var2;
}
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var2); /* == on <var1:String>*/
}
if (var5){
var = 1.0;
goto RET_LABEL;
} else {
{
var6 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_mnit__input__KeyEvent__name]))(self); /* name on <self:KeyEvent>*/
}
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "a";
var10 = core__flat___NativeString___to_s_full(var9, 1l, 1l);
var8 = var10;
varonce7 = var8;
}
{
var11 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_core__kernel__Object___61d_61d]))(var6, var8); /* == on <var6:String>*/
}
if (var11){
{
{ /* Inline kernel#Float#unary - (1.0) on <1.0:Float> */
var14 = -1.0;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var = var12;
goto RET_LABEL;
} else {
var = 0.0;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
