#include "core__environ.sep.0.h"
/* method environ#String#environ for (self: String): String */
val* core__environ___String___environ(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
char* var_res /* var res: NativeString */;
static char* varonce;
static int varonce_guard;
char* var3 /* : NativeString */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
char* var8 /* : NativeString */;
char* var9 /* : NativeString */;
char* var_nulstr /* var nulstr: NativeString */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = core__environ___NativeString___get_environ(var1);
var_res = var2;
if (likely(varonce_guard)) {
var3 = varonce;
} else {
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "";
var7 = core__flat___NativeString___to_s_full(var6, 0l, 0l);
var5 = var7;
varonce4 = var5;
}
{
var8 = ((char*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var5); /* to_cstring on <var5:String>*/
}
var9 = core__environ___NativeString___get_environ(var8);
var3 = var9;
varonce = var3;
varonce_guard = 1;
}
var_nulstr = var3;
{
{ /* Inline native#NativeString#!= (var_res,var_nulstr) on <var_res:NativeString> */
var12 = var_res == var_nulstr;
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var14 = core__flat___NativeString___core__abstract_text__Object__to_s(var_res);
var = var14;
goto RET_LABEL;
} else {
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "";
var18 = core__flat___NativeString___to_s_full(var17, 0l, 0l);
var16 = var18;
varonce15 = var16;
}
var = var16;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method environ#String#setenv for (self: String, String) */
void core__environ___String___setenv(val* self, val* p0) {
val* var_v /* var v: String */;
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var_v = p0;
{
var = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
var1 = ((char*(*)(val* self))(var_v->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_v); /* to_cstring on <var_v:String>*/
}
core__environ___NativeString___setenv(var, var1); /* Direct call environ#NativeString#setenv on <var:NativeString>*/
RET_LABEL:;
}
/* method environ#String#program_is_in_path for (self: String): Bool */
short int core__environ___String___program_is_in_path(val* self) {
short int var /* : Bool */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var_full_path /* var full_path: String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : Array[String] */;
val* var_paths /* var paths: Array[String] */;
val* var_ /* var : Array[String] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : IndexedIterator[String] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_path /* var path: String */;
short int var14 /* : Bool */;
val* var15 /* : String */;
short int var16 /* : Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "PATH";
var3 = core__flat___NativeString___to_s_full(var2, 4l, 4l);
var1 = var3;
varonce = var1;
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__environ__String__environ]))(var1); /* environ on <var1:String>*/
}
var_full_path = var4;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = ":";
var8 = core__flat___NativeString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
{
var9 = ((val*(*)(val* self, val* p0))(var_full_path->class->vft[COLOR_core__string_search__Text__split]))(var_full_path, var6); /* split on <var_full_path:String>*/
}
var_paths = var9;
var_ = var_paths;
{
var10 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:IndexedIterator[String]>*/
}
if (var12){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:IndexedIterator[String]>*/
}
var_path = var13;
{
var14 = ((short int(*)(val* self))(var_path->class->vft[COLOR_core__file__String__file_exists]))(var_path); /* file_exists on <var_path:String>*/
}
if (var14){
{
var15 = ((val*(*)(val* self, val* p0))(var_path->class->vft[COLOR_core__file__String__join_path]))(var_path, self); /* join_path on <var_path:String>*/
}
{
var16 = ((short int(*)(val* self))(var15->class->vft[COLOR_core__file__String__file_exists]))(var15); /* file_exists on <var15:String>*/
}
if (var16){
var = 1;
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:IndexedIterator[String]>*/
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method environ#NativeString#get_environ for (self: NativeString): NativeString */
char* core__environ___NativeString___get_environ(char* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = core__environ___NativeString_get_environ___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method environ#NativeString#setenv for (self: NativeString, NativeString) */
void core__environ___NativeString___setenv(char* self, char* p0) {
core__environ___NativeString_setenv___impl(self, p0);
RET_LABEL:;
}
/* method environ#Sys#init for (self: Sys) */
void core__environ___Sys___core__kernel__Object__init(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var_x /* var x: String */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
short int var8 /* : Bool */;
long var9 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__environ___Sys___core__kernel__Object__init]))(self); /* init on <self:Sys>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "NIT_SRAND";
var2 = core__flat___NativeString___to_s_full(var1, 9l, 9l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_core__environ__String__environ]))(var); /* environ on <var:String>*/
}
var_x = var3;
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "";
var7 = core__flat___NativeString___to_s_full(var6, 0l, 0l);
var5 = var7;
varonce4 = var5;
}
{
var8 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_x, var5); /* != on <var_x:String>*/
}
if (var8){
{
var9 = ((long(*)(val* self))(var_x->class->vft[COLOR_core__abstract_text__Text__to_i]))(var_x); /* to_i on <var_x:String>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__math__Sys__srand_from]))(self, var9); /* srand_from on <self:Sys>*/
}
} else {
}
RET_LABEL:;
}
