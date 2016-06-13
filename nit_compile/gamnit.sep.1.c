#include "gamnit.sep.0.h"
/* method gamnit#App#display for (self: App): nullable GamnitDisplay */
val* gamnit___app__App___display(val* self) {
val* var /* : nullable GamnitDisplay */;
val* var1 /* : nullable GamnitDisplay */;
var1 = self->attrs[COLOR_gamnit__App___display].val; /* _display on <self:App> */
var = var1;
RET_LABEL:;
return var;
}
/* method gamnit#App#display= for (self: App, nullable GamnitDisplay) */
void gamnit___app__App___display_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__App___display].val = p0; /* _display on <self:App> */
RET_LABEL:;
}
/* method gamnit#App#on_create for (self: App) */
void gamnit___app__App___app__app_base__AppComponent__on_create(val* self) {
val* var /* : GamnitDisplay */;
val* var_display /* var display: GamnitDisplay */;
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit___app__App___app__app_base__AppComponent__on_create]))(self); /* on_create on <self:App>*/
}
var = NEW_gamnit__GamnitDisplay(&type_gamnit__GamnitDisplay);
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:GamnitDisplay>*/
}
var_display = var;
{
((void(*)(val* self))(var_display->class->vft[COLOR_gamnit__display__GamnitDisplay__setup]))(var_display); /* setup on <var_display:GamnitDisplay>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__App__display_61d]))(self, var_display); /* display= on <self:App>*/
}
RET_LABEL:;
}
/* method gamnit#App#frame_core for (self: App, GamnitDisplay) */
void gamnit___app__App___frame_core(val* self, val* p0) {
val* var_display /* var display: GamnitDisplay */;
var_display = p0;
RET_LABEL:;
}
/* method gamnit#App#frame_full for (self: App) */
void gamnit___app__App___frame_full(val* self) {
val* var /* : nullable GamnitDisplay */;
val* var_display /* var display: nullable GamnitDisplay */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
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
if (var1){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__App__frame_core]))(self, var_display); /* frame_core on <self:App>*/
}
} else {
}
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit__App__feed_events]))(self); /* feed_events on <self:App>*/
}
RET_LABEL:;
}
/* method gamnit#App#run for (self: App) */
void gamnit___app__App___run(val* self) {
for(;;) {
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit__App__frame_full]))(self); /* frame_full on <self:App>*/
}
}
RET_LABEL:;
}
/* method gamnit#App#feed_events for (self: App) */
void gamnit___app__App___feed_events(val* self) {
RET_LABEL:;
}
/* method gamnit#App#accept_event for (self: App, InputEvent): Bool */
short int gamnit___app__App___accept_event(val* self, val* p0) {
short int var /* : Bool */;
val* var_event /* var event: InputEvent */;
var_event = p0;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method gamnit#Sys#run for (self: Sys) */
void gamnit___core__Sys___run(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : String */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
short int var8 /* : Bool */;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "NIT_TESTING";
var2 = core__flat___NativeString___to_s_full(var1, 11l, 11l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_core__environ__String__environ]))(var); /* environ on <var:String>*/
}
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "true";
var7 = core__flat___NativeString___to_s_full(var6, 4l, 4l);
var5 = var7;
varonce4 = var5;
}
{
var8 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, var5); /* == on <var3:String>*/
}
if (var8){
{
{ /* Inline kernel#Sys#exit (self,0l) on <self:Sys> */
exit(0l);
RET_LABEL9:(void)0;
}
}
} else {
}
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit___core__Sys___run]))(self); /* run on <self:Sys>*/
}
RET_LABEL:;
}
