#include "linux.sep.0.h"
/* method linux#App#assets_dir for (self: App): String */
val* linux___app__App___assets_dir(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : Sys */;
val* var5 /* : Sys */;
val* var6 /* : String */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : String */;
var1 = self->attrs[COLOR_linux__App___assets_dir].val != NULL; /* _assets_dir on <self:App> */
if(likely(var1)) {
var2 = self->attrs[COLOR_linux__App___assets_dir].val; /* _assets_dir on <self:App> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _assets_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_linux, 23);
fatal_exit(1);
}
} else {
{
{ /* Inline kernel#Object#sys (self) on <self:App> */
var5 = glob_sys;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__Sys__program_name]))(var3); /* program_name on <var3:Sys>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__file__String__dirname]))(var6); /* dirname on <var6:String>*/
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "../assets/";
var10 = core__flat___NativeString___to_s_full(var9, 10l, 10l);
var8 = var10;
varonce = var8;
}
{
var11 = ((val*(*)(val* self, val* p0))(var7->class->vft[COLOR_core__file__String___47d]))(var7, var8); /* / on <var7:String>*/
}
self->attrs[COLOR_linux__App___assets_dir].val = var11; /* _assets_dir on <self:App> */
var2 = var11;
}
var = var2;
RET_LABEL:;
return var;
}
/* method linux#App#assets_dir= for (self: App, String) */
void linux___app__App___assets_dir_61d(val* self, val* p0) {
self->attrs[COLOR_linux__App___assets_dir].val = p0; /* _assets_dir on <self:App> */
RET_LABEL:;
}
/* method linux#App#setup for (self: App) */
void linux___app__App___setup(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_linux___app__App___setup]))(self); /* setup on <self:App>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_app__app_base__AppComponent__on_create]))(self); /* on_create on <self:App>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_app__app_base__AppComponent__on_restore_state]))(self); /* on_restore_state on <self:App>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_app__app_base__AppComponent__on_start]))(self); /* on_start on <self:App>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_app__app_base__AppComponent__on_resume]))(self); /* on_resume on <self:App>*/
}
RET_LABEL:;
}
/* method linux#App#run for (self: App) */
void linux___app__App___run(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_linux___app__App___run]))(self); /* run on <self:App>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_app__app_base__AppComponent__on_pause]))(self); /* on_pause on <self:App>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_app__app_base__AppComponent__on_save_state]))(self); /* on_save_state on <self:App>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_app__app_base__AppComponent__on_stop]))(self); /* on_stop on <self:App>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_app__app_base__AppComponent__on_destroy]))(self); /* on_destroy on <self:App>*/
}
RET_LABEL:;
}
/* method linux#TextAsset#load for (self: TextAsset): String */
val* linux___app__TextAsset___load(val* self) {
val* var /* : String */;
val* var1 /* : Sys */;
val* var2 /* : App */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var_path /* var path: String */;
val* var6 /* : Path */;
val* var7 /* : FileReader */;
val* var_reader /* var reader: FileReader */;
val* var8 /* : String */;
val* var_content /* var content: String */;
val* var9 /* : nullable IOError */;
val* var_error /* var error: nullable IOError */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_app__app_base__Sys__app]))(var1); /* app on <var1:Sys>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_linux__App__assets_dir]))(var2); /* assets_dir on <var2:App>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_app__assets__Asset__path]))(self); /* path on <self:TextAsset>*/
}
{
var5 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__file__String___47d]))(var3, var4); /* / on <var3:String>*/
}
var_path = var5;
{
var6 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__file__Text__to_path]))(var_path); /* to_path on <var_path:String>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__file__Path__open_ro]))(var6); /* open_ro on <var6:Path>*/
}
var_reader = var7;
{
var8 = ((val*(*)(val* self))(var_reader->class->vft[COLOR_core__stream__Reader__read_all]))(var_reader); /* read_all on <var_reader:FileReader>*/
}
var_content = var8;
{
((void(*)(val* self))(var_reader->class->vft[COLOR_core__stream__Stream__close]))(var_reader); /* close on <var_reader:FileReader>*/
}
{
var9 = ((val*(*)(val* self))(var_reader->class->vft[COLOR_core__stream__Stream__last_error]))(var_reader); /* last_error on <var_reader:FileReader>*/
}
var_error = var9;
if (var_error == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_error->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_error, ((val*)NULL)); /* != on <var_error:nullable IOError>*/
var10 = var11;
}
if (var10){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_app__assets__TextAsset__error_61d]))(self, var_error); /* error= on <self:TextAsset>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_app__assets__TextAsset__to_s_61d]))(self, var_content); /* to_s= on <self:TextAsset>*/
}
var = var_content;
goto RET_LABEL;
RET_LABEL:;
return var;
}
