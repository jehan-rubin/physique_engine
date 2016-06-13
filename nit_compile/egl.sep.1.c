#include "egl.sep.0.h"
/* method egl#EGLNativeDisplayType#from_x11 for (self: EGLNativeDisplayType, Pointer): EGLNativeDisplayType */
val* egl___egl__EGLNativeDisplayType___from_x11(val* self, val* p0) {
val* var /* : EGLNativeDisplayType */;
val* var1 /* : EGLNativeDisplayType */;
void* var2 /* : Pointer for extern */;
val* var3 /* : EGLNativeDisplayType */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing Pointer */
var1 = egl___new_EGLNativeDisplayType_from_x11___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing EGLNativeDisplayType */
var3->type = &type_egl__EGLNativeDisplayType;
var3->class = &class_egl__EGLNativeDisplayType;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#current for (self: EGLDisplay): EGLDisplay */
val* egl___egl__EGLDisplay___current(val* self) {
val* var /* : EGLDisplay */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLDisplay */;
var1 = egl___new_EGLDisplay_current___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLDisplay */
var2->type = &type_egl__EGLDisplay;
var2->class = &class_egl__EGLDisplay;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#new for (self: EGLDisplay, Pointer): EGLDisplay */
val* egl___egl__EGLDisplay___new(val* self, val* p0) {
val* var /* : EGLDisplay */;
val* var1 /* : EGLDisplay */;
void* var2 /* : Pointer for extern */;
val* var3 /* : EGLDisplay */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing Pointer */
var1 = egl___new_EGLDisplay___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing EGLDisplay */
var3->type = &type_egl__EGLDisplay;
var3->class = &class_egl__EGLDisplay;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#is_valid for (self: EGLDisplay): Bool */
short int egl___egl__EGLDisplay___is_valid(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var1 = egl___EGLDisplay_is_valid___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#initialize for (self: EGLDisplay): Bool */
short int egl___egl__EGLDisplay___initialize(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var1 = egl___EGLDisplay_initialize___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#major_version for (self: EGLDisplay): Int */
long egl___egl__EGLDisplay___major_version(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : EGLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var1 = egl___EGLDisplay_major_version___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#minor_version for (self: EGLDisplay): Int */
long egl___egl__EGLDisplay___minor_version(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : EGLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var1 = egl___EGLDisplay_minor_version___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#choose_configs for (self: EGLDisplay, Array[Int]): nullable Array[EGLConfig] */
val* egl___egl__EGLDisplay___choose_configs(val* self, val* p0) {
val* var /* : nullable Array[EGLConfig] */;
val* var1 /* : nullable Array[EGLConfig] */;
void* var2 /* : EGLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
struct nitni_instance* var_for_c_1;
var_for_c_1 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
struct nitni_instance* ret_var;
ret_var = egl___EGLDisplay_choose_configs___impl(var2, var_for_c_1);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
struct nitni_instance * NIT_NULL___null_Array_of_EGLConfig() {
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = NULL;
return ret_for_c;
}
/* nitni callback for core::Collection::length */
long egl___Array_of_Int_length( struct nitni_instance * self ) {
long var /* : Int */;
{
var = ((long(*)(val* self))(self->value->class->vft[COLOR_core__abstract_collection__Collection__length]))(self->value); /* length on <self->value:Array[Int]>*/
}
return var;
}
/* nitni callback for core::SequenceRead::[] */
long egl___Array_of_Int__index( struct nitni_instance * self, long index ) {
val* var /* : nullable Object */;
long var1 /* : Int */;
{
var = ((val*(*)(val* self, long p0))(self->value->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self->value, index); /* [] on <self->value:Array[Int]>*/
}
var1 = (long)(var)>>2;
return var1;
}
/* nitni callback for core::Object::init */
struct nitni_instance * egl___new_Array_of_EGLConfig(  ) {
val* var /* : Array[EGLConfig] */;
var = NEW_core__Array(&type_core__Array__egl__EGLConfig);
val* self /* var self: Array[EGLConfig] */;
self = var;
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Array[EGLConfig]>*/
}
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var;
return ret_for_c;
}
/* nitni callback for core::SimpleCollection::add */
void egl___Array_of_EGLConfig_add( struct nitni_instance * self, void* item ) {
val* var /* : EGLConfig */;
var = BOX_core__Pointer(item); /* boxing EGLConfig */
var->type = &type_egl__EGLConfig;
var->class = &class_egl__EGLConfig;
{
((void(*)(val* self, val* p0))(self->value->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(self->value, var); /* add on <self->value:Array[EGLConfig]>*/
}
}
/* nitni callback for egl::EGLDisplay::report_egl_error */
void egl___EGLDisplay_report_egl_error( void* self, char* cmsg ) {
val* var /* : EGLDisplay */;
var = BOX_core__Pointer(self); /* boxing EGLDisplay */
var->type = &type_egl__EGLDisplay;
var->class = &class_egl__EGLDisplay;
{
((void(*)(val* self, char* p0))(var->class->vft[COLOR_egl__EGLDisplay__report_egl_error]))(var, cmsg); /* report_egl_error on <var:EGLDisplay>*/
}
}
/* nitni check for Array[EGLConfig] to nullable Array[EGLConfig] */
int egl___Array_of_EGLConfig_is_a_nullable_Array_of_EGLConfig(struct nitni_instance * from) {
short int var /* : Bool */;
int cltype;
int idtype;
/* <from->value:Array[EGLConfig]> isa nullable Array[EGLConfig] */
var = 1; /* easy <from->value:Array[EGLConfig]> isa nullable Array[EGLConfig]*/
return var;
}
/* nitni cast for Array[EGLConfig] to nullable Array[EGLConfig] */
struct nitni_instance * egl___Array_of_EGLConfig_as_nullable_Array_of_EGLConfig(struct nitni_instance * from) {
short int var /* : Bool */;
int cltype;
int idtype;
/* <from->value:Array[EGLConfig]> isa nullable Array[EGLConfig] */
var = 1; /* easy <from->value:Array[EGLConfig]> isa nullable Array[EGLConfig]*/
if (!var) {
PRINT_ERROR("Runtime error: %s", "FFI cast failed");
PRINT_ERROR("\n");
fatal_exit(1);
}
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = from->value;
return ret_for_c;
}
/* method egl#EGLDisplay#report_egl_error for (self: EGLDisplay, NativeString) */
void egl___egl__EGLDisplay___report_egl_error(val* self, char* p0) {
char* var_cmsg /* var cmsg: NativeString */;
val* var /* : String */;
val* var_msg /* var msg: String */;
val* var1 /* : Sys */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : String */;
var_cmsg = p0;
var = core__flat___NativeString___core__abstract_text__Object__to_s(var_cmsg);
var_msg = var;
var1 = glob_sys;
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "libEGL error: ";
var6 = core__flat___NativeString___to_s_full(var5, 14l, 14l);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[0]=var4;
} else {
var2 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var2)->values[1]=var_msg;
{
var7 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__Sys__print]))(var1, var7); /* print on <var1:Sys>*/
}
RET_LABEL:;
}
/* method egl#EGLDisplay#config_attrib for (self: EGLDisplay, EGLConfig, Int): Int */
long egl___egl__EGLDisplay___config_attrib(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : EGLDisplay for extern */;
void* var3 /* : EGLConfig for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var3 = ((struct instance_core__Pointer*)p0)->value; /* unboxing EGLConfig */
var1 = egl___EGLDisplay_config_attrib___impl(var2, var3, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#terminate for (self: EGLDisplay): Bool */
short int egl___egl__EGLDisplay___terminate(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var1 = egl___EGLDisplay_terminate___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#create_window_surface for (self: EGLDisplay, EGLConfig, Pointer, Array[Int]): EGLSurface */
val* egl___egl__EGLDisplay___create_window_surface(val* self, val* p0, val* p1, val* p2) {
val* var /* : EGLSurface */;
val* var1 /* : EGLSurface */;
void* var2 /* : EGLDisplay for extern */;
void* var3 /* : EGLConfig for extern */;
void* var4 /* : Pointer for extern */;
val* var5 /* : EGLSurface */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var3 = ((struct instance_core__Pointer*)p0)->value; /* unboxing EGLConfig */
var4 = ((struct instance_core__Pointer*)p1)->value; /* unboxing Pointer */
struct nitni_instance* var_for_c_3;
var_for_c_3 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_3->value = p2;
var1 = egl___EGLDisplay_create_window_surface___impl(var2, var3, var4, var_for_c_3);
var5 = BOX_core__Pointer(var1); /* boxing EGLSurface */
var5->type = &type_egl__EGLSurface;
var5->class = &class_egl__EGLSurface;
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#create_context for (self: EGLDisplay, EGLConfig): EGLContext */
val* egl___egl__EGLDisplay___create_context(val* self, val* p0) {
val* var /* : EGLContext */;
val* var1 /* : EGLContext */;
void* var2 /* : EGLDisplay for extern */;
void* var3 /* : EGLConfig for extern */;
val* var4 /* : EGLContext */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var3 = ((struct instance_core__Pointer*)p0)->value; /* unboxing EGLConfig */
var1 = egl___EGLDisplay_create_context___impl(var2, var3);
var4 = BOX_core__Pointer(var1); /* boxing EGLContext */
var4->type = &type_egl__EGLContext;
var4->class = &class_egl__EGLContext;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#make_current for (self: EGLDisplay, EGLSurface, EGLSurface, EGLContext): Bool */
short int egl___egl__EGLDisplay___make_current(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLDisplay for extern */;
void* var3 /* : EGLSurface for extern */;
void* var4 /* : EGLSurface for extern */;
void* var5 /* : EGLContext for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var3 = ((struct instance_core__Pointer*)p0)->value; /* unboxing EGLSurface */
var4 = ((struct instance_core__Pointer*)p1)->value; /* unboxing EGLSurface */
var5 = ((struct instance_core__Pointer*)p2)->value; /* unboxing EGLContext */
var1 = egl___EGLDisplay_make_current___impl(var2, var3, var4, var5);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#query_surface for (self: EGLDisplay, EGLSurface, Int): Int */
long egl___egl__EGLDisplay___query_surface(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : EGLDisplay for extern */;
void* var3 /* : EGLSurface for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var3 = ((struct instance_core__Pointer*)p0)->value; /* unboxing EGLSurface */
var1 = egl___EGLDisplay_query_surface___impl(var2, var3, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#destroy_context for (self: EGLDisplay, EGLContext): Bool */
short int egl___egl__EGLDisplay___destroy_context(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLDisplay for extern */;
void* var3 /* : EGLContext for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var3 = ((struct instance_core__Pointer*)p0)->value; /* unboxing EGLContext */
var1 = egl___EGLDisplay_destroy_context___impl(var2, var3);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#destroy_surface for (self: EGLDisplay, EGLSurface): Bool */
short int egl___egl__EGLDisplay___destroy_surface(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLDisplay for extern */;
void* var3 /* : EGLSurface for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var3 = ((struct instance_core__Pointer*)p0)->value; /* unboxing EGLSurface */
var1 = egl___EGLDisplay_destroy_surface___impl(var2, var3);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#error for (self: EGLDisplay): EGLError */
val* egl___egl__EGLDisplay___error(val* self) {
val* var /* : EGLError */;
val* var1 /* : EGLError */;
void* var2 /* : EGLDisplay for extern */;
val* var3 /* : EGLError */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var1 = egl___EGLDisplay_error___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing EGLError */
var3->type = &type_egl__EGLError;
var3->class = &class_egl__EGLError;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#assert_no_egl_error for (self: EGLDisplay) */
void egl___egl__EGLDisplay___assert_no_egl_error(val* self) {
val* var /* : EGLError */;
val* var_error /* var error: EGLError */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Sys */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLDisplay__error]))(self); /* error on <self:EGLDisplay>*/
}
var_error = var;
{
var1 = ((short int(*)(val* self))(var_error->class->vft[COLOR_egl__EGLError__is_success]))(var_error); /* is_success on <var_error:EGLError>*/
}
var2 = !var1;
if (var2){
var3 = glob_sys;
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "EGL error: ";
var8 = core__flat___NativeString___to_s_full(var7, 11l, 11l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
{
var9 = ((val*(*)(val* self))(var_error->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_error); /* to_s on <var_error:EGLError>*/
}
((struct instance_core__NativeArray*)var4)->values[1]=var9;
{
var10 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__file__Sys__print]))(var3, var10); /* print on <var3:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_egl, 172);
fatal_exit(1);
} else {
}
RET_LABEL:;
}
/* method egl#EGLDisplay#query_string for (self: EGLDisplay, Int): String */
val* egl___egl__EGLDisplay___query_string(val* self, long p0) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : EGLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
struct nitni_instance* ret_var;
ret_var = egl___EGLDisplay_query_string___impl(var2, p0);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for core::Object::to_s */
struct nitni_instance * egl___NativeString_to_s( char* self ) {
val* var /* : String */;
var = core__flat___NativeString___core__abstract_text__Object__to_s(self);
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var;
return ret_for_c;
}
/* method egl#EGLDisplay#vendor for (self: EGLDisplay): String */
val* egl___egl__EGLDisplay___vendor(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_egl__EGLDisplay__query_string]))(self, 12371l); /* query_string on <self:EGLDisplay>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#version for (self: EGLDisplay): String */
val* egl___egl__EGLDisplay___version(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_egl__EGLDisplay__query_string]))(self, 12372l); /* query_string on <self:EGLDisplay>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#extensions for (self: EGLDisplay): Array[String] */
val* egl___egl__EGLDisplay___extensions(val* self) {
val* var /* : Array[String] */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : Array[String] */;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_egl__EGLDisplay__query_string]))(self, 12373l); /* query_string on <self:EGLDisplay>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = " ";
var4 = core__flat___NativeString___to_s_full(var3, 1l, 1l);
var2 = var4;
varonce = var2;
}
{
var5 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_core__string_search__Text__split_with]))(var1, var2); /* split_with on <var1:String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#client_apis for (self: EGLDisplay): Array[String] */
val* egl___egl__EGLDisplay___client_apis(val* self) {
val* var /* : Array[String] */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : Array[String] */;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_egl__EGLDisplay__query_string]))(self, 12429l); /* query_string on <self:EGLDisplay>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = " ";
var4 = core__flat___NativeString___to_s_full(var3, 1l, 1l);
var2 = var4;
varonce = var2;
}
{
var5 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_core__string_search__Text__split_with]))(var1, var2); /* split_with on <var1:String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLDisplay#swap_buffers for (self: EGLDisplay, EGLSurface) */
void egl___egl__EGLDisplay___swap_buffers(val* self, val* p0) {
void* var /* : EGLDisplay for extern */;
void* var1 /* : EGLSurface for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLDisplay */
var1 = ((struct instance_core__Pointer*)p0)->value; /* unboxing EGLSurface */
egl___EGLDisplay_swap_buffers___impl(var, var1);
RET_LABEL:;
}
/* method egl#EGLConfig#attribs for (self: EGLConfig, EGLDisplay): EGLConfigAttribs */
val* egl___egl__EGLConfig___attribs(val* self, val* p0) {
val* var /* : EGLConfigAttribs */;
val* var_display /* var display: EGLDisplay */;
val* var1 /* : EGLConfigAttribs */;
var_display = p0;
var1 = NEW_egl__EGLConfigAttribs(&type_egl__EGLConfigAttribs);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_egl__EGLConfigAttribs__display_61d]))(var1, var_display); /* display= on <var1:EGLConfigAttribs>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_egl__EGLConfigAttribs__config_61d]))(var1, self); /* config= on <var1:EGLConfigAttribs>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:EGLConfigAttribs>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurface#current_draw for (self: EGLSurface): EGLSurface */
val* egl___egl__EGLSurface___current_draw(val* self) {
val* var /* : EGLSurface */;
val* var1 /* : EGLSurface */;
val* var2 /* : EGLSurface */;
var1 = egl___new_EGLSurface_current_draw___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLSurface */
var2->type = &type_egl__EGLSurface;
var2->class = &class_egl__EGLSurface;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurface#current_read for (self: EGLSurface): EGLSurface */
val* egl___egl__EGLSurface___current_read(val* self) {
val* var /* : EGLSurface */;
val* var1 /* : EGLSurface */;
val* var2 /* : EGLSurface */;
var1 = egl___new_EGLSurface_current_read___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLSurface */
var2->type = &type_egl__EGLSurface;
var2->class = &class_egl__EGLSurface;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurface#none for (self: EGLSurface): EGLSurface */
val* egl___egl__EGLSurface___none(val* self) {
val* var /* : EGLSurface */;
val* var1 /* : EGLSurface */;
val* var2 /* : EGLSurface */;
var1 = egl___new_EGLSurface_none___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLSurface */
var2->type = &type_egl__EGLSurface;
var2->class = &class_egl__EGLSurface;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurface#is_ok for (self: EGLSurface): Bool */
short int egl___egl__EGLSurface___is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLSurface for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLSurface */
var1 = egl___EGLSurface_is_ok___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurface#attribs for (self: EGLSurface, EGLDisplay): EGLSurfaceAttribs */
val* egl___egl__EGLSurface___attribs(val* self, val* p0) {
val* var /* : EGLSurfaceAttribs */;
val* var_display /* var display: EGLDisplay */;
val* var1 /* : EGLSurfaceAttribs */;
var_display = p0;
var1 = NEW_egl__EGLSurfaceAttribs(&type_egl__EGLSurfaceAttribs);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_egl__EGLSurfaceAttribs__display_61d]))(var1, var_display); /* display= on <var1:EGLSurfaceAttribs>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_egl__EGLSurfaceAttribs__surface_61d]))(var1, self); /* surface= on <var1:EGLSurfaceAttribs>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:EGLSurfaceAttribs>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContext#current for (self: EGLContext): EGLContext */
val* egl___egl__EGLContext___current(val* self) {
val* var /* : EGLContext */;
val* var1 /* : EGLContext */;
val* var2 /* : EGLContext */;
var1 = egl___new_EGLContext_current___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContext */
var2->type = &type_egl__EGLContext;
var2->class = &class_egl__EGLContext;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContext#none for (self: EGLContext): EGLContext */
val* egl___egl__EGLContext___none(val* self) {
val* var /* : EGLContext */;
val* var1 /* : EGLContext */;
val* var2 /* : EGLContext */;
var1 = egl___new_EGLContext_none___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContext */
var2->type = &type_egl__EGLContext;
var2->class = &class_egl__EGLContext;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContext#is_ok for (self: EGLContext): Bool */
short int egl___egl__EGLContext___is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLContext for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLContext */
var1 = egl___EGLContext_is_ok___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#display for (self: EGLConfigAttribs): EGLDisplay */
val* egl___egl__EGLConfigAttribs___display(val* self) {
val* var /* : EGLDisplay */;
val* var1 /* : EGLDisplay */;
var1 = self->attrs[COLOR_egl__EGLConfigAttribs___display].val; /* _display on <self:EGLConfigAttribs> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _display");
PRINT_ERROR(" (%s:%d)\n", FILE_egl, 218);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#display= for (self: EGLConfigAttribs, EGLDisplay) */
void egl___egl__EGLConfigAttribs___display_61d(val* self, val* p0) {
self->attrs[COLOR_egl__EGLConfigAttribs___display].val = p0; /* _display on <self:EGLConfigAttribs> */
RET_LABEL:;
}
/* method egl#EGLConfigAttribs#config for (self: EGLConfigAttribs): EGLConfig */
val* egl___egl__EGLConfigAttribs___config(val* self) {
val* var /* : EGLConfig */;
val* var1 /* : EGLConfig */;
var1 = self->attrs[COLOR_egl__EGLConfigAttribs___config].val; /* _config on <self:EGLConfigAttribs> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _config");
PRINT_ERROR(" (%s:%d)\n", FILE_egl, 219);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#config= for (self: EGLConfigAttribs, EGLConfig) */
void egl___egl__EGLConfigAttribs___config_61d(val* self, val* p0) {
self->attrs[COLOR_egl__EGLConfigAttribs___config].val = p0; /* _config on <self:EGLConfigAttribs> */
RET_LABEL:;
}
/* method egl#EGLConfigAttribs#buffer_size for (self: EGLConfigAttribs): Int */
long egl___egl__EGLConfigAttribs___buffer_size(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLConfig */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__display]))(self); /* display on <self:EGLConfigAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__config]))(self); /* config on <self:EGLConfigAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__config_attrib]))(var1, var2, 12320l); /* config_attrib on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#alpha_size for (self: EGLConfigAttribs): Int */
long egl___egl__EGLConfigAttribs___alpha_size(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLConfig */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__display]))(self); /* display on <self:EGLConfigAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__config]))(self); /* config on <self:EGLConfigAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__config_attrib]))(var1, var2, 12321l); /* config_attrib on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#blue_size for (self: EGLConfigAttribs): Int */
long egl___egl__EGLConfigAttribs___blue_size(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLConfig */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__display]))(self); /* display on <self:EGLConfigAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__config]))(self); /* config on <self:EGLConfigAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__config_attrib]))(var1, var2, 12322l); /* config_attrib on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#green_size for (self: EGLConfigAttribs): Int */
long egl___egl__EGLConfigAttribs___green_size(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLConfig */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__display]))(self); /* display on <self:EGLConfigAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__config]))(self); /* config on <self:EGLConfigAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__config_attrib]))(var1, var2, 12323l); /* config_attrib on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#red_size for (self: EGLConfigAttribs): Int */
long egl___egl__EGLConfigAttribs___red_size(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLConfig */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__display]))(self); /* display on <self:EGLConfigAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__config]))(self); /* config on <self:EGLConfigAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__config_attrib]))(var1, var2, 12324l); /* config_attrib on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#depth_size for (self: EGLConfigAttribs): Int */
long egl___egl__EGLConfigAttribs___depth_size(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLConfig */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__display]))(self); /* display on <self:EGLConfigAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__config]))(self); /* config on <self:EGLConfigAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__config_attrib]))(var1, var2, 12325l); /* config_attrib on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#stencil_size for (self: EGLConfigAttribs): Int */
long egl___egl__EGLConfigAttribs___stencil_size(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLConfig */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__display]))(self); /* display on <self:EGLConfigAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__config]))(self); /* config on <self:EGLConfigAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__config_attrib]))(var1, var2, 12326l); /* config_attrib on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#native_visual_id for (self: EGLConfigAttribs): Int */
long egl___egl__EGLConfigAttribs___native_visual_id(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLConfig */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__display]))(self); /* display on <self:EGLConfigAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__config]))(self); /* config on <self:EGLConfigAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__config_attrib]))(var1, var2, 12334l); /* config_attrib on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#native_visual_type for (self: EGLConfigAttribs): Int */
long egl___egl__EGLConfigAttribs___native_visual_type(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLConfig */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__display]))(self); /* display on <self:EGLConfigAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__config]))(self); /* config on <self:EGLConfigAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__config_attrib]))(var1, var2, 12335l); /* config_attrib on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#caveat for (self: EGLConfigAttribs): EGLConfigCaveat */
val* egl___egl__EGLConfigAttribs___caveat(val* self) {
val* var /* : EGLConfigCaveat */;
val* var1 /* : EGLConfigCaveat */;
val* var2 /* : EGLDisplay */;
val* var3 /* : EGLConfig */;
long var4 /* : Int */;
val* var5 /* : EGLConfigCaveat */;
var1 = NEW_egl__EGLConfigCaveat(&type_egl__EGLConfigCaveat);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__display]))(self); /* display on <self:EGLConfigAttribs>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__config]))(self); /* config on <self:EGLConfigAttribs>*/
}
{
var4 = ((long(*)(val* self, val* p0, long p1))(var2->class->vft[COLOR_egl__EGLDisplay__config_attrib]))(var2, var3, 12327l); /* config_attrib on <var2:EGLDisplay>*/
}
{
var5 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_egl__EGLConfigCaveat__from_i]))(var1, var4); /* from_i on <var1:EGLConfigCaveat>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#conformant for (self: EGLConfigAttribs): EGLConformant */
val* egl___egl__EGLConfigAttribs___conformant(val* self) {
val* var /* : EGLConformant */;
val* var1 /* : EGLConformant */;
val* var2 /* : EGLDisplay */;
val* var3 /* : EGLConfig */;
long var4 /* : Int */;
val* var5 /* : EGLConformant */;
var1 = NEW_egl__EGLConformant(&type_egl__EGLConformant);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__display]))(self); /* display on <self:EGLConfigAttribs>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigAttribs__config]))(self); /* config on <self:EGLConfigAttribs>*/
}
{
var4 = ((long(*)(val* self, val* p0, long p1))(var2->class->vft[COLOR_egl__EGLDisplay__config_attrib]))(var2, var3, 12354l); /* config_attrib on <var2:EGLDisplay>*/
}
{
var5 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_egl__EGLConformant__from_i]))(var1, var4); /* from_i on <var1:EGLConformant>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigAttribs#init for (self: EGLConfigAttribs) */
void egl___egl__EGLConfigAttribs___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_egl___egl__EGLConfigAttribs___core__kernel__Object__init]))(self); /* init on <self:EGLConfigAttribs>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigCaveat#from_i for (self: EGLConfigCaveat, Int): EGLConfigCaveat */
val* egl___egl__EGLConfigCaveat___from_i(val* self, long p0) {
val* var /* : EGLConfigCaveat */;
val* var1 /* : EGLConfigCaveat */;
val* var2 /* : EGLConfigCaveat */;
var1 = egl___new_EGLConfigCaveat_from_i___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing EGLConfigCaveat */
var2->type = &type_egl__EGLConfigCaveat;
var2->class = &class_egl__EGLConfigCaveat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigCaveat#to_i for (self: EGLConfigCaveat): Int */
long egl___egl__EGLConfigCaveat___to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : EGLConfigCaveat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConfigCaveat */
var1 = egl___EGLConfigCaveat_to_i___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigCaveat#none for (self: EGLConfigCaveat): EGLConfigCaveat */
val* egl___egl__EGLConfigCaveat___none(val* self) {
val* var /* : EGLConfigCaveat */;
val* var1 /* : EGLConfigCaveat */;
val* var2 /* : EGLConfigCaveat */;
var1 = egl___new_EGLConfigCaveat_none___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLConfigCaveat */
var2->type = &type_egl__EGLConfigCaveat;
var2->class = &class_egl__EGLConfigCaveat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigCaveat#is_none for (self: EGLConfigCaveat): Bool */
short int egl___egl__EGLConfigCaveat___is_none(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLConfigCaveat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConfigCaveat */
var1 = egl___EGLConfigCaveat_is_none___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigCaveat#dont_care for (self: EGLConfigCaveat): EGLConfigCaveat */
val* egl___egl__EGLConfigCaveat___dont_care(val* self) {
val* var /* : EGLConfigCaveat */;
val* var1 /* : EGLConfigCaveat */;
val* var2 /* : EGLConfigCaveat */;
var1 = egl___new_EGLConfigCaveat_dont_care___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLConfigCaveat */
var2->type = &type_egl__EGLConfigCaveat;
var2->class = &class_egl__EGLConfigCaveat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigCaveat#is_dont_care for (self: EGLConfigCaveat): Bool */
short int egl___egl__EGLConfigCaveat___is_dont_care(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLConfigCaveat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConfigCaveat */
var1 = egl___EGLConfigCaveat_is_dont_care___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigCaveat#slow for (self: EGLConfigCaveat): EGLConfigCaveat */
val* egl___egl__EGLConfigCaveat___slow(val* self) {
val* var /* : EGLConfigCaveat */;
val* var1 /* : EGLConfigCaveat */;
val* var2 /* : EGLConfigCaveat */;
var1 = egl___new_EGLConfigCaveat_slow___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLConfigCaveat */
var2->type = &type_egl__EGLConfigCaveat;
var2->class = &class_egl__EGLConfigCaveat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigCaveat#is_slow for (self: EGLConfigCaveat): Bool */
short int egl___egl__EGLConfigCaveat___is_slow(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLConfigCaveat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConfigCaveat */
var1 = egl___EGLConfigCaveat_is_slow___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigCaveat#non_conformant for (self: EGLConfigCaveat): EGLConfigCaveat */
val* egl___egl__EGLConfigCaveat___non_conformant(val* self) {
val* var /* : EGLConfigCaveat */;
val* var1 /* : EGLConfigCaveat */;
val* var2 /* : EGLConfigCaveat */;
var1 = egl___new_EGLConfigCaveat_non_conformant___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLConfigCaveat */
var2->type = &type_egl__EGLConfigCaveat;
var2->class = &class_egl__EGLConfigCaveat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigCaveat#is_non_conformant for (self: EGLConfigCaveat): Bool */
short int egl___egl__EGLConfigCaveat___is_non_conformant(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLConfigCaveat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConfigCaveat */
var1 = egl___EGLConfigCaveat_is_non_conformant___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigCaveat#to_s for (self: EGLConfigCaveat): String */
val* egl___egl__EGLConfigCaveat___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
short int var10 /* : Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
short int var15 /* : Bool */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigCaveat__is_none]))(self); /* is_none on <self:EGLConfigCaveat>*/
}
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "EGL_NONE";
var4 = core__flat___NativeString___to_s_full(var3, 8l, 8l);
var2 = var4;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
{
var5 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigCaveat__is_dont_care]))(self); /* is_dont_care on <self:EGLConfigCaveat>*/
}
if (var5){
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "EGL_DONT_CARE";
var9 = core__flat___NativeString___to_s_full(var8, 13l, 13l);
var7 = var9;
varonce6 = var7;
}
var = var7;
goto RET_LABEL;
} else {
}
{
var10 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigCaveat__is_slow]))(self); /* is_slow on <self:EGLConfigCaveat>*/
}
if (var10){
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "EGL_SLOW_CONFIG";
var14 = core__flat___NativeString___to_s_full(var13, 15l, 15l);
var12 = var14;
varonce11 = var12;
}
var = var12;
goto RET_LABEL;
} else {
}
{
var15 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigCaveat__is_non_conformant]))(self); /* is_non_conformant on <self:EGLConfigCaveat>*/
}
if (var15){
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "EGL_NON_CONFORMANT";
var19 = core__flat___NativeString___to_s_full(var18, 18l, 18l);
var17 = var19;
varonce16 = var17;
}
var = var17;
goto RET_LABEL;
} else {
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Unknown or invalid value";
var23 = core__flat___NativeString___to_s_full(var22, 24l, 24l);
var21 = var23;
varonce20 = var21;
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConformant#new for (self: EGLConformant): EGLConformant */
val* egl___egl__EGLConformant___new(val* self) {
val* var /* : EGLConformant */;
val* var1 /* : EGLConformant */;
val* var2 /* : EGLConformant */;
var1 = egl___new_EGLConformant___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLConformant */
var2->type = &type_egl__EGLConformant;
var2->class = &class_egl__EGLConformant;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConformant#from_i for (self: EGLConformant, Int): EGLConformant */
val* egl___egl__EGLConformant___from_i(val* self, long p0) {
val* var /* : EGLConformant */;
val* var1 /* : EGLConformant */;
val* var2 /* : EGLConformant */;
var1 = egl___new_EGLConformant_from_i___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing EGLConformant */
var2->type = &type_egl__EGLConformant;
var2->class = &class_egl__EGLConformant;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConformant#to_i for (self: EGLConformant): Int */
long egl___egl__EGLConformant___to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : EGLConformant for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConformant */
var1 = egl___EGLConformant_to_i___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConformant#opengl for (self: EGLConformant): Bool */
short int egl___egl__EGLConformant___opengl(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLConformant for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConformant */
var1 = egl___EGLConformant_opengl___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConformant#with_opengl for (self: EGLConformant): EGLConformant */
val* egl___egl__EGLConformant___with_opengl(val* self) {
val* var /* : EGLConformant */;
val* var1 /* : EGLConformant */;
void* var2 /* : EGLConformant for extern */;
val* var3 /* : EGLConformant */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConformant */
var1 = egl___EGLConformant_with_opengl___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing EGLConformant */
var3->type = &type_egl__EGLConformant;
var3->class = &class_egl__EGLConformant;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConformant#opengl_es for (self: EGLConformant): Bool */
short int egl___egl__EGLConformant___opengl_es(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLConformant for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConformant */
var1 = egl___EGLConformant_opengl_es___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConformant#with_opengl_es for (self: EGLConformant): EGLConformant */
val* egl___egl__EGLConformant___with_opengl_es(val* self) {
val* var /* : EGLConformant */;
val* var1 /* : EGLConformant */;
void* var2 /* : EGLConformant for extern */;
val* var3 /* : EGLConformant */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConformant */
var1 = egl___EGLConformant_with_opengl_es___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing EGLConformant */
var3->type = &type_egl__EGLConformant;
var3->class = &class_egl__EGLConformant;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConformant#opengl_es2 for (self: EGLConformant): Bool */
short int egl___egl__EGLConformant___opengl_es2(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLConformant for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConformant */
var1 = egl___EGLConformant_opengl_es2___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConformant#with_opengl_es2 for (self: EGLConformant): EGLConformant */
val* egl___egl__EGLConformant___with_opengl_es2(val* self) {
val* var /* : EGLConformant */;
val* var1 /* : EGLConformant */;
void* var2 /* : EGLConformant for extern */;
val* var3 /* : EGLConformant */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConformant */
var1 = egl___EGLConformant_with_opengl_es2___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing EGLConformant */
var3->type = &type_egl__EGLConformant;
var3->class = &class_egl__EGLConformant;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConformant#openvg for (self: EGLConformant): Bool */
short int egl___egl__EGLConformant___openvg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLConformant for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConformant */
var1 = egl___EGLConformant_openvg___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConformant#with_openvg for (self: EGLConformant): EGLConformant */
val* egl___egl__EGLConformant___with_openvg(val* self) {
val* var /* : EGLConformant */;
val* var1 /* : EGLConformant */;
void* var2 /* : EGLConformant for extern */;
val* var3 /* : EGLConformant */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLConformant */
var1 = egl___EGLConformant_with_openvg___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing EGLConformant */
var3->type = &type_egl__EGLConformant;
var3->class = &class_egl__EGLConformant;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConformant#to_a for (self: EGLConformant): Array[String] */
val* egl___egl__EGLConformant___to_a(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_features /* var features: Array[String] */;
short int var2 /* : Bool */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
short int var6 /* : Bool */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
short int var16 /* : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_features = var1;
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLConformant__opengl]))(self); /* opengl on <self:EGLConformant>*/
}
if (var2){
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "OpenGL";
var5 = core__flat___NativeString___to_s_full(var4, 6l, 6l);
var3 = var5;
varonce = var3;
}
{
((void(*)(val* self, val* p0))(var_features->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_features, var3); /* add on <var_features:Array[String]>*/
}
} else {
}
{
var6 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLConformant__opengl_es]))(self); /* opengl_es on <self:EGLConformant>*/
}
if (var6){
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "OpenGL ES";
var10 = core__flat___NativeString___to_s_full(var9, 9l, 9l);
var8 = var10;
varonce7 = var8;
}
{
((void(*)(val* self, val* p0))(var_features->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_features, var8); /* add on <var_features:Array[String]>*/
}
} else {
}
{
var11 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLConformant__opengl_es2]))(self); /* opengl_es2 on <self:EGLConformant>*/
}
if (var11){
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "OpenGL ES2";
var15 = core__flat___NativeString___to_s_full(var14, 10l, 10l);
var13 = var15;
varonce12 = var13;
}
{
((void(*)(val* self, val* p0))(var_features->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_features, var13); /* add on <var_features:Array[String]>*/
}
} else {
}
{
var16 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLConformant__openvg]))(self); /* openvg on <self:EGLConformant>*/
}
if (var16){
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "OpenVG";
var20 = core__flat___NativeString___to_s_full(var19, 6l, 6l);
var18 = var20;
varonce17 = var18;
}
{
((void(*)(val* self, val* p0))(var_features->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_features, var18); /* add on <var_features:Array[String]>*/
}
} else {
}
var = var_features;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConformant#to_s for (self: EGLConformant): String */
val* egl___egl__EGLConformant___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[String] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConformant__to_a]))(self); /* to_a on <self:EGLConformant>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = ", ";
var4 = core__flat___NativeString___to_s_full(var3, 2l, 2l);
var2 = var4;
varonce = var2;
}
{
var5 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_text__Collection__join]))(var1, var2); /* join on <var1:Array[String]>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#display for (self: EGLSurfaceAttribs): EGLDisplay */
val* egl___egl__EGLSurfaceAttribs___display(val* self) {
val* var /* : EGLDisplay */;
val* var1 /* : EGLDisplay */;
var1 = self->attrs[COLOR_egl__EGLSurfaceAttribs___display].val; /* _display on <self:EGLSurfaceAttribs> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _display");
PRINT_ERROR(" (%s:%d)\n", FILE_egl, 300);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#display= for (self: EGLSurfaceAttribs, EGLDisplay) */
void egl___egl__EGLSurfaceAttribs___display_61d(val* self, val* p0) {
self->attrs[COLOR_egl__EGLSurfaceAttribs___display].val = p0; /* _display on <self:EGLSurfaceAttribs> */
RET_LABEL:;
}
/* method egl#EGLSurfaceAttribs#surface for (self: EGLSurfaceAttribs): EGLSurface */
val* egl___egl__EGLSurfaceAttribs___surface(val* self) {
val* var /* : EGLSurface */;
val* var1 /* : EGLSurface */;
var1 = self->attrs[COLOR_egl__EGLSurfaceAttribs___surface].val; /* _surface on <self:EGLSurfaceAttribs> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _surface");
PRINT_ERROR(" (%s:%d)\n", FILE_egl, 301);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#surface= for (self: EGLSurfaceAttribs, EGLSurface) */
void egl___egl__EGLSurfaceAttribs___surface_61d(val* self, val* p0) {
self->attrs[COLOR_egl__EGLSurfaceAttribs___surface].val = p0; /* _surface on <self:EGLSurfaceAttribs> */
RET_LABEL:;
}
/* method egl#EGLSurfaceAttribs#height for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___height(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12374l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#width for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___width(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12375l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#largest_pbuffer for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___largest_pbuffer(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12376l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#texture_format for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___texture_format(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12416l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#texture_target for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___texture_target(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12417l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#mipmap_texture for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___mipmap_texture(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12418l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#mipmap_level for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___mipmap_level(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12419l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#render_buffer for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___render_buffer(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12422l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#vg_colorspace for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___vg_colorspace(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12423l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#vg_alpha_format for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___vg_alpha_format(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12424l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#horizontal_resolution for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___horizontal_resolution(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12432l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#vertical_resolution for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___vertical_resolution(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12433l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#pixel_aspect_ratio for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___pixel_aspect_ratio(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12434l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#swap_behavior for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___swap_behavior(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12435l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#multisample_resolve for (self: EGLSurfaceAttribs): Int */
long egl___egl__EGLSurfaceAttribs___multisample_resolve(val* self) {
long var /* : Int */;
val* var1 /* : EGLDisplay */;
val* var2 /* : EGLSurface */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__display]))(self); /* display on <self:EGLSurfaceAttribs>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLSurfaceAttribs__surface]))(self); /* surface on <self:EGLSurfaceAttribs>*/
}
{
var3 = ((long(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_egl__EGLDisplay__query_surface]))(var1, var2, 12441l); /* query_surface on <var1:EGLDisplay>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLSurfaceAttribs#init for (self: EGLSurfaceAttribs) */
void egl___egl__EGLSurfaceAttribs___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_egl___egl__EGLSurfaceAttribs___core__kernel__Object__init]))(self); /* init on <self:EGLSurfaceAttribs>*/
}
RET_LABEL:;
}
/* method egl#EGLError#is_success for (self: EGLError): Bool */
short int egl___egl__EGLError___is_success(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_success___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_not_initialized for (self: EGLError): Bool */
short int egl___egl__EGLError___is_not_initialized(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_not_initialized___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_bad_access for (self: EGLError): Bool */
short int egl___egl__EGLError___is_bad_access(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_bad_access___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_bad_alloc for (self: EGLError): Bool */
short int egl___egl__EGLError___is_bad_alloc(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_bad_alloc___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_bad_attribute for (self: EGLError): Bool */
short int egl___egl__EGLError___is_bad_attribute(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_bad_attribute___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_bad_config for (self: EGLError): Bool */
short int egl___egl__EGLError___is_bad_config(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_bad_config___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_bad_context for (self: EGLError): Bool */
short int egl___egl__EGLError___is_bad_context(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_bad_context___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_bad_current_surface for (self: EGLError): Bool */
short int egl___egl__EGLError___is_bad_current_surface(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_bad_current_surface___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_bad_display for (self: EGLError): Bool */
short int egl___egl__EGLError___is_bad_display(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_bad_display___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_bad_match for (self: EGLError): Bool */
short int egl___egl__EGLError___is_bad_match(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_bad_match___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_bad_native_pixmap for (self: EGLError): Bool */
short int egl___egl__EGLError___is_bad_native_pixmap(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_bad_native_pixmap___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_bad_native_window for (self: EGLError): Bool */
short int egl___egl__EGLError___is_bad_native_window(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_bad_native_window___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_bad_parameter for (self: EGLError): Bool */
short int egl___egl__EGLError___is_bad_parameter(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_bad_parameter___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_bad_surface for (self: EGLError): Bool */
short int egl___egl__EGLError___is_bad_surface(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_bad_surface___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#is_context_lost for (self: EGLError): Bool */
short int egl___egl__EGLError___is_context_lost(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : EGLError for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing EGLError */
var1 = egl___EGLError_is_context_lost___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLError#to_s for (self: EGLError): String */
val* egl___egl__EGLError___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
short int var10 /* : Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
short int var15 /* : Bool */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : String */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : String */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : String */;
short int var50 /* : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
short int var55 /* : Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : String */;
short int var60 /* : Bool */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : String */;
short int var65 /* : Bool */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_not_initialized]))(self); /* is_not_initialized on <self:EGLError>*/
}
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "Not initialized";
var4 = core__flat___NativeString___to_s_full(var3, 15l, 15l);
var2 = var4;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
{
var5 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_bad_access]))(self); /* is_bad_access on <self:EGLError>*/
}
if (var5){
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "Bad access";
var9 = core__flat___NativeString___to_s_full(var8, 10l, 10l);
var7 = var9;
varonce6 = var7;
}
var = var7;
goto RET_LABEL;
} else {
}
{
var10 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_bad_alloc]))(self); /* is_bad_alloc on <self:EGLError>*/
}
if (var10){
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Bad allocation";
var14 = core__flat___NativeString___to_s_full(var13, 14l, 14l);
var12 = var14;
varonce11 = var12;
}
var = var12;
goto RET_LABEL;
} else {
}
{
var15 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_bad_attribute]))(self); /* is_bad_attribute on <self:EGLError>*/
}
if (var15){
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Bad attribute";
var19 = core__flat___NativeString___to_s_full(var18, 13l, 13l);
var17 = var19;
varonce16 = var17;
}
var = var17;
goto RET_LABEL;
} else {
}
{
var20 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_bad_config]))(self); /* is_bad_config on <self:EGLError>*/
}
if (var20){
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "Bad configuration";
var24 = core__flat___NativeString___to_s_full(var23, 17l, 17l);
var22 = var24;
varonce21 = var22;
}
var = var22;
goto RET_LABEL;
} else {
}
{
var25 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_bad_context]))(self); /* is_bad_context on <self:EGLError>*/
}
if (var25){
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Bad context";
var29 = core__flat___NativeString___to_s_full(var28, 11l, 11l);
var27 = var29;
varonce26 = var27;
}
var = var27;
goto RET_LABEL;
} else {
}
{
var30 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_bad_current_surface]))(self); /* is_bad_current_surface on <self:EGLError>*/
}
if (var30){
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "Bad current surface";
var34 = core__flat___NativeString___to_s_full(var33, 19l, 19l);
var32 = var34;
varonce31 = var32;
}
var = var32;
goto RET_LABEL;
} else {
}
{
var35 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_bad_display]))(self); /* is_bad_display on <self:EGLError>*/
}
if (var35){
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Bad display";
var39 = core__flat___NativeString___to_s_full(var38, 11l, 11l);
var37 = var39;
varonce36 = var37;
}
var = var37;
goto RET_LABEL;
} else {
}
{
var40 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_bad_match]))(self); /* is_bad_match on <self:EGLError>*/
}
if (var40){
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "Bad match";
var44 = core__flat___NativeString___to_s_full(var43, 9l, 9l);
var42 = var44;
varonce41 = var42;
}
var = var42;
goto RET_LABEL;
} else {
}
{
var45 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_bad_native_pixmap]))(self); /* is_bad_native_pixmap on <self:EGLError>*/
}
if (var45){
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "Bad native pixmap";
var49 = core__flat___NativeString___to_s_full(var48, 17l, 17l);
var47 = var49;
varonce46 = var47;
}
var = var47;
goto RET_LABEL;
} else {
}
{
var50 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_bad_native_window]))(self); /* is_bad_native_window on <self:EGLError>*/
}
if (var50){
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "Bad native window";
var54 = core__flat___NativeString___to_s_full(var53, 17l, 17l);
var52 = var54;
varonce51 = var52;
}
var = var52;
goto RET_LABEL;
} else {
}
{
var55 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_bad_parameter]))(self); /* is_bad_parameter on <self:EGLError>*/
}
if (var55){
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "Bad parameter";
var59 = core__flat___NativeString___to_s_full(var58, 13l, 13l);
var57 = var59;
varonce56 = var57;
}
var = var57;
goto RET_LABEL;
} else {
}
{
var60 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_bad_surface]))(self); /* is_bad_surface on <self:EGLError>*/
}
if (var60){
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "Bad surface";
var64 = core__flat___NativeString___to_s_full(var63, 11l, 11l);
var62 = var64;
varonce61 = var62;
}
var = var62;
goto RET_LABEL;
} else {
}
{
var65 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLError__is_context_lost]))(self); /* is_context_lost on <self:EGLError>*/
}
if (var65){
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "Context lost";
var69 = core__flat___NativeString___to_s_full(var68, 12l, 12l);
var67 = var69;
varonce66 = var67;
}
var = var67;
goto RET_LABEL;
} else {
}
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "Unknown error";
var73 = core__flat___NativeString___to_s_full(var72, 13l, 13l);
var71 = var73;
varonce70 = var71;
}
var = var71;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#buffer_size for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___buffer_size(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_buffer_size___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#alpha_size for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___alpha_size(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_alpha_size___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#blue_size for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___blue_size(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_blue_size___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#green_size for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___green_size(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_green_size___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#red_size for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___red_size(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_red_size___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#depth_size for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___depth_size(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_depth_size___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#stencil_size for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___stencil_size(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_stencil_size___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#config_caveat for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___config_caveat(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_config_caveat___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#config_id for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___config_id(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_config_id___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#level for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___level(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_level___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#max_pbuffer_height for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___max_pbuffer_height(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_max_pbuffer_height___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#max_pbuffer_pixels for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___max_pbuffer_pixels(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_max_pbuffer_pixels___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#max_pbuffer_width for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___max_pbuffer_width(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_max_pbuffer_width___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#native_renderable for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___native_renderable(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_native_renderable___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#native_visual_id for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___native_visual_id(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_native_visual_id___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#native_visual_type for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___native_visual_type(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_native_visual_type___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#samples for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___samples(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_samples___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#sample_buffers for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___sample_buffers(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_sample_buffers___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#surface_type for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___surface_type(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_surface_type___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#transparent_type for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___transparent_type(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_transparent_type___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#transparent_blue_value for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___transparent_blue_value(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_transparent_blue_value___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#transparent_green_value for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___transparent_green_value(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_transparent_green_value___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#transparent_red_value for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___transparent_red_value(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_transparent_red_value___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#bind_to_texture_rgb for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___bind_to_texture_rgb(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_bind_to_texture_rgb___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#bind_to_texture_rgba for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___bind_to_texture_rgba(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_bind_to_texture_rgba___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#min_swap_interval for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___min_swap_interval(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_min_swap_interval___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#max_swap_interval for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___max_swap_interval(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_max_swap_interval___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#limunance_size for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___limunance_size(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_limunance_size___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#alpha_mask_size for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___alpha_mask_size(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_alpha_mask_size___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#color_buffer_type for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___color_buffer_type(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_color_buffer_type___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#renderable_type for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___renderable_type(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_renderable_type___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#match_native_pixmap for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___match_native_pixmap(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_match_native_pixmap___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#conformant for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___conformant(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_conformant___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLContextAttribute#none for (self: EGLContextAttribute): EGLContextAttribute */
val* egl___egl__EGLContextAttribute___none(val* self) {
val* var /* : EGLContextAttribute */;
val* var1 /* : EGLContextAttribute */;
val* var2 /* : EGLContextAttribute */;
var1 = egl___new_EGLContextAttribute_none___impl();
var2 = BOX_core__Pointer(var1); /* boxing EGLContextAttribute */
var2->type = &type_egl__EGLContextAttribute;
var2->class = &class_egl__EGLContextAttribute;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigChooser#array for (self: EGLConfigChooser): Array[Int] */
val* egl___egl__EGLConfigChooser___array(val* self) {
val* var /* : Array[Int] */;
val* var1 /* : Array[Int] */;
var1 = self->attrs[COLOR_egl__EGLConfigChooser___array].val; /* _array on <self:EGLConfigChooser> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_egl, 399);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigChooser#array= for (self: EGLConfigChooser, Array[Int]) */
void egl___egl__EGLConfigChooser___array_61d(val* self, val* p0) {
self->attrs[COLOR_egl__EGLConfigChooser___array].val = p0; /* _array on <self:EGLConfigChooser> */
RET_LABEL:;
}
/* method egl#EGLConfigChooser#closed for (self: EGLConfigChooser): Bool */
short int egl___egl__EGLConfigChooser___closed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_egl__EGLConfigChooser___closed].s; /* _closed on <self:EGLConfigChooser> */
var = var1;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigChooser#closed= for (self: EGLConfigChooser, Bool) */
void egl___egl__EGLConfigChooser___closed_61d(val* self, short int p0) {
self->attrs[COLOR_egl__EGLConfigChooser___closed].s = p0; /* _closed on <self:EGLConfigChooser> */
RET_LABEL:;
}
/* method egl#EGLConfigChooser#inserted_attribs for (self: EGLConfigChooser): Array[Int] */
val* egl___egl__EGLConfigChooser___inserted_attribs(val* self) {
val* var /* : Array[Int] */;
val* var1 /* : Array[Int] */;
var1 = self->attrs[COLOR_egl__EGLConfigChooser___inserted_attribs].val; /* _inserted_attribs on <self:EGLConfigChooser> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _inserted_attribs");
PRINT_ERROR(" (%s:%d)\n", FILE_egl, 401);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method egl#EGLConfigChooser#inserted_attribs= for (self: EGLConfigChooser, Array[Int]) */
void egl___egl__EGLConfigChooser___inserted_attribs_61d(val* self, val* p0) {
self->attrs[COLOR_egl__EGLConfigChooser___inserted_attribs].val = p0; /* _inserted_attribs on <self:EGLConfigChooser> */
RET_LABEL:;
}
/* method egl#EGLConfigChooser#insert_attrib_key for (self: EGLConfigChooser, Int) */
void egl___egl__EGLConfigChooser___insert_attrib_key(val* self, long p0) {
long var_key /* var key: Int */;
val* var /* : Array[Int] */;
val* var1 /* : nullable Object */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Sys */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
val* var8 /* : Array[Int] */;
val* var9 /* : nullable Object */;
var_key = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigChooser__inserted_attribs]))(self); /* inserted_attribs on <self:EGLConfigChooser>*/
}
{
var1 = (val*)(var_key<<2|1);
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__abstract_collection__Collection__has]))(var, var1); /* has on <var:Array[Int]>*/
}
var3 = !var2;
if (unlikely(!var3)) {
var4 = glob_sys;
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "Duplicate attrib passed to EGLConfigChooser";
var7 = core__flat___NativeString___to_s_full(var6, 43l, 43l);
var5 = var7;
varonce = var5;
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__file__Sys__print]))(var4, var5); /* print on <var4:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_egl, 405);
fatal_exit(1);
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigChooser__array]))(self); /* array on <self:EGLConfigChooser>*/
}
{
var9 = (val*)(var_key<<2|1);
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var8, var9); /* add on <var8:Array[Int]>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#insert_attrib_with_val for (self: EGLConfigChooser, Int, Int) */
void egl___egl__EGLConfigChooser___insert_attrib_with_val(val* self, long p0, long p1) {
long var_key /* var key: Int */;
long var_val /* var val: Int */;
val* var /* : Array[Int] */;
val* var1 /* : nullable Object */;
var_key = p0;
var_val = p1;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_key]))(self, var_key); /* insert_attrib_key on <self:EGLConfigChooser>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigChooser__array]))(self); /* array on <self:EGLConfigChooser>*/
}
{
var1 = (val*)(var_val<<2|1);
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var, var1); /* add on <var:Array[Int]>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#close for (self: EGLConfigChooser) */
void egl___egl__EGLConfigChooser___close(val* self) {
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_key]))(self, 12344l); /* insert_attrib_key on <self:EGLConfigChooser>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_egl__EGLConfigChooser__closed_61d]))(self, 1); /* closed= on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#surface_type= for (self: EGLConfigChooser, Int) */
void egl___egl__EGLConfigChooser___surface_type_61d(val* self, long p0) {
long var_flag /* var flag: Int */;
var_flag = p0;
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_with_val]))(self, 12339l, var_flag); /* insert_attrib_with_val on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#surface_type_egl for (self: EGLConfigChooser) */
void egl___egl__EGLConfigChooser___surface_type_egl(val* self) {
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_egl__EGLConfigChooser__surface_type_61d]))(self, 4l); /* surface_type= on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#renderable_type= for (self: EGLConfigChooser, Int) */
void egl___egl__EGLConfigChooser___renderable_type_61d(val* self, long p0) {
long var_flag /* var flag: Int */;
var_flag = p0;
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_with_val]))(self, 12352l, var_flag); /* insert_attrib_with_val on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#renderable_type_egl for (self: EGLConfigChooser) */
void egl___egl__EGLConfigChooser___renderable_type_egl(val* self) {
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_egl__EGLConfigChooser__renderable_type_61d]))(self, 4l); /* renderable_type= on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#blue_size= for (self: EGLConfigChooser, Int) */
void egl___egl__EGLConfigChooser___blue_size_61d(val* self, long p0) {
long var_size /* var size: Int */;
var_size = p0;
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_with_val]))(self, 12322l, var_size); /* insert_attrib_with_val on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#green_size= for (self: EGLConfigChooser, Int) */
void egl___egl__EGLConfigChooser___green_size_61d(val* self, long p0) {
long var_size /* var size: Int */;
var_size = p0;
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_with_val]))(self, 12323l, var_size); /* insert_attrib_with_val on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#red_size= for (self: EGLConfigChooser, Int) */
void egl___egl__EGLConfigChooser___red_size_61d(val* self, long p0) {
long var_size /* var size: Int */;
var_size = p0;
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_with_val]))(self, 12324l, var_size); /* insert_attrib_with_val on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#buffer_size= for (self: EGLConfigChooser, Int) */
void egl___egl__EGLConfigChooser___buffer_size_61d(val* self, long p0) {
long var_size /* var size: Int */;
var_size = p0;
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_with_val]))(self, 12320l, var_size); /* insert_attrib_with_val on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#alpha_size= for (self: EGLConfigChooser, Int) */
void egl___egl__EGLConfigChooser___alpha_size_61d(val* self, long p0) {
long var_size /* var size: Int */;
var_size = p0;
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_with_val]))(self, 12321l, var_size); /* insert_attrib_with_val on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#depth_size= for (self: EGLConfigChooser, Int) */
void egl___egl__EGLConfigChooser___depth_size_61d(val* self, long p0) {
long var_size /* var size: Int */;
var_size = p0;
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_with_val]))(self, 12325l, var_size); /* insert_attrib_with_val on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#stencil_size= for (self: EGLConfigChooser, Int) */
void egl___egl__EGLConfigChooser___stencil_size_61d(val* self, long p0) {
long var_size /* var size: Int */;
var_size = p0;
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_with_val]))(self, 12326l, var_size); /* insert_attrib_with_val on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#sample_buffers= for (self: EGLConfigChooser, Int) */
void egl___egl__EGLConfigChooser___sample_buffers_61d(val* self, long p0) {
long var_size /* var size: Int */;
var_size = p0;
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_with_val]))(self, 12337l, var_size); /* insert_attrib_with_val on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#caveat= for (self: EGLConfigChooser, EGLConfigCaveat) */
void egl___egl__EGLConfigChooser___caveat_61d(val* self, val* p0) {
val* var_caveat /* var caveat: EGLConfigCaveat */;
long var /* : Int */;
var_caveat = p0;
{
var = ((long(*)(val* self))(var_caveat->class->vft[COLOR_egl__EGLConfigCaveat__to_i]))(var_caveat); /* to_i on <var_caveat:EGLConfigCaveat>*/
}
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_with_val]))(self, 12368l, var); /* insert_attrib_with_val on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#conformant= for (self: EGLConfigChooser, EGLConformant) */
void egl___egl__EGLConfigChooser___conformant_61d(val* self, val* p0) {
val* var_conformant /* var conformant: EGLConformant */;
long var /* : Int */;
var_conformant = p0;
{
var = ((long(*)(val* self))(var_conformant->class->vft[COLOR_egl__EGLConformant__to_i]))(var_conformant); /* to_i on <var_conformant:EGLConformant>*/
}
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_egl__EGLConfigChooser__insert_attrib_with_val]))(self, 12354l, var); /* insert_attrib_with_val on <self:EGLConfigChooser>*/
}
RET_LABEL:;
}
/* method egl#EGLConfigChooser#choose for (self: EGLConfigChooser, EGLDisplay): nullable Array[EGLConfig] */
val* egl___egl__EGLConfigChooser___choose(val* self, val* p0) {
val* var /* : nullable Array[EGLConfig] */;
val* var_display /* var display: EGLDisplay */;
short int var1 /* : Bool */;
val* var2 /* : Sys */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
val* var6 /* : Array[Int] */;
val* var7 /* : nullable Array[EGLConfig] */;
var_display = p0;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigChooser__closed]))(self); /* closed on <self:EGLConfigChooser>*/
}
if (unlikely(!var1)) {
var2 = glob_sys;
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "EGLConfigChooser not closed.";
var5 = core__flat___NativeString___to_s_full(var4, 28l, 28l);
var3 = var5;
varonce = var3;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__file__Sys__print]))(var2, var3); /* print on <var2:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_egl, 447);
fatal_exit(1);
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_egl__EGLConfigChooser__array]))(self); /* array on <self:EGLConfigChooser>*/
}
{
var7 = ((val*(*)(val* self, val* p0))(var_display->class->vft[COLOR_egl__EGLDisplay__choose_configs]))(var_display, var6); /* choose_configs on <var_display:EGLDisplay>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#Sys#egl_bind_opengl_api for (self: Sys): Bool */
short int egl___core__Sys___egl_bind_opengl_api(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = egl___Sys_egl_bind_opengl_api___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#Sys#egl_bind_opengl_es_api for (self: Sys): Bool */
short int egl___core__Sys___egl_bind_opengl_es_api(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = egl___Sys_egl_bind_opengl_es_api___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#Sys#egl_bind_openvg_api for (self: Sys): Bool */
short int egl___core__Sys___egl_bind_openvg_api(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = egl___Sys_egl_bind_openvg_api___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#Sys#egl_default_display for (self: Sys): Pointer */
val* egl___core__Sys___egl_default_display(val* self) {
val* var /* : Pointer */;
val* var1 /* : Pointer */;
val* var2 /* : Pointer */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = egl___Sys_egl_default_display___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing Pointer */
var2->type = &type_core__Pointer;
var2->class = &class_core__Pointer;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
