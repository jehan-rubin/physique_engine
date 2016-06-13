#include "glesv2.sep.0.h"
/* method glesv2#GLProgram#new for (self: GLProgram): GLProgram */
val* glesv2___glesv2__GLProgram___new(val* self) {
val* var /* : GLProgram */;
val* var1 /* : GLProgram */;
val* var2 /* : GLProgram */;
var1 = glesv2___new_GLProgram___impl();
var2 = BOX_core__Pointer(var1); /* boxing GLProgram */
var2->type = &type_glesv2__GLProgram;
var2->class = &class_glesv2__GLProgram;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#bind_attrib_location for (self: GLProgram, Int, String) */
void glesv2___glesv2__GLProgram___bind_attrib_location(val* self, long p0, val* p1) {
void* var /* : GLProgram for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing GLProgram */
struct nitni_instance* var_for_c_2;
var_for_c_2 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_2->value = p1;
glesv2___GLProgram_bind_attrib_location___impl(var, p0, var_for_c_2);
RET_LABEL:;
}
/* nitni callback for core::Text::to_cstring */
char* glesv2___String_to_cstring( struct nitni_instance * self ) {
char* var /* : NativeString */;
{
var = ((char*(*)(val* self))(self->value->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self->value); /* to_cstring on <self->value:String>*/
}
return var;
}
/* method glesv2#GLProgram#attrib_location for (self: GLProgram, String): Int */
long glesv2___glesv2__GLProgram___attrib_location(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : GLProgram for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing GLProgram */
struct nitni_instance* var_for_c_1;
var_for_c_1 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
var1 = glesv2___GLProgram_attrib_location___impl(var2, var_for_c_1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#uniform_location for (self: GLProgram, String): Int */
long glesv2___glesv2__GLProgram___uniform_location(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : GLProgram for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing GLProgram */
struct nitni_instance* var_for_c_1;
var_for_c_1 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
var1 = glesv2___GLProgram_uniform_location___impl(var2, var_for_c_1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#is_linked for (self: GLProgram): Bool */
short int glesv2___glesv2__GLProgram___is_linked(val* self) {
short int var /* : Bool */;
val* var1 /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : GLGetParameterName */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var1 = glob_sys;
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_glesv2__Sys__gl_LINK_STATUS]))(var2); /* gl_LINK_STATUS on <var2:Sys>*/
}
{
var4 = ((long(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_glesv2__Sys__glGetProgramiv]))(var1, self, var3); /* glGetProgramiv on <var1:Sys>*/
}
{
{ /* Inline kernel#Int#!= (var4,0l) on <var4:Int> */
var7 = var4 == 0l;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#is_deleted for (self: GLProgram): Bool */
short int glesv2___glesv2__GLProgram___is_deleted(val* self) {
short int var /* : Bool */;
val* var1 /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : GLGetParameterName */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var1 = glob_sys;
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_glesv2__Sys__gl_DELETE_STATUS]))(var2); /* gl_DELETE_STATUS on <var2:Sys>*/
}
{
var4 = ((long(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_glesv2__Sys__glGetProgramiv]))(var1, self, var3); /* glGetProgramiv on <var1:Sys>*/
}
{
{ /* Inline kernel#Int#!= (var4,0l) on <var4:Int> */
var7 = var4 == 0l;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#is_validated for (self: GLProgram): Bool */
short int glesv2___glesv2__GLProgram___is_validated(val* self) {
short int var /* : Bool */;
val* var1 /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : GLGetParameterName */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var1 = glob_sys;
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_glesv2__Sys__gl_VALIDATE_STATUS]))(var2); /* gl_VALIDATE_STATUS on <var2:Sys>*/
}
{
var4 = ((long(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_glesv2__Sys__glGetProgramiv]))(var1, self, var3); /* glGetProgramiv on <var1:Sys>*/
}
{
{ /* Inline kernel#Int#!= (var4,0l) on <var4:Int> */
var7 = var4 == 0l;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#n_active_uniforms for (self: GLProgram): Int */
long glesv2___glesv2__GLProgram___n_active_uniforms(val* self) {
long var /* : Int */;
val* var1 /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : GLGetParameterName */;
long var4 /* : Int */;
var1 = glob_sys;
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_glesv2__Sys__gl_ACTIVE_UNIFORMS]))(var2); /* gl_ACTIVE_UNIFORMS on <var2:Sys>*/
}
{
var4 = ((long(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_glesv2__Sys__glGetProgramiv]))(var1, self, var3); /* glGetProgramiv on <var1:Sys>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#active_uniform_max_length for (self: GLProgram): Int */
long glesv2___glesv2__GLProgram___active_uniform_max_length(val* self) {
long var /* : Int */;
val* var1 /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : GLGetParameterName */;
long var4 /* : Int */;
var1 = glob_sys;
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_glesv2__Sys__gl_ACTIVE_UNIFORM_MAX_LENGTH]))(var2); /* gl_ACTIVE_UNIFORM_MAX_LENGTH on <var2:Sys>*/
}
{
var4 = ((long(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_glesv2__Sys__glGetProgramiv]))(var1, self, var3); /* glGetProgramiv on <var1:Sys>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#n_active_attributes for (self: GLProgram): Int */
long glesv2___glesv2__GLProgram___n_active_attributes(val* self) {
long var /* : Int */;
val* var1 /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : GLGetParameterName */;
long var4 /* : Int */;
var1 = glob_sys;
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_glesv2__Sys__gl_ACTIVE_ATTRIBUTES]))(var2); /* gl_ACTIVE_ATTRIBUTES on <var2:Sys>*/
}
{
var4 = ((long(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_glesv2__Sys__glGetProgramiv]))(var1, self, var3); /* glGetProgramiv on <var1:Sys>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#active_attribute_max_length for (self: GLProgram): Int */
long glesv2___glesv2__GLProgram___active_attribute_max_length(val* self) {
long var /* : Int */;
val* var1 /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : GLGetParameterName */;
long var4 /* : Int */;
var1 = glob_sys;
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_glesv2__Sys__gl_ACTIVE_ATTRIBUTE_MAX_LENGTH]))(var2); /* gl_ACTIVE_ATTRIBUTE_MAX_LENGTH on <var2:Sys>*/
}
{
var4 = ((long(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_glesv2__Sys__glGetProgramiv]))(var1, self, var3); /* glGetProgramiv on <var1:Sys>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#n_attached_shaders for (self: GLProgram): Int */
long glesv2___glesv2__GLProgram___n_attached_shaders(val* self) {
long var /* : Int */;
val* var1 /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : GLGetParameterName */;
long var4 /* : Int */;
var1 = glob_sys;
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_glesv2__Sys__gl_ATTACHED_SHADERS]))(var2); /* gl_ATTACHED_SHADERS on <var2:Sys>*/
}
{
var4 = ((long(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_glesv2__Sys__glGetProgramiv]))(var1, self, var3); /* glGetProgramiv on <var1:Sys>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#active_attrib_name for (self: GLProgram, Int): String */
val* glesv2___glesv2__GLProgram___active_attrib_name(val* self, long p0) {
val* var /* : String */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var_max_size /* var max_size: Int */;
char* var2 /* : NativeString */;
char* var3 /* : NativeString */;
char* var5 /* : NativeString */;
char* var_cname /* var cname: NativeString */;
val* var6 /* : String */;
var_index = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_glesv2__GLProgram__active_attribute_max_length]))(self); /* active_attribute_max_length on <self:GLProgram>*/
}
var_max_size = var1;
var2 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var2,var_max_size) on <var2:NativeString> */
var5 = (char*)nit_alloc(var_max_size);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_cname = var3;
{
((void(*)(val* self, long p0, long p1, char* p2))(self->class->vft[COLOR_glesv2__GLProgram__active_attrib_name_native]))(self, var_index, var_max_size, var_cname); /* active_attrib_name_native on <self:GLProgram>*/
}
var6 = core__flat___NativeString___core__abstract_text__Object__to_s(var_cname);
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#active_attrib_name_native for (self: GLProgram, Int, Int, NativeString) */
void glesv2___glesv2__GLProgram___active_attrib_name_native(val* self, long p0, long p1, char* p2) {
void* var /* : GLProgram for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing GLProgram */
glesv2___GLProgram_active_attrib_name_native___impl(var, p0, p1, p2);
RET_LABEL:;
}
/* method glesv2#GLProgram#active_attrib_size for (self: GLProgram, Int): Int */
long glesv2___glesv2__GLProgram___active_attrib_size(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : GLProgram for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing GLProgram */
var1 = glesv2___GLProgram_active_attrib_size___impl(var2, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#active_attrib_type for (self: GLProgram, Int): GLDataType */
val* glesv2___glesv2__GLProgram___active_attrib_type(val* self, long p0) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
void* var2 /* : GLProgram for extern */;
val* var3 /* : GLDataType */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing GLProgram */
var1 = glesv2___GLProgram_active_attrib_type___impl(var2, p0);
var3 = BOX_core__Pointer(var1); /* boxing GLDataType */
var3->type = &type_glesv2__GLDataType;
var3->class = &class_glesv2__GLDataType;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#active_uniform_name for (self: GLProgram, Int): String */
val* glesv2___glesv2__GLProgram___active_uniform_name(val* self, long p0) {
val* var /* : String */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var_max_size /* var max_size: Int */;
char* var2 /* : NativeString */;
char* var3 /* : NativeString */;
char* var5 /* : NativeString */;
char* var_cname /* var cname: NativeString */;
val* var6 /* : String */;
var_index = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_glesv2__GLProgram__active_uniform_max_length]))(self); /* active_uniform_max_length on <self:GLProgram>*/
}
var_max_size = var1;
var2 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var2,var_max_size) on <var2:NativeString> */
var5 = (char*)nit_alloc(var_max_size);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_cname = var3;
{
((void(*)(val* self, long p0, long p1, char* p2))(self->class->vft[COLOR_glesv2__GLProgram__active_uniform_name_native]))(self, var_index, var_max_size, var_cname); /* active_uniform_name_native on <self:GLProgram>*/
}
var6 = core__flat___NativeString___core__abstract_text__Object__to_s(var_cname);
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#active_uniform_name_native for (self: GLProgram, Int, Int, NativeString) */
void glesv2___glesv2__GLProgram___active_uniform_name_native(val* self, long p0, long p1, char* p2) {
void* var /* : GLProgram for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing GLProgram */
glesv2___GLProgram_active_uniform_name_native___impl(var, p0, p1, p2);
RET_LABEL:;
}
/* method glesv2#GLProgram#active_uniform_size for (self: GLProgram, Int): Int */
long glesv2___glesv2__GLProgram___active_uniform_size(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : GLProgram for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing GLProgram */
var1 = glesv2___GLProgram_active_uniform_size___impl(var2, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLProgram#active_uniform_type for (self: GLProgram, Int): GLDataType */
val* glesv2___glesv2__GLProgram___active_uniform_type(val* self, long p0) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
void* var2 /* : GLProgram for extern */;
val* var3 /* : GLDataType */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing GLProgram */
var1 = glesv2___GLProgram_active_uniform_type___impl(var2, p0);
var3 = BOX_core__Pointer(var1); /* boxing GLDataType */
var3->type = &type_glesv2__GLDataType;
var3->class = &class_glesv2__GLDataType;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLShader#source for (self: GLShader): nullable String */
val* glesv2___glesv2__GLShader___source(val* self) {
val* var /* : nullable String */;
val* var1 /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : GLGetParameterName */;
long var4 /* : Int */;
long var_size /* var size: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
var1 = glob_sys;
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_glesv2__Sys__gl_SHADER_SOURCE_LENGTH]))(var2); /* gl_SHADER_SOURCE_LENGTH on <var2:Sys>*/
}
{
var4 = ((long(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_glesv2__Sys__glGetShaderiv]))(var1, self, var3); /* glGetShaderiv on <var1:Sys>*/
}
var_size = var4;
{
{ /* Inline kernel#Int#== (var_size,0l) on <var_size:Int> */
var7 = var_size == 0l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var8 = ((char*(*)(val* self, long p0))(self->class->vft[COLOR_glesv2__GLShader__source_native]))(self, var_size); /* source_native on <self:GLShader>*/
}
var9 = core__flat___NativeString___core__abstract_text__Object__to_s(var8);
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLShader#source_native for (self: GLShader, Int): NativeString */
char* glesv2___glesv2__GLShader___source_native(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
void* var2 /* : GLShader for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing GLShader */
var1 = glesv2___GLShader_source_native___impl(var2, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLShader#is_compiled for (self: GLShader): Bool */
short int glesv2___glesv2__GLShader___is_compiled(val* self) {
short int var /* : Bool */;
val* var1 /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : GLGetParameterName */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var1 = glob_sys;
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_glesv2__Sys__gl_COMPILE_STATUS]))(var2); /* gl_COMPILE_STATUS on <var2:Sys>*/
}
{
var4 = ((long(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_glesv2__Sys__glGetShaderiv]))(var1, self, var3); /* glGetShaderiv on <var1:Sys>*/
}
{
{ /* Inline kernel#Int#!= (var4,0l) on <var4:Int> */
var7 = var4 == 0l;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLShader#is_deleted for (self: GLShader): Bool */
short int glesv2___glesv2__GLShader___is_deleted(val* self) {
short int var /* : Bool */;
val* var1 /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : GLGetParameterName */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var1 = glob_sys;
var2 = glob_sys;
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_glesv2__Sys__gl_DELETE_STATUS]))(var2); /* gl_DELETE_STATUS on <var2:Sys>*/
}
{
var4 = ((long(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_glesv2__Sys__glGetShaderiv]))(var1, self, var3); /* glGetShaderiv on <var1:Sys>*/
}
{
{ /* Inline kernel#Int#!= (var4,0l) on <var4:Int> */
var7 = var4 == 0l;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLFragmentShader#new for (self: GLFragmentShader): GLFragmentShader */
val* glesv2___glesv2__GLFragmentShader___new(val* self) {
val* var /* : GLFragmentShader */;
val* var1 /* : GLFragmentShader */;
val* var2 /* : GLFragmentShader */;
var1 = glesv2___new_GLFragmentShader___impl();
var2 = BOX_core__Pointer(var1); /* boxing GLFragmentShader */
var2->type = &type_glesv2__GLFragmentShader;
var2->class = &class_glesv2__GLFragmentShader;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLVertexShader#new for (self: GLVertexShader): GLVertexShader */
val* glesv2___glesv2__GLVertexShader___new(val* self) {
val* var /* : GLVertexShader */;
val* var1 /* : GLVertexShader */;
val* var2 /* : GLVertexShader */;
var1 = glesv2___new_GLVertexShader___impl();
var2 = BOX_core__Pointer(var1); /* boxing GLVertexShader */
var2->type = &type_glesv2__GLVertexShader;
var2->class = &class_glesv2__GLVertexShader;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#VertexArray#index for (self: VertexArray): Int */
long glesv2___glesv2__VertexArray___index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_glesv2__VertexArray___index].l; /* _index on <self:VertexArray> */
var = var1;
RET_LABEL:;
return var;
}
/* method glesv2#VertexArray#index= for (self: VertexArray, Int) */
void glesv2___glesv2__VertexArray___index_61d(val* self, long p0) {
self->attrs[COLOR_glesv2__VertexArray___index].l = p0; /* _index on <self:VertexArray> */
RET_LABEL:;
}
/* method glesv2#VertexArray#count for (self: VertexArray): Int */
long glesv2___glesv2__VertexArray___count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_glesv2__VertexArray___count].l; /* _count on <self:VertexArray> */
var = var1;
RET_LABEL:;
return var;
}
/* method glesv2#VertexArray#count= for (self: VertexArray, Int) */
void glesv2___glesv2__VertexArray___count_61d(val* self, long p0) {
self->attrs[COLOR_glesv2__VertexArray___count].l = p0; /* _count on <self:VertexArray> */
RET_LABEL:;
}
/* method glesv2#VertexArray#glfloat_array for (self: VertexArray): NativeGLfloatArray */
val* glesv2___glesv2__VertexArray___glfloat_array(val* self) {
val* var /* : NativeGLfloatArray */;
val* var1 /* : NativeGLfloatArray */;
var1 = self->attrs[COLOR_glesv2__VertexArray___glfloat_array].val; /* _glfloat_array on <self:VertexArray> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _glfloat_array");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 345);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method glesv2#VertexArray#glfloat_array= for (self: VertexArray, NativeGLfloatArray) */
void glesv2___glesv2__VertexArray___glfloat_array_61d(val* self, val* p0) {
self->attrs[COLOR_glesv2__VertexArray___glfloat_array].val = p0; /* _glfloat_array on <self:VertexArray> */
RET_LABEL:;
}
/* method glesv2#VertexArray#init for (self: VertexArray, Int, Int, Array[Float]) */
void glesv2___glesv2__VertexArray___init(val* self, long p0, long p1, val* p2) {
long var_index /* var index: Int */;
long var_count /* var count: Int */;
val* var_array /* var array: Array[Float] */;
val* var /* : NativeGLfloatArray */;
long var1 /* : Int */;
val* var2 /* : NativeGLfloatArray */;
long var_k /* var k: Int */;
long var3 /* : Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : NativeGLfloatArray */;
val* var9 /* : nullable Object */;
long var10 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:VertexArray>*/
}
var_index = p0;
var_count = p1;
var_array = p2;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_glesv2__VertexArray__index_61d]))(self, var_index); /* index= on <self:VertexArray>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_glesv2__VertexArray__count_61d]))(self, var_count); /* count= on <self:VertexArray>*/
}
var = NEW_glesv2__NativeGLfloatArray(&type_glesv2__NativeGLfloatArray);
{
var1 = ((long(*)(val* self))(var_array->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:Array[Float]>*/
}
{
var2 = ((val*(*)(val* self, long p0))(var->class->vft[COLOR_glesv2__NativeGLfloatArray__new]))(var, var1); /* new on <var:NativeGLfloatArray>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_glesv2__VertexArray__glfloat_array_61d]))(self, var2); /* glfloat_array= on <self:VertexArray>*/
}
var_k = 0l;
{
var3 = ((long(*)(val* self))(var_array->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:Array[Float]>*/
}
var_ = var3;
for(;;) {
{
{ /* Inline kernel#Int#< (var_k,var_) on <var_k:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var6 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var7 = var_k < var_;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_glesv2__VertexArray__glfloat_array]))(self); /* glfloat_array on <self:VertexArray>*/
}
{
var9 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_array, var_k); /* [] on <var_array:Array[Float]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var8->class->vft[COLOR_c__NativeCArray___91d_93d_61d]))(var8, var_k, var9); /* []= on <var8:NativeGLfloatArray>*/
}
var10 = core___core__Int___Discrete__successor(var_k, 1l);
var_k = var10;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method glesv2#VertexArray#attrib_pointer for (self: VertexArray) */
void glesv2___glesv2__VertexArray___attrib_pointer(val* self) {
long var /* : Int */;
long var1 /* : Int */;
val* var2 /* : NativeGLfloatArray */;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_glesv2__VertexArray__index]))(self); /* index on <self:VertexArray>*/
}
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_glesv2__VertexArray__count]))(self); /* count on <self:VertexArray>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_glesv2__VertexArray__glfloat_array]))(self); /* glfloat_array on <self:VertexArray>*/
}
{
((void(*)(val* self, long p0, long p1, val* p2))(self->class->vft[COLOR_glesv2__VertexArray__attrib_pointer_intern]))(self, var, var1, var2); /* attrib_pointer_intern on <self:VertexArray>*/
}
RET_LABEL:;
}
/* method glesv2#VertexArray#attrib_pointer_intern for (self: VertexArray, Int, Int, NativeGLfloatArray) */
void glesv2___glesv2__VertexArray___attrib_pointer_intern(val* self, long p0, long p1, val* p2) {
void* var /* : NativeGLfloatArray for extern */;
var = ((struct instance_core__Pointer*)p2)->value; /* unboxing NativeGLfloatArray */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___VertexArray_attrib_pointer_intern___impl(var_for_c_0, p0, p1, var);
RET_LABEL:;
}
/* method glesv2#VertexArray#enable for (self: VertexArray) */
void glesv2___glesv2__VertexArray___enable(val* self) {
val* var /* : Sys */;
long var1 /* : Int */;
var = glob_sys;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_glesv2__VertexArray__index]))(self); /* index on <self:VertexArray>*/
}
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_glesv2__Sys__glEnableVertexAttribArray]))(var, var1); /* glEnableVertexAttribArray on <var:Sys>*/
}
RET_LABEL:;
}
/* method glesv2#VertexArray#disable for (self: VertexArray) */
void glesv2___glesv2__VertexArray___disable(val* self) {
val* var /* : Sys */;
long var1 /* : Int */;
var = glob_sys;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_glesv2__VertexArray__index]))(self); /* index on <self:VertexArray>*/
}
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_glesv2__Sys__glDisableVertexAttribArray]))(var, var1); /* glDisableVertexAttribArray on <var:Sys>*/
}
RET_LABEL:;
}
/* method glesv2#GLfloatArray#init for (self: GLfloatArray, Int) */
void glesv2___glesv2__GLfloatArray___c__CArray__init(val* self, long p0) {
long var_length /* var length: Int */;
val* var /* : NativeGLfloatArray */;
val* var1 /* : NativeGLfloatArray */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_glesv2___glesv2__GLfloatArray___c__CArray__init]))(self, p0); /* init on <self:GLfloatArray>*/
}
var_length = p0;
var = NEW_glesv2__NativeGLfloatArray(&type_glesv2__NativeGLfloatArray);
{
var1 = ((val*(*)(val* self, long p0))(var->class->vft[COLOR_glesv2__NativeGLfloatArray__new]))(var, var_length); /* new on <var:NativeGLfloatArray>*/
}
/* <var1:NativeGLfloatArray> isa NATIVE */
type_struct = self->type->resolution_table->types[COLOR_c__CArray__NATIVE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "NATIVE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 431);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_c__CArray__native_array_61d]))(self, var1); /* native_array= on <self:GLfloatArray>*/
}
RET_LABEL:;
}
/* method glesv2#GLfloatArray#from for (self: GLfloatArray, Array[Float]): GLfloatArray */
val* glesv2___glesv2__GLfloatArray___from(val* self, val* p0) {
val* var /* : GLfloatArray */;
val* var_array /* var array: Array[Float] */;
val* var1 /* : GLfloatArray */;
long var2 /* : Int */;
val* var_arr /* var arr: GLfloatArray */;
var_array = p0;
var1 = NEW_glesv2__GLfloatArray(&type_glesv2__GLfloatArray);
{
var2 = ((long(*)(val* self))(var_array->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:Array[Float]>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_c__CArray__init]))(var1, var2); /* init on <var1:GLfloatArray>*/
}
var_arr = var1;
{
((void(*)(val* self, val* p0))(var_arr->class->vft[COLOR_glesv2__GLfloatArray__fill_from]))(var_arr, var_array); /* fill_from on <var_arr:GLfloatArray>*/
}
var = var_arr;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLfloatArray#fill_from for (self: GLfloatArray, Array[Float]) */
void glesv2___glesv2__GLfloatArray___fill_from(val* self, val* p0) {
val* var_array /* var array: Array[Float] */;
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var_k /* var k: Int */;
long var6 /* : Int */;
long var_ /* var : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
long var15 /* : Int */;
var_array = p0;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:GLfloatArray>*/
}
{
var1 = ((long(*)(val* self))(var_array->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:Array[Float]>*/
}
{
{ /* Inline kernel#Int#>= (var,var1) on <var:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var5 = var >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 445);
fatal_exit(1);
}
var_k = 0l;
{
var6 = ((long(*)(val* self))(var_array->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_array); /* length on <var_array:Array[Float]>*/
}
var_ = var6;
for(;;) {
{
{ /* Inline kernel#Int#< (var_k,var_) on <var_k:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var9 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var13 = var_k < var_;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self, long p0))(var_array->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_array, var_k); /* [] on <var_array:Array[Float]>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_c__CArray___91d_93d_61d]))(self, var_k, var14); /* []= on <self:GLfloatArray>*/
}
var15 = core___core__Int___Discrete__successor(var_k, 1l);
var_k = var15;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method glesv2#NativeGLfloatArray#new for (self: NativeGLfloatArray, Int): NativeGLfloatArray */
val* glesv2___glesv2__NativeGLfloatArray___new(val* self, long p0) {
val* var /* : NativeGLfloatArray */;
val* var1 /* : NativeGLfloatArray */;
val* var2 /* : NativeGLfloatArray */;
var1 = glesv2___new_NativeGLfloatArray___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeGLfloatArray */
var2->type = &type_glesv2__NativeGLfloatArray;
var2->class = &class_glesv2__NativeGLfloatArray;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#NativeGLfloatArray#[] for (self: NativeGLfloatArray, Int): Float */
double glesv2___glesv2__NativeGLfloatArray___c__NativeCArray___91d_93d(val* self, long p0) {
double var /* : Float */;
double var1 /* : Float */;
void* var2 /* : NativeGLfloatArray for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeGLfloatArray */
var1 = glesv2___NativeGLfloatArray__index___impl(var2, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#NativeGLfloatArray#[] for (self: NativeCArray, Int): nullable Object */
val* VIRTUAL_glesv2___glesv2__NativeGLfloatArray___c__NativeCArray___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
double var1 /* : Float */;
val* var2 /* : nullable Object */;
var1 = glesv2___glesv2__NativeGLfloatArray___c__NativeCArray___91d_93d(self, p0);
var2 = BOX_core__Float(var1); /* autobox from Float to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method glesv2#NativeGLfloatArray#[]= for (self: NativeGLfloatArray, Int, Float) */
void glesv2___glesv2__NativeGLfloatArray___c__NativeCArray___91d_93d_61d(val* self, long p0, double p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
void* var1 /* : NativeGLfloatArray for extern */;
/* Covariant cast for argument 1 (val) <p1:Float> isa E */
/* <p1:Float> isa E */
var = 1; /* easy <p1:Float> isa E*/
if (unlikely(!var)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 460);
fatal_exit(1);
}
var1 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeGLfloatArray */
glesv2___NativeGLfloatArray__index_assign___impl(var1, p0, p1);
RET_LABEL:;
}
/* method glesv2#NativeGLfloatArray#[]= for (self: NativeCArray, Int, nullable Object) */
void VIRTUAL_glesv2___glesv2__NativeGLfloatArray___c__NativeCArray___91d_93d_61d(val* self, long p0, val* p1) {
double var /* : Float */;
var = ((struct instance_core__Float*)p1)->value; /* autounbox from nullable Object to Float */;
glesv2___glesv2__NativeGLfloatArray___c__NativeCArray___91d_93d_61d(self, p0, var); /* Direct call glesv2#NativeGLfloatArray#[]= on <self:NativeCArray(NativeGLfloatArray)>*/
RET_LABEL:;
}
/* method glesv2#NativeGLfloatArray#+ for (self: NativeGLfloatArray, Int): NativeGLfloatArray */
val* glesv2___glesv2__NativeGLfloatArray___c__NativeCArray___43d(val* self, long p0) {
val* var /* : NativeGLfloatArray */;
val* var1 /* : NativeGLfloatArray */;
void* var2 /* : NativeGLfloatArray for extern */;
val* var3 /* : NativeGLfloatArray */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeGLfloatArray */
var1 = glesv2___NativeGLfloatArray__plus___impl(var2, p0);
var3 = BOX_core__Pointer(var1); /* boxing NativeGLfloatArray */
var3->type = &type_glesv2__NativeGLfloatArray;
var3->class = &class_glesv2__NativeGLfloatArray;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLEnum#hash for (self: GLEnum): Int */
long glesv2___glesv2__GLEnum___core__kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : GLEnum for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing GLEnum */
var1 = glesv2___GLEnum_hash___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLEnum#== for (self: GLEnum, nullable Object): Bool */
short int glesv2___glesv2__GLEnum___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var_8 /* var : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
var_o = p0;
if (var_o == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_o, ((val*)NULL)); /* != on <var_o:nullable Object>*/
var3 = var4;
}
var_ = var3;
if (var3){
{
{ /* Inline kernel#Object#is_same_type (self,var_o) on <self:GLEnum> */
var7 = (self == var_o) || (self != NULL && var_o != NULL && self->class == (((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)); /* is_same_type_test */
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var2 = var5;
} else {
var2 = var_;
}
var_8 = var2;
if (var2){
{
var9 = ((long(*)(val* self))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_core__kernel__Object__hash]))(var_o); /* hash on <var_o:nullable Object(Object)>*/
}
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__hash]))(self); /* hash on <self:GLEnum>*/
}
{
{ /* Inline kernel#Int#== (var9,var10) on <var9:Int> */
var13 = var9 == var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var1 = var11;
} else {
var1 = var_8;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLError#to_s for (self: GLError): String */
val* glesv2___glesv2__GLError___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Sys */;
val* var2 /* : GLError */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : Sys */;
val* var8 /* : GLError */;
short int var9 /* : Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
val* var14 /* : Sys */;
val* var15 /* : GLError */;
short int var16 /* : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : Sys */;
val* var22 /* : GLError */;
short int var23 /* : Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : Sys */;
val* var29 /* : GLError */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
val* var35 /* : Sys */;
val* var36 /* : GLError */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_glesv2__Sys__gl_NO_ERROR]))(var1); /* gl_NO_ERROR on <var1:Sys>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var2); /* == on <self:GLError>*/
}
if (var3){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "No error";
var6 = core__flat___NativeString___to_s_full(var5, 8l, 8l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
var7 = glob_sys;
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_glesv2__Sys__gl_INVALID_ENUM]))(var7); /* gl_INVALID_ENUM on <var7:Sys>*/
}
{
var9 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var8); /* == on <self:GLError>*/
}
if (var9){
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Invalid enum";
var13 = core__flat___NativeString___to_s_full(var12, 12l, 12l);
var11 = var13;
varonce10 = var11;
}
var = var11;
goto RET_LABEL;
} else {
}
var14 = glob_sys;
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_glesv2__Sys__gl_INVALID_VALUE]))(var14); /* gl_INVALID_VALUE on <var14:Sys>*/
}
{
var16 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var15); /* == on <self:GLError>*/
}
if (var16){
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "Invalid value";
var20 = core__flat___NativeString___to_s_full(var19, 13l, 13l);
var18 = var20;
varonce17 = var18;
}
var = var18;
goto RET_LABEL;
} else {
}
var21 = glob_sys;
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_glesv2__Sys__gl_INVALID_OPERATION]))(var21); /* gl_INVALID_OPERATION on <var21:Sys>*/
}
{
var23 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var22); /* == on <self:GLError>*/
}
if (var23){
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Invalid operation";
var27 = core__flat___NativeString___to_s_full(var26, 17l, 17l);
var25 = var27;
varonce24 = var25;
}
var = var25;
goto RET_LABEL;
} else {
}
var28 = glob_sys;
{
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_glesv2__Sys__gl_INVALID_FRAMEBUFFER_OPERATION]))(var28); /* gl_INVALID_FRAMEBUFFER_OPERATION on <var28:Sys>*/
}
{
var30 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var29); /* == on <self:GLError>*/
}
if (var30){
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "invalid framebuffer operation";
var34 = core__flat___NativeString___to_s_full(var33, 29l, 29l);
var32 = var34;
varonce31 = var32;
}
var = var32;
goto RET_LABEL;
} else {
}
var35 = glob_sys;
{
var36 = ((val*(*)(val* self))(var35->class->vft[COLOR_glesv2__Sys__gl_OUT_OF_MEMORY]))(var35); /* gl_OUT_OF_MEMORY on <var35:Sys>*/
}
{
var37 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var36); /* == on <self:GLError>*/
}
if (var37){
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Out of memory";
var41 = core__flat___NativeString___to_s_full(var40, 13l, 13l);
var39 = var41;
varonce38 = var39;
}
var = var39;
goto RET_LABEL;
} else {
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Unknown error";
var45 = core__flat___NativeString___to_s_full(var44, 13l, 13l);
var43 = var45;
varonce42 = var43;
}
var = var43;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLCap#val for (self: GLCap): Int */
long glesv2___glesv2__GLCap___val(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_glesv2__GLCap___val].l; /* _val on <self:GLCap> */
var = var1;
RET_LABEL:;
return var;
}
/* method glesv2#GLCap#val= for (self: GLCap, Int) */
void glesv2___glesv2__GLCap___val_61d(val* self, long p0) {
self->attrs[COLOR_glesv2__GLCap___val].l = p0; /* _val on <self:GLCap> */
RET_LABEL:;
}
/* method glesv2#GLCap#enable for (self: GLCap) */
void glesv2___glesv2__GLCap___enable(val* self) {
long var /* : Int */;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_glesv2__GLCap__val]))(self); /* val on <self:GLCap>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_glesv2__GLCap__enable_native]))(self, var); /* enable_native on <self:GLCap>*/
}
RET_LABEL:;
}
/* method glesv2#GLCap#enable_native for (self: GLCap, Int) */
void glesv2___glesv2__GLCap___enable_native(val* self, long p0) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___GLCap_enable_native___impl(var_for_c_0, p0);
RET_LABEL:;
}
/* method glesv2#GLCap#disable for (self: GLCap) */
void glesv2___glesv2__GLCap___disable(val* self) {
long var /* : Int */;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_glesv2__GLCap__val]))(self); /* val on <self:GLCap>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_glesv2__GLCap__disable_native]))(self, var); /* disable_native on <self:GLCap>*/
}
RET_LABEL:;
}
/* method glesv2#GLCap#disable_native for (self: GLCap, Int) */
void glesv2___glesv2__GLCap___disable_native(val* self, long p0) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___GLCap_disable_native___impl(var_for_c_0, p0);
RET_LABEL:;
}
/* method glesv2#GLCap#hash for (self: GLCap): Int */
long glesv2___glesv2__GLCap___core__kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_glesv2__GLCap__val]))(self); /* val on <self:GLCap>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLCap#== for (self: GLCap, nullable Object): Bool */
short int glesv2___glesv2__GLCap___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var_8 /* var : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
var_o = p0;
if (var_o == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_o, ((val*)NULL)); /* != on <var_o:nullable Object>*/
var3 = var4;
}
var_ = var3;
if (var3){
{
{ /* Inline kernel#Object#is_same_type (self,var_o) on <self:GLCap> */
var7 = (self == var_o) || (self != NULL && var_o != NULL && self->class == (((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)); /* is_same_type_test */
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var2 = var5;
} else {
var2 = var_;
}
var_8 = var2;
if (var2){
{
var9 = ((long(*)(val* self))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_core__kernel__Object__hash]))(var_o); /* hash on <var_o:nullable Object(Object)>*/
}
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__hash]))(self); /* hash on <self:GLCap>*/
}
{
{ /* Inline kernel#Int#== (var9,var10) on <var9:Int> */
var13 = var9 == var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var1 = var11;
} else {
var1 = var_8;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLCap#init for (self: GLCap) */
void glesv2___glesv2__GLCap___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_glesv2___glesv2__GLCap___core__kernel__Object__init]))(self); /* init on <self:GLCap>*/
}
RET_LABEL:;
}
/* method glesv2#Sys#gles for (self: Sys): GLES */
val* glesv2___core__Sys___gles(val* self) {
val* var /* : GLES */;
short int var1 /* : Bool */;
val* var2 /* : GLES */;
val* var3 /* : GLES */;
var1 = self->attrs[COLOR_glesv2__Sys___gles].val != NULL; /* _gles on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_glesv2__Sys___gles].val; /* _gles on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _gles");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 761);
fatal_exit(1);
}
} else {
var3 = NEW_glesv2__GLES(&type_glesv2__GLES);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:GLES>*/
}
self->attrs[COLOR_glesv2__Sys___gles].val = var3; /* _gles on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gles= for (self: Sys, GLES) */
void glesv2___core__Sys___gles_61d(val* self, val* p0) {
self->attrs[COLOR_glesv2__Sys___gles].val = p0; /* _gles on <self:Sys> */
RET_LABEL:;
}
/* method glesv2#Sys#glCreateProgram for (self: Sys): GLProgram */
val* glesv2___core__Sys___glCreateProgram(val* self) {
val* var /* : GLProgram */;
val* var1 /* : GLProgram */;
val* var2 /* : GLProgram */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glCreateProgram___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLProgram */
var2->type = &type_glesv2__GLProgram;
var2->class = &class_glesv2__GLProgram;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glUseProgram for (self: Sys, GLProgram) */
void glesv2___core__Sys___glUseProgram(val* self, val* p0) {
void* var /* : GLProgram for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLProgram */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glUseProgram___impl(var_for_c_0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glLinkProgram for (self: Sys, GLProgram) */
void glesv2___core__Sys___glLinkProgram(val* self, val* p0) {
void* var /* : GLProgram for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLProgram */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glLinkProgram___impl(var_for_c_0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glValidateProgram for (self: Sys, GLProgram) */
void glesv2___core__Sys___glValidateProgram(val* self, val* p0) {
void* var /* : GLProgram for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLProgram */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glValidateProgram___impl(var_for_c_0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glDeleteProgram for (self: Sys, GLProgram) */
void glesv2___core__Sys___glDeleteProgram(val* self, val* p0) {
void* var /* : GLProgram for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLProgram */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glDeleteProgram___impl(var_for_c_0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glIsProgram for (self: Sys, GLProgram): Bool */
short int glesv2___core__Sys___glIsProgram(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : GLProgram for extern */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLProgram */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glIsProgram___impl(var_for_c_0, var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glAttachShader for (self: Sys, GLProgram, GLShader) */
void glesv2___core__Sys___glAttachShader(val* self, val* p0, val* p1) {
void* var /* : GLProgram for extern */;
void* var1 /* : GLShader for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLProgram */
var1 = ((struct instance_core__Pointer*)p1)->value; /* unboxing GLShader */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glAttachShader___impl(var_for_c_0, var, var1);
RET_LABEL:;
}
/* method glesv2#Sys#glDetachShader for (self: Sys, GLProgram, GLShader) */
void glesv2___core__Sys___glDetachShader(val* self, val* p0, val* p1) {
void* var /* : GLProgram for extern */;
void* var1 /* : GLShader for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLProgram */
var1 = ((struct instance_core__Pointer*)p1)->value; /* unboxing GLShader */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glDetachShader___impl(var_for_c_0, var, var1);
RET_LABEL:;
}
/* method glesv2#Sys#glGetProgramiv for (self: Sys, GLProgram, GLGetParameterName): Int */
long glesv2___core__Sys___glGetProgramiv(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : GLProgram for extern */;
void* var3 /* : GLGetParameterName for extern */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLProgram */
var3 = ((struct instance_core__Pointer*)p1)->value; /* unboxing GLGetParameterName */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glGetProgramiv___impl(var_for_c_0, var2, var3);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glGetProgramInfoLog for (self: Sys, GLProgram): String */
val* glesv2___core__Sys___glGetProgramInfoLog(val* self, val* p0) {
val* var /* : String */;
val* var_program /* var program: GLProgram */;
val* var1 /* : GLGetParameterName */;
long var2 /* : Int */;
long var_size /* var size: Int */;
char* var3 /* : NativeString */;
char* var4 /* : NativeString */;
char* var6 /* : NativeString */;
char* var_buf /* var buf: NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
var_program = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_glesv2__Sys__gl_INFO_LOG_LENGTH]))(self); /* gl_INFO_LOG_LENGTH on <self:Sys>*/
}
{
var2 = ((long(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_glesv2__Sys__glGetProgramiv]))(self, var_program, var1); /* glGetProgramiv on <self:Sys>*/
}
var_size = var2;
var3 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var3,var_size) on <var3:NativeString> */
var6 = (char*)nit_alloc(var_size);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_buf = var4;
{
var7 = ((long(*)(val* self, val* p0, long p1, char* p2))(self->class->vft[COLOR_glesv2__Sys__native_glGetProgramInfoLog]))(self, var_program, var_size, var_buf); /* native_glGetProgramInfoLog on <self:Sys>*/
}
var8 = core__flat___NativeString___to_s_with_length(var_buf, var_size);
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#native_glGetProgramInfoLog for (self: Sys, GLProgram, Int, NativeString): Int */
long glesv2___core__Sys___native_glGetProgramInfoLog(val* self, val* p0, long p1, char* p2) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : GLProgram for extern */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLProgram */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_native_glGetProgramInfoLog___impl(var_for_c_0, var2, p1, p2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glGetShaderiv for (self: Sys, GLShader, GLGetParameterName): Int */
long glesv2___core__Sys___glGetShaderiv(val* self, val* p0, val* p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : GLShader for extern */;
void* var3 /* : GLGetParameterName for extern */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLShader */
var3 = ((struct instance_core__Pointer*)p1)->value; /* unboxing GLGetParameterName */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glGetShaderiv___impl(var_for_c_0, var2, var3);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_INFO_LOG_LENGTH for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_INFO_LOG_LENGTH(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_INFO_LOG_LENGTH___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_DELETE_STATUS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_DELETE_STATUS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_DELETE_STATUS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_SHADER_TYPE for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_SHADER_TYPE(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_SHADER_TYPE___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_COMPILE_STATUS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_COMPILE_STATUS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_COMPILE_STATUS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_SHADER_SOURCE_LENGTH for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_SHADER_SOURCE_LENGTH(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_SHADER_SOURCE_LENGTH___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ACTIVE_ATTRIBUTES for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_ACTIVE_ATTRIBUTES(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ACTIVE_ATTRIBUTES___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ACTIVE_ATTRIBUTE_MAX_LENGTH for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_ACTIVE_ATTRIBUTE_MAX_LENGTH(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ACTIVE_ATTRIBUTE_MAX_LENGTH___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ACTIVE_UNIFORMS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_ACTIVE_UNIFORMS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ACTIVE_UNIFORMS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ACTIVE_UNIFORM_MAX_LENGTH for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_ACTIVE_UNIFORM_MAX_LENGTH(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ACTIVE_UNIFORM_MAX_LENGTH___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ATTACHED_SHADERS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_ATTACHED_SHADERS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ATTACHED_SHADERS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_LINK_STATUS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_LINK_STATUS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_LINK_STATUS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_VALIDATE_STATUS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_VALIDATE_STATUS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_VALIDATE_STATUS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glGetShaderInfoLog for (self: Sys, GLShader): String */
val* glesv2___core__Sys___glGetShaderInfoLog(val* self, val* p0) {
val* var /* : String */;
val* var_shader /* var shader: GLShader */;
val* var1 /* : GLGetParameterName */;
long var2 /* : Int */;
long var_size /* var size: Int */;
char* var3 /* : NativeString */;
char* var4 /* : NativeString */;
char* var6 /* : NativeString */;
char* var_buf /* var buf: NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
var_shader = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_glesv2__Sys__gl_INFO_LOG_LENGTH]))(self); /* gl_INFO_LOG_LENGTH on <self:Sys>*/
}
{
var2 = ((long(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_glesv2__Sys__glGetShaderiv]))(self, var_shader, var1); /* glGetShaderiv on <self:Sys>*/
}
var_size = var2;
var3 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var3,var_size) on <var3:NativeString> */
var6 = (char*)nit_alloc(var_size);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_buf = var4;
{
var7 = ((long(*)(val* self, val* p0, long p1, char* p2))(self->class->vft[COLOR_glesv2__Sys__native_glGetShaderInfoLog]))(self, var_shader, var_size, var_buf); /* native_glGetShaderInfoLog on <self:Sys>*/
}
var8 = core__flat___NativeString___to_s_with_length(var_buf, var_size);
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#native_glGetShaderInfoLog for (self: Sys, GLShader, Int, NativeString): Int */
long glesv2___core__Sys___native_glGetShaderInfoLog(val* self, val* p0, long p1, char* p2) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : GLShader for extern */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLShader */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_native_glGetShaderInfoLog___impl(var_for_c_0, var2, p1, p2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_VERTEX_SHADER for (self: Sys): GLShaderType */
val* glesv2___core__Sys___gl_VERTEX_SHADER(val* self) {
val* var /* : GLShaderType */;
val* var1 /* : GLShaderType */;
val* var2 /* : GLShaderType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_VERTEX_SHADER___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLShaderType */
var2->type = &type_glesv2__GLShaderType;
var2->class = &class_glesv2__GLShaderType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FRAGMENT_SHADER for (self: Sys): GLShaderType */
val* glesv2___core__Sys___gl_FRAGMENT_SHADER(val* self) {
val* var /* : GLShaderType */;
val* var1 /* : GLShaderType */;
val* var2 /* : GLShaderType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FRAGMENT_SHADER___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLShaderType */
var2->type = &type_glesv2__GLShaderType;
var2->class = &class_glesv2__GLShaderType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glCreateShader for (self: Sys, GLShaderType): GLShader */
val* glesv2___core__Sys___glCreateShader(val* self, val* p0) {
val* var /* : GLShader */;
val* var1 /* : GLShader */;
void* var2 /* : GLShaderType for extern */;
val* var3 /* : GLShader */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLShaderType */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glCreateShader___impl(var_for_c_0, var2);
var3 = BOX_core__Pointer(var1); /* boxing GLShader */
var3->type = &type_glesv2__GLShader;
var3->class = &class_glesv2__GLShader;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glShaderSource for (self: Sys, GLShader, NativeString) */
void glesv2___core__Sys___glShaderSource(val* self, val* p0, char* p1) {
void* var /* : GLShader for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLShader */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glShaderSource___impl(var_for_c_0, var, p1);
RET_LABEL:;
}
/* method glesv2#Sys#glCompileShader for (self: Sys, GLShader) */
void glesv2___core__Sys___glCompileShader(val* self, val* p0) {
void* var /* : GLShader for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLShader */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glCompileShader___impl(var_for_c_0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glDeleteShader for (self: Sys, GLShader) */
void glesv2___core__Sys___glDeleteShader(val* self, val* p0) {
void* var /* : GLShader for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLShader */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glDeleteShader___impl(var_for_c_0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glIsShader for (self: Sys, GLShader): Bool */
short int glesv2___core__Sys___glIsShader(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : GLShader for extern */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLShader */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glIsShader___impl(var_for_c_0, var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glEnableVertexAttribArray for (self: Sys, Int) */
void glesv2___core__Sys___glEnableVertexAttribArray(val* self, long p0) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glEnableVertexAttribArray___impl(var_for_c_0, p0);
RET_LABEL:;
}
/* method glesv2#Sys#glDisableVertexAttribArray for (self: Sys, Int) */
void glesv2___core__Sys___glDisableVertexAttribArray(val* self, long p0) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glDisableVertexAttribArray___impl(var_for_c_0, p0);
RET_LABEL:;
}
/* method glesv2#Sys#glDrawArrays for (self: Sys, GLDrawMode, Int, Int) */
void glesv2___core__Sys___glDrawArrays(val* self, val* p0, long p1, long p2) {
void* var /* : GLDrawMode for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLDrawMode */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glDrawArrays___impl(var_for_c_0, var, p1, p2);
RET_LABEL:;
}
/* method glesv2#Sys#glDrawElements for (self: Sys, GLDrawMode, Int, GLDataType, Pointer) */
void glesv2___core__Sys___glDrawElements(val* self, val* p0, long p1, val* p2, val* p3) {
void* var /* : GLDrawMode for extern */;
void* var1 /* : GLDataType for extern */;
void* var2 /* : Pointer for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLDrawMode */
var1 = ((struct instance_core__Pointer*)p2)->value; /* unboxing GLDataType */
var2 = ((struct instance_core__Pointer*)p3)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glDrawElements___impl(var_for_c_0, var, p1, var1, var2);
RET_LABEL:;
}
/* method glesv2#Sys#glVertexAttribPointer for (self: Sys, Int, Int, GLDataType, Bool, Int, NativeGLfloatArray) */
void glesv2___core__Sys___glVertexAttribPointer(val* self, long p0, long p1, val* p2, short int p3, long p4, val* p5) {
void* var /* : GLDataType for extern */;
void* var1 /* : NativeGLfloatArray for extern */;
var = ((struct instance_core__Pointer*)p2)->value; /* unboxing GLDataType */
var1 = ((struct instance_core__Pointer*)p5)->value; /* unboxing NativeGLfloatArray */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glVertexAttribPointer___impl(var_for_c_0, p0, p1, var, p3, p4, var1);
RET_LABEL:;
}
/* method glesv2#Sys#glVertexAttrib1f for (self: Sys, Int, Float) */
void glesv2___core__Sys___glVertexAttrib1f(val* self, long p0, double p1) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glVertexAttrib1f___impl(var_for_c_0, p0, p1);
RET_LABEL:;
}
/* method glesv2#Sys#glVertexAttrib2f for (self: Sys, Int, Float, Float) */
void glesv2___core__Sys___glVertexAttrib2f(val* self, long p0, double p1, double p2) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glVertexAttrib2f___impl(var_for_c_0, p0, p1, p2);
RET_LABEL:;
}
/* method glesv2#Sys#glVertexAttrib3f for (self: Sys, Int, Float, Float, Float) */
void glesv2___core__Sys___glVertexAttrib3f(val* self, long p0, double p1, double p2, double p3) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glVertexAttrib3f___impl(var_for_c_0, p0, p1, p2, p3);
RET_LABEL:;
}
/* method glesv2#Sys#glVertexAttrib4f for (self: Sys, Int, Float, Float, Float, Float) */
void glesv2___core__Sys___glVertexAttrib4f(val* self, long p0, double p1, double p2, double p3, double p4) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glVertexAttrib4f___impl(var_for_c_0, p0, p1, p2, p3, p4);
RET_LABEL:;
}
/* method glesv2#Sys#glUniform1i for (self: Sys, Int, Int) */
void glesv2___core__Sys___glUniform1i(val* self, long p0, long p1) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glUniform1i___impl(var_for_c_0, p0, p1);
RET_LABEL:;
}
/* method glesv2#Sys#glUniform2i for (self: Sys, Int, Int, Int) */
void glesv2___core__Sys___glUniform2i(val* self, long p0, long p1, long p2) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glUniform2i___impl(var_for_c_0, p0, p1, p2);
RET_LABEL:;
}
/* method glesv2#Sys#glUniform3i for (self: Sys, Int, Int, Int, Int) */
void glesv2___core__Sys___glUniform3i(val* self, long p0, long p1, long p2, long p3) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glUniform3i___impl(var_for_c_0, p0, p1, p2, p3);
RET_LABEL:;
}
/* method glesv2#Sys#glUniform4i for (self: Sys, Int, Int, Int, Int, Int) */
void glesv2___core__Sys___glUniform4i(val* self, long p0, long p1, long p2, long p3, long p4) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glUniform4i___impl(var_for_c_0, p0, p1, p2, p3, p4);
RET_LABEL:;
}
/* method glesv2#Sys#glUniform1f for (self: Sys, Int, Float) */
void glesv2___core__Sys___glUniform1f(val* self, long p0, double p1) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glUniform1f___impl(var_for_c_0, p0, p1);
RET_LABEL:;
}
/* method glesv2#Sys#glUniform2f for (self: Sys, Int, Float, Float) */
void glesv2___core__Sys___glUniform2f(val* self, long p0, double p1, double p2) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glUniform2f___impl(var_for_c_0, p0, p1, p2);
RET_LABEL:;
}
/* method glesv2#Sys#glUniform3f for (self: Sys, Int, Float, Float, Float) */
void glesv2___core__Sys___glUniform3f(val* self, long p0, double p1, double p2, double p3) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glUniform3f___impl(var_for_c_0, p0, p1, p2, p3);
RET_LABEL:;
}
/* method glesv2#Sys#glUniform4f for (self: Sys, Int, Float, Float, Float, Float) */
void glesv2___core__Sys___glUniform4f(val* self, long p0, double p1, double p2, double p3, double p4) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glUniform4f___impl(var_for_c_0, p0, p1, p2, p3, p4);
RET_LABEL:;
}
/* method glesv2#Sys#glGetError for (self: Sys): GLError */
val* glesv2___core__Sys___glGetError(val* self) {
val* var /* : GLError */;
val* var1 /* : GLError */;
val* var2 /* : GLError */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glGetError___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLError */
var2->type = &type_glesv2__GLError;
var2->class = &class_glesv2__GLError;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_NO_ERROR for (self: Sys): GLError */
val* glesv2___core__Sys___gl_NO_ERROR(val* self) {
val* var /* : GLError */;
val* var1 /* : GLError */;
val* var2 /* : GLError */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_NO_ERROR___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLError */
var2->type = &type_glesv2__GLError;
var2->class = &class_glesv2__GLError;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_INVALID_ENUM for (self: Sys): GLError */
val* glesv2___core__Sys___gl_INVALID_ENUM(val* self) {
val* var /* : GLError */;
val* var1 /* : GLError */;
val* var2 /* : GLError */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_INVALID_ENUM___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLError */
var2->type = &type_glesv2__GLError;
var2->class = &class_glesv2__GLError;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_INVALID_VALUE for (self: Sys): GLError */
val* glesv2___core__Sys___gl_INVALID_VALUE(val* self) {
val* var /* : GLError */;
val* var1 /* : GLError */;
val* var2 /* : GLError */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_INVALID_VALUE___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLError */
var2->type = &type_glesv2__GLError;
var2->class = &class_glesv2__GLError;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_INVALID_OPERATION for (self: Sys): GLError */
val* glesv2___core__Sys___gl_INVALID_OPERATION(val* self) {
val* var /* : GLError */;
val* var1 /* : GLError */;
val* var2 /* : GLError */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_INVALID_OPERATION___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLError */
var2->type = &type_glesv2__GLError;
var2->class = &class_glesv2__GLError;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_INVALID_FRAMEBUFFER_OPERATION for (self: Sys): GLError */
val* glesv2___core__Sys___gl_INVALID_FRAMEBUFFER_OPERATION(val* self) {
val* var /* : GLError */;
val* var1 /* : GLError */;
val* var2 /* : GLError */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_INVALID_FRAMEBUFFER_OPERATION___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLError */
var2->type = &type_glesv2__GLError;
var2->class = &class_glesv2__GLError;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_OUT_OF_MEMORY for (self: Sys): GLError */
val* glesv2___core__Sys___gl_OUT_OF_MEMORY(val* self) {
val* var /* : GLError */;
val* var1 /* : GLError */;
val* var2 /* : GLError */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_OUT_OF_MEMORY___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLError */
var2->type = &type_glesv2__GLError;
var2->class = &class_glesv2__GLError;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#assert_no_gl_error for (self: Sys) */
void glesv2___core__Sys___assert_no_gl_error(val* self) {
val* var /* : GLError */;
val* var_error /* var error: GLError */;
val* var1 /* : GLError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_glesv2__Sys__glGetError]))(self); /* glGetError on <self:Sys>*/
}
var_error = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_glesv2__Sys__gl_NO_ERROR]))(self); /* gl_NO_ERROR on <self:Sys>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_error, var1); /* == on <var_error:GLError>*/
}
var3 = !var2;
if (var3){
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "GL error: ";
var8 = core__flat___NativeString___to_s_full(var7, 10l, 10l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
{
var9 = ((val*(*)(val* self))(var_error->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_error); /* to_s on <var_error:GLError>*/
}
((struct instance_core__NativeArray*)var4)->values[1]=var9;
{
var10 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Sys__print]))(self, var10); /* print on <self:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 504);
fatal_exit(1);
} else {
}
RET_LABEL:;
}
/* method glesv2#Sys#gl_TEXTURE0 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE0(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE0___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE1 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE1(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE1___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE2 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE2(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE2___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE3 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE3(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE3___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE4 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE4(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE4___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE5 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE5(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE5___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE6 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE6(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE6___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE7 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE7(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE7___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE8 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE8(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE8___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE9 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE9(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE9___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE10 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE10(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE10___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE11 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE11(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE11___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE12 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE12(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE12___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE13 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE13(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE13___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE14 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE14(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE14___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE15 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE15(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE15___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE16 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE16(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE16___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE17 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE17(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE17___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE18 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE18(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE18___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE19 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE19(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE19___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE20 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE20(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE20___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE21 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE21(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE21___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE22 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE22(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE22___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE23 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE23(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE23___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE24 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE24(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE24___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE25 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE25(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE25___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE26 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE26(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE26___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE27 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE27(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE27___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE28 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE28(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE28___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE29 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE29(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE29___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE30 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE30(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE30___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE31 for (self: Sys): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE31(val* self) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE31___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE for (self: Sys, Int): GLTextureUnit */
val* glesv2___core__Sys___gl_TEXTURE(val* self, long p0) {
val* var /* : GLTextureUnit */;
val* var1 /* : GLTextureUnit */;
val* var2 /* : GLTextureUnit */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE___impl(var_for_c_0, p0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureUnit */
var2->type = &type_glesv2__GLTextureUnit;
var2->class = &class_glesv2__GLTextureUnit;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glGenTextures for (self: Sys, Int): Array[Int] */
val* glesv2___core__Sys___glGenTextures(val* self, long p0) {
val* var /* : Array[Int] */;
long var_n /* var n: Int */;
val* var1 /* : CIntArray */;
val* var_array /* var array: CIntArray */;
val* var2 /* : NativeCArray */;
val* var3 /* : Array[nullable Object] */;
val* var_a /* var a: Array[Int] */;
var_n = p0;
var1 = NEW_c__CIntArray(&type_c__CIntArray);
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_c__CIntArray__init]))(var1, var_n); /* init on <var1:CIntArray>*/
}
var_array = var1;
{
var2 = ((val*(*)(val* self))(var_array->class->vft[COLOR_c__CArray__native_array]))(var_array); /* native_array on <var_array:CIntArray>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_glesv2__Sys__native_glGenTextures]))(self, var_n, var2); /* native_glGenTextures on <self:Sys>*/
}
{
var3 = ((val*(*)(val* self))(var_array->class->vft[COLOR_core__array__Collection__to_a]))(var_array); /* to_a on <var_array:CIntArray>*/
}
var_a = var3;
{
((void(*)(val* self))(var_array->class->vft[COLOR_c__CArray__destroy]))(var_array); /* destroy on <var_array:CIntArray>*/
}
var = var_a;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#native_glGenTextures for (self: Sys, Int, NativeCIntArray) */
void glesv2___core__Sys___native_glGenTextures(val* self, long p0, val* p1) {
void* var /* : NativeCIntArray for extern */;
var = ((struct instance_core__Pointer*)p1)->value; /* unboxing NativeCIntArray */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_native_glGenTextures___impl(var_for_c_0, p0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glActiveTexture for (self: Sys, GLTextureUnit) */
void glesv2___core__Sys___glActiveTexture(val* self, val* p0) {
void* var /* : GLTextureUnit for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLTextureUnit */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glActiveTexture___impl(var_for_c_0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glBindTexture for (self: Sys, GLTextureTarget, Int) */
void glesv2___core__Sys___glBindTexture(val* self, val* p0, long p1) {
void* var /* : GLTextureTarget for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLTextureTarget */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glBindTexture___impl(var_for_c_0, var, p1);
RET_LABEL:;
}
/* method glesv2#Sys#glDeleteTextures for (self: Sys, SequenceRead[Int]) */
void glesv2___core__Sys___glDeleteTextures(val* self, val* p0) {
val* var_textures /* var textures: SequenceRead[Int] */;
long var /* : Int */;
long var_n /* var n: Int */;
val* var1 /* : CIntArray */;
val* var2 /* : CIntArray */;
val* var_array /* var array: CIntArray */;
val* var3 /* : NativeCArray */;
var_textures = p0;
{
var = ((long(*)(val* self))((((long)var_textures&3)?class_info[((long)var_textures&3)]:var_textures->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_textures); /* length on <var_textures:SequenceRead[Int]>*/
}
var_n = var;
var1 = NEW_c__CIntArray(&type_c__CIntArray);
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_c__CIntArray__from]))(var1, var_textures); /* from on <var1:CIntArray>*/
}
var_array = var2;
{
var3 = ((val*(*)(val* self))(var_array->class->vft[COLOR_c__CArray__native_array]))(var_array); /* native_array on <var_array:CIntArray>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_glesv2__Sys__native_glDeleteTextures]))(self, var_n, var3); /* native_glDeleteTextures on <self:Sys>*/
}
{
((void(*)(val* self))(var_array->class->vft[COLOR_c__CArray__destroy]))(var_array); /* destroy on <var_array:CIntArray>*/
}
RET_LABEL:;
}
/* method glesv2#Sys#native_glDeleteTextures for (self: Sys, Int, NativeCIntArray) */
void glesv2___core__Sys___native_glDeleteTextures(val* self, long p0, val* p1) {
void* var /* : NativeCIntArray for extern */;
var = ((struct instance_core__Pointer*)p1)->value; /* unboxing NativeCIntArray */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_native_glDeleteTextures___impl(var_for_c_0, p0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glIsTexture for (self: Sys, Int): Bool */
short int glesv2___core__Sys___glIsTexture(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glIsTexture___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glPixelStorei for (self: Sys, GLPack, Int) */
void glesv2___core__Sys___glPixelStorei(val* self, val* p0, long p1) {
void* var /* : GLPack for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLPack */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glPixelStorei___impl(var_for_c_0, var, p1);
RET_LABEL:;
}
/* method glesv2#Sys#gl_PACK_ALIGNEMENT for (self: Sys): GLPack */
val* glesv2___core__Sys___gl_PACK_ALIGNEMENT(val* self) {
val* var /* : GLPack */;
val* var1 /* : GLPack */;
val* var2 /* : GLPack */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_PACK_ALIGNEMENT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLPack */
var2->type = &type_glesv2__GLPack;
var2->class = &class_glesv2__GLPack;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_UNPACK_ALIGNEMENT for (self: Sys): GLPack */
val* glesv2___core__Sys___gl_UNPACK_ALIGNEMENT(val* self) {
val* var /* : GLPack */;
val* var1 /* : GLPack */;
val* var2 /* : GLPack */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_UNPACK_ALIGNEMENT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLPack */
var2->type = &type_glesv2__GLPack;
var2->class = &class_glesv2__GLPack;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glTexImage2D for (self: Sys, GLTextureTarget, Int, GLPixelFormat, Int, Int, Int, GLPixelFormat, GLDataType, Pointer) */
void glesv2___core__Sys___glTexImage2D(val* self, val* p0, long p1, val* p2, long p3, long p4, long p5, val* p6, val* p7, val* p8) {
void* var /* : GLTextureTarget for extern */;
void* var1 /* : GLPixelFormat for extern */;
void* var2 /* : GLPixelFormat for extern */;
void* var3 /* : GLDataType for extern */;
void* var4 /* : Pointer for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLTextureTarget */
var1 = ((struct instance_core__Pointer*)p2)->value; /* unboxing GLPixelFormat */
var2 = ((struct instance_core__Pointer*)p6)->value; /* unboxing GLPixelFormat */
var3 = ((struct instance_core__Pointer*)p7)->value; /* unboxing GLDataType */
var4 = ((struct instance_core__Pointer*)p8)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glTexImage2D___impl(var_for_c_0, var, p1, var1, p3, p4, p5, var2, var3, var4);
RET_LABEL:;
}
/* method glesv2#Sys#glTexSubImage2D for (self: Sys, GLTextureTarget, Int, Int, Int, Int, Int, Int, GLPixelFormat, GLDataType, Pointer) */
void glesv2___core__Sys___glTexSubImage2D(val* self, val* p0, long p1, long p2, long p3, long p4, long p5, long p6, val* p7, val* p8, val* p9) {
void* var /* : GLTextureTarget for extern */;
void* var1 /* : GLPixelFormat for extern */;
void* var2 /* : GLDataType for extern */;
void* var3 /* : Pointer for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLTextureTarget */
var1 = ((struct instance_core__Pointer*)p7)->value; /* unboxing GLPixelFormat */
var2 = ((struct instance_core__Pointer*)p8)->value; /* unboxing GLDataType */
var3 = ((struct instance_core__Pointer*)p9)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glTexSubImage2D___impl(var_for_c_0, var, p1, p2, p3, p4, p5, p6, var1, var2, var3);
RET_LABEL:;
}
/* method glesv2#Sys#glCopyTexImage2D for (self: Sys, GLTextureTarget, Int, GLPixelFormat, Int, Int, Int, Int, Int) */
void glesv2___core__Sys___glCopyTexImage2D(val* self, val* p0, long p1, val* p2, long p3, long p4, long p5, long p6, long p7) {
void* var /* : GLTextureTarget for extern */;
void* var1 /* : GLPixelFormat for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLTextureTarget */
var1 = ((struct instance_core__Pointer*)p2)->value; /* unboxing GLPixelFormat */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glCopyTexImage2D___impl(var_for_c_0, var, p1, var1, p3, p4, p5, p6, p7);
RET_LABEL:;
}
/* method glesv2#Sys#glCopyTexSubImage2D for (self: Sys, GLTextureTarget, Int, Int, Int, Int, Int, Int, Int) */
void glesv2___core__Sys___glCopyTexSubImage2D(val* self, val* p0, long p1, long p2, long p3, long p4, long p5, long p6, long p7) {
void* var /* : GLTextureTarget for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLTextureTarget */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glCopyTexSubImage2D___impl(var_for_c_0, var, p1, p2, p3, p4, p5, p6, p7);
RET_LABEL:;
}
/* method glesv2#Sys#glReadPixels for (self: Sys, Int, Int, Int, Int, GLPixelFormat, GLDataType, Pointer) */
void glesv2___core__Sys___glReadPixels(val* self, long p0, long p1, long p2, long p3, val* p4, val* p5, val* p6) {
void* var /* : GLPixelFormat for extern */;
void* var1 /* : GLDataType for extern */;
void* var2 /* : Pointer for extern */;
var = ((struct instance_core__Pointer*)p4)->value; /* unboxing GLPixelFormat */
var1 = ((struct instance_core__Pointer*)p5)->value; /* unboxing GLDataType */
var2 = ((struct instance_core__Pointer*)p6)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glReadPixels___impl(var_for_c_0, p0, p1, p2, p3, var, var1, var2);
RET_LABEL:;
}
/* method glesv2#Sys#gl_NEAREST for (self: Sys): GLTexParameteri */
val* glesv2___core__Sys___gl_NEAREST(val* self) {
val* var /* : GLTexParameteri */;
val* var1 /* : GLTexParameteri */;
val* var2 /* : GLTexParameteri */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_NEAREST___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTexParameteri */
var2->type = &type_glesv2__GLTexParameteri;
var2->class = &class_glesv2__GLTexParameteri;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_LINEAR for (self: Sys): GLTexParameteri */
val* glesv2___core__Sys___gl_LINEAR(val* self) {
val* var /* : GLTexParameteri */;
val* var1 /* : GLTexParameteri */;
val* var2 /* : GLTexParameteri */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_LINEAR___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTexParameteri */
var2->type = &type_glesv2__GLTexParameteri;
var2->class = &class_glesv2__GLTexParameteri;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_NEAREST_MIPMAP_NEAREST for (self: Sys): GLTexParameteri */
val* glesv2___core__Sys___gl_NEAREST_MIPMAP_NEAREST(val* self) {
val* var /* : GLTexParameteri */;
val* var1 /* : GLTexParameteri */;
val* var2 /* : GLTexParameteri */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_NEAREST_MIPMAP_NEAREST___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTexParameteri */
var2->type = &type_glesv2__GLTexParameteri;
var2->class = &class_glesv2__GLTexParameteri;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_LINEAR_MIPMAP_NEAREST for (self: Sys): GLTexParameteri */
val* glesv2___core__Sys___gl_LINEAR_MIPMAP_NEAREST(val* self) {
val* var /* : GLTexParameteri */;
val* var1 /* : GLTexParameteri */;
val* var2 /* : GLTexParameteri */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_LINEAR_MIPMAP_NEAREST___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTexParameteri */
var2->type = &type_glesv2__GLTexParameteri;
var2->class = &class_glesv2__GLTexParameteri;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_NEAREST_MIPMAP_NINEAR for (self: Sys): GLTexParameteri */
val* glesv2___core__Sys___gl_NEAREST_MIPMAP_NINEAR(val* self) {
val* var /* : GLTexParameteri */;
val* var1 /* : GLTexParameteri */;
val* var2 /* : GLTexParameteri */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_NEAREST_MIPMAP_NINEAR___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTexParameteri */
var2->type = &type_glesv2__GLTexParameteri;
var2->class = &class_glesv2__GLTexParameteri;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_LINEAR_MIPMAP_LINEAR for (self: Sys): GLTexParameteri */
val* glesv2___core__Sys___gl_LINEAR_MIPMAP_LINEAR(val* self) {
val* var /* : GLTexParameteri */;
val* var1 /* : GLTexParameteri */;
val* var2 /* : GLTexParameteri */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_LINEAR_MIPMAP_LINEAR___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTexParameteri */
var2->type = &type_glesv2__GLTexParameteri;
var2->class = &class_glesv2__GLTexParameteri;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_CLAMP_TO_EDGE for (self: Sys): GLTexParameteri */
val* glesv2___core__Sys___gl_CLAMP_TO_EDGE(val* self) {
val* var /* : GLTexParameteri */;
val* var1 /* : GLTexParameteri */;
val* var2 /* : GLTexParameteri */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_CLAMP_TO_EDGE___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTexParameteri */
var2->type = &type_glesv2__GLTexParameteri;
var2->class = &class_glesv2__GLTexParameteri;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_MIRRORED_REPEAT for (self: Sys): GLTexParameteri */
val* glesv2___core__Sys___gl_MIRRORED_REPEAT(val* self) {
val* var /* : GLTexParameteri */;
val* var1 /* : GLTexParameteri */;
val* var2 /* : GLTexParameteri */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_MIRRORED_REPEAT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTexParameteri */
var2->type = &type_glesv2__GLTexParameteri;
var2->class = &class_glesv2__GLTexParameteri;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_REPEAT for (self: Sys): GLTexParameteri */
val* glesv2___core__Sys___gl_REPEAT(val* self) {
val* var /* : GLTexParameteri */;
val* var1 /* : GLTexParameteri */;
val* var2 /* : GLTexParameteri */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_REPEAT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTexParameteri */
var2->type = &type_glesv2__GLTexParameteri;
var2->class = &class_glesv2__GLTexParameteri;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE_2D for (self: Sys): GLTextureTarget */
val* glesv2___core__Sys___gl_TEXTURE_95d2D(val* self) {
val* var /* : GLTextureTarget */;
val* var1 /* : GLTextureTarget */;
val* var2 /* : GLTextureTarget */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE_2D___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureTarget */
var2->type = &type_glesv2__GLTextureTarget;
var2->class = &class_glesv2__GLTextureTarget;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE_CUBE_MAP for (self: Sys): GLTextureTarget */
val* glesv2___core__Sys___gl_TEXTURE_CUBE_MAP(val* self) {
val* var /* : GLTextureTarget */;
val* var1 /* : GLTextureTarget */;
val* var2 /* : GLTextureTarget */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE_CUBE_MAP___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTextureTarget */
var2->type = &type_glesv2__GLTextureTarget;
var2->class = &class_glesv2__GLTextureTarget;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glGenRenderbuffers for (self: Sys, Int): Array[Int] */
val* glesv2___core__Sys___glGenRenderbuffers(val* self, long p0) {
val* var /* : Array[Int] */;
long var_n /* var n: Int */;
val* var1 /* : CIntArray */;
val* var_array /* var array: CIntArray */;
val* var2 /* : NativeCArray */;
val* var3 /* : Array[nullable Object] */;
val* var_a /* var a: Array[Int] */;
var_n = p0;
var1 = NEW_c__CIntArray(&type_c__CIntArray);
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_c__CIntArray__init]))(var1, var_n); /* init on <var1:CIntArray>*/
}
var_array = var1;
{
var2 = ((val*(*)(val* self))(var_array->class->vft[COLOR_c__CArray__native_array]))(var_array); /* native_array on <var_array:CIntArray>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_glesv2__Sys__native_glGenRenderbuffers]))(self, var_n, var2); /* native_glGenRenderbuffers on <self:Sys>*/
}
{
var3 = ((val*(*)(val* self))(var_array->class->vft[COLOR_core__array__Collection__to_a]))(var_array); /* to_a on <var_array:CIntArray>*/
}
var_a = var3;
{
((void(*)(val* self))(var_array->class->vft[COLOR_c__CArray__destroy]))(var_array); /* destroy on <var_array:CIntArray>*/
}
var = var_a;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#native_glGenRenderbuffers for (self: Sys, Int, NativeCIntArray) */
void glesv2___core__Sys___native_glGenRenderbuffers(val* self, long p0, val* p1) {
void* var /* : NativeCIntArray for extern */;
var = ((struct instance_core__Pointer*)p1)->value; /* unboxing NativeCIntArray */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_native_glGenRenderbuffers___impl(var_for_c_0, p0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glIsRenderbuffer for (self: Sys, Int): Bool */
short int glesv2___core__Sys___glIsRenderbuffer(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glIsRenderbuffer___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glDeleteRenderbuffers for (self: Sys, SequenceRead[Int]) */
void glesv2___core__Sys___glDeleteRenderbuffers(val* self, val* p0) {
val* var_renderbuffers /* var renderbuffers: SequenceRead[Int] */;
long var /* : Int */;
long var_n /* var n: Int */;
val* var1 /* : CIntArray */;
val* var2 /* : CIntArray */;
val* var_array /* var array: CIntArray */;
val* var3 /* : NativeCArray */;
var_renderbuffers = p0;
{
var = ((long(*)(val* self))((((long)var_renderbuffers&3)?class_info[((long)var_renderbuffers&3)]:var_renderbuffers->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_renderbuffers); /* length on <var_renderbuffers:SequenceRead[Int]>*/
}
var_n = var;
var1 = NEW_c__CIntArray(&type_c__CIntArray);
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_c__CIntArray__from]))(var1, var_renderbuffers); /* from on <var1:CIntArray>*/
}
var_array = var2;
{
var3 = ((val*(*)(val* self))(var_array->class->vft[COLOR_c__CArray__native_array]))(var_array); /* native_array on <var_array:CIntArray>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_glesv2__Sys__native_glDeleteRenderbuffers]))(self, var_n, var3); /* native_glDeleteRenderbuffers on <self:Sys>*/
}
{
((void(*)(val* self))(var_array->class->vft[COLOR_c__CArray__destroy]))(var_array); /* destroy on <var_array:CIntArray>*/
}
RET_LABEL:;
}
/* method glesv2#Sys#native_glDeleteRenderbuffers for (self: Sys, Int, NativeCIntArray) */
void glesv2___core__Sys___native_glDeleteRenderbuffers(val* self, long p0, val* p1) {
void* var /* : NativeCIntArray for extern */;
var = ((struct instance_core__Pointer*)p1)->value; /* unboxing NativeCIntArray */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_native_glDeleteRenderbuffers___impl(var_for_c_0, p0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glFramebufferRenderbuffer for (self: Sys, GLFramebufferTarget, GLAttachment, GLRenderbufferTarget, Int) */
void glesv2___core__Sys___glFramebufferRenderbuffer(val* self, val* p0, val* p1, val* p2, long p3) {
void* var /* : GLFramebufferTarget for extern */;
void* var1 /* : GLAttachment for extern */;
void* var2 /* : GLRenderbufferTarget for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLFramebufferTarget */
var1 = ((struct instance_core__Pointer*)p1)->value; /* unboxing GLAttachment */
var2 = ((struct instance_core__Pointer*)p2)->value; /* unboxing GLRenderbufferTarget */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glFramebufferRenderbuffer___impl(var_for_c_0, var, var1, var2, p3);
RET_LABEL:;
}
/* method glesv2#Sys#glRenderbufferStorage for (self: Sys, GLRenderbufferTarget, GLRenderbufferFormat, Int, Int) */
void glesv2___core__Sys___glRenderbufferStorage(val* self, val* p0, val* p1, long p2, long p3) {
void* var /* : GLRenderbufferTarget for extern */;
void* var1 /* : GLRenderbufferFormat for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLRenderbufferTarget */
var1 = ((struct instance_core__Pointer*)p1)->value; /* unboxing GLRenderbufferFormat */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glRenderbufferStorage___impl(var_for_c_0, var, var1, p2, p3);
RET_LABEL:;
}
/* method glesv2#Sys#gl_RGBA4 for (self: Sys): GLRenderbufferFormat */
val* glesv2___core__Sys___gl_RGBA4(val* self) {
val* var /* : GLRenderbufferFormat */;
val* var1 /* : GLRenderbufferFormat */;
val* var2 /* : GLRenderbufferFormat */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_RGBA4___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLRenderbufferFormat */
var2->type = &type_glesv2__GLRenderbufferFormat;
var2->class = &class_glesv2__GLRenderbufferFormat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_RGB565 for (self: Sys): GLRenderbufferFormat */
val* glesv2___core__Sys___gl_RGB565(val* self) {
val* var /* : GLRenderbufferFormat */;
val* var1 /* : GLRenderbufferFormat */;
val* var2 /* : GLRenderbufferFormat */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_RGB565___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLRenderbufferFormat */
var2->type = &type_glesv2__GLRenderbufferFormat;
var2->class = &class_glesv2__GLRenderbufferFormat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_RGB_A1 for (self: Sys): GLRenderbufferFormat */
val* glesv2___core__Sys___gl_RGB_A1(val* self) {
val* var /* : GLRenderbufferFormat */;
val* var1 /* : GLRenderbufferFormat */;
val* var2 /* : GLRenderbufferFormat */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_RGB_A1___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLRenderbufferFormat */
var2->type = &type_glesv2__GLRenderbufferFormat;
var2->class = &class_glesv2__GLRenderbufferFormat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_DEPTH_COMPNENT16 for (self: Sys): GLRenderbufferFormat */
val* glesv2___core__Sys___gl_DEPTH_COMPNENT16(val* self) {
val* var /* : GLRenderbufferFormat */;
val* var1 /* : GLRenderbufferFormat */;
val* var2 /* : GLRenderbufferFormat */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_DEPTH_COMPNENT16___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLRenderbufferFormat */
var2->type = &type_glesv2__GLRenderbufferFormat;
var2->class = &class_glesv2__GLRenderbufferFormat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_STENCIL_INDEX8 for (self: Sys): GLRenderbufferFormat */
val* glesv2___core__Sys___gl_STENCIL_INDEX8(val* self) {
val* var /* : GLRenderbufferFormat */;
val* var1 /* : GLRenderbufferFormat */;
val* var2 /* : GLRenderbufferFormat */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_STENCIL_INDEX8___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLRenderbufferFormat */
var2->type = &type_glesv2__GLRenderbufferFormat;
var2->class = &class_glesv2__GLRenderbufferFormat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_COLOR_ATTACHMENT0 for (self: Sys): GLAttachment */
val* glesv2___core__Sys___gl_COLOR_ATTACHMENT0(val* self) {
val* var /* : GLAttachment */;
val* var1 /* : GLAttachment */;
val* var2 /* : GLAttachment */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_COLOR_ATTACHMENT0___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLAttachment */
var2->type = &type_glesv2__GLAttachment;
var2->class = &class_glesv2__GLAttachment;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_DEPTH_ATTACHMENT for (self: Sys): GLAttachment */
val* glesv2___core__Sys___gl_DEPTH_ATTACHMENT(val* self) {
val* var /* : GLAttachment */;
val* var1 /* : GLAttachment */;
val* var2 /* : GLAttachment */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_DEPTH_ATTACHMENT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLAttachment */
var2->type = &type_glesv2__GLAttachment;
var2->class = &class_glesv2__GLAttachment;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_STENCIL_ATTACHMENT for (self: Sys): GLAttachment */
val* glesv2___core__Sys___gl_STENCIL_ATTACHMENT(val* self) {
val* var /* : GLAttachment */;
val* var1 /* : GLAttachment */;
val* var2 /* : GLAttachment */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_STENCIL_ATTACHMENT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLAttachment */
var2->type = &type_glesv2__GLAttachment;
var2->class = &class_glesv2__GLAttachment;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl for (self: Sys): GLES */
val* glesv2___core__Sys___gl(val* self) {
val* var /* : GLES */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : GLES */;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_glesv2__Sys__gles]))(var1); /* gles on <var1:Sys>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glClearColor for (self: Sys, Float, Float, Float, Float) */
void glesv2___core__Sys___glClearColor(val* self, double p0, double p1, double p2, double p3) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glClearColor___impl(var_for_c_0, p0, p1, p2, p3);
RET_LABEL:;
}
/* method glesv2#Sys#glClearDepthf for (self: Sys, Float) */
void glesv2___core__Sys___glClearDepthf(val* self, double p0) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glClearDepthf___impl(var_for_c_0, p0);
RET_LABEL:;
}
/* method glesv2#Sys#glClearStencil for (self: Sys, Int) */
void glesv2___core__Sys___glClearStencil(val* self, long p0) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glClearStencil___impl(var_for_c_0, p0);
RET_LABEL:;
}
/* method glesv2#Sys#glClear for (self: Sys, GLBuffer) */
void glesv2___core__Sys___glClear(val* self, val* p0) {
void* var /* : GLBuffer for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLBuffer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glClear___impl(var_for_c_0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glColorMask for (self: Sys, Bool, Bool, Bool, Bool) */
void glesv2___core__Sys___glColorMask(val* self, short int p0, short int p1, short int p2, short int p3) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glColorMask___impl(var_for_c_0, p0, p1, p2, p3);
RET_LABEL:;
}
/* method glesv2#Sys#glViewport for (self: Sys, Int, Int, Int, Int) */
void glesv2___core__Sys___glViewport(val* self, long p0, long p1, long p2, long p3) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glViewport___impl(var_for_c_0, p0, p1, p2, p3);
RET_LABEL:;
}
/* method glesv2#Sys#glFinish for (self: Sys) */
void glesv2___core__Sys___glFinish(val* self) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glFinish___impl(var_for_c_0);
RET_LABEL:;
}
/* method glesv2#Sys#glFlush for (self: Sys) */
void glesv2___core__Sys___glFlush(val* self) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glFlush___impl(var_for_c_0);
RET_LABEL:;
}
/* method glesv2#Sys#glTexParameteri for (self: Sys, GLTextureTarget, GLTexParameteriName, GLTexParameteri) */
void glesv2___core__Sys___glTexParameteri(val* self, val* p0, val* p1, val* p2) {
void* var /* : GLTextureTarget for extern */;
void* var1 /* : GLTexParameteriName for extern */;
void* var2 /* : GLTexParameteri for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLTextureTarget */
var1 = ((struct instance_core__Pointer*)p1)->value; /* unboxing GLTexParameteriName */
var2 = ((struct instance_core__Pointer*)p2)->value; /* unboxing GLTexParameteri */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glTexParameteri___impl(var_for_c_0, var, var1, var2);
RET_LABEL:;
}
/* method glesv2#Sys#gl_TEXTURE_MIN_FILTER for (self: Sys): GLTexParameteriName */
val* glesv2___core__Sys___gl_TEXTURE_MIN_FILTER(val* self) {
val* var /* : GLTexParameteriName */;
val* var1 /* : GLTexParameteriName */;
val* var2 /* : GLTexParameteriName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE_MIN_FILTER___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTexParameteriName */
var2->type = &type_glesv2__GLTexParameteriName;
var2->class = &class_glesv2__GLTexParameteriName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE_MAG_FILTER for (self: Sys): GLTexParameteriName */
val* glesv2___core__Sys___gl_TEXTURE_MAG_FILTER(val* self) {
val* var /* : GLTexParameteriName */;
val* var1 /* : GLTexParameteriName */;
val* var2 /* : GLTexParameteriName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE_MAG_FILTER___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTexParameteriName */
var2->type = &type_glesv2__GLTexParameteriName;
var2->class = &class_glesv2__GLTexParameteriName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE_WRAP_S for (self: Sys): GLTexParameteriName */
val* glesv2___core__Sys___gl_TEXTURE_WRAP_S(val* self) {
val* var /* : GLTexParameteriName */;
val* var1 /* : GLTexParameteriName */;
val* var2 /* : GLTexParameteriName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE_WRAP_S___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTexParameteriName */
var2->type = &type_glesv2__GLTexParameteriName;
var2->class = &class_glesv2__GLTexParameteriName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TEXTURE_WRAP_T for (self: Sys): GLTexParameteriName */
val* glesv2___core__Sys___gl_TEXTURE_WRAP_T(val* self) {
val* var /* : GLTexParameteriName */;
val* var1 /* : GLTexParameteriName */;
val* var2 /* : GLTexParameteriName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TEXTURE_WRAP_T___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLTexParameteriName */
var2->type = &type_glesv2__GLTexParameteriName;
var2->class = &class_glesv2__GLTexParameteriName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glBindFramebuffer for (self: Sys, GLFramebufferTarget, Int) */
void glesv2___core__Sys___glBindFramebuffer(val* self, val* p0, long p1) {
void* var /* : GLFramebufferTarget for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLFramebufferTarget */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glBindFramebuffer___impl(var_for_c_0, var, p1);
RET_LABEL:;
}
/* method glesv2#Sys#gl_FRAMEBUFFER for (self: Sys): GLFramebufferTarget */
val* glesv2___core__Sys___gl_FRAMEBUFFER(val* self) {
val* var /* : GLFramebufferTarget */;
val* var1 /* : GLFramebufferTarget */;
val* var2 /* : GLFramebufferTarget */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FRAMEBUFFER___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLFramebufferTarget */
var2->type = &type_glesv2__GLFramebufferTarget;
var2->class = &class_glesv2__GLFramebufferTarget;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glBindRenderbuffer for (self: Sys, GLRenderbufferTarget, Int) */
void glesv2___core__Sys___glBindRenderbuffer(val* self, val* p0, long p1) {
void* var /* : GLRenderbufferTarget for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLRenderbufferTarget */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glBindRenderbuffer___impl(var_for_c_0, var, p1);
RET_LABEL:;
}
/* method glesv2#Sys#gl_RENDERBUFFER for (self: Sys): GLRenderbufferTarget */
val* glesv2___core__Sys___gl_RENDERBUFFER(val* self) {
val* var /* : GLRenderbufferTarget */;
val* var1 /* : GLRenderbufferTarget */;
val* var2 /* : GLRenderbufferTarget */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_RENDERBUFFER___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLRenderbufferTarget */
var2->type = &type_glesv2__GLRenderbufferTarget;
var2->class = &class_glesv2__GLRenderbufferTarget;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glHint for (self: Sys, GLHintTarget, GLHintMode) */
void glesv2___core__Sys___glHint(val* self, val* p0, val* p1) {
void* var /* : GLHintTarget for extern */;
void* var1 /* : GLHintMode for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLHintTarget */
var1 = ((struct instance_core__Pointer*)p1)->value; /* unboxing GLHintMode */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glHint___impl(var_for_c_0, var, var1);
RET_LABEL:;
}
/* method glesv2#Sys#glGenerateMipmap for (self: Sys, GLTextureTarget) */
void glesv2___core__Sys___glGenerateMipmap(val* self, val* p0) {
void* var /* : GLTextureTarget for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLTextureTarget */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glGenerateMipmap___impl(var_for_c_0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glBindBuffer for (self: Sys, GLArrayBuffer, Int) */
void glesv2___core__Sys___glBindBuffer(val* self, val* p0, long p1) {
void* var /* : GLArrayBuffer for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLArrayBuffer */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glBindBuffer___impl(var_for_c_0, var, p1);
RET_LABEL:;
}
/* method glesv2#Sys#gl_ARRAY_BUFFER for (self: Sys): GLArrayBuffer */
val* glesv2___core__Sys___gl_ARRAY_BUFFER(val* self) {
val* var /* : GLArrayBuffer */;
val* var1 /* : GLArrayBuffer */;
val* var2 /* : GLArrayBuffer */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ARRAY_BUFFER___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLArrayBuffer */
var2->type = &type_glesv2__GLArrayBuffer;
var2->class = &class_glesv2__GLArrayBuffer;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ELEMENT_ARRAY_BUFFER for (self: Sys): GLArrayBuffer */
val* glesv2___core__Sys___gl_ELEMENT_ARRAY_BUFFER(val* self) {
val* var /* : GLArrayBuffer */;
val* var1 /* : GLArrayBuffer */;
val* var2 /* : GLArrayBuffer */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ELEMENT_ARRAY_BUFFER___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLArrayBuffer */
var2->type = &type_glesv2__GLArrayBuffer;
var2->class = &class_glesv2__GLArrayBuffer;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glCheckFramebufferStatus for (self: Sys, GLFramebufferTarget): GLFramebufferStatus */
val* glesv2___core__Sys___glCheckFramebufferStatus(val* self, val* p0) {
val* var /* : GLFramebufferStatus */;
val* var1 /* : GLFramebufferStatus */;
void* var2 /* : GLFramebufferTarget for extern */;
val* var3 /* : GLFramebufferStatus */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLFramebufferTarget */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glCheckFramebufferStatus___impl(var_for_c_0, var2);
var3 = BOX_core__Pointer(var1); /* boxing GLFramebufferStatus */
var3->type = &type_glesv2__GLFramebufferStatus;
var3->class = &class_glesv2__GLFramebufferStatus;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FRAMEBUFFER_COMPLETE for (self: Sys): GLFramebufferStatus */
val* glesv2___core__Sys___gl_FRAMEBUFFER_COMPLETE(val* self) {
val* var /* : GLFramebufferStatus */;
val* var1 /* : GLFramebufferStatus */;
val* var2 /* : GLFramebufferStatus */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FRAMEBUFFER_COMPLETE___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLFramebufferStatus */
var2->type = &type_glesv2__GLFramebufferStatus;
var2->class = &class_glesv2__GLFramebufferStatus;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FRAMEBUFFER_INCOMPLETE_ATTACHMENT for (self: Sys): GLFramebufferStatus */
val* glesv2___core__Sys___gl_FRAMEBUFFER_INCOMPLETE_ATTACHMENT(val* self) {
val* var /* : GLFramebufferStatus */;
val* var1 /* : GLFramebufferStatus */;
val* var2 /* : GLFramebufferStatus */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FRAMEBUFFER_INCOMPLETE_ATTACHMENT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLFramebufferStatus */
var2->type = &type_glesv2__GLFramebufferStatus;
var2->class = &class_glesv2__GLFramebufferStatus;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FRAMEBUFFER_INCOMPLETE_DIMENSIONS for (self: Sys): GLFramebufferStatus */
val* glesv2___core__Sys___gl_FRAMEBUFFER_INCOMPLETE_DIMENSIONS(val* self) {
val* var /* : GLFramebufferStatus */;
val* var1 /* : GLFramebufferStatus */;
val* var2 /* : GLFramebufferStatus */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FRAMEBUFFER_INCOMPLETE_DIMENSIONS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLFramebufferStatus */
var2->type = &type_glesv2__GLFramebufferStatus;
var2->class = &class_glesv2__GLFramebufferStatus;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT for (self: Sys): GLFramebufferStatus */
val* glesv2___core__Sys___gl_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT(val* self) {
val* var /* : GLFramebufferStatus */;
val* var1 /* : GLFramebufferStatus */;
val* var2 /* : GLFramebufferStatus */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLFramebufferStatus */
var2->type = &type_glesv2__GLFramebufferStatus;
var2->class = &class_glesv2__GLFramebufferStatus;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FRAMEBUFFER_UNSUPPORTED for (self: Sys): GLFramebufferStatus */
val* glesv2___core__Sys___gl_FRAMEBUFFER_UNSUPPORTED(val* self) {
val* var /* : GLFramebufferStatus */;
val* var1 /* : GLFramebufferStatus */;
val* var2 /* : GLFramebufferStatus */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FRAMEBUFFER_UNSUPPORTED___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLFramebufferStatus */
var2->type = &type_glesv2__GLFramebufferStatus;
var2->class = &class_glesv2__GLFramebufferStatus;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_GENERATE_MIPMAP_HINT for (self: Sys): GLHintTarget */
val* glesv2___core__Sys___gl_GENERATE_MIPMAP_HINT(val* self) {
val* var /* : GLHintTarget */;
val* var1 /* : GLHintTarget */;
val* var2 /* : GLHintTarget */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_GENERATE_MIPMAP_HINT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLHintTarget */
var2->type = &type_glesv2__GLHintTarget;
var2->class = &class_glesv2__GLHintTarget;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FASTEST for (self: Sys): GLHintMode */
val* glesv2___core__Sys___gl_FASTEST(val* self) {
val* var /* : GLHintMode */;
val* var1 /* : GLHintMode */;
val* var2 /* : GLHintMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FASTEST___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLHintMode */
var2->type = &type_glesv2__GLHintMode;
var2->class = &class_glesv2__GLHintMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_NICEST for (self: Sys): GLHintMode */
val* glesv2___core__Sys___gl_NICEST(val* self) {
val* var /* : GLHintMode */;
val* var1 /* : GLHintMode */;
val* var2 /* : GLHintMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_NICEST___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLHintMode */
var2->type = &type_glesv2__GLHintMode;
var2->class = &class_glesv2__GLHintMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_DONT_CARE for (self: Sys): GLHintMode */
val* glesv2___core__Sys___gl_DONT_CARE(val* self) {
val* var /* : GLHintMode */;
val* var1 /* : GLHintMode */;
val* var2 /* : GLHintMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_DONT_CARE___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLHintMode */
var2->type = &type_glesv2__GLHintMode;
var2->class = &class_glesv2__GLHintMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glGenFramebuffers for (self: Sys, Int): Array[Int] */
val* glesv2___core__Sys___glGenFramebuffers(val* self, long p0) {
val* var /* : Array[Int] */;
long var_n /* var n: Int */;
val* var1 /* : CIntArray */;
val* var_array /* var array: CIntArray */;
val* var2 /* : NativeCArray */;
val* var3 /* : Array[nullable Object] */;
val* var_a /* var a: Array[Int] */;
var_n = p0;
var1 = NEW_c__CIntArray(&type_c__CIntArray);
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_c__CIntArray__init]))(var1, var_n); /* init on <var1:CIntArray>*/
}
var_array = var1;
{
var2 = ((val*(*)(val* self))(var_array->class->vft[COLOR_c__CArray__native_array]))(var_array); /* native_array on <var_array:CIntArray>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_glesv2__Sys__native_glGenFramebuffers]))(self, var_n, var2); /* native_glGenFramebuffers on <self:Sys>*/
}
{
var3 = ((val*(*)(val* self))(var_array->class->vft[COLOR_core__array__Collection__to_a]))(var_array); /* to_a on <var_array:CIntArray>*/
}
var_a = var3;
{
((void(*)(val* self))(var_array->class->vft[COLOR_c__CArray__destroy]))(var_array); /* destroy on <var_array:CIntArray>*/
}
var = var_a;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#native_glGenFramebuffers for (self: Sys, Int, NativeCIntArray) */
void glesv2___core__Sys___native_glGenFramebuffers(val* self, long p0, val* p1) {
void* var /* : NativeCIntArray for extern */;
var = ((struct instance_core__Pointer*)p1)->value; /* unboxing NativeCIntArray */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_native_glGenFramebuffers___impl(var_for_c_0, p0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glIsFramebuffer for (self: Sys, Int): Bool */
short int glesv2___core__Sys___glIsFramebuffer(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glIsFramebuffer___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glDeleteFramebuffers for (self: Sys, SequenceRead[Int]) */
void glesv2___core__Sys___glDeleteFramebuffers(val* self, val* p0) {
val* var_framebuffers /* var framebuffers: SequenceRead[Int] */;
long var /* : Int */;
long var_n /* var n: Int */;
val* var1 /* : CIntArray */;
val* var2 /* : CIntArray */;
val* var_array /* var array: CIntArray */;
val* var3 /* : NativeCArray */;
var_framebuffers = p0;
{
var = ((long(*)(val* self))((((long)var_framebuffers&3)?class_info[((long)var_framebuffers&3)]:var_framebuffers->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_framebuffers); /* length on <var_framebuffers:SequenceRead[Int]>*/
}
var_n = var;
var1 = NEW_c__CIntArray(&type_c__CIntArray);
{
var2 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_c__CIntArray__from]))(var1, var_framebuffers); /* from on <var1:CIntArray>*/
}
var_array = var2;
{
var3 = ((val*(*)(val* self))(var_array->class->vft[COLOR_c__CArray__native_array]))(var_array); /* native_array on <var_array:CIntArray>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_glesv2__Sys__native_glDeleteFramebuffers]))(self, var_n, var3); /* native_glDeleteFramebuffers on <self:Sys>*/
}
{
((void(*)(val* self))(var_array->class->vft[COLOR_c__CArray__destroy]))(var_array); /* destroy on <var_array:CIntArray>*/
}
RET_LABEL:;
}
/* method glesv2#Sys#native_glDeleteFramebuffers for (self: Sys, Int, NativeCIntArray) */
void glesv2___core__Sys___native_glDeleteFramebuffers(val* self, long p0, val* p1) {
void* var /* : NativeCIntArray for extern */;
var = ((struct instance_core__Pointer*)p1)->value; /* unboxing NativeCIntArray */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_native_glDeleteFramebuffers___impl(var_for_c_0, p0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glFramebufferTexture2D for (self: Sys, GLFramebufferTarget, GLAttachment, GLTextureTarget, Int, Int) */
void glesv2___core__Sys___glFramebufferTexture2D(val* self, val* p0, val* p1, val* p2, long p3, long p4) {
void* var /* : GLFramebufferTarget for extern */;
void* var1 /* : GLAttachment for extern */;
void* var2 /* : GLTextureTarget for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLFramebufferTarget */
var1 = ((struct instance_core__Pointer*)p1)->value; /* unboxing GLAttachment */
var2 = ((struct instance_core__Pointer*)p2)->value; /* unboxing GLTextureTarget */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glFramebufferTexture2D___impl(var_for_c_0, var, var1, var2, p3, p4);
RET_LABEL:;
}
/* method glesv2#Sys#gl_FLOAT for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_FLOAT(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FLOAT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FLOAT_VEC2 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_FLOAT_VEC2(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FLOAT_VEC2___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FLOAT_VEC3 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_FLOAT_VEC3(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FLOAT_VEC3___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FLOAT_VEC4 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_FLOAT_VEC4(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FLOAT_VEC4___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FLOAT_MAT2 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_FLOAT_MAT2(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FLOAT_MAT2___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FLOAT_MAT3 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_FLOAT_MAT3(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FLOAT_MAT3___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FLOAT_MAT4 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_FLOAT_MAT4(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FLOAT_MAT4___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_BYTE for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_BYTE(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_BYTE___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_UNSIGNED_BYTE for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_UNSIGNED_BYTE(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_UNSIGNED_BYTE___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_SHORT for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_SHORT(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_SHORT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_UNSIGNED_SHORT for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_UNSIGNED_SHORT(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_UNSIGNED_SHORT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_INT for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_INT(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_INT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_UNSIGNED_INT for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_UNSIGNED_INT(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_UNSIGNED_INT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FIXED for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_FIXED(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FIXED___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_INT_VEC2 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_INT_VEC2(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_INT_VEC2___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_INT_VEC3 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_INT_VEC3(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_INT_VEC3___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_INT_VEC4 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_INT_VEC4(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_INT_VEC4___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_BOOL for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_BOOL(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_BOOL___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_BOOL_VEC2 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_BOOL_VEC2(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_BOOL_VEC2___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_BOOL_VEC3 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_BOOL_VEC3(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_BOOL_VEC3___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_BOOL_VEC4 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_BOOL_VEC4(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_BOOL_VEC4___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_SAMPLER_2D for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_SAMPLER_95d2D(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_SAMPLER_2D___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_SAMPLER_CUBE for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_SAMPLER_CUBE(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_SAMPLER_CUBE___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_UNSIGNED_SHORT_5_6_5 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_UNSIGNED_SHORT_95d5_95d6_95d5(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_UNSIGNED_SHORT_5_6_5___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_UNSIGNED_SHORT_4_4_4_4 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_UNSIGNED_SHORT_95d4_95d4_95d4_95d4(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_UNSIGNED_SHORT_4_4_4_4___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_UNSIGNED_SHORT_5_5_5_1 for (self: Sys): GLDataType */
val* glesv2___core__Sys___gl_UNSIGNED_SHORT_95d5_95d5_95d5_95d1(val* self) {
val* var /* : GLDataType */;
val* var1 /* : GLDataType */;
val* var2 /* : GLDataType */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_UNSIGNED_SHORT_5_5_5_1___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDataType */
var2->type = &type_glesv2__GLDataType;
var2->class = &class_glesv2__GLDataType;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_POINTS for (self: Sys): GLDrawMode */
val* glesv2___core__Sys___gl_POINTS(val* self) {
val* var /* : GLDrawMode */;
val* var1 /* : GLDrawMode */;
val* var2 /* : GLDrawMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_POINTS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDrawMode */
var2->type = &type_glesv2__GLDrawMode;
var2->class = &class_glesv2__GLDrawMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_LINES for (self: Sys): GLDrawMode */
val* glesv2___core__Sys___gl_LINES(val* self) {
val* var /* : GLDrawMode */;
val* var1 /* : GLDrawMode */;
val* var2 /* : GLDrawMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_LINES___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDrawMode */
var2->type = &type_glesv2__GLDrawMode;
var2->class = &class_glesv2__GLDrawMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_LINE_LOOP for (self: Sys): GLDrawMode */
val* glesv2___core__Sys___gl_LINE_LOOP(val* self) {
val* var /* : GLDrawMode */;
val* var1 /* : GLDrawMode */;
val* var2 /* : GLDrawMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_LINE_LOOP___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDrawMode */
var2->type = &type_glesv2__GLDrawMode;
var2->class = &class_glesv2__GLDrawMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_LINE_STRIP for (self: Sys): GLDrawMode */
val* glesv2___core__Sys___gl_LINE_STRIP(val* self) {
val* var /* : GLDrawMode */;
val* var1 /* : GLDrawMode */;
val* var2 /* : GLDrawMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_LINE_STRIP___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDrawMode */
var2->type = &type_glesv2__GLDrawMode;
var2->class = &class_glesv2__GLDrawMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TRIANGLES for (self: Sys): GLDrawMode */
val* glesv2___core__Sys___gl_TRIANGLES(val* self) {
val* var /* : GLDrawMode */;
val* var1 /* : GLDrawMode */;
val* var2 /* : GLDrawMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TRIANGLES___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDrawMode */
var2->type = &type_glesv2__GLDrawMode;
var2->class = &class_glesv2__GLDrawMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TRIANGLE_STRIP for (self: Sys): GLDrawMode */
val* glesv2___core__Sys___gl_TRIANGLE_STRIP(val* self) {
val* var /* : GLDrawMode */;
val* var1 /* : GLDrawMode */;
val* var2 /* : GLDrawMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TRIANGLE_STRIP___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDrawMode */
var2->type = &type_glesv2__GLDrawMode;
var2->class = &class_glesv2__GLDrawMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_TRIANGLE_FAN for (self: Sys): GLDrawMode */
val* glesv2___core__Sys___gl_TRIANGLE_FAN(val* self) {
val* var /* : GLDrawMode */;
val* var1 /* : GLDrawMode */;
val* var2 /* : GLDrawMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_TRIANGLE_FAN___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDrawMode */
var2->type = &type_glesv2__GLDrawMode;
var2->class = &class_glesv2__GLDrawMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ZERO for (self: Sys): GLBlendFactor */
val* glesv2___core__Sys___gl_ZERO(val* self) {
val* var /* : GLBlendFactor */;
val* var1 /* : GLBlendFactor */;
val* var2 /* : GLBlendFactor */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ZERO___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBlendFactor */
var2->type = &type_glesv2__GLBlendFactor;
var2->class = &class_glesv2__GLBlendFactor;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ONE for (self: Sys): GLBlendFactor */
val* glesv2___core__Sys___gl_ONE(val* self) {
val* var /* : GLBlendFactor */;
val* var1 /* : GLBlendFactor */;
val* var2 /* : GLBlendFactor */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ONE___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBlendFactor */
var2->type = &type_glesv2__GLBlendFactor;
var2->class = &class_glesv2__GLBlendFactor;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_SRC_COLOR for (self: Sys): GLBlendFactor */
val* glesv2___core__Sys___gl_SRC_COLOR(val* self) {
val* var /* : GLBlendFactor */;
val* var1 /* : GLBlendFactor */;
val* var2 /* : GLBlendFactor */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_SRC_COLOR___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBlendFactor */
var2->type = &type_glesv2__GLBlendFactor;
var2->class = &class_glesv2__GLBlendFactor;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ONE_MINUS_SRC_COLOR for (self: Sys): GLBlendFactor */
val* glesv2___core__Sys___gl_ONE_MINUS_SRC_COLOR(val* self) {
val* var /* : GLBlendFactor */;
val* var1 /* : GLBlendFactor */;
val* var2 /* : GLBlendFactor */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ONE_MINUS_SRC_COLOR___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBlendFactor */
var2->type = &type_glesv2__GLBlendFactor;
var2->class = &class_glesv2__GLBlendFactor;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_SRC_ALPHA for (self: Sys): GLBlendFactor */
val* glesv2___core__Sys___gl_SRC_ALPHA(val* self) {
val* var /* : GLBlendFactor */;
val* var1 /* : GLBlendFactor */;
val* var2 /* : GLBlendFactor */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_SRC_ALPHA___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBlendFactor */
var2->type = &type_glesv2__GLBlendFactor;
var2->class = &class_glesv2__GLBlendFactor;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ONE_MINUS_SRC_ALPHA for (self: Sys): GLBlendFactor */
val* glesv2___core__Sys___gl_ONE_MINUS_SRC_ALPHA(val* self) {
val* var /* : GLBlendFactor */;
val* var1 /* : GLBlendFactor */;
val* var2 /* : GLBlendFactor */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ONE_MINUS_SRC_ALPHA___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBlendFactor */
var2->type = &type_glesv2__GLBlendFactor;
var2->class = &class_glesv2__GLBlendFactor;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_DST_ALPHA for (self: Sys): GLBlendFactor */
val* glesv2___core__Sys___gl_DST_ALPHA(val* self) {
val* var /* : GLBlendFactor */;
val* var1 /* : GLBlendFactor */;
val* var2 /* : GLBlendFactor */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_DST_ALPHA___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBlendFactor */
var2->type = &type_glesv2__GLBlendFactor;
var2->class = &class_glesv2__GLBlendFactor;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ONE_MINUS_DST_ALPHA for (self: Sys): GLBlendFactor */
val* glesv2___core__Sys___gl_ONE_MINUS_DST_ALPHA(val* self) {
val* var /* : GLBlendFactor */;
val* var1 /* : GLBlendFactor */;
val* var2 /* : GLBlendFactor */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ONE_MINUS_DST_ALPHA___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBlendFactor */
var2->type = &type_glesv2__GLBlendFactor;
var2->class = &class_glesv2__GLBlendFactor;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_DST_COLOR for (self: Sys): GLBlendFactor */
val* glesv2___core__Sys___gl_DST_COLOR(val* self) {
val* var /* : GLBlendFactor */;
val* var1 /* : GLBlendFactor */;
val* var2 /* : GLBlendFactor */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_DST_COLOR___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBlendFactor */
var2->type = &type_glesv2__GLBlendFactor;
var2->class = &class_glesv2__GLBlendFactor;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ONE_MINUS_DST_COLOR for (self: Sys): GLBlendFactor */
val* glesv2___core__Sys___gl_ONE_MINUS_DST_COLOR(val* self) {
val* var /* : GLBlendFactor */;
val* var1 /* : GLBlendFactor */;
val* var2 /* : GLBlendFactor */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ONE_MINUS_DST_COLOR___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBlendFactor */
var2->type = &type_glesv2__GLBlendFactor;
var2->class = &class_glesv2__GLBlendFactor;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_SRC_ALPHA_SATURATE for (self: Sys): GLBlendFactor */
val* glesv2___core__Sys___gl_SRC_ALPHA_SATURATE(val* self) {
val* var /* : GLBlendFactor */;
val* var1 /* : GLBlendFactor */;
val* var2 /* : GLBlendFactor */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_SRC_ALPHA_SATURATE___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBlendFactor */
var2->type = &type_glesv2__GLBlendFactor;
var2->class = &class_glesv2__GLBlendFactor;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_NEVER for (self: Sys): GLDepthFunc */
val* glesv2___core__Sys___gl_NEVER(val* self) {
val* var /* : GLDepthFunc */;
val* var1 /* : GLDepthFunc */;
val* var2 /* : GLDepthFunc */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_NEVER___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDepthFunc */
var2->type = &type_glesv2__GLDepthFunc;
var2->class = &class_glesv2__GLDepthFunc;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_LESS for (self: Sys): GLDepthFunc */
val* glesv2___core__Sys___gl_LESS(val* self) {
val* var /* : GLDepthFunc */;
val* var1 /* : GLDepthFunc */;
val* var2 /* : GLDepthFunc */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_LESS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDepthFunc */
var2->type = &type_glesv2__GLDepthFunc;
var2->class = &class_glesv2__GLDepthFunc;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_EQUAL for (self: Sys): GLDepthFunc */
val* glesv2___core__Sys___gl_EQUAL(val* self) {
val* var /* : GLDepthFunc */;
val* var1 /* : GLDepthFunc */;
val* var2 /* : GLDepthFunc */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_EQUAL___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDepthFunc */
var2->type = &type_glesv2__GLDepthFunc;
var2->class = &class_glesv2__GLDepthFunc;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_LEQUAL for (self: Sys): GLDepthFunc */
val* glesv2___core__Sys___gl_LEQUAL(val* self) {
val* var /* : GLDepthFunc */;
val* var1 /* : GLDepthFunc */;
val* var2 /* : GLDepthFunc */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_LEQUAL___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDepthFunc */
var2->type = &type_glesv2__GLDepthFunc;
var2->class = &class_glesv2__GLDepthFunc;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_GREATER for (self: Sys): GLDepthFunc */
val* glesv2___core__Sys___gl_GREATER(val* self) {
val* var /* : GLDepthFunc */;
val* var1 /* : GLDepthFunc */;
val* var2 /* : GLDepthFunc */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_GREATER___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDepthFunc */
var2->type = &type_glesv2__GLDepthFunc;
var2->class = &class_glesv2__GLDepthFunc;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_NOTEQUAL for (self: Sys): GLDepthFunc */
val* glesv2___core__Sys___gl_NOTEQUAL(val* self) {
val* var /* : GLDepthFunc */;
val* var1 /* : GLDepthFunc */;
val* var2 /* : GLDepthFunc */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_NOTEQUAL___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDepthFunc */
var2->type = &type_glesv2__GLDepthFunc;
var2->class = &class_glesv2__GLDepthFunc;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_GEQUAL for (self: Sys): GLDepthFunc */
val* glesv2___core__Sys___gl_GEQUAL(val* self) {
val* var /* : GLDepthFunc */;
val* var1 /* : GLDepthFunc */;
val* var2 /* : GLDepthFunc */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_GEQUAL___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDepthFunc */
var2->type = &type_glesv2__GLDepthFunc;
var2->class = &class_glesv2__GLDepthFunc;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ALWAYS for (self: Sys): GLDepthFunc */
val* glesv2___core__Sys___gl_ALWAYS(val* self) {
val* var /* : GLDepthFunc */;
val* var1 /* : GLDepthFunc */;
val* var2 /* : GLDepthFunc */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ALWAYS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLDepthFunc */
var2->type = &type_glesv2__GLDepthFunc;
var2->class = &class_glesv2__GLDepthFunc;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_ALPHA for (self: Sys): GLPixelFormat */
val* glesv2___core__Sys___gl_ALPHA(val* self) {
val* var /* : GLPixelFormat */;
val* var1 /* : GLPixelFormat */;
val* var2 /* : GLPixelFormat */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_ALPHA___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLPixelFormat */
var2->type = &type_glesv2__GLPixelFormat;
var2->class = &class_glesv2__GLPixelFormat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_RGB for (self: Sys): GLPixelFormat */
val* glesv2___core__Sys___gl_RGB(val* self) {
val* var /* : GLPixelFormat */;
val* var1 /* : GLPixelFormat */;
val* var2 /* : GLPixelFormat */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_RGB___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLPixelFormat */
var2->type = &type_glesv2__GLPixelFormat;
var2->class = &class_glesv2__GLPixelFormat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_RGBA for (self: Sys): GLPixelFormat */
val* glesv2___core__Sys___gl_RGBA(val* self) {
val* var /* : GLPixelFormat */;
val* var1 /* : GLPixelFormat */;
val* var2 /* : GLPixelFormat */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_RGBA___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLPixelFormat */
var2->type = &type_glesv2__GLPixelFormat;
var2->class = &class_glesv2__GLPixelFormat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_DEPTH_BUFFER_BIT for (self: Sys): GLBuffer */
val* glesv2___core__Sys___gl_DEPTH_BUFFER_BIT(val* self) {
val* var /* : GLBuffer */;
val* var1 /* : GLBuffer */;
val* var2 /* : GLBuffer */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_DEPTH_BUFFER_BIT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBuffer */
var2->type = &type_glesv2__GLBuffer;
var2->class = &class_glesv2__GLBuffer;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_STENCIL_BUFFER_BIT for (self: Sys): GLBuffer */
val* glesv2___core__Sys___gl_STENCIL_BUFFER_BIT(val* self) {
val* var /* : GLBuffer */;
val* var1 /* : GLBuffer */;
val* var2 /* : GLBuffer */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_STENCIL_BUFFER_BIT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBuffer */
var2->type = &type_glesv2__GLBuffer;
var2->class = &class_glesv2__GLBuffer;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_COLOR_BUFFER_BIT for (self: Sys): GLBuffer */
val* glesv2___core__Sys___gl_COLOR_BUFFER_BIT(val* self) {
val* var /* : GLBuffer */;
val* var1 /* : GLBuffer */;
val* var2 /* : GLBuffer */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_COLOR_BUFFER_BIT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLBuffer */
var2->type = &type_glesv2__GLBuffer;
var2->class = &class_glesv2__GLBuffer;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glFrontFace for (self: Sys, GLFrontFaceMode) */
void glesv2___core__Sys___glFrontFace(val* self, val* p0) {
void* var /* : GLFrontFaceMode for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLFrontFaceMode */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glFrontFace___impl(var_for_c_0, var);
RET_LABEL:;
}
/* method glesv2#Sys#gl_CW for (self: Sys): GLFrontFaceMode */
val* glesv2___core__Sys___gl_CW(val* self) {
val* var /* : GLFrontFaceMode */;
val* var1 /* : GLFrontFaceMode */;
val* var2 /* : GLFrontFaceMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_CW___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLFrontFaceMode */
var2->type = &type_glesv2__GLFrontFaceMode;
var2->class = &class_glesv2__GLFrontFaceMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_CCW for (self: Sys): GLFrontFaceMode */
val* glesv2___core__Sys___gl_CCW(val* self) {
val* var /* : GLFrontFaceMode */;
val* var1 /* : GLFrontFaceMode */;
val* var2 /* : GLFrontFaceMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_CCW___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLFrontFaceMode */
var2->type = &type_glesv2__GLFrontFaceMode;
var2->class = &class_glesv2__GLFrontFaceMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glCullFace for (self: Sys, GLCullFaceMode) */
void glesv2___core__Sys___glCullFace(val* self, val* p0) {
void* var /* : GLCullFaceMode for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLCullFaceMode */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glCullFace___impl(var_for_c_0, var);
RET_LABEL:;
}
/* method glesv2#Sys#gl_FRONT for (self: Sys): GLCullFaceMode */
val* glesv2___core__Sys___gl_FRONT(val* self) {
val* var /* : GLCullFaceMode */;
val* var1 /* : GLCullFaceMode */;
val* var2 /* : GLCullFaceMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FRONT___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLCullFaceMode */
var2->type = &type_glesv2__GLCullFaceMode;
var2->class = &class_glesv2__GLCullFaceMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_BACK for (self: Sys): GLCullFaceMode */
val* glesv2___core__Sys___gl_BACK(val* self) {
val* var /* : GLCullFaceMode */;
val* var1 /* : GLCullFaceMode */;
val* var2 /* : GLCullFaceMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_BACK___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLCullFaceMode */
var2->type = &type_glesv2__GLCullFaceMode;
var2->class = &class_glesv2__GLCullFaceMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_FRONT_AND_BACK for (self: Sys): GLCullFaceMode */
val* glesv2___core__Sys___gl_FRONT_AND_BACK(val* self) {
val* var /* : GLCullFaceMode */;
val* var1 /* : GLCullFaceMode */;
val* var2 /* : GLCullFaceMode */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_FRONT_AND_BACK___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLCullFaceMode */
var2->type = &type_glesv2__GLCullFaceMode;
var2->class = &class_glesv2__GLCullFaceMode;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glDepthRangef for (self: Sys, Float, Float) */
void glesv2___core__Sys___glDepthRangef(val* self, double p0, double p1) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glDepthRangef___impl(var_for_c_0, p0, p1);
RET_LABEL:;
}
/* method glesv2#Sys#glDepthMask for (self: Sys, Bool) */
void glesv2___core__Sys___glDepthMask(val* self, short int p0) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glDepthMask___impl(var_for_c_0, p0);
RET_LABEL:;
}
/* method glesv2#Sys#glDepthFunc for (self: Sys, GLDepthFunc) */
void glesv2___core__Sys___glDepthFunc(val* self, val* p0) {
void* var /* : GLDepthFunc for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLDepthFunc */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glDepthFunc___impl(var_for_c_0, var);
RET_LABEL:;
}
/* method glesv2#Sys#glBlendFunc for (self: Sys, GLBlendFactor, GLBlendFactor) */
void glesv2___core__Sys___glBlendFunc(val* self, val* p0, val* p1) {
void* var /* : GLBlendFactor for extern */;
void* var1 /* : GLBlendFactor for extern */;
var = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLBlendFactor */
var1 = ((struct instance_core__Pointer*)p1)->value; /* unboxing GLBlendFactor */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glBlendFunc___impl(var_for_c_0, var, var1);
RET_LABEL:;
}
/* method glesv2#Sys#glPolygonOffset for (self: Sys, Float, Float) */
void glesv2___core__Sys___glPolygonOffset(val* self, double p0, double p1) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glPolygonOffset___impl(var_for_c_0, p0, p1);
RET_LABEL:;
}
/* method glesv2#Sys#glLineWidth for (self: Sys, Float) */
void glesv2___core__Sys___glLineWidth(val* self, double p0) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
glesv2___Sys_glLineWidth___impl(var_for_c_0, p0);
RET_LABEL:;
}
/* method glesv2#Sys#glGetBooleanv for (self: Sys, GLGetParameterName): Bool */
short int glesv2___core__Sys___glGetBooleanv(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : GLGetParameterName for extern */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLGetParameterName */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glGetBooleanv___impl(var_for_c_0, var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glGetFloatv for (self: Sys, GLGetParameterName): Float */
double glesv2___core__Sys___glGetFloatv(val* self, val* p0) {
double var /* : Float */;
double var1 /* : Float */;
void* var2 /* : GLGetParameterName for extern */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLGetParameterName */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glGetFloatv___impl(var_for_c_0, var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#glGetIntegerv for (self: Sys, GLGetParameterName): Int */
long glesv2___core__Sys___glGetIntegerv(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : GLGetParameterName for extern */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLGetParameterName */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_glGetIntegerv___impl(var_for_c_0, var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_MAX_TEXTURE_SIZE for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_MAX_TEXTURE_SIZE(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_MAX_TEXTURE_SIZE___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_MAX_VIEWPORT_DIMS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_MAX_VIEWPORT_DIMS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_MAX_VIEWPORT_DIMS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_MAX_VERTEX_ATTRIBS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_MAX_VERTEX_ATTRIBS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_MAX_VERTEX_ATTRIBS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_MAX_VERTEX_UNIFORM_VECTORS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_MAX_VERTEX_UNIFORM_VECTORS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_MAX_VERTEX_UNIFORM_VECTORS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_MAX_VARYING_VECTORS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_MAX_VARYING_VECTORS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_MAX_VARYING_VECTORS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_MAX_COMBINED_TEXTURE_IMAGE_UNITS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_MAX_COMBINED_TEXTURE_IMAGE_UNITS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_MAX_COMBINED_TEXTURE_IMAGE_UNITS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_MAX_VERTEX_TEXTURE_IMAGE_UNITS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_MAX_VERTEX_TEXTURE_IMAGE_UNITS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_MAX_VERTEX_TEXTURE_IMAGE_UNITS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_MAX_TEXTURE_IMAGE_UNITS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_MAX_TEXTURE_IMAGE_UNITS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_MAX_TEXTURE_IMAGE_UNITS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#Sys#gl_MAX_FRAGMENT_UNIFORM_VECTORS for (self: Sys): GLGetParameterName */
val* glesv2___core__Sys___gl_MAX_FRAGMENT_UNIFORM_VECTORS(val* self) {
val* var /* : GLGetParameterName */;
val* var1 /* : GLGetParameterName */;
val* var2 /* : GLGetParameterName */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___Sys_gl_MAX_FRAGMENT_UNIFORM_VECTORS___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing GLGetParameterName */
var2->type = &type_glesv2__GLGetParameterName;
var2->class = &class_glesv2__GLGetParameterName;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLES#get_bool for (self: GLES, Int): Bool */
short int glesv2___glesv2__GLES___get_bool(val* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___GLES_get_bool___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLES#get_float for (self: GLES, Int): Float */
double glesv2___glesv2__GLES___get_float(val* self, long p0) {
double var /* : Float */;
double var1 /* : Float */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___GLES_get_float___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLES#get_int for (self: GLES, Int): Int */
long glesv2___glesv2__GLES___get_int(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = glesv2___GLES_get_int___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLES#shader_compiler for (self: GLES): Bool */
short int glesv2___glesv2__GLES___shader_compiler(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
{
var1 = ((short int(*)(val* self, long p0))(self->class->vft[COLOR_glesv2__GLES__get_bool]))(self, 36346l); /* get_bool on <self:GLES>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLES#capabilities for (self: GLES): GLCapabilities */
val* glesv2___glesv2__GLES___capabilities(val* self) {
val* var /* : GLCapabilities */;
short int var1 /* : Bool */;
val* var2 /* : GLCapabilities */;
val* var3 /* : GLCapabilities */;
var1 = self->attrs[COLOR_glesv2__GLES___capabilities].val != NULL; /* _capabilities on <self:GLES> */
if(likely(var1)) {
var2 = self->attrs[COLOR_glesv2__GLES___capabilities].val; /* _capabilities on <self:GLES> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _capabilities");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 796);
fatal_exit(1);
}
} else {
var3 = NEW_glesv2__GLCapabilities(&type_glesv2__GLCapabilities);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:GLCapabilities>*/
}
self->attrs[COLOR_glesv2__GLES___capabilities].val = var3; /* _capabilities on <self:GLES> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method glesv2#GLES#capabilities= for (self: GLES, GLCapabilities) */
void glesv2___glesv2__GLES___capabilities_61d(val* self, val* p0) {
self->attrs[COLOR_glesv2__GLES___capabilities].val = p0; /* _capabilities on <self:GLES> */
RET_LABEL:;
}
/* method glesv2#GLFramebufferStatus#to_s for (self: GLFramebufferStatus): String */
val* glesv2___glesv2__GLFramebufferStatus___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Sys */;
val* var2 /* : GLFramebufferStatus */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : Sys */;
val* var8 /* : GLFramebufferStatus */;
short int var9 /* : Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
val* var14 /* : Sys */;
val* var15 /* : GLFramebufferStatus */;
short int var16 /* : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : Sys */;
val* var22 /* : GLFramebufferStatus */;
short int var23 /* : Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : Sys */;
val* var29 /* : GLFramebufferStatus */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_glesv2__Sys__gl_FRAMEBUFFER_COMPLETE]))(var1); /* gl_FRAMEBUFFER_COMPLETE on <var1:Sys>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var2); /* == on <self:GLFramebufferStatus>*/
}
if (var3){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "complete";
var6 = core__flat___NativeString___to_s_full(var5, 8l, 8l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
var7 = glob_sys;
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_glesv2__Sys__gl_FRAMEBUFFER_INCOMPLETE_ATTACHMENT]))(var7); /* gl_FRAMEBUFFER_INCOMPLETE_ATTACHMENT on <var7:Sys>*/
}
{
var9 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var8); /* == on <self:GLFramebufferStatus>*/
}
if (var9){
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "incomplete attachment";
var13 = core__flat___NativeString___to_s_full(var12, 21l, 21l);
var11 = var13;
varonce10 = var11;
}
var = var11;
goto RET_LABEL;
} else {
}
var14 = glob_sys;
{
var15 = ((val*(*)(val* self))(var14->class->vft[COLOR_glesv2__Sys__gl_FRAMEBUFFER_INCOMPLETE_DIMENSIONS]))(var14); /* gl_FRAMEBUFFER_INCOMPLETE_DIMENSIONS on <var14:Sys>*/
}
{
var16 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var15); /* == on <self:GLFramebufferStatus>*/
}
if (var16){
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "incomplete dimension";
var20 = core__flat___NativeString___to_s_full(var19, 20l, 20l);
var18 = var20;
varonce17 = var18;
}
var = var18;
goto RET_LABEL;
} else {
}
var21 = glob_sys;
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_glesv2__Sys__gl_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT]))(var21); /* gl_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT on <var21:Sys>*/
}
{
var23 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var22); /* == on <self:GLFramebufferStatus>*/
}
if (var23){
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "incomplete missing attachment";
var27 = core__flat___NativeString___to_s_full(var26, 29l, 29l);
var25 = var27;
varonce24 = var25;
}
var = var25;
goto RET_LABEL;
} else {
}
var28 = glob_sys;
{
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_glesv2__Sys__gl_FRAMEBUFFER_UNSUPPORTED]))(var28); /* gl_FRAMEBUFFER_UNSUPPORTED on <var28:Sys>*/
}
{
var30 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var29); /* == on <self:GLFramebufferStatus>*/
}
if (var30){
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "unsupported";
var34 = core__flat___NativeString___to_s_full(var33, 11l, 11l);
var32 = var34;
varonce31 = var32;
}
var = var32;
goto RET_LABEL;
} else {
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "unknown";
var38 = core__flat___NativeString___to_s_full(var37, 7l, 7l);
var36 = var38;
varonce35 = var36;
}
var = var36;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glesv2#GLCapabilities#blend for (self: GLCapabilities): GLCap */
val* glesv2___glesv2__GLCapabilities___blend(val* self) {
val* var /* : GLCap */;
short int var1 /* : Bool */;
val* var2 /* : GLCap */;
val* var3 /* : GLCap */;
val* var5 /* : GLCap */;
var1 = self->attrs[COLOR_glesv2__GLCapabilities___blend].val != NULL; /* _blend on <self:GLCapabilities> */
if(likely(var1)) {
var2 = self->attrs[COLOR_glesv2__GLCapabilities___blend].val; /* _blend on <self:GLCapabilities> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _blend");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 1001);
fatal_exit(1);
}
} else {
{
var5 = NEW_glesv2__GLCap(&type_glesv2__GLCap);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_glesv2__GLCap__val_61d]))(var5, 3042l); /* val= on <var5:GLCap>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:GLCap>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_glesv2__GLCapabilities___blend].val = var3; /* _blend on <self:GLCapabilities> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method glesv2#GLCapabilities#blend= for (self: GLCapabilities, GLCap) */
void glesv2___glesv2__GLCapabilities___blend_61d(val* self, val* p0) {
self->attrs[COLOR_glesv2__GLCapabilities___blend].val = p0; /* _blend on <self:GLCapabilities> */
RET_LABEL:;
}
/* method glesv2#GLCapabilities#cull_face for (self: GLCapabilities): GLCap */
val* glesv2___glesv2__GLCapabilities___cull_face(val* self) {
val* var /* : GLCap */;
short int var1 /* : Bool */;
val* var2 /* : GLCap */;
val* var3 /* : GLCap */;
val* var5 /* : GLCap */;
var1 = self->attrs[COLOR_glesv2__GLCapabilities___cull_face].val != NULL; /* _cull_face on <self:GLCapabilities> */
if(likely(var1)) {
var2 = self->attrs[COLOR_glesv2__GLCapabilities___cull_face].val; /* _cull_face on <self:GLCapabilities> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cull_face");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 1006);
fatal_exit(1);
}
} else {
{
var5 = NEW_glesv2__GLCap(&type_glesv2__GLCap);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_glesv2__GLCap__val_61d]))(var5, 2884l); /* val= on <var5:GLCap>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:GLCap>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_glesv2__GLCapabilities___cull_face].val = var3; /* _cull_face on <self:GLCapabilities> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method glesv2#GLCapabilities#cull_face= for (self: GLCapabilities, GLCap) */
void glesv2___glesv2__GLCapabilities___cull_face_61d(val* self, val* p0) {
self->attrs[COLOR_glesv2__GLCapabilities___cull_face].val = p0; /* _cull_face on <self:GLCapabilities> */
RET_LABEL:;
}
/* method glesv2#GLCapabilities#depth_test for (self: GLCapabilities): GLCap */
val* glesv2___glesv2__GLCapabilities___depth_test(val* self) {
val* var /* : GLCap */;
short int var1 /* : Bool */;
val* var2 /* : GLCap */;
val* var3 /* : GLCap */;
val* var5 /* : GLCap */;
var1 = self->attrs[COLOR_glesv2__GLCapabilities___depth_test].val != NULL; /* _depth_test on <self:GLCapabilities> */
if(likely(var1)) {
var2 = self->attrs[COLOR_glesv2__GLCapabilities___depth_test].val; /* _depth_test on <self:GLCapabilities> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _depth_test");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 1011);
fatal_exit(1);
}
} else {
{
var5 = NEW_glesv2__GLCap(&type_glesv2__GLCap);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_glesv2__GLCap__val_61d]))(var5, 2929l); /* val= on <var5:GLCap>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:GLCap>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_glesv2__GLCapabilities___depth_test].val = var3; /* _depth_test on <self:GLCapabilities> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method glesv2#GLCapabilities#depth_test= for (self: GLCapabilities, GLCap) */
void glesv2___glesv2__GLCapabilities___depth_test_61d(val* self, val* p0) {
self->attrs[COLOR_glesv2__GLCapabilities___depth_test].val = p0; /* _depth_test on <self:GLCapabilities> */
RET_LABEL:;
}
/* method glesv2#GLCapabilities#dither for (self: GLCapabilities): GLCap */
val* glesv2___glesv2__GLCapabilities___dither(val* self) {
val* var /* : GLCap */;
short int var1 /* : Bool */;
val* var2 /* : GLCap */;
val* var3 /* : GLCap */;
val* var5 /* : GLCap */;
var1 = self->attrs[COLOR_glesv2__GLCapabilities___dither].val != NULL; /* _dither on <self:GLCapabilities> */
if(likely(var1)) {
var2 = self->attrs[COLOR_glesv2__GLCapabilities___dither].val; /* _dither on <self:GLCapabilities> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dither");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 1016);
fatal_exit(1);
}
} else {
{
var5 = NEW_glesv2__GLCap(&type_glesv2__GLCap);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_glesv2__GLCap__val_61d]))(var5, 3042l); /* val= on <var5:GLCap>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:GLCap>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_glesv2__GLCapabilities___dither].val = var3; /* _dither on <self:GLCapabilities> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method glesv2#GLCapabilities#dither= for (self: GLCapabilities, GLCap) */
void glesv2___glesv2__GLCapabilities___dither_61d(val* self, val* p0) {
self->attrs[COLOR_glesv2__GLCapabilities___dither].val = p0; /* _dither on <self:GLCapabilities> */
RET_LABEL:;
}
/* method glesv2#GLCapabilities#polygon_offset_fill for (self: GLCapabilities): GLCap */
val* glesv2___glesv2__GLCapabilities___polygon_offset_fill(val* self) {
val* var /* : GLCap */;
short int var1 /* : Bool */;
val* var2 /* : GLCap */;
val* var3 /* : GLCap */;
val* var5 /* : GLCap */;
var1 = self->attrs[COLOR_glesv2__GLCapabilities___polygon_offset_fill].val != NULL; /* _polygon_offset_fill on <self:GLCapabilities> */
if(likely(var1)) {
var2 = self->attrs[COLOR_glesv2__GLCapabilities___polygon_offset_fill].val; /* _polygon_offset_fill on <self:GLCapabilities> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _polygon_offset_fill");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 1021);
fatal_exit(1);
}
} else {
{
var5 = NEW_glesv2__GLCap(&type_glesv2__GLCap);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_glesv2__GLCap__val_61d]))(var5, 32823l); /* val= on <var5:GLCap>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:GLCap>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_glesv2__GLCapabilities___polygon_offset_fill].val = var3; /* _polygon_offset_fill on <self:GLCapabilities> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method glesv2#GLCapabilities#polygon_offset_fill= for (self: GLCapabilities, GLCap) */
void glesv2___glesv2__GLCapabilities___polygon_offset_fill_61d(val* self, val* p0) {
self->attrs[COLOR_glesv2__GLCapabilities___polygon_offset_fill].val = p0; /* _polygon_offset_fill on <self:GLCapabilities> */
RET_LABEL:;
}
/* method glesv2#GLCapabilities#sample_alpha_to_coverage for (self: GLCapabilities): GLCap */
val* glesv2___glesv2__GLCapabilities___sample_alpha_to_coverage(val* self) {
val* var /* : GLCap */;
short int var1 /* : Bool */;
val* var2 /* : GLCap */;
val* var3 /* : GLCap */;
val* var5 /* : GLCap */;
var1 = self->attrs[COLOR_glesv2__GLCapabilities___sample_alpha_to_coverage].val != NULL; /* _sample_alpha_to_coverage on <self:GLCapabilities> */
if(likely(var1)) {
var2 = self->attrs[COLOR_glesv2__GLCapabilities___sample_alpha_to_coverage].val; /* _sample_alpha_to_coverage on <self:GLCapabilities> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sample_alpha_to_coverage");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 1026);
fatal_exit(1);
}
} else {
{
var5 = NEW_glesv2__GLCap(&type_glesv2__GLCap);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_glesv2__GLCap__val_61d]))(var5, 32926l); /* val= on <var5:GLCap>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:GLCap>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_glesv2__GLCapabilities___sample_alpha_to_coverage].val = var3; /* _sample_alpha_to_coverage on <self:GLCapabilities> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method glesv2#GLCapabilities#sample_alpha_to_coverage= for (self: GLCapabilities, GLCap) */
void glesv2___glesv2__GLCapabilities___sample_alpha_to_coverage_61d(val* self, val* p0) {
self->attrs[COLOR_glesv2__GLCapabilities___sample_alpha_to_coverage].val = p0; /* _sample_alpha_to_coverage on <self:GLCapabilities> */
RET_LABEL:;
}
/* method glesv2#GLCapabilities#sample_coverage for (self: GLCapabilities): GLCap */
val* glesv2___glesv2__GLCapabilities___sample_coverage(val* self) {
val* var /* : GLCap */;
short int var1 /* : Bool */;
val* var2 /* : GLCap */;
val* var3 /* : GLCap */;
val* var5 /* : GLCap */;
var1 = self->attrs[COLOR_glesv2__GLCapabilities___sample_coverage].val != NULL; /* _sample_coverage on <self:GLCapabilities> */
if(likely(var1)) {
var2 = self->attrs[COLOR_glesv2__GLCapabilities___sample_coverage].val; /* _sample_coverage on <self:GLCapabilities> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sample_coverage");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 1031);
fatal_exit(1);
}
} else {
{
var5 = NEW_glesv2__GLCap(&type_glesv2__GLCap);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_glesv2__GLCap__val_61d]))(var5, 32928l); /* val= on <var5:GLCap>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:GLCap>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_glesv2__GLCapabilities___sample_coverage].val = var3; /* _sample_coverage on <self:GLCapabilities> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method glesv2#GLCapabilities#sample_coverage= for (self: GLCapabilities, GLCap) */
void glesv2___glesv2__GLCapabilities___sample_coverage_61d(val* self, val* p0) {
self->attrs[COLOR_glesv2__GLCapabilities___sample_coverage].val = p0; /* _sample_coverage on <self:GLCapabilities> */
RET_LABEL:;
}
/* method glesv2#GLCapabilities#scissor_test for (self: GLCapabilities): GLCap */
val* glesv2___glesv2__GLCapabilities___scissor_test(val* self) {
val* var /* : GLCap */;
short int var1 /* : Bool */;
val* var2 /* : GLCap */;
val* var3 /* : GLCap */;
val* var5 /* : GLCap */;
var1 = self->attrs[COLOR_glesv2__GLCapabilities___scissor_test].val != NULL; /* _scissor_test on <self:GLCapabilities> */
if(likely(var1)) {
var2 = self->attrs[COLOR_glesv2__GLCapabilities___scissor_test].val; /* _scissor_test on <self:GLCapabilities> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scissor_test");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 1036);
fatal_exit(1);
}
} else {
{
var5 = NEW_glesv2__GLCap(&type_glesv2__GLCap);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_glesv2__GLCap__val_61d]))(var5, 3089l); /* val= on <var5:GLCap>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:GLCap>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_glesv2__GLCapabilities___scissor_test].val = var3; /* _scissor_test on <self:GLCapabilities> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method glesv2#GLCapabilities#scissor_test= for (self: GLCapabilities, GLCap) */
void glesv2___glesv2__GLCapabilities___scissor_test_61d(val* self, val* p0) {
self->attrs[COLOR_glesv2__GLCapabilities___scissor_test].val = p0; /* _scissor_test on <self:GLCapabilities> */
RET_LABEL:;
}
/* method glesv2#GLCapabilities#stencil_test for (self: GLCapabilities): GLCap */
val* glesv2___glesv2__GLCapabilities___stencil_test(val* self) {
val* var /* : GLCap */;
short int var1 /* : Bool */;
val* var2 /* : GLCap */;
val* var3 /* : GLCap */;
val* var5 /* : GLCap */;
var1 = self->attrs[COLOR_glesv2__GLCapabilities___stencil_test].val != NULL; /* _stencil_test on <self:GLCapabilities> */
if(likely(var1)) {
var2 = self->attrs[COLOR_glesv2__GLCapabilities___stencil_test].val; /* _stencil_test on <self:GLCapabilities> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stencil_test");
PRINT_ERROR(" (%s:%d)\n", FILE_glesv2, 1041);
fatal_exit(1);
}
} else {
{
var5 = NEW_glesv2__GLCap(&type_glesv2__GLCap);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_glesv2__GLCap__val_61d]))(var5, 2960l); /* val= on <var5:GLCap>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:GLCap>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_glesv2__GLCapabilities___stencil_test].val = var3; /* _stencil_test on <self:GLCapabilities> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method glesv2#GLCapabilities#stencil_test= for (self: GLCapabilities, GLCap) */
void glesv2___glesv2__GLCapabilities___stencil_test_61d(val* self, val* p0) {
self->attrs[COLOR_glesv2__GLCapabilities___stencil_test].val = p0; /* _stencil_test on <self:GLCapabilities> */
RET_LABEL:;
}
/* method glesv2#GLBuffer#| for (self: GLBuffer, GLBuffer): GLBuffer */
val* glesv2___glesv2__GLBuffer____124d(val* self, val* p0) {
val* var /* : GLBuffer */;
val* var1 /* : GLBuffer */;
void* var2 /* : GLBuffer for extern */;
void* var3 /* : GLBuffer for extern */;
val* var4 /* : GLBuffer */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing GLBuffer */
var3 = ((struct instance_core__Pointer*)p0)->value; /* unboxing GLBuffer */
var1 = glesv2___GLBuffer__pipe___impl(var2, var3);
var4 = BOX_core__Pointer(var1); /* boxing GLBuffer */
var4->type = &type_glesv2__GLBuffer;
var4->class = &class_glesv2__GLBuffer;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
