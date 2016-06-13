#include "sdl.sep.0.h"
/* method sdl#SDLDisplay#new for (self: SDLDisplay, Int, Int): SDLDisplay */
val* sdl___sdl__SDLDisplay___new(val* self, long p0, long p1) {
val* var /* : SDLDisplay */;
val* var1 /* : SDLDisplay */;
val* var2 /* : SDLDisplay */;
var1 = sdl___new_SDLDisplay___impl(p0, p1);
var2 = BOX_core__Pointer(var1); /* boxing SDLDisplay */
var2->type = &type_sdl__SDLDisplay;
var2->class = &class_sdl__SDLDisplay;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for sdl::SDLDisplay::enable_mouse_motion_events */
int sdl___SDLDisplay_enable_mouse_motion_events( void* self ) {
val* var /* : SDLDisplay */;
short int var1 /* : Bool */;
var = BOX_core__Pointer(self); /* boxing SDLDisplay */
var->type = &type_sdl__SDLDisplay;
var->class = &class_sdl__SDLDisplay;
{
var1 = ((short int(*)(val* self))(var->class->vft[COLOR_sdl__SDLDisplay__enable_mouse_motion_events]))(var); /* enable_mouse_motion_events on <var:SDLDisplay>*/
}
return var1;
}
/* method sdl#SDLDisplay#enable_mouse_motion_events for (self: SDLDisplay): Bool */
short int sdl___sdl__SDLDisplay___enable_mouse_motion_events(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLDisplay#destroy for (self: SDLDisplay) */
void sdl___sdl__SDLDisplay___destroy(val* self) {
void* var /* : SDLDisplay for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
sdl___SDLDisplay_destroy___impl(var);
RET_LABEL:;
}
/* method sdl#SDLDisplay#finish for (self: SDLDisplay) */
void sdl___sdl__SDLDisplay___mnit__display__Drawable__finish(val* self) {
void* var /* : SDLDisplay for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
sdl___SDLDisplay_finish___impl(var);
RET_LABEL:;
}
/* method sdl#SDLDisplay#clear_int for (self: SDLDisplay, Int, Int, Int) */
void sdl___sdl__SDLDisplay___clear_int(val* self, long p0, long p1, long p2) {
void* var /* : SDLDisplay for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
sdl___SDLDisplay_clear_int___impl(var, p0, p1, p2);
RET_LABEL:;
}
/* method sdl#SDLDisplay#width for (self: SDLDisplay): Int */
long sdl___sdl__SDLDisplay___mnit__display__Sized__width(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
var1 = sdl___SDLDisplay_width___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLDisplay#height for (self: SDLDisplay): Int */
long sdl___sdl__SDLDisplay___mnit__display__Sized__height(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
var1 = sdl___SDLDisplay_height___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLDisplay#fill_rect for (self: SDLDisplay, SDLRectangle, Int, Int, Int) */
void sdl___sdl__SDLDisplay___fill_rect(val* self, val* p0, long p1, long p2, long p3) {
void* var /* : SDLDisplay for extern */;
void* var1 /* : SDLRectangle for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
var1 = ((struct instance_core__Pointer*)p0)->value; /* unboxing SDLRectangle */
sdl___SDLDisplay_fill_rect___impl(var, var1, p1, p2, p3);
RET_LABEL:;
}
/* method sdl#SDLDisplay#clear for (self: SDLDisplay, Float, Float, Float) */
void sdl___sdl__SDLDisplay___mnit__display__Drawable__clear(val* self, double p0, double p1, double p2) {
void* var /* : SDLDisplay for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
sdl___SDLDisplay_clear___impl(var, p0, p1, p2);
RET_LABEL:;
}
/* method sdl#SDLDisplay#events for (self: SDLDisplay): Sequence[SDLInputEvent] */
val* sdl___sdl__SDLDisplay___events(val* self) {
val* var /* : Sequence[SDLInputEvent] */;
val* var1 /* : Array[SDLInputEvent] */;
val* var_events /* var events: Array[SDLInputEvent] */;
val* var2 /* : nullable SDLInputEvent */;
val* var_new_event /* var new_event: nullable SDLInputEvent */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var1 = NEW_core__Array(&type_core__Array__sdl__SDLInputEvent);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[SDLInputEvent]>*/
}
var_events = var1;
for(;;) {
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_sdl__SDLDisplay__poll_event]))(self); /* poll_event on <self:SDLDisplay>*/
}
var_new_event = var2;
if (var_new_event == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))((((long)var_new_event&3)?class_info[((long)var_new_event&3)]:var_new_event->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_new_event, ((val*)NULL)); /* == on <var_new_event:nullable SDLInputEvent>*/
var3 = var4;
}
if (var3){
goto BREAK_label;
} else {
}
{
((void(*)(val* self, val* p0))(var_events->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_events, var_new_event); /* add on <var_events:Array[SDLInputEvent]>*/
}
}
BREAK_label: (void)0;
var = var_events;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLDisplay#poll_event for (self: SDLDisplay): nullable SDLInputEvent */
val* sdl___sdl__SDLDisplay___poll_event(val* self) {
val* var /* : nullable SDLInputEvent */;
val* var1 /* : nullable SDLInputEvent */;
void* var2 /* : SDLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
struct nitni_instance* ret_var;
ret_var = sdl___SDLDisplay_poll_event___impl(var2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
struct nitni_instance * NIT_NULL___null_SDLInputEvent() {
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = NULL;
return ret_for_c;
}
/* nitni callback for sdl::SDLDisplay::new_key_event */
struct nitni_instance * sdl___SDLDisplay_new_key_event( void* self, char* name, int down ) {
val* var /* : SDLDisplay */;
val* var1 /* : nullable SDLInputEvent */;
var = BOX_core__Pointer(self); /* boxing SDLDisplay */
var->type = &type_sdl__SDLDisplay;
var->class = &class_sdl__SDLDisplay;
{
var1 = ((val*(*)(val* self, char* p0, short int p1))(var->class->vft[COLOR_sdl__SDLDisplay__new_key_event]))(var, name, down); /* new_key_event on <var:SDLDisplay>*/
}
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var1;
return ret_for_c;
}
/* nitni callback for sdl::SDLDisplay::new_mouse_motion_event */
struct nitni_instance * sdl___SDLDisplay_new_mouse_motion_event( void* self, double x, double y, double xr, double yr, int down ) {
val* var /* : SDLDisplay */;
val* var1 /* : nullable SDLInputEvent */;
var = BOX_core__Pointer(self); /* boxing SDLDisplay */
var->type = &type_sdl__SDLDisplay;
var->class = &class_sdl__SDLDisplay;
{
var1 = ((val*(*)(val* self, double p0, double p1, double p2, double p3, short int p4))(var->class->vft[COLOR_sdl__SDLDisplay__new_mouse_motion_event]))(var, x, y, xr, yr, down); /* new_mouse_motion_event on <var:SDLDisplay>*/
}
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var1;
return ret_for_c;
}
/* nitni callback for sdl::SDLDisplay::new_mouse_button_event */
struct nitni_instance * sdl___SDLDisplay_new_mouse_button_event( void* self, double x, double y, long id, int down ) {
val* var /* : SDLDisplay */;
val* var1 /* : nullable SDLInputEvent */;
var = BOX_core__Pointer(self); /* boxing SDLDisplay */
var->type = &type_sdl__SDLDisplay;
var->class = &class_sdl__SDLDisplay;
{
var1 = ((val*(*)(val* self, double p0, double p1, long p2, short int p3))(var->class->vft[COLOR_sdl__SDLDisplay__new_mouse_button_event]))(var, x, y, id, down); /* new_mouse_button_event on <var:SDLDisplay>*/
}
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var1;
return ret_for_c;
}
/* nitni callback for sdl::SDLDisplay::new_quit_event */
struct nitni_instance * sdl___SDLDisplay_new_quit_event( void* self ) {
val* var /* : SDLDisplay */;
val* var1 /* : nullable SDLInputEvent */;
var = BOX_core__Pointer(self); /* boxing SDLDisplay */
var->type = &type_sdl__SDLDisplay;
var->class = &class_sdl__SDLDisplay;
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_sdl__SDLDisplay__new_quit_event]))(var); /* new_quit_event on <var:SDLDisplay>*/
}
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var1;
return ret_for_c;
}
/* method sdl#SDLDisplay#new_key_event for (self: SDLDisplay, NativeString, Bool): nullable SDLInputEvent */
val* sdl___sdl__SDLDisplay___new_key_event(val* self, char* p0, short int p1) {
val* var /* : nullable SDLInputEvent */;
char* var_name /* var name: NativeString */;
short int var_down /* var down: Bool */;
val* var1 /* : SDLKeyEvent */;
val* var2 /* : String */;
var_name = p0;
var_down = p1;
var1 = NEW_sdl__SDLKeyEvent(&type_sdl__SDLKeyEvent);
var2 = core__flat___NativeString___core__abstract_text__Object__to_s(var_name);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_sdl__SDLKeyEvent__name_61d]))(var1, var2); /* name= on <var1:SDLKeyEvent>*/
}
{
((void(*)(val* self, short int p0))(var1->class->vft[COLOR_sdl__SDLKeyEvent__down_61d]))(var1, var_down); /* down= on <var1:SDLKeyEvent>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:SDLKeyEvent>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLDisplay#new_mouse_motion_event for (self: SDLDisplay, Float, Float, Float, Float, Bool): nullable SDLInputEvent */
val* sdl___sdl__SDLDisplay___new_mouse_motion_event(val* self, double p0, double p1, double p2, double p3, short int p4) {
val* var /* : nullable SDLInputEvent */;
double var_x /* var x: Float */;
double var_y /* var y: Float */;
double var_xr /* var xr: Float */;
double var_yr /* var yr: Float */;
short int var_down /* var down: Bool */;
val* var1 /* : SDLMouseMotionEvent */;
var_x = p0;
var_y = p1;
var_xr = p2;
var_yr = p3;
var_down = p4;
var1 = NEW_sdl__SDLMouseMotionEvent(&type_sdl__SDLMouseMotionEvent);
{
((void(*)(val* self, double p0, double p1, double p2, double p3, short int p4))(var1->class->vft[COLOR_sdl__SDLMouseMotionEvent__init]))(var1, var_x, var_y, var_xr, var_yr, var_down); /* init on <var1:SDLMouseMotionEvent>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLDisplay#new_mouse_button_event for (self: SDLDisplay, Float, Float, Int, Bool): nullable SDLInputEvent */
val* sdl___sdl__SDLDisplay___new_mouse_button_event(val* self, double p0, double p1, long p2, short int p3) {
val* var /* : nullable SDLInputEvent */;
double var_x /* var x: Float */;
double var_y /* var y: Float */;
long var_id /* var id: Int */;
short int var_down /* var down: Bool */;
val* var1 /* : SDLMouseButtonEvent */;
var_x = p0;
var_y = p1;
var_id = p2;
var_down = p3;
var1 = NEW_sdl__SDLMouseButtonEvent(&type_sdl__SDLMouseButtonEvent);
{
((void(*)(val* self, double p0, double p1, long p2, short int p3))(var1->class->vft[COLOR_sdl__SDLMouseButtonEvent__init]))(var1, var_x, var_y, var_id, var_down); /* init on <var1:SDLMouseButtonEvent>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLDisplay#new_quit_event for (self: SDLDisplay): nullable SDLInputEvent */
val* sdl___sdl__SDLDisplay___new_quit_event(val* self) {
val* var /* : nullable SDLInputEvent */;
val* var1 /* : SDLQuitEvent */;
var1 = NEW_sdl__SDLQuitEvent(&type_sdl__SDLQuitEvent);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:SDLQuitEvent>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLDisplay#warp_mouse for (self: SDLDisplay, Int, Int) */
void sdl___sdl__SDLDisplay___warp_mouse(val* self, long p0, long p1) {
void* var /* : SDLDisplay for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
sdl___SDLDisplay_warp_mouse___impl(var, p0, p1);
RET_LABEL:;
}
/* method sdl#SDLDisplay#show_cursor= for (self: SDLDisplay, Bool) */
void sdl___sdl__SDLDisplay___show_cursor_61d(val* self, short int p0) {
void* var /* : SDLDisplay for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
sdl___SDLDisplay_show_cursor__assign___impl(var, p0);
RET_LABEL:;
}
/* method sdl#SDLDisplay#show_cursor for (self: SDLDisplay): Bool */
short int sdl___sdl__SDLDisplay___show_cursor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : SDLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
var1 = sdl___SDLDisplay_show_cursor___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLDisplay#grab_input= for (self: SDLDisplay, Bool) */
void sdl___sdl__SDLDisplay___grab_input_61d(val* self, short int p0) {
void* var /* : SDLDisplay for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
sdl___SDLDisplay_grab_input__assign___impl(var, p0);
RET_LABEL:;
}
/* method sdl#SDLDisplay#grab_input for (self: SDLDisplay): Bool */
short int sdl___sdl__SDLDisplay___grab_input(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : SDLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
var1 = sdl___SDLDisplay_grab_input___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLDisplay#ignore_mouse_motion_events for (self: SDLDisplay): Bool */
short int sdl___sdl__SDLDisplay___ignore_mouse_motion_events(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : SDLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
var1 = sdl___SDLDisplay_ignore_mouse_motion_events___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLDisplay#ignore_mouse_motion_events= for (self: SDLDisplay, Bool) */
void sdl___sdl__SDLDisplay___ignore_mouse_motion_events_61d(val* self, short int p0) {
void* var /* : SDLDisplay for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
sdl___SDLDisplay_ignore_mouse_motion_events__assign___impl(var, p0);
RET_LABEL:;
}
/* method sdl#SDLDisplay#mouse_focus for (self: SDLDisplay): Bool */
short int sdl___sdl__SDLDisplay___mouse_focus(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : SDLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
var1 = sdl___SDLDisplay_mouse_focus___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLDisplay#input_focus for (self: SDLDisplay): Bool */
short int sdl___sdl__SDLDisplay___input_focus(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : SDLDisplay for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDisplay */
var1 = sdl___SDLDisplay_input_focus___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLDrawable#blit for (self: SDLDrawable, SDLImage, Numeric, Numeric) */
void sdl___sdl__SDLDrawable___mnit__display__Drawable__blit(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_img /* var img: SDLImage */;
val* var_x /* var x: Numeric */;
val* var_y /* var y: Numeric */;
long var1 /* : Int */;
long var2 /* : Int */;
/* Covariant cast for argument 0 (img) <p0:SDLImage> isa I */
/* <p0:SDLImage> isa I */
type_struct = self->type->resolution_table->types[COLOR_mnit__display__Drawable__I];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "I", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_sdl, 193);
fatal_exit(1);
}
var_img = p0;
var_x = p1;
var_y = p2;
{
var1 = ((long(*)(val* self))((((long)var_x&3)?class_info[((long)var_x&3)]:var_x->class)->vft[COLOR_core__kernel__Numeric__to_i]))(var_x); /* to_i on <var_x:Numeric>*/
}
{
var2 = ((long(*)(val* self))((((long)var_y&3)?class_info[((long)var_y&3)]:var_y->class)->vft[COLOR_core__kernel__Numeric__to_i]))(var_y); /* to_i on <var_y:Numeric>*/
}
{
((void(*)(val* self, val* p0, long p1, long p2))(self->class->vft[COLOR_sdl__SDLDrawable__native_blit]))(self, var_img, var1, var2); /* native_blit on <self:SDLDrawable>*/
}
RET_LABEL:;
}
/* method sdl#SDLDrawable#native_blit for (self: SDLDrawable, SDLImage, Int, Int) */
void sdl___sdl__SDLDrawable___native_blit(val* self, val* p0, long p1, long p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
void* var1 /* : SDLDrawable for extern */;
void* var2 /* : SDLImage for extern */;
/* Covariant cast for argument 0 (img) <p0:SDLImage> isa I */
/* <p0:SDLImage> isa I */
type_struct = self->type->resolution_table->types[COLOR_mnit__display__Drawable__I];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "I", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_sdl, 194);
fatal_exit(1);
}
var1 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLDrawable */
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing SDLImage */
sdl___SDLDrawable_native_blit___impl(var1, var2, p1, p2);
RET_LABEL:;
}
/* method sdl#SDLDrawable#blit_centered for (self: SDLDrawable, SDLImage, Numeric, Numeric) */
void sdl___sdl__SDLDrawable___mnit__display__Drawable__blit_centered(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_img /* var img: SDLImage */;
val* var_x /* var x: Numeric */;
val* var_y /* var y: Numeric */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
long var8 /* : Int */;
val* var9 /* : Numeric */;
val* var10 /* : Numeric */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var19 /* : Numeric */;
val* var20 /* : Numeric */;
/* Covariant cast for argument 0 (img) <p0:SDLImage> isa I */
/* <p0:SDLImage> isa I */
type_struct = self->type->resolution_table->types[COLOR_mnit__display__Drawable__I];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "I", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_sdl, 204);
fatal_exit(1);
}
var_img = p0;
var_x = p1;
var_y = p2;
{
var1 = ((long(*)(val* self))(var_img->class->vft[COLOR_mnit__display__Sized__width]))(var_img); /* width on <var_img:SDLImage>*/
}
{
{ /* Inline kernel#Int#/ (var1,2l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var4 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var8 = var1 / 2l;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var9 = (val*)(var2<<2|1);
var10 = ((val*(*)(val* self, val* p0))((((long)var_x&3)?class_info[((long)var_x&3)]:var_x->class)->vft[COLOR_core__kernel__Numeric___45d]))(var_x, var9); /* - on <var_x:Numeric>*/
}
var_x = var10;
{
var11 = ((long(*)(val* self))(var_img->class->vft[COLOR_mnit__display__Sized__height]))(var_img); /* height on <var_img:SDLImage>*/
}
{
{ /* Inline kernel#Int#/ (var11,2l) on <var11:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var14 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var18 = var11 / 2l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var19 = (val*)(var12<<2|1);
var20 = ((val*(*)(val* self, val* p0))((((long)var_y&3)?class_info[((long)var_y&3)]:var_y->class)->vft[COLOR_core__kernel__Numeric___45d]))(var_y, var19); /* - on <var_y:Numeric>*/
}
var_y = var20;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_mnit__display__Drawable__blit]))(self, var_img, var_x, var_y); /* blit on <self:SDLDrawable>*/
}
RET_LABEL:;
}
/* method sdl#SDLImage#from_file for (self: SDLImage, String): SDLImage */
val* sdl___sdl__SDLImage___from_file(val* self, val* p0) {
val* var /* : SDLImage */;
val* var1 /* : SDLImage */;
val* var2 /* : SDLImage */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = p0;
var1 = sdl___new_SDLImage_from_file___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing SDLImage */
var2->type = &type_sdl__SDLImage;
var2->class = &class_sdl__SDLImage;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for core::Text::to_cstring */
char* sdl___String_to_cstring( struct nitni_instance * self ) {
char* var /* : NativeString */;
{
var = ((char*(*)(val* self))(self->value->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self->value); /* to_cstring on <self->value:String>*/
}
return var;
}
/* method sdl#SDLImage#copy_of for (self: SDLImage, SDLImage): SDLImage */
val* sdl___sdl__SDLImage___copy_of(val* self, val* p0) {
val* var /* : SDLImage */;
val* var1 /* : SDLImage */;
void* var2 /* : SDLImage for extern */;
val* var3 /* : SDLImage */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing SDLImage */
var1 = sdl___new_SDLImage_copy_of___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing SDLImage */
var3->type = &type_sdl__SDLImage;
var3->class = &class_sdl__SDLImage;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLImage#save_to_file for (self: SDLImage, String) */
void sdl___sdl__SDLImage___save_to_file(val* self, val* p0) {
void* var /* : SDLImage for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLImage */
struct nitni_instance* var_for_c_1;
var_for_c_1 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
sdl___SDLImage_save_to_file___impl(var, var_for_c_1);
RET_LABEL:;
}
/* method sdl#SDLImage#destroy for (self: SDLImage) */
void sdl___sdl__SDLImage___mnit__display__Image__destroy(val* self) {
void* var /* : SDLImage for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLImage */
sdl___SDLImage_destroy___impl(var);
RET_LABEL:;
}
/* method sdl#SDLImage#width for (self: SDLImage): Int */
long sdl___sdl__SDLImage___mnit__display__Sized__width(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLImage for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLImage */
var1 = sdl___SDLImage_width___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLImage#height for (self: SDLImage): Int */
long sdl___sdl__SDLImage___mnit__display__Sized__height(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLImage for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLImage */
var1 = sdl___SDLImage_height___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLImage#is_ok for (self: SDLImage): Bool */
short int sdl___sdl__SDLImage___is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(self); /* address_is_null on <self:SDLImage>*/
}
var2 = !var1;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLImage#pixels for (self: SDLImage): NativeCByteArray */
val* sdl___sdl__SDLImage___pixels(val* self) {
val* var /* : NativeCByteArray */;
val* var1 /* : NativeCByteArray */;
void* var2 /* : SDLImage for extern */;
val* var3 /* : NativeCByteArray */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLImage */
var1 = sdl___SDLImage_pixels___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing NativeCByteArray */
var3->type = &type_c__NativeCByteArray;
var3->class = &class_c__NativeCByteArray;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLImage#amask for (self: SDLImage): Int */
long sdl___sdl__SDLImage___amask(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLImage for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLImage */
var1 = sdl___SDLImage_amask___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLRectangle#new for (self: SDLRectangle, Int, Int, Int, Int): SDLRectangle */
val* sdl___sdl__SDLRectangle___new(val* self, long p0, long p1, long p2, long p3) {
val* var /* : SDLRectangle */;
val* var1 /* : SDLRectangle */;
val* var2 /* : SDLRectangle */;
var1 = sdl___new_SDLRectangle___impl(p0, p1, p2, p3);
var2 = BOX_core__Pointer(var1); /* boxing SDLRectangle */
var2->type = &type_sdl__SDLRectangle;
var2->class = &class_sdl__SDLRectangle;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLRectangle#x= for (self: SDLRectangle, Int) */
void sdl___sdl__SDLRectangle___x_61d(val* self, long p0) {
void* var /* : SDLRectangle for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLRectangle */
sdl___SDLRectangle_x__assign___impl(var, p0);
RET_LABEL:;
}
/* method sdl#SDLRectangle#x for (self: SDLRectangle): Int */
long sdl___sdl__SDLRectangle___x(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLRectangle for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLRectangle */
var1 = sdl___SDLRectangle_x___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLRectangle#y= for (self: SDLRectangle, Int) */
void sdl___sdl__SDLRectangle___y_61d(val* self, long p0) {
void* var /* : SDLRectangle for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLRectangle */
sdl___SDLRectangle_y__assign___impl(var, p0);
RET_LABEL:;
}
/* method sdl#SDLRectangle#y for (self: SDLRectangle): Int */
long sdl___sdl__SDLRectangle___y(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLRectangle for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLRectangle */
var1 = sdl___SDLRectangle_y___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLRectangle#w= for (self: SDLRectangle, Int) */
void sdl___sdl__SDLRectangle___w_61d(val* self, long p0) {
void* var /* : SDLRectangle for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLRectangle */
sdl___SDLRectangle_w__assign___impl(var, p0);
RET_LABEL:;
}
/* method sdl#SDLRectangle#w for (self: SDLRectangle): Int */
long sdl___sdl__SDLRectangle___w(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLRectangle for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLRectangle */
var1 = sdl___SDLRectangle_w___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLRectangle#h= for (self: SDLRectangle, Int) */
void sdl___sdl__SDLRectangle___h_61d(val* self, long p0) {
void* var /* : SDLRectangle for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLRectangle */
sdl___SDLRectangle_h__assign___impl(var, p0);
RET_LABEL:;
}
/* method sdl#SDLRectangle#h for (self: SDLRectangle): Int */
long sdl___sdl__SDLRectangle___h(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLRectangle for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLRectangle */
var1 = sdl___SDLRectangle_h___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseEvent#x for (self: SDLMouseEvent): Float */
double sdl___sdl__SDLMouseEvent___mnit__input__PointerEvent__x(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_sdl__SDLMouseEvent___x].d; /* _x on <self:SDLMouseEvent> */
var = var1;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseEvent#x= for (self: SDLMouseEvent, Float) */
void sdl___sdl__SDLMouseEvent___x_61d(val* self, double p0) {
self->attrs[COLOR_sdl__SDLMouseEvent___x].d = p0; /* _x on <self:SDLMouseEvent> */
RET_LABEL:;
}
/* method sdl#SDLMouseEvent#y for (self: SDLMouseEvent): Float */
double sdl___sdl__SDLMouseEvent___mnit__input__PointerEvent__y(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_sdl__SDLMouseEvent___y].d; /* _y on <self:SDLMouseEvent> */
var = var1;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseEvent#y= for (self: SDLMouseEvent, Float) */
void sdl___sdl__SDLMouseEvent___y_61d(val* self, double p0) {
self->attrs[COLOR_sdl__SDLMouseEvent___y].d = p0; /* _y on <self:SDLMouseEvent> */
RET_LABEL:;
}
/* method sdl#SDLMouseEvent#is_move for (self: SDLMouseEvent): Bool */
short int sdl___sdl__SDLMouseEvent___mnit__input__PointerEvent__is_move(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseEvent#init for (self: SDLMouseEvent) */
void sdl___sdl__SDLMouseEvent___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_sdl___sdl__SDLMouseEvent___core__kernel__Object__init]))(self); /* init on <self:SDLMouseEvent>*/
}
RET_LABEL:;
}
/* method sdl#SDLMouseButtonEvent#button for (self: SDLMouseButtonEvent): Int */
long sdl___sdl__SDLMouseButtonEvent___button(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_sdl__SDLMouseButtonEvent___button].l; /* _button on <self:SDLMouseButtonEvent> */
var = var1;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseButtonEvent#button= for (self: SDLMouseButtonEvent, Int) */
void sdl___sdl__SDLMouseButtonEvent___button_61d(val* self, long p0) {
self->attrs[COLOR_sdl__SDLMouseButtonEvent___button].l = p0; /* _button on <self:SDLMouseButtonEvent> */
RET_LABEL:;
}
/* method sdl#SDLMouseButtonEvent#pressed for (self: SDLMouseButtonEvent): Bool */
short int sdl___sdl__SDLMouseButtonEvent___mnit__input__PointerEvent__pressed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_sdl__SDLMouseButtonEvent___pressed].s; /* _pressed on <self:SDLMouseButtonEvent> */
var = var1;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseButtonEvent#pressed= for (self: SDLMouseButtonEvent, Bool) */
void sdl___sdl__SDLMouseButtonEvent___pressed_61d(val* self, short int p0) {
self->attrs[COLOR_sdl__SDLMouseButtonEvent___pressed].s = p0; /* _pressed on <self:SDLMouseButtonEvent> */
RET_LABEL:;
}
/* method sdl#SDLMouseButtonEvent#is_left_button for (self: SDLMouseButtonEvent): Bool */
short int sdl___sdl__SDLMouseButtonEvent___is_left_button(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_sdl__SDLMouseButtonEvent__button]))(self); /* button on <self:SDLMouseButtonEvent>*/
}
{
{ /* Inline kernel#Int#== (var1,1l) on <var1:Int> */
var4 = var1 == 1l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseButtonEvent#is_right_button for (self: SDLMouseButtonEvent): Bool */
short int sdl___sdl__SDLMouseButtonEvent___is_right_button(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_sdl__SDLMouseButtonEvent__button]))(self); /* button on <self:SDLMouseButtonEvent>*/
}
{
{ /* Inline kernel#Int#== (var1,3l) on <var1:Int> */
var4 = var1 == 3l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseButtonEvent#is_middle_button for (self: SDLMouseButtonEvent): Bool */
short int sdl___sdl__SDLMouseButtonEvent___is_middle_button(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_sdl__SDLMouseButtonEvent__button]))(self); /* button on <self:SDLMouseButtonEvent>*/
}
{
{ /* Inline kernel#Int#== (var1,2l) on <var1:Int> */
var4 = var1 == 2l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseButtonEvent#is_down_wheel for (self: SDLMouseButtonEvent): Bool */
short int sdl___sdl__SDLMouseButtonEvent___is_down_wheel(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_sdl__SDLMouseButtonEvent__button]))(self); /* button on <self:SDLMouseButtonEvent>*/
}
{
{ /* Inline kernel#Int#== (var1,4l) on <var1:Int> */
var4 = var1 == 4l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseButtonEvent#is_up_wheel for (self: SDLMouseButtonEvent): Bool */
short int sdl___sdl__SDLMouseButtonEvent___is_up_wheel(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_sdl__SDLMouseButtonEvent__button]))(self); /* button on <self:SDLMouseButtonEvent>*/
}
{
{ /* Inline kernel#Int#== (var1,5l) on <var1:Int> */
var4 = var1 == 5l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseButtonEvent#is_wheel for (self: SDLMouseButtonEvent): Bool */
short int sdl___sdl__SDLMouseButtonEvent___is_wheel(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_sdl__SDLMouseButtonEvent__is_down_wheel]))(self); /* is_down_wheel on <self:SDLMouseButtonEvent>*/
}
var_ = var2;
if (var2){
var1 = var_;
} else {
{
var3 = ((short int(*)(val* self))(self->class->vft[COLOR_sdl__SDLMouseButtonEvent__is_up_wheel]))(self); /* is_up_wheel on <self:SDLMouseButtonEvent>*/
}
var1 = var3;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseButtonEvent#init for (self: SDLMouseButtonEvent, Float, Float, Int, Bool) */
void sdl___sdl__SDLMouseButtonEvent___init(val* self, double p0, double p1, long p2, short int p3) {
double var_x /* var x: Float */;
double var_y /* var y: Float */;
long var_button /* var button: Int */;
short int var_pressed /* var pressed: Bool */;
var_x = p0;
var_y = p1;
var_button = p2;
var_pressed = p3;
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_sdl__SDLMouseEvent__x_61d]))(self, var_x); /* x= on <self:SDLMouseButtonEvent>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_sdl__SDLMouseEvent__y_61d]))(self, var_y); /* y= on <self:SDLMouseButtonEvent>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:SDLMouseButtonEvent>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_sdl__SDLMouseButtonEvent__button_61d]))(self, var_button); /* button= on <self:SDLMouseButtonEvent>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_sdl__SDLMouseButtonEvent__pressed_61d]))(self, var_pressed); /* pressed= on <self:SDLMouseButtonEvent>*/
}
RET_LABEL:;
}
/* method sdl#SDLMouseButtonEvent#to_s for (self: SDLMouseButtonEvent): String */
val* sdl___sdl__SDLMouseButtonEvent___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
long var15 /* : Int */;
val* var16 /* : String */;
double var17 /* : Float */;
val* var18 /* : String */;
double var19 /* : Float */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
long var36 /* : Int */;
val* var37 /* : String */;
double var38 /* : Float */;
val* var39 /* : String */;
double var40 /* : Float */;
val* var41 /* : String */;
val* var42 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_mnit__input__PointerEvent__pressed]))(self); /* pressed on <self:SDLMouseButtonEvent>*/
}
if (var1){
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "MouseButtonEvent button ";
var6 = core__flat___NativeString___to_s_full(var5, 24l, 24l);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[0]=var4;
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = " down at ";
var10 = core__flat___NativeString___to_s_full(var9, 9l, 9l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var2)->values[2]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = ", ";
var14 = core__flat___NativeString___to_s_full(var13, 2l, 2l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var2)->values[4]=var12;
} else {
var2 = varonce;
varonce = NULL;
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_sdl__SDLMouseButtonEvent__button]))(self); /* button on <self:SDLMouseButtonEvent>*/
}
var16 = core__flat___Int___core__abstract_text__Object__to_s(var15);
((struct instance_core__NativeArray*)var2)->values[1]=var16;
{
var17 = ((double(*)(val* self))(self->class->vft[COLOR_mnit__input__PointerEvent__x]))(self); /* x on <self:SDLMouseButtonEvent>*/
}
var18 = core__abstract_text___Float___Object__to_s(var17);
((struct instance_core__NativeArray*)var2)->values[3]=var18;
{
var19 = ((double(*)(val* self))(self->class->vft[COLOR_mnit__input__PointerEvent__y]))(self); /* y on <self:SDLMouseButtonEvent>*/
}
var20 = core__abstract_text___Float___Object__to_s(var19);
((struct instance_core__NativeArray*)var2)->values[5]=var20;
{
var21 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
var = var21;
goto RET_LABEL;
} else {
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "MouseButtonEvent button ";
var27 = core__flat___NativeString___to_s_full(var26, 24l, 24l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = " up at ";
var31 = core__flat___NativeString___to_s_full(var30, 7l, 7l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var23)->values[2]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = ", ";
var35 = core__flat___NativeString___to_s_full(var34, 2l, 2l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var23)->values[4]=var33;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
var36 = ((long(*)(val* self))(self->class->vft[COLOR_sdl__SDLMouseButtonEvent__button]))(self); /* button on <self:SDLMouseButtonEvent>*/
}
var37 = core__flat___Int___core__abstract_text__Object__to_s(var36);
((struct instance_core__NativeArray*)var23)->values[1]=var37;
{
var38 = ((double(*)(val* self))(self->class->vft[COLOR_mnit__input__PointerEvent__x]))(self); /* x on <self:SDLMouseButtonEvent>*/
}
var39 = core__abstract_text___Float___Object__to_s(var38);
((struct instance_core__NativeArray*)var23)->values[3]=var39;
{
var40 = ((double(*)(val* self))(self->class->vft[COLOR_mnit__input__PointerEvent__y]))(self); /* y on <self:SDLMouseButtonEvent>*/
}
var41 = core__abstract_text___Float___Object__to_s(var40);
((struct instance_core__NativeArray*)var23)->values[5]=var41;
{
var42 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
var = var42;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseMotionEvent#rel_x for (self: SDLMouseMotionEvent): Float */
double sdl___sdl__SDLMouseMotionEvent___rel_x(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_sdl__SDLMouseMotionEvent___rel_x].d; /* _rel_x on <self:SDLMouseMotionEvent> */
var = var1;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseMotionEvent#rel_x= for (self: SDLMouseMotionEvent, Float) */
void sdl___sdl__SDLMouseMotionEvent___rel_x_61d(val* self, double p0) {
self->attrs[COLOR_sdl__SDLMouseMotionEvent___rel_x].d = p0; /* _rel_x on <self:SDLMouseMotionEvent> */
RET_LABEL:;
}
/* method sdl#SDLMouseMotionEvent#rel_y for (self: SDLMouseMotionEvent): Float */
double sdl___sdl__SDLMouseMotionEvent___rel_y(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_sdl__SDLMouseMotionEvent___rel_y].d; /* _rel_y on <self:SDLMouseMotionEvent> */
var = var1;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseMotionEvent#rel_y= for (self: SDLMouseMotionEvent, Float) */
void sdl___sdl__SDLMouseMotionEvent___rel_y_61d(val* self, double p0) {
self->attrs[COLOR_sdl__SDLMouseMotionEvent___rel_y].d = p0; /* _rel_y on <self:SDLMouseMotionEvent> */
RET_LABEL:;
}
/* method sdl#SDLMouseMotionEvent#pressed for (self: SDLMouseMotionEvent): Bool */
short int sdl___sdl__SDLMouseMotionEvent___mnit__input__PointerEvent__pressed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_sdl__SDLMouseMotionEvent___pressed].s; /* _pressed on <self:SDLMouseMotionEvent> */
var = var1;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseMotionEvent#pressed= for (self: SDLMouseMotionEvent, Bool) */
void sdl___sdl__SDLMouseMotionEvent___pressed_61d(val* self, short int p0) {
self->attrs[COLOR_sdl__SDLMouseMotionEvent___pressed].s = p0; /* _pressed on <self:SDLMouseMotionEvent> */
RET_LABEL:;
}
/* method sdl#SDLMouseMotionEvent#is_move for (self: SDLMouseMotionEvent): Bool */
short int sdl___sdl__SDLMouseMotionEvent___mnit__input__PointerEvent__is_move(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLMouseMotionEvent#init for (self: SDLMouseMotionEvent, Float, Float, Float, Float, Bool) */
void sdl___sdl__SDLMouseMotionEvent___init(val* self, double p0, double p1, double p2, double p3, short int p4) {
double var_x /* var x: Float */;
double var_y /* var y: Float */;
double var_rel_x /* var rel_x: Float */;
double var_rel_y /* var rel_y: Float */;
short int var_pressed /* var pressed: Bool */;
var_x = p0;
var_y = p1;
var_rel_x = p2;
var_rel_y = p3;
var_pressed = p4;
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_sdl__SDLMouseEvent__x_61d]))(self, var_x); /* x= on <self:SDLMouseMotionEvent>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_sdl__SDLMouseEvent__y_61d]))(self, var_y); /* y= on <self:SDLMouseMotionEvent>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:SDLMouseMotionEvent>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_sdl__SDLMouseMotionEvent__rel_x_61d]))(self, var_rel_x); /* rel_x= on <self:SDLMouseMotionEvent>*/
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_sdl__SDLMouseMotionEvent__rel_y_61d]))(self, var_rel_y); /* rel_y= on <self:SDLMouseMotionEvent>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_sdl__SDLMouseMotionEvent__pressed_61d]))(self, var_pressed); /* pressed= on <self:SDLMouseMotionEvent>*/
}
RET_LABEL:;
}
/* method sdl#SDLMouseMotionEvent#to_s for (self: SDLMouseMotionEvent): String */
val* sdl___sdl__SDLMouseMotionEvent___core__abstract_text__Object__to_s(val* self) {
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
double var10 /* : Float */;
val* var11 /* : String */;
double var12 /* : Float */;
val* var13 /* : String */;
val* var14 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "MouseMotionEvent at ";
var5 = core__flat___NativeString___to_s_full(var4, 20l, 20l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ", ";
var9 = core__flat___NativeString___to_s_full(var8, 2l, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((double(*)(val* self))(self->class->vft[COLOR_mnit__input__PointerEvent__x]))(self); /* x on <self:SDLMouseMotionEvent>*/
}
var11 = core__abstract_text___Float___Object__to_s(var10);
((struct instance_core__NativeArray*)var1)->values[1]=var11;
{
var12 = ((double(*)(val* self))(self->class->vft[COLOR_mnit__input__PointerEvent__y]))(self); /* y on <self:SDLMouseMotionEvent>*/
}
var13 = core__abstract_text___Float___Object__to_s(var12);
((struct instance_core__NativeArray*)var1)->values[3]=var13;
{
var14 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLKeyEvent#name for (self: SDLKeyEvent): String */
val* sdl___sdl__SDLKeyEvent___mnit__input__KeyEvent__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_sdl__SDLKeyEvent___name].val; /* _name on <self:SDLKeyEvent> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_sdl, 369);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method sdl#SDLKeyEvent#name= for (self: SDLKeyEvent, String) */
void sdl___sdl__SDLKeyEvent___name_61d(val* self, val* p0) {
self->attrs[COLOR_sdl__SDLKeyEvent___name].val = p0; /* _name on <self:SDLKeyEvent> */
RET_LABEL:;
}
/* method sdl#SDLKeyEvent#down for (self: SDLKeyEvent): Bool */
short int sdl___sdl__SDLKeyEvent___down(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_sdl__SDLKeyEvent___down].s; /* _down on <self:SDLKeyEvent> */
var = var1;
RET_LABEL:;
return var;
}
/* method sdl#SDLKeyEvent#down= for (self: SDLKeyEvent, Bool) */
void sdl___sdl__SDLKeyEvent___down_61d(val* self, short int p0) {
self->attrs[COLOR_sdl__SDLKeyEvent___down].s = p0; /* _down on <self:SDLKeyEvent> */
RET_LABEL:;
}
/* method sdl#SDLKeyEvent#to_c for (self: SDLKeyEvent): nullable Char */
val* sdl___sdl__SDLKeyEvent___mnit__input__KeyEvent__to_c(val* self) {
val* var /* : nullable Char */;
val* var1 /* : String */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : String */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_mnit__input__KeyEvent__name]))(self); /* name on <self:SDLKeyEvent>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:String>*/
}
{
{ /* Inline kernel#Int#== (var2,1l) on <var2:Int> */
var5 = var2 == 1l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_mnit__input__KeyEvent__name]))(self); /* name on <self:SDLKeyEvent>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__Text__chars]))(var6); /* chars on <var6:String>*/
}
{
var8 = ((val*(*)(val* self))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__Collection__first]))(var7); /* first on <var7:SequenceRead[Char]>*/
}
var = var8;
goto RET_LABEL;
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLKeyEvent#to_s for (self: SDLKeyEvent): String */
val* sdl___sdl__SDLKeyEvent___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var14 /* : NativeArray[String] */;
static val* varonce13;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_sdl__SDLKeyEvent__down]))(self); /* down on <self:SDLKeyEvent>*/
}
if (var1){
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "KeyboardEvent key ";
var6 = core__flat___NativeString___to_s_full(var5, 18l, 18l);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[0]=var4;
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = " down";
var10 = core__flat___NativeString___to_s_full(var9, 5l, 5l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var2)->values[2]=var8;
} else {
var2 = varonce;
varonce = NULL;
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_mnit__input__KeyEvent__name]))(self); /* name on <self:SDLKeyEvent>*/
}
((struct instance_core__NativeArray*)var2)->values[1]=var11;
{
var12 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
var = var12;
goto RET_LABEL;
} else {
if (unlikely(varonce13==NULL)) {
var14 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "KeyboardEvent key ";
var18 = core__flat___NativeString___to_s_full(var17, 18l, 18l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = " up";
var22 = core__flat___NativeString___to_s_full(var21, 3l, 3l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var14)->values[2]=var20;
} else {
var14 = varonce13;
varonce13 = NULL;
}
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_mnit__input__KeyEvent__name]))(self); /* name on <self:SDLKeyEvent>*/
}
((struct instance_core__NativeArray*)var14)->values[1]=var23;
{
var24 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce13 = var14;
var = var24;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method sdl#SDLKeyEvent#is_down for (self: SDLKeyEvent): Bool */
short int sdl___sdl__SDLKeyEvent___mnit__input__KeyEvent__is_down(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_sdl__SDLKeyEvent__down]))(self); /* down on <self:SDLKeyEvent>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLKeyEvent#is_arrow_up for (self: SDLKeyEvent): Bool */
short int sdl___sdl__SDLKeyEvent___mnit__input__KeyEvent__is_arrow_up(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_mnit__input__KeyEvent__name]))(self); /* name on <self:SDLKeyEvent>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "up";
var4 = core__flat___NativeString___to_s_full(var3, 2l, 2l);
var2 = var4;
varonce = var2;
}
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var2); /* == on <var1:String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLKeyEvent#is_arrow_left for (self: SDLKeyEvent): Bool */
short int sdl___sdl__SDLKeyEvent___mnit__input__KeyEvent__is_arrow_left(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_mnit__input__KeyEvent__name]))(self); /* name on <self:SDLKeyEvent>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "left";
var4 = core__flat___NativeString___to_s_full(var3, 4l, 4l);
var2 = var4;
varonce = var2;
}
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var2); /* == on <var1:String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLKeyEvent#is_arrow_down for (self: SDLKeyEvent): Bool */
short int sdl___sdl__SDLKeyEvent___mnit__input__KeyEvent__is_arrow_down(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_mnit__input__KeyEvent__name]))(self); /* name on <self:SDLKeyEvent>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "down";
var4 = core__flat___NativeString___to_s_full(var3, 4l, 4l);
var2 = var4;
varonce = var2;
}
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var2); /* == on <var1:String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLKeyEvent#is_arrow_right for (self: SDLKeyEvent): Bool */
short int sdl___sdl__SDLKeyEvent___mnit__input__KeyEvent__is_arrow_right(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_mnit__input__KeyEvent__name]))(self); /* name on <self:SDLKeyEvent>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "right";
var4 = core__flat___NativeString___to_s_full(var3, 5l, 5l);
var2 = var4;
varonce = var2;
}
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var2); /* == on <var1:String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLKeyEvent#init for (self: SDLKeyEvent) */
void sdl___sdl__SDLKeyEvent___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_sdl___sdl__SDLKeyEvent___core__kernel__Object__init]))(self); /* init on <self:SDLKeyEvent>*/
}
RET_LABEL:;
}
/* method sdl#Int#delay for (self: Int) */
void sdl___core__Int___delay(long self) {
sdl___Int_delay___impl(self);
RET_LABEL:;
}
/* method sdl#SDLFont#new for (self: SDLFont, String, Int): SDLFont */
val* sdl___sdl__SDLFont___new(val* self, val* p0, long p1) {
val* var /* : SDLFont */;
val* var1 /* : SDLFont */;
val* var2 /* : SDLFont */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = p0;
var1 = sdl___new_SDLFont___impl(var_for_c_0, p1);
var2 = BOX_core__Pointer(var1); /* boxing SDLFont */
var2->type = &type_sdl__SDLFont;
var2->class = &class_sdl__SDLFont;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLFont#destroy for (self: SDLFont) */
void sdl___sdl__SDLFont___destroy(val* self) {
void* var /* : SDLFont for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLFont */
sdl___SDLFont_destroy___impl(var);
RET_LABEL:;
}
/* method sdl#SDLFont#render for (self: SDLFont, String, Int, Int, Int): SDLImage */
val* sdl___sdl__SDLFont___render(val* self, val* p0, long p1, long p2, long p3) {
val* var /* : SDLImage */;
val* var1 /* : SDLImage */;
void* var2 /* : SDLFont for extern */;
val* var3 /* : SDLImage */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLFont */
struct nitni_instance* var_for_c_1;
var_for_c_1 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
var1 = sdl___SDLFont_render___impl(var2, var_for_c_1, p1, p2, p3);
var3 = BOX_core__Pointer(var1); /* boxing SDLImage */
var3->type = &type_sdl__SDLImage;
var3->class = &class_sdl__SDLImage;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLFont#height for (self: SDLFont): Int */
long sdl___sdl__SDLFont___height(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLFont for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLFont */
var1 = sdl___SDLFont_height___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLFont#ascent for (self: SDLFont): Int */
long sdl___sdl__SDLFont___ascent(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLFont for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLFont */
var1 = sdl___SDLFont_ascent___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLFont#descent for (self: SDLFont): Int */
long sdl___sdl__SDLFont___descent(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLFont for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLFont */
var1 = sdl___SDLFont_descent___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLFont#line_skip for (self: SDLFont): Int */
long sdl___sdl__SDLFont___line_skip(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLFont for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLFont */
var1 = sdl___SDLFont_line_skip___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLFont#is_fixed_width for (self: SDLFont): Bool */
short int sdl___sdl__SDLFont___is_fixed_width(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : SDLFont for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLFont */
var1 = sdl___SDLFont_is_fixed_width___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLFont#family_name for (self: SDLFont): nullable String */
val* sdl___sdl__SDLFont___family_name(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
void* var2 /* : SDLFont for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLFont */
struct nitni_instance* ret_var;
ret_var = sdl___SDLFont_family_name___impl(var2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
struct nitni_instance * NIT_NULL___null_String() {
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = NULL;
return ret_for_c;
}
/* nitni check for String to nullable String */
int sdl___String_is_a_nullable_String(struct nitni_instance * from) {
short int var /* : Bool */;
int cltype;
int idtype;
/* <from->value:String> isa nullable String */
var = 1; /* easy <from->value:String> isa nullable String*/
return var;
}
/* nitni cast for String to nullable String */
struct nitni_instance * sdl___String_as_nullable_String(struct nitni_instance * from) {
short int var /* : Bool */;
int cltype;
int idtype;
/* <from->value:String> isa nullable String */
var = 1; /* easy <from->value:String> isa nullable String*/
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
/* method sdl#SDLFont#style_name for (self: SDLFont): nullable String */
val* sdl___sdl__SDLFont___style_name(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
void* var2 /* : SDLFont for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLFont */
struct nitni_instance* ret_var;
ret_var = sdl___SDLFont_style_name___impl(var2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLFont#width_of for (self: SDLFont, String): Int */
long sdl___sdl__SDLFont___width_of(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : SDLFont for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLFont */
struct nitni_instance* var_for_c_1;
var_for_c_1 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
var1 = sdl___SDLFont_width_of___impl(var2, var_for_c_1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for core::Object::to_s */
struct nitni_instance * sdl___NativeString_to_s( char* self ) {
val* var /* : String */;
var = core__flat___NativeString___core__abstract_text__Object__to_s(self);
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var;
return ret_for_c;
}
/* method sdl#SDLSystemWindowManagerInfo#new for (self: SDLSystemWindowManagerInfo): SDLSystemWindowManagerInfo */
val* sdl___sdl__SDLSystemWindowManagerInfo___new(val* self) {
val* var /* : SDLSystemWindowManagerInfo */;
val* var1 /* : SDLSystemWindowManagerInfo */;
val* var2 /* : SDLSystemWindowManagerInfo */;
var1 = sdl___new_SDLSystemWindowManagerInfo___impl();
var2 = BOX_core__Pointer(var1); /* boxing SDLSystemWindowManagerInfo */
var2->type = &type_sdl__SDLSystemWindowManagerInfo;
var2->class = &class_sdl__SDLSystemWindowManagerInfo;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method sdl#SDLSystemWindowManagerInfo#x11_window_handle for (self: SDLSystemWindowManagerInfo): Pointer */
val* sdl___sdl__SDLSystemWindowManagerInfo___x11_window_handle(val* self) {
val* var /* : Pointer */;
val* var1 /* : Pointer */;
void* var2 /* : SDLSystemWindowManagerInfo for extern */;
val* var3 /* : Pointer */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing SDLSystemWindowManagerInfo */
var1 = sdl___SDLSystemWindowManagerInfo_x11_window_handle___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing Pointer */
var3->type = &type_core__Pointer;
var3->class = &class_core__Pointer;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
