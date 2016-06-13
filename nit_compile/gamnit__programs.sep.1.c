#include "gamnit__programs.sep.0.h"
/* method programs#ShaderVariable#program for (self: ShaderVariable): GLProgram */
val* gamnit___gamnit__ShaderVariable___program(val* self) {
val* var /* : GLProgram */;
val* var1 /* : GLProgram */;
var1 = self->attrs[COLOR_gamnit__programs__ShaderVariable___program].val; /* _program on <self:ShaderVariable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _program");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 26);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method programs#ShaderVariable#program= for (self: ShaderVariable, GLProgram) */
void gamnit___gamnit__ShaderVariable___program_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__ShaderVariable___program].val = p0; /* _program on <self:ShaderVariable> */
RET_LABEL:;
}
/* method programs#ShaderVariable#name for (self: ShaderVariable): String */
val* gamnit___gamnit__ShaderVariable___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_gamnit__programs__ShaderVariable___name].val; /* _name on <self:ShaderVariable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 29);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method programs#ShaderVariable#name= for (self: ShaderVariable, String) */
void gamnit___gamnit__ShaderVariable___name_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__ShaderVariable___name].val = p0; /* _name on <self:ShaderVariable> */
RET_LABEL:;
}
/* method programs#ShaderVariable#location for (self: ShaderVariable): Int */
long gamnit___gamnit__ShaderVariable___location(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_gamnit__programs__ShaderVariable___location].l; /* _location on <self:ShaderVariable> */
var = var1;
RET_LABEL:;
return var;
}
/* method programs#ShaderVariable#location= for (self: ShaderVariable, Int) */
void gamnit___gamnit__ShaderVariable___location_61d(val* self, long p0) {
self->attrs[COLOR_gamnit__programs__ShaderVariable___location].l = p0; /* _location on <self:ShaderVariable> */
RET_LABEL:;
}
/* method programs#ShaderVariable#size for (self: ShaderVariable): Int */
long gamnit___gamnit__ShaderVariable___size(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_gamnit__programs__ShaderVariable___size].l; /* _size on <self:ShaderVariable> */
var = var1;
RET_LABEL:;
return var;
}
/* method programs#ShaderVariable#size= for (self: ShaderVariable, Int) */
void gamnit___gamnit__ShaderVariable___size_61d(val* self, long p0) {
self->attrs[COLOR_gamnit__programs__ShaderVariable___size].l = p0; /* _size on <self:ShaderVariable> */
RET_LABEL:;
}
/* method programs#ShaderVariable#is_active for (self: ShaderVariable): Bool */
short int gamnit___gamnit__ShaderVariable___is_active(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#ShaderVariable#to_s for (self: ShaderVariable): String */
val* gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s(val* self) {
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
val* var18 /* : String */;
val* var19 /* : String */;
long var20 /* : Int */;
val* var21 /* : String */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
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
var8 = " name:";
var9 = core__flat___NativeString___to_s_full(var8, 6l, 6l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = " location:";
var13 = core__flat___NativeString___to_s_full(var12, 10l, 10l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[4]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = " size:";
var17 = core__flat___NativeString___to_s_full(var16, 6l, 6l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var1)->values[6]=var15;
} else {
var1 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__class_name]))(self); /* class_name on <self:ShaderVariable>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__name]))(self); /* name on <self:ShaderVariable>*/
}
((struct instance_core__NativeArray*)var1)->values[3]=var19;
{
var20 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:ShaderVariable>*/
}
var21 = core__flat___Int___core__abstract_text__Object__to_s(var20);
((struct instance_core__NativeArray*)var1)->values[5]=var21;
{
var22 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__size]))(self); /* size on <self:ShaderVariable>*/
}
var23 = core__flat___Int___core__abstract_text__Object__to_s(var22);
((struct instance_core__NativeArray*)var1)->values[7]=var23;
{
var24 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#ShaderVariable#init for (self: ShaderVariable) */
void gamnit___gamnit__ShaderVariable___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit___gamnit__ShaderVariable___core__kernel__Object__init]))(self); /* init on <self:ShaderVariable>*/
}
RET_LABEL:;
}
/* method programs#InactiveVariable#is_active for (self: InactiveVariable): Bool */
short int gamnit___gamnit__InactiveVariable___ShaderVariable__is_active(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#Attribute#array_enabled_cache for (self: Attribute): Bool */
short int gamnit___gamnit__Attribute___array_enabled_cache(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_gamnit__programs__Attribute___array_enabled_cache].s; /* _array_enabled_cache on <self:Attribute> */
var = var1;
RET_LABEL:;
return var;
}
/* method programs#Attribute#array_enabled_cache= for (self: Attribute, Bool) */
void gamnit___gamnit__Attribute___array_enabled_cache_61d(val* self, short int p0) {
self->attrs[COLOR_gamnit__programs__Attribute___array_enabled_cache].s = p0; /* _array_enabled_cache on <self:Attribute> */
RET_LABEL:;
}
/* method programs#Attribute#array_enabled for (self: Attribute): Bool */
short int gamnit___gamnit__Attribute___array_enabled(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__programs__Attribute__array_enabled_cache]))(self); /* array_enabled_cache on <self:Attribute>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#Attribute#array_enabled= for (self: Attribute, Bool) */
void gamnit___gamnit__Attribute___array_enabled_61d(val* self, short int p0) {
short int var_value /* var value: Bool */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Sys */;
val* var3 /* : GLProgram */;
val* var4 /* : Sys */;
long var5 /* : Int */;
val* var6 /* : Sys */;
long var7 /* : Int */;
var_value = p0;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__is_active]))(self); /* is_active on <self:Attribute>*/
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__program]))(self); /* program on <self:Attribute>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_glesv2__Sys__glUseProgram]))(var2, var3); /* glUseProgram on <var2:Sys>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_gamnit__programs__Attribute__array_enabled_cache_61d]))(self, var_value); /* array_enabled_cache= on <self:Attribute>*/
}
if (var_value){
var4 = glob_sys;
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:Attribute>*/
}
{
((void(*)(val* self, long p0))(var4->class->vft[COLOR_glesv2__Sys__glEnableVertexAttribArray]))(var4, var5); /* glEnableVertexAttribArray on <var4:Sys>*/
}
} else {
var6 = glob_sys;
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:Attribute>*/
}
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_glesv2__Sys__glDisableVertexAttribArray]))(var6, var7); /* glDisableVertexAttribArray on <var6:Sys>*/
}
}
RET_LABEL:;
}
/* method programs#Attribute#array for (self: Attribute, Array[Float], Int) */
void gamnit___gamnit__Attribute___array(val* self, val* p0, long p1) {
val* var_array /* var array: Array[Float] */;
long var_data_per_vertex /* var data_per_vertex: Int */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable GLfloatArray */;
val* var_native /* var native: nullable GLfloatArray */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : GLfloatArray */;
val* var15 /* : GLfloatArray */;
val* var16 /* : Sys */;
long var17 /* : Int */;
val* var18 /* : Sys */;
val* var19 /* : GLDataType */;
val* var20 /* : NativeCArray */;
var_array = p0;
var_data_per_vertex = p1;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__is_active]))(self); /* is_active on <self:Attribute>*/
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__Attribute__native_float_array]))(self); /* native_float_array on <self:Attribute>*/
}
var_native = var2;
if (var_native == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_native->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_native, ((val*)NULL)); /* == on <var_native:nullable GLfloatArray>*/
var4 = var5;
}
var_ = var4;
if (var4){
var3 = var_;
} else {
{
var6 = ((long(*)(val* self))(var_array->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:Array[Float]>*/
}
{
var7 = ((long(*)(val* self))(var_native->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_native); /* length on <var_native:nullable GLfloatArray(GLfloatArray)>*/
}
{
{ /* Inline kernel#Int#> (var6,var7) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var11 = var6 > var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var3 = var8;
}
if (var3){
if (var_native == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_native->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_native, ((val*)NULL)); /* != on <var_native:nullable GLfloatArray>*/
var12 = var13;
}
if (var12){
{
((void(*)(val* self))(var_native->class->vft[COLOR_c__CArray__destroy]))(var_native); /* destroy on <var_native:nullable GLfloatArray(GLfloatArray)>*/
}
} else {
}
var14 = NEW_glesv2__GLfloatArray(&type_glesv2__GLfloatArray);
{
var15 = ((val*(*)(val* self, val* p0))(var14->class->vft[COLOR_glesv2__GLfloatArray__from]))(var14, var_array); /* from on <var14:GLfloatArray>*/
}
var_native = var15;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__programs__Attribute__native_float_array_61d]))(self, var_native); /* native_float_array= on <self:Attribute>*/
}
} else {
{
((void(*)(val* self, val* p0))(var_native->class->vft[COLOR_glesv2__GLfloatArray__fill_from]))(var_native, var_array); /* fill_from on <var_native:nullable GLfloatArray(GLfloatArray)>*/
}
}
var16 = glob_sys;
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:Attribute>*/
}
var18 = glob_sys;
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_glesv2__Sys__gl_FLOAT]))(var18); /* gl_FLOAT on <var18:Sys>*/
}
{
var20 = ((val*(*)(val* self))(var_native->class->vft[COLOR_c__CArray__native_array]))(var_native); /* native_array on <var_native:nullable GLfloatArray(GLfloatArray)>*/
}
{
((void(*)(val* self, long p0, long p1, val* p2, short int p3, long p4, val* p5))(var16->class->vft[COLOR_glesv2__Sys__glVertexAttribPointer]))(var16, var17, var_data_per_vertex, var19, 0, 0l, var20); /* glVertexAttribPointer on <var16:Sys>*/
}
RET_LABEL:;
}
/* method programs#Attribute#native_float_array for (self: Attribute): nullable GLfloatArray */
val* gamnit___gamnit__Attribute___native_float_array(val* self) {
val* var /* : nullable GLfloatArray */;
val* var1 /* : nullable GLfloatArray */;
var1 = self->attrs[COLOR_gamnit__programs__Attribute___native_float_array].val; /* _native_float_array on <self:Attribute> */
var = var1;
RET_LABEL:;
return var;
}
/* method programs#Attribute#native_float_array= for (self: Attribute, nullable GLfloatArray) */
void gamnit___gamnit__Attribute___native_float_array_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__Attribute___native_float_array].val = p0; /* _native_float_array on <self:Attribute> */
RET_LABEL:;
}
/* method programs#AttributeFloat#uniform for (self: AttributeFloat, Float) */
void gamnit___gamnit__AttributeFloat___uniform(val* self, double p0) {
double var_x /* var x: Float */;
short int var /* : Bool */;
val* var1 /* : Sys */;
long var2 /* : Int */;
var_x = p0;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__is_active]))(self); /* is_active on <self:AttributeFloat>*/
}
if (var){
var1 = glob_sys;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:AttributeFloat>*/
}
{
((void(*)(val* self, long p0, double p1))(var1->class->vft[COLOR_glesv2__Sys__glVertexAttrib1f]))(var1, var2, var_x); /* glVertexAttrib1f on <var1:Sys>*/
}
} else {
}
RET_LABEL:;
}
/* method programs#AttributeVec2#uniform for (self: AttributeVec2, Float, Float) */
void gamnit___gamnit__AttributeVec2___uniform(val* self, double p0, double p1) {
double var_x /* var x: Float */;
double var_y /* var y: Float */;
short int var /* : Bool */;
val* var1 /* : Sys */;
long var2 /* : Int */;
var_x = p0;
var_y = p1;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__is_active]))(self); /* is_active on <self:AttributeVec2>*/
}
if (var){
var1 = glob_sys;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:AttributeVec2>*/
}
{
((void(*)(val* self, long p0, double p1, double p2))(var1->class->vft[COLOR_glesv2__Sys__glVertexAttrib2f]))(var1, var2, var_x, var_y); /* glVertexAttrib2f on <var1:Sys>*/
}
} else {
}
RET_LABEL:;
}
/* method programs#AttributeVec3#uniform for (self: AttributeVec3, Float, Float, Float) */
void gamnit___gamnit__AttributeVec3___uniform(val* self, double p0, double p1, double p2) {
double var_x /* var x: Float */;
double var_y /* var y: Float */;
double var_z /* var z: Float */;
short int var /* : Bool */;
val* var1 /* : Sys */;
long var2 /* : Int */;
var_x = p0;
var_y = p1;
var_z = p2;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__is_active]))(self); /* is_active on <self:AttributeVec3>*/
}
if (var){
var1 = glob_sys;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:AttributeVec3>*/
}
{
((void(*)(val* self, long p0, double p1, double p2, double p3))(var1->class->vft[COLOR_glesv2__Sys__glVertexAttrib3f]))(var1, var2, var_x, var_y, var_z); /* glVertexAttrib3f on <var1:Sys>*/
}
} else {
}
RET_LABEL:;
}
/* method programs#AttributeVec4#uniform for (self: AttributeVec4, Float, Float, Float, Float) */
void gamnit___gamnit__AttributeVec4___uniform(val* self, double p0, double p1, double p2, double p3) {
double var_x /* var x: Float */;
double var_y /* var y: Float */;
double var_z /* var z: Float */;
double var_w /* var w: Float */;
short int var /* : Bool */;
val* var1 /* : Sys */;
long var2 /* : Int */;
var_x = p0;
var_y = p1;
var_z = p2;
var_w = p3;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__is_active]))(self); /* is_active on <self:AttributeVec4>*/
}
if (var){
var1 = glob_sys;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:AttributeVec4>*/
}
{
((void(*)(val* self, long p0, double p1, double p2, double p3, double p4))(var1->class->vft[COLOR_glesv2__Sys__glVertexAttrib4f]))(var1, var2, var_x, var_y, var_z, var_w); /* glVertexAttrib4f on <var1:Sys>*/
}
} else {
}
RET_LABEL:;
}
/* method programs#Uniform#uniform_1i for (self: Uniform, Int, Int) */
void gamnit___gamnit__Uniform___uniform_95d1i(val* self, long p0, long p1) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
gamnit__programs___Uniform_uniform_1i___impl(var_for_c_0, p0, p1);
RET_LABEL:;
}
/* method programs#UniformBool#uniform for (self: UniformBool, Bool) */
void gamnit___gamnit__UniformBool___uniform(val* self, short int p0) {
short int var_val /* var val: Bool */;
long var /* : Int */;
long var1 /* : Int */;
var_val = p0;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:UniformBool>*/
}
if (var_val){
var1 = 1l;
} else {
var1 = 0l;
}
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_gamnit__programs__Uniform__uniform_95d1i]))(self, var, var1); /* uniform_1i on <self:UniformBool>*/
}
RET_LABEL:;
}
/* method programs#UniformFloat#uniform for (self: UniformFloat, Float) */
void gamnit___gamnit__UniformFloat___uniform(val* self, double p0) {
double var_x /* var x: Float */;
val* var /* : Sys */;
long var1 /* : Int */;
var_x = p0;
var = glob_sys;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:UniformFloat>*/
}
{
((void(*)(val* self, long p0, double p1))(var->class->vft[COLOR_glesv2__Sys__glUniform1f]))(var, var1, var_x); /* glUniform1f on <var:Sys>*/
}
RET_LABEL:;
}
/* method programs#UniformVec2#uniform for (self: UniformVec2, Float, Float) */
void gamnit___gamnit__UniformVec2___uniform(val* self, double p0, double p1) {
double var_x /* var x: Float */;
double var_y /* var y: Float */;
val* var /* : Sys */;
long var1 /* : Int */;
var_x = p0;
var_y = p1;
var = glob_sys;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:UniformVec2>*/
}
{
((void(*)(val* self, long p0, double p1, double p2))(var->class->vft[COLOR_glesv2__Sys__glUniform2f]))(var, var1, var_x, var_y); /* glUniform2f on <var:Sys>*/
}
RET_LABEL:;
}
/* method programs#UniformVec3#uniform for (self: UniformVec3, Float, Float, Float) */
void gamnit___gamnit__UniformVec3___uniform(val* self, double p0, double p1, double p2) {
double var_x /* var x: Float */;
double var_y /* var y: Float */;
double var_z /* var z: Float */;
val* var /* : Sys */;
long var1 /* : Int */;
var_x = p0;
var_y = p1;
var_z = p2;
var = glob_sys;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:UniformVec3>*/
}
{
((void(*)(val* self, long p0, double p1, double p2, double p3))(var->class->vft[COLOR_glesv2__Sys__glUniform3f]))(var, var1, var_x, var_y, var_z); /* glUniform3f on <var:Sys>*/
}
RET_LABEL:;
}
/* method programs#UniformVec4#uniform for (self: UniformVec4, Float, Float, Float, Float) */
void gamnit___gamnit__UniformVec4___uniform(val* self, double p0, double p1, double p2, double p3) {
double var_x /* var x: Float */;
double var_y /* var y: Float */;
double var_z /* var z: Float */;
double var_w /* var w: Float */;
val* var /* : Sys */;
long var1 /* : Int */;
var_x = p0;
var_y = p1;
var_z = p2;
var_w = p3;
var = glob_sys;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:UniformVec4>*/
}
{
((void(*)(val* self, long p0, double p1, double p2, double p3, double p4))(var->class->vft[COLOR_glesv2__Sys__glUniform4f]))(var, var1, var_x, var_y, var_z, var_w); /* glUniform4f on <var:Sys>*/
}
RET_LABEL:;
}
/* method programs#UniformSampler2D#uniform for (self: UniformSampler2D, Int) */
void gamnit___gamnit__UniformSampler2D___uniform(val* self, long p0) {
long var_val /* var val: Int */;
long var /* : Int */;
var_val = p0;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:UniformSampler2D>*/
}
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_gamnit__programs__Uniform__uniform_95d1i]))(self, var, var_val); /* uniform_1i on <self:UniformSampler2D>*/
}
RET_LABEL:;
}
/* method programs#UniformMat4#native_matrix_cache for (self: UniformMat4): nullable NativeGLfloatArray */
val* gamnit___gamnit__UniformMat4___native_matrix_cache(val* self) {
val* var /* : nullable NativeGLfloatArray */;
val* var1 /* : nullable NativeGLfloatArray */;
var1 = self->attrs[COLOR_gamnit__programs__UniformMat4___native_matrix_cache].val; /* _native_matrix_cache on <self:UniformMat4> */
var = var1;
RET_LABEL:;
return var;
}
/* method programs#UniformMat4#native_matrix_cache= for (self: UniformMat4, nullable NativeGLfloatArray) */
void gamnit___gamnit__UniformMat4___native_matrix_cache_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__UniformMat4___native_matrix_cache].val = p0; /* _native_matrix_cache on <self:UniformMat4> */
RET_LABEL:;
}
/* method programs#UniformMat4#uniform for (self: UniformMat4, Matrix) */
void gamnit___gamnit__UniformMat4___uniform(val* self, val* p0) {
val* var_matrix /* var matrix: Matrix */;
val* var /* : nullable NativeGLfloatArray */;
val* var_native /* var native: nullable NativeGLfloatArray */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeGLfloatArray */;
val* var4 /* : NativeGLfloatArray */;
long var5 /* : Int */;
var_matrix = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__UniformMat4__native_matrix_cache]))(self); /* native_matrix_cache on <self:UniformMat4>*/
}
var_native = var;
if (var_native == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_native->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_native, ((val*)NULL)); /* == on <var_native:nullable NativeGLfloatArray>*/
var1 = var2;
}
if (var1){
var3 = NEW_glesv2__NativeGLfloatArray(&type_glesv2__NativeGLfloatArray);
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_gamnit__programs__NativeGLfloatArray__matrix]))(var3); /* matrix on <var3:NativeGLfloatArray>*/
}
var_native = var4;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__programs__UniformMat4__native_matrix_cache_61d]))(self, var_native); /* native_matrix_cache= on <self:UniformMat4>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(var_matrix->class->vft[COLOR_gamnit__programs__Matrix__fill_native]))(var_matrix, var_native); /* fill_native on <var_matrix:Matrix>*/
}
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariable__location]))(self); /* location on <self:UniformMat4>*/
}
{
((void(*)(val* self, long p0, long p1, short int p2, val* p3))(self->class->vft[COLOR_gamnit__programs__UniformMat4__uniform_matrix_95d4f]))(self, var5, 1l, 0, var_native); /* uniform_matrix_4f on <self:UniformMat4>*/
}
RET_LABEL:;
}
/* method programs#UniformMat4#uniform_matrix_4f for (self: UniformMat4, Int, Int, Bool, NativeGLfloatArray) */
void gamnit___gamnit__UniformMat4___uniform_matrix_95d4f(val* self, long p0, long p1, short int p2, val* p3) {
void* var /* : NativeGLfloatArray for extern */;
var = ((struct instance_core__Pointer*)p3)->value; /* unboxing NativeGLfloatArray */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
gamnit__programs___UniformMat4_uniform_matrix_4f___impl(var_for_c_0, p0, p1, p2, var);
RET_LABEL:;
}
/* method programs#InactiveUniform#is_active for (self: InactiveUniform): Bool */
short int gamnit___gamnit__InactiveUniform___ShaderVariable__is_active(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#Shader#gl_shader for (self: Shader): GLShader */
val* gamnit___gamnit__Shader___gl_shader(val* self) {
val* var /* : GLShader */;
val* var1 /* : GLShader */;
var1 = self->attrs[COLOR_gamnit__programs__Shader___gl_shader].val; /* _gl_shader on <self:Shader> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _gl_shader");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 248);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method programs#Shader#gl_shader= for (self: Shader, GLShader) */
void gamnit___gamnit__Shader___gl_shader_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__Shader___gl_shader].val = p0; /* _gl_shader on <self:Shader> */
RET_LABEL:;
}
/* method programs#Shader#error for (self: Shader): nullable Error */
val* gamnit___gamnit__Shader___error(val* self) {
val* var /* : nullable Error */;
val* var1 /* : nullable Error */;
var1 = self->attrs[COLOR_gamnit__programs__Shader___error].val; /* _error on <self:Shader> */
var = var1;
RET_LABEL:;
return var;
}
/* method programs#Shader#error= for (self: Shader, nullable Error) */
void gamnit___gamnit__Shader___error_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__Shader___error].val = p0; /* _error on <self:Shader> */
RET_LABEL:;
}
/* method programs#Shader#source for (self: Shader): Text */
val* gamnit___gamnit__Shader___source(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
var1 = self->attrs[COLOR_gamnit__programs__Shader___source].val; /* _source on <self:Shader> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _source");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 254);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method programs#Shader#source= for (self: Shader, Text) */
void gamnit___gamnit__Shader___source_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__Shader___source].val = p0; /* _source on <self:Shader> */
RET_LABEL:;
}
/* method programs#Shader#gl_shader_type for (self: Shader): GLShaderType */
val* gamnit___gamnit__Shader___gl_shader_type(val* self) {
val* var /* : GLShaderType */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "gl_shader_type", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 257);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method programs#Shader#compile for (self: Shader) */
void gamnit___gamnit__Shader___compile(val* self) {
val* var /* : Sys */;
val* var1 /* : GLShaderType */;
val* var2 /* : GLShader */;
val* var_gl_shader /* var gl_shader: GLShader */;
val* var3 /* : Sys */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Error */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
val* var12 /* : Sys */;
val* var13 /* : GLError */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : Sys */;
val* var17 /* : Text */;
char* var18 /* : NativeString */;
val* var19 /* : Sys */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : Error */;
val* var24 /* : NativeArray[String] */;
static val* varonce23;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : String */;
val* var29 /* : Sys */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : Sys */;
val* var33 /* : nullable Error */;
var = glob_sys;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__Shader__gl_shader_type]))(self); /* gl_shader_type on <self:Shader>*/
}
{
var2 = ((val*(*)(val* self, val* p0))(var->class->vft[COLOR_glesv2__Sys__glCreateShader]))(var, var1); /* glCreateShader on <var:Sys>*/
}
var_gl_shader = var2;
var3 = glob_sys;
{
var4 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_glesv2__Sys__glIsShader]))(var3, var_gl_shader); /* glIsShader on <var3:Sys>*/
}
var5 = !var4;
if (var5){
var6 = NEW_core__Error(&type_core__Error);
if (unlikely(varonce==NULL)) {
var7 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "Shader creation failed: ";
var11 = core__flat___NativeString___to_s_full(var10, 24l, 24l);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var7)->values[0]=var9;
} else {
var7 = varonce;
varonce = NULL;
}
var12 = glob_sys;
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_glesv2__Sys__glGetError]))(var12); /* glGetError on <var12:Sys>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__Object__to_s]))(var13); /* to_s on <var13:GLError>*/
}
((struct instance_core__NativeArray*)var7)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__error__Error__message_61d]))(var6, var15); /* message= on <var6:Error>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:Error>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__programs__Shader__error_61d]))(self, var6); /* error= on <self:Shader>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__programs__Shader__gl_shader_61d]))(self, var_gl_shader); /* gl_shader= on <self:Shader>*/
}
var16 = glob_sys;
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__Shader__source]))(self); /* source on <self:Shader>*/
}
{
var18 = ((char*(*)(val* self))(var17->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var17); /* to_cstring on <var17:Text>*/
}
{
((void(*)(val* self, val* p0, char* p1))(var16->class->vft[COLOR_glesv2__Sys__glShaderSource]))(var16, var_gl_shader, var18); /* glShaderSource on <var16:Sys>*/
}
var19 = glob_sys;
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_glesv2__Sys__glCompileShader]))(var19, var_gl_shader); /* glCompileShader on <var19:Sys>*/
}
{
var20 = ((short int(*)(val* self))(var_gl_shader->class->vft[COLOR_glesv2__GLShader__is_compiled]))(var_gl_shader); /* is_compiled on <var_gl_shader:GLShader>*/
}
var21 = !var20;
if (var21){
var22 = NEW_core__Error(&type_core__Error);
if (unlikely(varonce23==NULL)) {
var24 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Shader compilation failed: ";
var28 = core__flat___NativeString___to_s_full(var27, 27l, 27l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var24)->values[0]=var26;
} else {
var24 = varonce23;
varonce23 = NULL;
}
var29 = glob_sys;
{
var30 = ((val*(*)(val* self, val* p0))(var29->class->vft[COLOR_glesv2__Sys__glGetShaderInfoLog]))(var29, var_gl_shader); /* glGetShaderInfoLog on <var29:Sys>*/
}
((struct instance_core__NativeArray*)var24)->values[1]=var30;
{
var31 = ((val*(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce23 = var24;
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__error__Error__message_61d]))(var22, var31); /* message= on <var22:Error>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:Error>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__programs__Shader__error_61d]))(self, var22); /* error= on <self:Shader>*/
}
goto RET_LABEL;
} else {
}
var32 = glob_sys;
{
var33 = ((val*(*)(val* self))(var32->class->vft[COLOR_gamnit__programs__Sys__gammit_gl_error]))(var32); /* gammit_gl_error on <var32:Sys>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__programs__Shader__error_61d]))(self, var33); /* error= on <self:Shader>*/
}
RET_LABEL:;
}
/* method programs#Shader#deleted for (self: Shader): Bool */
short int gamnit___gamnit__Shader___deleted(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_gamnit__programs__Shader___deleted].s; /* _deleted on <self:Shader> */
var = var1;
RET_LABEL:;
return var;
}
/* method programs#Shader#deleted= for (self: Shader, Bool) */
void gamnit___gamnit__Shader___deleted_61d(val* self, short int p0) {
self->attrs[COLOR_gamnit__programs__Shader___deleted].s = p0; /* _deleted on <self:Shader> */
RET_LABEL:;
}
/* method programs#Shader#delete for (self: Shader) */
void gamnit___gamnit__Shader___delete(val* self) {
short int var /* : Bool */;
val* var1 /* : Sys */;
val* var2 /* : GLShader */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__programs__Shader__deleted]))(self); /* deleted on <self:Shader>*/
}
if (var){
goto RET_LABEL;
} else {
}
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__Shader__gl_shader]))(self); /* gl_shader on <self:Shader>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_glesv2__Sys__glDeleteShader]))(var1, var2); /* glDeleteShader on <var1:Sys>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_gamnit__programs__Shader__deleted_61d]))(self, 1); /* deleted= on <self:Shader>*/
}
RET_LABEL:;
}
/* method programs#Shader#init for (self: Shader) */
void gamnit___gamnit__Shader___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit___gamnit__Shader___core__kernel__Object__init]))(self); /* init on <self:Shader>*/
}
RET_LABEL:;
}
/* method programs#VertexShader#gl_shader_type for (self: VertexShader): GLShaderType */
val* gamnit___gamnit__VertexShader___Shader__gl_shader_type(val* self) {
val* var /* : GLShaderType */;
val* var1 /* : Sys */;
val* var2 /* : GLShaderType */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_glesv2__Sys__gl_VERTEX_SHADER]))(var1); /* gl_VERTEX_SHADER on <var1:Sys>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#FragmentShader#gl_shader_type for (self: FragmentShader): GLShaderType */
val* gamnit___gamnit__FragmentShader___Shader__gl_shader_type(val* self) {
val* var /* : GLShaderType */;
val* var1 /* : Sys */;
val* var2 /* : GLShaderType */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_glesv2__Sys__gl_FRAGMENT_SHADER]))(var1); /* gl_FRAGMENT_SHADER on <var1:Sys>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#GamnitProgram#vertex_shader for (self: GamnitProgram): VertexShader */
val* gamnit___gamnit__GamnitProgram___vertex_shader(val* self) {
val* var /* : VertexShader */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "vertex_shader", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 315);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method programs#GamnitProgram#fragment_shader for (self: GamnitProgram): FragmentShader */
val* gamnit___gamnit__GamnitProgram___fragment_shader(val* self) {
val* var /* : FragmentShader */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "fragment_shader", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 318);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method programs#GamnitProgram#gl_program for (self: GamnitProgram): nullable GLProgram */
val* gamnit___gamnit__GamnitProgram___gl_program(val* self) {
val* var /* : nullable GLProgram */;
val* var1 /* : nullable GLProgram */;
var1 = self->attrs[COLOR_gamnit__programs__GamnitProgram___gl_program].val; /* _gl_program on <self:GamnitProgram> */
var = var1;
RET_LABEL:;
return var;
}
/* method programs#GamnitProgram#gl_program= for (self: GamnitProgram, nullable GLProgram) */
void gamnit___gamnit__GamnitProgram___gl_program_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__GamnitProgram___gl_program].val = p0; /* _gl_program on <self:GamnitProgram> */
RET_LABEL:;
}
/* method programs#GamnitProgram#error for (self: GamnitProgram): nullable Error */
val* gamnit___gamnit__GamnitProgram___error(val* self) {
val* var /* : nullable Error */;
val* var1 /* : nullable Error */;
var1 = self->attrs[COLOR_gamnit__programs__GamnitProgram___error].val; /* _error on <self:GamnitProgram> */
var = var1;
RET_LABEL:;
return var;
}
/* method programs#GamnitProgram#error= for (self: GamnitProgram, nullable Error) */
void gamnit___gamnit__GamnitProgram___error_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__GamnitProgram___error].val = p0; /* _error on <self:GamnitProgram> */
RET_LABEL:;
}
/* method programs#GamnitProgram#compile_and_link for (self: GamnitProgram) */
void gamnit___gamnit__GamnitProgram___compile_and_link(val* self) {
val* var /* : Sys */;
val* var1 /* : GLProgram */;
val* var_gl_program /* var gl_program: GLProgram */;
val* var2 /* : Sys */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Error */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : Sys */;
val* var12 /* : GLError */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : VertexShader */;
val* var_vertex_shader /* var vertex_shader: VertexShader */;
val* var16 /* : nullable Error */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : nullable Error */;
val* var20 /* : FragmentShader */;
val* var_fragment_shader /* var fragment_shader: FragmentShader */;
val* var21 /* : nullable Error */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : nullable Error */;
val* var25 /* : Sys */;
val* var26 /* : GLShader */;
val* var27 /* : Sys */;
val* var28 /* : GLShader */;
val* var29 /* : Sys */;
val* var30 /* : nullable Error */;
val* var_error /* var error: nullable Error */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : Sys */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : Error */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
val* var43 /* : Sys */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : Sys */;
val* var47 /* : Sys */;
val* var48 /* : GLGetParameterName */;
long var49 /* : Int */;
long var_n_attribs /* var n_attribs: Int */;
long var_a /* var a: Int */;
long var_ /* var : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var53 /* : Bool */;
val* var54 /* : String */;
val* var_name /* var name: String */;
long var55 /* : Int */;
long var_size /* var size: Int */;
val* var56 /* : GLDataType */;
val* var_typ /* var typ: GLDataType */;
long var57 /* : Int */;
long var_location /* var location: Int */;
val* var58 /* : Sys */;
val* var59 /* : GLDataType */;
short int var60 /* : Bool */;
val* var61 /* : AttributeFloat */;
val* var_attribute /* var attribute: nullable Object */;
val* var62 /* : Sys */;
val* var63 /* : GLDataType */;
short int var64 /* : Bool */;
val* var65 /* : AttributeVec2 */;
val* var66 /* : Sys */;
val* var67 /* : GLDataType */;
short int var68 /* : Bool */;
val* var69 /* : AttributeVec3 */;
val* var70 /* : Sys */;
val* var71 /* : GLDataType */;
short int var72 /* : Bool */;
val* var73 /* : AttributeVec4 */;
val* var74 /* : Attribute */;
val* var75 /* : AttributeMap */;
long var76 /* : Int */;
val* var77 /* : Sys */;
val* var78 /* : Sys */;
val* var79 /* : GLGetParameterName */;
long var80 /* : Int */;
long var_n_uniforms /* var n_uniforms: Int */;
long var_a81 /* var a: Int */;
long var_82 /* var : Int */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
short int var89 /* : Bool */;
val* var91 /* : String */;
val* var_name92 /* var name: String */;
long var93 /* : Int */;
long var_size94 /* var size: Int */;
val* var95 /* : GLDataType */;
val* var_typ96 /* var typ: GLDataType */;
long var97 /* : Int */;
long var_location98 /* var location: Int */;
val* var99 /* : Sys */;
val* var100 /* : GLDataType */;
short int var101 /* : Bool */;
val* var102 /* : UniformBool */;
val* var_uniform /* var uniform: nullable Object */;
val* var103 /* : Sys */;
val* var104 /* : GLDataType */;
short int var105 /* : Bool */;
val* var106 /* : UniformSampler2D */;
val* var107 /* : Sys */;
val* var108 /* : GLDataType */;
short int var109 /* : Bool */;
val* var110 /* : UniformFloat */;
val* var111 /* : Sys */;
val* var112 /* : GLDataType */;
short int var113 /* : Bool */;
val* var114 /* : UniformVec2 */;
val* var115 /* : Sys */;
val* var116 /* : GLDataType */;
short int var117 /* : Bool */;
val* var118 /* : UniformVec3 */;
val* var119 /* : Sys */;
val* var120 /* : GLDataType */;
short int var121 /* : Bool */;
val* var122 /* : UniformVec4 */;
val* var123 /* : Sys */;
val* var124 /* : GLDataType */;
short int var125 /* : Bool */;
val* var126 /* : UniformMat4 */;
val* var127 /* : Uniform */;
val* var128 /* : UniformMap */;
long var129 /* : Int */;
var = glob_sys;
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_glesv2__Sys__glCreateProgram]))(var); /* glCreateProgram on <var:Sys>*/
}
var_gl_program = var1;
var2 = glob_sys;
{
var3 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_glesv2__Sys__glIsProgram]))(var2, var_gl_program); /* glIsProgram on <var2:Sys>*/
}
var4 = !var3;
if (var4){
var5 = NEW_core__Error(&type_core__Error);
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Program creation failed: ";
var10 = core__flat___NativeString___to_s_full(var9, 25l, 25l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
var11 = glob_sys;
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_glesv2__Sys__glGetError]))(var11); /* glGetError on <var11:Sys>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__Object__to_s]))(var12); /* to_s on <var12:GLError>*/
}
((struct instance_core__NativeArray*)var6)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var14); /* message= on <var5:Error>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:Error>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__error_61d]))(self, var5); /* error= on <self:GamnitProgram>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__gl_program_61d]))(self, var_gl_program); /* gl_program= on <self:GamnitProgram>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__vertex_shader]))(self); /* vertex_shader on <self:GamnitProgram>*/
}
var_vertex_shader = var15;
{
((void(*)(val* self))(var_vertex_shader->class->vft[COLOR_gamnit__programs__Shader__compile]))(var_vertex_shader); /* compile on <var_vertex_shader:VertexShader>*/
}
{
var16 = ((val*(*)(val* self))(var_vertex_shader->class->vft[COLOR_gamnit__programs__Shader__error]))(var_vertex_shader); /* error on <var_vertex_shader:VertexShader>*/
}
if (var16 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
var18 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_core__kernel__Object___33d_61d]))(var16, ((val*)NULL)); /* != on <var16:nullable Error>*/
var17 = var18;
}
if (var17){
{
var19 = ((val*(*)(val* self))(var_vertex_shader->class->vft[COLOR_gamnit__programs__Shader__error]))(var_vertex_shader); /* error on <var_vertex_shader:VertexShader>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__error_61d]))(self, var19); /* error= on <self:GamnitProgram>*/
}
goto RET_LABEL;
} else {
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__fragment_shader]))(self); /* fragment_shader on <self:GamnitProgram>*/
}
var_fragment_shader = var20;
{
((void(*)(val* self))(var_fragment_shader->class->vft[COLOR_gamnit__programs__Shader__compile]))(var_fragment_shader); /* compile on <var_fragment_shader:FragmentShader>*/
}
{
var21 = ((val*(*)(val* self))(var_fragment_shader->class->vft[COLOR_gamnit__programs__Shader__error]))(var_fragment_shader); /* error on <var_fragment_shader:FragmentShader>*/
}
if (var21 == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
var23 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_core__kernel__Object___33d_61d]))(var21, ((val*)NULL)); /* != on <var21:nullable Error>*/
var22 = var23;
}
if (var22){
{
var24 = ((val*(*)(val* self))(var_fragment_shader->class->vft[COLOR_gamnit__programs__Shader__error]))(var_fragment_shader); /* error on <var_fragment_shader:FragmentShader>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__error_61d]))(self, var24); /* error= on <self:GamnitProgram>*/
}
goto RET_LABEL;
} else {
}
var25 = glob_sys;
{
var26 = ((val*(*)(val* self))(var_vertex_shader->class->vft[COLOR_gamnit__programs__Shader__gl_shader]))(var_vertex_shader); /* gl_shader on <var_vertex_shader:VertexShader>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var25->class->vft[COLOR_glesv2__Sys__glAttachShader]))(var25, var_gl_program, var26); /* glAttachShader on <var25:Sys>*/
}
var27 = glob_sys;
{
var28 = ((val*(*)(val* self))(var_fragment_shader->class->vft[COLOR_gamnit__programs__Shader__gl_shader]))(var_fragment_shader); /* gl_shader on <var_fragment_shader:FragmentShader>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var27->class->vft[COLOR_glesv2__Sys__glAttachShader]))(var27, var_gl_program, var28); /* glAttachShader on <var27:Sys>*/
}
var29 = glob_sys;
{
var30 = ((val*(*)(val* self))(var29->class->vft[COLOR_gamnit__programs__Sys__gammit_gl_error]))(var29); /* gammit_gl_error on <var29:Sys>*/
}
var_error = var30;
if (var_error == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))(var_error->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_error, ((val*)NULL)); /* != on <var_error:nullable Error>*/
var31 = var32;
}
if (var31){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__error_61d]))(self, var_error); /* error= on <self:GamnitProgram>*/
}
goto RET_LABEL;
} else {
}
var33 = glob_sys;
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_glesv2__Sys__glLinkProgram]))(var33, var_gl_program); /* glLinkProgram on <var33:Sys>*/
}
{
var34 = ((short int(*)(val* self))(var_gl_program->class->vft[COLOR_glesv2__GLProgram__is_linked]))(var_gl_program); /* is_linked on <var_gl_program:GLProgram>*/
}
var35 = !var34;
if (var35){
var36 = NEW_core__Error(&type_core__Error);
if (unlikely(varonce37==NULL)) {
var38 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "Linking failed: ";
var42 = core__flat___NativeString___to_s_full(var41, 16l, 16l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var38)->values[0]=var40;
} else {
var38 = varonce37;
varonce37 = NULL;
}
var43 = glob_sys;
{
var44 = ((val*(*)(val* self, val* p0))(var43->class->vft[COLOR_glesv2__Sys__glGetProgramInfoLog]))(var43, var_gl_program); /* glGetProgramInfoLog on <var43:Sys>*/
}
((struct instance_core__NativeArray*)var38)->values[1]=var44;
{
var45 = ((val*(*)(val* self))(var38->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
{
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_core__error__Error__message_61d]))(var36, var45); /* message= on <var36:Error>*/
}
{
((void(*)(val* self))(var36->class->vft[COLOR_core__kernel__Object__init]))(var36); /* init on <var36:Error>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__error_61d]))(self, var36); /* error= on <self:GamnitProgram>*/
}
goto RET_LABEL;
} else {
}
var46 = glob_sys;
var47 = glob_sys;
{
var48 = ((val*(*)(val* self))(var47->class->vft[COLOR_glesv2__Sys__gl_ACTIVE_ATTRIBUTES]))(var47); /* gl_ACTIVE_ATTRIBUTES on <var47:Sys>*/
}
{
var49 = ((long(*)(val* self, val* p0, val* p1))(var46->class->vft[COLOR_glesv2__Sys__glGetProgramiv]))(var46, var_gl_program, var48); /* glGetProgramiv on <var46:Sys>*/
}
var_n_attribs = var49;
var_a = 0l;
var_ = var_n_attribs;
for(;;) {
{
{ /* Inline kernel#Int#< (var_a,var_) on <var_a:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var52 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var53 = var_a < var_;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (var50){
} else {
goto BREAK_label;
}
{
var54 = ((val*(*)(val* self, long p0))(var_gl_program->class->vft[COLOR_glesv2__GLProgram__active_attrib_name]))(var_gl_program, var_a); /* active_attrib_name on <var_gl_program:GLProgram>*/
}
var_name = var54;
{
var55 = ((long(*)(val* self, long p0))(var_gl_program->class->vft[COLOR_glesv2__GLProgram__active_attrib_size]))(var_gl_program, var_a); /* active_attrib_size on <var_gl_program:GLProgram>*/
}
var_size = var55;
{
var56 = ((val*(*)(val* self, long p0))(var_gl_program->class->vft[COLOR_glesv2__GLProgram__active_attrib_type]))(var_gl_program, var_a); /* active_attrib_type on <var_gl_program:GLProgram>*/
}
var_typ = var56;
{
var57 = ((long(*)(val* self, val* p0))(var_gl_program->class->vft[COLOR_glesv2__GLProgram__attrib_location]))(var_gl_program, var_name); /* attrib_location on <var_gl_program:GLProgram>*/
}
var_location = var57;
var58 = glob_sys;
{
var59 = ((val*(*)(val* self))(var58->class->vft[COLOR_glesv2__Sys__gl_FLOAT]))(var58); /* gl_FLOAT on <var58:Sys>*/
}
{
var60 = ((short int(*)(val* self, val* p0))(var_typ->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_typ, var59); /* == on <var_typ:GLDataType>*/
}
if (var60){
var61 = NEW_gamnit__AttributeFloat(&type_gamnit__AttributeFloat);
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var61, var_gl_program); /* program= on <var61:AttributeFloat>*/
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var61, var_name); /* name= on <var61:AttributeFloat>*/
}
{
((void(*)(val* self, long p0))(var61->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var61, var_location); /* location= on <var61:AttributeFloat>*/
}
{
((void(*)(val* self, long p0))(var61->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var61, var_size); /* size= on <var61:AttributeFloat>*/
}
{
((void(*)(val* self))(var61->class->vft[COLOR_core__kernel__Object__init]))(var61); /* init on <var61:AttributeFloat>*/
}
var_attribute = var61;
} else {
var62 = glob_sys;
{
var63 = ((val*(*)(val* self))(var62->class->vft[COLOR_glesv2__Sys__gl_FLOAT_VEC2]))(var62); /* gl_FLOAT_VEC2 on <var62:Sys>*/
}
{
var64 = ((short int(*)(val* self, val* p0))(var_typ->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_typ, var63); /* == on <var_typ:GLDataType>*/
}
if (var64){
var65 = NEW_gamnit__AttributeVec2(&type_gamnit__AttributeVec2);
{
((void(*)(val* self, val* p0))(var65->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var65, var_gl_program); /* program= on <var65:AttributeVec2>*/
}
{
((void(*)(val* self, val* p0))(var65->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var65, var_name); /* name= on <var65:AttributeVec2>*/
}
{
((void(*)(val* self, long p0))(var65->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var65, var_location); /* location= on <var65:AttributeVec2>*/
}
{
((void(*)(val* self, long p0))(var65->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var65, var_size); /* size= on <var65:AttributeVec2>*/
}
{
((void(*)(val* self))(var65->class->vft[COLOR_core__kernel__Object__init]))(var65); /* init on <var65:AttributeVec2>*/
}
var_attribute = var65;
} else {
var66 = glob_sys;
{
var67 = ((val*(*)(val* self))(var66->class->vft[COLOR_glesv2__Sys__gl_FLOAT_VEC3]))(var66); /* gl_FLOAT_VEC3 on <var66:Sys>*/
}
{
var68 = ((short int(*)(val* self, val* p0))(var_typ->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_typ, var67); /* == on <var_typ:GLDataType>*/
}
if (var68){
var69 = NEW_gamnit__AttributeVec3(&type_gamnit__AttributeVec3);
{
((void(*)(val* self, val* p0))(var69->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var69, var_gl_program); /* program= on <var69:AttributeVec3>*/
}
{
((void(*)(val* self, val* p0))(var69->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var69, var_name); /* name= on <var69:AttributeVec3>*/
}
{
((void(*)(val* self, long p0))(var69->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var69, var_location); /* location= on <var69:AttributeVec3>*/
}
{
((void(*)(val* self, long p0))(var69->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var69, var_size); /* size= on <var69:AttributeVec3>*/
}
{
((void(*)(val* self))(var69->class->vft[COLOR_core__kernel__Object__init]))(var69); /* init on <var69:AttributeVec3>*/
}
var_attribute = var69;
} else {
var70 = glob_sys;
{
var71 = ((val*(*)(val* self))(var70->class->vft[COLOR_glesv2__Sys__gl_FLOAT_VEC4]))(var70); /* gl_FLOAT_VEC4 on <var70:Sys>*/
}
{
var72 = ((short int(*)(val* self, val* p0))(var_typ->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_typ, var71); /* == on <var_typ:GLDataType>*/
}
if (var72){
var73 = NEW_gamnit__AttributeVec4(&type_gamnit__AttributeVec4);
{
((void(*)(val* self, val* p0))(var73->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var73, var_gl_program); /* program= on <var73:AttributeVec4>*/
}
{
((void(*)(val* self, val* p0))(var73->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var73, var_name); /* name= on <var73:AttributeVec4>*/
}
{
((void(*)(val* self, long p0))(var73->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var73, var_location); /* location= on <var73:AttributeVec4>*/
}
{
((void(*)(val* self, long p0))(var73->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var73, var_size); /* size= on <var73:AttributeVec4>*/
}
{
((void(*)(val* self))(var73->class->vft[COLOR_core__kernel__Object__init]))(var73); /* init on <var73:AttributeVec4>*/
}
var_attribute = var73;
} else {
var74 = NEW_gamnit__Attribute(&type_gamnit__Attribute);
{
((void(*)(val* self, val* p0))(var74->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var74, var_gl_program); /* program= on <var74:Attribute>*/
}
{
((void(*)(val* self, val* p0))(var74->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var74, var_name); /* name= on <var74:Attribute>*/
}
{
((void(*)(val* self, long p0))(var74->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var74, var_location); /* location= on <var74:Attribute>*/
}
{
((void(*)(val* self, long p0))(var74->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var74, var_size); /* size= on <var74:Attribute>*/
}
{
((void(*)(val* self))(var74->class->vft[COLOR_core__kernel__Object__init]))(var74); /* init on <var74:Attribute>*/
}
var_attribute = var74;
}
}
}
}
{
var75 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__attributes]))(self); /* attributes on <self:GamnitProgram>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var75->class->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var75, var_name, var_attribute); /* []= on <var75:AttributeMap>*/
}
var76 = core___core__Int___Discrete__successor(var_a, 1l);
var_a = var76;
}
BREAK_label: (void)0;
var77 = glob_sys;
var78 = glob_sys;
{
var79 = ((val*(*)(val* self))(var78->class->vft[COLOR_glesv2__Sys__gl_ACTIVE_UNIFORMS]))(var78); /* gl_ACTIVE_UNIFORMS on <var78:Sys>*/
}
{
var80 = ((long(*)(val* self, val* p0, val* p1))(var77->class->vft[COLOR_glesv2__Sys__glGetProgramiv]))(var77, var_gl_program, var79); /* glGetProgramiv on <var77:Sys>*/
}
var_n_uniforms = var80;
var_a81 = 0l;
var_82 = var_n_uniforms;
for(;;) {
{
{ /* Inline kernel#Int#< (var_a81,var_82) on <var_a81:Int> */
/* Covariant cast for argument 0 (i) <var_82:Int> isa OTHER */
/* <var_82:Int> isa OTHER */
var85 = 1; /* easy <var_82:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var89 = var_a81 < var_82;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
if (var83){
} else {
goto BREAK_label90;
}
{
var91 = ((val*(*)(val* self, long p0))(var_gl_program->class->vft[COLOR_glesv2__GLProgram__active_uniform_name]))(var_gl_program, var_a81); /* active_uniform_name on <var_gl_program:GLProgram>*/
}
var_name92 = var91;
{
var93 = ((long(*)(val* self, long p0))(var_gl_program->class->vft[COLOR_glesv2__GLProgram__active_uniform_size]))(var_gl_program, var_a81); /* active_uniform_size on <var_gl_program:GLProgram>*/
}
var_size94 = var93;
{
var95 = ((val*(*)(val* self, long p0))(var_gl_program->class->vft[COLOR_glesv2__GLProgram__active_uniform_type]))(var_gl_program, var_a81); /* active_uniform_type on <var_gl_program:GLProgram>*/
}
var_typ96 = var95;
{
var97 = ((long(*)(val* self, val* p0))(var_gl_program->class->vft[COLOR_glesv2__GLProgram__uniform_location]))(var_gl_program, var_name92); /* uniform_location on <var_gl_program:GLProgram>*/
}
var_location98 = var97;
var99 = glob_sys;
{
var100 = ((val*(*)(val* self))(var99->class->vft[COLOR_glesv2__Sys__gl_BOOL]))(var99); /* gl_BOOL on <var99:Sys>*/
}
{
var101 = ((short int(*)(val* self, val* p0))(var_typ96->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_typ96, var100); /* == on <var_typ96:GLDataType>*/
}
if (var101){
var102 = NEW_gamnit__UniformBool(&type_gamnit__UniformBool);
{
((void(*)(val* self, val* p0))(var102->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var102, var_gl_program); /* program= on <var102:UniformBool>*/
}
{
((void(*)(val* self, val* p0))(var102->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var102, var_name92); /* name= on <var102:UniformBool>*/
}
{
((void(*)(val* self, long p0))(var102->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var102, var_location98); /* location= on <var102:UniformBool>*/
}
{
((void(*)(val* self, long p0))(var102->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var102, var_size94); /* size= on <var102:UniformBool>*/
}
{
((void(*)(val* self))(var102->class->vft[COLOR_core__kernel__Object__init]))(var102); /* init on <var102:UniformBool>*/
}
var_uniform = var102;
} else {
var103 = glob_sys;
{
var104 = ((val*(*)(val* self))(var103->class->vft[COLOR_glesv2__Sys__gl_SAMPLER_95d2D]))(var103); /* gl_SAMPLER_2D on <var103:Sys>*/
}
{
var105 = ((short int(*)(val* self, val* p0))(var_typ96->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_typ96, var104); /* == on <var_typ96:GLDataType>*/
}
if (var105){
var106 = NEW_gamnit__UniformSampler2D(&type_gamnit__UniformSampler2D);
{
((void(*)(val* self, val* p0))(var106->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var106, var_gl_program); /* program= on <var106:UniformSampler2D>*/
}
{
((void(*)(val* self, val* p0))(var106->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var106, var_name92); /* name= on <var106:UniformSampler2D>*/
}
{
((void(*)(val* self, long p0))(var106->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var106, var_location98); /* location= on <var106:UniformSampler2D>*/
}
{
((void(*)(val* self, long p0))(var106->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var106, var_size94); /* size= on <var106:UniformSampler2D>*/
}
{
((void(*)(val* self))(var106->class->vft[COLOR_core__kernel__Object__init]))(var106); /* init on <var106:UniformSampler2D>*/
}
var_uniform = var106;
} else {
var107 = glob_sys;
{
var108 = ((val*(*)(val* self))(var107->class->vft[COLOR_glesv2__Sys__gl_FLOAT]))(var107); /* gl_FLOAT on <var107:Sys>*/
}
{
var109 = ((short int(*)(val* self, val* p0))(var_typ96->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_typ96, var108); /* == on <var_typ96:GLDataType>*/
}
if (var109){
var110 = NEW_gamnit__UniformFloat(&type_gamnit__UniformFloat);
{
((void(*)(val* self, val* p0))(var110->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var110, var_gl_program); /* program= on <var110:UniformFloat>*/
}
{
((void(*)(val* self, val* p0))(var110->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var110, var_name92); /* name= on <var110:UniformFloat>*/
}
{
((void(*)(val* self, long p0))(var110->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var110, var_location98); /* location= on <var110:UniformFloat>*/
}
{
((void(*)(val* self, long p0))(var110->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var110, var_size94); /* size= on <var110:UniformFloat>*/
}
{
((void(*)(val* self))(var110->class->vft[COLOR_core__kernel__Object__init]))(var110); /* init on <var110:UniformFloat>*/
}
var_uniform = var110;
} else {
var111 = glob_sys;
{
var112 = ((val*(*)(val* self))(var111->class->vft[COLOR_glesv2__Sys__gl_FLOAT_VEC2]))(var111); /* gl_FLOAT_VEC2 on <var111:Sys>*/
}
{
var113 = ((short int(*)(val* self, val* p0))(var_typ96->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_typ96, var112); /* == on <var_typ96:GLDataType>*/
}
if (var113){
var114 = NEW_gamnit__UniformVec2(&type_gamnit__UniformVec2);
{
((void(*)(val* self, val* p0))(var114->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var114, var_gl_program); /* program= on <var114:UniformVec2>*/
}
{
((void(*)(val* self, val* p0))(var114->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var114, var_name92); /* name= on <var114:UniformVec2>*/
}
{
((void(*)(val* self, long p0))(var114->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var114, var_location98); /* location= on <var114:UniformVec2>*/
}
{
((void(*)(val* self, long p0))(var114->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var114, var_size94); /* size= on <var114:UniformVec2>*/
}
{
((void(*)(val* self))(var114->class->vft[COLOR_core__kernel__Object__init]))(var114); /* init on <var114:UniformVec2>*/
}
var_uniform = var114;
} else {
var115 = glob_sys;
{
var116 = ((val*(*)(val* self))(var115->class->vft[COLOR_glesv2__Sys__gl_FLOAT_VEC3]))(var115); /* gl_FLOAT_VEC3 on <var115:Sys>*/
}
{
var117 = ((short int(*)(val* self, val* p0))(var_typ96->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_typ96, var116); /* == on <var_typ96:GLDataType>*/
}
if (var117){
var118 = NEW_gamnit__UniformVec3(&type_gamnit__UniformVec3);
{
((void(*)(val* self, val* p0))(var118->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var118, var_gl_program); /* program= on <var118:UniformVec3>*/
}
{
((void(*)(val* self, val* p0))(var118->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var118, var_name92); /* name= on <var118:UniformVec3>*/
}
{
((void(*)(val* self, long p0))(var118->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var118, var_location98); /* location= on <var118:UniformVec3>*/
}
{
((void(*)(val* self, long p0))(var118->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var118, var_size94); /* size= on <var118:UniformVec3>*/
}
{
((void(*)(val* self))(var118->class->vft[COLOR_core__kernel__Object__init]))(var118); /* init on <var118:UniformVec3>*/
}
var_uniform = var118;
} else {
var119 = glob_sys;
{
var120 = ((val*(*)(val* self))(var119->class->vft[COLOR_glesv2__Sys__gl_FLOAT_VEC4]))(var119); /* gl_FLOAT_VEC4 on <var119:Sys>*/
}
{
var121 = ((short int(*)(val* self, val* p0))(var_typ96->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_typ96, var120); /* == on <var_typ96:GLDataType>*/
}
if (var121){
var122 = NEW_gamnit__UniformVec4(&type_gamnit__UniformVec4);
{
((void(*)(val* self, val* p0))(var122->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var122, var_gl_program); /* program= on <var122:UniformVec4>*/
}
{
((void(*)(val* self, val* p0))(var122->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var122, var_name92); /* name= on <var122:UniformVec4>*/
}
{
((void(*)(val* self, long p0))(var122->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var122, var_location98); /* location= on <var122:UniformVec4>*/
}
{
((void(*)(val* self, long p0))(var122->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var122, var_size94); /* size= on <var122:UniformVec4>*/
}
{
((void(*)(val* self))(var122->class->vft[COLOR_core__kernel__Object__init]))(var122); /* init on <var122:UniformVec4>*/
}
var_uniform = var122;
} else {
var123 = glob_sys;
{
var124 = ((val*(*)(val* self))(var123->class->vft[COLOR_glesv2__Sys__gl_FLOAT_MAT4]))(var123); /* gl_FLOAT_MAT4 on <var123:Sys>*/
}
{
var125 = ((short int(*)(val* self, val* p0))(var_typ96->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_typ96, var124); /* == on <var_typ96:GLDataType>*/
}
if (var125){
var126 = NEW_gamnit__UniformMat4(&type_gamnit__UniformMat4);
{
((void(*)(val* self, val* p0))(var126->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var126, var_gl_program); /* program= on <var126:UniformMat4>*/
}
{
((void(*)(val* self, val* p0))(var126->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var126, var_name92); /* name= on <var126:UniformMat4>*/
}
{
((void(*)(val* self, long p0))(var126->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var126, var_location98); /* location= on <var126:UniformMat4>*/
}
{
((void(*)(val* self, long p0))(var126->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var126, var_size94); /* size= on <var126:UniformMat4>*/
}
{
((void(*)(val* self))(var126->class->vft[COLOR_core__kernel__Object__init]))(var126); /* init on <var126:UniformMat4>*/
}
var_uniform = var126;
} else {
var127 = NEW_gamnit__Uniform(&type_gamnit__Uniform);
{
((void(*)(val* self, val* p0))(var127->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var127, var_gl_program); /* program= on <var127:Uniform>*/
}
{
((void(*)(val* self, val* p0))(var127->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var127, var_name92); /* name= on <var127:Uniform>*/
}
{
((void(*)(val* self, long p0))(var127->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var127, var_location98); /* location= on <var127:Uniform>*/
}
{
((void(*)(val* self, long p0))(var127->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var127, var_size94); /* size= on <var127:Uniform>*/
}
{
((void(*)(val* self))(var127->class->vft[COLOR_core__kernel__Object__init]))(var127); /* init on <var127:Uniform>*/
}
var_uniform = var127;
}
}
}
}
}
}
}
{
var128 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__uniforms]))(self); /* uniforms on <self:GamnitProgram>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var128->class->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var128, var_name92, var_uniform); /* []= on <var128:UniformMap>*/
}
var129 = core___core__Int___Discrete__successor(var_a81, 1l);
var_a81 = var129;
}
BREAK_label90: (void)0;
RET_LABEL:;
}
/* method programs#GamnitProgram#attributes for (self: GamnitProgram): AttributeMap */
val* gamnit___gamnit__GamnitProgram___attributes(val* self) {
val* var /* : AttributeMap */;
val* var1 /* : AttributeMap */;
var1 = self->attrs[COLOR_gamnit__programs__GamnitProgram___attributes].val; /* _attributes on <self:GamnitProgram> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attributes");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 431);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method programs#GamnitProgram#attributes= for (self: GamnitProgram, AttributeMap) */
void gamnit___gamnit__GamnitProgram___attributes_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__GamnitProgram___attributes].val = p0; /* _attributes on <self:GamnitProgram> */
RET_LABEL:;
}
/* method programs#GamnitProgram#uniforms for (self: GamnitProgram): UniformMap */
val* gamnit___gamnit__GamnitProgram___uniforms(val* self) {
val* var /* : UniformMap */;
val* var1 /* : UniformMap */;
var1 = self->attrs[COLOR_gamnit__programs__GamnitProgram___uniforms].val; /* _uniforms on <self:GamnitProgram> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _uniforms");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 437);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method programs#GamnitProgram#uniforms= for (self: GamnitProgram, UniformMap) */
void gamnit___gamnit__GamnitProgram___uniforms_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__GamnitProgram___uniforms].val = p0; /* _uniforms on <self:GamnitProgram> */
RET_LABEL:;
}
/* method programs#GamnitProgram#use for (self: GamnitProgram) */
void gamnit___gamnit__GamnitProgram___use(val* self) {
val* var /* : nullable GLProgram */;
val* var_gl_program /* var gl_program: nullable GLProgram */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Sys */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__gl_program]))(self); /* gl_program on <self:GamnitProgram>*/
}
var_gl_program = var;
if (var_gl_program == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_gl_program->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_gl_program, ((val*)NULL)); /* != on <var_gl_program:nullable GLProgram>*/
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 447);
fatal_exit(1);
}
var3 = glob_sys;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_glesv2__Sys__glUseProgram]))(var3, var_gl_program); /* glUseProgram on <var3:Sys>*/
}
RET_LABEL:;
}
/* method programs#GamnitProgram#deleted for (self: GamnitProgram): Bool */
short int gamnit___gamnit__GamnitProgram___deleted(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_gamnit__programs__GamnitProgram___deleted].s; /* _deleted on <self:GamnitProgram> */
var = var1;
RET_LABEL:;
return var;
}
/* method programs#GamnitProgram#deleted= for (self: GamnitProgram, Bool) */
void gamnit___gamnit__GamnitProgram___deleted_61d(val* self, short int p0) {
self->attrs[COLOR_gamnit__programs__GamnitProgram___deleted].s = p0; /* _deleted on <self:GamnitProgram> */
RET_LABEL:;
}
/* method programs#GamnitProgram#delete for (self: GamnitProgram) */
void gamnit___gamnit__GamnitProgram___delete(val* self) {
short int var /* : Bool */;
val* var1 /* : Sys */;
val* var2 /* : nullable GLProgram */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__deleted]))(self); /* deleted on <self:GamnitProgram>*/
}
if (var){
goto RET_LABEL;
} else {
}
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__gl_program]))(self); /* gl_program on <self:GamnitProgram>*/
}
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 459);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_glesv2__Sys__glDeleteProgram]))(var1, var2); /* glDeleteProgram on <var1:Sys>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_gamnit__programs__GamnitProgram__deleted_61d]))(self, 1); /* deleted= on <self:GamnitProgram>*/
}
RET_LABEL:;
}
/* method programs#GamnitProgramFromSource#vertex_shader_source for (self: GamnitProgramFromSource): Text */
val* gamnit___gamnit__GamnitProgramFromSource___vertex_shader_source(val* self) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "vertex_shader_source", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 468);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method programs#GamnitProgramFromSource#vertex_shader for (self: GamnitProgramFromSource): VertexShader */
val* gamnit___gamnit__GamnitProgramFromSource___GamnitProgram__vertex_shader(val* self) {
val* var /* : VertexShader */;
short int var1 /* : Bool */;
val* var2 /* : VertexShader */;
val* var3 /* : VertexShader */;
val* var4 /* : Text */;
var1 = self->attrs[COLOR_gamnit__programs__GamnitProgramFromSource___vertex_shader].val != NULL; /* _vertex_shader on <self:GamnitProgramFromSource> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__programs__GamnitProgramFromSource___vertex_shader].val; /* _vertex_shader on <self:GamnitProgramFromSource> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vertex_shader");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 471);
fatal_exit(1);
}
} else {
var3 = NEW_gamnit__VertexShader(&type_gamnit__VertexShader);
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgramFromSource__vertex_shader_source]))(self); /* vertex_shader_source on <self:GamnitProgramFromSource>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_gamnit__programs__Shader__source_61d]))(var3, var4); /* source= on <var3:VertexShader>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:VertexShader>*/
}
self->attrs[COLOR_gamnit__programs__GamnitProgramFromSource___vertex_shader].val = var3; /* _vertex_shader on <self:GamnitProgramFromSource> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method programs#GamnitProgramFromSource#vertex_shader= for (self: GamnitProgramFromSource, VertexShader) */
void gamnit___gamnit__GamnitProgramFromSource___vertex_shader_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__GamnitProgramFromSource___vertex_shader].val = p0; /* _vertex_shader on <self:GamnitProgramFromSource> */
RET_LABEL:;
}
/* method programs#GamnitProgramFromSource#fragment_shader_source for (self: GamnitProgramFromSource): Text */
val* gamnit___gamnit__GamnitProgramFromSource___fragment_shader_source(val* self) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "fragment_shader_source", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 473);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method programs#GamnitProgramFromSource#fragment_shader for (self: GamnitProgramFromSource): FragmentShader */
val* gamnit___gamnit__GamnitProgramFromSource___GamnitProgram__fragment_shader(val* self) {
val* var /* : FragmentShader */;
short int var1 /* : Bool */;
val* var2 /* : FragmentShader */;
val* var3 /* : FragmentShader */;
val* var4 /* : Text */;
var1 = self->attrs[COLOR_gamnit__programs__GamnitProgramFromSource___fragment_shader].val != NULL; /* _fragment_shader on <self:GamnitProgramFromSource> */
if(likely(var1)) {
var2 = self->attrs[COLOR_gamnit__programs__GamnitProgramFromSource___fragment_shader].val; /* _fragment_shader on <self:GamnitProgramFromSource> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _fragment_shader");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 476);
fatal_exit(1);
}
} else {
var3 = NEW_gamnit__FragmentShader(&type_gamnit__FragmentShader);
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__GamnitProgramFromSource__fragment_shader_source]))(self); /* fragment_shader_source on <self:GamnitProgramFromSource>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_gamnit__programs__Shader__source_61d]))(var3, var4); /* source= on <var3:FragmentShader>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:FragmentShader>*/
}
self->attrs[COLOR_gamnit__programs__GamnitProgramFromSource___fragment_shader].val = var3; /* _fragment_shader on <self:GamnitProgramFromSource> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method programs#GamnitProgramFromSource#fragment_shader= for (self: GamnitProgramFromSource, FragmentShader) */
void gamnit___gamnit__GamnitProgramFromSource___fragment_shader_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__GamnitProgramFromSource___fragment_shader].val = p0; /* _fragment_shader on <self:GamnitProgramFromSource> */
RET_LABEL:;
}
/* method programs#ShaderVariableMap#program for (self: ShaderVariableMap[ShaderVariable]): GamnitProgram */
val* gamnit___gamnit__ShaderVariableMap___program(val* self) {
val* var /* : GamnitProgram */;
val* var1 /* : GamnitProgram */;
var1 = self->attrs[COLOR_gamnit__programs__ShaderVariableMap___program].val; /* _program on <self:ShaderVariableMap[ShaderVariable]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _program");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 483);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method programs#ShaderVariableMap#program= for (self: ShaderVariableMap[ShaderVariable], GamnitProgram) */
void gamnit___gamnit__ShaderVariableMap___program_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__programs__ShaderVariableMap___program].val = p0; /* _program on <self:ShaderVariableMap[ShaderVariable]> */
RET_LABEL:;
}
/* method programs#ShaderVariableMap#[] for (self: ShaderVariableMap[ShaderVariable], nullable Object): ShaderVariable */
val* gamnit___gamnit__ShaderVariableMap___core__abstract_collection__MapRead___91d_93d(val* self, val* p0) {
val* var /* : ShaderVariable */;
val* var_key /* var key: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_max_len /* var max_len: Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
short int var_ /* var : Bool */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
val* var18 /* : Text */;
val* var19 /* : nullable Object */;
var_key = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariableMap__max_name_length]))(self); /* max_name_length on <self:ShaderVariableMap[ShaderVariable]>*/
}
{
{ /* Inline kernel#Int#- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_max_len = var2;
/* <var_key:nullable Object> isa Text */
cltype8 = type_core__Text.color;
idtype9 = type_core__Text.id;
if(var_key == NULL) {
var7 = 0;
} else {
if(cltype8 >= (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->type_table[cltype8] == idtype9;
}
}
var_ = var7;
if (var7){
{
var10 = ((long(*)(val* self))(var_key->class->vft[COLOR_core__abstract_text__Text__length]))(var_key); /* length on <var_key:nullable Object(Text)>*/
}
{
{ /* Inline kernel#Int#> (var10,var_max_len) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var_max_len:Int> isa OTHER */
/* <var_max_len:Int> isa OTHER */
var13 = 1; /* easy <var_max_len:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var17 = var10 > var_max_len;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var6 = var11;
} else {
var6 = var_;
}
if (var6){
{
var18 = ((val*(*)(val* self, long p0, long p1))(var_key->class->vft[COLOR_core__abstract_text__Text__substring]))(var_key, 0l, var_max_len); /* substring on <var_key:nullable Object(Text)>*/
}
var_key = var18;
} else {
}
{
var19 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit___gamnit__ShaderVariableMap___core__abstract_collection__MapRead___91d_93d]))(self, var_key); /* [] on <self:ShaderVariableMap[ShaderVariable]>*/
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#ShaderVariableMap#max_name_length for (self: ShaderVariableMap[ShaderVariable]): Int */
long gamnit___gamnit__ShaderVariableMap___max_name_length(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "max_name_length", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 493);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method programs#ShaderVariableMap#init for (self: ShaderVariableMap[ShaderVariable]) */
void gamnit___gamnit__ShaderVariableMap___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit___gamnit__ShaderVariableMap___core__kernel__Object__init]))(self); /* init on <self:ShaderVariableMap[ShaderVariable]>*/
}
RET_LABEL:;
}
/* method programs#AttributeMap#provide_default_value for (self: AttributeMap, nullable Object): Attribute */
val* gamnit___gamnit__AttributeMap___core__abstract_collection__MapRead__provide_default_value(val* self, val* p0) {
val* var /* : Attribute */;
val* var_key /* var key: nullable Object */;
val* var1 /* : InactiveAttribute */;
val* var2 /* : GamnitProgram */;
val* var3 /* : nullable GLProgram */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
long var7 /* : Int */;
long var9 /* : Int */;
var_key = p0;
var1 = NEW_gamnit__InactiveAttribute(&type_gamnit__InactiveAttribute);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariableMap__program]))(self); /* program on <self:AttributeMap>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_gamnit__programs__GamnitProgram__gl_program]))(var2); /* gl_program on <var2:GamnitProgram>*/
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 501);
fatal_exit(1);
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = core__flat___NativeString___to_s_full(var5, 0l, 0l);
var4 = var6;
varonce = var4;
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var9 = -1l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var1, var3); /* program= on <var1:InactiveAttribute>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var1, var4); /* name= on <var1:InactiveAttribute>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var1, var7); /* location= on <var1:InactiveAttribute>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var1, 0l); /* size= on <var1:InactiveAttribute>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:InactiveAttribute>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#AttributeMap#max_name_length for (self: AttributeMap): Int */
long gamnit___gamnit__AttributeMap___ShaderVariableMap__max_name_length(val* self) {
long var /* : Int */;
val* var1 /* : Sys */;
val* var2 /* : GamnitProgram */;
val* var3 /* : nullable GLProgram */;
val* var4 /* : Sys */;
val* var5 /* : GLGetParameterName */;
long var6 /* : Int */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariableMap__program]))(self); /* program on <self:AttributeMap>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_gamnit__programs__GamnitProgram__gl_program]))(var2); /* gl_program on <var2:GamnitProgram>*/
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 504);
fatal_exit(1);
}
var4 = glob_sys;
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_glesv2__Sys__gl_ACTIVE_ATTRIBUTE_MAX_LENGTH]))(var4); /* gl_ACTIVE_ATTRIBUTE_MAX_LENGTH on <var4:Sys>*/
}
{
var6 = ((long(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_glesv2__Sys__glGetProgramiv]))(var1, var3, var5); /* glGetProgramiv on <var1:Sys>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#AttributeMap#[] for (self: AttributeMap, nullable Object): Attribute */
val* gamnit___gamnit__AttributeMap___core__abstract_collection__MapRead___91d_93d(val* self, val* p0) {
val* var /* : Attribute */;
val* var_key /* var key: nullable Object */;
val* var1 /* : nullable Object */;
val* var_item /* var item: Attribute */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : GamnitProgram */;
val* var4 /* : nullable GLProgram */;
val* var5 /* : String */;
long var6 /* : Int */;
var_key = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit___gamnit__AttributeMap___core__abstract_collection__MapRead___91d_93d]))(self, p0); /* [] on <self:AttributeMap>*/
}
var_item = var1;
/* <var_key:nullable Object> isa Text */
cltype = type_core__Text.color;
idtype = type_core__Text.id;
if(var_key == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->type_table[cltype] == idtype;
}
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariableMap__program]))(self); /* program on <self:AttributeMap>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_gamnit__programs__GamnitProgram__gl_program]))(var3); /* gl_program on <var3:GamnitProgram>*/
}
{
var5 = ((val*(*)(val* self))(var_key->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_key); /* to_s on <var_key:nullable Object(Text)>*/
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 510);
fatal_exit(1);
} else {
var6 = ((long(*)(val* self, val* p0))(var4->class->vft[COLOR_glesv2__GLProgram__attrib_location]))(var4, var5); /* attrib_location on <var4:nullable GLProgram>*/
}
{
((void(*)(val* self, long p0))(var_item->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var_item, var6); /* location= on <var_item:Attribute>*/
}
} else {
}
var = var_item;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#UniformMap#provide_default_value for (self: UniformMap, nullable Object): Uniform */
val* gamnit___gamnit__UniformMap___core__abstract_collection__MapRead__provide_default_value(val* self, val* p0) {
val* var /* : Uniform */;
val* var_key /* var key: nullable Object */;
val* var1 /* : InactiveUniform */;
val* var2 /* : GamnitProgram */;
val* var3 /* : nullable GLProgram */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
long var7 /* : Int */;
long var9 /* : Int */;
var_key = p0;
var1 = NEW_gamnit__InactiveUniform(&type_gamnit__InactiveUniform);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariableMap__program]))(self); /* program on <self:UniformMap>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_gamnit__programs__GamnitProgram__gl_program]))(var2); /* gl_program on <var2:GamnitProgram>*/
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 520);
fatal_exit(1);
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = core__flat___NativeString___to_s_full(var5, 0l, 0l);
var4 = var6;
varonce = var4;
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var9 = -1l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_gamnit__programs__ShaderVariable__program_61d]))(var1, var3); /* program= on <var1:InactiveUniform>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_gamnit__programs__ShaderVariable__name_61d]))(var1, var4); /* name= on <var1:InactiveUniform>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var1, var7); /* location= on <var1:InactiveUniform>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_gamnit__programs__ShaderVariable__size_61d]))(var1, 0l); /* size= on <var1:InactiveUniform>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:InactiveUniform>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#UniformMap#max_name_length for (self: UniformMap): Int */
long gamnit___gamnit__UniformMap___ShaderVariableMap__max_name_length(val* self) {
long var /* : Int */;
val* var1 /* : Sys */;
val* var2 /* : GamnitProgram */;
val* var3 /* : nullable GLProgram */;
val* var4 /* : Sys */;
val* var5 /* : GLGetParameterName */;
long var6 /* : Int */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariableMap__program]))(self); /* program on <self:UniformMap>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_gamnit__programs__GamnitProgram__gl_program]))(var2); /* gl_program on <var2:GamnitProgram>*/
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 523);
fatal_exit(1);
}
var4 = glob_sys;
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_glesv2__Sys__gl_ACTIVE_UNIFORM_MAX_LENGTH]))(var4); /* gl_ACTIVE_UNIFORM_MAX_LENGTH on <var4:Sys>*/
}
{
var6 = ((long(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_glesv2__Sys__glGetProgramiv]))(var1, var3, var5); /* glGetProgramiv on <var1:Sys>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#UniformMap#[] for (self: UniformMap, nullable Object): Uniform */
val* gamnit___gamnit__UniformMap___core__abstract_collection__MapRead___91d_93d(val* self, val* p0) {
val* var /* : Uniform */;
val* var_key /* var key: nullable Object */;
val* var1 /* : nullable Object */;
val* var_item /* var item: Uniform */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : GamnitProgram */;
val* var4 /* : nullable GLProgram */;
val* var5 /* : String */;
long var6 /* : Int */;
var_key = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit___gamnit__UniformMap___core__abstract_collection__MapRead___91d_93d]))(self, p0); /* [] on <self:UniformMap>*/
}
var_item = var1;
/* <var_key:nullable Object> isa Text */
cltype = type_core__Text.color;
idtype = type_core__Text.id;
if(var_key == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_key&3)?type_info[((long)var_key&3)]:var_key->type)->type_table[cltype] == idtype;
}
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__programs__ShaderVariableMap__program]))(self); /* program on <self:UniformMap>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_gamnit__programs__GamnitProgram__gl_program]))(var3); /* gl_program on <var3:GamnitProgram>*/
}
{
var5 = ((val*(*)(val* self))(var_key->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_key); /* to_s on <var_key:nullable Object(Text)>*/
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__programs, 528);
fatal_exit(1);
} else {
var6 = ((long(*)(val* self, val* p0))(var4->class->vft[COLOR_glesv2__GLProgram__uniform_location]))(var4, var5); /* uniform_location on <var4:nullable GLProgram>*/
}
{
((void(*)(val* self, long p0))(var_item->class->vft[COLOR_gamnit__programs__ShaderVariable__location_61d]))(var_item, var6); /* location= on <var_item:Uniform>*/
}
} else {
}
var = var_item;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#NativeGLfloatArray#matrix for (self: NativeGLfloatArray): NativeGLfloatArray */
val* gamnit__programs___glesv2__NativeGLfloatArray___matrix(val* self) {
val* var /* : NativeGLfloatArray */;
val* var1 /* : NativeGLfloatArray */;
val* var2 /* : NativeGLfloatArray */;
var1 = gamnit__programs___new_NativeGLfloatArray_matrix___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeGLfloatArray */
var2->type = &type_glesv2__NativeGLfloatArray;
var2->class = &class_glesv2__NativeGLfloatArray;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#NativeGLfloatArray#set_identity for (self: NativeGLfloatArray) */
void gamnit__programs___glesv2__NativeGLfloatArray___set_identity(val* self) {
val* var /* : Range[Int] */;
val* var_ /* var : Range[Int] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[Int] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
long var5 /* : Int */;
long var_i /* var i: Int */;
val* var6 /* : Range[Int] */;
val* var_7 /* var : Range[Int] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : Iterator[Int] */;
short int var10 /* : Bool */;
val* var12 /* : nullable Object */;
long var13 /* : Int */;
long var_j /* var j: Int */;
double var14 /* : Float */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
var = core__range___Int___times(4l);
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Range[Int]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[Int]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[Int]>*/
}
var5 = (long)(var4)>>2;
var_i = var5;
var6 = core__range___Int___times(4l);
var_7 = var6;
{
var8 = ((val*(*)(val* self))(var_7->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_7); /* iterator on <var_7:Range[Int]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[Int]>*/
}
if (var10){
} else {
goto BREAK_label11;
}
{
var12 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[Int]>*/
}
var13 = (long)(var12)>>2;
var_j = var13;
{
{ /* Inline kernel#Int#== (var_i,var_j) on <var_i:Int> */
var17 = var_i == var_j;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var14 = 1.0;
} else {
var14 = 0.0;
}
{
((void(*)(val* self, long p0, long p1, double p2))(self->class->vft[COLOR_gamnit__programs__NativeGLfloatArray__matrix_set]))(self, var_i, var_j, var14); /* matrix_set on <self:NativeGLfloatArray>*/
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[Int]>*/
}
}
BREAK_label11: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[Int]>*/
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[Int]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[Int]>*/
}
RET_LABEL:;
}
/* method programs#NativeGLfloatArray#matrix_get for (self: NativeGLfloatArray, Int, Int): Float */
double gamnit__programs___glesv2__NativeGLfloatArray___matrix_get(val* self, long p0, long p1) {
double var /* : Float */;
double var1 /* : Float */;
void* var2 /* : NativeGLfloatArray for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeGLfloatArray */
var1 = gamnit__programs___NativeGLfloatArray_matrix_get___impl(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method programs#NativeGLfloatArray#matrix_set for (self: NativeGLfloatArray, Int, Int, Float) */
void gamnit__programs___glesv2__NativeGLfloatArray___matrix_set(val* self, long p0, long p1, double p2) {
void* var /* : NativeGLfloatArray for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeGLfloatArray */
gamnit__programs___NativeGLfloatArray_matrix_set___impl(var, p0, p1, p2);
RET_LABEL:;
}
/* method programs#Matrix#fill_native for (self: Matrix, NativeGLfloatArray) */
void gamnit__programs___matrix__Matrix___fill_native(val* self, val* p0) {
val* var_native /* var native: NativeGLfloatArray */;
long var /* : Int */;
val* var1 /* : Range[Int] */;
val* var_ /* var : Range[Int] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[Int] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
long var6 /* : Int */;
long var_i /* var i: Int */;
long var7 /* : Int */;
val* var8 /* : Range[Int] */;
val* var_9 /* var : Range[Int] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[Int] */;
short int var12 /* : Bool */;
val* var14 /* : nullable Object */;
long var15 /* : Int */;
long var_j /* var j: Int */;
double var16 /* : Float */;
var_native = p0;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__width]))(self); /* width on <self:Matrix>*/
}
var1 = core__range___Int___times(var);
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Range[Int]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[Int]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[Int]>*/
}
var6 = (long)(var5)>>2;
var_i = var6;
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_matrix__Matrix__height]))(self); /* height on <self:Matrix>*/
}
var8 = core__range___Int___times(var7);
var_9 = var8;
{
var10 = ((val*(*)(val* self))(var_9->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_9); /* iterator on <var_9:Range[Int]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:Iterator[Int]>*/
}
if (var12){
} else {
goto BREAK_label13;
}
{
var14 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:Iterator[Int]>*/
}
var15 = (long)(var14)>>2;
var_j = var15;
{
var16 = ((double(*)(val* self, long p0, long p1))(self->class->vft[COLOR_matrix__Matrix___91d_93d]))(self, var_i, var_j); /* [] on <self:Matrix>*/
}
{
((void(*)(val* self, long p0, long p1, double p2))(var_native->class->vft[COLOR_gamnit__programs__NativeGLfloatArray__matrix_set]))(var_native, var_i, var_j, var16); /* matrix_set on <var_native:NativeGLfloatArray>*/
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:Iterator[Int]>*/
}
}
BREAK_label13: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:Iterator[Int]>*/
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[Int]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[Int]>*/
}
RET_LABEL:;
}
/* method programs#Sys#gammit_gl_error for (self: Sys): nullable Error */
val* gamnit__programs___core__Sys___gammit_gl_error(val* self) {
val* var /* : nullable Error */;
val* var1 /* : GLError */;
val* var_gl_error /* var gl_error: GLError */;
val* var2 /* : GLError */;
short int var3 /* : Bool */;
val* var4 /* : Error */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var11 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_glesv2__Sys__glGetError]))(self); /* glGetError on <self:Sys>*/
}
var_gl_error = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_glesv2__Sys__gl_NO_ERROR]))(self); /* gl_NO_ERROR on <self:Sys>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var_gl_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_gl_error, var2); /* == on <var_gl_error:GLError>*/
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var4 = NEW_core__Error(&type_core__Error);
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "GL error: ";
var9 = core__flat___NativeString___to_s_full(var8, 10l, 10l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(var_gl_error->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_gl_error); /* to_s on <var_gl_error:GLError>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__error__Error__message_61d]))(var4, var11); /* message= on <var4:Error>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:Error>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
