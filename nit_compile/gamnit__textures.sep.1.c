#include "gamnit__textures.sep.0.h"
/* method textures#Texture#new for (self: Texture, Text): Texture */
val* gamnit___gamnit__Texture___new(val* self, val* p0) {
val* var /* : Texture */;
val* var_path /* var path: Text */;
val* var1 /* : GamnitAssetTexture */;
val* var2 /* : String */;
var_path = p0;
var1 = NEW_gamnit__GamnitAssetTexture(&type_gamnit__GamnitAssetTexture);
{
var2 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_path); /* to_s on <var_path:Text>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_gamnit__textures__GamnitAssetTexture__path_61d]))(var1, var2); /* path= on <var1:GamnitAssetTexture>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:GamnitAssetTexture>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method textures#Texture#root for (self: Texture): GamnitRootTexture */
val* gamnit___gamnit__Texture___root(val* self) {
val* var /* : GamnitRootTexture */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "root", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__textures, 26);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method textures#Texture#width for (self: Texture): Float */
double gamnit___gamnit__Texture___width(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__textures__Texture___width].d; /* _width on <self:Texture> */
var = var1;
RET_LABEL:;
return var;
}
/* method textures#Texture#width= for (self: Texture, Float) */
void gamnit___gamnit__Texture___width_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__textures__Texture___width].d = p0; /* _width on <self:Texture> */
RET_LABEL:;
}
/* method textures#Texture#height for (self: Texture): Float */
double gamnit___gamnit__Texture___height(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__textures__Texture___height].d; /* _height on <self:Texture> */
var = var1;
RET_LABEL:;
return var;
}
/* method textures#Texture#height= for (self: Texture, Float) */
void gamnit___gamnit__Texture___height_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__textures__Texture___height].d = p0; /* _height on <self:Texture> */
RET_LABEL:;
}
/* method textures#Texture#load for (self: Texture, nullable Bool) */
void gamnit___gamnit__Texture___load(val* self, val* p0) {
val* var_force /* var force: nullable Bool */;
var_force = p0;
RET_LABEL:;
}
/* method textures#Texture#error for (self: Texture): nullable Error */
val* gamnit___gamnit__Texture___error(val* self) {
val* var /* : nullable Error */;
val* var1 /* : nullable Error */;
var1 = self->attrs[COLOR_gamnit__textures__Texture___error].val; /* _error on <self:Texture> */
var = var1;
RET_LABEL:;
return var;
}
/* method textures#Texture#error= for (self: Texture, nullable Error) */
void gamnit___gamnit__Texture___error_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__textures__Texture___error].val = p0; /* _error on <self:Texture> */
RET_LABEL:;
}
/* method textures#Texture#gl_texture for (self: Texture): Int */
long gamnit___gamnit__Texture___gl_texture(val* self) {
long var /* : Int */;
val* var1 /* : GamnitRootTexture */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__root]))(self); /* root on <self:Texture>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_gamnit__textures__Texture__gl_texture]))(var1); /* gl_texture on <var1:GamnitRootTexture>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method textures#Texture#subtexture for (self: Texture, Numeric, Numeric, Numeric, Numeric): GamnitSubtexture */
val* gamnit___gamnit__Texture___subtexture(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : GamnitSubtexture */;
val* var_left /* var left: Numeric */;
val* var_top /* var top: Numeric */;
val* var_width /* var width: Numeric */;
val* var_height /* var height: Numeric */;
val* var1 /* : GamnitSubtexture */;
val* var2 /* : GamnitRootTexture */;
double var3 /* : Float */;
double var4 /* : Float */;
double var5 /* : Float */;
double var6 /* : Float */;
val* var_subtex /* var subtex: GamnitSubtexture */;
var_left = p0;
var_top = p1;
var_width = p2;
var_height = p3;
var1 = NEW_gamnit__GamnitSubtexture(&type_gamnit__GamnitSubtexture);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__root]))(self); /* root on <self:Texture>*/
}
{
var3 = ((double(*)(val* self))((((long)var_left&3)?class_info[((long)var_left&3)]:var_left->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var_left); /* to_f on <var_left:Numeric>*/
}
{
var4 = ((double(*)(val* self))((((long)var_top&3)?class_info[((long)var_top&3)]:var_top->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var_top); /* to_f on <var_top:Numeric>*/
}
{
var5 = ((double(*)(val* self))((((long)var_width&3)?class_info[((long)var_width&3)]:var_width->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var_width); /* to_f on <var_width:Numeric>*/
}
{
var6 = ((double(*)(val* self))((((long)var_height&3)?class_info[((long)var_height&3)]:var_height->class)->vft[COLOR_core__kernel__Numeric__to_f]))(var_height); /* to_f on <var_height:Numeric>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_gamnit__textures__GamnitSubtexture__root_61d]))(var1, var2); /* root= on <var1:GamnitSubtexture>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_gamnit__textures__GamnitSubtexture__parent_61d]))(var1, self); /* parent= on <var1:GamnitSubtexture>*/
}
{
((void(*)(val* self, double p0))(var1->class->vft[COLOR_gamnit__textures__GamnitSubtexture__left_61d]))(var1, var3); /* left= on <var1:GamnitSubtexture>*/
}
{
((void(*)(val* self, double p0))(var1->class->vft[COLOR_gamnit__textures__GamnitSubtexture__top_61d]))(var1, var4); /* top= on <var1:GamnitSubtexture>*/
}
{
((void(*)(val* self, double p0, double p1))(var1->class->vft[COLOR_gamnit__textures__GamnitSubtexture__set_wh]))(var1, var5, var6); /* set_wh on <var1:GamnitSubtexture>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:GamnitSubtexture>*/
}
var_subtex = var1;
var = var_subtex;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method textures#Texture#offset_left for (self: Texture): Float */
double gamnit___gamnit__Texture___offset_left(val* self) {
double var /* : Float */;
var = 0.0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method textures#Texture#offset_top for (self: Texture): Float */
double gamnit___gamnit__Texture___offset_top(val* self) {
double var /* : Float */;
var = 0.0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method textures#Texture#offset_right for (self: Texture): Float */
double gamnit___gamnit__Texture___offset_right(val* self) {
double var /* : Float */;
var = 1.0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method textures#Texture#offset_bottom for (self: Texture): Float */
double gamnit___gamnit__Texture___offset_bottom(val* self) {
double var /* : Float */;
var = 1.0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method textures#CheckerTexture#load for (self: CheckerTexture, nullable Bool) */
void gamnit___gamnit__CheckerTexture___Texture__load(val* self, val* p0) {
val* var_force /* var force: nullable Bool */;
val* var /* : Array[Byte] */;
val* var_ /* var : Array[Byte] */;
val* var1 /* : nullable Object */;
val* var2 /* : nullable Object */;
val* var3 /* : nullable Object */;
val* var4 /* : nullable Object */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
val* var7 /* : nullable Object */;
val* var8 /* : nullable Object */;
val* var9 /* : nullable Object */;
val* var10 /* : nullable Object */;
val* var11 /* : nullable Object */;
val* var12 /* : nullable Object */;
val* var_pixels /* var pixels: Array[Byte] */;
val* var13 /* : CByteArray */;
val* var14 /* : CByteArray */;
val* var_cpixels /* var cpixels: CByteArray */;
val* var15 /* : NativeCArray */;
val* var16 /* : Sys */;
val* var17 /* : GLPixelFormat */;
var_force = p0;
var = NEW_core__Array(&type_core__Array__core__Byte);
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_core__array__Array__with_capacity]))(var, 12l); /* with_capacity on <var:Array[Byte]>*/
}
var_ = var;
{
var1 = BOX_core__Byte(((unsigned char)0xff)); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var1); /* push on <var_:Array[Byte]>*/
}
{
var2 = BOX_core__Byte(((unsigned char)0x00)); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var2); /* push on <var_:Array[Byte]>*/
}
{
var3 = BOX_core__Byte(((unsigned char)0x00)); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var3); /* push on <var_:Array[Byte]>*/
}
{
var4 = BOX_core__Byte(((unsigned char)0x00)); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var4); /* push on <var_:Array[Byte]>*/
}
{
var5 = BOX_core__Byte(((unsigned char)0xff)); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var5); /* push on <var_:Array[Byte]>*/
}
{
var6 = BOX_core__Byte(((unsigned char)0x00)); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var6); /* push on <var_:Array[Byte]>*/
}
{
var7 = BOX_core__Byte(((unsigned char)0x00)); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var7); /* push on <var_:Array[Byte]>*/
}
{
var8 = BOX_core__Byte(((unsigned char)0x00)); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var8); /* push on <var_:Array[Byte]>*/
}
{
var9 = BOX_core__Byte(((unsigned char)0xff)); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var9); /* push on <var_:Array[Byte]>*/
}
{
var10 = BOX_core__Byte(((unsigned char)0xff)); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var10); /* push on <var_:Array[Byte]>*/
}
{
var11 = BOX_core__Byte(((unsigned char)0xff)); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var11); /* push on <var_:Array[Byte]>*/
}
{
var12 = BOX_core__Byte(((unsigned char)0xff)); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var12); /* push on <var_:Array[Byte]>*/
}
var_pixels = var_;
var13 = NEW_c__CByteArray(&type_c__CByteArray);
{
var14 = ((val*(*)(val* self, val* p0))(var13->class->vft[COLOR_c__CByteArray__from]))(var13, var_pixels); /* from on <var13:CByteArray>*/
}
var_cpixels = var14;
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__textures__Texture__width_61d]))(self, 2.0); /* width= on <self:CheckerTexture>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__textures__Texture__height_61d]))(self, 2.0); /* height= on <self:CheckerTexture>*/
}
{
var15 = ((val*(*)(val* self))(var_cpixels->class->vft[COLOR_c__CArray__native_array]))(var_cpixels); /* native_array on <var_cpixels:CByteArray>*/
}
var16 = glob_sys;
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_glesv2__Sys__gl_RGB]))(var16); /* gl_RGB on <var16:Sys>*/
}
{
((void(*)(val* self, val* p0, long p1, long p2, val* p3))(self->class->vft[COLOR_gamnit__textures__GamnitRootTexture__load_from_pixels]))(self, var15, 2l, 2l, var17); /* load_from_pixels on <self:CheckerTexture>*/
}
{
((void(*)(val* self))(var_cpixels->class->vft[COLOR_c__CArray__destroy]))(var_cpixels); /* destroy on <var_cpixels:CByteArray>*/
}
RET_LABEL:;
}
/* method textures#GamnitRootTexture#root for (self: GamnitRootTexture): GamnitRootTexture */
val* gamnit___gamnit__GamnitRootTexture___Texture__root(val* self) {
val* var /* : GamnitRootTexture */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method textures#GamnitRootTexture#loaded for (self: GamnitRootTexture): Bool */
short int gamnit___gamnit__GamnitRootTexture___loaded(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_gamnit__textures__GamnitRootTexture___loaded].s; /* _loaded on <self:GamnitRootTexture> */
var = var1;
RET_LABEL:;
return var;
}
/* method textures#GamnitRootTexture#loaded= for (self: GamnitRootTexture, Bool) */
void gamnit___gamnit__GamnitRootTexture___loaded_61d(val* self, short int p0) {
self->attrs[COLOR_gamnit__textures__GamnitRootTexture___loaded].s = p0; /* _loaded on <self:GamnitRootTexture> */
RET_LABEL:;
}
/* method textures#GamnitRootTexture#gl_texture for (self: GamnitRootTexture): Int */
long gamnit___gamnit__GamnitRootTexture___Texture__gl_texture(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_gamnit__textures__GamnitRootTexture___gl_texture].l; /* _gl_texture on <self:GamnitRootTexture> */
var = var1;
RET_LABEL:;
return var;
}
/* method textures#GamnitRootTexture#gl_texture= for (self: GamnitRootTexture, Int) */
void gamnit___gamnit__GamnitRootTexture___gl_texture_61d(val* self, long p0) {
self->attrs[COLOR_gamnit__textures__GamnitRootTexture___gl_texture].l = p0; /* _gl_texture on <self:GamnitRootTexture> */
RET_LABEL:;
}
/* method textures#GamnitRootTexture#init for (self: GamnitRootTexture) */
void gamnit___gamnit__GamnitRootTexture___core__kernel__Object__init(val* self) {
val* var /* : Sys */;
val* var1 /* : TextureSet */;
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit___gamnit__GamnitRootTexture___core__kernel__Object__init]))(self); /* init on <self:GamnitRootTexture>*/
}
var = glob_sys;
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_gamnit__textures__Sys__all_root_textures]))(var); /* all_root_textures on <var:Sys>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var1, self); /* add on <var1:TextureSet>*/
}
RET_LABEL:;
}
/* method textures#GamnitRootTexture#load_from_pixels for (self: GamnitRootTexture, Pointer, Int, Int, GLPixelFormat) */
void gamnit___gamnit__GamnitRootTexture___load_from_pixels(val* self, val* p0, long p1, long p2, val* p3) {
val* var_pixels /* var pixels: Pointer */;
long var_width /* var width: Int */;
long var_height /* var height: Int */;
val* var_format /* var format: GLPixelFormat */;
val* var /* : Sys */;
val* var1 /* : Sys */;
val* var2 /* : GLGetParameterName */;
long var3 /* : Int */;
long var_max_texture_size /* var max_texture_size: Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : Error */;
val* var17 /* : NativeArray[String] */;
static val* varonce;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : Sys */;
val* var30 /* : Sys */;
val* var31 /* : GLPack */;
val* var32 /* : Sys */;
val* var33 /* : Array[Int] */;
val* var34 /* : nullable Object */;
long var35 /* : Int */;
long var_tex /* var tex: Int */;
val* var36 /* : Sys */;
val* var37 /* : Sys */;
val* var38 /* : GLTextureTarget */;
val* var39 /* : Sys */;
val* var40 /* : Sys */;
val* var41 /* : GLTextureTarget */;
val* var42 /* : Sys */;
val* var43 /* : GLDataType */;
val* var44 /* : Sys */;
val* var45 /* : Sys */;
val* var46 /* : GLHintTarget */;
val* var47 /* : Sys */;
val* var48 /* : GLHintMode */;
val* var49 /* : Sys */;
val* var50 /* : Sys */;
val* var51 /* : GLTextureTarget */;
var_pixels = p0;
var_width = p1;
var_height = p2;
var_format = p3;
var = glob_sys;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_glesv2__Sys__gl_MAX_TEXTURE_SIZE]))(var1); /* gl_MAX_TEXTURE_SIZE on <var1:Sys>*/
}
{
var3 = ((long(*)(val* self, val* p0))(var->class->vft[COLOR_glesv2__Sys__glGetIntegerv]))(var, var2); /* glGetIntegerv on <var:Sys>*/
}
var_max_texture_size = var3;
{
{ /* Inline kernel#Int#> (var_width,var_max_texture_size) on <var_width:Int> */
/* Covariant cast for argument 0 (i) <var_max_texture_size:Int> isa OTHER */
/* <var_max_texture_size:Int> isa OTHER */
var7 = 1; /* easy <var_max_texture_size:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var8 = var_width > var_max_texture_size;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
var4 = var_;
} else {
{
{ /* Inline kernel#Int#> (var_height,var_max_texture_size) on <var_height:Int> */
/* Covariant cast for argument 0 (i) <var_max_texture_size:Int> isa OTHER */
/* <var_max_texture_size:Int> isa OTHER */
var11 = 1; /* easy <var_max_texture_size:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var15 = var_height > var_max_texture_size;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var4 = var9;
}
if (var4){
var16 = NEW_core__Error(&type_core__Error);
if (unlikely(varonce==NULL)) {
var17 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "Texture ";
var21 = core__flat___NativeString___to_s_full(var20, 8l, 8l);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var17)->values[0]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " width or height is over the GL_MAX_TEXTURE_SIZE of ";
var25 = core__flat___NativeString___to_s_full(var24, 52l, 52l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var17)->values[2]=var23;
} else {
var17 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:GamnitRootTexture>*/
}
((struct instance_core__NativeArray*)var17)->values[1]=var26;
var27 = core__flat___Int___core__abstract_text__Object__to_s(var_max_texture_size);
((struct instance_core__NativeArray*)var17)->values[3]=var27;
{
var28 = ((val*(*)(val* self))(var17->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce = var17;
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_core__error__Error__message_61d]))(var16, var28); /* message= on <var16:Error>*/
}
{
((void(*)(val* self))(var16->class->vft[COLOR_core__kernel__Object__init]))(var16); /* init on <var16:Error>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__textures__Texture__error_61d]))(self, var16); /* error= on <self:GamnitRootTexture>*/
}
goto RET_LABEL;
} else {
}
var29 = glob_sys;
var30 = glob_sys;
{
var31 = ((val*(*)(val* self))(var30->class->vft[COLOR_glesv2__Sys__gl_UNPACK_ALIGNEMENT]))(var30); /* gl_UNPACK_ALIGNEMENT on <var30:Sys>*/
}
{
((void(*)(val* self, val* p0, long p1))(var29->class->vft[COLOR_glesv2__Sys__glPixelStorei]))(var29, var31, 1l); /* glPixelStorei on <var29:Sys>*/
}
var32 = glob_sys;
{
var33 = ((val*(*)(val* self, long p0))(var32->class->vft[COLOR_glesv2__Sys__glGenTextures]))(var32, 1l); /* glGenTextures on <var32:Sys>*/
}
{
var34 = ((val*(*)(val* self, long p0))(var33->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var33, 0l); /* [] on <var33:Array[Int]>*/
}
var35 = (long)(var34)>>2;
var_tex = var35;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_gamnit__textures__GamnitRootTexture__gl_texture_61d]))(self, var_tex); /* gl_texture= on <self:GamnitRootTexture>*/
}
var36 = glob_sys;
var37 = glob_sys;
{
var38 = ((val*(*)(val* self))(var37->class->vft[COLOR_glesv2__Sys__gl_TEXTURE_95d2D]))(var37); /* gl_TEXTURE_2D on <var37:Sys>*/
}
{
((void(*)(val* self, val* p0, long p1))(var36->class->vft[COLOR_glesv2__Sys__glBindTexture]))(var36, var38, var_tex); /* glBindTexture on <var36:Sys>*/
}
var39 = glob_sys;
var40 = glob_sys;
{
var41 = ((val*(*)(val* self))(var40->class->vft[COLOR_glesv2__Sys__gl_TEXTURE_95d2D]))(var40); /* gl_TEXTURE_2D on <var40:Sys>*/
}
var42 = glob_sys;
{
var43 = ((val*(*)(val* self))(var42->class->vft[COLOR_glesv2__Sys__gl_UNSIGNED_BYTE]))(var42); /* gl_UNSIGNED_BYTE on <var42:Sys>*/
}
{
((void(*)(val* self, val* p0, long p1, val* p2, long p3, long p4, long p5, val* p6, val* p7, val* p8))(var39->class->vft[COLOR_glesv2__Sys__glTexImage2D]))(var39, var41, 0l, var_format, var_width, var_height, 0l, var_format, var43, var_pixels); /* glTexImage2D on <var39:Sys>*/
}
var44 = glob_sys;
var45 = glob_sys;
{
var46 = ((val*(*)(val* self))(var45->class->vft[COLOR_glesv2__Sys__gl_GENERATE_MIPMAP_HINT]))(var45); /* gl_GENERATE_MIPMAP_HINT on <var45:Sys>*/
}
var47 = glob_sys;
{
var48 = ((val*(*)(val* self))(var47->class->vft[COLOR_glesv2__Sys__gl_NICEST]))(var47); /* gl_NICEST on <var47:Sys>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var44->class->vft[COLOR_glesv2__Sys__glHint]))(var44, var46, var48); /* glHint on <var44:Sys>*/
}
var49 = glob_sys;
var50 = glob_sys;
{
var51 = ((val*(*)(val* self))(var50->class->vft[COLOR_glesv2__Sys__gl_TEXTURE_95d2D]))(var50); /* gl_TEXTURE_2D on <var50:Sys>*/
}
{
((void(*)(val* self, val* p0))(var49->class->vft[COLOR_glesv2__Sys__glGenerateMipmap]))(var49, var51); /* glGenerateMipmap on <var49:Sys>*/
}
RET_LABEL:;
}
/* method textures#GamnitRootTexture#pixelated= for (self: GamnitRootTexture, Bool) */
void gamnit___gamnit__GamnitRootTexture___pixelated_61d(val* self, short int p0) {
short int var_pixelated /* var pixelated: Bool */;
val* var /* : Sys */;
val* var1 /* : Sys */;
val* var2 /* : GLTextureTarget */;
long var3 /* : Int */;
val* var4 /* : GLTexParameteri */;
val* var5 /* : Sys */;
val* var6 /* : GLTexParameteri */;
val* var7 /* : Sys */;
val* var8 /* : GLTexParameteri */;
val* var_param /* var param: GLTexParameteri */;
val* var9 /* : Sys */;
val* var10 /* : Sys */;
val* var11 /* : GLTextureTarget */;
val* var12 /* : Sys */;
val* var13 /* : GLTexParameteriName */;
val* var14 /* : Sys */;
val* var15 /* : Sys */;
val* var16 /* : GLTextureTarget */;
val* var17 /* : Sys */;
val* var18 /* : GLTexParameteriName */;
var_pixelated = p0;
var = glob_sys;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_glesv2__Sys__gl_TEXTURE_95d2D]))(var1); /* gl_TEXTURE_2D on <var1:Sys>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__gl_texture]))(self); /* gl_texture on <self:GamnitRootTexture>*/
}
{
((void(*)(val* self, val* p0, long p1))(var->class->vft[COLOR_glesv2__Sys__glBindTexture]))(var, var2, var3); /* glBindTexture on <var:Sys>*/
}
if (var_pixelated){
var5 = glob_sys;
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_glesv2__Sys__gl_NEAREST]))(var5); /* gl_NEAREST on <var5:Sys>*/
}
var4 = var6;
} else {
var7 = glob_sys;
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_glesv2__Sys__gl_LINEAR]))(var7); /* gl_LINEAR on <var7:Sys>*/
}
var4 = var8;
}
var_param = var4;
var9 = glob_sys;
var10 = glob_sys;
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_glesv2__Sys__gl_TEXTURE_95d2D]))(var10); /* gl_TEXTURE_2D on <var10:Sys>*/
}
var12 = glob_sys;
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_glesv2__Sys__gl_TEXTURE_MIN_FILTER]))(var12); /* gl_TEXTURE_MIN_FILTER on <var12:Sys>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var9->class->vft[COLOR_glesv2__Sys__glTexParameteri]))(var9, var11, var13, var_param); /* glTexParameteri on <var9:Sys>*/
}
var14 = glob_sys;
var15 = glob_sys;
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_glesv2__Sys__gl_TEXTURE_95d2D]))(var15); /* gl_TEXTURE_2D on <var15:Sys>*/
}
var17 = glob_sys;
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_glesv2__Sys__gl_TEXTURE_MAG_FILTER]))(var17); /* gl_TEXTURE_MAG_FILTER on <var17:Sys>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var14->class->vft[COLOR_glesv2__Sys__glTexParameteri]))(var14, var16, var18, var_param); /* glTexParameteri on <var14:Sys>*/
}
RET_LABEL:;
}
/* method textures#GamnitRootTexture#deleted for (self: GamnitRootTexture): Bool */
short int gamnit___gamnit__GamnitRootTexture___deleted(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_gamnit__textures__GamnitRootTexture___deleted].s; /* _deleted on <self:GamnitRootTexture> */
var = var1;
RET_LABEL:;
return var;
}
/* method textures#GamnitRootTexture#deleted= for (self: GamnitRootTexture, Bool) */
void gamnit___gamnit__GamnitRootTexture___deleted_61d(val* self, short int p0) {
self->attrs[COLOR_gamnit__textures__GamnitRootTexture___deleted].s = p0; /* _deleted on <self:GamnitRootTexture> */
RET_LABEL:;
}
/* method textures#GamnitRootTexture#delete for (self: GamnitRootTexture) */
void gamnit___gamnit__GamnitRootTexture___delete(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var_ /* var : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__textures__GamnitRootTexture__deleted]))(self); /* deleted on <self:GamnitRootTexture>*/
}
var_ = var1;
if (var1){
var = var_;
} else {
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__textures__GamnitRootTexture__loaded]))(self); /* loaded on <self:GamnitRootTexture>*/
}
var3 = !var2;
var = var3;
}
if (var){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_gamnit__textures__GamnitRootTexture__deleted_61d]))(self, 1); /* deleted= on <self:GamnitRootTexture>*/
}
RET_LABEL:;
}
/* method textures#GamnitAssetTexture#path for (self: GamnitAssetTexture): String */
val* gamnit___gamnit__GamnitAssetTexture___path(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_gamnit__textures__GamnitAssetTexture___path].val; /* _path on <self:GamnitAssetTexture> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__textures, 149);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method textures#GamnitAssetTexture#path= for (self: GamnitAssetTexture, String) */
void gamnit___gamnit__GamnitAssetTexture___path_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__textures__GamnitAssetTexture___path].val = p0; /* _path on <self:GamnitAssetTexture> */
RET_LABEL:;
}
/* method textures#GamnitAssetTexture#load for (self: GamnitAssetTexture, nullable Bool) */
void gamnit___gamnit__GamnitAssetTexture___Texture__load(val* self, val* p0) {
val* var_force /* var force: nullable Bool */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var_ /* var : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_force = p0;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__textures__GamnitRootTexture__loaded]))(self); /* loaded on <self:GamnitAssetTexture>*/
}
var_ = var1;
if (var1){
if (var_force == NULL) {
var2 = 1; /* <1:Bool> cannot be null */
} else {
{ /* Inline kernel#Bool#!= (var_force,1) on <var_force:nullable Bool> */
if ((var_force != NULL)) {
var6 = (short int)((long)(var_force)>>2);
var5 = var6 == 1;
} else var5 = 0;
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
var = var2;
} else {
var = var_;
}
if (var){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit__textures__GamnitAssetTexture__load_from_platform]))(self); /* load_from_platform on <self:GamnitAssetTexture>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_gamnit__textures__GamnitRootTexture__loaded_61d]))(self, 1); /* loaded= on <self:GamnitAssetTexture>*/
}
RET_LABEL:;
}
/* method textures#GamnitAssetTexture#load_from_platform for (self: GamnitAssetTexture) */
void gamnit___gamnit__GamnitAssetTexture___load_from_platform(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "load_from_platform", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__textures, 161);
fatal_exit(1);
RET_LABEL:;
}
/* method textures#GamnitAssetTexture#to_s for (self: GamnitAssetTexture): String */
val* gamnit___gamnit__GamnitAssetTexture___core__abstract_text__Object__to_s(val* self) {
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
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "<";
var5 = core__flat___NativeString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = " path:";
var9 = core__flat___NativeString___to_s_full(var8, 6l, 6l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ">";
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
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__class_name]))(self); /* class_name on <self:GamnitAssetTexture>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__textures__GamnitAssetTexture__path]))(self); /* path on <self:GamnitAssetTexture>*/
}
((struct instance_core__NativeArray*)var1)->values[3]=var15;
{
var16 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method textures#GamnitAssetTexture#init for (self: GamnitAssetTexture) */
void gamnit___gamnit__GamnitAssetTexture___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit___gamnit__GamnitAssetTexture___core__kernel__Object__init]))(self); /* init on <self:GamnitAssetTexture>*/
}
RET_LABEL:;
}
/* method textures#GamnitSubtexture#root for (self: GamnitSubtexture): GamnitRootTexture */
val* gamnit___gamnit__GamnitSubtexture___Texture__root(val* self) {
val* var /* : GamnitRootTexture */;
val* var1 /* : GamnitRootTexture */;
var1 = self->attrs[COLOR_gamnit__textures__GamnitSubtexture___root].val; /* _root on <self:GamnitSubtexture> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _root");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__textures, 173);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method textures#GamnitSubtexture#root= for (self: GamnitSubtexture, GamnitRootTexture) */
void gamnit___gamnit__GamnitSubtexture___root_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__textures__GamnitSubtexture___root].val = p0; /* _root on <self:GamnitSubtexture> */
RET_LABEL:;
}
/* method textures#GamnitSubtexture#parent for (self: GamnitSubtexture): Texture */
val* gamnit___gamnit__GamnitSubtexture___parent(val* self) {
val* var /* : Texture */;
val* var1 /* : Texture */;
var1 = self->attrs[COLOR_gamnit__textures__GamnitSubtexture___parent].val; /* _parent on <self:GamnitSubtexture> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parent");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__textures, 175);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method textures#GamnitSubtexture#parent= for (self: GamnitSubtexture, Texture) */
void gamnit___gamnit__GamnitSubtexture___parent_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__textures__GamnitSubtexture___parent].val = p0; /* _parent on <self:GamnitSubtexture> */
RET_LABEL:;
}
/* method textures#GamnitSubtexture#left for (self: GamnitSubtexture): Float */
double gamnit___gamnit__GamnitSubtexture___left(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__textures__GamnitSubtexture___left].d; /* _left on <self:GamnitSubtexture> */
var = var1;
RET_LABEL:;
return var;
}
/* method textures#GamnitSubtexture#left= for (self: GamnitSubtexture, Float) */
void gamnit___gamnit__GamnitSubtexture___left_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__textures__GamnitSubtexture___left].d = p0; /* _left on <self:GamnitSubtexture> */
RET_LABEL:;
}
/* method textures#GamnitSubtexture#top for (self: GamnitSubtexture): Float */
double gamnit___gamnit__GamnitSubtexture___top(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__textures__GamnitSubtexture___top].d; /* _top on <self:GamnitSubtexture> */
var = var1;
RET_LABEL:;
return var;
}
/* method textures#GamnitSubtexture#top= for (self: GamnitSubtexture, Float) */
void gamnit___gamnit__GamnitSubtexture___top_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__textures__GamnitSubtexture___top].d = p0; /* _top on <self:GamnitSubtexture> */
RET_LABEL:;
}
/* method textures#GamnitSubtexture#set_wh for (self: GamnitSubtexture, Float, Float) */
void gamnit___gamnit__GamnitSubtexture___set_wh(val* self, double p0, double p1) {
double var_width /* var width: Float */;
double var_height /* var height: Float */;
var_width = p0;
var_height = p1;
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__textures__Texture__width_61d]))(self, var_width); /* width= on <self:GamnitSubtexture>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__textures__Texture__height_61d]))(self, var_height); /* height= on <self:GamnitSubtexture>*/
}
RET_LABEL:;
}
/* method textures#GamnitSubtexture#load for (self: GamnitSubtexture, nullable Bool) */
void gamnit___gamnit__GamnitSubtexture___Texture__load(val* self, val* p0) {
val* var_force /* var force: nullable Bool */;
val* var /* : GamnitRootTexture */;
var_force = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__root]))(self); /* root on <self:GamnitSubtexture>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_gamnit__textures__Texture__load]))(var, var_force); /* load on <var:GamnitRootTexture>*/
}
RET_LABEL:;
}
/* method textures#GamnitSubtexture#offset_left for (self: GamnitSubtexture): Float */
double gamnit___gamnit__GamnitSubtexture___Texture__offset_left(val* self) {
double var /* : Float */;
short int var1 /* : Bool */;
double var2 /* : Float */;
val* var3 /* : Texture */;
double var4 /* : Float */;
double var5 /* : Float */;
val* var6 /* : GamnitRootTexture */;
double var7 /* : Float */;
double var8 /* : Float */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var11 /* : Float */;
double var12 /* : Float */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
double var18 /* : Float */;
var1 = self->attrs[COLOR_gamnit__textures__GamnitSubtexture__lazy_32d_offset_left].s; /* lazy _offset_left on <self:GamnitSubtexture> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__textures__GamnitSubtexture___offset_left].d; /* _offset_left on <self:GamnitSubtexture> */
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__textures__GamnitSubtexture__parent]))(self); /* parent on <self:GamnitSubtexture>*/
}
{
var4 = ((double(*)(val* self))(var3->class->vft[COLOR_gamnit__textures__Texture__offset_left]))(var3); /* offset_left on <var3:Texture>*/
}
{
var5 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__GamnitSubtexture__left]))(self); /* left on <self:GamnitSubtexture>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__root]))(self); /* root on <self:GamnitSubtexture>*/
}
{
var7 = ((double(*)(val* self))(var6->class->vft[COLOR_gamnit__textures__Texture__width]))(var6); /* width on <var6:GamnitRootTexture>*/
}
{
{ /* Inline kernel#Float#/ (var5,var7) on <var5:Float> */
/* Covariant cast for argument 0 (i) <var7:Float> isa OTHER */
/* <var7:Float> isa OTHER */
var10 = 1; /* easy <var7:Float> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var11 = var5 / var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var4,var8) on <var4:Float> */
/* Covariant cast for argument 0 (i) <var8:Float> isa OTHER */
/* <var8:Float> isa OTHER */
var14 = 1; /* easy <var8:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var18 = var4 + var8;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
self->attrs[COLOR_gamnit__textures__GamnitSubtexture___offset_left].d = var12; /* _offset_left on <self:GamnitSubtexture> */
var2 = var12;
self->attrs[COLOR_gamnit__textures__GamnitSubtexture__lazy_32d_offset_left].s = 1; /* lazy _offset_left on <self:GamnitSubtexture> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method textures#GamnitSubtexture#offset_left= for (self: GamnitSubtexture, Float) */
void gamnit___gamnit__GamnitSubtexture___offset_left_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__textures__GamnitSubtexture___offset_left].d = p0; /* _offset_left on <self:GamnitSubtexture> */
self->attrs[COLOR_gamnit__textures__GamnitSubtexture__lazy_32d_offset_left].s = 1; /* lazy _offset_left on <self:GamnitSubtexture> */
RET_LABEL:;
}
/* method textures#GamnitSubtexture#offset_top for (self: GamnitSubtexture): Float */
double gamnit___gamnit__GamnitSubtexture___Texture__offset_top(val* self) {
double var /* : Float */;
short int var1 /* : Bool */;
double var2 /* : Float */;
val* var3 /* : Texture */;
double var4 /* : Float */;
double var5 /* : Float */;
val* var6 /* : GamnitRootTexture */;
double var7 /* : Float */;
double var8 /* : Float */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var11 /* : Float */;
double var12 /* : Float */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
double var18 /* : Float */;
var1 = self->attrs[COLOR_gamnit__textures__GamnitSubtexture__lazy_32d_offset_top].s; /* lazy _offset_top on <self:GamnitSubtexture> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__textures__GamnitSubtexture___offset_top].d; /* _offset_top on <self:GamnitSubtexture> */
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__textures__GamnitSubtexture__parent]))(self); /* parent on <self:GamnitSubtexture>*/
}
{
var4 = ((double(*)(val* self))(var3->class->vft[COLOR_gamnit__textures__Texture__offset_top]))(var3); /* offset_top on <var3:Texture>*/
}
{
var5 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__GamnitSubtexture__top]))(self); /* top on <self:GamnitSubtexture>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__root]))(self); /* root on <self:GamnitSubtexture>*/
}
{
var7 = ((double(*)(val* self))(var6->class->vft[COLOR_gamnit__textures__Texture__height]))(var6); /* height on <var6:GamnitRootTexture>*/
}
{
{ /* Inline kernel#Float#/ (var5,var7) on <var5:Float> */
/* Covariant cast for argument 0 (i) <var7:Float> isa OTHER */
/* <var7:Float> isa OTHER */
var10 = 1; /* easy <var7:Float> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var11 = var5 / var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var4,var8) on <var4:Float> */
/* Covariant cast for argument 0 (i) <var8:Float> isa OTHER */
/* <var8:Float> isa OTHER */
var14 = 1; /* easy <var8:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var18 = var4 + var8;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
self->attrs[COLOR_gamnit__textures__GamnitSubtexture___offset_top].d = var12; /* _offset_top on <self:GamnitSubtexture> */
var2 = var12;
self->attrs[COLOR_gamnit__textures__GamnitSubtexture__lazy_32d_offset_top].s = 1; /* lazy _offset_top on <self:GamnitSubtexture> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method textures#GamnitSubtexture#offset_top= for (self: GamnitSubtexture, Float) */
void gamnit___gamnit__GamnitSubtexture___offset_top_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__textures__GamnitSubtexture___offset_top].d = p0; /* _offset_top on <self:GamnitSubtexture> */
self->attrs[COLOR_gamnit__textures__GamnitSubtexture__lazy_32d_offset_top].s = 1; /* lazy _offset_top on <self:GamnitSubtexture> */
RET_LABEL:;
}
/* method textures#GamnitSubtexture#offset_right for (self: GamnitSubtexture): Float */
double gamnit___gamnit__GamnitSubtexture___Texture__offset_right(val* self) {
double var /* : Float */;
short int var1 /* : Bool */;
double var2 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
val* var5 /* : GamnitRootTexture */;
double var6 /* : Float */;
double var7 /* : Float */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var10 /* : Float */;
double var11 /* : Float */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
double var17 /* : Float */;
var1 = self->attrs[COLOR_gamnit__textures__GamnitSubtexture__lazy_32d_offset_right].s; /* lazy _offset_right on <self:GamnitSubtexture> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__textures__GamnitSubtexture___offset_right].d; /* _offset_right on <self:GamnitSubtexture> */
} else {
{
var3 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_left]))(self); /* offset_left on <self:GamnitSubtexture>*/
}
{
var4 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__width]))(self); /* width on <self:GamnitSubtexture>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__root]))(self); /* root on <self:GamnitSubtexture>*/
}
{
var6 = ((double(*)(val* self))(var5->class->vft[COLOR_gamnit__textures__Texture__width]))(var5); /* width on <var5:GamnitRootTexture>*/
}
{
{ /* Inline kernel#Float#/ (var4,var6) on <var4:Float> */
/* Covariant cast for argument 0 (i) <var6:Float> isa OTHER */
/* <var6:Float> isa OTHER */
var9 = 1; /* easy <var6:Float> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var10 = var4 / var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var3,var7) on <var3:Float> */
/* Covariant cast for argument 0 (i) <var7:Float> isa OTHER */
/* <var7:Float> isa OTHER */
var13 = 1; /* easy <var7:Float> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var17 = var3 + var7;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_gamnit__textures__GamnitSubtexture___offset_right].d = var11; /* _offset_right on <self:GamnitSubtexture> */
var2 = var11;
self->attrs[COLOR_gamnit__textures__GamnitSubtexture__lazy_32d_offset_right].s = 1; /* lazy _offset_right on <self:GamnitSubtexture> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method textures#GamnitSubtexture#offset_right= for (self: GamnitSubtexture, Float) */
void gamnit___gamnit__GamnitSubtexture___offset_right_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__textures__GamnitSubtexture___offset_right].d = p0; /* _offset_right on <self:GamnitSubtexture> */
self->attrs[COLOR_gamnit__textures__GamnitSubtexture__lazy_32d_offset_right].s = 1; /* lazy _offset_right on <self:GamnitSubtexture> */
RET_LABEL:;
}
/* method textures#GamnitSubtexture#offset_bottom for (self: GamnitSubtexture): Float */
double gamnit___gamnit__GamnitSubtexture___Texture__offset_bottom(val* self) {
double var /* : Float */;
short int var1 /* : Bool */;
double var2 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
val* var5 /* : GamnitRootTexture */;
double var6 /* : Float */;
double var7 /* : Float */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var10 /* : Float */;
double var11 /* : Float */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
double var17 /* : Float */;
var1 = self->attrs[COLOR_gamnit__textures__GamnitSubtexture__lazy_32d_offset_bottom].s; /* lazy _offset_bottom on <self:GamnitSubtexture> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__textures__GamnitSubtexture___offset_bottom].d; /* _offset_bottom on <self:GamnitSubtexture> */
} else {
{
var3 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__offset_top]))(self); /* offset_top on <self:GamnitSubtexture>*/
}
{
var4 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__height]))(self); /* height on <self:GamnitSubtexture>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__textures__Texture__root]))(self); /* root on <self:GamnitSubtexture>*/
}
{
var6 = ((double(*)(val* self))(var5->class->vft[COLOR_gamnit__textures__Texture__height]))(var5); /* height on <var5:GamnitRootTexture>*/
}
{
{ /* Inline kernel#Float#/ (var4,var6) on <var4:Float> */
/* Covariant cast for argument 0 (i) <var6:Float> isa OTHER */
/* <var6:Float> isa OTHER */
var9 = 1; /* easy <var6:Float> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var10 = var4 / var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var3,var7) on <var3:Float> */
/* Covariant cast for argument 0 (i) <var7:Float> isa OTHER */
/* <var7:Float> isa OTHER */
var13 = 1; /* easy <var7:Float> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var17 = var3 + var7;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
self->attrs[COLOR_gamnit__textures__GamnitSubtexture___offset_bottom].d = var11; /* _offset_bottom on <self:GamnitSubtexture> */
var2 = var11;
self->attrs[COLOR_gamnit__textures__GamnitSubtexture__lazy_32d_offset_bottom].s = 1; /* lazy _offset_bottom on <self:GamnitSubtexture> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method textures#GamnitSubtexture#offset_bottom= for (self: GamnitSubtexture, Float) */
void gamnit___gamnit__GamnitSubtexture___offset_bottom_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__textures__GamnitSubtexture___offset_bottom].d = p0; /* _offset_bottom on <self:GamnitSubtexture> */
self->attrs[COLOR_gamnit__textures__GamnitSubtexture__lazy_32d_offset_bottom].s = 1; /* lazy _offset_bottom on <self:GamnitSubtexture> */
RET_LABEL:;
}
/* method textures#GamnitSubtexture#init for (self: GamnitSubtexture) */
void gamnit___gamnit__GamnitSubtexture___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit___gamnit__GamnitSubtexture___core__kernel__Object__init]))(self); /* init on <self:GamnitSubtexture>*/
}
RET_LABEL:;
}
/* method textures#Sys#all_root_textures for (self: Sys): TextureSet */
val* gamnit__textures___core__Sys___all_root_textures(val* self) {
val* var /* : TextureSet */;
val* var1 /* : TextureSet */;
var1 = self->attrs[COLOR_gamnit__textures__Sys___all_root_textures].val; /* _all_root_textures on <self:Sys> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _all_root_textures");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__textures, 199);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method textures#Sys#all_root_textures= for (self: Sys, TextureSet) */
void gamnit__textures___core__Sys___all_root_textures_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__textures__Sys___all_root_textures].val = p0; /* _all_root_textures on <self:Sys> */
RET_LABEL:;
}
/* method textures#TextureSet#load_all for (self: TextureSet) */
void gamnit___gamnit__TextureSet___load_all(val* self) {
val* var_ /* var : TextureSet */;
val* var /* : Iterator[nullable Object] */;
val* var_1 /* var : Iterator[Texture] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var_t /* var t: Texture */;
var_ = self;
{
var = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:TextureSet>*/
}
var_1 = var;
for(;;) {
{
var2 = ((short int(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_1); /* is_ok on <var_1:Iterator[Texture]>*/
}
if (var2){
} else {
goto BREAK_label;
}
{
var3 = ((val*(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_1); /* item on <var_1:Iterator[Texture]>*/
}
var_t = var3;
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_gamnit__textures__Texture__load]))(var_t, ((val*)NULL)); /* load on <var_t:Texture>*/
}
{
((void(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_1); /* next on <var_1:Iterator[Texture]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_1&3)?class_info[((long)var_1&3)]:var_1->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_1); /* finish on <var_1:Iterator[Texture]>*/
}
RET_LABEL:;
}
