#include "core__time.sep.0.h"
/* method time#Sys#nanosleep for (self: Sys, Int, Int) */
void core__time___Sys___nanosleep(val* self, long p0, long p1) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
core__time___Sys_nanosleep___impl(var_for_c_0, p0, p1);
RET_LABEL:;
}
/* method time#Sys#get_time for (self: Sys): Int */
long core__time___Sys___get_time(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__time___Sys_get_time___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Float#sleep for (self: Float) */
void core__time___Float___sleep(double self) {
core__time___Float_sleep___impl(self);
RET_LABEL:;
}
/* method time#TimeT#new for (self: TimeT): TimeT */
val* core___core__TimeT___new(val* self) {
val* var /* : TimeT */;
val* var1 /* : TimeT */;
val* var2 /* : TimeT */;
var1 = core__time___new_TimeT___impl();
var2 = BOX_core__Pointer(var1); /* boxing TimeT */
var2->type = &type_core__TimeT;
var2->class = &class_core__TimeT;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#TimeT#from_i for (self: TimeT, Int): TimeT */
val* core___core__TimeT___from_i(val* self, long p0) {
val* var /* : TimeT */;
val* var1 /* : TimeT */;
val* var2 /* : TimeT */;
var1 = core__time___new_TimeT_from_i___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing TimeT */
var2->type = &type_core__TimeT;
var2->class = &class_core__TimeT;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#TimeT#update for (self: TimeT) */
void core___core__TimeT___update(val* self) {
void* var /* : TimeT for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing TimeT */
core__time___TimeT_update___impl(var);
RET_LABEL:;
}
/* method time#TimeT#ctime for (self: TimeT): String */
val* core___core__TimeT___ctime(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : TimeT for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing TimeT */
struct nitni_instance* ret_var;
ret_var = core__time___TimeT_ctime___impl(var2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for core::NativeString::to_s_with_copy */
struct nitni_instance * core__time___NativeString_to_s_with_copy( char* self ) {
val* var /* : FlatString */;
var = core__flat___NativeString___to_s_with_copy(self);
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var;
return ret_for_c;
}
/* method time#TimeT#difftime for (self: TimeT, TimeT): Float */
double core___core__TimeT___difftime(val* self, val* p0) {
double var /* : Float */;
double var1 /* : Float */;
void* var2 /* : TimeT for extern */;
void* var3 /* : TimeT for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing TimeT */
var3 = ((struct instance_core__Pointer*)p0)->value; /* unboxing TimeT */
var1 = core__time___TimeT_difftime___impl(var2, var3);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#TimeT#to_s for (self: TimeT): String */
val* core___core__TimeT___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__time__TimeT__ctime]))(self); /* ctime on <self:TimeT>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "\n";
var4 = core__flat___NativeString___to_s_full(var3, 1l, 1l);
var2 = var4;
varonce = var2;
}
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "";
var8 = core__flat___NativeString___to_s_full(var7, 0l, 0l);
var6 = var8;
varonce5 = var6;
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_core__string_search__Text__replace]))(var1, var2, var6); /* replace on <var1:String>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#TimeT#to_i for (self: TimeT): Int */
long core___core__TimeT___to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : TimeT for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing TimeT */
var1 = core__time___TimeT_to_i___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#gmtime for (self: Tm): Tm */
val* core___core__Tm___gmtime(val* self) {
val* var /* : Tm */;
val* var1 /* : Tm */;
val* var2 /* : Tm */;
var1 = core__time___new_Tm_gmtime___impl();
var2 = BOX_core__Pointer(var1); /* boxing Tm */
var2->type = &type_core__Tm;
var2->class = &class_core__Tm;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#gmtime_from_timet for (self: Tm, TimeT): Tm */
val* core___core__Tm___gmtime_from_timet(val* self, val* p0) {
val* var /* : Tm */;
val* var1 /* : Tm */;
void* var2 /* : TimeT for extern */;
val* var3 /* : Tm */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing TimeT */
var1 = core__time___new_Tm_gmtime_from_timet___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing Tm */
var3->type = &type_core__Tm;
var3->class = &class_core__Tm;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#localtime for (self: Tm): Tm */
val* core___core__Tm___localtime(val* self) {
val* var /* : Tm */;
val* var1 /* : Tm */;
val* var2 /* : Tm */;
var1 = core__time___new_Tm_localtime___impl();
var2 = BOX_core__Pointer(var1); /* boxing Tm */
var2->type = &type_core__Tm;
var2->class = &class_core__Tm;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#localtime_from_timet for (self: Tm, TimeT): Tm */
val* core___core__Tm___localtime_from_timet(val* self, val* p0) {
val* var /* : Tm */;
val* var1 /* : Tm */;
void* var2 /* : TimeT for extern */;
val* var3 /* : Tm */;
var2 = ((struct instance_core__Pointer*)p0)->value; /* unboxing TimeT */
var1 = core__time___new_Tm_localtime_from_timet___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing Tm */
var3->type = &type_core__Tm;
var3->class = &class_core__Tm;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#to_timet for (self: Tm): TimeT */
val* core___core__Tm___to_timet(val* self) {
val* var /* : TimeT */;
val* var1 /* : TimeT */;
void* var2 /* : Tm for extern */;
val* var3 /* : TimeT */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
var1 = core__time___Tm_to_timet___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing TimeT */
var3->type = &type_core__TimeT;
var3->class = &class_core__TimeT;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#sec for (self: Tm): Int */
long core___core__Tm___sec(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
var1 = core__time___Tm_sec___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#min for (self: Tm): Int */
long core___core__Tm___min(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
var1 = core__time___Tm_min___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#hour for (self: Tm): Int */
long core___core__Tm___hour(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
var1 = core__time___Tm_hour___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#mday for (self: Tm): Int */
long core___core__Tm___mday(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
var1 = core__time___Tm_mday___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#mon for (self: Tm): Int */
long core___core__Tm___mon(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
var1 = core__time___Tm_mon___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#year for (self: Tm): Int */
long core___core__Tm___year(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
var1 = core__time___Tm_year___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#wday for (self: Tm): Int */
long core___core__Tm___wday(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
var1 = core__time___Tm_wday___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#yday for (self: Tm): Int */
long core___core__Tm___yday(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : Tm for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
var1 = core__time___Tm_yday___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#is_dst for (self: Tm): Bool */
short int core___core__Tm___is_dst(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : Tm for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
var1 = core__time___Tm_is_dst___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#asctime for (self: Tm): String */
val* core___core__Tm___asctime(val* self) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Tm for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
struct nitni_instance* ret_var;
ret_var = core__time___Tm_asctime___impl(var2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#strftime for (self: Tm, String): String */
val* core___core__Tm___strftime(val* self, val* p0) {
val* var /* : String */;
val* var1 /* : String */;
void* var2 /* : Tm for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
struct nitni_instance* var_for_c_1;
var_for_c_1 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
struct nitni_instance* ret_var;
ret_var = core__time___Tm_strftime___impl(var2, var_for_c_1);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for core::Text::to_cstring */
char* core__time___String_to_cstring( struct nitni_instance * self ) {
char* var /* : NativeString */;
{
var = ((char*(*)(val* self))(self->value->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self->value); /* to_cstring on <self->value:String>*/
}
return var;
}
/* nitni callback for core::Object::to_s */
struct nitni_instance * core__time___NativeString_to_s( char* self ) {
val* var /* : String */;
var = core__flat___NativeString___core__abstract_text__Object__to_s(self);
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var;
return ret_for_c;
}
/* method time#Tm#to_s for (self: Tm): String */
val* core___core__Tm___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__time__Tm__asctime]))(self); /* asctime on <self:Tm>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "\n";
var4 = core__flat___NativeString___to_s_full(var3, 1l, 1l);
var2 = var4;
varonce = var2;
}
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "";
var8 = core__flat___NativeString___to_s_full(var7, 0l, 0l);
var6 = var8;
varonce5 = var6;
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_core__string_search__Text__replace]))(var1, var2, var6); /* replace on <var1:String>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#ISODate#year for (self: ISODate): Int */
long core___core__ISODate___year(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__time__ISODate___year].l; /* _year on <self:ISODate> */
var = var1;
RET_LABEL:;
return var;
}
/* method time#ISODate#year= for (self: ISODate, Int) */
void core___core__ISODate___year_61d(val* self, long p0) {
self->attrs[COLOR_core__time__ISODate___year].l = p0; /* _year on <self:ISODate> */
RET_LABEL:;
}
/* method time#ISODate#month for (self: ISODate): Int */
long core___core__ISODate___month(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__time__ISODate___month].l; /* _month on <self:ISODate> */
var = var1;
RET_LABEL:;
return var;
}
/* method time#ISODate#month= for (self: ISODate, Int) */
void core___core__ISODate___month_61d(val* self, long p0) {
self->attrs[COLOR_core__time__ISODate___month].l = p0; /* _month on <self:ISODate> */
RET_LABEL:;
}
/* method time#ISODate#day for (self: ISODate): Int */
long core___core__ISODate___day(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__time__ISODate___day].l; /* _day on <self:ISODate> */
var = var1;
RET_LABEL:;
return var;
}
/* method time#ISODate#day= for (self: ISODate, Int) */
void core___core__ISODate___day_61d(val* self, long p0) {
self->attrs[COLOR_core__time__ISODate___day].l = p0; /* _day on <self:ISODate> */
RET_LABEL:;
}
/* method time#ISODate#hours for (self: ISODate): Int */
long core___core__ISODate___hours(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__time__ISODate___hours].l; /* _hours on <self:ISODate> */
var = var1;
RET_LABEL:;
return var;
}
/* method time#ISODate#hours= for (self: ISODate, Int) */
void core___core__ISODate___hours_61d(val* self, long p0) {
self->attrs[COLOR_core__time__ISODate___hours].l = p0; /* _hours on <self:ISODate> */
RET_LABEL:;
}
/* method time#ISODate#minutes for (self: ISODate): Int */
long core___core__ISODate___minutes(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__time__ISODate___minutes].l; /* _minutes on <self:ISODate> */
var = var1;
RET_LABEL:;
return var;
}
/* method time#ISODate#minutes= for (self: ISODate, Int) */
void core___core__ISODate___minutes_61d(val* self, long p0) {
self->attrs[COLOR_core__time__ISODate___minutes].l = p0; /* _minutes on <self:ISODate> */
RET_LABEL:;
}
/* method time#ISODate#seconds for (self: ISODate): Int */
long core___core__ISODate___seconds(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__time__ISODate___seconds].l; /* _seconds on <self:ISODate> */
var = var1;
RET_LABEL:;
return var;
}
/* method time#ISODate#seconds= for (self: ISODate, Int) */
void core___core__ISODate___seconds_61d(val* self, long p0) {
self->attrs[COLOR_core__time__ISODate___seconds].l = p0; /* _seconds on <self:ISODate> */
RET_LABEL:;
}
/* method time#ISODate#timezone for (self: ISODate): String */
val* core___core__ISODate___timezone(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__time__ISODate___timezone].val; /* _timezone on <self:ISODate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _timezone");
PRINT_ERROR(" (%s:%d)\n", FILE_core__time, 200);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method time#ISODate#timezone= for (self: ISODate, String) */
void core___core__ISODate___timezone_61d(val* self, val* p0) {
self->attrs[COLOR_core__time__ISODate___timezone].val = p0; /* _timezone on <self:ISODate> */
RET_LABEL:;
}
/* method time#ISODate#init for (self: ISODate) */
void core___core__ISODate___core__kernel__Object__init(val* self) {
val* var /* : Tm */;
val* var1 /* : Tm */;
val* var_t /* var t: Tm */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__ISODate___core__kernel__Object__init]))(self); /* init on <self:ISODate>*/
}
var = NEW_core__Tm(&type_core__Tm);
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__time__Tm__localtime]))(var); /* localtime on <var:Tm>*/
}
var_t = var1;
{
var2 = ((long(*)(val* self))(var_t->class->vft[COLOR_core__time__Tm__year]))(var_t); /* year on <var_t:Tm>*/
}
{
{ /* Inline kernel#Int#+ (1900l,var2) on <1900l:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = 1900l + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__time__ISODate__year_61d]))(self, var3); /* year= on <self:ISODate>*/
}
{
var7 = ((long(*)(val* self))(var_t->class->vft[COLOR_core__time__Tm__mon]))(var_t); /* mon on <var_t:Tm>*/
}
{
{ /* Inline kernel#Int#+ (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var7 + 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__time__ISODate__month_61d]))(self, var8); /* month= on <self:ISODate>*/
}
{
var15 = ((long(*)(val* self))(var_t->class->vft[COLOR_core__time__Tm__mday]))(var_t); /* mday on <var_t:Tm>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__time__ISODate__day_61d]))(self, var15); /* day= on <self:ISODate>*/
}
{
var16 = ((long(*)(val* self))(var_t->class->vft[COLOR_core__time__Tm__hour]))(var_t); /* hour on <var_t:Tm>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__time__ISODate__hours_61d]))(self, var16); /* hours= on <self:ISODate>*/
}
{
var17 = ((long(*)(val* self))(var_t->class->vft[COLOR_core__time__Tm__min]))(var_t); /* min on <var_t:Tm>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__time__ISODate__minutes_61d]))(self, var17); /* minutes= on <self:ISODate>*/
}
{
var18 = ((long(*)(val* self))(var_t->class->vft[COLOR_core__time__Tm__sec]))(var_t); /* sec on <var_t:Tm>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__time__ISODate__seconds_61d]))(self, var18); /* seconds= on <self:ISODate>*/
}
RET_LABEL:;
}
/* method time#ISODate#from_string for (self: ISODate, String) */
void core___core__ISODate___from_string(val* self, val* p0) {
val* var_str /* var str: String */;
val* var /* : Text */;
long var1 /* : Int */;
val* var2 /* : Text */;
long var3 /* : Int */;
val* var4 /* : Text */;
long var5 /* : Int */;
val* var6 /* : Text */;
long var7 /* : Int */;
val* var8 /* : Text */;
long var9 /* : Int */;
val* var10 /* : Text */;
long var11 /* : Int */;
long var12 /* : Int */;
val* var13 /* : Text */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:ISODate>*/
}
var_str = p0;
{
var = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_core__abstract_text__Text__substring]))(var_str, 0l, 4l); /* substring on <var_str:String>*/
}
{
var1 = ((long(*)(val* self))(var->class->vft[COLOR_core__abstract_text__Text__to_i]))(var); /* to_i on <var:Text(String)>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__time__ISODate__year_61d]))(self, var1); /* year= on <self:ISODate>*/
}
{
var2 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_core__abstract_text__Text__substring]))(var_str, 5l, 2l); /* substring on <var_str:String>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__to_i]))(var2); /* to_i on <var2:Text(String)>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__time__ISODate__month_61d]))(self, var3); /* month= on <self:ISODate>*/
}
{
var4 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_core__abstract_text__Text__substring]))(var_str, 8l, 2l); /* substring on <var_str:String>*/
}
{
var5 = ((long(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__Text__to_i]))(var4); /* to_i on <var4:Text(String)>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__time__ISODate__day_61d]))(self, var5); /* day= on <self:ISODate>*/
}
{
var6 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_core__abstract_text__Text__substring]))(var_str, 11l, 2l); /* substring on <var_str:String>*/
}
{
var7 = ((long(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__Text__to_i]))(var6); /* to_i on <var6:Text(String)>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__time__ISODate__hours_61d]))(self, var7); /* hours= on <self:ISODate>*/
}
{
var8 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_core__abstract_text__Text__substring]))(var_str, 14l, 2l); /* substring on <var_str:String>*/
}
{
var9 = ((long(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__Text__to_i]))(var8); /* to_i on <var8:Text(String)>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__time__ISODate__minutes_61d]))(self, var9); /* minutes= on <self:ISODate>*/
}
{
var10 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_core__abstract_text__Text__substring]))(var_str, 17l, 2l); /* substring on <var_str:String>*/
}
{
var11 = ((long(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__Text__to_i]))(var10); /* to_i on <var10:Text(String)>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__time__ISODate__seconds_61d]))(self, var11); /* seconds= on <self:ISODate>*/
}
{
var12 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:String>*/
}
{
var13 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_core__abstract_text__Text__substring]))(var_str, 19l, var12); /* substring on <var_str:String>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__time__ISODate__timezone_61d]))(self, var13); /* timezone= on <self:ISODate>*/
}
RET_LABEL:;
}
/* method time#ISODate#to_s for (self: ISODate): String */
val* core___core__ISODate___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_buff /* var buff: FlatBuffer */;
long var2 /* : Int */;
val* var3 /* : String */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
long var9 /* : Int */;
val* var10 /* : String */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
long var19 /* : Int */;
val* var20 /* : String */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
long var29 /* : Int */;
val* var30 /* : String */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
long var39 /* : Int */;
val* var40 /* : String */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_buff = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__time__ISODate__year]))(self); /* year on <self:ISODate>*/
}
var3 = core__flat___Int___core__abstract_text__Object__to_s(var2);
{
((void(*)(val* self, val* p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buff, var3); /* append on <var_buff:FlatBuffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buff, '-'); /* add on <var_buff:FlatBuffer>*/
}
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__time__ISODate__month]))(self); /* month on <self:ISODate>*/
}
{
{ /* Inline kernel#Int#< (var4,10l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <10l:Int> isa OTHER */
/* <10l:Int> isa OTHER */
var7 = 1; /* easy <10l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var8 = var4 < 10l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
((void(*)(val* self, uint32_t p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buff, '0'); /* add on <var_buff:FlatBuffer>*/
}
} else {
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_core__time__ISODate__month]))(self); /* month on <self:ISODate>*/
}
var10 = core__flat___Int___core__abstract_text__Object__to_s(var9);
{
((void(*)(val* self, val* p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buff, var10); /* append on <var_buff:FlatBuffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buff, '-'); /* add on <var_buff:FlatBuffer>*/
}
{
var11 = ((long(*)(val* self))(self->class->vft[COLOR_core__time__ISODate__day]))(self); /* day on <self:ISODate>*/
}
{
{ /* Inline kernel#Int#< (var11,10l) on <var11:Int> */
/* Covariant cast for argument 0 (i) <10l:Int> isa OTHER */
/* <10l:Int> isa OTHER */
var14 = 1; /* easy <10l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var18 = var11 < 10l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
((void(*)(val* self, uint32_t p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buff, '0'); /* add on <var_buff:FlatBuffer>*/
}
} else {
}
{
var19 = ((long(*)(val* self))(self->class->vft[COLOR_core__time__ISODate__day]))(self); /* day on <self:ISODate>*/
}
var20 = core__flat___Int___core__abstract_text__Object__to_s(var19);
{
((void(*)(val* self, val* p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buff, var20); /* append on <var_buff:FlatBuffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buff, 'T'); /* add on <var_buff:FlatBuffer>*/
}
{
var21 = ((long(*)(val* self))(self->class->vft[COLOR_core__time__ISODate__hours]))(self); /* hours on <self:ISODate>*/
}
{
{ /* Inline kernel#Int#< (var21,10l) on <var21:Int> */
/* Covariant cast for argument 0 (i) <10l:Int> isa OTHER */
/* <10l:Int> isa OTHER */
var24 = 1; /* easy <10l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var28 = var21 < 10l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
((void(*)(val* self, uint32_t p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buff, '0'); /* add on <var_buff:FlatBuffer>*/
}
} else {
}
{
var29 = ((long(*)(val* self))(self->class->vft[COLOR_core__time__ISODate__hours]))(self); /* hours on <self:ISODate>*/
}
var30 = core__flat___Int___core__abstract_text__Object__to_s(var29);
{
((void(*)(val* self, val* p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buff, var30); /* append on <var_buff:FlatBuffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buff, ':'); /* add on <var_buff:FlatBuffer>*/
}
{
var31 = ((long(*)(val* self))(self->class->vft[COLOR_core__time__ISODate__minutes]))(self); /* minutes on <self:ISODate>*/
}
{
{ /* Inline kernel#Int#< (var31,10l) on <var31:Int> */
/* Covariant cast for argument 0 (i) <10l:Int> isa OTHER */
/* <10l:Int> isa OTHER */
var34 = 1; /* easy <10l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var38 = var31 < 10l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
{
((void(*)(val* self, uint32_t p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buff, '0'); /* add on <var_buff:FlatBuffer>*/
}
} else {
}
{
var39 = ((long(*)(val* self))(self->class->vft[COLOR_core__time__ISODate__minutes]))(self); /* minutes on <self:ISODate>*/
}
var40 = core__flat___Int___core__abstract_text__Object__to_s(var39);
{
((void(*)(val* self, val* p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buff, var40); /* append on <var_buff:FlatBuffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buff, ':'); /* add on <var_buff:FlatBuffer>*/
}
{
var41 = ((long(*)(val* self))(self->class->vft[COLOR_core__time__ISODate__seconds]))(self); /* seconds on <self:ISODate>*/
}
{
{ /* Inline kernel#Int#< (var41,10l) on <var41:Int> */
/* Covariant cast for argument 0 (i) <10l:Int> isa OTHER */
/* <10l:Int> isa OTHER */
var44 = 1; /* easy <10l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var48 = var41 < 10l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
{
((void(*)(val* self, uint32_t p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buff, '0'); /* add on <var_buff:FlatBuffer>*/
}
} else {
}
{
var49 = ((long(*)(val* self))(self->class->vft[COLOR_core__time__ISODate__seconds]))(self); /* seconds on <self:ISODate>*/
}
var50 = core__flat___Int___core__abstract_text__Object__to_s(var49);
{
((void(*)(val* self, val* p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buff, var50); /* append on <var_buff:FlatBuffer>*/
}
{
var51 = ((val*(*)(val* self))(self->class->vft[COLOR_core__time__ISODate__timezone]))(self); /* timezone on <self:ISODate>*/
}
{
((void(*)(val* self, val* p0))(var_buff->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buff, var51); /* append on <var_buff:FlatBuffer>*/
}
{
var52 = ((val*(*)(val* self))(var_buff->class->vft[COLOR_core__stream__Writable__write_to_string]))(var_buff); /* write_to_string on <var_buff:FlatBuffer>*/
}
var = var52;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#ISODate#< for (self: ISODate, ISODate): Bool */
short int core___core__ISODate___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_o /* var o: ISODate */;
val* var2 /* : String */;
val* var3 /* : String */;
short int var4 /* : Bool */;
/* Covariant cast for argument 0 (o) <p0:ISODate> isa OTHER */
/* <p0:ISODate> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__time, 250);
fatal_exit(1);
}
var_o = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:ISODate>*/
}
{
var3 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_o); /* to_s on <var_o:ISODate>*/
}
{
var4 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_core__kernel__Comparable___60d]))(var2, var3); /* < on <var2:String>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
