#include "app__app_base.sep.0.h"
/* method app_base#App#init for (self: App) */
void app___app__App___init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:App>*/
}
RET_LABEL:;
}
/* method app_base#App#setup for (self: App) */
void app___app__App___setup(val* self) {
RET_LABEL:;
}
/* method app_base#App#run for (self: App) */
void app___app__App___run(val* self) {
RET_LABEL:;
}
/* method app_base#AppComponent#on_create for (self: AppComponent) */
void app___app__AppComponent___on_create(val* self) {
RET_LABEL:;
}
/* method app_base#AppComponent#on_start for (self: AppComponent) */
void app___app__AppComponent___on_start(val* self) {
RET_LABEL:;
}
/* method app_base#AppComponent#on_resume for (self: AppComponent) */
void app___app__AppComponent___on_resume(val* self) {
RET_LABEL:;
}
/* method app_base#AppComponent#on_pause for (self: AppComponent) */
void app___app__AppComponent___on_pause(val* self) {
RET_LABEL:;
}
/* method app_base#AppComponent#on_stop for (self: AppComponent) */
void app___app__AppComponent___on_stop(val* self) {
RET_LABEL:;
}
/* method app_base#AppComponent#on_destroy for (self: AppComponent) */
void app___app__AppComponent___on_destroy(val* self) {
RET_LABEL:;
}
/* method app_base#AppComponent#on_save_state for (self: AppComponent) */
void app___app__AppComponent___on_save_state(val* self) {
RET_LABEL:;
}
/* method app_base#AppComponent#on_restore_state for (self: AppComponent) */
void app___app__AppComponent___on_restore_state(val* self) {
RET_LABEL:;
}
/* method app_base#Sys#print_warning for (self: Sys, Object) */
void app__app_base___core__Sys___print_warning(val* self, val* p0) {
val* var_object /* var object: Object */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : String */;
val* var5 /* : Sys */;
val* var7 /* : Sys */;
val* var8 /* : Writer */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
var_object = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_core__file__Sys__stderr]))(var); /* stderr on <var:Sys>*/
}
{
var4 = ((val*(*)(val* self))((((long)var_object&3)?class_info[((long)var_object&3)]:var_object->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_object); /* to_s on <var_object:Object>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__stream__Writer__write]))(var3, var4); /* write on <var3:Writer>*/
}
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var7 = glob_sys;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var8 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__file__Sys__stderr]))(var5); /* stderr on <var5:Sys>*/
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "\n";
var11 = core__flat___NativeString___to_s_full(var10, 1l, 1l);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__stream__Writer__write]))(var8, var9); /* write on <var8:Writer>*/
}
RET_LABEL:;
}
/* method app_base#Sys#app for (self: Sys): App */
val* app__app_base___core__Sys___app(val* self) {
val* var /* : App */;
static val* varonce;
static int varonce_guard;
val* var1 /* : App */;
val* var2 /* : App */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_app__App(&type_app__App);
{
((void(*)(val* self))(var2->class->vft[COLOR_app__app_base__App__init]))(var2); /* init on <var2:App>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method app_base#Sys#main for (self: Sys) */
void app__app_base___core__Sys___main(val* self) {
val* var /* : App */;
val* var1 /* : App */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_app__app_base__Sys__app]))(self); /* app on <self:Sys>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_app__app_base__App__setup]))(var); /* setup on <var:App>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_app__app_base__Sys__app]))(self); /* app on <self:Sys>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_app__app_base__App__run]))(var1); /* run on <var1:App>*/
}
RET_LABEL:;
}
