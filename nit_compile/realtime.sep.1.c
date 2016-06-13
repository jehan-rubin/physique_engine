#include "realtime.sep.0.h"
/* method realtime#Timespec#new for (self: Timespec, Int, Int): Timespec */
val* realtime___realtime__Timespec___new(val* self, long p0, long p1) {
val* var /* : Timespec */;
val* var1 /* : Timespec */;
val* var2 /* : Timespec */;
var1 = realtime___new_Timespec___impl(p0, p1);
var2 = BOX_core__Pointer(var1); /* boxing Timespec */
var2->type = &type_realtime__Timespec;
var2->class = &class_realtime__Timespec;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method realtime#Timespec#monotonic_now for (self: Timespec): Timespec */
val* realtime___realtime__Timespec___monotonic_now(val* self) {
val* var /* : Timespec */;
val* var1 /* : Timespec */;
val* var2 /* : Timespec */;
var1 = realtime___new_Timespec_monotonic_now___impl();
var2 = BOX_core__Pointer(var1); /* boxing Timespec */
var2->type = &type_realtime__Timespec;
var2->class = &class_realtime__Timespec;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method realtime#Timespec#copy_of for (self: Timespec, Timespec): Timespec */
val* realtime___realtime__Timespec___copy_of(val* self, val* p0) {
val* var /* : Timespec */;
val* var1 /* : Timespec */;
void* var2 /* : Timespec for extern */;
val* var3 /* : Timespec */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing Timespec */
var1 = realtime___new_Timespec_copy_of___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing Timespec */
var3->type = &type_realtime__Timespec;
var3->class = &class_realtime__Timespec;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method realtime#Timespec#update for (self: Timespec) */
void realtime___realtime__Timespec___update(val* self) {
void* var /* : Timespec for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing Timespec */
realtime___Timespec_update___impl(var);
RET_LABEL:;
}
/* method realtime#Timespec#- for (self: Timespec, Timespec): Timespec */
val* realtime___realtime__Timespec____45d(val* self, val* p0) {
val* var /* : Timespec */;
val* var_o /* var o: Timespec */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_s /* var s: Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
long var_ns /* var ns: Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
val* var31 /* : Timespec */;
val* var32 /* : Timespec */;
var_o = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_realtime__Timespec__sec]))(self); /* sec on <self:Timespec>*/
}
{
var2 = ((long(*)(val* self))(var_o->class->vft[COLOR_realtime__Timespec__sec]))(var_o); /* sec on <var_o:Timespec>*/
}
{
{ /* Inline kernel#Int#- (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var1 - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_s = var3;
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_realtime__Timespec__nanosec]))(self); /* nanosec on <self:Timespec>*/
}
{
var8 = ((long(*)(val* self))(var_o->class->vft[COLOR_realtime__Timespec__nanosec]))(var_o); /* nanosec on <var_o:Timespec>*/
}
{
{ /* Inline kernel#Int#- (var7,var8) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var7 - var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ns = var9;
{
var16 = ((long(*)(val* self))(self->class->vft[COLOR_realtime__Timespec__nanosec]))(self); /* nanosec on <self:Timespec>*/
}
{
{ /* Inline kernel#Int#> (var_ns,var16) on <var_ns:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var23 = var_ns > var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline kernel#Int#+ (var_s,1l) on <var_s:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var30 = var_s + 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_s = var24;
} else {
}
var31 = NEW_realtime__Timespec(&type_realtime__Timespec);
{
var32 = ((val*(*)(val* self, long p0, long p1))(var31->class->vft[COLOR_realtime__Timespec__new]))(var31, var_s, var_ns); /* new on <var31:Timespec>*/
}
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method realtime#Timespec#sec for (self: Timespec): Int */
long realtime___realtime__Timespec___sec(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Timespec for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Timespec */
var1 = realtime___Timespec_sec___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method realtime#Timespec#nanosec for (self: Timespec): Int */
long realtime___realtime__Timespec___nanosec(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Timespec for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Timespec */
var1 = realtime___Timespec_nanosec___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method realtime#Timespec#microsec for (self: Timespec): Int */
long realtime___realtime__Timespec___microsec(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Timespec for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Timespec */
var1 = realtime___Timespec_microsec___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method realtime#Timespec#millisec for (self: Timespec): Int */
long realtime___realtime__Timespec___millisec(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Timespec for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Timespec */
var1 = realtime___Timespec_millisec___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method realtime#Timespec#to_f for (self: Timespec): Float */
double realtime___realtime__Timespec___to_f(val* self) {
double var /* : Float */;
long var1 /* : Int */;
double var2 /* : Float */;
double var4 /* : Float */;
long var5 /* : Int */;
double var6 /* : Float */;
double var8 /* : Float */;
double var9 /* : Float */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var12 /* : Float */;
double var13 /* : Float */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
double var19 /* : Float */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_realtime__Timespec__sec]))(self); /* sec on <self:Timespec>*/
}
{
{ /* Inline kernel#Int#to_f (var1) on <var1:Int> */
var4 = (double)var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_realtime__Timespec__nanosec]))(self); /* nanosec on <self:Timespec>*/
}
{
{ /* Inline kernel#Int#to_f (var5) on <var5:Int> */
var8 = (double)var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Float#/ (var6,1000000000.0) on <var6:Float> */
/* Covariant cast for argument 0 (i) <1000000000.0:Float> isa OTHER */
/* <1000000000.0:Float> isa OTHER */
var11 = 1; /* easy <1000000000.0:Float> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var12 = var6 / 1000000000.0;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Float#+ (var2,var9) on <var2:Float> */
/* Covariant cast for argument 0 (i) <var9:Float> isa OTHER */
/* <var9:Float> isa OTHER */
var15 = 1; /* easy <var9:Float> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var19 = var2 + var9;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method realtime#Timespec#to_s for (self: Timespec): String */
val* realtime___realtime__Timespec___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
double var6 /* : Float */;
val* var7 /* : String */;
val* var8 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "s";
var5 = core__flat___NativeString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((double(*)(val* self))(self->class->vft[COLOR_realtime__Timespec__to_f]))(self); /* to_f on <self:Timespec>*/
}
var7 = core__abstract_text___Float___Object__to_s(var6);
((struct instance_core__NativeArray*)var1)->values[0]=var7;
{
var8 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method realtime#Clock#time_at_beginning for (self: Clock): Timespec */
val* realtime___realtime__Clock___time_at_beginning(val* self) {
val* var /* : Timespec */;
val* var1 /* : Timespec */;
var1 = self->attrs[COLOR_realtime__Clock___time_at_beginning].val; /* _time_at_beginning on <self:Clock> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _time_at_beginning");
PRINT_ERROR(" (%s:%d)\n", FILE_realtime, 121);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method realtime#Clock#time_at_beginning= for (self: Clock, Timespec) */
void realtime___realtime__Clock___time_at_beginning_61d(val* self, val* p0) {
self->attrs[COLOR_realtime__Clock___time_at_beginning].val = p0; /* _time_at_beginning on <self:Clock> */
RET_LABEL:;
}
/* method realtime#Clock#time_at_last_lapse for (self: Clock): Timespec */
val* realtime___realtime__Clock___time_at_last_lapse(val* self) {
val* var /* : Timespec */;
val* var1 /* : Timespec */;
var1 = self->attrs[COLOR_realtime__Clock___time_at_last_lapse].val; /* _time_at_last_lapse on <self:Clock> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _time_at_last_lapse");
PRINT_ERROR(" (%s:%d)\n", FILE_realtime, 124);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method realtime#Clock#time_at_last_lapse= for (self: Clock, Timespec) */
void realtime___realtime__Clock___time_at_last_lapse_61d(val* self, val* p0) {
self->attrs[COLOR_realtime__Clock___time_at_last_lapse].val = p0; /* _time_at_last_lapse on <self:Clock> */
RET_LABEL:;
}
/* method realtime#Clock#resolution for (self: Clock): Timespec */
val* realtime___realtime__Clock___resolution(val* self) {
val* var /* : Timespec */;
val* var1 /* : Timespec */;
val* var2 /* : Timespec */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = realtime___Clock_resolution___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing Timespec */
var2->type = &type_realtime__Timespec;
var2->class = &class_realtime__Timespec;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method realtime#Clock#total for (self: Clock): Timespec */
val* realtime___realtime__Clock___total(val* self) {
val* var /* : Timespec */;
val* var1 /* : Timespec */;
val* var2 /* : Timespec */;
val* var3 /* : Timespec */;
val* var4 /* : Timespec */;
var1 = NEW_realtime__Timespec(&type_realtime__Timespec);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_realtime__Timespec__monotonic_now]))(var1); /* monotonic_now on <var1:Timespec>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_realtime__Clock__time_at_beginning]))(self); /* time_at_beginning on <self:Clock>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var2->class->vft[COLOR_realtime__Timespec___45d]))(var2, var3); /* - on <var2:Timespec>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method realtime#Clock#lapse for (self: Clock): Timespec */
val* realtime___realtime__Clock___lapse(val* self) {
val* var /* : Timespec */;
val* var1 /* : Timespec */;
val* var2 /* : Timespec */;
val* var_nt /* var nt: Timespec */;
val* var3 /* : Timespec */;
val* var4 /* : Timespec */;
val* var_dt /* var dt: Timespec */;
var1 = NEW_realtime__Timespec(&type_realtime__Timespec);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_realtime__Timespec__monotonic_now]))(var1); /* monotonic_now on <var1:Timespec>*/
}
var_nt = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_realtime__Clock__time_at_last_lapse]))(self); /* time_at_last_lapse on <self:Clock>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var_nt->class->vft[COLOR_realtime__Timespec___45d]))(var_nt, var3); /* - on <var_nt:Timespec>*/
}
var_dt = var4;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_realtime__Clock__time_at_last_lapse_61d]))(self, var_nt); /* time_at_last_lapse= on <self:Clock>*/
}
var = var_dt;
goto RET_LABEL;
RET_LABEL:;
return var;
}
