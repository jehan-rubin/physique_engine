#include "gamnit__egl.sep.0.h"
/* method egl#GamnitDisplay#egl_display for (self: GamnitDisplay): EGLDisplay */
val* gamnit__egl___GamnitDisplay___egl_display(val* self) {
val* var /* : EGLDisplay */;
val* var1 /* : EGLDisplay */;
var1 = self->attrs[COLOR_gamnit__egl__GamnitDisplay___egl_display].val; /* _egl_display on <self:GamnitDisplay> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _egl_display");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__egl, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method egl#GamnitDisplay#egl_display= for (self: GamnitDisplay, EGLDisplay) */
void gamnit__egl___GamnitDisplay___egl_display_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__egl__GamnitDisplay___egl_display].val = p0; /* _egl_display on <self:GamnitDisplay> */
RET_LABEL:;
}
/* method egl#GamnitDisplay#egl_context for (self: GamnitDisplay): EGLContext */
val* gamnit__egl___GamnitDisplay___egl_context(val* self) {
val* var /* : EGLContext */;
val* var1 /* : EGLContext */;
var1 = self->attrs[COLOR_gamnit__egl__GamnitDisplay___egl_context].val; /* _egl_context on <self:GamnitDisplay> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _egl_context");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__egl, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method egl#GamnitDisplay#egl_context= for (self: GamnitDisplay, EGLContext) */
void gamnit__egl___GamnitDisplay___egl_context_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__egl__GamnitDisplay___egl_context].val = p0; /* _egl_context on <self:GamnitDisplay> */
RET_LABEL:;
}
/* method egl#GamnitDisplay#window_surface for (self: GamnitDisplay): EGLSurface */
val* gamnit__egl___GamnitDisplay___window_surface(val* self) {
val* var /* : EGLSurface */;
val* var1 /* : EGLSurface */;
var1 = self->attrs[COLOR_gamnit__egl__GamnitDisplay___window_surface].val; /* _window_surface on <self:GamnitDisplay> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _window_surface");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__egl, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method egl#GamnitDisplay#window_surface= for (self: GamnitDisplay, EGLSurface) */
void gamnit__egl___GamnitDisplay___window_surface_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__egl__GamnitDisplay___window_surface].val = p0; /* _window_surface on <self:GamnitDisplay> */
RET_LABEL:;
}
/* method egl#GamnitDisplay#egl_config for (self: GamnitDisplay): EGLConfig */
val* gamnit__egl___GamnitDisplay___egl_config(val* self) {
val* var /* : EGLConfig */;
val* var1 /* : EGLConfig */;
var1 = self->attrs[COLOR_gamnit__egl__GamnitDisplay___egl_config].val; /* _egl_config on <self:GamnitDisplay> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _egl_config");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__egl, 33);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method egl#GamnitDisplay#egl_config= for (self: GamnitDisplay, EGLConfig) */
void gamnit__egl___GamnitDisplay___egl_config_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__egl__GamnitDisplay___egl_config].val = p0; /* _egl_config on <self:GamnitDisplay> */
RET_LABEL:;
}
/* method egl#GamnitDisplay#setup_egl_display for (self: GamnitDisplay, Pointer) */
void gamnit__egl___GamnitDisplay___setup_egl_display(val* self, val* p0) {
val* var_x11_display /* var x11_display: Pointer */;
val* var /* : EGLDisplay */;
val* var1 /* : EGLDisplay */;
val* var_egl_display /* var egl_display: EGLDisplay */;
short int var2 /* : Bool */;
val* var3 /* : Sys */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Sys */;
val* var11 /* : NativeArray[String] */;
static val* varonce10;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
val* var16 /* : EGLError */;
val* var17 /* : String */;
val* var18 /* : String */;
var_x11_display = p0;
var = NEW_egl__EGLDisplay(&type_egl__EGLDisplay);
{
var1 = ((val*(*)(val* self, val* p0))(var->class->vft[COLOR_egl__EGLDisplay__new]))(var, var_x11_display); /* new on <var:EGLDisplay>*/
}
var_egl_display = var1;
{
var2 = ((short int(*)(val* self))(var_egl_display->class->vft[COLOR_egl__EGLDisplay__is_valid]))(var_egl_display); /* is_valid on <var_egl_display:EGLDisplay>*/
}
if (unlikely(!var2)) {
var3 = glob_sys;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "new EGL display is not valid";
var6 = core__flat___NativeString___to_s_full(var5, 28l, 28l);
var4 = var6;
varonce = var4;
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__file__Sys__print]))(var3, var4); /* print on <var3:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__egl, 40);
fatal_exit(1);
}
{
var7 = ((short int(*)(val* self))(var_egl_display->class->vft[COLOR_egl__EGLDisplay__initialize]))(var_egl_display); /* initialize on <var_egl_display:EGLDisplay>*/
}
{
var8 = ((short int(*)(val* self))(var_egl_display->class->vft[COLOR_egl__EGLDisplay__is_valid]))(var_egl_display); /* is_valid on <var_egl_display:EGLDisplay>*/
}
if (unlikely(!var8)) {
var9 = glob_sys;
if (unlikely(varonce10==NULL)) {
var11 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "EGL initialize error: ";
var15 = core__flat___NativeString___to_s_full(var14, 22l, 22l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
} else {
var11 = varonce10;
varonce10 = NULL;
}
{
var16 = ((val*(*)(val* self))(var_egl_display->class->vft[COLOR_egl__EGLDisplay__error]))(var_egl_display); /* error on <var_egl_display:EGLDisplay>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__Object__to_s]))(var16); /* to_s on <var16:EGLError>*/
}
((struct instance_core__NativeArray*)var11)->values[1]=var17;
{
var18 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce10 = var11;
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_core__file__Sys__print]))(var9, var18); /* print on <var9:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__egl, 43);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display_61d]))(self, var_egl_display); /* egl_display= on <self:GamnitDisplay>*/
}
RET_LABEL:;
}
/* method egl#GamnitDisplay#select_egl_config for (self: GamnitDisplay, Int, Int, Int, Int, Int, Int, Int) */
void gamnit__egl___GamnitDisplay___select_egl_config(val* self, long p0, long p1, long p2, long p3, long p4, long p5, long p6) {
long var_blue /* var blue: Int */;
long var_green /* var green: Int */;
long var_red /* var red: Int */;
long var_alpha /* var alpha: Int */;
long var_depth /* var depth: Int */;
long var_stencil /* var stencil: Int */;
long var_sample /* var sample: Int */;
val* var /* : EGLConfigChooser */;
val* var_config_chooser /* var config_chooser: EGLConfigChooser */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
val* var26 /* : EGLDisplay */;
val* var27 /* : nullable Array[EGLConfig] */;
val* var_configs /* var configs: nullable Array[EGLConfig] */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : Sys */;
val* var31 /* : NativeArray[String] */;
static val* varonce;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : String */;
val* var36 /* : EGLDisplay */;
val* var37 /* : EGLError */;
val* var38 /* : String */;
val* var39 /* : String */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : Sys */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
val* var47 /* : Sys */;
short int var48 /* : Bool */;
val* var49 /* : Sys */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : String */;
val* var_ /* var : Array[EGLConfig] */;
val* var54 /* : Iterator[nullable Object] */;
val* var_55 /* var : IndexedIterator[EGLConfig] */;
short int var56 /* : Bool */;
val* var57 /* : nullable Object */;
val* var_config /* var config: EGLConfig */;
val* var58 /* : EGLDisplay */;
val* var59 /* : EGLConfigAttribs */;
val* var_attribs /* var attribs: EGLConfigAttribs */;
val* var60 /* : Sys */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
val* var67 /* : EGLConformant */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : Sys */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : String */;
val* var77 /* : EGLConfigCaveat */;
val* var78 /* : String */;
val* var79 /* : String */;
val* var80 /* : Sys */;
val* var82 /* : NativeArray[String] */;
static val* varonce81;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
val* var98 /* : String */;
long var99 /* : Int */;
val* var100 /* : String */;
long var101 /* : Int */;
val* var102 /* : String */;
long var103 /* : Int */;
val* var104 /* : String */;
long var105 /* : Int */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var108 /* : Sys */;
val* var110 /* : NativeArray[String] */;
static val* varonce109;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : NativeString */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : String */;
long var123 /* : Int */;
val* var124 /* : String */;
long var125 /* : Int */;
val* var126 /* : String */;
long var127 /* : Int */;
val* var128 /* : String */;
val* var129 /* : String */;
val* var130 /* : nullable Object */;
var_blue = p0;
var_green = p1;
var_red = p2;
var_alpha = p3;
var_depth = p4;
var_stencil = p5;
var_sample = p6;
var = NEW_egl__EGLConfigChooser(&type_egl__EGLConfigChooser);
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:EGLConfigChooser>*/
}
var_config_chooser = var;
{
((void(*)(val* self))(var_config_chooser->class->vft[COLOR_egl__EGLConfigChooser__renderable_type_egl]))(var_config_chooser); /* renderable_type_egl on <var_config_chooser:EGLConfigChooser>*/
}
{
((void(*)(val* self))(var_config_chooser->class->vft[COLOR_egl__EGLConfigChooser__surface_type_egl]))(var_config_chooser); /* surface_type_egl on <var_config_chooser:EGLConfigChooser>*/
}
{
((void(*)(val* self, long p0))(var_config_chooser->class->vft[COLOR_egl__EGLConfigChooser__blue_size_61d]))(var_config_chooser, var_blue); /* blue_size= on <var_config_chooser:EGLConfigChooser>*/
}
{
((void(*)(val* self, long p0))(var_config_chooser->class->vft[COLOR_egl__EGLConfigChooser__green_size_61d]))(var_config_chooser, var_green); /* green_size= on <var_config_chooser:EGLConfigChooser>*/
}
{
((void(*)(val* self, long p0))(var_config_chooser->class->vft[COLOR_egl__EGLConfigChooser__red_size_61d]))(var_config_chooser, var_red); /* red_size= on <var_config_chooser:EGLConfigChooser>*/
}
{
{ /* Inline kernel#Int#> (var_alpha,0l) on <var_alpha:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var4 = var_alpha > 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
((void(*)(val* self, long p0))(var_config_chooser->class->vft[COLOR_egl__EGLConfigChooser__alpha_size_61d]))(var_config_chooser, var_alpha); /* alpha_size= on <var_config_chooser:EGLConfigChooser>*/
}
} else {
}
{
{ /* Inline kernel#Int#> (var_depth,0l) on <var_depth:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var11 = var_depth > 0l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
((void(*)(val* self, long p0))(var_config_chooser->class->vft[COLOR_egl__EGLConfigChooser__depth_size_61d]))(var_config_chooser, var_depth); /* depth_size= on <var_config_chooser:EGLConfigChooser>*/
}
} else {
}
{
{ /* Inline kernel#Int#> (var_stencil,0l) on <var_stencil:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var18 = var_stencil > 0l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
((void(*)(val* self, long p0))(var_config_chooser->class->vft[COLOR_egl__EGLConfigChooser__stencil_size_61d]))(var_config_chooser, var_stencil); /* stencil_size= on <var_config_chooser:EGLConfigChooser>*/
}
} else {
}
{
{ /* Inline kernel#Int#> (var_sample,0l) on <var_sample:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var21 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var25 = var_sample > 0l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
((void(*)(val* self, long p0))(var_config_chooser->class->vft[COLOR_egl__EGLConfigChooser__sample_buffers_61d]))(var_config_chooser, var_sample); /* sample_buffers= on <var_config_chooser:EGLConfigChooser>*/
}
} else {
}
{
((void(*)(val* self))(var_config_chooser->class->vft[COLOR_egl__EGLConfigChooser__close]))(var_config_chooser); /* close on <var_config_chooser:EGLConfigChooser>*/
}
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var27 = ((val*(*)(val* self, val* p0))(var_config_chooser->class->vft[COLOR_egl__EGLConfigChooser__choose]))(var_config_chooser, var26); /* choose on <var_config_chooser:EGLConfigChooser>*/
}
var_configs = var27;
if (var_configs == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
var29 = ((short int(*)(val* self, val* p0))(var_configs->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_configs, ((val*)NULL)); /* != on <var_configs:nullable Array[EGLConfig]>*/
var28 = var29;
}
if (unlikely(!var28)) {
var30 = glob_sys;
if (unlikely(varonce==NULL)) {
var31 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Choosing EGL config failed: ";
var35 = core__flat___NativeString___to_s_full(var34, 28l, 28l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var31)->values[0]=var33;
} else {
var31 = varonce;
varonce = NULL;
}
{
var36 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var37 = ((val*(*)(val* self))(var36->class->vft[COLOR_egl__EGLDisplay__error]))(var36); /* error on <var36:EGLDisplay>*/
}
{
var38 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__Object__to_s]))(var37); /* to_s on <var37:EGLError>*/
}
((struct instance_core__NativeArray*)var31)->values[1]=var38;
{
var39 = ((val*(*)(val* self))(var31->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce = var31;
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__file__Sys__print]))(var30, var39); /* print on <var30:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__egl, 64);
fatal_exit(1);
}
{
var40 = ((short int(*)(val* self))(var_configs->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_configs); /* is_empty on <var_configs:nullable Array[EGLConfig](Array[EGLConfig])>*/
}
var41 = !var40;
if (unlikely(!var41)) {
var42 = glob_sys;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "Found no EGL config";
var46 = core__flat___NativeString___to_s_full(var45, 19l, 19l);
var44 = var46;
varonce43 = var44;
}
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_core__file__Sys__print]))(var42, var44); /* print on <var42:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__egl, 65);
fatal_exit(1);
}
var47 = glob_sys;
{
var48 = ((short int(*)(val* self))(var47->class->vft[COLOR_gamnit__display__Sys__debug_gamnit]))(var47); /* debug_gamnit on <var47:Sys>*/
}
if (var48){
var49 = glob_sys;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "EGL available configurations:";
var53 = core__flat___NativeString___to_s_full(var52, 29l, 29l);
var51 = var53;
varonce50 = var51;
}
{
((void(*)(val* self, val* p0))(var49->class->vft[COLOR_core__file__Sys__print]))(var49, var51); /* print on <var49:Sys>*/
}
var_ = var_configs;
{
var54 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[EGLConfig]>*/
}
var_55 = var54;
for(;;) {
{
var56 = ((short int(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_55); /* is_ok on <var_55:IndexedIterator[EGLConfig]>*/
}
if (var56){
} else {
goto BREAK_label;
}
{
var57 = ((val*(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_55); /* item on <var_55:IndexedIterator[EGLConfig]>*/
}
var_config = var57;
{
var58 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var59 = ((val*(*)(val* self, val* p0))(var_config->class->vft[COLOR_egl__EGLConfig__attribs]))(var_config, var58); /* attribs on <var_config:EGLConfig>*/
}
var_attribs = var59;
var60 = glob_sys;
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "* Conformant to: ";
var66 = core__flat___NativeString___to_s_full(var65, 17l, 17l);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[0]=var64;
} else {
var62 = varonce61;
varonce61 = NULL;
}
{
var67 = ((val*(*)(val* self))(var_attribs->class->vft[COLOR_egl__EGLConfigAttribs__conformant]))(var_attribs); /* conformant on <var_attribs:EGLConfigAttribs>*/
}
{
var68 = ((val*(*)(val* self))(var67->class->vft[COLOR_core__abstract_text__Object__to_s]))(var67); /* to_s on <var67:EGLConformant>*/
}
((struct instance_core__NativeArray*)var62)->values[1]=var68;
{
var69 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
((void(*)(val* self, val* p0))(var60->class->vft[COLOR_core__file__Sys__print]))(var60, var69); /* print on <var60:Sys>*/
}
var70 = glob_sys;
if (unlikely(varonce71==NULL)) {
var72 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "  Caveats: ";
var76 = core__flat___NativeString___to_s_full(var75, 11l, 11l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var72)->values[0]=var74;
} else {
var72 = varonce71;
varonce71 = NULL;
}
{
var77 = ((val*(*)(val* self))(var_attribs->class->vft[COLOR_egl__EGLConfigAttribs__caveat]))(var_attribs); /* caveat on <var_attribs:EGLConfigAttribs>*/
}
{
var78 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__Object__to_s]))(var77); /* to_s on <var77:EGLConfigCaveat>*/
}
((struct instance_core__NativeArray*)var72)->values[1]=var78;
{
var79 = ((val*(*)(val* self))(var72->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
((void(*)(val* self, val* p0))(var70->class->vft[COLOR_core__file__Sys__print]))(var70, var79); /* print on <var70:Sys>*/
}
var80 = glob_sys;
if (unlikely(varonce81==NULL)) {
var82 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "  Size of RGBA: ";
var86 = core__flat___NativeString___to_s_full(var85, 16l, 16l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var82)->values[0]=var84;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = " ";
var90 = core__flat___NativeString___to_s_full(var89, 1l, 1l);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var82)->values[2]=var88;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = " ";
var94 = core__flat___NativeString___to_s_full(var93, 1l, 1l);
var92 = var94;
varonce91 = var92;
}
((struct instance_core__NativeArray*)var82)->values[4]=var92;
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = " ";
var98 = core__flat___NativeString___to_s_full(var97, 1l, 1l);
var96 = var98;
varonce95 = var96;
}
((struct instance_core__NativeArray*)var82)->values[6]=var96;
} else {
var82 = varonce81;
varonce81 = NULL;
}
{
var99 = ((long(*)(val* self))(var_attribs->class->vft[COLOR_egl__EGLConfigAttribs__red_size]))(var_attribs); /* red_size on <var_attribs:EGLConfigAttribs>*/
}
var100 = core__flat___Int___core__abstract_text__Object__to_s(var99);
((struct instance_core__NativeArray*)var82)->values[1]=var100;
{
var101 = ((long(*)(val* self))(var_attribs->class->vft[COLOR_egl__EGLConfigAttribs__green_size]))(var_attribs); /* green_size on <var_attribs:EGLConfigAttribs>*/
}
var102 = core__flat___Int___core__abstract_text__Object__to_s(var101);
((struct instance_core__NativeArray*)var82)->values[3]=var102;
{
var103 = ((long(*)(val* self))(var_attribs->class->vft[COLOR_egl__EGLConfigAttribs__blue_size]))(var_attribs); /* blue_size on <var_attribs:EGLConfigAttribs>*/
}
var104 = core__flat___Int___core__abstract_text__Object__to_s(var103);
((struct instance_core__NativeArray*)var82)->values[5]=var104;
{
var105 = ((long(*)(val* self))(var_attribs->class->vft[COLOR_egl__EGLConfigAttribs__alpha_size]))(var_attribs); /* alpha_size on <var_attribs:EGLConfigAttribs>*/
}
var106 = core__flat___Int___core__abstract_text__Object__to_s(var105);
((struct instance_core__NativeArray*)var82)->values[7]=var106;
{
var107 = ((val*(*)(val* self))(var82->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var82); /* native_to_s on <var82:NativeArray[String]>*/
}
varonce81 = var82;
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_core__file__Sys__print]))(var80, var107); /* print on <var80:Sys>*/
}
var108 = glob_sys;
if (unlikely(varonce109==NULL)) {
var110 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "  Buffer, depth, stencil: ";
var114 = core__flat___NativeString___to_s_full(var113, 26l, 26l);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var110)->values[0]=var112;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = " ";
var118 = core__flat___NativeString___to_s_full(var117, 1l, 1l);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var110)->values[2]=var116;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = " ";
var122 = core__flat___NativeString___to_s_full(var121, 1l, 1l);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var110)->values[4]=var120;
} else {
var110 = varonce109;
varonce109 = NULL;
}
{
var123 = ((long(*)(val* self))(var_attribs->class->vft[COLOR_egl__EGLConfigAttribs__buffer_size]))(var_attribs); /* buffer_size on <var_attribs:EGLConfigAttribs>*/
}
var124 = core__flat___Int___core__abstract_text__Object__to_s(var123);
((struct instance_core__NativeArray*)var110)->values[1]=var124;
{
var125 = ((long(*)(val* self))(var_attribs->class->vft[COLOR_egl__EGLConfigAttribs__depth_size]))(var_attribs); /* depth_size on <var_attribs:EGLConfigAttribs>*/
}
var126 = core__flat___Int___core__abstract_text__Object__to_s(var125);
((struct instance_core__NativeArray*)var110)->values[3]=var126;
{
var127 = ((long(*)(val* self))(var_attribs->class->vft[COLOR_egl__EGLConfigAttribs__stencil_size]))(var_attribs); /* stencil_size on <var_attribs:EGLConfigAttribs>*/
}
var128 = core__flat___Int___core__abstract_text__Object__to_s(var127);
((struct instance_core__NativeArray*)var110)->values[5]=var128;
{
var129 = ((val*(*)(val* self))(var110->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var110); /* native_to_s on <var110:NativeArray[String]>*/
}
varonce109 = var110;
{
((void(*)(val* self, val* p0))(var108->class->vft[COLOR_core__file__Sys__print]))(var108, var129); /* print on <var108:Sys>*/
}
{
((void(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_55); /* next on <var_55:IndexedIterator[EGLConfig]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_55); /* finish on <var_55:IndexedIterator[EGLConfig]>*/
}
} else {
}
{
var130 = ((val*(*)(val* self))(var_configs->class->vft[COLOR_core__abstract_collection__Collection__first]))(var_configs); /* first on <var_configs:nullable Array[EGLConfig](Array[EGLConfig])>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_config_61d]))(self, var130); /* egl_config= on <self:GamnitDisplay>*/
}
RET_LABEL:;
}
/* method egl#GamnitDisplay#setup_egl_context for (self: GamnitDisplay, Pointer) */
void gamnit__egl___GamnitDisplay___setup_egl_context(val* self, val* p0) {
val* var_window_handle /* var window_handle: Pointer */;
val* var /* : EGLDisplay */;
val* var1 /* : EGLConfig */;
val* var2 /* : Array[Int] */;
val* var_ /* var : Array[Int] */;
val* var3 /* : nullable Object */;
val* var4 /* : EGLSurface */;
val* var_window_surface /* var window_surface: EGLSurface */;
short int var5 /* : Bool */;
val* var6 /* : Sys */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
val* var12 /* : EGLDisplay */;
val* var13 /* : EGLError */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : EGLDisplay */;
val* var17 /* : EGLConfig */;
val* var18 /* : EGLContext */;
val* var19 /* : EGLContext */;
short int var20 /* : Bool */;
val* var21 /* : Sys */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : EGLDisplay */;
val* var29 /* : EGLError */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : EGLDisplay */;
val* var33 /* : EGLContext */;
short int var34 /* : Bool */;
short int var_make_current_res /* var make_current_res: Bool */;
val* var35 /* : Sys */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
val* var42 /* : EGLDisplay */;
val* var43 /* : EGLError */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : Sys */;
short int var47 /* : Bool */;
val* var48 /* : Sys */;
val* var50 /* : NativeArray[String] */;
static val* varonce49;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
val* var55 /* : EGLDisplay */;
val* var56 /* : EGLError */;
val* var57 /* : String */;
val* var58 /* : String */;
var_window_handle = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_config]))(self); /* egl_config on <self:GamnitDisplay>*/
}
var2 = NEW_core__Array(&type_core__Array__core__Int);
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_core__array__Array__with_capacity]))(var2, 1l); /* with_capacity on <var2:Array[Int]>*/
}
var_ = var2;
{
var3 = (val*)(0l<<2|1);
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var3); /* push on <var_:Array[Int]>*/
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var->class->vft[COLOR_egl__EGLDisplay__create_window_surface]))(var, var1, var_window_handle, var_); /* create_window_surface on <var:EGLDisplay>*/
}
var_window_surface = var4;
{
var5 = ((short int(*)(val* self))(var_window_surface->class->vft[COLOR_egl__EGLSurface__is_ok]))(var_window_surface); /* is_ok on <var_window_surface:EGLSurface>*/
}
if (unlikely(!var5)) {
var6 = glob_sys;
if (unlikely(varonce==NULL)) {
var7 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "Creating EGL window surface failed: ";
var11 = core__flat___NativeString___to_s_full(var10, 36l, 36l);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var7)->values[0]=var9;
} else {
var7 = varonce;
varonce = NULL;
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_egl__EGLDisplay__error]))(var12); /* error on <var12:EGLDisplay>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__Object__to_s]))(var13); /* to_s on <var13:EGLError>*/
}
((struct instance_core__NativeArray*)var7)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__file__Sys__print]))(var6, var15); /* print on <var6:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__egl, 86);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__window_surface_61d]))(self, var_window_surface); /* window_surface= on <self:GamnitDisplay>*/
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_config]))(self); /* egl_config on <self:GamnitDisplay>*/
}
{
var18 = ((val*(*)(val* self, val* p0))(var16->class->vft[COLOR_egl__EGLDisplay__create_context]))(var16, var17); /* create_context on <var16:EGLDisplay>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_context_61d]))(self, var18); /* egl_context= on <self:GamnitDisplay>*/
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_context]))(self); /* egl_context on <self:GamnitDisplay>*/
}
{
var20 = ((short int(*)(val* self))(var19->class->vft[COLOR_egl__EGLContext__is_ok]))(var19); /* is_ok on <var19:EGLContext>*/
}
if (unlikely(!var20)) {
var21 = glob_sys;
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Creating EGL context failed: ";
var27 = core__flat___NativeString___to_s_full(var26, 29l, 29l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_egl__EGLDisplay__error]))(var28); /* error on <var28:EGLDisplay>*/
}
{
var30 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__Object__to_s]))(var29); /* to_s on <var29:EGLError>*/
}
((struct instance_core__NativeArray*)var23)->values[1]=var30;
{
var31 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_core__file__Sys__print]))(var21, var31); /* print on <var21:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__egl, 90);
fatal_exit(1);
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_context]))(self); /* egl_context on <self:GamnitDisplay>*/
}
{
var34 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var32->class->vft[COLOR_egl__EGLDisplay__make_current]))(var32, var_window_surface, var_window_surface, var33); /* make_current on <var32:EGLDisplay>*/
}
var_make_current_res = var34;
if (unlikely(!var_make_current_res)) {
var35 = glob_sys;
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Creating EGL make current failed: ";
var41 = core__flat___NativeString___to_s_full(var40, 34l, 34l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
var42 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var43 = ((val*(*)(val* self))(var42->class->vft[COLOR_egl__EGLDisplay__error]))(var42); /* error on <var42:EGLDisplay>*/
}
{
var44 = ((val*(*)(val* self))(var43->class->vft[COLOR_core__abstract_text__Object__to_s]))(var43); /* to_s on <var43:EGLError>*/
}
((struct instance_core__NativeArray*)var37)->values[1]=var44;
{
var45 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_core__file__Sys__print]))(var35, var45); /* print on <var35:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__egl, 93);
fatal_exit(1);
}
var46 = glob_sys;
{
var47 = ((short int(*)(val* self))(var46->class->vft[COLOR_egl__Sys__egl_bind_opengl_es_api]))(var46); /* egl_bind_opengl_es_api on <var46:Sys>*/
}
if (unlikely(!var47)) {
var48 = glob_sys;
if (unlikely(varonce49==NULL)) {
var50 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "EGL bind API failed: ";
var54 = core__flat___NativeString___to_s_full(var53, 21l, 21l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var50)->values[0]=var52;
} else {
var50 = varonce49;
varonce49 = NULL;
}
{
var55 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var56 = ((val*(*)(val* self))(var55->class->vft[COLOR_egl__EGLDisplay__error]))(var55); /* error on <var55:EGLDisplay>*/
}
{
var57 = ((val*(*)(val* self))(var56->class->vft[COLOR_core__abstract_text__Object__to_s]))(var56); /* to_s on <var56:EGLError>*/
}
((struct instance_core__NativeArray*)var50)->values[1]=var57;
{
var58 = ((val*(*)(val* self))(var50->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce49 = var50;
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_core__file__Sys__print]))(var48, var58); /* print on <var48:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__egl, 96);
fatal_exit(1);
}
RET_LABEL:;
}
/* method egl#GamnitDisplay#width for (self: GamnitDisplay): Int */
long gamnit__egl___GamnitDisplay___width(val* self) {
long var /* : Int */;
val* var1 /* : EGLSurface */;
val* var2 /* : EGLDisplay */;
val* var3 /* : EGLSurfaceAttribs */;
long var4 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__window_surface]))(self); /* window_surface on <self:GamnitDisplay>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_egl__EGLSurface__attribs]))(var1, var2); /* attribs on <var1:EGLSurface>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_egl__EGLSurfaceAttribs__width]))(var3); /* width on <var3:EGLSurfaceAttribs>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#GamnitDisplay#height for (self: GamnitDisplay): Int */
long gamnit__egl___GamnitDisplay___height(val* self) {
long var /* : Int */;
val* var1 /* : EGLSurface */;
val* var2 /* : EGLDisplay */;
val* var3 /* : EGLSurfaceAttribs */;
long var4 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__window_surface]))(self); /* window_surface on <self:GamnitDisplay>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_egl__EGLSurface__attribs]))(var1, var2); /* attribs on <var1:EGLSurface>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_egl__EGLSurfaceAttribs__height]))(var3); /* height on <var3:EGLSurfaceAttribs>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method egl#GamnitDisplay#close_egl for (self: GamnitDisplay) */
void gamnit__egl___GamnitDisplay___close_egl(val* self) {
val* var /* : EGLDisplay */;
val* var1 /* : EGLSurface */;
val* var2 /* : EGLSurface */;
val* var3 /* : EGLSurface */;
val* var4 /* : EGLSurface */;
val* var5 /* : EGLContext */;
val* var6 /* : EGLContext */;
short int var7 /* : Bool */;
val* var8 /* : EGLDisplay */;
val* var9 /* : EGLContext */;
short int var10 /* : Bool */;
val* var11 /* : EGLDisplay */;
val* var12 /* : EGLSurface */;
short int var13 /* : Bool */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
var1 = NEW_egl__EGLSurface(&type_egl__EGLSurface);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_egl__EGLSurface__none]))(var1); /* none on <var1:EGLSurface>*/
}
var3 = NEW_egl__EGLSurface(&type_egl__EGLSurface);
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_egl__EGLSurface__none]))(var3); /* none on <var3:EGLSurface>*/
}
var5 = NEW_egl__EGLContext(&type_egl__EGLContext);
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_egl__EGLContext__none]))(var5); /* none on <var5:EGLContext>*/
}
{
var7 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var->class->vft[COLOR_egl__EGLDisplay__make_current]))(var, var2, var4, var6); /* make_current on <var:EGLDisplay>*/
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_context]))(self); /* egl_context on <self:GamnitDisplay>*/
}
{
var10 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_egl__EGLDisplay__destroy_context]))(var8, var9); /* destroy_context on <var8:EGLDisplay>*/
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__window_surface]))(self); /* window_surface on <self:GamnitDisplay>*/
}
{
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_egl__EGLDisplay__destroy_surface]))(var11, var12); /* destroy_surface on <var11:EGLDisplay>*/
}
RET_LABEL:;
}
/* method egl#GamnitDisplay#flip for (self: GamnitDisplay) */
void gamnit__egl___GamnitDisplay___flip(val* self) {
val* var /* : EGLDisplay */;
val* var1 /* : EGLSurface */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__egl_display]))(self); /* egl_display on <self:GamnitDisplay>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__egl__GamnitDisplay__window_surface]))(self); /* window_surface on <self:GamnitDisplay>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_egl__EGLDisplay__swap_buffers]))(var, var1); /* swap_buffers on <var:EGLDisplay>*/
}
RET_LABEL:;
}
