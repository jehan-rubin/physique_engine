#include "core__ropes.sep.0.h"
/* method ropes#Concat#chars for (self: Concat): SequenceRead[Char] */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__chars(val* self) {
val* var /* : SequenceRead[Char] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : SequenceRead[Char] */;
val* var5 /* : RopeChars */;
var1 = self->attrs[COLOR_core__ropes__Concat___chars].val != NULL; /* _chars on <self:Concat> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__ropes__Concat___chars].val; /* _chars on <self:Concat> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 73);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__ropes__RopeChars(&type_core__ropes__RopeChars);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__abstract_text__StringCharView__target_61d]))(var5, self); /* target= on <var5:RopeChars>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:RopeChars>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__ropes__Concat___chars].val = var3; /* _chars on <self:Concat> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#Concat#chars= for (self: Concat, SequenceRead[Char]) */
void core__ropes___core__ropes__Concat___chars_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__Concat___chars].val = p0; /* _chars on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#bytes for (self: Concat): SequenceRead[Byte] */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__bytes(val* self) {
val* var /* : SequenceRead[Byte] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Byte] */;
val* var3 /* : SequenceRead[Byte] */;
val* var5 /* : RopeBytes */;
var1 = self->attrs[COLOR_core__ropes__Concat___bytes].val != NULL; /* _bytes on <self:Concat> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__ropes__Concat___bytes].val; /* _bytes on <self:Concat> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 75);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__ropes__RopeBytes(&type_core__ropes__RopeBytes);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__abstract_text__StringByteView__target_61d]))(var5, self); /* target= on <var5:RopeBytes>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:RopeBytes>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__ropes__Concat___bytes].val = var3; /* _bytes on <self:Concat> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#Concat#bytes= for (self: Concat, SequenceRead[Byte]) */
void core__ropes___core__ropes__Concat___bytes_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__Concat___bytes].val = p0; /* _bytes on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#length for (self: Concat): Int */
long core__ropes___core__ropes__Concat___core__abstract_text__Text__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <self:Concat> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#length= for (self: Concat, Int) */
void core__ropes___core__ropes__Concat___length_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__Concat___length].l = p0; /* _length on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#bytelen for (self: Concat): Int */
long core__ropes___core__ropes__Concat___core__abstract_text__Text__bytelen(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat___bytelen].l; /* _bytelen on <self:Concat> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#bytelen= for (self: Concat, Int) */
void core__ropes___core__ropes__Concat___bytelen_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__Concat___bytelen].l = p0; /* _bytelen on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#substrings for (self: Concat): Iterator[FlatText] */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : RopeSubstrings */;
var1 = NEW_core__ropes__RopeSubstrings(&type_core__ropes__RopeSubstrings);
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeSubstrings__from]))(var1, self, 0l); /* from on <var1:RopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#empty for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__empty(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = core__flat___NativeString___to_s_full(var2, 0l, 0l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#flat_cache for (self: Concat): FlatString */
val* core__ropes___core__ropes__Concat___flat_cache(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 85);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#flat_cache= for (self: Concat, FlatString) */
void core__ropes___core__ropes__Concat___flat_cache_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__Concat___flat_cache].val = p0; /* _flat_cache on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#flat_last_pos_start for (self: Concat): Int */
long core__ropes___core__ropes__Concat___flat_last_pos_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#flat_last_pos_start= for (self: Concat, Int) */
void core__ropes___core__ropes__Concat___flat_last_pos_start_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l = p0; /* _flat_last_pos_start on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#flat_last_pos_end for (self: Concat): Int */
long core__ropes___core__ropes__Concat___flat_last_pos_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_end].l; /* _flat_last_pos_end on <self:Concat> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#flat_last_pos_end= for (self: Concat, Int) */
void core__ropes___core__ropes__Concat___flat_last_pos_end_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__Concat___flat_last_pos_end].l = p0; /* _flat_last_pos_end on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#to_cstring for (self: Concat): NativeString */
char* core__ropes___core__ropes__Concat___core__abstract_text__Text__to_cstring(val* self) {
char* var /* : NativeString */;
short int var1 /* : Bool */;
char* var2 /* : NativeString */;
char* var3 /* : NativeString */;
long var5 /* : Int */;
long var_len /* var len: Int */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
char* var11 /* : NativeString */;
char* var13 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var_off /* var off: Int */;
val* var15 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[FlatText] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_i /* var i: FlatText */;
long var20 /* : Int */;
long var_ilen /* var ilen: Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
char* var25 /* : NativeString */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat__lazy_32d_to_cstring].s; /* lazy _to_cstring on <self:Concat> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__ropes__Concat___to_cstring].str; /* _to_cstring on <self:Concat> */
} else {
{
var5 = self->attrs[COLOR_core__ropes__Concat___bytelen].l; /* _bytelen on <self:Concat> */
var_len = var5;
var6 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var10 = var_len + 1l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var6,var7) on <var6:NativeString> */
var13 = (char*)nit_alloc(var7);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ns = var11;
{
{ /* Inline native#NativeString#[]= (var_ns,var_len,((unsigned char)0x00)) on <var_ns:NativeString> */
var_ns[var_len]=(unsigned char)((unsigned char)0x00);
RET_LABEL14:(void)0;
}
}
var_off = 0l;
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__substrings]))(self); /* substrings on <self:Concat>*/
}
var_ = var15;
{
var16 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[FlatText]>*/
}
if (var18){
} else {
goto BREAK_label;
}
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[FlatText]>*/
}
var_i = var19;
var20 = var_i->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_i:FlatText> */
var_ilen = var20;
/* <var_i:FlatText> isa FlatString */
cltype22 = type_core__FlatString.color;
idtype23 = type_core__FlatString.id;
if(cltype22 >= var_i->type->table_size) {
var21 = 0;
} else {
var21 = var_i->type->type_table[cltype22] == idtype23;
}
if (unlikely(!var21)) {
var_class_name24 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 100);
fatal_exit(1);
}
var25 = var_i->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_i:FlatText(FlatString)> */
/* <var_i:FlatText> isa FlatString */
cltype27 = type_core__FlatString.color;
idtype28 = type_core__FlatString.id;
if(cltype27 >= var_i->type->table_size) {
var26 = 0;
} else {
var26 = var_i->type->type_table[cltype27] == idtype28;
}
if (unlikely(!var26)) {
var_class_name29 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 100);
fatal_exit(1);
}
var30 = var_i->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_i:FlatText(FlatString)> */
{
{ /* Inline native#NativeString#copy_to (var25,var_ns,var_ilen,var30,var_off) on <var25:NativeString> */
memmove(var_ns+var_off,var25+var30,var_ilen);
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_ilen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_ilen:Int> isa OTHER */
/* <var_ilen:Int> isa OTHER */
var34 = 1; /* easy <var_ilen:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var38 = var_off + var_ilen;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_off = var32;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[FlatText]>*/
}
var3 = var_ns;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__ropes__Concat___to_cstring].str = var3; /* _to_cstring on <self:Concat> */
var2 = var3;
self->attrs[COLOR_core__ropes__Concat__lazy_32d_to_cstring].s = 1; /* lazy _to_cstring on <self:Concat> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_cstring= for (self: Concat, NativeString) */
void core__ropes___core__ropes__Concat___to_cstring_61d(val* self, char* p0) {
self->attrs[COLOR_core__ropes__Concat___to_cstring].str = p0; /* _to_cstring on <self:Concat> */
self->attrs[COLOR_core__ropes__Concat__lazy_32d_to_cstring].s = 1; /* lazy _to_cstring on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#left for (self: Concat): String */
val* core__ropes___core__ropes__Concat___left(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 106);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#left= for (self: Concat, String) */
void core__ropes___core__ropes__Concat___left_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__Concat___left].val = p0; /* _left on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#right for (self: Concat): String */
val* core__ropes___core__ropes__Concat___right(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 108);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#Concat#right= for (self: Concat, String) */
void core__ropes___core__ropes__Concat___right_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__Concat___right].val = p0; /* _right on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#init for (self: Concat) */
void core__ropes___core__ropes__Concat___core__kernel__Object__init(val* self) {
val* var /* : String */;
val* var_l /* var l: String */;
val* var1 /* : String */;
val* var_r /* var r: String */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes___core__ropes__Concat___core__kernel__Object__init]))(self); /* init on <self:Concat>*/
}
var = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 112);
fatal_exit(1);
}
var_l = var;
var1 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 113);
fatal_exit(1);
}
var_r = var1;
{
var2 = ((long(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Text__length]))(var_l); /* length on <var_l:String>*/
}
{
var3 = ((long(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Text__length]))(var_r); /* length on <var_r:String>*/
}
{
{ /* Inline kernel#Int#+ (var2,var3) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var2 + var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__Concat__length_61d]))(self, var4); /* length= on <self:Concat>*/
}
{
var8 = ((long(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_l); /* bytelen on <var_l:String>*/
}
{
var9 = ((long(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_r); /* bytelen on <var_r:String>*/
}
{
{ /* Inline kernel#Int#+ (var8,var9) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var16 = var8 + var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
self->attrs[COLOR_core__ropes__Concat___bytelen].l = var10; /* _bytelen on <self:Concat> */
RET_LABEL:;
}
/* method ropes#Concat#is_empty for (self: Concat): Bool */
short int core__ropes___core__ropes__Concat___core__abstract_text__Text__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__Concat___bytelen].l; /* _bytelen on <self:Concat> */
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
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
/* method ropes#Concat#output for (self: Concat) */
void core__ropes___core__ropes__Concat___core__kernel__Object__output(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 121);
fatal_exit(1);
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__output]))(var); /* output on <var:String>*/
}
var1 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 122);
fatal_exit(1);
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__output]))(var1); /* output on <var1:String>*/
}
RET_LABEL:;
}
/* method ropes#Concat#iterator for (self: Concat): Iterator[Char] */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__iterator(val* self) {
val* var /* : Iterator[Char] */;
val* var1 /* : RopeCharIterator */;
var1 = NEW_core__ropes__RopeCharIterator(&type_core__ropes__RopeCharIterator);
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeCharIterator__from]))(var1, self, 0l); /* from on <var1:RopeCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#* for (self: Concat, Int): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__String___42d(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var_x /* var x: String */;
long var_j /* var j: Int */;
long var_ /* var : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : String */;
long var6 /* : Int */;
var_i = p0;
var_x = self;
var_j = 1l;
var_ = var_i;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var3 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var4 = var_j < var_;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__abstract_text__String___43d]))(var_x, self); /* + on <var_x:String>*/
}
var_x = var5;
var6 = core___core__Int___Discrete__successor(var_j, 1l);
var_j = var6;
}
BREAK_label: (void)0;
var = var_x;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#[] for (self: Concat, Int): Char */
uint32_t core__ropes___core__ropes__Concat___core__abstract_text__Text___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var_flps /* var flps: Int */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
long var33 /* : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
val* var41 /* : FlatString */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
uint32_t var49 /* : Char */;
val* var50 /* : FlatString */;
val* var_lf /* var lf: FlatString */;
long var51 /* : Int */;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
uint32_t var59 /* : Char */;
var_i = p0;
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var5 = var_i >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
var6 = self->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <self:Concat> */
{
{ /* Inline kernel#Int#<= (var_i,var6) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var13 = var_i <= var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var1 = var7;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 134);
fatal_exit(1);
}
var14 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var_flps = var14;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var19 = -1l;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_flps,var17) on <var_flps:Int> */
var22 = var_flps == var17;
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_24 = var20;
if (var20){
{
{ /* Inline kernel#Int#>= (var_i,var_flps) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var27 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var31 = var_i >= var_flps;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var16 = var25;
} else {
var16 = var_24;
}
var_32 = var16;
if (var16){
var33 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_end].l; /* _flat_last_pos_end on <self:Concat> */
{
{ /* Inline kernel#Int#<= (var_i,var33) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var36 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var40 = var_i <= var33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var15 = var34;
} else {
var15 = var_32;
}
if (var15){
var41 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 137);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#- (var_i,var_flps) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var44 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var48 = var_i - var_flps;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
var49 = ((uint32_t(*)(val* self, long p0))(var41->class->vft[COLOR_core__flat__FlatText__fetch_char_at]))(var41, var42); /* fetch_char_at on <var41:FlatString>*/
}
var = var49;
goto RET_LABEL;
} else {
}
{
var50 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__Concat__get_leaf_at]))(self, var_i); /* get_leaf_at on <self:Concat>*/
}
var_lf = var50;
var51 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
{
{ /* Inline kernel#Int#- (var_i,var51) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var51:Int> isa OTHER */
/* <var51:Int> isa OTHER */
var54 = 1; /* easy <var51:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var58 = var_i - var51;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
{
var59 = ((uint32_t(*)(val* self, long p0))(var_lf->class->vft[COLOR_core__flat__FlatText__fetch_char_at]))(var_lf, var52); /* fetch_char_at on <var_lf:FlatString>*/
}
var = var59;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#get_leaf_at for (self: Concat, Int): FlatString */
val* core__ropes___core__ropes__Concat___get_leaf_at(val* self, long p0) {
val* var /* : FlatString */;
long var_pos /* var pos: Int */;
long var1 /* : Int */;
long var_flps /* var flps: Int */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
short int var_15 /* var : Bool */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
val* var24 /* : FlatString */;
val* var_s /* var s: String */;
long var_st /* var st: Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
val* var32 /* : String */;
val* var_lft /* var lft: String */;
long var33 /* : Int */;
long var_llen /* var llen: Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
val* var41 /* : String */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
long var63 /* : Int */;
long var64 /* : Int */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
long var70 /* : Int */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
var_pos = p0;
var1 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var_flps = var1;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var6 = -1l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_flps,var4) on <var_flps:Int> */
var9 = var_flps == var4;
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
{
{ /* Inline kernel#Int#>= (var_pos,var_flps) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var13 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var14 = var_pos >= var_flps;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var3 = var11;
} else {
var3 = var_;
}
var_15 = var3;
if (var3){
var16 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_end].l; /* _flat_last_pos_end on <self:Concat> */
{
{ /* Inline kernel#Int#<= (var_pos,var16) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var23 = var_pos <= var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var2 = var17;
} else {
var2 = var_15;
}
if (var2){
var24 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 146);
fatal_exit(1);
}
var = var24;
goto RET_LABEL;
} else {
}
var_s = self;
var_st = var_pos;
for(;;) {
/* <var_s:String> isa FlatString */
cltype26 = type_core__FlatString.color;
idtype27 = type_core__FlatString.id;
if(cltype26 >= var_s->type->table_size) {
var25 = 0;
} else {
var25 = var_s->type->type_table[cltype26] == idtype27;
}
if (var25){
goto BREAK_label;
} else {
}
/* <var_s:String> isa Concat */
cltype29 = type_core__ropes__Concat.color;
idtype30 = type_core__ropes__Concat.id;
if(cltype29 >= var_s->type->table_size) {
var28 = 0;
} else {
var28 = var_s->type->type_table[cltype29] == idtype30;
}
if (unlikely(!var28)) {
var_class_name31 = var_s == NULL ? "null" : var_s->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Concat", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 152);
fatal_exit(1);
}
var_s = var_s;
var32 = var_s->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_s:String(Concat)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 153);
fatal_exit(1);
}
var_lft = var32;
{
var33 = ((long(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__length]))(var_lft); /* length on <var_lft:String>*/
}
var_llen = var33;
{
{ /* Inline kernel#Int#>= (var_pos,var_llen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var36 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var40 = var_pos >= var_llen;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
var41 = var_s->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_s:String(Concat)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 156);
fatal_exit(1);
}
var_s = var41;
{
{ /* Inline kernel#Int#- (var_pos,var_llen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var44 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var48 = var_pos - var_llen;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_pos = var42;
} else {
var_s = var_lft;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#- (var_st,var_pos) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var51 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var55 = var_st - var_pos;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l = var49; /* _flat_last_pos_start on <self:Concat> */
{
{ /* Inline kernel#Int#- (var_st,var_pos) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var58 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var62 = var_st - var_pos;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
var63 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:String(FlatString)>*/
}
{
{ /* Inline kernel#Int#+ (var56,var63) on <var56:Int> */
/* Covariant cast for argument 0 (i) <var63:Int> isa OTHER */
/* <var63:Int> isa OTHER */
var66 = 1; /* easy <var63:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var70 = var56 + var63;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var64,1l) on <var64:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var73 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var77 = var64 - 1l;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
self->attrs[COLOR_core__ropes__Concat___flat_last_pos_end].l = var71; /* _flat_last_pos_end on <self:Concat> */
self->attrs[COLOR_core__ropes__Concat___flat_cache].val = var_s; /* _flat_cache on <self:Concat> */
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#substring for (self: Concat, Int, Int): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__substring(val* self, long p0, long p1) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
long var22 /* : Int */;
long var_ln /* var ln: Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : String */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
long var_end_index /* var end_index: Int */;
long var69 /* : Int */;
long var_flps /* var flps: Int */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
long var72 /* : Int */;
long var74 /* : Int */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var_ /* var : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
short int var85 /* : Bool */;
short int var_86 /* var : Bool */;
long var87 /* : Int */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
short int var94 /* : Bool */;
val* var95 /* : FlatString */;
long var96 /* : Int */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
long var102 /* : Int */;
long var103 /* : Int */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
long var109 /* : Int */;
val* var110 /* : String */;
val* var111 /* : String */;
val* var_lft /* var lft: String */;
long var112 /* : Int */;
long var_llen /* var llen: Int */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
int cltype116;
int idtype117;
const char* var_class_name118;
short int var119 /* : Bool */;
long var120 /* : Int */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
const char* var_class_name125;
long var126 /* : Int */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name132;
short int var133 /* : Bool */;
val* var134 /* : Text */;
long var135 /* : Int */;
short int var137 /* : Bool */;
int cltype138;
int idtype139;
const char* var_class_name140;
long var141 /* : Int */;
long var_lsublen /* var lsublen: Int */;
val* var142 /* : Text */;
val* var143 /* : String */;
long var144 /* : Int */;
short int var146 /* : Bool */;
int cltype147;
int idtype148;
const char* var_class_name149;
long var150 /* : Int */;
val* var151 /* : Text */;
val* var152 /* : String */;
val* var153 /* : String */;
long var154 /* : Int */;
short int var156 /* : Bool */;
int cltype157;
int idtype158;
const char* var_class_name159;
long var160 /* : Int */;
val* var161 /* : Text */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var4 = var_from < 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var7 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var11 = var_count + var_from;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_count = var5;
{
{ /* Inline kernel#Int#< (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var18 = var_count < 0l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "";
var21 = core__flat___NativeString___to_s_full(var20, 0l, 0l);
var19 = var21;
varonce = var19;
}
var = var19;
goto RET_LABEL;
} else {
}
var_from = 0l;
} else {
}
{
var22 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Concat>*/
}
var_ln = var22;
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var25 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var29 = var_count + var_from;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var23,var_ln) on <var23:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var32 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var36 = var23 > var_ln;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
{ /* Inline kernel#Int#- (var_ln,var_from) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var39 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var43 = var_ln - var_from;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_count = var37;
} else {
}
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var46 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var50 = var_count <= 0l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "";
var54 = core__flat___NativeString___to_s_full(var53, 0l, 0l);
var52 = var54;
varonce51 = var52;
}
var = var52;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var57 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var61 = var_from + var_count;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var55,1l) on <var55:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var64 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var68 = var55 - 1l;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var_end_index = var62;
var69 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var_flps = var69;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var74 = -1l;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_flps,var72) on <var_flps:Int> */
var77 = var_flps == var72;
var78 = !var77;
var75 = var78;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_ = var75;
if (var75){
{
{ /* Inline kernel#Int#>= (var_from,var_flps) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var81 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var85 = var_from >= var_flps;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var71 = var79;
} else {
var71 = var_;
}
var_86 = var71;
if (var71){
var87 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_end].l; /* _flat_last_pos_end on <self:Concat> */
{
{ /* Inline kernel#Int#<= (var_end_index,var87) on <var_end_index:Int> */
/* Covariant cast for argument 0 (i) <var87:Int> isa OTHER */
/* <var87:Int> isa OTHER */
var90 = 1; /* easy <var87:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var94 = var_end_index <= var87;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var70 = var88;
} else {
var70 = var_86;
}
if (var70){
var95 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 182);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#- (var_from,var_flps) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var98 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var102 = var_from - var_flps;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_end_index,var_flps) on <var_end_index:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var105 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var109 = var_end_index - var_flps;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
{
var110 = ((val*(*)(val* self, long p0, long p1, long p2))(var95->class->vft[COLOR_core__flat__FlatString__substring_impl]))(var95, var96, var_count, var103); /* substring_impl on <var95:FlatString>*/
}
var = var110;
goto RET_LABEL;
} else {
}
var111 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 185);
fatal_exit(1);
}
var_lft = var111;
{
var112 = ((long(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__length]))(var_lft); /* length on <var_lft:String>*/
}
var_llen = var112;
{
{ /* Inline kernel#Int#< (var_from,var_llen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var115 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var115)) {
var_class_name118 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name118);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var119 = var_from < var_llen;
var113 = var119;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
if (var113){
{
{ /* Inline kernel#Int#+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var122 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var122)) {
var_class_name125 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name125);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var126 = var_from + var_count;
var120 = var126;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var120,var_llen) on <var120:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var129 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var129)) {
var_class_name132 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name132);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var133 = var120 < var_llen;
var127 = var133;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
if (var127){
{
var134 = ((val*(*)(val* self, long p0, long p1))(var_lft->class->vft[COLOR_core__abstract_text__Text__substring]))(var_lft, var_from, var_count); /* substring on <var_lft:String>*/
}
var = var134;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#- (var_llen,var_from) on <var_llen:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var137 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var137)) {
var_class_name140 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name140);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var141 = var_llen - var_from;
var135 = var141;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
var_lsublen = var135;
{
var142 = ((val*(*)(val* self, long p0))(var_lft->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_lft, var_from); /* substring_from on <var_lft:String>*/
}
var143 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 190);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#- (var_count,var_lsublen) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_lsublen:Int> isa OTHER */
/* <var_lsublen:Int> isa OTHER */
var146 = 1; /* easy <var_lsublen:Int> isa OTHER*/
if (unlikely(!var146)) {
var_class_name149 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name149);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var150 = var_count - var_lsublen;
var144 = var150;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
{
var151 = ((val*(*)(val* self, long p0, long p1))(var143->class->vft[COLOR_core__abstract_text__Text__substring]))(var143, 0l, var144); /* substring on <var143:String>*/
}
{
var152 = ((val*(*)(val* self, val* p0))(var142->class->vft[COLOR_core__abstract_text__String___43d]))(var142, var151); /* + on <var142:Text(String)>*/
}
var = var152;
goto RET_LABEL;
} else {
var153 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 192);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#- (var_from,var_llen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var156 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var156)) {
var_class_name159 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name159);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var160 = var_from - var_llen;
var154 = var160;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
{
var161 = ((val*(*)(val* self, long p0, long p1))(var153->class->vft[COLOR_core__abstract_text__Text__substring]))(var153, var154, var_count); /* substring on <var153:String>*/
}
var = var161;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#Concat#reversed for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__String__reversed(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
var1 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var2 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 196);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__String__reversed]))(var2); /* reversed on <var2:String>*/
}
var4 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 196);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__String__reversed]))(var4); /* reversed on <var4:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__left_61d]))(var1, var3); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__right_61d]))(var1, var5); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#insert_at for (self: Concat, String, Int): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__String__insert_at(val* self, val* p0, long p1) {
val* var /* : String */;
val* var_s /* var s: String */;
long var_pos /* var pos: Int */;
val* var1 /* : String */;
val* var_lft /* var lft: String */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : String */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
var_s = p0;
var_pos = p1;
var1 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 199);
fatal_exit(1);
}
var_lft = var1;
{
var2 = ((long(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__length]))(var_lft); /* length on <var_lft:String>*/
}
{
{ /* Inline kernel#Int#> (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var6 = var_pos > var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var7 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 201);
fatal_exit(1);
}
{
var8 = ((long(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__length]))(var_lft); /* length on <var_lft:String>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var8) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var_pos - var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
var16 = ((val*(*)(val* self, val* p0, long p1))(var7->class->vft[COLOR_core__abstract_text__String__insert_at]))(var7, var_s, var9); /* insert_at on <var7:String>*/
}
{
var17 = ((val*(*)(val* self, val* p0))(var_lft->class->vft[COLOR_core__abstract_text__String___43d]))(var_lft, var16); /* + on <var_lft:String>*/
}
var = var17;
goto RET_LABEL;
} else {
}
{
var18 = ((val*(*)(val* self, val* p0, long p1))(var_lft->class->vft[COLOR_core__abstract_text__String__insert_at]))(var_lft, var_s, var_pos); /* insert_at on <var_lft:String>*/
}
var19 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 203);
fatal_exit(1);
}
{
var20 = ((val*(*)(val* self, val* p0))(var18->class->vft[COLOR_core__abstract_text__String___43d]))(var18, var19); /* + on <var18:String>*/
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_upper for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__String__to_upper(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
var1 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var2 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 206);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__String__to_upper]))(var2); /* to_upper on <var2:String>*/
}
var4 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 206);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__String__to_upper]))(var4); /* to_upper on <var4:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__left_61d]))(var1, var3); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__right_61d]))(var1, var5); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#to_lower for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__String__to_lower(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
var1 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var2 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 208);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__String__to_lower]))(var2); /* to_lower on <var2:String>*/
}
var4 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 208);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__String__to_lower]))(var4); /* to_lower on <var4:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__left_61d]))(var1, var3); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__right_61d]))(var1, var5); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#+ for (self: Concat, Text): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__String___43d(val* self, val* p0) {
val* var /* : String */;
val* var_o /* var o: Text */;
val* var1 /* : String */;
val* var_s /* var s: String */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Concat */;
val* var5 /* : String */;
val* var_r /* var r: String */;
long var6 /* : Int */;
long var_rlen /* var rlen: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name;
long var12 /* : Int */;
val* var13 /* : Sys */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var22 /* : Concat */;
val* var23 /* : Concat */;
val* var24 /* : String */;
val* var25 /* : String */;
var_o = p0;
{
var1 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_o); /* to_s on <var_o:Text>*/
}
var_s = var1;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_s); /* bytelen on <var_s:String>*/
}
var_slen = var2;
/* <var_s:String> isa Concat */
cltype = type_core__ropes__Concat.color;
idtype = type_core__ropes__Concat.id;
if(cltype >= var_s->type->table_size) {
var3 = 0;
} else {
var3 = var_s->type->type_table[cltype] == idtype;
}
if (var3){
var4 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__ropes__Concat__left_61d]))(var4, self); /* left= on <var4:Concat>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__ropes__Concat__right_61d]))(var4, var_s); /* right= on <var4:Concat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:Concat>*/
}
var = var4;
goto RET_LABEL;
} else {
var5 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 216);
fatal_exit(1);
}
var_r = var5;
{
var6 = ((long(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_r); /* bytelen on <var_r:String>*/
}
var_rlen = var6;
{
{ /* Inline kernel#Int#+ (var_rlen,var_slen) on <var_rlen:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var9 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var_rlen + var_slen;
var7 = var12;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var13 = glob_sys;
{
var14 = ((long(*)(val* self))(var13->class->vft[COLOR_core__ropes__Sys__maxlen]))(var13); /* maxlen on <var13:Sys>*/
}
{
{ /* Inline kernel#Int#> (var7,var14) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var21 = var7 > var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var22 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__ropes__Concat__left_61d]))(var22, self); /* left= on <var22:Concat>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__ropes__Concat__right_61d]))(var22, var_s); /* right= on <var22:Concat>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:Concat>*/
}
var = var22;
goto RET_LABEL;
} else {
}
var23 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var24 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 219);
fatal_exit(1);
}
{
var25 = ((val*(*)(val* self, val* p0))(var_r->class->vft[COLOR_core__abstract_text__String___43d]))(var_r, var_s); /* + on <var_r:String>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__ropes__Concat__left_61d]))(var23, var24); /* left= on <var23:Concat>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__ropes__Concat__right_61d]))(var23, var25); /* right= on <var23:Concat>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:Concat>*/
}
var = var23;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#Concat#copy_to_native for (self: Concat, NativeString, Int, Int, Int) */
void core__ropes___core__ropes__Concat___core__abstract_text__Text__copy_to_native(val* self, char* p0, long p1, long p2, long p3) {
char* var_dest /* var dest: NativeString */;
long var_n /* var n: Int */;
long var_src_offset /* var src_offset: Int */;
long var_dest_offset /* var dest_offset: Int */;
val* var /* : RopeSubstrings */;
val* var_subs /* var subs: RopeSubstrings */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_st /* var st: Int */;
long var_off /* var off: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_it /* var it: FlatString */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
long var_cplen /* var cplen: Int */;
char* var30 /* : NativeString */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
char* var46 /* : NativeString */;
var_dest = p0;
var_n = p1;
var_src_offset = p2;
var_dest_offset = p3;
var = NEW_core__ropes__RopeSubstrings(&type_core__ropes__RopeSubstrings);
{
((void(*)(val* self, val* p0, long p1))(var->class->vft[COLOR_core__ropes__RopeSubstrings__from]))(var, self, var_src_offset); /* from on <var:RopeSubstrings>*/
}
var_subs = var;
{
var1 = ((long(*)(val* self))(var_subs->class->vft[COLOR_core__ropes__RopeSubstrings__pos]))(var_subs); /* pos on <var_subs:RopeSubstrings>*/
}
{
{ /* Inline kernel#Int#- (var_src_offset,var1) on <var_src_offset:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = var_src_offset - var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_st = var2;
var_off = var_dest_offset;
for(;;) {
{
{ /* Inline kernel#Int#> (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var12 = var_n > 0l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var13 = ((val*(*)(val* self))(var_subs->class->vft[COLOR_core__abstract_collection__Iterator__item]))(var_subs); /* item on <var_subs:RopeSubstrings>*/
}
var_it = var13;
{
var14 = ((long(*)(val* self))(var_it->class->vft[COLOR_core__abstract_text__Text__length]))(var_it); /* length on <var_it:FlatString>*/
}
{
{ /* Inline kernel#Int#> (var_n,var14) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var21 = var_n > var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var22 = ((long(*)(val* self))(var_it->class->vft[COLOR_core__abstract_text__Text__length]))(var_it); /* length on <var_it:FlatString>*/
}
{
{ /* Inline kernel#Int#- (var22,var_st) on <var22:Int> */
/* Covariant cast for argument 0 (i) <var_st:Int> isa OTHER */
/* <var_st:Int> isa OTHER */
var25 = 1; /* easy <var_st:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var29 = var22 - var_st;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_cplen = var23;
var30 = var_it->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_it:FlatString> */
{
{ /* Inline native#NativeString#copy_to (var30,var_dest,var_cplen,var_st,var_off) on <var30:NativeString> */
memmove(var_dest+var_off,var30+var_st,var_cplen);
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_cplen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_cplen:Int> isa OTHER */
/* <var_cplen:Int> isa OTHER */
var34 = 1; /* easy <var_cplen:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var38 = var_off + var_cplen;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_off = var32;
{
{ /* Inline kernel#Int#- (var_n,var_cplen) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_cplen:Int> isa OTHER */
/* <var_cplen:Int> isa OTHER */
var41 = 1; /* easy <var_cplen:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var45 = var_n - var_cplen;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_n = var39;
} else {
var46 = var_it->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_it:FlatString> */
{
{ /* Inline native#NativeString#copy_to (var46,var_dest,var_n,var_st,var_off) on <var46:NativeString> */
memmove(var_dest+var_off,var46+var_st,var_n);
RET_LABEL47:(void)0;
}
}
var_n = 0l;
}
{
((void(*)(val* self))(var_subs->class->vft[COLOR_core__abstract_collection__Iterator__next]))(var_subs); /* next on <var_subs:RopeSubstrings>*/
}
var_st = 0l;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#Concat#balance for (self: Concat): String */
val* core__ropes___core__ropes__Concat___balance(val* self) {
val* var /* : String */;
val* var1 /* : Array[String] */;
val* var_children /* var children: Array[String] */;
val* var2 /* : RopeCharIteratorPiece */;
val* var_iter /* var iter: nullable RopeCharIteratorPiece */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : String */;
val* var_rnod /* var rnod: String */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var7 /* : Bool */;
val* var8 /* : nullable RopeCharIteratorPiece */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : RopeCharIteratorPiece */;
val* var13 /* : String */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : RopeCharIteratorPiece */;
val* var17 /* : String */;
val* var18 /* : nullable RopeCharIteratorPiece */;
long var19 /* : Int */;
val* var20 /* : String */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_children = var1;
var2 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var2, self); /* node= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var2, 0); /* ldone= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var2, 0); /* rdone= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var2, ((val*)NULL)); /* prev= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:RopeCharIteratorPiece>*/
}
var_iter = var2;
for(;;) {
if (var_iter == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_iter->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_iter, ((val*)NULL)); /* == on <var_iter:nullable RopeCharIteratorPiece>*/
var3 = var4;
}
if (var3){
goto BREAK_label;
} else {
}
{
var5 = ((val*(*)(val* self))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node]))(var_iter); /* node on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var_rnod = var5;
/* <var_rnod:String> isa Concat */
cltype = type_core__ropes__Concat.color;
idtype = type_core__ropes__Concat.id;
if(cltype >= var_rnod->type->table_size) {
var6 = 0;
} else {
var6 = var_rnod->type->type_table[cltype] == idtype;
}
var7 = !var6;
if (var7){
{
((void(*)(val* self, val* p0))(var_children->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_children, var_rnod); /* push on <var_children:Array[String]>*/
}
{
var8 = ((val*(*)(val* self))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev]))(var_iter); /* prev on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var_iter = var8;
goto BREAK_label9;
} else {
}
{
var10 = ((short int(*)(val* self))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone]))(var_iter); /* ldone on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var11 = !var10;
if (var11){
{
((void(*)(val* self, short int p0))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var_iter, 1); /* ldone= on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var12 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var13 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 258);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var12, var13); /* node= on <var12:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var12->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var12, 0); /* ldone= on <var12:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var12->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var12, 0); /* rdone= on <var12:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var12, var_iter); /* prev= on <var12:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var12->class->vft[COLOR_core__kernel__Object__init]))(var12); /* init on <var12:RopeCharIteratorPiece>*/
}
var_iter = var12;
} else {
{
var14 = ((short int(*)(val* self))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone]))(var_iter); /* rdone on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var15 = !var14;
if (var15){
{
((void(*)(val* self, short int p0))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var_iter, 1); /* rdone= on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var16 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var17 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 261);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var16, var17); /* node= on <var16:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var16->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var16, 0); /* ldone= on <var16:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var16->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var16, 0); /* rdone= on <var16:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var16, var_iter); /* prev= on <var16:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var16->class->vft[COLOR_core__kernel__Object__init]))(var16); /* init on <var16:RopeCharIteratorPiece>*/
}
var_iter = var16;
} else {
{
var18 = ((val*(*)(val* self))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev]))(var_iter); /* prev on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var_iter = var18;
}
}
BREAK_label9: (void)0;
}
BREAK_label: (void)0;
{
var19 = ((long(*)(val* self))(var_children->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_children); /* length on <var_children:Array[String]>*/
}
{
var20 = ((val*(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_core__ropes__Concat__recurse_balance]))(self, var_children, var19); /* recurse_balance on <self:Concat>*/
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Concat#recurse_balance for (self: Concat, Array[String], Int): String */
val* core__ropes___core__ropes__Concat___recurse_balance(val* self, val* p0, long p1) {
val* var /* : String */;
val* var_nodes /* var nodes: Array[String] */;
long var_len /* var len: Int */;
long var_finpos /* var finpos: Int */;
long var_stpos /* var stpos: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
val* var19 /* : Concat */;
val* var20 /* : nullable Object */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
val* var28 /* : nullable Object */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
val* var36 /* : nullable Object */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var55 /* : String */;
var_nodes = p0;
var_len = p1;
var_finpos = 0l;
var_stpos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_stpos,var_len) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var3 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var4 = var_stpos < var_len;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel#Int#- (var_len,var_stpos) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_stpos:Int> isa OTHER */
/* <var_stpos:Int> isa OTHER */
var7 = 1; /* easy <var_stpos:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var11 = var_len - var_stpos;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var18 = var5 > 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var19 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
var20 = ((val*(*)(val* self, long p0))(var_nodes->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_nodes, var_stpos); /* [] on <var_nodes:Array[String]>*/
}
{
{ /* Inline kernel#Int#+ (var_stpos,1l) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var27 = var_stpos + 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var28 = ((val*(*)(val* self, long p0))(var_nodes->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_nodes, var21); /* [] on <var_nodes:Array[String]>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_core__ropes__Concat__left_61d]))(var19, var20); /* left= on <var19:Concat>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_core__ropes__Concat__right_61d]))(var19, var28); /* right= on <var19:Concat>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_core__kernel__Object__init]))(var19); /* init on <var19:Concat>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_nodes->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_nodes, var_finpos, var19); /* []= on <var_nodes:Array[String]>*/
}
{
{ /* Inline kernel#Int#+ (var_stpos,2l) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var31 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var35 = var_stpos + 2l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_stpos = var29;
} else {
{
var36 = ((val*(*)(val* self, long p0))(var_nodes->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_nodes, var_stpos); /* [] on <var_nodes:Array[String]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_nodes->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_nodes, var_finpos, var36); /* []= on <var_nodes:Array[String]>*/
}
{
{ /* Inline kernel#Int#+ (var_stpos,1l) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var43 = var_stpos + 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_stpos = var37;
}
{
{ /* Inline kernel#Int#+ (var_finpos,1l) on <var_finpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var50 = var_finpos + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_finpos = var44;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_finpos,1l) on <var_finpos:Int> */
var53 = var_finpos == 1l;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
var54 = ((val*(*)(val* self, long p0))(var_nodes->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_nodes, 0l); /* [] on <var_nodes:Array[String]>*/
}
var = var54;
goto RET_LABEL;
} else {
}
{
var55 = ((val*(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_core__ropes__Concat__recurse_balance]))(self, var_nodes, var_finpos); /* recurse_balance on <self:Concat>*/
}
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#chars for (self: RopeBuffer): Sequence[Char] */
val* core___core__RopeBuffer___core__abstract_text__Text__chars(val* self) {
val* var /* : Sequence[Char] */;
short int var1 /* : Bool */;
val* var2 /* : Sequence[Char] */;
val* var3 /* : Sequence[Char] */;
val* var5 /* : RopeBufferChars */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___chars].val != NULL; /* _chars on <self:RopeBuffer> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__ropes__RopeBuffer___chars].val; /* _chars on <self:RopeBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 306);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__RopeBufferChars(&type_core__RopeBufferChars);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__abstract_text__StringCharView__target_61d]))(var5, self); /* target= on <var5:RopeBufferChars>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:RopeBufferChars>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__ropes__RopeBuffer___chars].val = var3; /* _chars on <self:RopeBuffer> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#chars= for (self: RopeBuffer, Sequence[Char]) */
void core___core__RopeBuffer___chars_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___chars].val = p0; /* _chars on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#bytes for (self: RopeBuffer): SequenceRead[Byte] */
val* core___core__RopeBuffer___core__abstract_text__Text__bytes(val* self) {
val* var /* : SequenceRead[Byte] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Byte] */;
val* var3 /* : SequenceRead[Byte] */;
val* var5 /* : RopeBufferBytes */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___bytes].val != NULL; /* _bytes on <self:RopeBuffer> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__ropes__RopeBuffer___bytes].val; /* _bytes on <self:RopeBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 308);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__RopeBufferBytes(&type_core__RopeBufferBytes);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__abstract_text__StringByteView__target_61d]))(var5, self); /* target= on <var5:RopeBufferBytes>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:RopeBufferBytes>*/
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__ropes__RopeBuffer___bytes].val = var3; /* _bytes on <self:RopeBuffer> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#bytes= for (self: RopeBuffer, SequenceRead[Byte]) */
void core___core__RopeBuffer___bytes_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___bytes].val = p0; /* _bytes on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#str for (self: RopeBuffer): String */
val* core___core__RopeBuffer___str(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___str].val; /* _str on <self:RopeBuffer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#str= for (self: RopeBuffer, String) */
void core___core__RopeBuffer___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___str].val = p0; /* _str on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#ns for (self: RopeBuffer): NativeString */
char* core___core__RopeBuffer___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___ns].str; /* _ns on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#ns= for (self: RopeBuffer, NativeString) */
void core___core__RopeBuffer___ns_61d(val* self, char* p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___ns].str = p0; /* _ns on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#rpos for (self: RopeBuffer): Int */
long core___core__RopeBuffer___rpos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l; /* _rpos on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#rpos= for (self: RopeBuffer, Int) */
void core___core__RopeBuffer___rpos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___rpos].l = p0; /* _rpos on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#nslen for (self: RopeBuffer): Int */
long core___core__RopeBuffer___nslen(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___nslen].l; /* _nslen on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#nslen= for (self: RopeBuffer, Int) */
void core___core__RopeBuffer___nslen_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___nslen].l = p0; /* _nslen on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#dumped for (self: RopeBuffer): Int */
long core___core__RopeBuffer___dumped(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l; /* _dumped on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#dumped= for (self: RopeBuffer, Int) */
void core___core__RopeBuffer___dumped_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___dumped].l = p0; /* _dumped on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#length for (self: RopeBuffer): Int */
long core___core__RopeBuffer___core__abstract_text__Text__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_st /* var st: Int */;
val* var2 /* : String */;
long var3 /* : Int */;
long var_len /* var len: Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
char* var9 /* : NativeString */;
unsigned char var10 /* : Byte */;
unsigned char var12 /* : Byte */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
var_st = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__length]))(var2); /* length on <var2:String>*/
}
var_len = var3;
for(;;) {
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#< (var_st,var4) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var8 = var_st < var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
{ /* Inline native#NativeString#[] (var9,var_st) on <var9:NativeString> */
var12 = (unsigned char)((int)var9[var_st]);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var13 = core__native___Byte___u8len(var10);
{
{ /* Inline kernel#Int#+ (var_st,var13) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var20 = var_st + var13;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_st = var14;
{
{ /* Inline kernel#Int#+ (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var27 = var_len + 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_len = var21;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_len;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#bytelen for (self: RopeBuffer): Int */
long core___core__RopeBuffer___core__abstract_text__Text__bytelen(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l; /* _bytelen on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#bytelen= for (self: RopeBuffer, Int) */
void core___core__RopeBuffer___bytelen_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l = p0; /* _bytelen on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#buf_size for (self: RopeBuffer): Int */
long core___core__RopeBuffer___buf_size(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l; /* _buf_size on <self:RopeBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#buf_size= for (self: RopeBuffer, Int) */
void core___core__RopeBuffer___buf_size_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBuffer___buf_size].l = p0; /* _buf_size on <self:RopeBuffer> */
RET_LABEL:;
}
/* method ropes#RopeBuffer#substrings for (self: RopeBuffer): Iterator[FlatText] */
val* core___core__RopeBuffer___core__abstract_text__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : RopeBufSubstringIterator */;
var1 = NEW_core__ropes__RopeBufSubstringIterator(&type_core__ropes__RopeBufSubstringIterator);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__RopeBufSubstringIterator__from]))(var1, self); /* from on <var1:RopeBufSubstringIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#init for (self: RopeBuffer) */
void core___core__RopeBuffer___core__kernel__Object__init(val* self) {
char* var /* : NativeString */;
val* var1 /* : Sys */;
long var2 /* : Int */;
char* var3 /* : NativeString */;
char* var5 /* : NativeString */;
val* var6 /* : Sys */;
long var7 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__RopeBuffer___core__kernel__Object__init]))(self); /* init on <self:RopeBuffer>*/
}
var = NULL/*special!*/;
var1 = glob_sys;
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__ropes__Sys__maxlen]))(var1); /* maxlen on <var1:Sys>*/
}
{
{ /* Inline native#NativeString#new (var,var2) on <var:NativeString> */
var5 = (char*)nit_alloc(var2);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns_61d]))(self, var3); /* ns= on <self:RopeBuffer>*/
}
var6 = glob_sys;
{
var7 = ((long(*)(val* self))(var6->class->vft[COLOR_core__ropes__Sys__maxlen]))(var6); /* maxlen on <var6:Sys>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__buf_size_61d]))(self, var7); /* buf_size= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped_61d]))(self, 0l); /* dumped= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#from for (self: RopeBuffer, String) */
void core___core__RopeBuffer___from(val* self, val* p0) {
val* var_str /* var str: String */;
char* var /* : NativeString */;
val* var1 /* : Sys */;
long var2 /* : Int */;
char* var3 /* : NativeString */;
char* var5 /* : NativeString */;
val* var6 /* : Sys */;
long var7 /* : Int */;
long var8 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeBuffer>*/
}
var_str = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__str_61d]))(self, var_str); /* str= on <self:RopeBuffer>*/
}
var = NULL/*special!*/;
var1 = glob_sys;
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__ropes__Sys__maxlen]))(var1); /* maxlen on <var1:Sys>*/
}
{
{ /* Inline native#NativeString#new (var,var2) on <var:NativeString> */
var5 = (char*)nit_alloc(var2);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns_61d]))(self, var3); /* ns= on <self:RopeBuffer>*/
}
var6 = glob_sys;
{
var7 = ((long(*)(val* self))(var6->class->vft[COLOR_core__ropes__Sys__maxlen]))(var6); /* maxlen on <var6:Sys>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__buf_size_61d]))(self, var7); /* buf_size= on <self:RopeBuffer>*/
}
{
var8 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:String>*/
}
self->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l = var8; /* _bytelen on <self:RopeBuffer> */
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped_61d]))(self, 0l); /* dumped= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#reset for (self: RopeBuffer) */
void core___core__RopeBuffer___reset(val* self) {
char* var /* : NativeString */;
long var1 /* : Int */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
long var5 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
long var_blen /* var blen: Int */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
var = NULL/*special!*/;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__buf_size]))(self); /* buf_size on <self:RopeBuffer>*/
}
{
{ /* Inline native#NativeString#new (var,var1) on <var:NativeString> */
var4 = (char*)nit_alloc(var1);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_nns = var2;
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var5,var6) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var10 = var5 - var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_blen = var7;
{
var11 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var12 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline native#NativeString#copy_to (var11,var_nns,var_blen,var12,0l) on <var11:NativeString> */
memmove(var_nns+0l,var11+var12,var_blen);
RET_LABEL13:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns_61d]))(self, var_nns); /* ns= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped_61d]))(self, 0l); /* dumped= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos_61d]))(self, var_blen); /* rpos= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__written_61d]))(self, 0); /* written= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#[] for (self: RopeBuffer, Int): Char */
uint32_t core___core__RopeBuffer___core__abstract_text__Text___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : String */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : String */;
uint32_t var8 /* : Char */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var_index /* var index: Int */;
char* var21 /* : NativeString */;
uint32_t var22 /* : Char */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:String>*/
}
{
{ /* Inline kernel#Int#< (var_i,var2) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var6 = var_i < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var8 = ((uint32_t(*)(val* self, long p0))(var7->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var7, var_i); /* [] on <var7:String>*/
}
var = var8;
goto RET_LABEL;
} else {
{
var9 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var11 = ((long(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__Text__length]))(var10); /* length on <var10:String>*/
}
{
{ /* Inline kernel#Int#- (var_i,var11) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var_i - var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var19 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
var20 = core___core__NativeString___char_to_byte_index_cached(var9, var12, 0l, var19);
var_index = var20;
{
var21 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
var22 = core___core__NativeString___char_at(var21, var_index);
var = var22;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#[]= for (self: RopeBuffer, Int, Char) */
void core___core__RopeBuffer___core__abstract_text__Buffer___91d_93d_61d(val* self, long p0, uint32_t p1) {
long var_i /* var i: Int */;
uint32_t var_c /* var c: Char */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : String */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
val* var_26 /* var : RopeBuffer */;
long var27 /* : Int */;
long var28 /* : Int */;
val* var29 /* : String */;
uint32_t var30 /* : Char */;
long var31 /* : Int */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
val* var46 /* : String */;
val* var_s /* var s: String */;
val* var47 /* : Text */;
val* var_l /* var l: String */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
val* var55 /* : Text */;
val* var_r /* var r: String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : String */;
long var60 /* : Int */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var_reali /* var reali: Int */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
long var70 /* : Int */;
long var_index /* var index: Int */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
long var78 /* : Int */;
long var79 /* : Int */;
long var_st_nxt /* var st_nxt: Int */;
char* var80 /* : NativeString */;
uint32_t var81 /* : Char */;
uint32_t var_loc_c /* var loc_c: Char */;
long var82 /* : Int */;
long var83 /* : Int */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
long var88 /* : Int */;
long var89 /* : Int */;
long var90 /* : Int */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
long var96 /* : Int */;
long var_delta /* var delta: Int */;
long var97 /* : Int */;
long var98 /* : Int */;
long var99 /* : Int */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
long var105 /* : Int */;
long var_remsp /* var remsp: Int */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
const char* var_class_name111;
short int var112 /* : Bool */;
val* var_113 /* var : RopeBuffer */;
long var114 /* : Int */;
long var115 /* : Int */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
const char* var_class_name120;
long var121 /* : Int */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
char* var124 /* : NativeString */;
char* var126 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
long var129 /* : Int */;
short int var131 /* : Bool */;
int cltype132;
int idtype133;
const char* var_class_name134;
long var135 /* : Int */;
long var136 /* : Int */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
long var140 /* : Int */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
const char* var_class_name145;
long var146 /* : Int */;
long var147 /* : Int */;
long var148 /* : Int */;
short int var150 /* : Bool */;
int cltype151;
int idtype152;
const char* var_class_name153;
long var154 /* : Int */;
long var155 /* : Int */;
long var156 /* : Int */;
short int var158 /* : Bool */;
int cltype159;
int idtype160;
const char* var_class_name161;
long var162 /* : Int */;
long var163 /* : Int */;
long var164 /* : Int */;
short int var166 /* : Bool */;
int cltype167;
int idtype168;
const char* var_class_name169;
long var170 /* : Int */;
long var171 /* : Int */;
short int var173 /* : Bool */;
int cltype174;
int idtype175;
const char* var_class_name176;
long var177 /* : Int */;
long var179 /* : Int */;
long var180 /* : Int */;
short int var182 /* : Bool */;
int cltype183;
int idtype184;
const char* var_class_name185;
long var186 /* : Int */;
char* var187 /* : NativeString */;
char* var188 /* : NativeString */;
long var189 /* : Int */;
long var190 /* : Int */;
short int var192 /* : Bool */;
int cltype193;
int idtype194;
const char* var_class_name195;
long var196 /* : Int */;
long var197 /* : Int */;
short int var199 /* : Bool */;
int cltype200;
int idtype201;
const char* var_class_name202;
long var203 /* : Int */;
val* var_205 /* var : RopeBuffer */;
long var206 /* : Int */;
long var207 /* : Int */;
short int var209 /* : Bool */;
int cltype210;
int idtype211;
const char* var_class_name212;
long var213 /* : Int */;
val* var_214 /* var : RopeBuffer */;
long var215 /* : Int */;
long var216 /* : Int */;
short int var218 /* : Bool */;
int cltype219;
int idtype220;
const char* var_class_name221;
long var222 /* : Int */;
char* var223 /* : NativeString */;
var_i = p0;
var_c = p1;
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var4 = var_i >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#<= (var_i,var5) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var12 = var_i <= var5;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var = var6;
} else {
var = var_;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 391);
fatal_exit(1);
}
{
var13 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#== (var_i,var13) on <var_i:Int> */
var16 = var_i == var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
((void(*)(val* self, uint32_t p0))(self->class->vft[COLOR_core__abstract_text__Buffer__add]))(self, var_c); /* add on <self:RopeBuffer>*/
}
} else {
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var18 = ((long(*)(val* self))(var17->class->vft[COLOR_core__abstract_text__Text__length]))(var17); /* length on <var17:String>*/
}
{
{ /* Inline kernel#Int#< (var_i,var18) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var25 = var_i < var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var_26 = self;
var27 = var_26->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l; /* _bytelen on <var_26:RopeBuffer> */
var28 = core__abstract_text___Char___u8char_len(var_c);
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var30 = ((uint32_t(*)(val* self, long p0))(var29->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var29, var_i); /* [] on <var29:String>*/
}
var31 = core__abstract_text___Char___u8char_len(var30);
{
{ /* Inline kernel#Int#- (var28,var31) on <var28:Int> */
/* Covariant cast for argument 0 (i) <var31:Int> isa OTHER */
/* <var31:Int> isa OTHER */
var34 = 1; /* easy <var31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var38 = var28 - var31;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var27,var32) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var32:Int> isa OTHER */
/* <var32:Int> isa OTHER */
var41 = 1; /* easy <var32:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var45 = var27 + var32;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_26->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l = var39; /* _bytelen on <var_26:RopeBuffer> */
{
var46 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
var_s = var46;
{
var47 = ((val*(*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_core__abstract_text__Text__substring]))(var_s, 0l, var_i); /* substring on <var_s:String>*/
}
var_l = var47;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var50 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var54 = var_i + 1l;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
var55 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, var48); /* substring_from on <var_s:String>*/
}
var_r = var55;
var56 = core__abstract_text___Char___Object__to_s(var_c);
{
var57 = ((val*(*)(val* self, val* p0))(var_l->class->vft[COLOR_core__abstract_text__String___43d]))(var_l, var56); /* + on <var_l:String>*/
}
{
var58 = ((val*(*)(val* self, val* p0))(var57->class->vft[COLOR_core__abstract_text__String___43d]))(var57, var_r); /* + on <var57:String>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__str_61d]))(self, var58); /* str= on <self:RopeBuffer>*/
}
} else {
{
var59 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var60 = ((long(*)(val* self))(var59->class->vft[COLOR_core__abstract_text__Text__length]))(var59); /* length on <var59:String>*/
}
{
{ /* Inline kernel#Int#- (var_i,var60) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var60:Int> isa OTHER */
/* <var60:Int> isa OTHER */
var63 = 1; /* easy <var60:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var67 = var_i - var60;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_reali = var61;
{
var68 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var69 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
var70 = core___core__NativeString___char_to_byte_index_cached(var68, var_reali, 0l, var69);
var_index = var70;
{
var71 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var_reali,1l) on <var_reali:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var74 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var78 = var_reali + 1l;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var79 = core___core__NativeString___char_to_byte_index_cached(var71, var72, var_reali, var_index);
var_st_nxt = var79;
{
var80 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
var81 = core___core__NativeString___char_at(var80, var_index);
var_loc_c = var81;
var82 = core__abstract_text___Char___u8char_len(var_loc_c);
var83 = core__abstract_text___Char___u8char_len(var_c);
{
{ /* Inline kernel#Int#!= (var82,var83) on <var82:Int> */
var86 = var82 == var83;
var87 = !var86;
var84 = var87;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
if (var84){
var88 = core__abstract_text___Char___u8char_len(var_c);
var89 = core__abstract_text___Char___u8char_len(var_loc_c);
{
{ /* Inline kernel#Int#- (var88,var89) on <var88:Int> */
/* Covariant cast for argument 0 (i) <var89:Int> isa OTHER */
/* <var89:Int> isa OTHER */
var92 = 1; /* easy <var89:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var96 = var88 - var89;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
var_delta = var90;
{
var97 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__buf_size]))(self); /* buf_size on <self:RopeBuffer>*/
}
{
var98 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var97,var98) on <var97:Int> */
/* Covariant cast for argument 0 (i) <var98:Int> isa OTHER */
/* <var98:Int> isa OTHER */
var101 = 1; /* easy <var98:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var105 = var97 - var98;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var_remsp = var99;
{
{ /* Inline kernel#Int#< (var_remsp,var_delta) on <var_remsp:Int> */
/* Covariant cast for argument 0 (i) <var_delta:Int> isa OTHER */
/* <var_delta:Int> isa OTHER */
var108 = 1; /* easy <var_delta:Int> isa OTHER*/
if (unlikely(!var108)) {
var_class_name111 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name111);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var112 = var_remsp < var_delta;
var106 = var112;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
if (var106){
var_113 = self;
{
var114 = ((long(*)(val* self))(var_113->class->vft[COLOR_core__ropes__RopeBuffer__buf_size]))(var_113); /* buf_size on <var_113:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#* (var114,2l) on <var114:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var117 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var117)) {
var_class_name120 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name120);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var121 = var114 * 2l;
var115 = var121;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_113->class->vft[COLOR_core__ropes__RopeBuffer__buf_size_61d]))(var_113, var115); /* buf_size= on <var_113:RopeBuffer>*/
}
var122 = NULL/*special!*/;
{
var123 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__buf_size]))(self); /* buf_size on <self:RopeBuffer>*/
}
{
{ /* Inline native#NativeString#new (var122,var123) on <var122:NativeString> */
var126 = (char*)nit_alloc(var123);
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
var_nns = var124;
{
var127 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var128 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var_index,var128) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var128:Int> isa OTHER */
/* <var128:Int> isa OTHER */
var131 = 1; /* easy <var128:Int> isa OTHER*/
if (unlikely(!var131)) {
var_class_name134 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name134);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var135 = var_index - var128;
var129 = var135;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
{
var136 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline native#NativeString#copy_to (var127,var_nns,var129,var136,0l) on <var127:NativeString> */
memmove(var_nns+0l,var127+var136,var129);
RET_LABEL137:(void)0;
}
}
{
var138 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var139 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var139,var_index) on <var139:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var142 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name145 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name145);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var146 = var139 - var_index;
var140 = var146;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
var147 = core__abstract_text___Char___u8char_len(var_loc_c);
{
{ /* Inline kernel#Int#- (var140,var147) on <var140:Int> */
/* Covariant cast for argument 0 (i) <var147:Int> isa OTHER */
/* <var147:Int> isa OTHER */
var150 = 1; /* easy <var147:Int> isa OTHER*/
if (unlikely(!var150)) {
var_class_name153 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name153);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var154 = var140 - var147;
var148 = var154;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
var155 = core__abstract_text___Char___u8char_len(var_loc_c);
{
{ /* Inline kernel#Int#+ (var_index,var155) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var155:Int> isa OTHER */
/* <var155:Int> isa OTHER */
var158 = 1; /* easy <var155:Int> isa OTHER*/
if (unlikely(!var158)) {
var_class_name161 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name161);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var162 = var_index + var155;
var156 = var162;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
}
{
var163 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var_index,var163) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var163:Int> isa OTHER */
/* <var163:Int> isa OTHER */
var166 = 1; /* easy <var163:Int> isa OTHER*/
if (unlikely(!var166)) {
var_class_name169 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name169);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var170 = var_index - var163;
var164 = var170;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var164,var_delta) on <var164:Int> */
/* Covariant cast for argument 0 (i) <var_delta:Int> isa OTHER */
/* <var_delta:Int> isa OTHER */
var173 = 1; /* easy <var_delta:Int> isa OTHER*/
if (unlikely(!var173)) {
var_class_name176 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name176);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var177 = var164 + var_delta;
var171 = var177;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var138,var_nns,var148,var156,var171) on <var138:NativeString> */
memmove(var_nns+var171,var138+var156,var148);
RET_LABEL178:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns_61d]))(self, var_nns); /* ns= on <self:RopeBuffer>*/
}
{
var179 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var_index,var179) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var179:Int> isa OTHER */
/* <var179:Int> isa OTHER */
var182 = 1; /* easy <var179:Int> isa OTHER*/
if (unlikely(!var182)) {
var_class_name185 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name185);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var186 = var_index - var179;
var180 = var186;
goto RET_LABEL181;
RET_LABEL181:(void)0;
}
}
var_index = var180;
} else {
{
var187 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var188 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var189 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var189,var_st_nxt) on <var189:Int> */
/* Covariant cast for argument 0 (i) <var_st_nxt:Int> isa OTHER */
/* <var_st_nxt:Int> isa OTHER */
var192 = 1; /* easy <var_st_nxt:Int> isa OTHER*/
if (unlikely(!var192)) {
var_class_name195 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name195);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var196 = var189 - var_st_nxt;
var190 = var196;
goto RET_LABEL191;
RET_LABEL191:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_st_nxt,var_delta) on <var_st_nxt:Int> */
/* Covariant cast for argument 0 (i) <var_delta:Int> isa OTHER */
/* <var_delta:Int> isa OTHER */
var199 = 1; /* easy <var_delta:Int> isa OTHER*/
if (unlikely(!var199)) {
var_class_name202 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name202);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var203 = var_st_nxt + var_delta;
var197 = var203;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var187,var188,var190,var_st_nxt,var197) on <var187:NativeString> */
memmove(var188+var197,var187+var_st_nxt,var190);
RET_LABEL204:(void)0;
}
}
}
var_205 = self;
var206 = var_205->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l; /* _bytelen on <var_205:RopeBuffer> */
{
{ /* Inline kernel#Int#+ (var206,var_delta) on <var206:Int> */
/* Covariant cast for argument 0 (i) <var_delta:Int> isa OTHER */
/* <var_delta:Int> isa OTHER */
var209 = 1; /* easy <var_delta:Int> isa OTHER*/
if (unlikely(!var209)) {
var_class_name212 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name212);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var213 = var206 + var_delta;
var207 = var213;
goto RET_LABEL208;
RET_LABEL208:(void)0;
}
}
var_205->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l = var207; /* _bytelen on <var_205:RopeBuffer> */
var_214 = self;
{
var215 = ((long(*)(val* self))(var_214->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(var_214); /* rpos on <var_214:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var215,var_delta) on <var215:Int> */
/* Covariant cast for argument 0 (i) <var_delta:Int> isa OTHER */
/* <var_delta:Int> isa OTHER */
var218 = 1; /* easy <var_delta:Int> isa OTHER*/
if (unlikely(!var218)) {
var_class_name221 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name221);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var222 = var215 + var_delta;
var216 = var222;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_214->class->vft[COLOR_core__ropes__RopeBuffer__rpos_61d]))(var_214, var216); /* rpos= on <var_214:RopeBuffer>*/
}
} else {
}
{
var223 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
core__flat___NativeString___set_char_at(var223, var_index, var_c); /* Direct call flat#NativeString#set_char_at on <var223:NativeString>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#empty for (self: RopeBuffer): Buffer */
val* core___core__RopeBuffer___core__abstract_text__Text__empty(val* self) {
val* var /* : Buffer */;
val* var1 /* : RopeBuffer */;
var1 = NEW_core__RopeBuffer(&type_core__RopeBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:RopeBuffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#clear for (self: RopeBuffer) */
void core___core__RopeBuffer___core__abstract_text__Buffer__clear(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
short int var3 /* : Bool */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
char* var6 /* : NativeString */;
char* var8 /* : NativeString */;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var2 = core__flat___NativeString___to_s_full(var1, 0l, 0l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__str_61d]))(self, var); /* str= on <self:RopeBuffer>*/
}
self->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l = 0l; /* _bytelen on <self:RopeBuffer> */
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos_61d]))(self, 0l); /* rpos= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped_61d]))(self, 0l); /* dumped= on <self:RopeBuffer>*/
}
{
var3 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__written]))(self); /* written on <self:RopeBuffer>*/
}
if (var3){
var4 = NULL/*special!*/;
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__buf_size]))(self); /* buf_size on <self:RopeBuffer>*/
}
{
{ /* Inline native#NativeString#new (var4,var5) on <var4:NativeString> */
var8 = (char*)nit_alloc(var5);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns_61d]))(self, var6); /* ns= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__written_61d]))(self, 0); /* written= on <self:RopeBuffer>*/
}
} else {
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#substring for (self: RopeBuffer, Int, Int): Buffer */
val* core___core__RopeBuffer___core__abstract_text__Text__substring(val* self, long p0, long p1) {
val* var /* : Buffer */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
val* var1 /* : String */;
long var2 /* : Int */;
long var_strlen /* var strlen: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : Text */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
long var_subpos /* var subpos: Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
val* var62 /* : RopeBuffer */;
val* var63 /* : String */;
val* var64 /* : Text */;
val* var65 /* : String */;
val* var66 /* : Text */;
val* var_l /* var l: String */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
long var_rem /* var rem: Int */;
char* var74 /* : NativeString */;
char* var75 /* : NativeString */;
char* var77 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var81 /* : RopeBuffer */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : String */;
char* var85 /* : NativeString */;
char* var86 /* : NativeString */;
char* var88 /* : NativeString */;
char* var_nns89 /* var nns: NativeString */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var93 /* : RopeBuffer */;
val* var94 /* : String */;
val* var95 /* : nullable Int */;
var_from = p0;
var_count = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:String>*/
}
var_strlen = var2;
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var6 = var_from < 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var9 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var_count + var_from;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_count = var7;
{
{ /* Inline kernel#Int#< (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var16 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var20 = var_count < 0l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var_count = 0l;
} else {
}
var_from = 0l;
} else {
}
{
var21 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#> (var_count,var21) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var28 = var_count > var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
var29 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var29,var_from) on <var29:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var32 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var36 = var29 - var_from;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_count = var30;
} else {
}
{
{ /* Inline kernel#Int#== (var_count,0l) on <var_count:Int> */
var39 = var_count == 0l;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var40 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__empty]))(self); /* empty on <self:RopeBuffer>*/
}
var = var40;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_from,var_strlen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_strlen:Int> isa OTHER */
/* <var_strlen:Int> isa OTHER */
var43 = 1; /* easy <var_strlen:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var47 = var_from < var_strlen;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline kernel#Int#- (var_strlen,var_from) on <var_strlen:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var50 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var54 = var_strlen - var_from;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_subpos = var48;
{
{ /* Inline kernel#Int#<= (var_count,var_subpos) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_subpos:Int> isa OTHER */
/* <var_subpos:Int> isa OTHER */
var57 = 1; /* easy <var_subpos:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var61 = var_count <= var_subpos;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
var62 = NEW_core__RopeBuffer(&type_core__RopeBuffer);
{
var63 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var64 = ((val*(*)(val* self, long p0, long p1))(var63->class->vft[COLOR_core__abstract_text__Text__substring]))(var63, var_from, var_count); /* substring on <var63:String>*/
}
{
((void(*)(val* self, val* p0))(var62->class->vft[COLOR_core__ropes__RopeBuffer__from]))(var62, var64); /* from on <var62:RopeBuffer>*/
}
var = var62;
goto RET_LABEL;
} else {
{
var65 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var66 = ((val*(*)(val* self, long p0))(var65->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var65, var_from); /* substring_from on <var65:String>*/
}
var_l = var66;
{
{ /* Inline kernel#Int#- (var_count,var_subpos) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_subpos:Int> isa OTHER */
/* <var_subpos:Int> isa OTHER */
var69 = 1; /* easy <var_subpos:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var73 = var_count - var_subpos;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_rem = var67;
var74 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var74,var_rem) on <var74:NativeString> */
var77 = (char*)nit_alloc(var_rem);
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_nns = var75;
{
var78 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var79 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline native#NativeString#copy_to (var78,var_nns,var_rem,var79,0l) on <var78:NativeString> */
memmove(var_nns+0l,var78+var79,var_rem);
RET_LABEL80:(void)0;
}
}
var81 = NEW_core__RopeBuffer(&type_core__RopeBuffer);
var83 = (val*)(var_rem<<2|1);
var82 = core__flat___NativeString___to_s_unsafe(var_nns, var83);
{
var84 = ((val*(*)(val* self, val* p0))(var_l->class->vft[COLOR_core__abstract_text__String___43d]))(var_l, var82); /* + on <var_l:String>*/
}
{
((void(*)(val* self, val* p0))(var81->class->vft[COLOR_core__ropes__RopeBuffer__from]))(var81, var84); /* from on <var81:RopeBuffer>*/
}
var = var81;
goto RET_LABEL;
}
} else {
var85 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var85,var_count) on <var85:NativeString> */
var88 = (char*)nit_alloc(var_count);
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var_nns89 = var86;
{
var90 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var91 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline native#NativeString#copy_to (var90,var_nns89,var_count,var91,0l) on <var90:NativeString> */
memmove(var_nns89+0l,var90+var91,var_count);
RET_LABEL92:(void)0;
}
}
var93 = NEW_core__RopeBuffer(&type_core__RopeBuffer);
var95 = (val*)(var_count<<2|1);
var94 = core__flat___NativeString___to_s_unsafe(var_nns89, var95);
{
((void(*)(val* self, val* p0))(var93->class->vft[COLOR_core__ropes__RopeBuffer__from]))(var93, var94); /* from on <var93:RopeBuffer>*/
}
var = var93;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#append for (self: RopeBuffer, Text) */
void core___core__RopeBuffer___core__abstract_text__Buffer__append(val* self, val* p0) {
val* var_s /* var s: Text */;
long var /* : Int */;
long var_slen /* var slen: Int */;
val* var1 /* : Sys */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var_ /* var : RopeBuffer */;
val* var7 /* : String */;
val* var8 /* : String */;
val* var9 /* : String */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
char* var13 /* : NativeString */;
char* var_oits /* var oits: NativeString */;
long var14 /* : Int */;
long var_from /* var from: Int */;
long var15 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var_remsp /* var remsp: Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var_34 /* var : RopeBuffer */;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var50 /* : Int */;
long var_brk /* var brk: Int */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var_54 /* var : RopeBuffer */;
long var55 /* : Int */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
long var70 /* : Int */;
long var72 /* : Int */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
long var78 /* : Int */;
val* var79 /* : Iterator[FlatText] */;
val* var_80 /* var : Iterator[FlatText] */;
val* var81 /* : Iterator[nullable Object] */;
val* var_82 /* var : Iterator[FlatText] */;
short int var83 /* : Bool */;
val* var84 /* : nullable Object */;
val* var_i /* var i: FlatText */;
var_s = p0;
{
var = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_s); /* bytelen on <var_s:Text>*/
}
var_slen = var;
var1 = glob_sys;
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__ropes__Sys__maxlen]))(var1); /* maxlen on <var1:Sys>*/
}
{
{ /* Inline kernel#Int#>= (var_slen,var2) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var6 = var_slen >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__persist_buffer]))(self); /* persist_buffer on <self:RopeBuffer>*/
}
var_ = self;
{
var7 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var_); /* str on <var_:RopeBuffer>*/
}
{
var8 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Text>*/
}
{
var9 = ((val*(*)(val* self, val* p0))(var7->class->vft[COLOR_core__abstract_text__String___43d]))(var7, var8); /* + on <var7:String>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__ropes__RopeBuffer__str_61d]))(var_, var9); /* str= on <var_:RopeBuffer>*/
}
goto RET_LABEL;
} else {
}
/* <var_s:Text> isa FlatText */
cltype11 = type_core__FlatText.color;
idtype12 = type_core__FlatText.id;
if(cltype11 >= var_s->type->table_size) {
var10 = 0;
} else {
var10 = var_s->type->type_table[cltype11] == idtype12;
}
if (var10){
var13 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:Text(FlatText)> */
var_oits = var13;
{
var14 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_s); /* first_byte on <var_s:Text(FlatText)>*/
}
var_from = var14;
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__buf_size]))(self); /* buf_size on <self:RopeBuffer>*/
}
{
var16 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var15,var16) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var16:Int> isa OTHER */
/* <var16:Int> isa OTHER */
var19 = 1; /* easy <var16:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = var15 - var16;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_remsp = var17;
{
{ /* Inline kernel#Int#<= (var_slen,var_remsp) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var26 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var30 = var_slen <= var_remsp;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
var31 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var32 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline native#NativeString#copy_to (var_oits,var31,var_slen,var_from,var32) on <var_oits:NativeString> */
memmove(var31+var32,var_oits+var_from,var_slen);
RET_LABEL33:(void)0;
}
}
var_34 = self;
{
var35 = ((long(*)(val* self))(var_34->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(var_34); /* rpos on <var_34:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var35,var_slen) on <var35:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var38 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var42 = var35 + var_slen;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_34->class->vft[COLOR_core__ropes__RopeBuffer__rpos_61d]))(var_34, var36); /* rpos= on <var_34:RopeBuffer>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_from,var_remsp) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var45 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var49 = var_from + var_remsp;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var50 = core___core__NativeString___find_beginning_of_char_at(var_oits, var43);
var_brk = var50;
{
var51 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var52 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline native#NativeString#copy_to (var_oits,var51,var_brk,var_from,var52) on <var_oits:NativeString> */
memmove(var51+var52,var_oits+var_from,var_brk);
RET_LABEL53:(void)0;
}
}
var_54 = self;
{
var55 = ((long(*)(val* self))(var_54->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(var_54); /* rpos on <var_54:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var55,var_brk) on <var55:Int> */
/* Covariant cast for argument 0 (i) <var_brk:Int> isa OTHER */
/* <var_brk:Int> isa OTHER */
var58 = 1; /* easy <var_brk:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var62 = var55 + var_brk;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_54->class->vft[COLOR_core__ropes__RopeBuffer__rpos_61d]))(var_54, var56); /* rpos= on <var_54:RopeBuffer>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dump_buffer]))(self); /* dump_buffer on <self:RopeBuffer>*/
}
{
var63 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var_slen,var_remsp) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var66 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var70 = var_slen - var_remsp;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var_oits,var63,var64,var_brk,0l) on <var_oits:NativeString> */
memmove(var63+0l,var_oits+var_brk,var64);
RET_LABEL71:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_slen,var_remsp) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var74 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var78 = var_slen - var_remsp;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos_61d]))(self, var72); /* rpos= on <self:RopeBuffer>*/
}
} else {
{
var79 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_s); /* substrings on <var_s:Text>*/
}
var_80 = var79;
{
var81 = ((val*(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_80); /* iterator on <var_80:Iterator[FlatText]>*/
}
var_82 = var81;
for(;;) {
{
var83 = ((short int(*)(val* self))((((long)var_82&3)?class_info[((long)var_82&3)]:var_82->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_82); /* is_ok on <var_82:Iterator[FlatText]>*/
}
if (var83){
} else {
goto BREAK_label;
}
{
var84 = ((val*(*)(val* self))((((long)var_82&3)?class_info[((long)var_82&3)]:var_82->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_82); /* item on <var_82:Iterator[FlatText]>*/
}
var_i = var84;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Buffer__append]))(self, var_i); /* append on <self:RopeBuffer>*/
}
{
((void(*)(val* self))((((long)var_82&3)?class_info[((long)var_82&3)]:var_82->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_82); /* next on <var_82:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_82&3)?class_info[((long)var_82&3)]:var_82->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_82); /* finish on <var_82:Iterator[FlatText]>*/
}
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#add for (self: RopeBuffer, Char) */
void core___core__RopeBuffer___core__abstract_text__Buffer__add(val* self, uint32_t p0) {
uint32_t var_c /* var c: Char */;
long var /* : Int */;
long var_rp /* var rp: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_remsp /* var remsp: Int */;
long var6 /* : Int */;
long var_cln /* var cln: Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
val* var_ /* var : RopeBuffer */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
var_c = p0;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
var_rp = var;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__buf_size]))(self); /* buf_size on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var1,var_rp) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var_rp:Int> isa OTHER */
/* <var_rp:Int> isa OTHER */
var4 = 1; /* easy <var_rp:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = var1 - var_rp;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_remsp = var2;
var6 = core__abstract_text___Char___u8char_len(var_c);
var_cln = var6;
{
{ /* Inline kernel#Int#> (var_cln,var_remsp) on <var_cln:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var9 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var13 = var_cln > var_remsp;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dump_buffer]))(self); /* dump_buffer on <self:RopeBuffer>*/
}
var_rp = 0l;
} else {
}
{
var14 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
core__flat___NativeString___set_char_at(var14, var_rp, var_c); /* Direct call flat#NativeString#set_char_at on <var14:NativeString>*/
{
{ /* Inline kernel#Int#+ (var_rp,var_cln) on <var_rp:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var17 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var21 = var_rp + var_cln;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_rp = var15;
var_ = self;
var22 = var_->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l; /* _bytelen on <var_:RopeBuffer> */
{
{ /* Inline kernel#Int#+ (var22,var_cln) on <var22:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var25 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var29 = var22 + var_cln;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l = var23; /* _bytelen on <var_:RopeBuffer> */
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos_61d]))(self, var_rp); /* rpos= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#dump_buffer for (self: RopeBuffer) */
void core___core__RopeBuffer___dump_buffer(val* self) {
val* var /* : FlatString */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var8 /* : Int */;
val* var_nstr /* var nstr: FlatString */;
val* var_ /* var : RopeBuffer */;
val* var9 /* : String */;
val* var10 /* : String */;
long var11 /* : Int */;
long var_bs /* var bs: Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
char* var19 /* : NativeString */;
char* var20 /* : NativeString */;
char* var22 /* : NativeString */;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__written_61d]))(self, 0); /* written= on <self:RopeBuffer>*/
}
var = NEW_core__FlatString(&type_core__FlatString);
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var2,var3) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var2 - var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2))(var->class->vft[COLOR_core__flat__FlatString__with_infos]))(var, var1, var4, var8); /* with_infos on <var:FlatString>*/
}
var_nstr = var;
var_ = self;
{
var9 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var_); /* str on <var_:RopeBuffer>*/
}
{
var10 = ((val*(*)(val* self, val* p0))(var9->class->vft[COLOR_core__abstract_text__String___43d]))(var9, var_nstr); /* + on <var9:String>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__ropes__RopeBuffer__str_61d]))(var_, var10); /* str= on <var_:RopeBuffer>*/
}
{
var11 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__buf_size]))(self); /* buf_size on <self:RopeBuffer>*/
}
var_bs = var11;
{
{ /* Inline kernel#Int#* (var_bs,2l) on <var_bs:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var14 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var18 = var_bs * 2l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_bs = var12;
var19 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var19,var_bs) on <var19:NativeString> */
var22 = (char*)nit_alloc(var_bs);
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns_61d]))(self, var20); /* ns= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__buf_size_61d]))(self, var_bs); /* buf_size= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped_61d]))(self, 0l); /* dumped= on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos_61d]))(self, 0l); /* rpos= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#persist_buffer for (self: RopeBuffer) */
void core___core__RopeBuffer___persist_buffer(val* self) {
long var /* : Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : FlatString */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
long var13 /* : Int */;
val* var_nstr /* var nstr: FlatString */;
val* var_ /* var : RopeBuffer */;
val* var14 /* : String */;
val* var15 /* : String */;
long var16 /* : Int */;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#== (var,var1) on <var:Int> */
var4 = var == var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
goto RET_LABEL;
} else {
}
var5 = NEW_core__FlatString(&type_core__FlatString);
{
var6 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var7,var8) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var7 - var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
var13 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2))(var5->class->vft[COLOR_core__flat__FlatString__with_infos]))(var5, var6, var9, var13); /* with_infos on <var5:FlatString>*/
}
var_nstr = var5;
var_ = self;
{
var14 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var_); /* str on <var_:RopeBuffer>*/
}
{
var15 = ((val*(*)(val* self, val* p0))(var14->class->vft[COLOR_core__abstract_text__String___43d]))(var14, var_nstr); /* + on <var14:String>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__ropes__RopeBuffer__str_61d]))(var_, var15); /* str= on <var_:RopeBuffer>*/
}
{
var16 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped_61d]))(self, var16); /* dumped= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#output for (self: RopeBuffer) */
void core___core__RopeBuffer___core__kernel__Object__output(val* self) {
val* var /* : String */;
val* var1 /* : FlatString */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
long var9 /* : Int */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__output]))(var); /* output on <var:String>*/
}
var1 = NEW_core__FlatString(&type_core__FlatString);
{
var2 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var3,var4) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var3 - var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2))(var1->class->vft[COLOR_core__flat__FlatString__with_infos]))(var1, var2, var5, var9); /* with_infos on <var1:FlatString>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__output]))(var1); /* output on <var1:FlatString>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#enlarge for (self: RopeBuffer, Int) */
void core___core__RopeBuffer___core__abstract_text__Buffer__enlarge(val* self, long p0) {
long var_i /* var i: Int */;
var_i = p0;
RET_LABEL:;
}
/* method ropes#RopeBuffer#to_s for (self: RopeBuffer): String */
val* core___core__RopeBuffer___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__persist_buffer]))(self); /* persist_buffer on <self:RopeBuffer>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__written_61d]))(self, 1); /* written= on <self:RopeBuffer>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBuffer#reverse for (self: RopeBuffer) */
void core___core__RopeBuffer___core__abstract_text__Buffer__reverse(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_12 /* var : RopeBuffer */;
val* var13 /* : String */;
val* var14 /* : FlatString */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
long var25 /* : Int */;
val* var26 /* : String */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#> (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var5 = var1 > 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#!= (var6,var7) on <var6:Int> */
var10 = var6 == var7;
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
} else {
var = var_;
}
if (var){
var_12 = self;
{
var13 = ((val*(*)(val* self))(var_12->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var_12); /* str on <var_12:RopeBuffer>*/
}
var14 = NEW_core__FlatString(&type_core__FlatString);
{
var15 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(self); /* ns on <self:RopeBuffer>*/
}
{
var16 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var16,var17) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var24 = var16 - var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
var25 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(self); /* dumped on <self:RopeBuffer>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2))(var14->class->vft[COLOR_core__flat__FlatString__with_infos]))(var14, var15, var18, var25); /* with_infos on <var14:FlatString>*/
}
{
var26 = ((val*(*)(val* self, val* p0))(var13->class->vft[COLOR_core__abstract_text__String___43d]))(var13, var14); /* + on <var13:String>*/
}
{
((void(*)(val* self, val* p0))(var_12->class->vft[COLOR_core__ropes__RopeBuffer__str_61d]))(var_12, var26); /* str= on <var_12:RopeBuffer>*/
}
{
var27 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(self); /* rpos on <self:RopeBuffer>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__dumped_61d]))(self, var27); /* dumped= on <self:RopeBuffer>*/
}
} else {
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_core__abstract_text__String__reversed]))(var28); /* reversed on <var28:String>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__str_61d]))(self, var29); /* str= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#upper for (self: RopeBuffer) */
void core___core__RopeBuffer___core__abstract_text__Buffer__upper(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
val* var2 /* : String */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__written]))(self); /* written on <self:RopeBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__reset]))(self); /* reset on <self:RopeBuffer>*/
}
} else {
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__persist_buffer]))(self); /* persist_buffer on <self:RopeBuffer>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__String__to_upper]))(var1); /* to_upper on <var1:String>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__str_61d]))(self, var2); /* str= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#RopeBuffer#lower for (self: RopeBuffer) */
void core___core__RopeBuffer___core__abstract_text__Buffer__lower(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
val* var2 /* : String */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__written]))(self); /* written on <self:RopeBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__reset]))(self); /* reset on <self:RopeBuffer>*/
}
} else {
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__persist_buffer]))(self); /* persist_buffer on <self:RopeBuffer>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBuffer__str]))(self); /* str on <self:RopeBuffer>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__String__to_lower]))(var1); /* to_lower on <var1:String>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeBuffer__str_61d]))(self, var2); /* str= on <self:RopeBuffer>*/
}
RET_LABEL:;
}
/* method ropes#FlatString#insert_at for (self: FlatString, String, Int): String */
val* core__ropes___FlatString___core__abstract_text__String__insert_at(val* self, val* p0, long p1) {
val* var /* : String */;
val* var_s /* var s: String */;
long var_pos /* var pos: Int */;
val* var1 /* : Text */;
val* var_l /* var l: String */;
val* var2 /* : Text */;
val* var_r /* var r: String */;
val* var3 /* : String */;
val* var4 /* : String */;
var_s = p0;
var_pos = p1;
{
var1 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var_pos); /* substring on <self:FlatString>*/
}
var_l = var1;
{
var2 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__substring_from]))(self, var_pos); /* substring_from on <self:FlatString>*/
}
var_r = var2;
{
var3 = ((val*(*)(val* self, val* p0))(var_l->class->vft[COLOR_core__abstract_text__String___43d]))(var_l, var_s); /* + on <var_l:String>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_text__String___43d]))(var3, var_r); /* + on <var3:String>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#FlatString#+ for (self: FlatString, Text): String */
val* core__ropes___FlatString___core__abstract_text__String___43d(val* self, val* p0) {
val* var /* : String */;
val* var_o /* var o: Text */;
val* var1 /* : String */;
val* var_s /* var s: String */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
long var3 /* : Int */;
long var_mlen /* var mlen: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
long var_nlen /* var nlen: Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Sys */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
val* var26 /* : Concat */;
char* var27 /* : NativeString */;
char* var_mits /* var mits: NativeString */;
long var28 /* : Int */;
long var_sifrom /* var sifrom: Int */;
long var29 /* : Int */;
long var_mifrom /* var mifrom: Int */;
char* var30 /* : NativeString */;
char* var_sits /* var sits: NativeString */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
char* var39 /* : NativeString */;
char* var41 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
val* var44 /* : FlatString */;
long var45 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
val* var57 /* : String */;
val* var_sl /* var sl: String */;
long var58 /* : Int */;
long var_sllen /* var sllen: Int */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
val* var66 /* : Sys */;
long var67 /* : Int */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
short int var74 /* : Bool */;
val* var75 /* : Concat */;
val* var76 /* : Concat */;
val* var77 /* : String */;
val* var78 /* : String */;
var_o = p0;
{
var1 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_o); /* to_s on <var_o:Text>*/
}
var_s = var1;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_s); /* bytelen on <var_s:String>*/
}
var_slen = var2;
var3 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
var_mlen = var3;
{
{ /* Inline kernel#Int#== (var_slen,0l) on <var_slen:Int> */
var6 = var_slen == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = self;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_mlen,0l) on <var_mlen:Int> */
var9 = var_mlen == 0l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = var_s;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_slen,var_mlen) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var12 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var_slen + var_mlen;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_nlen = var10;
/* <var_s:String> isa FlatString */
cltype15 = type_core__FlatString.color;
idtype16 = type_core__FlatString.id;
if(cltype15 >= var_s->type->table_size) {
var14 = 0;
} else {
var14 = var_s->type->type_table[cltype15] == idtype16;
}
if (var14){
var17 = glob_sys;
{
var18 = ((long(*)(val* self))(var17->class->vft[COLOR_core__ropes__Sys__maxlen]))(var17); /* maxlen on <var17:Sys>*/
}
{
{ /* Inline kernel#Int#> (var_nlen,var18) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var25 = var_nlen > var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var26 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_core__ropes__Concat__left_61d]))(var26, self); /* left= on <var26:Concat>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_core__ropes__Concat__right_61d]))(var26, var_s); /* right= on <var26:Concat>*/
}
{
((void(*)(val* self))(var26->class->vft[COLOR_core__kernel__Object__init]))(var26); /* init on <var26:Concat>*/
}
var = var26;
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_mits = var27;
var28 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:String(FlatString)> */
var_sifrom = var28;
var29 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_mifrom = var29;
var30 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:String(FlatString)> */
var_sits = var30;
var31 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nlen,1l) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var38 = var_nlen + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var31,var32) on <var31:NativeString> */
var41 = (char*)nit_alloc(var32);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_ns = var39;
{
{ /* Inline native#NativeString#copy_to (var_mits,var_ns,var_mlen,var_mifrom,0l) on <var_mits:NativeString> */
memmove(var_ns+0l,var_mits+var_mifrom,var_mlen);
RET_LABEL42:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var_sits,var_ns,var_slen,var_sifrom,var_mlen) on <var_sits:NativeString> */
memmove(var_ns+var_mlen,var_sits+var_sifrom,var_slen);
RET_LABEL43:(void)0;
}
}
var44 = NEW_core__FlatString(&type_core__FlatString);
{
var45 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:FlatString>*/
}
{
var46 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:String(FlatString)>*/
}
{
{ /* Inline kernel#Int#+ (var45,var46) on <var45:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var53 = var45 + var46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var44->class->vft[COLOR_core__flat__FlatString__full]))(var44, var_ns, var_nlen, 0l, var47); /* full on <var44:FlatString>*/
}
var = var44;
goto RET_LABEL;
} else {
/* <var_s:String> isa Concat */
cltype55 = type_core__ropes__Concat.color;
idtype56 = type_core__ropes__Concat.id;
if(cltype55 >= var_s->type->table_size) {
var54 = 0;
} else {
var54 = var_s->type->type_table[cltype55] == idtype56;
}
if (var54){
var57 = var_s->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_s:String(Concat)> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 600);
fatal_exit(1);
}
var_sl = var57;
{
var58 = ((long(*)(val* self))(var_sl->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_sl); /* bytelen on <var_sl:String>*/
}
var_sllen = var58;
{
{ /* Inline kernel#Int#+ (var_sllen,var_mlen) on <var_sllen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var61 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var65 = var_sllen + var_mlen;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var66 = glob_sys;
{
var67 = ((long(*)(val* self))(var66->class->vft[COLOR_core__ropes__Sys__maxlen]))(var66); /* maxlen on <var66:Sys>*/
}
{
{ /* Inline kernel#Int#> (var59,var67) on <var59:Int> */
/* Covariant cast for argument 0 (i) <var67:Int> isa OTHER */
/* <var67:Int> isa OTHER */
var70 = 1; /* easy <var67:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var74 = var59 > var67;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
if (var68){
var75 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var75->class->vft[COLOR_core__ropes__Concat__left_61d]))(var75, self); /* left= on <var75:Concat>*/
}
{
((void(*)(val* self, val* p0))(var75->class->vft[COLOR_core__ropes__Concat__right_61d]))(var75, var_s); /* right= on <var75:Concat>*/
}
{
((void(*)(val* self))(var75->class->vft[COLOR_core__kernel__Object__init]))(var75); /* init on <var75:Concat>*/
}
var = var75;
goto RET_LABEL;
} else {
}
var76 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
var77 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__String___43d]))(self, var_sl); /* + on <self:FlatString>*/
}
var78 = var_s->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_s:String(Concat)> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 603);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var76->class->vft[COLOR_core__ropes__Concat__left_61d]))(var76, var77); /* left= on <var76:Concat>*/
}
{
((void(*)(val* self, val* p0))(var76->class->vft[COLOR_core__ropes__Concat__right_61d]))(var76, var78); /* right= on <var76:Concat>*/
}
{
((void(*)(val* self))(var76->class->vft[COLOR_core__kernel__Object__init]))(var76); /* init on <var76:Concat>*/
}
var = var76;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 605);
fatal_exit(1);
}
}
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIteratorPiece#node for (self: RopeCharIteratorPiece): String */
val* core__ropes___core__ropes__RopeCharIteratorPiece___node(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <self:RopeCharIteratorPiece> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 612);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIteratorPiece#node= for (self: RopeCharIteratorPiece, String) */
void core__ropes___core__ropes__RopeCharIteratorPiece___node_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val = p0; /* _node on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes#RopeCharIteratorPiece#ldone for (self: RopeCharIteratorPiece): Bool */
short int core__ropes___core__ropes__RopeCharIteratorPiece___ldone(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s; /* _ldone on <self:RopeCharIteratorPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIteratorPiece#ldone= for (self: RopeCharIteratorPiece, Bool) */
void core__ropes___core__ropes__RopeCharIteratorPiece___ldone_61d(val* self, short int p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = p0; /* _ldone on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes#RopeCharIteratorPiece#rdone for (self: RopeCharIteratorPiece): Bool */
short int core__ropes___core__ropes__RopeCharIteratorPiece___rdone(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s; /* _rdone on <self:RopeCharIteratorPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIteratorPiece#rdone= for (self: RopeCharIteratorPiece, Bool) */
void core__ropes___core__ropes__RopeCharIteratorPiece___rdone_61d(val* self, short int p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = p0; /* _rdone on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes#RopeCharIteratorPiece#prev for (self: RopeCharIteratorPiece): nullable RopeCharIteratorPiece */
val* core__ropes___core__ropes__RopeCharIteratorPiece___prev(val* self) {
val* var /* : nullable RopeCharIteratorPiece */;
val* var1 /* : nullable RopeCharIteratorPiece */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <self:RopeCharIteratorPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIteratorPiece#prev= for (self: RopeCharIteratorPiece, nullable RopeCharIteratorPiece) */
void core__ropes___core__ropes__RopeCharIteratorPiece___prev_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val = p0; /* _prev on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes#RopeCharIteratorPiece#init for (self: RopeCharIteratorPiece) */
void core__ropes___core__ropes__RopeCharIteratorPiece___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes___core__ropes__RopeCharIteratorPiece___core__kernel__Object__init]))(self); /* init on <self:RopeCharIteratorPiece>*/
}
RET_LABEL:;
}
/* method ropes#RopeByteReverseIterator#ns for (self: RopeByteReverseIterator): NativeString */
char* core__ropes___core__ropes__RopeByteReverseIterator___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___ns].str; /* _ns on <self:RopeByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#ns= for (self: RopeByteReverseIterator, NativeString) */
void core__ropes___core__ropes__RopeByteReverseIterator___ns_61d(val* self, char* p0) {
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___ns].str = p0; /* _ns on <self:RopeByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteReverseIterator#pns for (self: RopeByteReverseIterator): Int */
long core__ropes___core__ropes__RopeByteReverseIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pns].l; /* _pns on <self:RopeByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#pns= for (self: RopeByteReverseIterator, Int) */
void core__ropes___core__ropes__RopeByteReverseIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pns].l = p0; /* _pns on <self:RopeByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteReverseIterator#pos for (self: RopeByteReverseIterator): Int */
long core__ropes___core__ropes__RopeByteReverseIterator___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pos].l; /* _pos on <self:RopeByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#pos= for (self: RopeByteReverseIterator, Int) */
void core__ropes___core__ropes__RopeByteReverseIterator___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pos].l = p0; /* _pos on <self:RopeByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteReverseIterator#subs for (self: RopeByteReverseIterator): IndexedIterator[FlatString] */
val* core__ropes___core__ropes__RopeByteReverseIterator___subs(val* self) {
val* var /* : IndexedIterator[FlatString] */;
val* var1 /* : IndexedIterator[FlatString] */;
var1 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___subs].val; /* _subs on <self:RopeByteReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 632);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#subs= for (self: RopeByteReverseIterator, IndexedIterator[FlatString]) */
void core__ropes___core__ropes__RopeByteReverseIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___subs].val = p0; /* _subs on <self:RopeByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteReverseIterator#from for (self: RopeByteReverseIterator, Concat, Int) */
void core__ropes___core__ropes__RopeByteReverseIterator___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : ReverseRopeSubstrings */;
val* var1 /* : IndexedIterator[FlatString] */;
val* var2 /* : nullable Object */;
val* var_s /* var s: FlatString */;
char* var3 /* : NativeString */;
val* var4 /* : IndexedIterator[FlatString] */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeByteReverseIterator>*/
}
var_root = p0;
var_pos = p1;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pos_61d]))(self, var_pos); /* pos= on <self:RopeByteReverseIterator>*/
}
var = NEW_core__ropes__ReverseRopeSubstrings(&type_core__ropes__ReverseRopeSubstrings);
{
((void(*)(val* self, val* p0, long p1))(var->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__from]))(var, var_root, var_pos); /* from on <var:ReverseRopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs_61d]))(self, var); /* subs= on <self:RopeByteReverseIterator>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs]))(self); /* subs on <self:RopeByteReverseIterator>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var1); /* item on <var1:IndexedIterator[FlatString]>*/
}
var_s = var2;
var3 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__ns_61d]))(self, var3); /* ns= on <self:RopeByteReverseIterator>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs]))(self); /* subs on <self:RopeByteReverseIterator>*/
}
{
var5 = ((long(*)(val* self))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var4); /* index on <var4:IndexedIterator[FlatString]>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var5) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var9 = var_pos - var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pns_61d]))(self, var6); /* pns= on <self:RopeByteReverseIterator>*/
}
RET_LABEL:;
}
/* method ropes#RopeByteReverseIterator#index for (self: RopeByteReverseIterator): Int */
long core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pos]))(self); /* pos on <self:RopeByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#is_ok for (self: RopeByteReverseIterator): Bool */
short int core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pos]))(self); /* pos on <self:RopeByteReverseIterator>*/
}
{
{ /* Inline kernel#Int#>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var5 = var1 >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#item for (self: RopeByteReverseIterator): Byte */
unsigned char core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__ns]))(self); /* ns on <self:RopeByteReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pns]))(self); /* pns on <self:RopeByteReverseIterator>*/
}
{
{ /* Inline native#NativeString#[] (var1,var2) on <var1:NativeString> */
var5 = (unsigned char)((int)var1[var2]);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteReverseIterator#next for (self: RopeByteReverseIterator) */
void core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeByteReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var_5 /* var : RopeByteReverseIterator */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var22 /* : IndexedIterator[FlatString] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : IndexedIterator[FlatString] */;
val* var26 /* : IndexedIterator[FlatString] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : IndexedIterator[FlatString] */;
val* var30 /* : nullable Object */;
val* var_s /* var s: FlatString */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pns]))(var_); /* pns on <var_:RopeByteReverseIterator>*/
}
{
{ /* Inline kernel#Int#- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var4 = var - 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pns_61d]))(var_, var1); /* pns= on <var_:RopeByteReverseIterator>*/
}
var_5 = self;
{
var6 = ((long(*)(val* self))(var_5->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pos]))(var_5); /* pos on <var_5:RopeByteReverseIterator>*/
}
{
{ /* Inline kernel#Int#- (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var6 - 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_5->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pos_61d]))(var_5, var7); /* pos= on <var_5:RopeByteReverseIterator>*/
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pns]))(self); /* pns on <self:RopeByteReverseIterator>*/
}
{
{ /* Inline kernel#Int#>= (var14,0l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var21 = var14 >= 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
goto RET_LABEL;
} else {
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs]))(self); /* subs on <self:RopeByteReverseIterator>*/
}
{
var23 = ((short int(*)(val* self))((((long)var22&3)?class_info[((long)var22&3)]:var22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var22); /* is_ok on <var22:IndexedIterator[FlatString]>*/
}
var24 = !var23;
if (var24){
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs]))(self); /* subs on <self:RopeByteReverseIterator>*/
}
{
((void(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var25); /* next on <var25:IndexedIterator[FlatString]>*/
}
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs]))(self); /* subs on <self:RopeByteReverseIterator>*/
}
{
var27 = ((short int(*)(val* self))((((long)var26&3)?class_info[((long)var26&3)]:var26->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var26); /* is_ok on <var26:IndexedIterator[FlatString]>*/
}
var28 = !var27;
if (var28){
goto RET_LABEL;
} else {
}
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs]))(self); /* subs on <self:RopeByteReverseIterator>*/
}
{
var30 = ((val*(*)(val* self))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var29); /* item on <var29:IndexedIterator[FlatString]>*/
}
var_s = var30;
var31 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__ns_61d]))(self, var31); /* ns= on <self:RopeByteReverseIterator>*/
}
{
var32 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__flat__FlatText__last_byte]))(var_s); /* last_byte on <var_s:FlatString>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pns_61d]))(self, var32); /* pns= on <self:RopeByteReverseIterator>*/
}
RET_LABEL:;
}
/* method ropes#RopeByteIterator#pns for (self: RopeByteIterator): Int */
long core__ropes___core__ropes__RopeByteIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___pns].l; /* _pns on <self:RopeByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#pns= for (self: RopeByteIterator, Int) */
void core__ropes___core__ropes__RopeByteIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___pns].l = p0; /* _pns on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteIterator#ns for (self: RopeByteIterator): NativeString */
char* core__ropes___core__ropes__RopeByteIterator___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___ns].str; /* _ns on <self:RopeByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#ns= for (self: RopeByteIterator, NativeString) */
void core__ropes___core__ropes__RopeByteIterator___ns_61d(val* self, char* p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___ns].str = p0; /* _ns on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteIterator#subs for (self: RopeByteIterator): IndexedIterator[FlatString] */
val* core__ropes___core__ropes__RopeByteIterator___subs(val* self) {
val* var /* : IndexedIterator[FlatString] */;
val* var1 /* : IndexedIterator[FlatString] */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val; /* _subs on <self:RopeByteIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 671);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#subs= for (self: RopeByteIterator, IndexedIterator[FlatString]) */
void core__ropes___core__ropes__RopeByteIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val = p0; /* _subs on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteIterator#max for (self: RopeByteIterator): Int */
long core__ropes___core__ropes__RopeByteIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___max].l; /* _max on <self:RopeByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#max= for (self: RopeByteIterator, Int) */
void core__ropes___core__ropes__RopeByteIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___max].l = p0; /* _max on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteIterator#pos for (self: RopeByteIterator): Int */
long core__ropes___core__ropes__RopeByteIterator___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___pos].l; /* _pos on <self:RopeByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#pos= for (self: RopeByteIterator, Int) */
void core__ropes___core__ropes__RopeByteIterator___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___pos].l = p0; /* _pos on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeByteIterator#from for (self: RopeByteIterator, Concat, Int) */
void core__ropes___core__ropes__RopeByteIterator___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : RopeSubstrings */;
val* var1 /* : IndexedIterator[FlatString] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var7 /* : IndexedIterator[FlatString] */;
val* var8 /* : nullable Object */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeByteIterator>*/
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeSubstrings(&type_core__ropes__RopeSubstrings);
{
((void(*)(val* self, val* p0, long p1))(var->class->vft[COLOR_core__ropes__RopeSubstrings__from]))(var, var_root, var_pos); /* from on <var:RopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs_61d]))(self, var); /* subs= on <self:RopeByteIterator>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
var2 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var1); /* index on <var1:IndexedIterator[FlatString]>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var_pos - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pns_61d]))(self, var3); /* pns= on <self:RopeByteIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pos_61d]))(self, var_pos); /* pos= on <self:RopeByteIterator>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
var8 = ((val*(*)(val* self))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var7); /* item on <var7:IndexedIterator[FlatString]>*/
}
var9 = var8->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var8:nullable Object(FlatString)> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__ns_61d]))(self, var9); /* ns= on <self:RopeByteIterator>*/
}
{
var10 = ((long(*)(val* self))(var_root->class->vft[COLOR_core__abstract_text__Text__length]))(var_root); /* length on <var_root:Concat>*/
}
{
{ /* Inline kernel#Int#- (var10,1l) on <var10:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var17 = var10 - 1l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__max_61d]))(self, var11); /* max= on <self:RopeByteIterator>*/
}
RET_LABEL:;
}
/* method ropes#RopeByteIterator#item for (self: RopeByteIterator): Byte */
unsigned char core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__ns]))(self); /* ns on <self:RopeByteIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pns]))(self); /* pns on <self:RopeByteIterator>*/
}
{
{ /* Inline native#NativeString#[] (var1,var2) on <var1:NativeString> */
var5 = (unsigned char)((int)var1[var2]);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#is_ok for (self: RopeByteIterator): Bool */
short int core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pos]))(self); /* pos on <self:RopeByteIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__max]))(self); /* max on <self:RopeByteIterator>*/
}
{
{ /* Inline kernel#Int#<= (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var6 = var1 <= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#index for (self: RopeByteIterator): Int */
long core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pos]))(self); /* pos on <self:RopeByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeByteIterator#next for (self: RopeByteIterator) */
void core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeByteIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var_5 /* var : RopeByteIterator */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
val* var15 /* : IndexedIterator[FlatString] */;
val* var16 /* : nullable Object */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
val* var25 /* : IndexedIterator[FlatString] */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : IndexedIterator[FlatString] */;
val* var29 /* : IndexedIterator[FlatString] */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : IndexedIterator[FlatString] */;
val* var33 /* : nullable Object */;
char* var34 /* : NativeString */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__ropes__RopeByteIterator__pns]))(var_); /* pns on <var_:RopeByteIterator>*/
}
{
{ /* Inline kernel#Int#+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = var + 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__RopeByteIterator__pns_61d]))(var_, var1); /* pns= on <var_:RopeByteIterator>*/
}
var_5 = self;
{
var6 = ((long(*)(val* self))(var_5->class->vft[COLOR_core__ropes__RopeByteIterator__pos]))(var_5); /* pos on <var_5:RopeByteIterator>*/
}
{
{ /* Inline kernel#Int#+ (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var6 + 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_5->class->vft[COLOR_core__ropes__RopeByteIterator__pos_61d]))(var_5, var7); /* pos= on <var_5:RopeByteIterator>*/
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pns]))(self); /* pns on <self:RopeByteIterator>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
var16 = ((val*(*)(val* self))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var15); /* item on <var15:IndexedIterator[FlatString]>*/
}
var17 = var16->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var16:nullable Object(FlatString)> */
{
{ /* Inline kernel#Int#< (var14,var17) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var24 = var14 < var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
var26 = ((short int(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var25); /* is_ok on <var25:IndexedIterator[FlatString]>*/
}
var27 = !var26;
if (var27){
goto RET_LABEL;
} else {
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
((void(*)(val* self))((((long)var28&3)?class_info[((long)var28&3)]:var28->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var28); /* next on <var28:IndexedIterator[FlatString]>*/
}
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
var30 = ((short int(*)(val* self))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var29); /* is_ok on <var29:IndexedIterator[FlatString]>*/
}
var31 = !var30;
if (var31){
goto RET_LABEL;
} else {
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
var33 = ((val*(*)(val* self))((((long)var32&3)?class_info[((long)var32&3)]:var32->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var32); /* item on <var32:IndexedIterator[FlatString]>*/
}
var34 = var33->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var33:nullable Object(FlatString)> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__ns_61d]))(self, var34); /* ns= on <self:RopeByteIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pns_61d]))(self, 0l); /* pns= on <self:RopeByteIterator>*/
}
RET_LABEL:;
}
/* method ropes#RopeCharReverseIterator#ns for (self: RopeCharReverseIterator): String */
val* core__ropes___core__ropes__RopeCharReverseIterator___ns(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val; /* _ns on <self:RopeCharReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ns");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 709);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#ns= for (self: RopeCharReverseIterator, String) */
void core__ropes___core__ropes__RopeCharReverseIterator___ns_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val = p0; /* _ns on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharReverseIterator#pns for (self: RopeCharReverseIterator): Int */
long core__ropes___core__ropes__RopeCharReverseIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l; /* _pns on <self:RopeCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#pns= for (self: RopeCharReverseIterator, Int) */
void core__ropes___core__ropes__RopeCharReverseIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l = p0; /* _pns on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharReverseIterator#pos for (self: RopeCharReverseIterator): Int */
long core__ropes___core__ropes__RopeCharReverseIterator___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l; /* _pos on <self:RopeCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#pos= for (self: RopeCharReverseIterator, Int) */
void core__ropes___core__ropes__RopeCharReverseIterator___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l = p0; /* _pos on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharReverseIterator#subs for (self: RopeCharReverseIterator): IndexedIterator[String] */
val* core__ropes___core__ropes__RopeCharReverseIterator___subs(val* self) {
val* var /* : IndexedIterator[String] */;
val* var1 /* : IndexedIterator[String] */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 715);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#subs= for (self: RopeCharReverseIterator, IndexedIterator[String]) */
void core__ropes___core__ropes__RopeCharReverseIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val = p0; /* _subs on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharReverseIterator#from for (self: RopeCharReverseIterator, Concat, Int) */
void core__ropes___core__ropes__RopeCharReverseIterator___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : ReverseRopeSubstrings */;
val* var1 /* : IndexedIterator[String] */;
val* var2 /* : nullable Object */;
val* var3 /* : IndexedIterator[String] */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeCharReverseIterator>*/
}
var_root = p0;
var_pos = p1;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pos_61d]))(self, var_pos); /* pos= on <self:RopeCharReverseIterator>*/
}
var = NEW_core__ropes__ReverseRopeSubstrings(&type_core__ropes__ReverseRopeSubstrings);
{
((void(*)(val* self, val* p0, long p1))(var->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__from]))(var, var_root, var_pos); /* from on <var:ReverseRopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs_61d]))(self, var); /* subs= on <self:RopeCharReverseIterator>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs]))(self); /* subs on <self:RopeCharReverseIterator>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var1); /* item on <var1:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__ns_61d]))(self, var2); /* ns= on <self:RopeCharReverseIterator>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs]))(self); /* subs on <self:RopeCharReverseIterator>*/
}
{
var4 = ((long(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var3); /* index on <var3:IndexedIterator[String]>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var4) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var_pos - var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pns_61d]))(self, var5); /* pns= on <self:RopeCharReverseIterator>*/
}
RET_LABEL:;
}
/* method ropes#RopeCharReverseIterator#index for (self: RopeCharReverseIterator): Int */
long core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pos]))(self); /* pos on <self:RopeCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#is_ok for (self: RopeCharReverseIterator): Bool */
short int core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pos]))(self); /* pos on <self:RopeCharReverseIterator>*/
}
{
{ /* Inline kernel#Int#>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var5 = var1 >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#item for (self: RopeCharReverseIterator): Char */
uint32_t core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : String */;
long var2 /* : Int */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__ns]))(self); /* ns on <self:RopeCharReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pns]))(self); /* pns on <self:RopeCharReverseIterator>*/
}
{
var3 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var2); /* [] on <var1:String>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharReverseIterator#next for (self: RopeCharReverseIterator) */
void core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeCharReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var_5 /* var : RopeCharReverseIterator */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var22 /* : IndexedIterator[String] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : IndexedIterator[String] */;
val* var26 /* : IndexedIterator[String] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : IndexedIterator[String] */;
val* var30 /* : nullable Object */;
val* var31 /* : String */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pns]))(var_); /* pns on <var_:RopeCharReverseIterator>*/
}
{
{ /* Inline kernel#Int#- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var4 = var - 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pns_61d]))(var_, var1); /* pns= on <var_:RopeCharReverseIterator>*/
}
var_5 = self;
{
var6 = ((long(*)(val* self))(var_5->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pos]))(var_5); /* pos on <var_5:RopeCharReverseIterator>*/
}
{
{ /* Inline kernel#Int#- (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var6 - 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_5->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pos_61d]))(var_5, var7); /* pos= on <var_5:RopeCharReverseIterator>*/
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pns]))(self); /* pns on <self:RopeCharReverseIterator>*/
}
{
{ /* Inline kernel#Int#>= (var14,0l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var21 = var14 >= 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
goto RET_LABEL;
} else {
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs]))(self); /* subs on <self:RopeCharReverseIterator>*/
}
{
var23 = ((short int(*)(val* self))((((long)var22&3)?class_info[((long)var22&3)]:var22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var22); /* is_ok on <var22:IndexedIterator[String]>*/
}
var24 = !var23;
if (var24){
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs]))(self); /* subs on <self:RopeCharReverseIterator>*/
}
{
((void(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var25); /* next on <var25:IndexedIterator[String]>*/
}
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs]))(self); /* subs on <self:RopeCharReverseIterator>*/
}
{
var27 = ((short int(*)(val* self))((((long)var26&3)?class_info[((long)var26&3)]:var26->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var26); /* is_ok on <var26:IndexedIterator[String]>*/
}
var28 = !var27;
if (var28){
goto RET_LABEL;
} else {
}
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs]))(self); /* subs on <self:RopeCharReverseIterator>*/
}
{
var30 = ((val*(*)(val* self))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var29); /* item on <var29:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__ns_61d]))(self, var30); /* ns= on <self:RopeCharReverseIterator>*/
}
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__ns]))(self); /* ns on <self:RopeCharReverseIterator>*/
}
{
var32 = ((long(*)(val* self))(var31->class->vft[COLOR_core__abstract_text__Text__length]))(var31); /* length on <var31:String>*/
}
{
{ /* Inline kernel#Int#- (var32,1l) on <var32:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var39 = var32 - 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pns_61d]))(self, var33); /* pns= on <self:RopeCharReverseIterator>*/
}
RET_LABEL:;
}
/* method ropes#RopeCharIterator#pns for (self: RopeCharIterator): Int */
long core__ropes___core__ropes__RopeCharIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l; /* _pns on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#pns= for (self: RopeCharIterator, Int) */
void core__ropes___core__ropes__RopeCharIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l = p0; /* _pns on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#str for (self: RopeCharIterator): String */
val* core__ropes___core__ropes__RopeCharIterator___str(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___str].val; /* _str on <self:RopeCharIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 750);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#str= for (self: RopeCharIterator, String) */
void core__ropes___core__ropes__RopeCharIterator___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___str].val = p0; /* _str on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#subs for (self: RopeCharIterator): IndexedIterator[String] */
val* core__ropes___core__ropes__RopeCharIterator___subs(val* self) {
val* var /* : IndexedIterator[String] */;
val* var1 /* : IndexedIterator[String] */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 752);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#subs= for (self: RopeCharIterator, IndexedIterator[String]) */
void core__ropes___core__ropes__RopeCharIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val = p0; /* _subs on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#max for (self: RopeCharIterator): Int */
long core__ropes___core__ropes__RopeCharIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___max].l; /* _max on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#max= for (self: RopeCharIterator, Int) */
void core__ropes___core__ropes__RopeCharIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___max].l = p0; /* _max on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#pos for (self: RopeCharIterator): Int */
long core__ropes___core__ropes__RopeCharIterator___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l; /* _pos on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#pos= for (self: RopeCharIterator, Int) */
void core__ropes___core__ropes__RopeCharIterator___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l = p0; /* _pos on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeCharIterator#from for (self: RopeCharIterator, Concat, Int) */
void core__ropes___core__ropes__RopeCharIterator___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : RopeSubstrings */;
val* var1 /* : IndexedIterator[String] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var7 /* : IndexedIterator[String] */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeCharIterator>*/
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeSubstrings(&type_core__ropes__RopeSubstrings);
{
((void(*)(val* self, val* p0, long p1))(var->class->vft[COLOR_core__ropes__RopeSubstrings__from]))(var, var_root, var_pos); /* from on <var:RopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs_61d]))(self, var); /* subs= on <self:RopeCharIterator>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
var2 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var1); /* index on <var1:IndexedIterator[String]>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var_pos - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pns_61d]))(self, var3); /* pns= on <self:RopeCharIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pos_61d]))(self, var_pos); /* pos= on <self:RopeCharIterator>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
var8 = ((val*(*)(val* self))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var7); /* item on <var7:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__str_61d]))(self, var8); /* str= on <self:RopeCharIterator>*/
}
{
var9 = ((long(*)(val* self))(var_root->class->vft[COLOR_core__abstract_text__Text__length]))(var_root); /* length on <var_root:Concat>*/
}
{
{ /* Inline kernel#Int#- (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var16 = var9 - 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__max_61d]))(self, var10); /* max= on <self:RopeCharIterator>*/
}
RET_LABEL:;
}
/* method ropes#RopeCharIterator#item for (self: RopeCharIterator): Char */
uint32_t core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : String */;
long var2 /* : Int */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__str]))(self); /* str on <self:RopeCharIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pns]))(self); /* pns on <self:RopeCharIterator>*/
}
{
var3 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var2); /* [] on <var1:String>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#is_ok for (self: RopeCharIterator): Bool */
short int core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pos]))(self); /* pos on <self:RopeCharIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__max]))(self); /* max on <self:RopeCharIterator>*/
}
{
{ /* Inline kernel#Int#<= (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var6 = var1 <= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#index for (self: RopeCharIterator): Int */
long core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pos]))(self); /* pos on <self:RopeCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeCharIterator#next for (self: RopeCharIterator) */
void core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeCharIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var_5 /* var : RopeCharIterator */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
val* var15 /* : IndexedIterator[String] */;
val* var16 /* : nullable Object */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
val* var25 /* : IndexedIterator[String] */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : IndexedIterator[String] */;
val* var29 /* : IndexedIterator[String] */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : IndexedIterator[String] */;
val* var33 /* : nullable Object */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__ropes__RopeCharIterator__pns]))(var_); /* pns on <var_:RopeCharIterator>*/
}
{
{ /* Inline kernel#Int#+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = var + 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__RopeCharIterator__pns_61d]))(var_, var1); /* pns= on <var_:RopeCharIterator>*/
}
var_5 = self;
{
var6 = ((long(*)(val* self))(var_5->class->vft[COLOR_core__ropes__RopeCharIterator__pos]))(var_5); /* pos on <var_5:RopeCharIterator>*/
}
{
{ /* Inline kernel#Int#+ (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var6 + 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_5->class->vft[COLOR_core__ropes__RopeCharIterator__pos_61d]))(var_5, var7); /* pos= on <var_5:RopeCharIterator>*/
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pns]))(self); /* pns on <self:RopeCharIterator>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
var16 = ((val*(*)(val* self))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var15); /* item on <var15:IndexedIterator[String]>*/
}
{
var17 = ((long(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__Text__length]))(var16); /* length on <var16:nullable Object(String)>*/
}
{
{ /* Inline kernel#Int#< (var14,var17) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var24 = var14 < var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
var26 = ((short int(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var25); /* is_ok on <var25:IndexedIterator[String]>*/
}
var27 = !var26;
if (var27){
goto RET_LABEL;
} else {
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
((void(*)(val* self))((((long)var28&3)?class_info[((long)var28&3)]:var28->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var28); /* next on <var28:IndexedIterator[String]>*/
}
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
var30 = ((short int(*)(val* self))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var29); /* is_ok on <var29:IndexedIterator[String]>*/
}
var31 = !var30;
if (var31){
goto RET_LABEL;
} else {
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
var33 = ((val*(*)(val* self))((((long)var32&3)?class_info[((long)var32&3)]:var32->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var32); /* item on <var32:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__str_61d]))(self, var33); /* str= on <self:RopeCharIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pns_61d]))(self, 0l); /* pns= on <self:RopeCharIterator>*/
}
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#iter for (self: ReverseRopeSubstrings): RopeCharIteratorPiece */
val* core__ropes___core__ropes__ReverseRopeSubstrings___iter(val* self) {
val* var /* : RopeCharIteratorPiece */;
val* var1 /* : RopeCharIteratorPiece */;
var1 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val; /* _iter on <self:ReverseRopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 789);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#iter= for (self: ReverseRopeSubstrings, RopeCharIteratorPiece) */
void core__ropes___core__ropes__ReverseRopeSubstrings___iter_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val = p0; /* _iter on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#pos for (self: ReverseRopeSubstrings): Int */
long core__ropes___core__ropes__ReverseRopeSubstrings___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l; /* _pos on <self:ReverseRopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#pos= for (self: ReverseRopeSubstrings, Int) */
void core__ropes___core__ropes__ReverseRopeSubstrings___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l = p0; /* _pos on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#str for (self: ReverseRopeSubstrings): FlatString */
val* core__ropes___core__ropes__ReverseRopeSubstrings___str(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val; /* _str on <self:ReverseRopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 794);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#str= for (self: ReverseRopeSubstrings, FlatString) */
void core__ropes___core__ropes__ReverseRopeSubstrings___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val = p0; /* _str on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#from for (self: ReverseRopeSubstrings, Concat, Int) */
void core__ropes___core__ropes__ReverseRopeSubstrings___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : RopeCharIteratorPiece */;
val* var_r /* var r: RopeCharIteratorPiece */;
val* var_rnod /* var rnod: String */;
long var_off /* var off: Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : String */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : RopeCharIteratorPiece */;
val* var21 /* : String */;
val* var22 /* : RopeCharIteratorPiece */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:ReverseRopeSubstrings>*/
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var, var_root); /* node= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var, 0); /* ldone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var, 1); /* rdone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:RopeCharIteratorPiece>*/
}
var_r = var;
var_rnod = var_root;
var_off = var_pos;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype = type_core__ropes__Concat.color;
idtype = type_core__ropes__Concat.id;
if(cltype >= var_rnod->type->table_size) {
var1 = 0;
} else {
var1 = var_rnod->type->type_table[cltype] == idtype;
}
if (var1){
var2 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 803);
fatal_exit(1);
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__length]))(var2); /* length on <var2:String>*/
}
{
{ /* Inline kernel#Int#>= (var_off,var3) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var9 = var_off >= var3;
var4 = var9;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var10 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 804);
fatal_exit(1);
}
{
var11 = ((long(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__Text__length]))(var10); /* length on <var10:String>*/
}
{
{ /* Inline kernel#Int#- (var_off,var11) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var_off - var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_off = var12;
var19 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 805);
fatal_exit(1);
}
var_rnod = var19;
var20 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var20, var_rnod); /* node= on <var20:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var20->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var20, 0); /* ldone= on <var20:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var20->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var20, 1); /* rdone= on <var20:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var20, var_r); /* prev= on <var20:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_core__kernel__Object__init]))(var20); /* init on <var20:RopeCharIteratorPiece>*/
}
var_r = var20;
} else {
{
((void(*)(val* self, short int p0))(var_r->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var_r, 1); /* ldone= on <var_r:RopeCharIteratorPiece>*/
}
var21 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 809);
fatal_exit(1);
}
var_rnod = var21;
var22 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var22, var_rnod); /* node= on <var22:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var22->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var22, 0); /* ldone= on <var22:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var22->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var22, 1); /* rdone= on <var22:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var22, var_r); /* prev= on <var22:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:RopeCharIteratorPiece>*/
}
var_r = var22;
}
} else {
/* <var_rnod:String> isa FlatString */
cltype24 = type_core__FlatString.color;
idtype25 = type_core__FlatString.id;
if(cltype24 >= var_rnod->type->table_size) {
var23 = 0;
} else {
var23 = var_rnod->type->type_table[cltype24] == idtype25;
}
if (unlikely(!var23)) {
var_class_name26 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 813);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__str_61d]))(self, var_rnod); /* str= on <self:ReverseRopeSubstrings>*/
}
{
((void(*)(val* self, short int p0))(var_r->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var_r, 1); /* ldone= on <var_r:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__iter_61d]))(self, var_r); /* iter= on <self:ReverseRopeSubstrings>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var_off) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_off:Int> isa OTHER */
/* <var_off:Int> isa OTHER */
var29 = 1; /* easy <var_off:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var33 = var_pos - var_off;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos_61d]))(self, var27); /* pos= on <self:ReverseRopeSubstrings>*/
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#ReverseRopeSubstrings#item for (self: ReverseRopeSubstrings): FlatString */
val* core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__str]))(self); /* str on <self:ReverseRopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#index for (self: ReverseRopeSubstrings): Int */
long core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos]))(self); /* pos on <self:ReverseRopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#is_ok for (self: ReverseRopeSubstrings): Bool */
short int core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos]))(self); /* pos on <self:ReverseRopeSubstrings>*/
}
{
{ /* Inline kernel#Int#>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var5 = var1 >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#ReverseRopeSubstrings#next for (self: ReverseRopeSubstrings) */
void core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__next(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : RopeCharIteratorPiece */;
val* var6 /* : nullable RopeCharIteratorPiece */;
val* var_curr /* var curr: nullable RopeCharIteratorPiece */;
val* var7 /* : String */;
val* var_currit /* var currit: String */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : String */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var_ /* var : ReverseRopeSubstrings */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : RopeCharIteratorPiece */;
val* var32 /* : String */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : RopeCharIteratorPiece */;
val* var36 /* : String */;
val* var37 /* : nullable RopeCharIteratorPiece */;
long var39 /* : Int */;
long var41 /* : Int */;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos]))(self); /* pos on <self:ReverseRopeSubstrings>*/
}
{
{ /* Inline kernel#Int#< (var,0l) on <var:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var4 = var < 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__iter]))(self); /* iter on <self:ReverseRopeSubstrings>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev]))(var5); /* prev on <var5:RopeCharIteratorPiece>*/
}
var_curr = var6;
if (var_curr == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 831);
fatal_exit(1);
} else {
var7 = ((val*(*)(val* self))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node]))(var_curr); /* node on <var_curr:nullable RopeCharIteratorPiece>*/
}
var_currit = var7;
for(;;) {
if (var_curr == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_curr->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_curr, ((val*)NULL)); /* != on <var_curr:nullable RopeCharIteratorPiece>*/
var8 = var9;
}
if (var8){
{
var10 = ((val*(*)(val* self))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node]))(var_curr); /* node on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var_currit = var10;
/* <var_currit:String> isa Concat */
cltype12 = type_core__ropes__Concat.color;
idtype13 = type_core__ropes__Concat.id;
if(cltype12 >= var_currit->type->table_size) {
var11 = 0;
} else {
var11 = var_currit->type->type_table[cltype12] == idtype13;
}
var14 = !var11;
if (var14){
/* <var_currit:String> isa FlatString */
cltype16 = type_core__FlatString.color;
idtype17 = type_core__FlatString.id;
if(cltype16 >= var_currit->type->table_size) {
var15 = 0;
} else {
var15 = var_currit->type->type_table[cltype16] == idtype17;
}
if (unlikely(!var15)) {
var_class_name18 = var_currit == NULL ? "null" : var_currit->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 835);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__str_61d]))(self, var_currit); /* str= on <self:ReverseRopeSubstrings>*/
}
var_ = self;
{
var19 = ((long(*)(val* self))(var_->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos]))(var_); /* pos on <var_:ReverseRopeSubstrings>*/
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__str]))(self); /* str on <self:ReverseRopeSubstrings>*/
}
{
var21 = ((long(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__Text__length]))(var20); /* length on <var20:FlatString>*/
}
{
{ /* Inline kernel#Int#- (var19,var21) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var19 - var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos_61d]))(var_, var22); /* pos= on <var_:ReverseRopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__iter_61d]))(self, var_curr); /* iter= on <self:ReverseRopeSubstrings>*/
}
goto RET_LABEL;
} else {
}
{
var29 = ((short int(*)(val* self))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone]))(var_curr); /* rdone on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var30 = !var29;
if (var30){
{
((void(*)(val* self, short int p0))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var_curr, 1); /* rdone= on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var31 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var32 = var_currit->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_currit:String(Concat)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 842);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var31, var32); /* node= on <var31:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var31->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var31, 0); /* ldone= on <var31:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var31->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var31, 0); /* rdone= on <var31:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var31, var_curr); /* prev= on <var31:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var31->class->vft[COLOR_core__kernel__Object__init]))(var31); /* init on <var31:RopeCharIteratorPiece>*/
}
var_curr = var31;
goto BREAK_label;
} else {
}
{
var33 = ((short int(*)(val* self))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone]))(var_curr); /* ldone on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var34 = !var33;
if (var34){
{
((void(*)(val* self, short int p0))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var_curr, 1); /* ldone= on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var35 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var36 = var_currit->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_currit:String(Concat)> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 847);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var35, var36); /* node= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var35, 0); /* ldone= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var35, 0); /* rdone= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var35, var_curr); /* prev= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var35->class->vft[COLOR_core__kernel__Object__init]))(var35); /* init on <var35:RopeCharIteratorPiece>*/
}
var_curr = var35;
goto BREAK_label;
} else {
}
{
var37 = ((val*(*)(val* self))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev]))(var_curr); /* prev on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var_curr = var37;
} else {
goto BREAK_label38;
}
BREAK_label: (void)0;
}
BREAK_label38: (void)0;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var41 = -1l;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos_61d]))(self, var39); /* pos= on <self:ReverseRopeSubstrings>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#iter for (self: RopeBufSubstringIterator): Iterator[FlatText] */
val* core__ropes___core__ropes__RopeBufSubstringIterator___iter(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : Iterator[FlatText] */;
var1 = self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___iter].val; /* _iter on <self:RopeBufSubstringIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 859);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#iter= for (self: RopeBufSubstringIterator, Iterator[FlatText]) */
void core__ropes___core__ropes__RopeBufSubstringIterator___iter_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___iter].val = p0; /* _iter on <self:RopeBufSubstringIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#nsstr for (self: RopeBufSubstringIterator): FlatString */
val* core__ropes___core__ropes__RopeBufSubstringIterator___nsstr(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___nsstr].val; /* _nsstr on <self:RopeBufSubstringIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nsstr");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 861);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#nsstr= for (self: RopeBufSubstringIterator, FlatString) */
void core__ropes___core__ropes__RopeBufSubstringIterator___nsstr_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___nsstr].val = p0; /* _nsstr on <self:RopeBufSubstringIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#nsstr_done for (self: RopeBufSubstringIterator): Bool */
short int core__ropes___core__ropes__RopeBufSubstringIterator___nsstr_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___nsstr_done].s; /* _nsstr_done on <self:RopeBufSubstringIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#nsstr_done= for (self: RopeBufSubstringIterator, Bool) */
void core__ropes___core__ropes__RopeBufSubstringIterator___nsstr_done_61d(val* self, short int p0) {
self->attrs[COLOR_core__ropes__RopeBufSubstringIterator___nsstr_done].s = p0; /* _nsstr_done on <self:RopeBufSubstringIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#from for (self: RopeBufSubstringIterator, RopeBuffer) */
void core__ropes___core__ropes__RopeBufSubstringIterator___from(val* self, val* p0) {
val* var_str /* var str: RopeBuffer */;
val* var /* : String */;
val* var1 /* : Iterator[FlatText] */;
val* var2 /* : FlatString */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeBufSubstringIterator>*/
}
var_str = p0;
{
var = ((val*(*)(val* self))(var_str->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var_str); /* str on <var_str:RopeBuffer>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__Text__substrings]))(var); /* substrings on <var:String>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeBufSubstringIterator__iter_61d]))(self, var1); /* iter= on <self:RopeBufSubstringIterator>*/
}
var2 = NEW_core__FlatString(&type_core__FlatString);
{
var3 = ((char*(*)(val* self))(var_str->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(var_str); /* ns on <var_str:RopeBuffer>*/
}
{
var4 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(var_str); /* rpos on <var_str:RopeBuffer>*/
}
{
var5 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(var_str); /* dumped on <var_str:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#- (var4,var5) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var9 = var4 - var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
var10 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(var_str); /* dumped on <var_str:RopeBuffer>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2))(var2->class->vft[COLOR_core__flat__FlatString__with_infos]))(var2, var3, var6, var10); /* with_infos on <var2:FlatString>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeBufSubstringIterator__nsstr_61d]))(self, var2); /* nsstr= on <self:RopeBufSubstringIterator>*/
}
{
var11 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#== (var11,0l) on <var11:Int> */
var14 = var11 == 0l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__ropes__RopeBufSubstringIterator__nsstr_done_61d]))(self, 1); /* nsstr_done= on <self:RopeBufSubstringIterator>*/
}
} else {
}
RET_LABEL:;
}
/* method ropes#RopeBufSubstringIterator#is_ok for (self: RopeBufSubstringIterator): Bool */
short int core__ropes___core__ropes__RopeBufSubstringIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[FlatText] */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufSubstringIterator__iter]))(self); /* iter on <self:RopeBufSubstringIterator>*/
}
{
var3 = ((short int(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var2); /* is_ok on <var2:Iterator[FlatText]>*/
}
var_ = var3;
if (var3){
var1 = var_;
} else {
{
var4 = ((short int(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufSubstringIterator__nsstr_done]))(self); /* nsstr_done on <self:RopeBufSubstringIterator>*/
}
var5 = !var4;
var1 = var5;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#item for (self: RopeBufSubstringIterator): FlatText */
val* core__ropes___core__ropes__RopeBufSubstringIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatText */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[FlatText] */;
short int var3 /* : Bool */;
val* var4 /* : Iterator[FlatText] */;
val* var5 /* : nullable Object */;
val* var6 /* : FlatString */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:RopeBufSubstringIterator>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 875);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufSubstringIterator__iter]))(self); /* iter on <self:RopeBufSubstringIterator>*/
}
{
var3 = ((short int(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var2); /* is_ok on <var2:Iterator[FlatText]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufSubstringIterator__iter]))(self); /* iter on <self:RopeBufSubstringIterator>*/
}
{
var5 = ((val*(*)(val* self))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var4); /* item on <var4:Iterator[FlatText]>*/
}
var = var5;
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufSubstringIterator__nsstr]))(self); /* nsstr on <self:RopeBufSubstringIterator>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufSubstringIterator#next for (self: RopeBufSubstringIterator) */
void core__ropes___core__ropes__RopeBufSubstringIterator___core__abstract_collection__Iterator__next(val* self) {
val* var /* : Iterator[FlatText] */;
short int var1 /* : Bool */;
val* var2 /* : Iterator[FlatText] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufSubstringIterator__iter]))(self); /* iter on <self:RopeBufSubstringIterator>*/
}
{
var1 = ((short int(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var); /* is_ok on <var:Iterator[FlatText]>*/
}
if (var1){
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufSubstringIterator__iter]))(self); /* iter on <self:RopeBufSubstringIterator>*/
}
{
((void(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var2); /* next on <var2:Iterator[FlatText]>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__ropes__RopeBufSubstringIterator__nsstr_done_61d]))(self, 1); /* nsstr_done= on <self:RopeBufSubstringIterator>*/
}
RET_LABEL:;
}
/* method ropes#RopeSubstrings#iter for (self: RopeSubstrings): RopeCharIteratorPiece */
val* core__ropes___core__ropes__RopeSubstrings___iter(val* self) {
val* var /* : RopeCharIteratorPiece */;
val* var1 /* : RopeCharIteratorPiece */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val; /* _iter on <self:RopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 893);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#iter= for (self: RopeSubstrings, RopeCharIteratorPiece) */
void core__ropes___core__ropes__RopeSubstrings___iter_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val = p0; /* _iter on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#pos for (self: RopeSubstrings): Int */
long core__ropes___core__ropes__RopeSubstrings___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#pos= for (self: RopeSubstrings, Int) */
void core__ropes___core__ropes__RopeSubstrings___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l = p0; /* _pos on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#max for (self: RopeSubstrings): Int */
long core__ropes___core__ropes__RopeSubstrings___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___max].l; /* _max on <self:RopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#max= for (self: RopeSubstrings, Int) */
void core__ropes___core__ropes__RopeSubstrings___max_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___max].l = p0; /* _max on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#str for (self: RopeSubstrings): FlatString */
val* core__ropes___core__ropes__RopeSubstrings___str(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 900);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#str= for (self: RopeSubstrings, FlatString) */
void core__ropes___core__ropes__RopeSubstrings___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___str].val = p0; /* _str on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes#RopeSubstrings#from for (self: RopeSubstrings, Concat, Int) */
void core__ropes___core__ropes__RopeSubstrings___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : RopeCharIteratorPiece */;
val* var_r /* var r: RopeCharIteratorPiece */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
val* var_rnod /* var rnod: String */;
long var_off /* var off: Int */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : String */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
val* var18 /* : String */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : RopeCharIteratorPiece */;
val* var29 /* : String */;
val* var30 /* : RopeCharIteratorPiece */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeSubstrings>*/
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var, var_root); /* node= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var, 1); /* ldone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var, 0); /* rdone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:RopeCharIteratorPiece>*/
}
var_r = var;
{
var1 = ((long(*)(val* self))(var_root->class->vft[COLOR_core__abstract_text__Text__length]))(var_root); /* length on <var_root:Concat>*/
}
{
{ /* Inline kernel#Int#- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeSubstrings__max_61d]))(self, var2); /* max= on <self:RopeSubstrings>*/
}
var_rnod = var_root;
var_off = var_pos;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype7 = type_core__ropes__Concat.color;
idtype8 = type_core__ropes__Concat.id;
if(cltype7 >= var_rnod->type->table_size) {
var6 = 0;
} else {
var6 = var_rnod->type->type_table[cltype7] == idtype8;
}
if (var6){
var9 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 910);
fatal_exit(1);
}
{
var10 = ((long(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__Text__length]))(var9); /* length on <var9:String>*/
}
{
{ /* Inline kernel#Int#>= (var_off,var10) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var17 = var_off >= var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
((void(*)(val* self, short int p0))(var_r->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var_r, 1); /* rdone= on <var_r:RopeCharIteratorPiece>*/
}
var18 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 912);
fatal_exit(1);
}
{
var19 = ((long(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__Text__length]))(var18); /* length on <var18:String>*/
}
{
{ /* Inline kernel#Int#- (var_off,var19) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var26 = var_off - var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_off = var20;
var27 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 913);
fatal_exit(1);
}
var_rnod = var27;
var28 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var28, var_rnod); /* node= on <var28:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var28->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var28, 1); /* ldone= on <var28:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var28->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var28, 0); /* rdone= on <var28:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var28, var_r); /* prev= on <var28:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var28->class->vft[COLOR_core__kernel__Object__init]))(var28); /* init on <var28:RopeCharIteratorPiece>*/
}
var_r = var28;
} else {
var29 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 916);
fatal_exit(1);
}
var_rnod = var29;
var30 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var30, var_rnod); /* node= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var30, 1); /* ldone= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var30, 0); /* rdone= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var30, var_r); /* prev= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:RopeCharIteratorPiece>*/
}
var_r = var30;
}
} else {
/* <var_rnod:String> isa FlatString */
cltype32 = type_core__FlatString.color;
idtype33 = type_core__FlatString.id;
if(cltype32 >= var_rnod->type->table_size) {
var31 = 0;
} else {
var31 = var_rnod->type->type_table[cltype32] == idtype33;
}
if (unlikely(!var31)) {
var_class_name34 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 920);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeSubstrings__str_61d]))(self, var_rnod); /* str= on <self:RopeSubstrings>*/
}
{
((void(*)(val* self, short int p0))(var_r->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var_r, 1); /* rdone= on <var_r:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeSubstrings__iter_61d]))(self, var_r); /* iter= on <self:RopeSubstrings>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var_off) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_off:Int> isa OTHER */
/* <var_off:Int> isa OTHER */
var37 = 1; /* easy <var_off:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var41 = var_pos - var_off;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeSubstrings__pos_61d]))(self, var35); /* pos= on <self:RopeSubstrings>*/
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#RopeSubstrings#item for (self: RopeSubstrings): FlatString */
val* core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__str]))(self); /* str on <self:RopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#is_ok for (self: RopeSubstrings): Bool */
short int core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__pos]))(self); /* pos on <self:RopeSubstrings>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__max]))(self); /* max on <self:RopeSubstrings>*/
}
{
{ /* Inline kernel#Int#<= (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var6 = var1 <= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#index for (self: RopeSubstrings): Int */
long core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__pos]))(self); /* pos on <self:RopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeSubstrings#next for (self: RopeSubstrings) */
void core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeSubstrings */;
long var /* : Int */;
val* var1 /* : FlatString */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : RopeCharIteratorPiece */;
val* var17 /* : nullable RopeCharIteratorPiece */;
val* var_it /* var it: nullable RopeCharIteratorPiece */;
val* var18 /* : String */;
val* var_rnod /* var rnod: String */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : String */;
val* var30 /* : RopeCharIteratorPiece */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : String */;
val* var34 /* : RopeCharIteratorPiece */;
val* var35 /* : nullable RopeCharIteratorPiece */;
val* var36 /* : String */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__ropes__RopeSubstrings__pos]))(var_); /* pos on <var_:RopeSubstrings>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__str]))(self); /* str on <self:RopeSubstrings>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:FlatString>*/
}
{
{ /* Inline kernel#Int#+ (var,var2) on <var:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__RopeSubstrings__pos_61d]))(var_, var3); /* pos= on <var_:RopeSubstrings>*/
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__pos]))(self); /* pos on <self:RopeSubstrings>*/
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__max]))(self); /* max on <self:RopeSubstrings>*/
}
{
{ /* Inline kernel#Int#> (var7,var8) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var15 = var7 > var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
goto RET_LABEL;
} else {
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__iter]))(self); /* iter on <self:RopeSubstrings>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev]))(var16); /* prev on <var16:RopeCharIteratorPiece>*/
}
var_it = var17;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 939);
fatal_exit(1);
} else {
var18 = ((val*(*)(val* self))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node]))(var_it); /* node on <var_it:nullable RopeCharIteratorPiece>*/
}
var_rnod = var18;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype20 = type_core__ropes__Concat.color;
idtype21 = type_core__ropes__Concat.id;
if(cltype20 >= var_rnod->type->table_size) {
var19 = 0;
} else {
var19 = var_rnod->type->type_table[cltype20] == idtype21;
}
var22 = !var19;
if (var22){
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 942);
fatal_exit(1);
} else {
((void(*)(val* self, short int p0))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var_it, 1); /* ldone= on <var_it:nullable RopeCharIteratorPiece>*/
}
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 943);
fatal_exit(1);
} else {
((void(*)(val* self, short int p0))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var_it, 1); /* rdone= on <var_it:nullable RopeCharIteratorPiece>*/
}
/* <var_rnod:String> isa FlatString */
cltype24 = type_core__FlatString.color;
idtype25 = type_core__FlatString.id;
if(cltype24 >= var_rnod->type->table_size) {
var23 = 0;
} else {
var23 = var_rnod->type->type_table[cltype24] == idtype25;
}
if (unlikely(!var23)) {
var_class_name26 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 944);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeSubstrings__str_61d]))(self, var_rnod); /* str= on <self:RopeSubstrings>*/
}
if (unlikely(var_it == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 945);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeSubstrings__iter_61d]))(self, var_it); /* iter= on <self:RopeSubstrings>*/
}
goto BREAK_label;
} else {
}
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 948);
fatal_exit(1);
} else {
var27 = ((short int(*)(val* self))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone]))(var_it); /* ldone on <var_it:nullable RopeCharIteratorPiece>*/
}
var28 = !var27;
if (var28){
var29 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 949);
fatal_exit(1);
}
var_rnod = var29;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 950);
fatal_exit(1);
} else {
((void(*)(val* self, short int p0))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var_it, 1); /* ldone= on <var_it:nullable RopeCharIteratorPiece>*/
}
var30 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var30, var_rnod); /* node= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var30, 0); /* ldone= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var30, 0); /* rdone= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var30, var_it); /* prev= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:RopeCharIteratorPiece>*/
}
var_it = var30;
} else {
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 952);
fatal_exit(1);
} else {
var31 = ((short int(*)(val* self))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone]))(var_it); /* rdone on <var_it:nullable RopeCharIteratorPiece>*/
}
var32 = !var31;
if (var32){
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 953);
fatal_exit(1);
} else {
((void(*)(val* self, short int p0))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var_it, 1); /* rdone= on <var_it:nullable RopeCharIteratorPiece>*/
}
var33 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 954);
fatal_exit(1);
}
var_rnod = var33;
var34 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var34, var_rnod); /* node= on <var34:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var34->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var34, 0); /* ldone= on <var34:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var34->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var34, 0); /* rdone= on <var34:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var34, var_it); /* prev= on <var34:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var34->class->vft[COLOR_core__kernel__Object__init]))(var34); /* init on <var34:RopeCharIteratorPiece>*/
}
var_it = var34;
} else {
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 957);
fatal_exit(1);
} else {
var35 = ((val*(*)(val* self))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev]))(var_it); /* prev on <var_it:nullable RopeCharIteratorPiece>*/
}
var_it = var35;
if (var_it == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 958);
fatal_exit(1);
} else {
var36 = ((val*(*)(val* self))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node]))(var_it); /* node on <var_it:nullable RopeCharIteratorPiece>*/
}
var_rnod = var36;
goto BREAK_label37;
}
}
BREAK_label37: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes#RopeChars#[] for (self: RopeChars, Int): Char */
uint32_t core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
uint32_t var2 /* : Char */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:RopeChars>*/
}
{
var2 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var_i); /* [] on <var1:Text(Concat)>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeChars#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeChars#iterator_from for (self: RopeChars, Int): IndexedIterator[Char] */
val* core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeCharIterator */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeCharIterator(&type_core__ropes__RopeCharIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:RopeChars>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeCharIterator__from]))(var1, var2, var_i); /* from on <var1:RopeCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeChars#reverse_iterator_from for (self: RopeChars, Int): IndexedIterator[Char] */
val* core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeCharReverseIterator */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeCharReverseIterator(&type_core__ropes__RopeCharReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:RopeChars>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeCharReverseIterator__from]))(var1, var2, var_i); /* from on <var1:RopeCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBytes#[] for (self: RopeBytes, Int): Byte */
unsigned char core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
unsigned char var /* : Byte */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
val* var_nod /* var nod: String */;
short int var2 /* : Bool */;
int cltype;
int idtype;
char* var3 /* : NativeString */;
unsigned char var4 /* : Byte */;
unsigned char var6 /* : Byte */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
short int var10 /* : Bool */;
val* var11 /* : String */;
val* var_lft /* var lft: String */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name;
short int var18 /* : Bool */;
val* var19 /* : String */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:RopeBytes>*/
}
var_nod = var1;
for(;;) {
/* <var_nod:String> isa FlatString */
cltype = type_core__FlatString.color;
idtype = type_core__FlatString.id;
if(cltype >= var_nod->type->table_size) {
var2 = 0;
} else {
var2 = var_nod->type->type_table[cltype] == idtype;
}
if (var2){
var3 = var_nod->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_nod:String(FlatString)> */
{
{ /* Inline native#NativeString#[] (var3,var_i) on <var3:NativeString> */
var6 = (unsigned char)((int)var3[var_i]);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
} else {
}
/* <var_nod:String> isa Concat */
cltype8 = type_core__ropes__Concat.color;
idtype9 = type_core__ropes__Concat.id;
if(cltype8 >= var_nod->type->table_size) {
var7 = 0;
} else {
var7 = var_nod->type->type_table[cltype8] == idtype9;
}
var10 = !var7;
if (var10){
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 991);
fatal_exit(1);
} else {
}
var11 = var_nod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_nod:String(Concat)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 992);
fatal_exit(1);
}
var_lft = var11;
{
var12 = ((long(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_lft); /* bytelen on <var_lft:String>*/
}
{
{ /* Inline kernel#Int#>= (var12,var_i) on <var12:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var15 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var18 = var12 >= var_i;
var13 = var18;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var19 = var_nod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_nod:String(Concat)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 994);
fatal_exit(1);
}
var_nod = var19;
} else {
var_nod = var_lft;
}
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBytes#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBytes#iterator_from for (self: RopeBytes, Int): IndexedIterator[Byte] */
val* core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_i /* var i: Int */;
val* var1 /* : RopeByteIterator */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeByteIterator(&type_core__ropes__RopeByteIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:RopeBytes>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeByteIterator__from]))(var1, var2, var_i); /* from on <var1:RopeByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBytes#reverse_iterator_from for (self: RopeBytes, Int): IndexedIterator[Byte] */
val* core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_i /* var i: Int */;
val* var1 /* : RopeByteReverseIterator */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeByteReverseIterator(&type_core__ropes__RopeByteReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:RopeBytes>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeByteReverseIterator__from]))(var1, var2, var_i); /* from on <var1:RopeByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharIterator#sit for (self: RopeBufferCharIterator): IndexedIterator[Char] */
val* core___core__RopeBufferCharIterator___sit(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : IndexedIterator[Char] */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferCharIterator___sit].val; /* _sit on <self:RopeBufferCharIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1011);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharIterator#sit= for (self: RopeBufferCharIterator, IndexedIterator[Char]) */
void core___core__RopeBufferCharIterator___sit_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBufferCharIterator___sit].val = p0; /* _sit on <self:RopeBufferCharIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferCharIterator#index for (self: RopeBufferCharIterator): Int */
long core___core__RopeBufferCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
val* var1 /* : IndexedIterator[Char] */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferCharIterator__sit]))(self); /* sit on <self:RopeBufferCharIterator>*/
}
{
var2 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var1); /* index on <var1:IndexedIterator[Char]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharIterator#from for (self: RopeBufferCharIterator, RopeBuffer, Int) */
void core___core__RopeBufferCharIterator___from(val* self, val* p0, long p1) {
val* var_t /* var t: RopeBuffer */;
long var_pos /* var pos: Int */;
val* var /* : String */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : IndexedIterator[nullable Object] */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeBufferCharIterator>*/
}
var_t = p0;
var_pos = p1;
{
((void(*)(val* self))(var_t->class->vft[COLOR_core__ropes__RopeBuffer__persist_buffer]))(var_t); /* persist_buffer on <var_t:RopeBuffer>*/
}
{
var = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var_t); /* str on <var_t:RopeBuffer>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__Text__chars]))(var); /* chars on <var:String>*/
}
{
var2 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(var1, var_pos); /* iterator_from on <var1:SequenceRead[Char]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeBufferCharIterator__sit_61d]))(self, var2); /* sit= on <self:RopeBufferCharIterator>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferCharIterator#is_ok for (self: RopeBufferCharIterator): Bool */
short int core___core__RopeBufferCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : IndexedIterator[Char] */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferCharIterator__sit]))(self); /* sit on <self:RopeBufferCharIterator>*/
}
{
var2 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var1); /* is_ok on <var1:IndexedIterator[Char]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharIterator#item for (self: RopeBufferCharIterator): Char */
uint32_t core___core__RopeBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
short int var1 /* : Bool */;
val* var2 /* : IndexedIterator[Char] */;
val* var3 /* : nullable Object */;
uint32_t var4 /* : Char */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:RopeBufferCharIterator>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1025);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferCharIterator__sit]))(self); /* sit on <self:RopeBufferCharIterator>*/
}
{
var3 = ((val*(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var2); /* item on <var2:IndexedIterator[Char]>*/
}
var4 = (uint32_t)((long)(var3)>>2);
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core___core__RopeBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core___core__RopeBufferCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharIterator#next for (self: RopeBufferCharIterator) */
void core___core__RopeBufferCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var /* : IndexedIterator[Char] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferCharIterator__sit]))(self); /* sit on <self:RopeBufferCharIterator>*/
}
{
((void(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var); /* next on <var:IndexedIterator[Char]>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferCharReverseIterator#sit for (self: RopeBufferCharReverseIterator): IndexedIterator[Char] */
val* core___core__RopeBufferCharReverseIterator___sit(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : IndexedIterator[Char] */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferCharReverseIterator___sit].val; /* _sit on <self:RopeBufferCharReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1036);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharReverseIterator#sit= for (self: RopeBufferCharReverseIterator, IndexedIterator[Char]) */
void core___core__RopeBufferCharReverseIterator___sit_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBufferCharReverseIterator___sit].val = p0; /* _sit on <self:RopeBufferCharReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferCharReverseIterator#index for (self: RopeBufferCharReverseIterator): Int */
long core___core__RopeBufferCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
val* var1 /* : IndexedIterator[Char] */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferCharReverseIterator__sit]))(self); /* sit on <self:RopeBufferCharReverseIterator>*/
}
{
var2 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var1); /* index on <var1:IndexedIterator[Char]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharReverseIterator#from for (self: RopeBufferCharReverseIterator, RopeBuffer, Int) */
void core___core__RopeBufferCharReverseIterator___from(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: RopeBuffer */;
long var_pos /* var pos: Int */;
val* var /* : String */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : IndexedIterator[nullable Object] */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeBufferCharReverseIterator>*/
}
var_tgt = p0;
var_pos = p1;
{
((void(*)(val* self))(var_tgt->class->vft[COLOR_core__ropes__RopeBuffer__persist_buffer]))(var_tgt); /* persist_buffer on <var_tgt:RopeBuffer>*/
}
{
var = ((val*(*)(val* self))(var_tgt->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var_tgt); /* str on <var_tgt:RopeBuffer>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__Text__chars]))(var); /* chars on <var:String>*/
}
{
var2 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator_from]))(var1, var_pos); /* reverse_iterator_from on <var1:SequenceRead[Char]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeBufferCharReverseIterator__sit_61d]))(self, var2); /* sit= on <self:RopeBufferCharReverseIterator>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferCharReverseIterator#is_ok for (self: RopeBufferCharReverseIterator): Bool */
short int core___core__RopeBufferCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : IndexedIterator[Char] */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferCharReverseIterator__sit]))(self); /* sit on <self:RopeBufferCharReverseIterator>*/
}
{
var2 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var1); /* is_ok on <var1:IndexedIterator[Char]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharReverseIterator#item for (self: RopeBufferCharReverseIterator): Char */
uint32_t core___core__RopeBufferCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
short int var1 /* : Bool */;
val* var2 /* : IndexedIterator[Char] */;
val* var3 /* : nullable Object */;
uint32_t var4 /* : Char */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:RopeBufferCharReverseIterator>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1050);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferCharReverseIterator__sit]))(self); /* sit on <self:RopeBufferCharReverseIterator>*/
}
{
var3 = ((val*(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var2); /* item on <var2:IndexedIterator[Char]>*/
}
var4 = (uint32_t)((long)(var3)>>2);
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core___core__RopeBufferCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core___core__RopeBufferCharReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferCharReverseIterator#next for (self: RopeBufferCharReverseIterator) */
void core___core__RopeBufferCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var /* : IndexedIterator[Char] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferCharReverseIterator__sit]))(self); /* sit on <self:RopeBufferCharReverseIterator>*/
}
{
((void(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var); /* next on <var:IndexedIterator[Char]>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#[] for (self: RopeBufferChars, Int): Char */
uint32_t core___core__RopeBufferChars___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
uint32_t var2 /* : Char */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
var2 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var_i); /* [] on <var1:Text(RopeBuffer)>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferChars#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core___core__RopeBufferChars___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core___core__RopeBufferChars___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferChars#[]= for (self: RopeBufferChars, Int, Char) */
void core___core__RopeBufferChars___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, uint32_t p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_i /* var i: Int */;
uint32_t var_c /* var c: Char */;
val* var1 /* : Text */;
/* Covariant cast for argument 1 (c) <p1:Char> isa Char */
/* <p1:Char> isa Char */
var = 1; /* easy <p1:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1065);
fatal_exit(1);
}
var_i = p0;
var_c = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
((void(*)(val* self, long p0, uint32_t p1))(var1->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(var1, var_i, var_c); /* []= on <var1:Text(RopeBuffer)>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void VIRTUAL_core___core__RopeBufferChars___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p1)>>2);
core___core__RopeBufferChars___core__abstract_collection__Sequence___91d_93d_61d(self, p0, var); /* Direct call ropes#RopeBufferChars#[]= on <self:Sequence[nullable Object](RopeBufferChars)>*/
RET_LABEL:;
}
/* method ropes#RopeBufferChars#add for (self: RopeBufferChars, Char) */
void core___core__RopeBufferChars___core__abstract_collection__SimpleCollection__add(val* self, uint32_t p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_c /* var c: Char */;
val* var1 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Char */
/* <p0:Char> isa Char */
var = 1; /* easy <p0:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1067);
fatal_exit(1);
}
var_c = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
((void(*)(val* self, uint32_t p0))(var1->class->vft[COLOR_core__abstract_text__Buffer__add]))(var1, var_c); /* add on <var1:Text(RopeBuffer)>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#add for (self: SimpleCollection[nullable Object], nullable Object) */
void VIRTUAL_core___core__RopeBufferChars___core__abstract_collection__SimpleCollection__add(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
core___core__RopeBufferChars___core__abstract_collection__SimpleCollection__add(self, var); /* Direct call ropes#RopeBufferChars#add on <self:SimpleCollection[nullable Object](RopeBufferChars)>*/
RET_LABEL:;
}
/* method ropes#RopeBufferChars#push for (self: RopeBufferChars, Char) */
void core___core__RopeBufferChars___core__abstract_collection__Sequence__push(val* self, uint32_t p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_c /* var c: Char */;
val* var1 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Char */
/* <p0:Char> isa Char */
var = 1; /* easy <p0:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1069);
fatal_exit(1);
}
var_c = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
((void(*)(val* self, uint32_t p0))(var1->class->vft[COLOR_core__abstract_text__Buffer__add]))(var1, var_c); /* add on <var1:Text(RopeBuffer)>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferChars#push for (self: Sequence[nullable Object], nullable Object) */
void VIRTUAL_core___core__RopeBufferChars___core__abstract_collection__Sequence__push(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
core___core__RopeBufferChars___core__abstract_collection__Sequence__push(self, var); /* Direct call ropes#RopeBufferChars#push on <self:Sequence[nullable Object](RopeBufferChars)>*/
RET_LABEL:;
}
/* method ropes#RopeBufferChars#iterator_from for (self: RopeBufferChars, Int): IndexedIterator[Char] */
val* core___core__RopeBufferChars___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeBufferCharIterator */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_core__RopeBufferCharIterator(&type_core__RopeBufferCharIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeBufferCharIterator__from]))(var1, var2, var_i); /* from on <var1:RopeBufferCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferChars#reverse_iterator_from for (self: RopeBufferChars, Int): IndexedIterator[Char] */
val* core___core__RopeBufferChars___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeBufferCharReverseIterator */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_core__RopeBufferCharReverseIterator(&type_core__RopeBufferCharReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:RopeBufferChars>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeBufferCharReverseIterator__from]))(var1, var2, var_i); /* from on <var1:RopeBufferCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#sit for (self: RopeBufferByteIterator): IndexedIterator[Byte] */
val* core___core__RopeBufferByteIterator___sit(val* self) {
val* var /* : IndexedIterator[Byte] */;
val* var1 /* : IndexedIterator[Byte] */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___sit].val; /* _sit on <self:RopeBufferByteIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1080);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#sit= for (self: RopeBufferByteIterator, IndexedIterator[Byte]) */
void core___core__RopeBufferByteIterator___sit_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___sit].val = p0; /* _sit on <self:RopeBufferByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteIterator#ns for (self: RopeBufferByteIterator): NativeString */
char* core___core__RopeBufferByteIterator___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___ns].str; /* _ns on <self:RopeBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#ns= for (self: RopeBufferByteIterator, NativeString) */
void core___core__RopeBufferByteIterator___ns_61d(val* self, char* p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___ns].str = p0; /* _ns on <self:RopeBufferByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteIterator#pns for (self: RopeBufferByteIterator): Int */
long core___core__RopeBufferByteIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___pns].l; /* _pns on <self:RopeBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#pns= for (self: RopeBufferByteIterator, Int) */
void core___core__RopeBufferByteIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___pns].l = p0; /* _pns on <self:RopeBufferByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteIterator#maxpos for (self: RopeBufferByteIterator): Int */
long core___core__RopeBufferByteIterator___maxpos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___maxpos].l; /* _maxpos on <self:RopeBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#maxpos= for (self: RopeBufferByteIterator, Int) */
void core___core__RopeBufferByteIterator___maxpos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___maxpos].l = p0; /* _maxpos on <self:RopeBufferByteIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteIterator#index for (self: RopeBufferByteIterator): Int */
long core___core__RopeBufferByteIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteIterator___index].l; /* _index on <self:RopeBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#index= for (self: RopeBufferByteIterator, Int) */
void core___core__RopeBufferByteIterator___index_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteIterator___index].l = p0; /* _index on <self:RopeBufferByteIterator> */
RET_LABEL:;
}
