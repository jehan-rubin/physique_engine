#include "gamnit__flat.sep.0.h"
/* method flat#Sprite#texture for (self: Sprite): Texture */
val* gamnit___gamnit__Sprite___texture(val* self) {
val* var /* : Texture */;
val* var1 /* : Texture */;
var1 = self->attrs[COLOR_gamnit__flat__Sprite___texture].val; /* _texture on <self:Sprite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _texture");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 49);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#Sprite#texture= for (self: Sprite, Texture) */
void gamnit___gamnit__Sprite___texture_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Sprite___texture].val = p0; /* _texture on <self:Sprite> */
RET_LABEL:;
}
/* method flat#Sprite#center for (self: Sprite): Point3d[Float] */
val* gamnit___gamnit__Sprite___center(val* self) {
val* var /* : Point3d[Float] */;
val* var1 /* : Point3d[Float] */;
var1 = self->attrs[COLOR_gamnit__flat__Sprite___center].val; /* _center on <self:Sprite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _center");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 52);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#Sprite#center= for (self: Sprite, Point3d[Float]) */
void gamnit___gamnit__Sprite___center_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Sprite___center].val = p0; /* _center on <self:Sprite> */
RET_LABEL:;
}
/* method flat#Sprite#rotation for (self: Sprite): Float */
double gamnit___gamnit__Sprite___rotation(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__flat__Sprite___rotation].d; /* _rotation on <self:Sprite> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#Sprite#rotation= for (self: Sprite, Float) */
void gamnit___gamnit__Sprite___rotation_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__flat__Sprite___rotation].d = p0; /* _rotation on <self:Sprite> */
RET_LABEL:;
}
/* method flat#Sprite#invert_x for (self: Sprite): Bool */
short int gamnit___gamnit__Sprite___invert_x(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_gamnit__flat__Sprite___invert_x].s; /* _invert_x on <self:Sprite> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#Sprite#invert_x= for (self: Sprite, Bool) */
void gamnit___gamnit__Sprite___invert_x_61d(val* self, short int p0) {
self->attrs[COLOR_gamnit__flat__Sprite___invert_x].s = p0; /* _invert_x on <self:Sprite> */
RET_LABEL:;
}
/* method flat#Sprite#scale for (self: Sprite): Float */
double gamnit___gamnit__Sprite___scale(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__flat__Sprite___scale].d; /* _scale on <self:Sprite> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#Sprite#scale= for (self: Sprite, Float) */
void gamnit___gamnit__Sprite___scale_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__flat__Sprite___scale].d = p0; /* _scale on <self:Sprite> */
RET_LABEL:;
}
/* method flat#Sprite#alpha for (self: Sprite): Float */
double gamnit___gamnit__Sprite___alpha(val* self) {
double var /* : Float */;
val* var1 /* : Array[Float] */;
val* var2 /* : nullable Object */;
double var3 /* : Float */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__tint]))(self); /* tint on <self:Sprite>*/
}
{
var2 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var1, 3l); /* [] on <var1:Array[Float]>*/
}
var3 = ((struct instance_core__Float*)var2)->value; /* autounbox from nullable Object to Float */;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#Sprite#alpha= for (self: Sprite, Float) */
void gamnit___gamnit__Sprite___alpha_61d(val* self, double p0) {
double var_value /* var value: Float */;
val* var /* : Array[Float] */;
val* var1 /* : nullable Object */;
var_value = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__tint]))(self); /* tint on <self:Sprite>*/
}
{
var1 = BOX_core__Float(var_value); /* autobox from Float to nullable Object */
((void(*)(val* self, long p0, val* p1))(var->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var, 3l, var1); /* []= on <var:Array[Float]>*/
}
RET_LABEL:;
}
/* method flat#Sprite#tint for (self: Sprite): Array[Float] */
val* gamnit___gamnit__Sprite___tint(val* self) {
val* var /* : Array[Float] */;
val* var1 /* : Array[Float] */;
var1 = self->attrs[COLOR_gamnit__flat__Sprite___tint].val; /* _tint on <self:Sprite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tint");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 70);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#Sprite#tint= for (self: Sprite, Array[Float]) */
void gamnit___gamnit__Sprite___tint_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Sprite___tint].val = p0; /* _tint on <self:Sprite> */
RET_LABEL:;
}
/* method flat#Sprite#draw for (self: Sprite) */
void gamnit___gamnit__Sprite___draw(val* self) {
val* var /* : Sys */;
val* var1 /* : App */;
val* var2 /* : Simple2dProgram */;
val* var_simple_2d_program /* var simple_2d_program: Simple2dProgram */;
val* var3 /* : Sys */;
val* var4 /* : Sys */;
val* var5 /* : GLTextureUnit */;
val* var6 /* : Sys */;
val* var7 /* : Sys */;
val* var8 /* : GLTextureTarget */;
val* var9 /* : Texture */;
val* var10 /* : GamnitRootTexture */;
long var11 /* : Int */;
val* var12 /* : AttributeVec4 */;
val* var13 /* : AttributeVec4 */;
val* var14 /* : AttributeFloat */;
val* var15 /* : AttributeVec4 */;
val* var16 /* : Point3d[Float] */;
val* var17 /* : Numeric */;
val* var18 /* : Point3d[Float] */;
val* var19 /* : Numeric */;
val* var20 /* : Point3d[Float] */;
val* var21 /* : Numeric */;
double var22 /* : Float */;
double var23 /* : Float */;
double var24 /* : Float */;
val* var25 /* : AttributeVec4 */;
val* var26 /* : Array[Float] */;
val* var27 /* : nullable Object */;
val* var28 /* : Array[Float] */;
val* var29 /* : nullable Object */;
val* var30 /* : Array[Float] */;
val* var31 /* : nullable Object */;
val* var32 /* : Array[Float] */;
val* var33 /* : nullable Object */;
double var34 /* : Float */;
double var35 /* : Float */;
double var36 /* : Float */;
double var37 /* : Float */;
val* var38 /* : AttributeFloat */;
double var39 /* : Float */;
val* var40 /* : UniformBool */;
val* var41 /* : UniformSampler2D */;
val* var42 /* : AttributeVec2 */;
val* var43 /* : Array[Float] */;
short int var44 /* : Bool */;
val* var45 /* : Texture */;
val* var46 /* : Array[Float] */;
val* var47 /* : Texture */;
val* var48 /* : Array[Float] */;
val* var49 /* : AttributeVec4 */;
val* var50 /* : Texture */;
val* var51 /* : Array[Float] */;
val* var52 /* : UniformMat4 */;
val* var53 /* : Matrix */;
double var54 /* : Float */;
double var55 /* : Float */;
double var57 /* : Float */;
val* var58 /* : Matrix */;
val* var59 /* : Sys */;
val* var60 /* : Sys */;
val* var61 /* : GLDrawMode */;
var = glob_sys;
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_app__app_base__Sys__app]))(var); /* app on <var:Sys>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_gamnit__flat__App__simple_95d2d_program]))(var1); /* simple_2d_program on <var1:App>*/
}
var_simple_2d_program = var2;
var3 = glob_sys;
var4 = glob_sys;
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_glesv2__Sys__gl_TEXTURE0]))(var4); /* gl_TEXTURE0 on <var4:Sys>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_glesv2__Sys__glActiveTexture]))(var3, var5); /* glActiveTexture on <var3:Sys>*/
}
var6 = glob_sys;
var7 = glob_sys;
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_glesv2__Sys__gl_TEXTURE_95d2D]))(var7); /* gl_TEXTURE_2D on <var7:Sys>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__texture]))(self); /* texture on <self:Sprite>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_gamnit__textures__Texture__root]))(var9); /* root on <var9:Texture>*/
}
{
var11 = ((long(*)(val* self))(var10->class->vft[COLOR_gamnit__textures__Texture__gl_texture]))(var10); /* gl_texture on <var10:GamnitRootTexture>*/
}
{
((void(*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_glesv2__Sys__glBindTexture]))(var6, var8, var11); /* glBindTexture on <var6:Sys>*/
}
{
var12 = ((val*(*)(val* self))(var_simple_2d_program->class->vft[COLOR_gamnit__flat__Simple2dProgram__translation]))(var_simple_2d_program); /* translation on <var_simple_2d_program:Simple2dProgram>*/
}
{
((void(*)(val* self, short int p0))(var12->class->vft[COLOR_gamnit__programs__Attribute__array_enabled_61d]))(var12, 0); /* array_enabled= on <var12:AttributeVec4>*/
}
{
var13 = ((val*(*)(val* self))(var_simple_2d_program->class->vft[COLOR_gamnit__flat__Simple2dProgram__color]))(var_simple_2d_program); /* color on <var_simple_2d_program:Simple2dProgram>*/
}
{
((void(*)(val* self, short int p0))(var13->class->vft[COLOR_gamnit__programs__Attribute__array_enabled_61d]))(var13, 0); /* array_enabled= on <var13:AttributeVec4>*/
}
{
var14 = ((val*(*)(val* self))(var_simple_2d_program->class->vft[COLOR_gamnit__flat__Simple2dProgram__scale]))(var_simple_2d_program); /* scale on <var_simple_2d_program:Simple2dProgram>*/
}
{
((void(*)(val* self, short int p0))(var14->class->vft[COLOR_gamnit__programs__Attribute__array_enabled_61d]))(var14, 0); /* array_enabled= on <var14:AttributeFloat>*/
}
{
var15 = ((val*(*)(val* self))(var_simple_2d_program->class->vft[COLOR_gamnit__flat__Simple2dProgram__translation]))(var_simple_2d_program); /* translation on <var_simple_2d_program:Simple2dProgram>*/
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__center]))(self); /* center on <self:Sprite>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(var16); /* x on <var16:Point3d[Float]>*/
}
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__center]))(self); /* center on <self:Sprite>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(var18); /* y on <var18:Point3d[Float]>*/
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__center]))(self); /* center on <self:Sprite>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_geometry__points_and_lines__IPoint3d__z]))(var20); /* z on <var20:Point3d[Float]>*/
}
{
var22 = ((struct instance_core__Float*)var17)->value; /* autounbox from Numeric to Float */;
var23 = ((struct instance_core__Float*)var19)->value; /* autounbox from Numeric to Float */;
var24 = ((struct instance_core__Float*)var21)->value; /* autounbox from Numeric to Float */;
((void(*)(val* self, double p0, double p1, double p2, double p3))(var15->class->vft[COLOR_gamnit__programs__AttributeVec4__uniform]))(var15, var22, var23, var24, 0.0); /* uniform on <var15:AttributeVec4>*/
}
{
var25 = ((val*(*)(val* self))(var_simple_2d_program->class->vft[COLOR_gamnit__flat__Simple2dProgram__color]))(var_simple_2d_program); /* color on <var_simple_2d_program:Simple2dProgram>*/
}
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__tint]))(self); /* tint on <self:Sprite>*/
}
{
var27 = ((val*(*)(val* self, long p0))(var26->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var26, 0l); /* [] on <var26:Array[Float]>*/
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__tint]))(self); /* tint on <self:Sprite>*/
}
{
var29 = ((val*(*)(val* self, long p0))(var28->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var28, 1l); /* [] on <var28:Array[Float]>*/
}
{
var30 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__tint]))(self); /* tint on <self:Sprite>*/
}
{
var31 = ((val*(*)(val* self, long p0))(var30->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var30, 2l); /* [] on <var30:Array[Float]>*/
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__tint]))(self); /* tint on <self:Sprite>*/
}
{
var33 = ((val*(*)(val* self, long p0))(var32->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var32, 3l); /* [] on <var32:Array[Float]>*/
}
{
var34 = ((struct instance_core__Float*)var27)->value; /* autounbox from nullable Object to Float */;
var35 = ((struct instance_core__Float*)var29)->value; /* autounbox from nullable Object to Float */;
var36 = ((struct instance_core__Float*)var31)->value; /* autounbox from nullable Object to Float */;
var37 = ((struct instance_core__Float*)var33)->value; /* autounbox from nullable Object to Float */;
((void(*)(val* self, double p0, double p1, double p2, double p3))(var25->class->vft[COLOR_gamnit__programs__AttributeVec4__uniform]))(var25, var34, var35, var36, var37); /* uniform on <var25:AttributeVec4>*/
}
{
var38 = ((val*(*)(val* self))(var_simple_2d_program->class->vft[COLOR_gamnit__flat__Simple2dProgram__scale]))(var_simple_2d_program); /* scale on <var_simple_2d_program:Simple2dProgram>*/
}
{
var39 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__scale]))(self); /* scale on <self:Sprite>*/
}
{
((void(*)(val* self, double p0))(var38->class->vft[COLOR_gamnit__programs__AttributeFloat__uniform]))(var38, var39); /* uniform on <var38:AttributeFloat>*/
}
{
var40 = ((val*(*)(val* self))(var_simple_2d_program->class->vft[COLOR_gamnit__flat__Simple2dProgram__use_texture]))(var_simple_2d_program); /* use_texture on <var_simple_2d_program:Simple2dProgram>*/
}
{
((void(*)(val* self, short int p0))(var40->class->vft[COLOR_gamnit__programs__UniformBool__uniform]))(var40, 1); /* uniform on <var40:UniformBool>*/
}
{
var41 = ((val*(*)(val* self))(var_simple_2d_program->class->vft[COLOR_gamnit__flat__Simple2dProgram__texture]))(var_simple_2d_program); /* texture on <var_simple_2d_program:Simple2dProgram>*/
}
{
((void(*)(val* self, long p0))(var41->class->vft[COLOR_gamnit__programs__UniformSampler2D__uniform]))(var41, 0l); /* uniform on <var41:UniformSampler2D>*/
}
{
var42 = ((val*(*)(val* self))(var_simple_2d_program->class->vft[COLOR_gamnit__flat__Simple2dProgram__tex_coord]))(var_simple_2d_program); /* tex_coord on <var_simple_2d_program:Simple2dProgram>*/
}
{
var44 = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__invert_x]))(self); /* invert_x on <self:Sprite>*/
}
if (var44){
{
var45 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__texture]))(self); /* texture on <self:Sprite>*/
}
{
var46 = ((val*(*)(val* self))(var45->class->vft[COLOR_gamnit__flat__Texture__texture_coords_invert_x]))(var45); /* texture_coords_invert_x on <var45:Texture>*/
}
var43 = var46;
} else {
{
var47 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__texture]))(self); /* texture on <self:Sprite>*/
}
{
var48 = ((val*(*)(val* self))(var47->class->vft[COLOR_gamnit__flat__Texture__texture_coords]))(var47); /* texture_coords on <var47:Texture>*/
}
var43 = var48;
}
{
((void(*)(val* self, val* p0, long p1))(var42->class->vft[COLOR_gamnit__programs__Attribute__array]))(var42, var43, 2l); /* array on <var42:AttributeVec2>*/
}
{
var49 = ((val*(*)(val* self))(var_simple_2d_program->class->vft[COLOR_gamnit__flat__Simple2dProgram__coord]))(var_simple_2d_program); /* coord on <var_simple_2d_program:Simple2dProgram>*/
}
{
var50 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__texture]))(self); /* texture on <self:Sprite>*/
}
{
var51 = ((val*(*)(val* self))(var50->class->vft[COLOR_gamnit__flat__Texture__vertices]))(var50); /* vertices on <var50:Texture>*/
}
{
((void(*)(val* self, val* p0, long p1))(var49->class->vft[COLOR_gamnit__programs__Attribute__array]))(var49, var51, 3l); /* array on <var49:AttributeVec4>*/
}
{
var52 = ((val*(*)(val* self))(var_simple_2d_program->class->vft[COLOR_gamnit__flat__Simple2dProgram__rotation]))(var_simple_2d_program); /* rotation on <var_simple_2d_program:Simple2dProgram>*/
}
var53 = NEW_matrix__Matrix(&type_matrix__Matrix);
{
var54 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__flat__Sprite__rotation]))(self); /* rotation on <self:Sprite>*/
}
{
{ /* Inline kernel#Float#unary - (1.0) on <1.0:Float> */
var57 = -1.0;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
{
var58 = ((val*(*)(val* self, double p0, double p1, double p2, double p3))(var53->class->vft[COLOR_matrix__projection__Matrix__rotation]))(var53, var54, 0.0, 0.0, var55); /* rotation on <var53:Matrix>*/
}
{
((void(*)(val* self, val* p0))(var52->class->vft[COLOR_gamnit__programs__UniformMat4__uniform]))(var52, var58); /* uniform on <var52:UniformMat4>*/
}
var59 = glob_sys;
var60 = glob_sys;
{
var61 = ((val*(*)(val* self))(var60->class->vft[COLOR_glesv2__Sys__gl_TRIANGLE_STRIP]))(var60); /* gl_TRIANGLE_STRIP on <var60:Sys>*/
}
{
((void(*)(val* self, val* p0, long p1, long p2))(var59->class->vft[COLOR_glesv2__Sys__glDrawArrays]))(var59, var61, 0l, 4l); /* glDrawArrays on <var59:Sys>*/
}
RET_LABEL:;
}
/* method flat#Sprite#init for (self: Sprite) */
void gamnit___gamnit__Sprite___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit___gamnit__Sprite___core__kernel__Object__init]))(self); /* init on <self:Sprite>*/
}
RET_LABEL:;
}
/* method flat#App#simple_2d_program for (self: App): Simple2dProgram */
val* gamnit__flat___app__App___simple_95d2d_program(val* self) {
val* var /* : Simple2dProgram */;
short int var1 /* : Bool */;
val* var2 /* : Simple2dProgram */;
val* var3 /* : Simple2dProgram */;
var1 = self->attrs[COLOR_gamnit__flat__App___simple_95d2d_program].val != NULL; /* _simple_2d_program on <self:App> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__App___simple_95d2d_program].val; /* _simple_2d_program on <self:App> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _simple_2d_program");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 105);
fatal_exit(1);
}
} else {
var3 = NEW_gamnit__Simple2dProgram(&type_gamnit__Simple2dProgram);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Simple2dProgram>*/
}
self->attrs[COLOR_gamnit__flat__App___simple_95d2d_program].val = var3; /* _simple_2d_program on <self:App> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#App#simple_2d_program= for (self: App, Simple2dProgram) */
void gamnit__flat___app__App___simple_95d2d_program_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__App___simple_95d2d_program].val = p0; /* _simple_2d_program on <self:App> */
RET_LABEL:;
}
/* method flat#App#world_camera for (self: App): EulerCamera */
val* gamnit__flat___app__App___world_camera(val* self) {
val* var /* : EulerCamera */;
short int var1 /* : Bool */;
val* var2 /* : EulerCamera */;
val* var3 /* : EulerCamera */;
val* var5 /* : EulerCamera */;
val* var6 /* : Sys */;
val* var7 /* : App */;
val* var8 /* : nullable GamnitDisplay */;
val* var_camera /* var camera: EulerCamera */;
var1 = self->attrs[COLOR_gamnit__flat__App___world_camera].val != NULL; /* _world_camera on <self:App> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__App___world_camera].val; /* _world_camera on <self:App> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _world_camera");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 108);
fatal_exit(1);
}
} else {
{
var5 = NEW_gamnit__EulerCamera(&type_gamnit__EulerCamera);
var6 = glob_sys;
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_app__app_base__Sys__app]))(var6); /* app on <var6:Sys>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_gamnit__App__display]))(var7); /* display on <var7:App>*/
}
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 113);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_gamnit__cameras__Camera__display_61d]))(var5, var8); /* display= on <var5:EulerCamera>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:EulerCamera>*/
}
var_camera = var5;
{
((void(*)(val* self, val* p0))(var_camera->class->vft[COLOR_gamnit__cameras__EulerCamera__reset_height]))(var_camera, ((val*)NULL)); /* reset_height on <var_camera:EulerCamera>*/
}
{
((void(*)(val* self, double p0))(var_camera->class->vft[COLOR_gamnit__cameras__EulerCamera__near_61d]))(var_camera, 100.0); /* near= on <var_camera:EulerCamera>*/
}
var3 = var_camera;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_gamnit__flat__App___world_camera].val = var3; /* _world_camera on <self:App> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#App#world_camera= for (self: App, EulerCamera) */
void gamnit__flat___app__App___world_camera_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__App___world_camera].val = p0; /* _world_camera on <self:App> */
RET_LABEL:;
}
/* method flat#App#ui_camera for (self: App): UICamera */
val* gamnit__flat___app__App___ui_camera(val* self) {
val* var /* : UICamera */;
short int var1 /* : Bool */;
val* var2 /* : UICamera */;
val* var3 /* : UICamera */;
val* var4 /* : Sys */;
val* var5 /* : App */;
val* var6 /* : nullable GamnitDisplay */;
var1 = self->attrs[COLOR_gamnit__flat__App___ui_camera].val != NULL; /* _ui_camera on <self:App> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__App___ui_camera].val; /* _ui_camera on <self:App> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ui_camera");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 122);
fatal_exit(1);
}
} else {
var3 = NEW_gamnit__UICamera(&type_gamnit__UICamera);
var4 = glob_sys;
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_app__app_base__Sys__app]))(var4); /* app on <var4:Sys>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_gamnit__App__display]))(var5); /* display on <var5:App>*/
}
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 123);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_gamnit__cameras__Camera__display_61d]))(var3, var6); /* display= on <var3:UICamera>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:UICamera>*/
}
self->attrs[COLOR_gamnit__flat__App___ui_camera].val = var3; /* _ui_camera on <self:App> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#App#ui_camera= for (self: App, UICamera) */
void gamnit__flat___app__App___ui_camera_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__App___ui_camera].val = p0; /* _ui_camera on <self:App> */
RET_LABEL:;
}
/* method flat#App#sprites for (self: App): Sequence[Sprite] */
val* gamnit__flat___app__App___sprites(val* self) {
val* var /* : Sequence[Sprite] */;
val* var1 /* : Sequence[Sprite] */;
var1 = self->attrs[COLOR_gamnit__flat__App___sprites].val; /* _sprites on <self:App> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sprites");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 125);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#App#sprites= for (self: App, Sequence[Sprite]) */
void gamnit__flat___app__App___sprites_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__App___sprites].val = p0; /* _sprites on <self:App> */
RET_LABEL:;
}
/* method flat#App#ui_sprites for (self: App): Sequence[Sprite] */
val* gamnit__flat___app__App___ui_sprites(val* self) {
val* var /* : Sequence[Sprite] */;
val* var1 /* : Sequence[Sprite] */;
var1 = self->attrs[COLOR_gamnit__flat__App___ui_sprites].val; /* _ui_sprites on <self:App> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ui_sprites");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 128);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#App#ui_sprites= for (self: App, Sequence[Sprite]) */
void gamnit__flat___app__App___ui_sprites_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__App___ui_sprites].val = p0; /* _ui_sprites on <self:App> */
RET_LABEL:;
}
/* method flat#App#clock for (self: App): Clock */
val* gamnit__flat___app__App___clock(val* self) {
val* var /* : Clock */;
short int var1 /* : Bool */;
val* var2 /* : Clock */;
val* var3 /* : Clock */;
var1 = self->attrs[COLOR_gamnit__flat__App___clock].val != NULL; /* _clock on <self:App> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__App___clock].val; /* _clock on <self:App> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _clock");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 131);
fatal_exit(1);
}
} else {
var3 = NEW_realtime__Clock(&type_realtime__Clock);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Clock>*/
}
self->attrs[COLOR_gamnit__flat__App___clock].val = var3; /* _clock on <self:App> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#App#clock= for (self: App, Clock) */
void gamnit__flat___app__App___clock_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__App___clock].val = p0; /* _clock on <self:App> */
RET_LABEL:;
}
/* method flat#App#on_create for (self: App) */
void gamnit__flat___app__App___app__app_base__AppComponent__on_create(val* self) {
val* var /* : nullable GamnitDisplay */;
val* var_display /* var display: nullable GamnitDisplay */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Sys */;
val* var4 /* : GLError */;
val* var_gl_error /* var gl_error: GLError */;
val* var5 /* : Sys */;
val* var6 /* : GLError */;
short int var7 /* : Bool */;
val* var8 /* : Sys */;
val* var9 /* : Simple2dProgram */;
val* var_program /* var program: Simple2dProgram */;
val* var10 /* : nullable Error */;
val* var_gamnit_error /* var gamnit_error: nullable Error */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Sys */;
val* var14 /* : Sys */;
val* var15 /* : GLES */;
val* var16 /* : GLCapabilities */;
val* var17 /* : GLCap */;
val* var18 /* : Sys */;
val* var19 /* : Sys */;
val* var20 /* : GLBlendFactor */;
val* var21 /* : Sys */;
val* var22 /* : GLBlendFactor */;
val* var23 /* : Sys */;
val* var24 /* : GLES */;
val* var25 /* : GLCapabilities */;
val* var26 /* : GLCap */;
val* var27 /* : Sys */;
val* var28 /* : Sys */;
val* var29 /* : GLDepthFunc */;
val* var30 /* : Sys */;
val* var31 /* : Sys */;
long var32 /* : Int */;
long var33 /* : Int */;
val* var34 /* : Sys */;
val* var35 /* : Sys */;
val* var36 /* : GLError */;
val* var37 /* : Sys */;
val* var38 /* : GLError */;
short int var39 /* : Bool */;
val* var40 /* : Sys */;
val* var41 /* : Sys */;
val* var42 /* : TextureSet */;
val* var_ /* var : TextureSet */;
val* var43 /* : Iterator[nullable Object] */;
val* var_44 /* var : Iterator[Texture] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
val* var_tex /* var tex: Texture */;
val* var47 /* : Sys */;
val* var48 /* : Sys */;
val* var49 /* : GLTextureTarget */;
val* var50 /* : Sys */;
val* var51 /* : GLTexParameteriName */;
val* var52 /* : Sys */;
val* var53 /* : GLTexParameteri */;
val* var54 /* : Sys */;
val* var55 /* : Sys */;
val* var56 /* : GLTextureTarget */;
val* var57 /* : Sys */;
val* var58 /* : GLTexParameteriName */;
val* var59 /* : Sys */;
val* var60 /* : GLTexParameteri */;
val* var61 /* : nullable Error */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : Sys */;
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit__flat___app__App___app__app_base__AppComponent__on_create]))(self); /* on_create on <self:App>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__App__display]))(self); /* display on <self:App>*/
}
var_display = var;
if (var_display == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_display->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_display, ((val*)NULL)); /* != on <var_display:nullable GamnitDisplay>*/
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 138);
fatal_exit(1);
}
var3 = glob_sys;
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_glesv2__Sys__glGetError]))(var3); /* glGetError on <var3:Sys>*/
}
var_gl_error = var4;
var5 = glob_sys;
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_glesv2__Sys__gl_NO_ERROR]))(var5); /* gl_NO_ERROR on <var5:Sys>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(var_gl_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_gl_error, var6); /* == on <var_gl_error:GLError>*/
}
if (unlikely(!var7)) {
var8 = glob_sys;
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__file__Sys__print]))(var8, var_gl_error); /* print on <var8:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 141);
fatal_exit(1);
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__simple_95d2d_program]))(self); /* simple_2d_program on <self:App>*/
}
var_program = var9;
{
((void(*)(val* self))(var_program->class->vft[COLOR_gamnit__programs__GamnitProgram__compile_and_link]))(var_program); /* compile_and_link on <var_program:Simple2dProgram>*/
}
{
var10 = ((val*(*)(val* self))(var_program->class->vft[COLOR_gamnit__programs__GamnitProgram__error]))(var_program); /* error on <var_program:Simple2dProgram>*/
}
var_gamnit_error = var10;
if (var_gamnit_error == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
var12 = ((short int(*)(val* self, val* p0))(var_gamnit_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_gamnit_error, ((val*)NULL)); /* == on <var_gamnit_error:nullable Error>*/
var11 = var12;
}
if (unlikely(!var11)) {
var13 = glob_sys;
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_core__file__Sys__print_error]))(var13, var_gamnit_error); /* print_error on <var13:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 148);
fatal_exit(1);
}
var14 = glob_sys;
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_glesv2__Sys__gl]))(var14); /* gl on <var14:Sys>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_glesv2__GLES__capabilities]))(var15); /* capabilities on <var15:GLES>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_glesv2__GLCapabilities__blend]))(var16); /* blend on <var16:GLCapabilities>*/
}
{
((void(*)(val* self))(var17->class->vft[COLOR_glesv2__GLCap__enable]))(var17); /* enable on <var17:GLCap>*/
}
var18 = glob_sys;
var19 = glob_sys;
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_glesv2__Sys__gl_SRC_ALPHA]))(var19); /* gl_SRC_ALPHA on <var19:Sys>*/
}
var21 = glob_sys;
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_glesv2__Sys__gl_ONE_MINUS_SRC_ALPHA]))(var21); /* gl_ONE_MINUS_SRC_ALPHA on <var21:Sys>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var18->class->vft[COLOR_glesv2__Sys__glBlendFunc]))(var18, var20, var22); /* glBlendFunc on <var18:Sys>*/
}
var23 = glob_sys;
{
var24 = ((val*(*)(val* self))(var23->class->vft[COLOR_glesv2__Sys__gl]))(var23); /* gl on <var23:Sys>*/
}
{
var25 = ((val*(*)(val* self))(var24->class->vft[COLOR_glesv2__GLES__capabilities]))(var24); /* capabilities on <var24:GLES>*/
}
{
var26 = ((val*(*)(val* self))(var25->class->vft[COLOR_glesv2__GLCapabilities__depth_test]))(var25); /* depth_test on <var25:GLCapabilities>*/
}
{
((void(*)(val* self))(var26->class->vft[COLOR_glesv2__GLCap__enable]))(var26); /* enable on <var26:GLCap>*/
}
var27 = glob_sys;
var28 = glob_sys;
{
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_glesv2__Sys__gl_LEQUAL]))(var28); /* gl_LEQUAL on <var28:Sys>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_glesv2__Sys__glDepthFunc]))(var27, var29); /* glDepthFunc on <var27:Sys>*/
}
var30 = glob_sys;
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_glesv2__Sys__glDepthMask]))(var30, 1); /* glDepthMask on <var30:Sys>*/
}
var31 = glob_sys;
{
var32 = ((long(*)(val* self))(var_display->class->vft[COLOR_gamnit__display__GamnitDisplay__width]))(var_display); /* width on <var_display:nullable GamnitDisplay(GamnitDisplay)>*/
}
{
var33 = ((long(*)(val* self))(var_display->class->vft[COLOR_gamnit__display__GamnitDisplay__height]))(var_display); /* height on <var_display:nullable GamnitDisplay(GamnitDisplay)>*/
}
{
((void(*)(val* self, long p0, long p1, long p2, long p3))(var31->class->vft[COLOR_glesv2__Sys__glViewport]))(var31, 0l, 0l, var32, var33); /* glViewport on <var31:Sys>*/
}
var34 = glob_sys;
{
((void(*)(val* self, double p0, double p1, double p2, double p3))(var34->class->vft[COLOR_glesv2__Sys__glClearColor]))(var34, 0.0, 0.0, 0.0, 1.0); /* glClearColor on <var34:Sys>*/
}
var35 = glob_sys;
{
var36 = ((val*(*)(val* self))(var35->class->vft[COLOR_glesv2__Sys__glGetError]))(var35); /* glGetError on <var35:Sys>*/
}
var_gl_error = var36;
var37 = glob_sys;
{
var38 = ((val*(*)(val* self))(var37->class->vft[COLOR_glesv2__Sys__gl_NO_ERROR]))(var37); /* gl_NO_ERROR on <var37:Sys>*/
}
{
var39 = ((short int(*)(val* self, val* p0))(var_gl_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_gl_error, var38); /* == on <var_gl_error:GLError>*/
}
if (unlikely(!var39)) {
var40 = glob_sys;
{
((void(*)(val* self, val* p0))(var40->class->vft[COLOR_core__file__Sys__print]))(var40, var_gl_error); /* print on <var40:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 164);
fatal_exit(1);
}
var41 = glob_sys;
{
var42 = ((val*(*)(val* self))(var41->class->vft[COLOR_gamnit__textures__Sys__all_root_textures]))(var41); /* all_root_textures on <var41:Sys>*/
}
var_ = var42;
{
var43 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:TextureSet>*/
}
var_44 = var43;
for(;;) {
{
var45 = ((short int(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_44); /* is_ok on <var_44:Iterator[Texture]>*/
}
if (var45){
} else {
goto BREAK_label;
}
{
var46 = ((val*(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_44); /* item on <var_44:Iterator[Texture]>*/
}
var_tex = var46;
{
((void(*)(val* self, val* p0))(var_tex->class->vft[COLOR_gamnit__textures__Texture__load]))(var_tex, ((val*)NULL)); /* load on <var_tex:Texture>*/
}
var47 = glob_sys;
var48 = glob_sys;
{
var49 = ((val*(*)(val* self))(var48->class->vft[COLOR_glesv2__Sys__gl_TEXTURE_95d2D]))(var48); /* gl_TEXTURE_2D on <var48:Sys>*/
}
var50 = glob_sys;
{
var51 = ((val*(*)(val* self))(var50->class->vft[COLOR_glesv2__Sys__gl_TEXTURE_MIN_FILTER]))(var50); /* gl_TEXTURE_MIN_FILTER on <var50:Sys>*/
}
var52 = glob_sys;
{
var53 = ((val*(*)(val* self))(var52->class->vft[COLOR_glesv2__Sys__gl_LINEAR]))(var52); /* gl_LINEAR on <var52:Sys>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var47->class->vft[COLOR_glesv2__Sys__glTexParameteri]))(var47, var49, var51, var53); /* glTexParameteri on <var47:Sys>*/
}
var54 = glob_sys;
var55 = glob_sys;
{
var56 = ((val*(*)(val* self))(var55->class->vft[COLOR_glesv2__Sys__gl_TEXTURE_95d2D]))(var55); /* gl_TEXTURE_2D on <var55:Sys>*/
}
var57 = glob_sys;
{
var58 = ((val*(*)(val* self))(var57->class->vft[COLOR_glesv2__Sys__gl_TEXTURE_MAG_FILTER]))(var57); /* gl_TEXTURE_MAG_FILTER on <var57:Sys>*/
}
var59 = glob_sys;
{
var60 = ((val*(*)(val* self))(var59->class->vft[COLOR_glesv2__Sys__gl_LINEAR]))(var59); /* gl_LINEAR on <var59:Sys>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var54->class->vft[COLOR_glesv2__Sys__glTexParameteri]))(var54, var56, var58, var60); /* glTexParameteri on <var54:Sys>*/
}
{
var61 = ((val*(*)(val* self))(var_tex->class->vft[COLOR_gamnit__textures__Texture__error]))(var_tex); /* error on <var_tex:Texture>*/
}
var_gamnit_error = var61;
if (var_gamnit_error == NULL) {
var62 = 1; /* is null */
} else {
var62 = 0; /* arg is null but recv is not */
}
if (0) {
var63 = ((short int(*)(val* self, val* p0))(var_gamnit_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_gamnit_error, ((val*)NULL)); /* == on <var_gamnit_error:nullable Error>*/
var62 = var63;
}
if (unlikely(!var62)) {
var64 = glob_sys;
{
((void(*)(val* self, val* p0))(var64->class->vft[COLOR_core__file__Sys__print_error]))(var64, var_gamnit_error); /* print_error on <var64:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 174);
fatal_exit(1);
}
{
((void(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_44); /* next on <var_44:Iterator[Texture]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_44); /* finish on <var_44:Iterator[Texture]>*/
}
RET_LABEL:;
}
/* method flat#App#frame_core for (self: App, GamnitDisplay) */
void gamnit__flat___app__App___frame_core(val* self, val* p0) {
val* var_display /* var display: GamnitDisplay */;
val* var /* : Sys */;
val* var1 /* : Sys */;
val* var2 /* : GLBuffer */;
val* var3 /* : Sys */;
val* var4 /* : GLBuffer */;
val* var5 /* : GLBuffer */;
val* var6 /* : Sys */;
val* var7 /* : GLError */;
val* var_gl_error /* var gl_error: GLError */;
val* var8 /* : Sys */;
val* var9 /* : GLError */;
short int var10 /* : Bool */;
val* var11 /* : Sys */;
val* var12 /* : Clock */;
val* var13 /* : Timespec */;
double var14 /* : Float */;
double var_dt /* var dt: Float */;
val* var15 /* : Sys */;
val* var16 /* : GLError */;
val* var17 /* : Sys */;
val* var18 /* : GLError */;
short int var19 /* : Bool */;
val* var20 /* : Sys */;
var_display = p0;
var = glob_sys;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_glesv2__Sys__gl_COLOR_BUFFER_BIT]))(var1); /* gl_COLOR_BUFFER_BIT on <var1:Sys>*/
}
var3 = glob_sys;
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_glesv2__Sys__gl_DEPTH_BUFFER_BIT]))(var3); /* gl_DEPTH_BUFFER_BIT on <var3:Sys>*/
}
{
var5 = ((val*(*)(val* self, val* p0))(var2->class->vft[COLOR_glesv2__GLBuffer___124d]))(var2, var4); /* | on <var2:GLBuffer>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_glesv2__Sys__glClear]))(var, var5); /* glClear on <var:Sys>*/
}
var6 = glob_sys;
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_glesv2__Sys__glGetError]))(var6); /* glGetError on <var6:Sys>*/
}
var_gl_error = var7;
var8 = glob_sys;
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_glesv2__Sys__gl_NO_ERROR]))(var8); /* gl_NO_ERROR on <var8:Sys>*/
}
{
var10 = ((short int(*)(val* self, val* p0))(var_gl_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_gl_error, var9); /* == on <var_gl_error:GLError>*/
}
if (unlikely(!var10)) {
var11 = glob_sys;
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_core__file__Sys__print]))(var11, var_gl_error); /* print on <var11:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 185);
fatal_exit(1);
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__clock]))(self); /* clock on <self:App>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_realtime__Clock__lapse]))(var12); /* lapse on <var12:Clock>*/
}
{
var14 = ((double(*)(val* self))(var13->class->vft[COLOR_realtime__Timespec__to_f]))(var13); /* to_f on <var13:Timespec>*/
}
var_dt = var14;
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__flat__App__update]))(self, var_dt); /* update on <self:App>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__flat__App__frame_core_draw]))(self, var_display); /* frame_core_draw on <self:App>*/
}
{
((void(*)(val* self))(var_display->class->vft[COLOR_gamnit__display__GamnitDisplay__flip]))(var_display); /* flip on <var_display:GamnitDisplay>*/
}
var15 = glob_sys;
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_glesv2__Sys__glGetError]))(var15); /* glGetError on <var15:Sys>*/
}
var_gl_error = var16;
var17 = glob_sys;
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_glesv2__Sys__gl_NO_ERROR]))(var17); /* gl_NO_ERROR on <var17:Sys>*/
}
{
var19 = ((short int(*)(val* self, val* p0))(var_gl_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_gl_error, var18); /* == on <var_gl_error:GLError>*/
}
if (unlikely(!var19)) {
var20 = glob_sys;
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_core__file__Sys__print]))(var20, var_gl_error); /* print on <var20:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 197);
fatal_exit(1);
}
RET_LABEL:;
}
/* method flat#App#frame_core_draw for (self: App, GamnitDisplay) */
void gamnit__flat___app__App___frame_core_draw(val* self, val* p0) {
val* var_display /* var display: GamnitDisplay */;
var_display = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__flat__App__frame_core_world_sprites]))(self, var_display); /* frame_core_world_sprites on <self:App>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__flat__App__frame_core_ui_sprites]))(self, var_display); /* frame_core_ui_sprites on <self:App>*/
}
RET_LABEL:;
}
/* method flat#App#frame_core_world_sprites for (self: App, GamnitDisplay) */
void gamnit__flat___app__App___frame_core_world_sprites(val* self, val* p0) {
val* var_display /* var display: GamnitDisplay */;
val* var /* : Simple2dProgram */;
val* var1 /* : Simple2dProgram */;
val* var2 /* : AttributeVec4 */;
val* var3 /* : Simple2dProgram */;
val* var4 /* : AttributeVec2 */;
val* var5 /* : Simple2dProgram */;
val* var6 /* : AttributeVec4 */;
val* var7 /* : Simple2dProgram */;
val* var8 /* : UniformMat4 */;
val* var9 /* : EulerCamera */;
val* var10 /* : Matrix */;
val* var11 /* : Sequence[Sprite] */;
val* var_ /* var : Sequence[Sprite] */;
val* var12 /* : Iterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[Sprite] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_sprite /* var sprite: Sprite */;
var_display = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__simple_95d2d_program]))(self); /* simple_2d_program on <self:App>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_gamnit__programs__GamnitProgram__use]))(var); /* use on <var:Simple2dProgram>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__simple_95d2d_program]))(self); /* simple_2d_program on <self:App>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_gamnit__flat__Simple2dProgram__coord]))(var1); /* coord on <var1:Simple2dProgram>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_gamnit__programs__Attribute__array_enabled_61d]))(var2, 1); /* array_enabled= on <var2:AttributeVec4>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__simple_95d2d_program]))(self); /* simple_2d_program on <self:App>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_gamnit__flat__Simple2dProgram__tex_coord]))(var3); /* tex_coord on <var3:Simple2dProgram>*/
}
{
((void(*)(val* self, short int p0))(var4->class->vft[COLOR_gamnit__programs__Attribute__array_enabled_61d]))(var4, 1); /* array_enabled= on <var4:AttributeVec2>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__simple_95d2d_program]))(self); /* simple_2d_program on <self:App>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_gamnit__flat__Simple2dProgram__color]))(var5); /* color on <var5:Simple2dProgram>*/
}
{
((void(*)(val* self, short int p0))(var6->class->vft[COLOR_gamnit__programs__Attribute__array_enabled_61d]))(var6, 0); /* array_enabled= on <var6:AttributeVec4>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__simple_95d2d_program]))(self); /* simple_2d_program on <self:App>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_gamnit__flat__Simple2dProgram__mvp]))(var7); /* mvp on <var7:Simple2dProgram>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__world_camera]))(self); /* world_camera on <self:App>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_gamnit__cameras__Camera__mvp_matrix]))(var9); /* mvp_matrix on <var9:EulerCamera>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_gamnit__programs__UniformMat4__uniform]))(var8, var10); /* uniform on <var8:UniformMat4>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__sprites]))(self); /* sprites on <self:App>*/
}
var_ = var11;
{
var12 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[Sprite]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[Sprite]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[Sprite]>*/
}
var_sprite = var15;
{
((void(*)(val* self))(var_sprite->class->vft[COLOR_gamnit__flat__Sprite__draw]))(var_sprite); /* draw on <var_sprite:Sprite>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[Sprite]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[Sprite]>*/
}
RET_LABEL:;
}
/* method flat#App#frame_core_ui_sprites for (self: App, GamnitDisplay) */
void gamnit__flat___app__App___frame_core_ui_sprites(val* self, val* p0) {
val* var_display /* var display: GamnitDisplay */;
val* var /* : Simple2dProgram */;
val* var1 /* : Simple2dProgram */;
val* var2 /* : AttributeVec4 */;
val* var3 /* : Simple2dProgram */;
val* var4 /* : AttributeVec2 */;
val* var5 /* : Simple2dProgram */;
val* var6 /* : AttributeVec4 */;
val* var7 /* : Sys */;
val* var8 /* : Sys */;
val* var9 /* : GLBuffer */;
val* var10 /* : Simple2dProgram */;
val* var11 /* : UniformMat4 */;
val* var12 /* : UICamera */;
val* var13 /* : Matrix */;
val* var14 /* : Sequence[Sprite] */;
val* var_ /* var : Sequence[Sprite] */;
val* var15 /* : Iterator[nullable Object] */;
val* var_16 /* var : IndexedIterator[Sprite] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_sprite /* var sprite: Sprite */;
var_display = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__simple_95d2d_program]))(self); /* simple_2d_program on <self:App>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_gamnit__programs__GamnitProgram__use]))(var); /* use on <var:Simple2dProgram>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__simple_95d2d_program]))(self); /* simple_2d_program on <self:App>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_gamnit__flat__Simple2dProgram__coord]))(var1); /* coord on <var1:Simple2dProgram>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_gamnit__programs__Attribute__array_enabled_61d]))(var2, 1); /* array_enabled= on <var2:AttributeVec4>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__simple_95d2d_program]))(self); /* simple_2d_program on <self:App>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_gamnit__flat__Simple2dProgram__tex_coord]))(var3); /* tex_coord on <var3:Simple2dProgram>*/
}
{
((void(*)(val* self, short int p0))(var4->class->vft[COLOR_gamnit__programs__Attribute__array_enabled_61d]))(var4, 1); /* array_enabled= on <var4:AttributeVec2>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__simple_95d2d_program]))(self); /* simple_2d_program on <self:App>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_gamnit__flat__Simple2dProgram__color]))(var5); /* color on <var5:Simple2dProgram>*/
}
{
((void(*)(val* self, short int p0))(var6->class->vft[COLOR_gamnit__programs__Attribute__array_enabled_61d]))(var6, 0); /* array_enabled= on <var6:AttributeVec4>*/
}
var7 = glob_sys;
var8 = glob_sys;
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_glesv2__Sys__gl_DEPTH_BUFFER_BIT]))(var8); /* gl_DEPTH_BUFFER_BIT on <var8:Sys>*/
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_glesv2__Sys__glClear]))(var7, var9); /* glClear on <var7:Sys>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__simple_95d2d_program]))(self); /* simple_2d_program on <self:App>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_gamnit__flat__Simple2dProgram__mvp]))(var10); /* mvp on <var10:Simple2dProgram>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__ui_camera]))(self); /* ui_camera on <self:App>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_gamnit__cameras__Camera__mvp_matrix]))(var12); /* mvp_matrix on <var12:UICamera>*/
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_gamnit__programs__UniformMat4__uniform]))(var11, var13); /* uniform on <var11:UniformMat4>*/
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__ui_sprites]))(self); /* ui_sprites on <self:App>*/
}
var_ = var14;
{
var15 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[Sprite]>*/
}
var_16 = var15;
for(;;) {
{
var17 = ((short int(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_16); /* is_ok on <var_16:IndexedIterator[Sprite]>*/
}
if (var17){
} else {
goto BREAK_label;
}
{
var18 = ((val*(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_16); /* item on <var_16:IndexedIterator[Sprite]>*/
}
var_sprite = var18;
{
((void(*)(val* self))(var_sprite->class->vft[COLOR_gamnit__flat__Sprite__draw]))(var_sprite); /* draw on <var_sprite:Sprite>*/
}
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_16); /* next on <var_16:IndexedIterator[Sprite]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_16); /* finish on <var_16:IndexedIterator[Sprite]>*/
}
RET_LABEL:;
}
/* method flat#App#update for (self: App, Float) */
void gamnit__flat___app__App___update(val* self, double p0) {
double var_dt /* var dt: Float */;
var_dt = p0;
RET_LABEL:;
}
/* method flat#App#show_splash_screen for (self: App, Texture) */
void gamnit__flat___app__App___show_splash_screen(val* self, val* p0) {
val* var_texture /* var texture: Texture */;
val* var /* : UICamera */;
val* var1 /* : nullable Float */;
val* var2 /* : Sprite */;
val* var3 /* : UICamera */;
val* var4 /* : Point3d[Float] */;
val* var_splash /* var splash: Sprite */;
val* var5 /* : Sequence[Sprite] */;
val* var6 /* : nullable GamnitDisplay */;
val* var_display /* var display: nullable GamnitDisplay */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Sys */;
val* var10 /* : Sys */;
val* var11 /* : GLBuffer */;
val* var12 /* : Sequence[Sprite] */;
var_texture = p0;
{
((void(*)(val* self, val* p0))(var_texture->class->vft[COLOR_gamnit__textures__Texture__load]))(var_texture, ((val*)NULL)); /* load on <var_texture:Texture>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__ui_camera]))(self); /* ui_camera on <self:App>*/
}
{
var1 = BOX_core__Float(1080.0); /* autobox from Float to nullable Float */
((void(*)(val* self, val* p0))(var->class->vft[COLOR_gamnit__cameras__UICamera__reset_height]))(var, var1); /* reset_height on <var:UICamera>*/
}
var2 = NEW_gamnit__Sprite(&type_gamnit__Sprite);
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__ui_camera]))(self); /* ui_camera on <self:App>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_gamnit__cameras__UICamera__center]))(var3); /* center on <var3:UICamera>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_gamnit__flat__Sprite__texture_61d]))(var2, var_texture); /* texture= on <var2:Sprite>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_gamnit__flat__Sprite__center_61d]))(var2, var4); /* center= on <var2:Sprite>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:Sprite>*/
}
var_splash = var2;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__ui_sprites]))(self); /* ui_sprites on <self:App>*/
}
{
((void(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var5, var_splash); /* add on <var5:Sequence[Sprite]>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__App__display]))(self); /* display on <self:App>*/
}
var_display = var6;
if (var_display == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_display->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_display, ((val*)NULL)); /* != on <var_display:nullable GamnitDisplay>*/
var7 = var8;
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 257);
fatal_exit(1);
}
var9 = glob_sys;
var10 = glob_sys;
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_glesv2__Sys__gl_COLOR_BUFFER_BIT]))(var10); /* gl_COLOR_BUFFER_BIT on <var10:Sys>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_glesv2__Sys__glClear]))(var9, var11); /* glClear on <var9:Sys>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__flat__App__frame_core_ui_sprites]))(self, var_display); /* frame_core_ui_sprites on <self:App>*/
}
{
((void(*)(val* self))(var_display->class->vft[COLOR_gamnit__display__GamnitDisplay__flip]))(var_display); /* flip on <var_display:nullable GamnitDisplay(GamnitDisplay)>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__ui_sprites]))(self); /* ui_sprites on <self:App>*/
}
{
((void(*)(val* self, val* p0))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_core__abstract_collection__RemovableCollection__remove]))(var12, var_splash); /* remove on <var12:Sequence[Sprite]>*/
}
RET_LABEL:;
}
/* method flat#App#on_stop for (self: App) */
void gamnit__flat___app__App___app__app_base__AppComponent__on_stop(val* self) {
val* var /* : Simple2dProgram */;
val* var1 /* : nullable GamnitDisplay */;
val* var_display /* var display: nullable GamnitDisplay */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__flat__App__simple_95d2d_program]))(self); /* simple_2d_program on <self:App>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_gamnit__programs__GamnitProgram__delete]))(var); /* delete on <var:Simple2dProgram>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__App__display]))(self); /* display on <self:App>*/
}
var_display = var1;
if (var_display == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_display->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_display, ((val*)NULL)); /* != on <var_display:nullable GamnitDisplay>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self))(var_display->class->vft[COLOR_gamnit__display__GamnitDisplay__close]))(var_display); /* close on <var_display:nullable GamnitDisplay(GamnitDisplay)>*/
}
} else {
}
RET_LABEL:;
}
/* method flat#Texture#vertices for (self: Texture): Array[Float] */
val* gamnit__flat___Texture___vertices(val* self) {
val* var /* : Array[Float] */;
short int var1 /* : Bool */;
val* var2 /* : Array[Float] */;
val* var3 /* : Array[Float] */;
double var_mod /* var mod: Float */;
double var5 /* : Float */;
double var6 /* : Float */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var9 /* : Float */;
double var_w /* var w: Float */;
double var10 /* : Float */;
double var11 /* : Float */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
double var17 /* : Float */;
double var_h /* var h: Float */;
val* var18 /* : Array[Float] */;
val* var_ /* var : Array[Float] */;
double var19 /* : Float */;
double var21 /* : Float */;
double var22 /* : Float */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
double var28 /* : Float */;
val* var29 /* : nullable Object */;
double var30 /* : Float */;
double var32 /* : Float */;
double var33 /* : Float */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
double var39 /* : Float */;
val* var40 /* : nullable Object */;
val* var41 /* : nullable Object */;
val* var_a /* var a: Array[Float] */;
val* var42 /* : Array[Float] */;
val* var_43 /* var : Array[Float] */;
double var44 /* : Float */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
double var50 /* : Float */;
val* var51 /* : nullable Object */;
double var52 /* : Float */;
double var54 /* : Float */;
double var55 /* : Float */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
double var61 /* : Float */;
val* var62 /* : nullable Object */;
val* var63 /* : nullable Object */;
val* var_b /* var b: Array[Float] */;
val* var64 /* : Array[Float] */;
val* var_65 /* var : Array[Float] */;
double var66 /* : Float */;
double var68 /* : Float */;
double var69 /* : Float */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
double var75 /* : Float */;
val* var76 /* : nullable Object */;
double var77 /* : Float */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
double var83 /* : Float */;
val* var84 /* : nullable Object */;
val* var85 /* : nullable Object */;
val* var_c /* var c: Array[Float] */;
val* var86 /* : Array[Float] */;
val* var_87 /* var : Array[Float] */;
double var88 /* : Float */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
double var94 /* : Float */;
val* var95 /* : nullable Object */;
double var96 /* : Float */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
double var102 /* : Float */;
val* var103 /* : nullable Object */;
val* var104 /* : nullable Object */;
val* var_d /* var d: Array[Float] */;
val* var105 /* : Array[Float] */;
val* var_vertices /* var vertices: Array[Float] */;
val* var106 /* : Array[Array[Float]] */;
val* var_107 /* var : Array[Array[Float]] */;
val* var_108 /* var : Array[Array[Float]] */;
val* var109 /* : Iterator[nullable Object] */;
val* var_110 /* var : IndexedIterator[Array[Float]] */;
short int var111 /* : Bool */;
val* var112 /* : nullable Object */;
val* var_v /* var v: Array[Float] */;
var1 = self->attrs[COLOR_gamnit__flat__Texture___vertices].val != NULL; /* _vertices on <self:Texture> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__Texture___vertices].val; /* _vertices on <self:Texture> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vertices");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 278);
fatal_exit(1);
}
} else {
{
var_mod = 1.0;
{
var5 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__width]))(self); /* width on <self:Texture>*/
}
{
{ /* Inline kernel#Float#* (var5,var_mod) on <var5:Float> */
/* Covariant cast for argument 0 (i) <var_mod:Float> isa OTHER */
/* <var_mod:Float> isa OTHER */
var8 = 1; /* easy <var_mod:Float> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var9 = var5 * var_mod;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_w = var6;
{
var10 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__height]))(self); /* height on <self:Texture>*/
}
{
{ /* Inline kernel#Float#* (var10,var_mod) on <var10:Float> */
/* Covariant cast for argument 0 (i) <var_mod:Float> isa OTHER */
/* <var_mod:Float> isa OTHER */
var13 = 1; /* easy <var_mod:Float> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var17 = var10 * var_mod;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_h = var11;
var18 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self, long p0))(var18->class->vft[COLOR_core__array__Array__with_capacity]))(var18, 3l); /* with_capacity on <var18:Array[Float]>*/
}
var_ = var18;
{
{ /* Inline kernel#Float#unary - (0.5) on <0.5:Float> */
var21 = -0.5;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var19,var_w) on <var19:Float> */
/* Covariant cast for argument 0 (i) <var_w:Float> isa OTHER */
/* <var_w:Float> isa OTHER */
var24 = 1; /* easy <var_w:Float> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var28 = var19 * var_w;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
var29 = BOX_core__Float(var22); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var29); /* push on <var_:Array[Float]>*/
}
{
{ /* Inline kernel#Float#unary - (0.5) on <0.5:Float> */
var32 = -0.5;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var30,var_h) on <var30:Float> */
/* Covariant cast for argument 0 (i) <var_h:Float> isa OTHER */
/* <var_h:Float> isa OTHER */
var35 = 1; /* easy <var_h:Float> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var39 = var30 * var_h;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
var40 = BOX_core__Float(var33); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var40); /* push on <var_:Array[Float]>*/
}
{
var41 = BOX_core__Float(0.0); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var41); /* push on <var_:Array[Float]>*/
}
var_a = var_;
var42 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self, long p0))(var42->class->vft[COLOR_core__array__Array__with_capacity]))(var42, 3l); /* with_capacity on <var42:Array[Float]>*/
}
var_43 = var42;
{
{ /* Inline kernel#Float#* (0.5,var_w) on <0.5:Float> */
/* Covariant cast for argument 0 (i) <var_w:Float> isa OTHER */
/* <var_w:Float> isa OTHER */
var46 = 1; /* easy <var_w:Float> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var50 = 0.5 * var_w;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
var51 = BOX_core__Float(var44); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_43->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_43, var51); /* push on <var_43:Array[Float]>*/
}
{
{ /* Inline kernel#Float#unary - (0.5) on <0.5:Float> */
var54 = -0.5;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var52,var_h) on <var52:Float> */
/* Covariant cast for argument 0 (i) <var_h:Float> isa OTHER */
/* <var_h:Float> isa OTHER */
var57 = 1; /* easy <var_h:Float> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var61 = var52 * var_h;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
{
var62 = BOX_core__Float(var55); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_43->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_43, var62); /* push on <var_43:Array[Float]>*/
}
{
var63 = BOX_core__Float(0.0); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_43->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_43, var63); /* push on <var_43:Array[Float]>*/
}
var_b = var_43;
var64 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self, long p0))(var64->class->vft[COLOR_core__array__Array__with_capacity]))(var64, 3l); /* with_capacity on <var64:Array[Float]>*/
}
var_65 = var64;
{
{ /* Inline kernel#Float#unary - (0.5) on <0.5:Float> */
var68 = -0.5;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var66,var_w) on <var66:Float> */
/* Covariant cast for argument 0 (i) <var_w:Float> isa OTHER */
/* <var_w:Float> isa OTHER */
var71 = 1; /* easy <var_w:Float> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var75 = var66 * var_w;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
var76 = BOX_core__Float(var69); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_65->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_65, var76); /* push on <var_65:Array[Float]>*/
}
{
{ /* Inline kernel#Float#* (0.5,var_h) on <0.5:Float> */
/* Covariant cast for argument 0 (i) <var_h:Float> isa OTHER */
/* <var_h:Float> isa OTHER */
var79 = 1; /* easy <var_h:Float> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var83 = 0.5 * var_h;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
var84 = BOX_core__Float(var77); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_65->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_65, var84); /* push on <var_65:Array[Float]>*/
}
{
var85 = BOX_core__Float(0.0); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_65->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_65, var85); /* push on <var_65:Array[Float]>*/
}
var_c = var_65;
var86 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self, long p0))(var86->class->vft[COLOR_core__array__Array__with_capacity]))(var86, 3l); /* with_capacity on <var86:Array[Float]>*/
}
var_87 = var86;
{
{ /* Inline kernel#Float#* (0.5,var_w) on <0.5:Float> */
/* Covariant cast for argument 0 (i) <var_w:Float> isa OTHER */
/* <var_w:Float> isa OTHER */
var90 = 1; /* easy <var_w:Float> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var94 = 0.5 * var_w;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
var95 = BOX_core__Float(var88); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_87->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_87, var95); /* push on <var_87:Array[Float]>*/
}
{
{ /* Inline kernel#Float#* (0.5,var_h) on <0.5:Float> */
/* Covariant cast for argument 0 (i) <var_h:Float> isa OTHER */
/* <var_h:Float> isa OTHER */
var98 = 1; /* easy <var_h:Float> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var102 = 0.5 * var_h;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
{
var103 = BOX_core__Float(var96); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_87->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_87, var103); /* push on <var_87:Array[Float]>*/
}
{
var104 = BOX_core__Float(0.0); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_87->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_87, var104); /* push on <var_87:Array[Float]>*/
}
var_d = var_87;
var105 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self))(var105->class->vft[COLOR_core__kernel__Object__init]))(var105); /* init on <var105:Array[Float]>*/
}
var_vertices = var105;
var106 = NEW_core__Array(&type_core__Array__core__Array__core__Float);
{
((void(*)(val* self, long p0))(var106->class->vft[COLOR_core__array__Array__with_capacity]))(var106, 4l); /* with_capacity on <var106:Array[Array[Float]]>*/
}
var_107 = var106;
{
((void(*)(val* self, val* p0))(var_107->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_107, var_c); /* push on <var_107:Array[Array[Float]]>*/
}
{
((void(*)(val* self, val* p0))(var_107->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_107, var_d); /* push on <var_107:Array[Array[Float]]>*/
}
{
((void(*)(val* self, val* p0))(var_107->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_107, var_a); /* push on <var_107:Array[Array[Float]]>*/
}
{
((void(*)(val* self, val* p0))(var_107->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_107, var_b); /* push on <var_107:Array[Array[Float]]>*/
}
var_108 = var_107;
{
var109 = ((val*(*)(val* self))(var_108->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_108); /* iterator on <var_108:Array[Array[Float]]>*/
}
var_110 = var109;
for(;;) {
{
var111 = ((short int(*)(val* self))((((long)var_110&3)?class_info[((long)var_110&3)]:var_110->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_110); /* is_ok on <var_110:IndexedIterator[Array[Float]]>*/
}
if (var111){
} else {
goto BREAK_label;
}
{
var112 = ((val*(*)(val* self))((((long)var_110&3)?class_info[((long)var_110&3)]:var_110->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_110); /* item on <var_110:IndexedIterator[Array[Float]]>*/
}
var_v = var112;
{
((void(*)(val* self, val* p0))(var_vertices->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var_vertices, var_v); /* add_all on <var_vertices:Array[Float]>*/
}
{
((void(*)(val* self))((((long)var_110&3)?class_info[((long)var_110&3)]:var_110->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_110); /* next on <var_110:IndexedIterator[Array[Float]]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_110&3)?class_info[((long)var_110&3)]:var_110->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_110); /* finish on <var_110:IndexedIterator[Array[Float]]>*/
}
var3 = var_vertices;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_gamnit__flat__Texture___vertices].val = var3; /* _vertices on <self:Texture> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#Texture#vertices= for (self: Texture, Array[Float]) */
void gamnit__flat___Texture___vertices_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Texture___vertices].val = p0; /* _vertices on <self:Texture> */
RET_LABEL:;
}
/* method flat#Texture#texture_coords for (self: Texture): Array[Float] */
val* gamnit__flat___Texture___texture_coords(val* self) {
val* var /* : Array[Float] */;
short int var1 /* : Bool */;
val* var2 /* : Array[Float] */;
val* var3 /* : Array[Float] */;
val* var5 /* : Array[Float] */;
val* var_ /* var : Array[Float] */;
double var6 /* : Float */;
val* var7 /* : nullable Object */;
double var8 /* : Float */;
val* var9 /* : nullable Object */;
val* var_a /* var a: Array[Float] */;
val* var10 /* : Array[Float] */;
val* var_11 /* var : Array[Float] */;
double var12 /* : Float */;
val* var13 /* : nullable Object */;
double var14 /* : Float */;
val* var15 /* : nullable Object */;
val* var_b /* var b: Array[Float] */;
val* var16 /* : Array[Float] */;
val* var_17 /* var : Array[Float] */;
double var18 /* : Float */;
val* var19 /* : nullable Object */;
double var20 /* : Float */;
val* var21 /* : nullable Object */;
val* var_c /* var c: Array[Float] */;
val* var22 /* : Array[Float] */;
val* var_23 /* var : Array[Float] */;
double var24 /* : Float */;
val* var25 /* : nullable Object */;
double var26 /* : Float */;
val* var27 /* : nullable Object */;
val* var_d /* var d: Array[Float] */;
val* var28 /* : Array[Float] */;
val* var_texture_coords /* var texture_coords: Array[Float] */;
val* var29 /* : Array[Array[Float]] */;
val* var_30 /* var : Array[Array[Float]] */;
val* var_31 /* var : Array[Array[Float]] */;
val* var32 /* : Iterator[nullable Object] */;
val* var_33 /* var : IndexedIterator[Array[Float]] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_v /* var v: Array[Float] */;
var1 = self->attrs[COLOR_gamnit__flat__Texture___texture_coords].val != NULL; /* _texture_coords on <self:Texture> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__Texture___texture_coords].val; /* _texture_coords on <self:Texture> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _texture_coords");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 293);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_core__array__Array__with_capacity]))(var5, 2l); /* with_capacity on <var5:Array[Float]>*/
}
var_ = var5;
{
var6 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_left]))(self); /* offset_left on <self:Texture>*/
}
{
var7 = BOX_core__Float(var6); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var7); /* push on <var_:Array[Float]>*/
}
{
var8 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_bottom]))(self); /* offset_bottom on <self:Texture>*/
}
{
var9 = BOX_core__Float(var8); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var9); /* push on <var_:Array[Float]>*/
}
var_a = var_;
var10 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_core__array__Array__with_capacity]))(var10, 2l); /* with_capacity on <var10:Array[Float]>*/
}
var_11 = var10;
{
var12 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_right]))(self); /* offset_right on <self:Texture>*/
}
{
var13 = BOX_core__Float(var12); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_11->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_11, var13); /* push on <var_11:Array[Float]>*/
}
{
var14 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_bottom]))(self); /* offset_bottom on <self:Texture>*/
}
{
var15 = BOX_core__Float(var14); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_11->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_11, var15); /* push on <var_11:Array[Float]>*/
}
var_b = var_11;
var16 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self, long p0))(var16->class->vft[COLOR_core__array__Array__with_capacity]))(var16, 2l); /* with_capacity on <var16:Array[Float]>*/
}
var_17 = var16;
{
var18 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_left]))(self); /* offset_left on <self:Texture>*/
}
{
var19 = BOX_core__Float(var18); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_17->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_17, var19); /* push on <var_17:Array[Float]>*/
}
{
var20 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_top]))(self); /* offset_top on <self:Texture>*/
}
{
var21 = BOX_core__Float(var20); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_17->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_17, var21); /* push on <var_17:Array[Float]>*/
}
var_c = var_17;
var22 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self, long p0))(var22->class->vft[COLOR_core__array__Array__with_capacity]))(var22, 2l); /* with_capacity on <var22:Array[Float]>*/
}
var_23 = var22;
{
var24 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_right]))(self); /* offset_right on <self:Texture>*/
}
{
var25 = BOX_core__Float(var24); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_23->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_23, var25); /* push on <var_23:Array[Float]>*/
}
{
var26 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_top]))(self); /* offset_top on <self:Texture>*/
}
{
var27 = BOX_core__Float(var26); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_23->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_23, var27); /* push on <var_23:Array[Float]>*/
}
var_d = var_23;
var28 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self))(var28->class->vft[COLOR_core__kernel__Object__init]))(var28); /* init on <var28:Array[Float]>*/
}
var_texture_coords = var28;
var29 = NEW_core__Array(&type_core__Array__core__Array__core__Float);
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_core__array__Array__with_capacity]))(var29, 4l); /* with_capacity on <var29:Array[Array[Float]]>*/
}
var_30 = var29;
{
((void(*)(val* self, val* p0))(var_30->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_30, var_c); /* push on <var_30:Array[Array[Float]]>*/
}
{
((void(*)(val* self, val* p0))(var_30->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_30, var_d); /* push on <var_30:Array[Array[Float]]>*/
}
{
((void(*)(val* self, val* p0))(var_30->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_30, var_a); /* push on <var_30:Array[Array[Float]]>*/
}
{
((void(*)(val* self, val* p0))(var_30->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_30, var_b); /* push on <var_30:Array[Array[Float]]>*/
}
var_31 = var_30;
{
var32 = ((val*(*)(val* self))(var_31->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_31); /* iterator on <var_31:Array[Array[Float]]>*/
}
var_33 = var32;
for(;;) {
{
var34 = ((short int(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_33); /* is_ok on <var_33:IndexedIterator[Array[Float]]>*/
}
if (var34){
} else {
goto BREAK_label;
}
{
var35 = ((val*(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_33); /* item on <var_33:IndexedIterator[Array[Float]]>*/
}
var_v = var35;
{
((void(*)(val* self, val* p0))(var_texture_coords->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var_texture_coords, var_v); /* add_all on <var_texture_coords:Array[Float]>*/
}
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_33); /* next on <var_33:IndexedIterator[Array[Float]]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_33); /* finish on <var_33:IndexedIterator[Array[Float]]>*/
}
var3 = var_texture_coords;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_gamnit__flat__Texture___texture_coords].val = var3; /* _texture_coords on <self:Texture> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#Texture#texture_coords= for (self: Texture, Array[Float]) */
void gamnit__flat___Texture___texture_coords_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Texture___texture_coords].val = p0; /* _texture_coords on <self:Texture> */
RET_LABEL:;
}
/* method flat#Texture#texture_coords_invert_x for (self: Texture): Array[Float] */
val* gamnit__flat___Texture___texture_coords_invert_x(val* self) {
val* var /* : Array[Float] */;
short int var1 /* : Bool */;
val* var2 /* : Array[Float] */;
val* var3 /* : Array[Float] */;
val* var5 /* : Array[Float] */;
val* var_ /* var : Array[Float] */;
double var6 /* : Float */;
val* var7 /* : nullable Object */;
double var8 /* : Float */;
val* var9 /* : nullable Object */;
val* var_a /* var a: Array[Float] */;
val* var10 /* : Array[Float] */;
val* var_11 /* var : Array[Float] */;
double var12 /* : Float */;
val* var13 /* : nullable Object */;
double var14 /* : Float */;
val* var15 /* : nullable Object */;
val* var_b /* var b: Array[Float] */;
val* var16 /* : Array[Float] */;
val* var_17 /* var : Array[Float] */;
double var18 /* : Float */;
val* var19 /* : nullable Object */;
double var20 /* : Float */;
val* var21 /* : nullable Object */;
val* var_c /* var c: Array[Float] */;
val* var22 /* : Array[Float] */;
val* var_23 /* var : Array[Float] */;
double var24 /* : Float */;
val* var25 /* : nullable Object */;
double var26 /* : Float */;
val* var27 /* : nullable Object */;
val* var_d /* var d: Array[Float] */;
val* var28 /* : Array[Float] */;
val* var_texture_coords /* var texture_coords: Array[Float] */;
val* var29 /* : Array[Array[Float]] */;
val* var_30 /* var : Array[Array[Float]] */;
val* var_31 /* var : Array[Array[Float]] */;
val* var32 /* : Iterator[nullable Object] */;
val* var_33 /* var : IndexedIterator[Array[Float]] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_v /* var v: Array[Float] */;
var1 = self->attrs[COLOR_gamnit__flat__Texture___texture_coords_invert_x].val != NULL; /* _texture_coords_invert_x on <self:Texture> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__Texture___texture_coords_invert_x].val; /* _texture_coords_invert_x on <self:Texture> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _texture_coords_invert_x");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 305);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_core__array__Array__with_capacity]))(var5, 2l); /* with_capacity on <var5:Array[Float]>*/
}
var_ = var5;
{
var6 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_left]))(self); /* offset_left on <self:Texture>*/
}
{
var7 = BOX_core__Float(var6); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var7); /* push on <var_:Array[Float]>*/
}
{
var8 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_bottom]))(self); /* offset_bottom on <self:Texture>*/
}
{
var9 = BOX_core__Float(var8); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var9); /* push on <var_:Array[Float]>*/
}
var_a = var_;
var10 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_core__array__Array__with_capacity]))(var10, 2l); /* with_capacity on <var10:Array[Float]>*/
}
var_11 = var10;
{
var12 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_right]))(self); /* offset_right on <self:Texture>*/
}
{
var13 = BOX_core__Float(var12); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_11->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_11, var13); /* push on <var_11:Array[Float]>*/
}
{
var14 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_bottom]))(self); /* offset_bottom on <self:Texture>*/
}
{
var15 = BOX_core__Float(var14); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_11->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_11, var15); /* push on <var_11:Array[Float]>*/
}
var_b = var_11;
var16 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self, long p0))(var16->class->vft[COLOR_core__array__Array__with_capacity]))(var16, 2l); /* with_capacity on <var16:Array[Float]>*/
}
var_17 = var16;
{
var18 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_left]))(self); /* offset_left on <self:Texture>*/
}
{
var19 = BOX_core__Float(var18); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_17->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_17, var19); /* push on <var_17:Array[Float]>*/
}
{
var20 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_top]))(self); /* offset_top on <self:Texture>*/
}
{
var21 = BOX_core__Float(var20); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_17->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_17, var21); /* push on <var_17:Array[Float]>*/
}
var_c = var_17;
var22 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self, long p0))(var22->class->vft[COLOR_core__array__Array__with_capacity]))(var22, 2l); /* with_capacity on <var22:Array[Float]>*/
}
var_23 = var22;
{
var24 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_right]))(self); /* offset_right on <self:Texture>*/
}
{
var25 = BOX_core__Float(var24); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_23->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_23, var25); /* push on <var_23:Array[Float]>*/
}
{
var26 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_top]))(self); /* offset_top on <self:Texture>*/
}
{
var27 = BOX_core__Float(var26); /* autobox from Float to nullable Object */
((void(*)(val* self, val* p0))(var_23->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_23, var27); /* push on <var_23:Array[Float]>*/
}
var_d = var_23;
var28 = NEW_core__Array(&type_core__Array__core__Float);
{
((void(*)(val* self))(var28->class->vft[COLOR_core__kernel__Object__init]))(var28); /* init on <var28:Array[Float]>*/
}
var_texture_coords = var28;
var29 = NEW_core__Array(&type_core__Array__core__Array__core__Float);
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_core__array__Array__with_capacity]))(var29, 4l); /* with_capacity on <var29:Array[Array[Float]]>*/
}
var_30 = var29;
{
((void(*)(val* self, val* p0))(var_30->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_30, var_d); /* push on <var_30:Array[Array[Float]]>*/
}
{
((void(*)(val* self, val* p0))(var_30->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_30, var_c); /* push on <var_30:Array[Array[Float]]>*/
}
{
((void(*)(val* self, val* p0))(var_30->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_30, var_b); /* push on <var_30:Array[Array[Float]]>*/
}
{
((void(*)(val* self, val* p0))(var_30->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_30, var_a); /* push on <var_30:Array[Array[Float]]>*/
}
var_31 = var_30;
{
var32 = ((val*(*)(val* self))(var_31->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_31); /* iterator on <var_31:Array[Array[Float]]>*/
}
var_33 = var32;
for(;;) {
{
var34 = ((short int(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_33); /* is_ok on <var_33:IndexedIterator[Array[Float]]>*/
}
if (var34){
} else {
goto BREAK_label;
}
{
var35 = ((val*(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_33); /* item on <var_33:IndexedIterator[Array[Float]]>*/
}
var_v = var35;
{
((void(*)(val* self, val* p0))(var_texture_coords->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var_texture_coords, var_v); /* add_all on <var_texture_coords:Array[Float]>*/
}
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_33); /* next on <var_33:IndexedIterator[Array[Float]]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_33); /* finish on <var_33:IndexedIterator[Array[Float]]>*/
}
var3 = var_texture_coords;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_gamnit__flat__Texture___texture_coords_invert_x].val = var3; /* _texture_coords_invert_x on <self:Texture> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#Texture#texture_coords_invert_x= for (self: Texture, Array[Float]) */
void gamnit__flat___Texture___texture_coords_invert_x_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Texture___texture_coords_invert_x].val = p0; /* _texture_coords_invert_x on <self:Texture> */
RET_LABEL:;
}
/* method flat#Simple2dProgram#vertex_shader_source for (self: Simple2dProgram): Text */
val* gamnit___gamnit__Simple2dProgram___gamnit__programs__GamnitProgramFromSource__vertex_shader_source(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
var1 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___vertex_shader_source].val; /* _vertex_shader_source on <self:Simple2dProgram> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vertex_shader_source");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 322);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#Simple2dProgram#vertex_shader_source= for (self: Simple2dProgram, Text) */
void gamnit___gamnit__Simple2dProgram___vertex_shader_source_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Simple2dProgram___vertex_shader_source].val = p0; /* _vertex_shader_source on <self:Simple2dProgram> */
RET_LABEL:;
}
/* method flat#Simple2dProgram#fragment_shader_source for (self: Simple2dProgram): Text */
val* gamnit___gamnit__Simple2dProgram___gamnit__programs__GamnitProgramFromSource__fragment_shader_source(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
var1 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___fragment_shader_source].val; /* _fragment_shader_source on <self:Simple2dProgram> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _fragment_shader_source");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 356);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#Simple2dProgram#fragment_shader_source= for (self: Simple2dProgram, Text) */
void gamnit___gamnit__Simple2dProgram___fragment_shader_source_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Simple2dProgram___fragment_shader_source].val = p0; /* _fragment_shader_source on <self:Simple2dProgram> */
RET_LABEL:;
}
/* method flat#Simple2dProgram#coord for (self: Simple2dProgram): AttributeVec4 */
val* gamnit___gamnit__Simple2dProgram___coord(val* self) {
val* var /* : AttributeVec4 */;
short int var1 /* : Bool */;
val* var2 /* : AttributeVec4 */;
val* var3 /* : AttributeMap */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var1 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___coord].val != NULL; /* _coord on <self:Simple2dProgram> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___coord].val; /* _coord on <self:Simple2dProgram> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _coord");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 380);
fatal_exit(1);
}
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__attributes]))(self); /* attributes on <self:Simple2dProgram>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "coord";
var6 = core__flat___NativeString___to_s_full(var5, 5l, 5l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var3, var4); /* [] on <var3:AttributeMap>*/
}
/* <var7:nullable Object(Attribute)> isa AttributeVec4 */
cltype = type_gamnit__AttributeVec4.color;
idtype = type_gamnit__AttributeVec4.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AttributeVec4", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 381);
fatal_exit(1);
}
self->attrs[COLOR_gamnit__flat__Simple2dProgram___coord].val = var7; /* _coord on <self:Simple2dProgram> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#Simple2dProgram#coord= for (self: Simple2dProgram, AttributeVec4) */
void gamnit___gamnit__Simple2dProgram___coord_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Simple2dProgram___coord].val = p0; /* _coord on <self:Simple2dProgram> */
RET_LABEL:;
}
/* method flat#Simple2dProgram#use_texture for (self: Simple2dProgram): UniformBool */
val* gamnit___gamnit__Simple2dProgram___use_texture(val* self) {
val* var /* : UniformBool */;
short int var1 /* : Bool */;
val* var2 /* : UniformBool */;
val* var3 /* : UniformMap */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var1 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___use_texture].val != NULL; /* _use_texture on <self:Simple2dProgram> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___use_texture].val; /* _use_texture on <self:Simple2dProgram> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _use_texture");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 383);
fatal_exit(1);
}
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__uniforms]))(self); /* uniforms on <self:Simple2dProgram>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "use_texture";
var6 = core__flat___NativeString___to_s_full(var5, 11l, 11l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var3, var4); /* [] on <var3:UniformMap>*/
}
/* <var7:nullable Object(Uniform)> isa UniformBool */
cltype = type_gamnit__UniformBool.color;
idtype = type_gamnit__UniformBool.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "UniformBool", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 384);
fatal_exit(1);
}
self->attrs[COLOR_gamnit__flat__Simple2dProgram___use_texture].val = var7; /* _use_texture on <self:Simple2dProgram> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#Simple2dProgram#use_texture= for (self: Simple2dProgram, UniformBool) */
void gamnit___gamnit__Simple2dProgram___use_texture_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Simple2dProgram___use_texture].val = p0; /* _use_texture on <self:Simple2dProgram> */
RET_LABEL:;
}
/* method flat#Simple2dProgram#texture for (self: Simple2dProgram): UniformSampler2D */
val* gamnit___gamnit__Simple2dProgram___texture(val* self) {
val* var /* : UniformSampler2D */;
short int var1 /* : Bool */;
val* var2 /* : UniformSampler2D */;
val* var3 /* : UniformMap */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var1 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___texture].val != NULL; /* _texture on <self:Simple2dProgram> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___texture].val; /* _texture on <self:Simple2dProgram> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _texture");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 386);
fatal_exit(1);
}
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__uniforms]))(self); /* uniforms on <self:Simple2dProgram>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "texture";
var6 = core__flat___NativeString___to_s_full(var5, 7l, 7l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var3, var4); /* [] on <var3:UniformMap>*/
}
/* <var7:nullable Object(Uniform)> isa UniformSampler2D */
cltype = type_gamnit__UniformSampler2D.color;
idtype = type_gamnit__UniformSampler2D.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "UniformSampler2D", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 387);
fatal_exit(1);
}
self->attrs[COLOR_gamnit__flat__Simple2dProgram___texture].val = var7; /* _texture on <self:Simple2dProgram> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#Simple2dProgram#texture= for (self: Simple2dProgram, UniformSampler2D) */
void gamnit___gamnit__Simple2dProgram___texture_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Simple2dProgram___texture].val = p0; /* _texture on <self:Simple2dProgram> */
RET_LABEL:;
}
/* method flat#Simple2dProgram#tex_coord for (self: Simple2dProgram): AttributeVec2 */
val* gamnit___gamnit__Simple2dProgram___tex_coord(val* self) {
val* var /* : AttributeVec2 */;
short int var1 /* : Bool */;
val* var2 /* : AttributeVec2 */;
val* var3 /* : AttributeMap */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var1 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___tex_coord].val != NULL; /* _tex_coord on <self:Simple2dProgram> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___tex_coord].val; /* _tex_coord on <self:Simple2dProgram> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tex_coord");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 389);
fatal_exit(1);
}
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__attributes]))(self); /* attributes on <self:Simple2dProgram>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "tex_coord";
var6 = core__flat___NativeString___to_s_full(var5, 9l, 9l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var3, var4); /* [] on <var3:AttributeMap>*/
}
/* <var7:nullable Object(Attribute)> isa AttributeVec2 */
cltype = type_gamnit__AttributeVec2.color;
idtype = type_gamnit__AttributeVec2.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AttributeVec2", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 390);
fatal_exit(1);
}
self->attrs[COLOR_gamnit__flat__Simple2dProgram___tex_coord].val = var7; /* _tex_coord on <self:Simple2dProgram> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#Simple2dProgram#tex_coord= for (self: Simple2dProgram, AttributeVec2) */
void gamnit___gamnit__Simple2dProgram___tex_coord_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Simple2dProgram___tex_coord].val = p0; /* _tex_coord on <self:Simple2dProgram> */
RET_LABEL:;
}
/* method flat#Simple2dProgram#color for (self: Simple2dProgram): AttributeVec4 */
val* gamnit___gamnit__Simple2dProgram___color(val* self) {
val* var /* : AttributeVec4 */;
short int var1 /* : Bool */;
val* var2 /* : AttributeVec4 */;
val* var3 /* : AttributeMap */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var1 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___color].val != NULL; /* _color on <self:Simple2dProgram> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___color].val; /* _color on <self:Simple2dProgram> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _color");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 392);
fatal_exit(1);
}
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__attributes]))(self); /* attributes on <self:Simple2dProgram>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "color";
var6 = core__flat___NativeString___to_s_full(var5, 5l, 5l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var3, var4); /* [] on <var3:AttributeMap>*/
}
/* <var7:nullable Object(Attribute)> isa AttributeVec4 */
cltype = type_gamnit__AttributeVec4.color;
idtype = type_gamnit__AttributeVec4.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AttributeVec4", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 393);
fatal_exit(1);
}
self->attrs[COLOR_gamnit__flat__Simple2dProgram___color].val = var7; /* _color on <self:Simple2dProgram> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#Simple2dProgram#color= for (self: Simple2dProgram, AttributeVec4) */
void gamnit___gamnit__Simple2dProgram___color_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Simple2dProgram___color].val = p0; /* _color on <self:Simple2dProgram> */
RET_LABEL:;
}
/* method flat#Simple2dProgram#translation for (self: Simple2dProgram): AttributeVec4 */
val* gamnit___gamnit__Simple2dProgram___translation(val* self) {
val* var /* : AttributeVec4 */;
short int var1 /* : Bool */;
val* var2 /* : AttributeVec4 */;
val* var3 /* : AttributeMap */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var1 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___translation].val != NULL; /* _translation on <self:Simple2dProgram> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___translation].val; /* _translation on <self:Simple2dProgram> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _translation");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 395);
fatal_exit(1);
}
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__attributes]))(self); /* attributes on <self:Simple2dProgram>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "translation";
var6 = core__flat___NativeString___to_s_full(var5, 11l, 11l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var3, var4); /* [] on <var3:AttributeMap>*/
}
/* <var7:nullable Object(Attribute)> isa AttributeVec4 */
cltype = type_gamnit__AttributeVec4.color;
idtype = type_gamnit__AttributeVec4.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AttributeVec4", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 396);
fatal_exit(1);
}
self->attrs[COLOR_gamnit__flat__Simple2dProgram___translation].val = var7; /* _translation on <self:Simple2dProgram> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#Simple2dProgram#translation= for (self: Simple2dProgram, AttributeVec4) */
void gamnit___gamnit__Simple2dProgram___translation_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Simple2dProgram___translation].val = p0; /* _translation on <self:Simple2dProgram> */
RET_LABEL:;
}
/* method flat#Simple2dProgram#rotation for (self: Simple2dProgram): UniformMat4 */
val* gamnit___gamnit__Simple2dProgram___rotation(val* self) {
val* var /* : UniformMat4 */;
short int var1 /* : Bool */;
val* var2 /* : UniformMat4 */;
val* var3 /* : UniformMap */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var1 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___rotation].val != NULL; /* _rotation on <self:Simple2dProgram> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___rotation].val; /* _rotation on <self:Simple2dProgram> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rotation");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 398);
fatal_exit(1);
}
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__uniforms]))(self); /* uniforms on <self:Simple2dProgram>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "rotation";
var6 = core__flat___NativeString___to_s_full(var5, 8l, 8l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var3, var4); /* [] on <var3:UniformMap>*/
}
/* <var7:nullable Object(Uniform)> isa UniformMat4 */
cltype = type_gamnit__UniformMat4.color;
idtype = type_gamnit__UniformMat4.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "UniformMat4", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 399);
fatal_exit(1);
}
self->attrs[COLOR_gamnit__flat__Simple2dProgram___rotation].val = var7; /* _rotation on <self:Simple2dProgram> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#Simple2dProgram#rotation= for (self: Simple2dProgram, UniformMat4) */
void gamnit___gamnit__Simple2dProgram___rotation_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Simple2dProgram___rotation].val = p0; /* _rotation on <self:Simple2dProgram> */
RET_LABEL:;
}
/* method flat#Simple2dProgram#scale for (self: Simple2dProgram): AttributeFloat */
val* gamnit___gamnit__Simple2dProgram___scale(val* self) {
val* var /* : AttributeFloat */;
short int var1 /* : Bool */;
val* var2 /* : AttributeFloat */;
val* var3 /* : AttributeMap */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var1 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___scale].val != NULL; /* _scale on <self:Simple2dProgram> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___scale].val; /* _scale on <self:Simple2dProgram> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scale");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 401);
fatal_exit(1);
}
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__attributes]))(self); /* attributes on <self:Simple2dProgram>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "scale";
var6 = core__flat___NativeString___to_s_full(var5, 5l, 5l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var3, var4); /* [] on <var3:AttributeMap>*/
}
/* <var7:nullable Object(Attribute)> isa AttributeFloat */
cltype = type_gamnit__AttributeFloat.color;
idtype = type_gamnit__AttributeFloat.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AttributeFloat", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 402);
fatal_exit(1);
}
self->attrs[COLOR_gamnit__flat__Simple2dProgram___scale].val = var7; /* _scale on <self:Simple2dProgram> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#Simple2dProgram#scale= for (self: Simple2dProgram, AttributeFloat) */
void gamnit___gamnit__Simple2dProgram___scale_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Simple2dProgram___scale].val = p0; /* _scale on <self:Simple2dProgram> */
RET_LABEL:;
}
/* method flat#Simple2dProgram#mvp for (self: Simple2dProgram): UniformMat4 */
val* gamnit___gamnit__Simple2dProgram___mvp(val* self) {
val* var /* : UniformMat4 */;
short int var1 /* : Bool */;
val* var2 /* : UniformMat4 */;
val* var3 /* : UniformMap */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var1 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___mvp].val != NULL; /* _mvp on <self:Simple2dProgram> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__flat__Simple2dProgram___mvp].val; /* _mvp on <self:Simple2dProgram> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvp");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 404);
fatal_exit(1);
}
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__uniforms]))(self); /* uniforms on <self:Simple2dProgram>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "mvp";
var6 = core__flat___NativeString___to_s_full(var5, 3l, 3l);
var4 = var6;
varonce = var4;
}
{
var7 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var3, var4); /* [] on <var3:UniformMap>*/
}
/* <var7:nullable Object(Uniform)> isa UniformMat4 */
cltype = type_gamnit__UniformMat4.color;
idtype = type_gamnit__UniformMat4.id;
if(cltype >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
var_class_name = var7 == NULL ? "null" : var7->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "UniformMat4", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__flat, 405);
fatal_exit(1);
}
self->attrs[COLOR_gamnit__flat__Simple2dProgram___mvp].val = var7; /* _mvp on <self:Simple2dProgram> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#Simple2dProgram#mvp= for (self: Simple2dProgram, UniformMat4) */
void gamnit___gamnit__Simple2dProgram___mvp_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__flat__Simple2dProgram___mvp].val = p0; /* _mvp on <self:Simple2dProgram> */
RET_LABEL:;
}
/* method flat#Point3d#offset for (self: Point3d[Numeric], Numeric, Numeric, Numeric): Point3d[Float] */
val* gamnit__flat___geometry__Point3d___offset(val* self, val* p0, val* p1, val* p2) {
val* var /* : Point3d[Float] */;
val* var_x /* var x: Numeric */;
val* var_y /* var y: Numeric */;
val* var_z /* var z: Numeric */;
val* var1 /* : Point3d[Float] */;
val* var2 /* : Numeric */;
double var3 /* : Float */;
double var4 /* : Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var8 /* : Float */;
val* var9 /* : Numeric */;
double var10 /* : Float */;
double var11 /* : Float */;
double var12 /* : Float */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
double var18 /* : Float */;
val* var19 /* : Numeric */;
double var20 /* : Float */;
double var21 /* : Float */;
double var22 /* : Float */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
double var28 /* : Float */;
val* var29 /* : Numeric */;
val* var30 /* : Numeric */;
val* var31 /* : Numeric */;
var_x = p0;
var_y = p1;
var_z = p2;
var1 = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_geometry__points_and_lines__IPoint__x]))(self); /* x on <self:Point3d[Numeric]>*/
}
{
var3 = ((double(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var2); /* to_f on <var2:Numeric>*/
}
{
var4 = ((double(*)(val* self))((((long)var_x&3)?class_info[((long)var_x&3)]:var_x->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var_x); /* to_f on <var_x:Numeric>*/
}
{
{ /* Inline kernel#Float#+ (var3,var4) on <var3:Float> */
/* Covariant cast for argument 0 (i) <var4:Float> isa OTHER */
/* <var4:Float> isa OTHER */
var7 = 1; /* easy <var4:Float> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var8 = var3 + var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_geometry__points_and_lines__IPoint__y]))(self); /* y on <self:Point3d[Numeric]>*/
}
{
var10 = ((double(*)(val* self))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var9); /* to_f on <var9:Numeric>*/
}
{
var11 = ((double(*)(val* self))((((long)var_y&3)?class_info[((long)var_y&3)]:var_y->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var_y); /* to_f on <var_y:Numeric>*/
}
{
{ /* Inline kernel#Float#+ (var10,var11) on <var10:Float> */
/* Covariant cast for argument 0 (i) <var11:Float> isa OTHER */
/* <var11:Float> isa OTHER */
var14 = 1; /* easy <var11:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var18 = var10 + var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_geometry__points_and_lines__IPoint3d__z]))(self); /* z on <self:Point3d[Numeric]>*/
}
{
var20 = ((double(*)(val* self))((((long)var19&3)?class_info[((long)var19&3)]:var19->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var19); /* to_f on <var19:Numeric>*/
}
{
var21 = ((double(*)(val* self))((((long)var_z&3)?class_info[((long)var_z&3)]:var_z->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var_z); /* to_f on <var_z:Numeric>*/
}
{
{ /* Inline kernel#Float#+ (var20,var21) on <var20:Float> */
/* Covariant cast for argument 0 (i) <var21:Float> isa OTHER */
/* <var21:Float> isa OTHER */
var24 = 1; /* easy <var21:Float> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var28 = var20 + var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
var29 = BOX_core__Float(var5); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var1, var29); /* x= on <var1:Point3d[Float]>*/
}
{
var30 = BOX_core__Float(var12); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var1, var30); /* y= on <var1:Point3d[Float]>*/
}
{
var31 = BOX_core__Float(var22); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var1, var31); /* z= on <var1:Point3d[Float]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Point3d[Float]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
