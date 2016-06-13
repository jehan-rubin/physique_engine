#include "gamnit__display_linux.sep.0.h"
/* method display_linux#GamnitDisplay#width= for (self: GamnitDisplay, Int) */
void gamnit__display_linux___GamnitDisplay___width_61d(val* self, long p0) {
long var_value /* var value: Int */;
var_value = p0;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__requested_width_61d]))(self, var_value); /* requested_width= on <self:GamnitDisplay>*/
}
RET_LABEL:;
}
/* method display_linux#GamnitDisplay#requested_width for (self: GamnitDisplay): Int */
long gamnit__display_linux___GamnitDisplay___requested_width(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_gamnit__display_linux__GamnitDisplay___requested_width].l; /* _requested_width on <self:GamnitDisplay> */
var = var1;
RET_LABEL:;
return var;
}
/* method display_linux#GamnitDisplay#requested_width= for (self: GamnitDisplay, Int) */
void gamnit__display_linux___GamnitDisplay___requested_width_61d(val* self, long p0) {
self->attrs[COLOR_gamnit__display_linux__GamnitDisplay___requested_width].l = p0; /* _requested_width on <self:GamnitDisplay> */
RET_LABEL:;
}
/* method display_linux#GamnitDisplay#height= for (self: GamnitDisplay, Int) */
void gamnit__display_linux___GamnitDisplay___height_61d(val* self, long p0) {
long var_value /* var value: Int */;
var_value = p0;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__requested_height_61d]))(self, var_value); /* requested_height= on <self:GamnitDisplay>*/
}
RET_LABEL:;
}
/* method display_linux#GamnitDisplay#requested_height for (self: GamnitDisplay): Int */
long gamnit__display_linux___GamnitDisplay___requested_height(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_gamnit__display_linux__GamnitDisplay___requested_height].l; /* _requested_height on <self:GamnitDisplay> */
var = var1;
RET_LABEL:;
return var;
}
/* method display_linux#GamnitDisplay#requested_height= for (self: GamnitDisplay, Int) */
void gamnit__display_linux___GamnitDisplay___requested_height_61d(val* self, long p0) {
self->attrs[COLOR_gamnit__display_linux__GamnitDisplay___requested_height].l = p0; /* _requested_height on <self:GamnitDisplay> */
RET_LABEL:;
}
/* method display_linux#GamnitDisplay#show_cursor for (self: GamnitDisplay): Bool */
short int gamnit__display_linux___GamnitDisplay___show_cursor(val* self) {
short int var /* : Bool */;
val* var1 /* : SDLDisplay */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__sdl_display]))(self); /* sdl_display on <self:GamnitDisplay>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_sdl__SDLDisplay__show_cursor]))(var1); /* show_cursor on <var1:SDLDisplay>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method display_linux#GamnitDisplay#show_cursor= for (self: GamnitDisplay, Bool) */
void gamnit__display_linux___GamnitDisplay___show_cursor_61d(val* self, short int p0) {
short int var_val /* var val: Bool */;
val* var /* : SDLDisplay */;
var_val = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__sdl_display]))(self); /* sdl_display on <self:GamnitDisplay>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_sdl__SDLDisplay__show_cursor_61d]))(var, var_val); /* show_cursor= on <var:SDLDisplay>*/
}
RET_LABEL:;
}
/* method display_linux#GamnitDisplay#setup for (self: GamnitDisplay) */
void gamnit__display_linux___GamnitDisplay___setup(val* self) {
val* var /* : Sys */;
short int var1 /* : Bool */;
val* var2 /* : Sys */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
long var6 /* : Int */;
long var7 /* : Int */;
val* var8 /* : SDLDisplay */;
val* var9 /* : Sys */;
short int var10 /* : Bool */;
val* var11 /* : Sys */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
val* var16 /* : Pointer */;
val* var_x11_display /* var x11_display: Pointer */;
val* var17 /* : Pointer */;
val* var_window_handle /* var window_handle: Pointer */;
val* var18 /* : Sys */;
short int var19 /* : Bool */;
val* var20 /* : Sys */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : String */;
var = glob_sys;
{
var1 = ((short int(*)(val* self))(var->class->vft[COLOR_gamnit__display__Sys__debug_gamnit]))(var); /* debug_gamnit on <var:Sys>*/
}
if (var1){
var2 = glob_sys;
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Setting up SDL";
var5 = core__flat___NativeString___to_s_full(var4, 14l, 14l);
var3 = var5;
varonce = var3;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__file__Sys__print]))(var2, var3); /* print on <var2:Sys>*/
}
} else {
}
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__requested_width]))(self); /* requested_width on <self:GamnitDisplay>*/
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__requested_height]))(self); /* requested_height on <self:GamnitDisplay>*/
}
{
var8 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__setup_sdl]))(self, var6, var7); /* setup_sdl on <self:GamnitDisplay>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__sdl_display_61d]))(self, var8); /* sdl_display= on <self:GamnitDisplay>*/
}
var9 = glob_sys;
{
var10 = ((short int(*)(val* self))(var9->class->vft[COLOR_gamnit__display__Sys__debug_gamnit]))(var9); /* debug_gamnit on <var9:Sys>*/
}
if (var10){
var11 = glob_sys;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Setting up X11";
var15 = core__flat___NativeString___to_s_full(var14, 14l, 14l);
var13 = var15;
varonce12 = var13;
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_core__file__Sys__print]))(var11, var13); /* print on <var11:Sys>*/
}
} else {
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__setup_x11]))(self); /* setup_x11 on <self:GamnitDisplay>*/
}
var_x11_display = var16;
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__window_handle]))(self); /* window_handle on <self:GamnitDisplay>*/
}
var_window_handle = var17;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__setup_egl_display]))(self, var_x11_display); /* setup_egl_display on <self:GamnitDisplay>*/
}
var18 = glob_sys;
{
var19 = ((short int(*)(val* self))(var18->class->vft[COLOR_gamnit__display__Sys__debug_gamnit]))(var18); /* debug_gamnit on <var18:Sys>*/
}
if (var19){
var20 = glob_sys;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "Setting up EGL context";
var24 = core__flat___NativeString___to_s_full(var23, 22l, 22l);
var22 = var24;
varonce21 = var22;
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_core__file__Sys__print]))(var20, var22); /* print on <var20:Sys>*/
}
} else {
}
{
((void(*)(val* self, long p0, long p1, long p2, long p3, long p4, long p5, long p6))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__select_egl_config]))(self, 8l, 8l, 8l, 8l, 8l, 0l, 0l); /* select_egl_config on <self:GamnitDisplay>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__setup_egl_context]))(self, var_window_handle); /* setup_egl_context on <self:GamnitDisplay>*/
}
RET_LABEL:;
}
/* method display_linux#GamnitDisplay#close for (self: GamnitDisplay) */
void gamnit__display_linux___GamnitDisplay___close(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__close_egl]))(self); /* close_egl on <self:GamnitDisplay>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__close_sdl]))(self); /* close_sdl on <self:GamnitDisplay>*/
}
RET_LABEL:;
}
/* method display_linux#GamnitDisplay#sdl_display for (self: GamnitDisplay): SDLDisplay */
val* gamnit__display_linux___GamnitDisplay___sdl_display(val* self) {
val* var /* : SDLDisplay */;
val* var1 /* : SDLDisplay */;
var1 = self->attrs[COLOR_gamnit__display_linux__GamnitDisplay___sdl_display].val; /* _sdl_display on <self:GamnitDisplay> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sdl_display");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__display_linux, 65);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method display_linux#GamnitDisplay#sdl_display= for (self: GamnitDisplay, SDLDisplay) */
void gamnit__display_linux___GamnitDisplay___sdl_display_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__display_linux__GamnitDisplay___sdl_display].val = p0; /* _sdl_display on <self:GamnitDisplay> */
RET_LABEL:;
}
/* method display_linux#GamnitDisplay#setup_sdl for (self: GamnitDisplay, Int, Int): SDLDisplay */
val* gamnit__display_linux___GamnitDisplay___setup_sdl(val* self, long p0, long p1) {
val* var /* : SDLDisplay */;
long var_window_width /* var window_width: Int */;
long var_window_height /* var window_height: Int */;
val* var1 /* : SDLDisplay */;
val* var2 /* : SDLDisplay */;
val* var_sdl_display /* var sdl_display: SDLDisplay */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Sys */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
var_window_width = p0;
var_window_height = p1;
var1 = NEW_sdl__SDLDisplay(&type_sdl__SDLDisplay);
{
var2 = ((val*(*)(val* self, long p0, long p1))(var1->class->vft[COLOR_sdl__SDLDisplay__new]))(var1, var_window_width, var_window_height); /* new on <var1:SDLDisplay>*/
}
var_sdl_display = var2;
{
var3 = ((short int(*)(val* self))(var_sdl_display->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_sdl_display); /* address_is_null on <var_sdl_display:SDLDisplay>*/
}
var4 = !var3;
if (unlikely(!var4)) {
var5 = glob_sys;
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Opening SDL display failed";
var8 = core__flat___NativeString___to_s_full(var7, 26l, 26l);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__file__Sys__print]))(var5, var6); /* print on <var5:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__display_linux, 72);
fatal_exit(1);
}
var = var_sdl_display;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method display_linux#GamnitDisplay#close_sdl for (self: GamnitDisplay) */
void gamnit__display_linux___GamnitDisplay___close_sdl(val* self) {
val* var /* : SDLDisplay */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__display_linux__GamnitDisplay__sdl_display]))(self); /* sdl_display on <self:GamnitDisplay>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_sdl__SDLDisplay__destroy]))(var); /* destroy on <var:SDLDisplay>*/
}
RET_LABEL:;
}
/* method display_linux#GamnitDisplay#window_handle for (self: GamnitDisplay): Pointer */
val* gamnit__display_linux___GamnitDisplay___window_handle(val* self) {
val* var /* : Pointer */;
val* var1 /* : SDLSystemWindowManagerInfo */;
val* var2 /* : SDLSystemWindowManagerInfo */;
val* var_sdl_wm_info /* var sdl_wm_info: SDLSystemWindowManagerInfo */;
val* var3 /* : Pointer */;
var1 = NEW_sdl__SDLSystemWindowManagerInfo(&type_sdl__SDLSystemWindowManagerInfo);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_sdl__SDLSystemWindowManagerInfo__new]))(var1); /* new on <var1:SDLSystemWindowManagerInfo>*/
}
var_sdl_wm_info = var2;
{
var3 = ((val*(*)(val* self))(var_sdl_wm_info->class->vft[COLOR_sdl__SDLSystemWindowManagerInfo__x11_window_handle]))(var_sdl_wm_info); /* x11_window_handle on <var_sdl_wm_info:SDLSystemWindowManagerInfo>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method display_linux#GamnitDisplay#setup_x11 for (self: GamnitDisplay): Pointer */
val* gamnit__display_linux___GamnitDisplay___setup_x11(val* self) {
val* var /* : Pointer */;
val* var1 /* : Sys */;
val* var2 /* : Pointer */;
val* var_x11_display /* var x11_display: Pointer */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Sys */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_x11__Sys__x_open_default_display]))(var1); /* x_open_default_display on <var1:Sys>*/
}
var_x11_display = var2;
{
var3 = ((short int(*)(val* self))(var_x11_display->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_x11_display); /* address_is_null on <var_x11_display:Pointer>*/
}
var4 = !var3;
if (unlikely(!var4)) {
var5 = glob_sys;
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Opening X11 display failed";
var8 = core__flat___NativeString___to_s_full(var7, 26l, 26l);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__file__Sys__print]))(var5, var6); /* print on <var5:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__display_linux, 93);
fatal_exit(1);
}
var = var_x11_display;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method display_linux#GamnitAssetTexture#load_from_platform for (self: GamnitAssetTexture) */
void gamnit__display_linux___GamnitAssetTexture___load_from_platform(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var_path /* var path: String */;
val* var5 /* : SDLImage */;
val* var6 /* : SDLImage */;
val* var_sdl_tex /* var sdl_tex: SDLImage */;
short int var7 /* : Bool */;
val* var8 /* : Error */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
val* var19 /* : String */;
long var20 /* : Int */;
double var21 /* : Float */;
double var23 /* : Float */;
long var24 /* : Int */;
double var25 /* : Float */;
double var27 /* : Float */;
val* var28 /* : GLPixelFormat */;
long var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var33 /* : Bool */;
val* var34 /* : Sys */;
val* var35 /* : GLPixelFormat */;
val* var36 /* : Sys */;
val* var37 /* : GLPixelFormat */;
val* var_format /* var format: GLPixelFormat */;
val* var38 /* : NativeCByteArray */;
val* var_pixels /* var pixels: NativeCByteArray */;
long var39 /* : Int */;
long var40 /* : Int */;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "assets";
var2 = core__flat___NativeString___to_s_full(var1, 6l, 6l);
var = var2;
varonce = var;
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__textures__GamnitAssetTexture__path]))(self); /* path on <self:GamnitAssetTexture>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var->class->vft[COLOR_core__file__String___47d]))(var, var3); /* / on <var:String>*/
}
var_path = var4;
var5 = NEW_sdl__SDLImage(&type_sdl__SDLImage);
{
var6 = ((val*(*)(val* self, val* p0))(var5->class->vft[COLOR_sdl__SDLImage__from_file]))(var5, var_path); /* from_file on <var5:SDLImage>*/
}
var_sdl_tex = var6;
{
var7 = ((short int(*)(val* self))(var_sdl_tex->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_sdl_tex); /* address_is_null on <var_sdl_tex:SDLImage>*/
}
if (var7){
var8 = NEW_core__Error(&type_core__Error);
if (unlikely(varonce9==NULL)) {
var10 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Failed to load texture at \'";
var14 = core__flat___NativeString___to_s_full(var13, 27l, 27l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "\'";
var18 = core__flat___NativeString___to_s_full(var17, 1l, 1l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce9;
varonce9 = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=var_path;
{
var19 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__error__Error__message_61d]))(var8, var19); /* message= on <var8:Error>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:Error>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__textures__Texture__error_61d]))(self, var8); /* error= on <self:GamnitAssetTexture>*/
}
goto RET_LABEL;
} else {
}
{
var20 = ((long(*)(val* self))(var_sdl_tex->class->vft[COLOR_mnit__display__Sized__width]))(var_sdl_tex); /* width on <var_sdl_tex:SDLImage>*/
}
{
{ /* Inline kernel#Int#to_f (var20) on <var20:Int> */
var23 = (double)var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__textures__Texture__width_61d]))(self, var21); /* width= on <self:GamnitAssetTexture>*/
}
{
var24 = ((long(*)(val* self))(var_sdl_tex->class->vft[COLOR_mnit__display__Sized__height]))(var_sdl_tex); /* height on <var_sdl_tex:SDLImage>*/
}
{
{ /* Inline kernel#Int#to_f (var24) on <var24:Int> */
var27 = (double)var24;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__textures__Texture__height_61d]))(self, var25); /* height= on <self:GamnitAssetTexture>*/
}
{
var29 = ((long(*)(val* self))(var_sdl_tex->class->vft[COLOR_sdl__SDLImage__amask]))(var_sdl_tex); /* amask on <var_sdl_tex:SDLImage>*/
}
{
{ /* Inline kernel#Int#> (var29,0l) on <var29:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var33 = var29 > 0l;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
var34 = glob_sys;
{
var35 = ((val*(*)(val* self))(var34->class->vft[COLOR_glesv2__Sys__gl_RGBA]))(var34); /* gl_RGBA on <var34:Sys>*/
}
var28 = var35;
} else {
var36 = glob_sys;
{
var37 = ((val*(*)(val* self))(var36->class->vft[COLOR_glesv2__Sys__gl_RGB]))(var36); /* gl_RGB on <var36:Sys>*/
}
var28 = var37;
}
var_format = var28;
{
var38 = ((val*(*)(val* self))(var_sdl_tex->class->vft[COLOR_sdl__SDLImage__pixels]))(var_sdl_tex); /* pixels on <var_sdl_tex:SDLImage>*/
}
var_pixels = var38;
{
var39 = ((long(*)(val* self))(var_sdl_tex->class->vft[COLOR_mnit__display__Sized__width]))(var_sdl_tex); /* width on <var_sdl_tex:SDLImage>*/
}
{
var40 = ((long(*)(val* self))(var_sdl_tex->class->vft[COLOR_mnit__display__Sized__height]))(var_sdl_tex); /* height on <var_sdl_tex:SDLImage>*/
}
{
((void(*)(val* self, val* p0, long p1, long p2, val* p3))(self->class->vft[COLOR_gamnit__textures__GamnitRootTexture__load_from_pixels]))(self, var_pixels, var39, var40, var_format); /* load_from_pixels on <self:GamnitAssetTexture>*/
}
RET_LABEL:;
}
