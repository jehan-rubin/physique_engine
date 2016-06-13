#include "gamnit__gamnit_linux.sep.0.h"
/* method gamnit_linux#App#feed_events for (self: App) */
void gamnit__gamnit_linux___app__App___feed_events(val* self) {
val* var /* : nullable GamnitDisplay */;
val* var_display /* var display: nullable GamnitDisplay */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : SDLDisplay */;
val* var4 /* : Sequence[SDLInputEvent] */;
val* var_events /* var events: Sequence[SDLInputEvent] */;
val* var_ /* var : Sequence[SDLInputEvent] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : IndexedIterator[SDLInputEvent] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_event /* var event: SDLInputEvent */;
short int var9 /* : Bool */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__App__display]))(self); /* display on <self:App>*/
}
var_display = var;
if (var_display == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_display->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_display, ((val*)NULL)); /* == on <var_display:nullable GamnitDisplay>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(var_display->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__sdl_display]))(var_display); /* sdl_display on <var_display:nullable GamnitDisplay(GamnitDisplay)>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_sdl__SDLDisplay__events]))(var3); /* events on <var3:SDLDisplay>*/
}
var_events = var4;
{
((void(*)(val* self))(var_display->class->vft[COLOR_gamnit__gamnit_linux__GamnitDisplay__check_lock_cursor]))(var_display); /* check_lock_cursor on <var_display:nullable GamnitDisplay(GamnitDisplay)>*/
}
var_ = var_events;
{
var5 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[SDLInputEvent]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:IndexedIterator[SDLInputEvent]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:IndexedIterator[SDLInputEvent]>*/
}
var_event = var8;
{
var9 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__App__accept_event]))(self, var_event); /* accept_event on <self:App>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:IndexedIterator[SDLInputEvent]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:IndexedIterator[SDLInputEvent]>*/
}
RET_LABEL:;
}
/* method gamnit_linux#GamnitDisplay#check_lock_cursor for (self: GamnitDisplay) */
void gamnit__gamnit_linux___GamnitDisplay___check_lock_cursor(val* self) {
val* var /* : SDLDisplay */;
val* var_sdl_display /* var sdl_display: SDLDisplay */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__sdl_display]))(self); /* sdl_display on <self:GamnitDisplay>*/
}
var_sdl_display = var;
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_gamnit__display__GamnitDisplay__lock_cursor]))(self); /* lock_cursor on <self:GamnitDisplay>*/
}
var_ = var2;
if (var2){
{
var3 = ((short int(*)(val* self))(var_sdl_display->class->vft[COLOR_sdl__SDLDisplay__input_focus]))(var_sdl_display); /* input_focus on <var_sdl_display:SDLDisplay>*/
}
var1 = var3;
} else {
var1 = var_;
}
if (var1){
{
((void(*)(val* self, short int p0))(var_sdl_display->class->vft[COLOR_sdl__SDLDisplay__ignore_mouse_motion_events_61d]))(var_sdl_display, 1); /* ignore_mouse_motion_events= on <var_sdl_display:SDLDisplay>*/
}
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__display__GamnitDisplay__width]))(self); /* width on <self:GamnitDisplay>*/
}
{
{ /* Inline kernel#Int#/ (var4,2l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var7 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var8 = var4 / 2l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__display__GamnitDisplay__height]))(self); /* height on <self:GamnitDisplay>*/
}
{
{ /* Inline kernel#Int#/ (var9,2l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var12 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var16 = var9 / 2l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1))(var_sdl_display->class->vft[COLOR_sdl__SDLDisplay__warp_mouse]))(var_sdl_display, var5, var10); /* warp_mouse on <var_sdl_display:SDLDisplay>*/
}
{
((void(*)(val* self, short int p0))(var_sdl_display->class->vft[COLOR_sdl__SDLDisplay__ignore_mouse_motion_events_61d]))(var_sdl_display, 0); /* ignore_mouse_motion_events= on <var_sdl_display:SDLDisplay>*/
}
} else {
}
RET_LABEL:;
}
