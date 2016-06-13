#include "gamnit__limit_fps.sep.0.h"
/* method limit_fps#App#maximum_fps for (self: App): Float */
double gamnit__limit_fps___app__App___maximum_fps(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__limit_fps__App___maximum_fps].d; /* _maximum_fps on <self:App> */
var = var1;
RET_LABEL:;
return var;
}
/* method limit_fps#App#maximum_fps= for (self: App, Float) */
void gamnit__limit_fps___app__App___maximum_fps_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__limit_fps__App___maximum_fps].d = p0; /* _maximum_fps on <self:App> */
RET_LABEL:;
}
/* method limit_fps#App#current_fps for (self: App): Float */
double gamnit__limit_fps___app__App___current_fps(val* self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = self->attrs[COLOR_gamnit__limit_fps__App___current_fps].d; /* _current_fps on <self:App> */
var = var1;
RET_LABEL:;
return var;
}
/* method limit_fps#App#current_fps= for (self: App, Float) */
void gamnit__limit_fps___app__App___current_fps_61d(val* self, double p0) {
self->attrs[COLOR_gamnit__limit_fps__App___current_fps].d = p0; /* _current_fps on <self:App> */
RET_LABEL:;
}
/* method limit_fps#App#frame_full for (self: App) */
void gamnit__limit_fps___app__App___frame_full(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit__limit_fps___app__App___frame_full]))(self); /* frame_full on <self:App>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_gamnit__limit_fps__App__limit_fps]))(self); /* limit_fps on <self:App>*/
}
RET_LABEL:;
}
/* method limit_fps#App#clock for (self: App): Clock */
val* gamnit__limit_fps___app__App___clock(val* self) {
val* var /* : Clock */;
val* var1 /* : Clock */;
var1 = self->attrs[COLOR_gamnit__limit_fps__App___clock].val; /* _clock on <self:App> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _clock");
PRINT_ERROR(" (%s:%d)\n", FILE_gamnit__limit_fps, 41);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method limit_fps#App#clock= for (self: App, Clock) */
void gamnit__limit_fps___app__App___clock_61d(val* self, val* p0) {
self->attrs[COLOR_gamnit__limit_fps__App___clock].val = p0; /* _clock on <self:App> */
RET_LABEL:;
}
/* method limit_fps#App#frame_count for (self: App): Int */
long gamnit__limit_fps___app__App___frame_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_gamnit__limit_fps__App___frame_count].l; /* _frame_count on <self:App> */
var = var1;
RET_LABEL:;
return var;
}
/* method limit_fps#App#frame_count= for (self: App, Int) */
void gamnit__limit_fps___app__App___frame_count_61d(val* self, long p0) {
self->attrs[COLOR_gamnit__limit_fps__App___frame_count].l = p0; /* _frame_count on <self:App> */
RET_LABEL:;
}
/* method limit_fps#App#frame_count_deadline for (self: App): Int */
long gamnit__limit_fps___app__App___frame_count_deadline(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_gamnit__limit_fps__App___frame_count_deadline].l; /* _frame_count_deadline on <self:App> */
var = var1;
RET_LABEL:;
return var;
}
/* method limit_fps#App#frame_count_deadline= for (self: App, Int) */
void gamnit__limit_fps___app__App___frame_count_deadline_61d(val* self, long p0) {
self->attrs[COLOR_gamnit__limit_fps__App___frame_count_deadline].l = p0; /* _frame_count_deadline on <self:App> */
RET_LABEL:;
}
/* method limit_fps#App#limit_fps for (self: App) */
void gamnit__limit_fps___app__App___limit_fps(val* self) {
val* var /* : Clock */;
val* var1 /* : Timespec */;
long var2 /* : Int */;
long var_t /* var t: Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
double var9 /* : Float */;
double var11 /* : Float */;
double var12 /* : Float */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
double var18 /* : Float */;
double var_cfps /* var cfps: Float */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
val* var_ /* var : App */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
double var34 /* : Float */;
double var_mfps /* var mfps: Float */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
val* var42 /* : Clock */;
val* var43 /* : Timespec */;
val* var_lapse /* var lapse: Timespec */;
double var44 /* : Float */;
double var_dt /* var dt: Float */;
double var45 /* : Float */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
double var51 /* : Float */;
double var_target_dt /* var target_dt: Float */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
short int var58 /* : Bool */;
double var59 /* : Float */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
double var65 /* : Float */;
double var_sleep_t /* var sleep_t: Float */;
val* var66 /* : Clock */;
val* var67 /* : Timespec */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__limit_fps__App__clock]))(self); /* clock on <self:App>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_realtime__Clock__total]))(var); /* total on <var:Clock>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_realtime__Timespec__sec]))(var1); /* sec on <var1:Timespec>*/
}
var_t = var2;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__limit_fps__App__frame_count_deadline]))(self); /* frame_count_deadline on <self:App>*/
}
{
{ /* Inline kernel#Int#>= (var_t,var3) on <var_t:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var7 = var_t >= var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_gamnit__limit_fps__App__frame_count]))(self); /* frame_count on <self:App>*/
}
{
{ /* Inline kernel#Int#to_f (var8) on <var8:Int> */
var11 = (double)var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var9,5.0) on <var9:Float> */
/* Covariant cast for argument 0 (i) <5.0:Float> isa OTHER */
/* <5.0:Float> isa OTHER */
var14 = 1; /* easy <5.0:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var18 = var9 / 5.0;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_cfps = var12;
{
((void(*)(val* self, double p0))(self->class->vft[COLOR_gamnit__limit_fps__App__current_fps_61d]))(self, var_cfps); /* current_fps= on <self:App>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_gamnit__limit_fps__App__frame_count_61d]))(self, 0l); /* frame_count= on <self:App>*/
}
{
{ /* Inline kernel#Int#+ (var_t,5l) on <var_t:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var21 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var25 = var_t + 5l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_gamnit__limit_fps__App__frame_count_deadline_61d]))(self, var19); /* frame_count_deadline= on <self:App>*/
}
} else {
}
var_ = self;
{
var26 = ((long(*)(val* self))(var_->class->vft[COLOR_gamnit__limit_fps__App__frame_count]))(var_); /* frame_count on <var_:App>*/
}
{
{ /* Inline kernel#Int#+ (var26,1l) on <var26:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var29 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var33 = var26 + 1l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_gamnit__limit_fps__App__frame_count_61d]))(var_, var27); /* frame_count= on <var_:App>*/
}
{
var34 = ((double(*)(val* self))(self->class->vft[COLOR_gamnit__limit_fps__App__maximum_fps]))(self); /* maximum_fps on <self:App>*/
}
var_mfps = var34;
{
{ /* Inline kernel#Float#<= (var_mfps,0.0) on <var_mfps:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var37 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 529);
fatal_exit(1);
}
var41 = var_mfps <= 0.0;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
goto RET_LABEL;
} else {
}
{
var42 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__limit_fps__App__clock]))(self); /* clock on <self:App>*/
}
{
var43 = ((val*(*)(val* self))(var42->class->vft[COLOR_realtime__Clock__lapse]))(var42); /* lapse on <var42:Clock>*/
}
var_lapse = var43;
{
var44 = ((double(*)(val* self))(var_lapse->class->vft[COLOR_realtime__Timespec__to_f]))(var_lapse); /* to_f on <var_lapse:Timespec>*/
}
var_dt = var44;
{
{ /* Inline kernel#Float#/ (1.0,var_mfps) on <1.0:Float> */
/* Covariant cast for argument 0 (i) <var_mfps:Float> isa OTHER */
/* <var_mfps:Float> isa OTHER */
var47 = 1; /* easy <var_mfps:Float> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var51 = 1.0 / var_mfps;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_target_dt = var45;
{
{ /* Inline kernel#Float#< (var_dt,var_target_dt) on <var_dt:Float> */
/* Covariant cast for argument 0 (i) <var_target_dt:Float> isa OTHER */
/* <var_target_dt:Float> isa OTHER */
var54 = 1; /* easy <var_target_dt:Float> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 530);
fatal_exit(1);
}
var58 = var_dt < var_target_dt;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
{
{ /* Inline kernel#Float#- (var_target_dt,var_dt) on <var_target_dt:Float> */
/* Covariant cast for argument 0 (i) <var_dt:Float> isa OTHER */
/* <var_dt:Float> isa OTHER */
var61 = 1; /* easy <var_dt:Float> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var65 = var_target_dt - var_dt;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_sleep_t = var59;
core__time___Float___sleep(var_sleep_t); /* Direct call time#Float#sleep on <var_sleep_t:Float>*/
{
var66 = ((val*(*)(val* self))(self->class->vft[COLOR_gamnit__limit_fps__App__clock]))(self); /* clock on <self:App>*/
}
{
var67 = ((val*(*)(val* self))(var66->class->vft[COLOR_realtime__Clock__lapse]))(var66); /* lapse on <var66:Clock>*/
}
} else {
}
RET_LABEL:;
}
