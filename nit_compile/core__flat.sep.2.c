#include "core__flat.sep.0.h"
/* method flat#FlatBuffer#substring for (self: FlatBuffer, Int, Int): Buffer */
val* core___core__FlatBuffer___core__abstract_text__Text__substring(val* self, long p0, long p1) {
val* var /* : Buffer */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
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
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
val* var42 /* : Buffer */;
val* var43 /* : Buffer */;
char* var44 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var45 /* : Int */;
long var_bytefrom /* var bytefrom: Int */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
long var60 /* : Int */;
long var_byteto /* var byteto: Int */;
uint32_t var61 /* : Char */;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
long var84 /* : Int */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
long var90 /* : Int */;
long var_byte_length /* var byte_length: Int */;
char* var91 /* : NativeString */;
char* var92 /* : NativeString */;
char* var94 /* : NativeString */;
char* var_r_items /* var r_items: NativeString */;
val* var96 /* : FlatBuffer */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel#Int#>= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var4 = var_count >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 983);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var11 = var_from < 0l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var_from = 0l;
} else {
}
{
{ /* Inline kernel#Int#+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var14 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var18 = var_from + var_count;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var19 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#> (var12,var19) on <var12:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var26 = var12 > var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var27 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#- (var27,var_from) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var30 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var34 = var27 - var_from;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_count = var28;
} else {
}
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var37 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var41 = var_count <= 0l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
var42 = NEW_core__Buffer(&type_core__Buffer);
{
var43 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__Buffer__new]))(var42); /* new on <var42:Buffer>*/
}
var = var43;
goto RET_LABEL;
} else {
}
var44 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_its = var44;
var45 = core___core__NativeString___char_to_byte_index(var_its, var_from);
var_bytefrom = var45;
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var48 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var52 = var_count + var_from;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var46,1l) on <var46:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var59 = var46 - 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var60 = core___core__NativeString___char_to_byte_index(var_its, var53);
var_byteto = var60;
var61 = core___core__NativeString___char_at(var_its, var_byteto);
var62 = core__abstract_text___Char___u8char_len(var61);
{
{ /* Inline kernel#Int#- (var62,1l) on <var62:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var65 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var69 = var62 - 1l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_byteto,var63) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var63:Int> isa OTHER */
/* <var63:Int> isa OTHER */
var72 = 1; /* easy <var63:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var76 = var_byteto + var63;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_byteto = var70;
{
{ /* Inline kernel#Int#- (var_byteto,var_bytefrom) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var_bytefrom:Int> isa OTHER */
/* <var_bytefrom:Int> isa OTHER */
var79 = 1; /* easy <var_bytefrom:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var83 = var_byteto - var_bytefrom;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var77,1l) on <var77:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var86 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var90 = var77 + 1l;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var_byte_length = var84;
var91 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var91,var_byte_length) on <var91:NativeString> */
var94 = (char*)nit_alloc(var_byte_length);
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var_r_items = var92;
{
{ /* Inline native#NativeString#copy_to (var_its,var_r_items,var_byte_length,var_bytefrom,0l) on <var_its:NativeString> */
memmove(var_r_items+0l,var_its+var_bytefrom,var_byte_length);
RET_LABEL95:(void)0;
}
}
var96 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var96->class->vft[COLOR_core__flat__FlatBuffer__with_infos]))(var96, var_r_items, var_byte_length, var_byte_length, var_count); /* with_infos on <var96:FlatBuffer>*/
}
var = var96;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#reverse for (self: FlatBuffer) */
void core___core__FlatBuffer___core__abstract_text__Buffer__reverse(val* self) {
val* var /* : FlatBuffer */;
long var1 /* : Int */;
val* var_ns /* var ns: FlatBuffer */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : IndexedIterator[nullable Object] */;
val* var_ /* var : IndexedIterator[Char] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[Char] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_i /* var i: Char */;
char* var9 /* : NativeString */;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__written_61d]))(self, 0); /* written= on <self:FlatBuffer>*/
}
var = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_core__flat__FlatBuffer__with_capacity]))(var, var1); /* with_capacity on <var:FlatBuffer>*/
}
var_ns = var;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:FlatBuffer>*/
}
{
var3 = ((val*(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator]))(var2); /* reverse_iterator on <var2:SequenceRead[Char](Sequence[Char])>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:IndexedIterator[Char]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[Char]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_i = var8;
{
((void(*)(val* self, uint32_t p0))(var_ns->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_ns, var_i); /* add on <var_ns:FlatBuffer>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[Char]>*/
}
var9 = var_ns->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_ns:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var9; /* _items on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#times for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___core__abstract_text__Buffer__times(val* self, long p0) {
long var_repeats /* var repeats: Int */;
long var /* : Int */;
long var_bln /* var bln: Int */;
val* var1 /* : FlatString */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var_x /* var x: FlatString */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
var_repeats = p0;
var = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
var_bln = var;
var1 = NEW_core__FlatString(&type_core__FlatString);
var2 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var3 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var1->class->vft[COLOR_core__flat__FlatString__full]))(var1, var2, var_bln, 0l, var3); /* full on <var1:FlatString>*/
}
var_x = var1;
var_i = 1l;
var_ = var_repeats;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var6 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var7 = var_i < var_;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
} else {
goto BREAK_label;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Buffer__append]))(self, var_x); /* append on <self:FlatBuffer>*/
}
var8 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var8;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flat#FlatBuffer#upper for (self: FlatBuffer) */
void core___core__FlatBuffer___core__abstract_text__Buffer__upper(val* self) {
short int var /* : Bool */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
uint32_t var6 /* : Char */;
uint32_t var7 /* : Char */;
long var8 /* : Int */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
var_i = 0l;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
var_ = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
} else {
goto BREAK_label;
}
{
var6 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:FlatBuffer>*/
}
var7 = core___core__Char___to_upper(var6);
{
((void(*)(val* self, long p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, var_i, var7); /* []= on <self:FlatBuffer>*/
}
var8 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var8;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flat#FlatBuffer#lower for (self: FlatBuffer) */
void core___core__FlatBuffer___core__abstract_text__Buffer__lower(val* self) {
short int var /* : Bool */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
uint32_t var6 /* : Char */;
uint32_t var7 /* : Char */;
long var8 /* : Int */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
var_i = 0l;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
var_ = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
} else {
goto BREAK_label;
}
{
var6 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:FlatBuffer>*/
}
var7 = core___core__Char___to_lower(var6);
{
((void(*)(val* self, long p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, var_i, var7); /* []= on <self:FlatBuffer>*/
}
var8 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var8;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flat#FlatBufferByteReverseIterator#target for (self: FlatBufferByteReverseIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferByteReverseIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target].val; /* _target on <self:FlatBufferByteReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1030);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteReverseIterator#target= for (self: FlatBufferByteReverseIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferByteReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target].val = p0; /* _target on <self:FlatBufferByteReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferByteReverseIterator#target_items for (self: FlatBufferByteReverseIterator): NativeString */
char* core__flat___core__flat__FlatBufferByteReverseIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target_items].str; /* _target_items on <self:FlatBufferByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteReverseIterator#target_items= for (self: FlatBufferByteReverseIterator, NativeString) */
void core__flat___core__flat__FlatBufferByteReverseIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target_items].str = p0; /* _target_items on <self:FlatBufferByteReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferByteReverseIterator#curr_pos for (self: FlatBufferByteReverseIterator): Int */
long core__flat___core__flat__FlatBufferByteReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteReverseIterator#curr_pos= for (self: FlatBufferByteReverseIterator, Int) */
void core__flat___core__flat__FlatBufferByteReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferByteReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferByteReverseIterator#init for (self: FlatBufferByteReverseIterator) */
void core__flat___core__flat__FlatBufferByteReverseIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatBuffer */;
char* var1 /* : NativeString */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferByteReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferByteReverseIterator>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__target]))(self); /* target on <self:FlatBufferByteReverseIterator>*/
}
var1 = var->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var:FlatBuffer> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__target_items_61d]))(self, var1); /* target_items= on <self:FlatBufferByteReverseIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferByteReverseIterator#index for (self: FlatBufferByteReverseIterator): Int */
long core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteReverseIterator#is_ok for (self: FlatBufferByteReverseIterator): Bool */
short int core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferByteReverseIterator>*/
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
/* method flat#FlatBufferByteReverseIterator#item for (self: FlatBufferByteReverseIterator): Byte */
unsigned char core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__target_items]))(self); /* target_items on <self:FlatBufferByteReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferByteReverseIterator>*/
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
/* method flat#FlatBufferByteReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteReverseIterator#next for (self: FlatBufferByteReverseIterator) */
void core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferByteReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatBufferByteReverseIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatBufferByteReverseIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferByteView#[] for (self: FlatBufferByteView, Int): Byte */
unsigned char core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
unsigned char var /* : Byte */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
char* var2 /* : NativeString */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
var_index = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:FlatBufferByteView>*/
}
var2 = var1->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var1:Text(FlatBuffer)> */
{
{ /* Inline native#NativeString#[] (var2,var_index) on <var2:NativeString> */
var5 = (unsigned char)((int)var2[var_index]);
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
/* method flat#FlatBufferByteView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteView#iterator_from for (self: FlatBufferByteView, Int): IndexedIterator[Byte] */
val* core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferByteIterator */;
val* var2 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferByteIterator(&type_core__flat__FlatBufferByteIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:FlatBufferByteView>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatBufferByteIterator__target_61d]))(var1, var2); /* target= on <var1:FlatBufferByteIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBufferByteIterator__curr_pos_61d]))(var1, var_pos); /* curr_pos= on <var1:FlatBufferByteIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteView#reverse_iterator_from for (self: FlatBufferByteView, Int): IndexedIterator[Byte] */
val* core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferByteReverseIterator */;
val* var2 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferByteReverseIterator(&type_core__flat__FlatBufferByteReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:FlatBufferByteView>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__target_61d]))(var1, var2); /* target= on <var1:FlatBufferByteReverseIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__curr_pos_61d]))(var1, var_pos); /* curr_pos= on <var1:FlatBufferByteReverseIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#target for (self: FlatBufferByteIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferByteIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___target].val; /* _target on <self:FlatBufferByteIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1064);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#target= for (self: FlatBufferByteIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferByteIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferByteIterator___target].val = p0; /* _target on <self:FlatBufferByteIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferByteIterator#target_items for (self: FlatBufferByteIterator): NativeString */
char* core__flat___core__flat__FlatBufferByteIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___target_items].str; /* _target_items on <self:FlatBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#target_items= for (self: FlatBufferByteIterator, NativeString) */
void core__flat___core__flat__FlatBufferByteIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatBufferByteIterator___target_items].str = p0; /* _target_items on <self:FlatBufferByteIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferByteIterator#curr_pos for (self: FlatBufferByteIterator): Int */
long core__flat___core__flat__FlatBufferByteIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#curr_pos= for (self: FlatBufferByteIterator, Int) */
void core__flat___core__flat__FlatBufferByteIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferByteIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferByteIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferByteIterator#init for (self: FlatBufferByteIterator) */
void core__flat___core__flat__FlatBufferByteIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatBuffer */;
char* var1 /* : NativeString */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferByteIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferByteIterator>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__target]))(self); /* target on <self:FlatBufferByteIterator>*/
}
var1 = var->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var:FlatBuffer> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__target_items_61d]))(self, var1); /* target_items= on <self:FlatBufferByteIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferByteIterator#index for (self: FlatBufferByteIterator): Int */
long core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#is_ok for (self: FlatBufferByteIterator): Bool */
short int core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : FlatBuffer */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferByteIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__target]))(self); /* target on <self:FlatBufferByteIterator>*/
}
var3 = var2->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var2:FlatBuffer> */
{
{ /* Inline kernel#Int#< (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var7 = var1 < var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#item for (self: FlatBufferByteIterator): Byte */
unsigned char core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__target_items]))(self); /* target_items on <self:FlatBufferByteIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferByteIterator>*/
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
/* method flat#FlatBufferByteIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferByteIterator#next for (self: FlatBufferByteIterator) */
void core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferByteIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatBufferByteIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatBufferByteIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatBufferByteIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatBufferByteIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharReverseIterator#target for (self: FlatBufferCharReverseIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferCharReverseIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___target].val; /* _target on <self:FlatBufferCharReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1085);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#target= for (self: FlatBufferCharReverseIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferCharReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___target].val = p0; /* _target on <self:FlatBufferCharReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharReverseIterator#curr_pos for (self: FlatBufferCharReverseIterator): Int */
long core__flat___core__flat__FlatBufferCharReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#curr_pos= for (self: FlatBufferCharReverseIterator, Int) */
void core__flat___core__flat__FlatBufferCharReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharReverseIterator#index for (self: FlatBufferCharReverseIterator): Int */
long core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#is_ok for (self: FlatBufferCharReverseIterator): Bool */
short int core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferCharReverseIterator>*/
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
/* method flat#FlatBufferCharReverseIterator#item for (self: FlatBufferCharReverseIterator): Char */
uint32_t core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__target]))(self); /* target on <self:FlatBufferCharReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferCharReverseIterator>*/
}
{
var3 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var2); /* [] on <var1:FlatBuffer>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#next for (self: FlatBufferCharReverseIterator) */
void core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferCharReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatBufferCharReverseIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatBufferCharReverseIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharReverseIterator#init for (self: FlatBufferCharReverseIterator) */
void core__flat___core__flat__FlatBufferCharReverseIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferCharReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferCharReverseIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#[] for (self: FlatBufferCharView, Int): Char */
uint32_t core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
uint32_t var2 /* : Char */;
var_index = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
var2 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var_index); /* [] on <var1:Text(FlatBuffer)>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharView#[]= for (self: FlatBufferCharView, Int, Char) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, uint32_t p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_index /* var index: Int */;
uint32_t var_item /* var item: Char */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var22 /* : Text */;
/* Covariant cast for argument 1 (item) <p1:Char> isa Char */
/* <p1:Char> isa Char */
var = 1; /* easy <p1:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1106);
fatal_exit(1);
}
var_index = p0;
var_item = p1;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var8 = var_index >= 0l;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:FlatBufferCharView>*/
}
{
{ /* Inline kernel#Int#<= (var_index,var9) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var16 = var_index <= var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var1 = var10;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1108);
fatal_exit(1);
}
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:FlatBufferCharView>*/
}
{
{ /* Inline kernel#Int#== (var_index,var17) on <var_index:Int> */
var20 = var_index == var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
var21 = (val*)((long)(var_item)<<2|2);
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(self, var21); /* add on <self:FlatBufferCharView>*/
}
goto RET_LABEL;
} else {
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, long p0, uint32_t p1))(var22->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(var22, var_index, var_item); /* []= on <var22:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p1)>>2);
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence___91d_93d_61d(self, p0, var); /* Direct call flat#FlatBufferCharView#[]= on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method flat#FlatBufferCharView#push for (self: FlatBufferCharView, Char) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__push(val* self, uint32_t p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1116);
fatal_exit(1);
}
var_c = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, uint32_t p0))(var1->class->vft[COLOR_core__abstract_text__Buffer__add]))(var1, var_c); /* add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#push for (self: Sequence[nullable Object], nullable Object) */
void VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__push(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__push(self, var); /* Direct call flat#FlatBufferCharView#push on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method flat#FlatBufferCharView#add for (self: FlatBufferCharView, Char) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(val* self, uint32_t p0) {
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1121);
fatal_exit(1);
}
var_c = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, uint32_t p0))(var1->class->vft[COLOR_core__abstract_text__Buffer__add]))(var1, var_c); /* add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#add for (self: SimpleCollection[nullable Object], nullable Object) */
void VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(self, var); /* Direct call flat#FlatBufferCharView#add on <self:SimpleCollection[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method flat#FlatBufferCharView#enlarge for (self: FlatBufferCharView, Int) */
void core__flat___core__flat__FlatBufferCharView___enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
val* var /* : Text */;
var_cap = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_core__abstract_text__Buffer__enlarge]))(var, var_cap); /* enlarge on <var:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#append for (self: FlatBufferCharView, Collection[Char]) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_s /* var s: Collection[Char] */;
long var1 /* : Int */;
long var_s_length /* var s_length: Int */;
val* var2 /* : Text */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
val* var12 /* : Text */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
val* var_ /* var : Collection[Char] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : Iterator[Char] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
uint32_t var25 /* : Char */;
uint32_t var_i /* var i: Char */;
val* var26 /* : Text */;
/* Covariant cast for argument 0 (s) <p0:Collection[Char]> isa Collection[Char] */
/* <p0:Collection[Char]> isa Collection[Char] */
var = 1; /* easy <p0:Collection[Char]> isa Collection[Char]*/
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[Char]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1131);
fatal_exit(1);
}
var_s = p0;
{
var1 = ((long(*)(val* self))((((long)var_s&3)?class_info[((long)var_s&3)]:var_s->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Collection[Char]>*/
}
var_s_length = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(var2); /* capacity on <var2:Text(FlatBuffer)>*/
}
{
var4 = ((long(*)(val* self))((((long)var_s&3)?class_info[((long)var_s&3)]:var_s->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Collection[Char]>*/
}
{
{ /* Inline kernel#Int#< (var3,var4) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var11 = var3 < var4;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
var13 = var12->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var12:Text(FlatBuffer)> */
{
{ /* Inline kernel#Int#+ (var_s_length,var13) on <var_s_length:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var20 = var_s_length + var13;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatBufferCharView__enlarge]))(self, var14); /* enlarge on <self:FlatBufferCharView>*/
}
} else {
}
var_ = var_s;
{
var21 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Char]>*/
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:Iterator[Char]>*/
}
if (var23){
} else {
goto BREAK_label;
}
{
var24 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:Iterator[Char]>*/
}
var25 = (uint32_t)((long)(var24)>>2);
var_i = var25;
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, uint32_t p0))(var26->class->vft[COLOR_core__abstract_text__Buffer__add]))(var26, var_i); /* add on <var26:Text(FlatBuffer)>*/
}
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:Iterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:Iterator[Char]>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#iterator_from for (self: FlatBufferCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferCharIterator */;
val* var2 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferCharIterator(&type_core__flat__FlatBufferCharIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatBufferCharIterator__target_61d]))(var1, var2); /* target= on <var1:FlatBufferCharIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBufferCharIterator__curr_pos_61d]))(var1, var_pos); /* curr_pos= on <var1:FlatBufferCharIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharView#reverse_iterator_from for (self: FlatBufferCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferCharReverseIterator */;
val* var2 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferCharReverseIterator(&type_core__flat__FlatBufferCharReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__target_61d]))(var1, var2); /* target= on <var1:FlatBufferCharReverseIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__curr_pos_61d]))(var1, var_pos); /* curr_pos= on <var1:FlatBufferCharReverseIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#target for (self: FlatBufferCharIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferCharIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val; /* _target on <self:FlatBufferCharIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1147);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#target= for (self: FlatBufferCharIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferCharIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val = p0; /* _target on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharIterator#max for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l; /* _max on <self:FlatBufferCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#max= for (self: FlatBufferCharIterator, Int) */
void core__flat___core__flat__FlatBufferCharIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l = p0; /* _max on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharIterator#curr_pos for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#curr_pos= for (self: FlatBufferCharIterator, Int) */
void core__flat___core__flat__FlatBufferCharIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharIterator#init for (self: FlatBufferCharIterator) */
void core__flat___core__flat__FlatBufferCharIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatBuffer */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferCharIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferCharIterator>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__target]))(self); /* target on <self:FlatBufferCharIterator>*/
}
var1 = var->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var:FlatBuffer> */
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
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__max_61d]))(self, var2); /* max= on <self:FlatBufferCharIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharIterator#index for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#is_ok for (self: FlatBufferCharIterator): Bool */
short int core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferCharIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__max]))(self); /* max on <self:FlatBufferCharIterator>*/
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
/* method flat#FlatBufferCharIterator#item for (self: FlatBufferCharIterator): Char */
uint32_t core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__target]))(self); /* target on <self:FlatBufferCharIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferCharIterator>*/
}
{
var3 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var2); /* [] on <var1:FlatBuffer>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#next for (self: FlatBufferCharIterator) */
void core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferCharIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatBufferCharIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatBufferCharIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatBufferCharIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatBufferCharIterator>*/
}
RET_LABEL:;
}
/* method flat#NativeString#to_s for (self: NativeString): String */
val* core__flat___NativeString___core__abstract_text__Object__to_s(char* self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
var1 = core___core__NativeString___cstring_length(self);
var2 = core__flat___NativeString___to_s_with_length(self, var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#NativeString#to_s for (self: Object): String */
val* VIRTUAL_core__flat___NativeString___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
var2 = ((struct instance_core__NativeString*)self)->value; /* autounbox from Object to NativeString */;
var1 = core__flat___NativeString___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method flat#NativeString#to_s_with_length for (self: NativeString, Int): FlatString */
val* core__flat___NativeString___to_s_with_length(char* self, long p0) {
val* var /* : FlatString */;
long var_length /* var length: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : FlatString */;
var_length = p0;
{
{ /* Inline kernel#Int#>= (var_length,0l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var4 = var_length >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1174);
fatal_exit(1);
}
var5 = core__flat___NativeString___clean_utf8(self, var_length);
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#NativeString#to_s_full for (self: NativeString, Int, Int): String */
val* core__flat___NativeString___to_s_full(char* self, long p0, long p1) {
val* var /* : String */;
long var_bytelen /* var bytelen: Int */;
long var_unilen /* var unilen: Int */;
val* var1 /* : FlatString */;
var_bytelen = p0;
var_unilen = p1;
var1 = NEW_core__FlatString(&type_core__FlatString);
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var1->class->vft[COLOR_core__flat__FlatString__full]))(var1, self, var_bytelen, 0l, var_unilen); /* full on <var1:FlatString>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#NativeString#to_s_unsafe for (self: NativeString, nullable Int): String */
val* core__flat___NativeString___to_s_unsafe(char* self, val* p0) {
val* var /* : String */;
val* var_len /* var len: nullable Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
val* var6 /* : nullable Int */;
val* var7 /* : FlatString */;
long var8 /* : Int */;
var_len = p0;
if (var_len == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_len,((val*)NULL)) on <var_len:nullable Int> */
var4 = 0; /* incompatible types Int vs. null; cannot be NULL */
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
var5 = core___core__NativeString___cstring_length(self);
var6 = (val*)(var5<<2|1);
var_len = var6;
} else {
}
var7 = NEW_core__FlatString(&type_core__FlatString);
{
var8 = (long)(var_len)>>2;
((void(*)(val* self, char* p0, long p1, long p2))(var7->class->vft[COLOR_core__flat__FlatString__with_infos]))(var7, self, var8, 0l); /* with_infos on <var7:FlatString>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#NativeString#to_s_with_copy for (self: NativeString): FlatString */
val* core__flat___NativeString___to_s_with_copy(char* self) {
val* var /* : FlatString */;
long var1 /* : Int */;
long var_length /* var length: Int */;
val* var2 /* : FlatString */;
val* var_r /* var r: FlatString */;
char* var3 /* : NativeString */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
char* var13 /* : NativeString */;
char* var15 /* : NativeString */;
char* var_new_self /* var new_self: NativeString */;
val* var17 /* : FlatString */;
val* var_str /* var str: FlatString */;
var1 = core___core__NativeString___cstring_length(self);
var_length = var1;
var2 = core__flat___NativeString___clean_utf8(self, var_length);
var_r = var2;
{
var3 = ((char*(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__FlatText__items]))(var_r); /* items on <var_r:FlatString>*/
}
{
{ /* Inline native#NativeString#!= (var3,self) on <var3:NativeString> */
var6 = var3 == self;
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = var_r;
goto RET_LABEL;
} else {
}
var8 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_length,1l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var_length + 1l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var8,var9) on <var8:NativeString> */
var15 = (char*)nit_alloc(var9);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_new_self = var13;
{
{ /* Inline native#NativeString#copy_to (self,var_new_self,var_length,0l,0l) on <self:NativeString> */
memmove(var_new_self+0l,self+0l,var_length);
RET_LABEL16:(void)0;
}
}
var17 = NEW_core__FlatString(&type_core__FlatString);
{
((void(*)(val* self, char* p0, long p1, long p2))(var17->class->vft[COLOR_core__flat__FlatString__with_infos]))(var17, var_new_self, var_length, 0l); /* with_infos on <var17:FlatString>*/
}
var_str = var17;
{
{ /* Inline native#NativeString#[]= (var_new_self,var_length,((unsigned char)0x00)) on <var_new_self:NativeString> */
var_new_self[var_length]=(unsigned char)((unsigned char)0x00);
RET_LABEL18:(void)0;
}
}
{
((void(*)(val* self, char* p0))(var_str->class->vft[COLOR_core__flat__FlatString__to_cstring_61d]))(var_str, var_new_self); /* to_cstring= on <var_str:FlatString>*/
}
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#NativeString#clean_utf8 for (self: NativeString, Int): FlatString */
val* core__flat___NativeString___clean_utf8(char* self, long p0) {
val* var /* : FlatString */;
long var_len /* var len: Int */;
val* var_replacements /* var replacements: nullable Array[Int] */;
long var_end_length /* var end_length: Int */;
long var_pos /* var pos: Int */;
long var_chr_ln /* var chr_ln: Int */;
long var_rem /* var rem: Int */;
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
long var12 /* : Int */;
long var14 /* : Int */;
long var_i /* var i: Int */;
long var15 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
unsigned char var47 /* : Byte */;
unsigned char var49 /* : Byte */;
unsigned char var_b /* var b: Byte */;
unsigned char var50 /* : Byte */;
unsigned char var52 /* : Byte */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var78 /* : Int */;
long var_nxst /* var nxst: Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
unsigned char var82 /* : Byte */;
unsigned char var84 /* : Byte */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var_ok_st /* var ok_st: Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
unsigned char var91 /* : Byte */;
unsigned char var93 /* : Byte */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
unsigned char var100 /* : Byte */;
unsigned char var102 /* : Byte */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
unsigned char var106 /* : Byte */;
unsigned char var108 /* : Byte */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : Array[Int] */;
val* var116 /* : nullable Object */;
long var117 /* : Int */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
const char* var_class_name122;
long var123 /* : Int */;
long var124 /* : Int */;
short int var126 /* : Bool */;
int cltype127;
int idtype128;
const char* var_class_name129;
long var130 /* : Int */;
long var131 /* : Int */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name136;
long var137 /* : Int */;
long var138 /* : Int */;
short int var140 /* : Bool */;
int cltype141;
int idtype142;
const char* var_class_name143;
long var144 /* : Int */;
uint32_t var145 /* : Char */;
uint32_t var_c /* var c: Char */;
long var146 /* : Int */;
long var148 /* : Int */;
long var_cp /* var cp: Int */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
int cltype156;
int idtype157;
const char* var_class_name158;
short int var159 /* : Bool */;
short int var_ /* var : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
const char* var_class_name165;
short int var166 /* : Bool */;
short int var_ok_c /* var ok_c: Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
int cltype174;
int idtype175;
const char* var_class_name176;
short int var177 /* : Bool */;
short int var_178 /* var : Bool */;
short int var179 /* : Bool */;
short int var181 /* : Bool */;
int cltype182;
int idtype183;
const char* var_class_name184;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
short int var192 /* : Bool */;
int cltype193;
int idtype194;
const char* var_class_name195;
short int var196 /* : Bool */;
short int var_197 /* var : Bool */;
short int var198 /* : Bool */;
short int var200 /* : Bool */;
int cltype201;
int idtype202;
const char* var_class_name203;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
short int var_208 /* var : Bool */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
int cltype213;
int idtype214;
const char* var_class_name215;
short int var216 /* : Bool */;
short int var_217 /* var : Bool */;
short int var218 /* : Bool */;
short int var220 /* : Bool */;
int cltype221;
int idtype222;
const char* var_class_name223;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var_226 /* var : Bool */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
short int var_231 /* var : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var239 /* : Bool */;
int cltype240;
int idtype241;
const char* var_class_name242;
short int var243 /* : Bool */;
short int var_244 /* var : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
int cltype248;
int idtype249;
const char* var_class_name250;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
val* var255 /* : Array[Int] */;
val* var256 /* : nullable Object */;
long var257 /* : Int */;
short int var259 /* : Bool */;
int cltype260;
int idtype261;
const char* var_class_name262;
long var263 /* : Int */;
long var264 /* : Int */;
short int var266 /* : Bool */;
int cltype267;
int idtype268;
const char* var_class_name269;
long var270 /* : Int */;
long var271 /* : Int */;
short int var273 /* : Bool */;
int cltype274;
int idtype275;
const char* var_class_name276;
long var277 /* : Int */;
long var278 /* : Int */;
short int var280 /* : Bool */;
int cltype281;
int idtype282;
const char* var_class_name283;
long var284 /* : Int */;
long var285 /* : Int */;
long var_clen /* var clen: Int */;
long var286 /* : Int */;
short int var288 /* : Bool */;
int cltype289;
int idtype290;
const char* var_class_name291;
long var292 /* : Int */;
long var293 /* : Int */;
short int var295 /* : Bool */;
int cltype296;
int idtype297;
const char* var_class_name298;
long var299 /* : Int */;
long var300 /* : Int */;
short int var302 /* : Bool */;
int cltype303;
int idtype304;
const char* var_class_name305;
long var306 /* : Int */;
char* var_ret /* var ret: NativeString */;
short int var307 /* : Bool */;
short int var309 /* : Bool */;
short int var310 /* : Bool */;
char* var311 /* : NativeString */;
char* var312 /* : NativeString */;
char* var314 /* : NativeString */;
long var_old_repl /* var old_repl: Int */;
long var_off /* var off: Int */;
val* var_repls /* var repls: Array[Int] */;
val* var315 /* : nullable NativeArray[nullable Object] */;
val* var_r /* var r: NativeArray[Int] */;
long var316 /* : Int */;
long var_imax /* var imax: Int */;
long var_i317 /* var i: Int */;
long var_318 /* var : Int */;
short int var319 /* : Bool */;
short int var321 /* : Bool */;
int cltype322;
int idtype323;
const char* var_class_name324;
short int var325 /* : Bool */;
val* var327 /* : nullable Object */;
val* var329 /* : Object */;
long var330 /* : Int */;
long var_repl_pos /* var repl_pos: Int */;
long var331 /* : Int */;
short int var333 /* : Bool */;
int cltype334;
int idtype335;
const char* var_class_name336;
long var337 /* : Int */;
long var_chkln /* var chkln: Int */;
long var339 /* : Int */;
short int var341 /* : Bool */;
int cltype342;
int idtype343;
const char* var_class_name344;
long var345 /* : Int */;
long var347 /* : Int */;
short int var349 /* : Bool */;
int cltype350;
int idtype351;
const char* var_class_name352;
long var353 /* : Int */;
long var355 /* : Int */;
short int var357 /* : Bool */;
int cltype358;
int idtype359;
const char* var_class_name360;
long var361 /* : Int */;
long var363 /* : Int */;
short int var365 /* : Bool */;
int cltype366;
int idtype367;
const char* var_class_name368;
long var369 /* : Int */;
long var370 /* : Int */;
short int var372 /* : Bool */;
int cltype373;
int idtype374;
const char* var_class_name375;
long var376 /* : Int */;
long var377 /* : Int */;
long var378 /* : Int */;
short int var380 /* : Bool */;
int cltype381;
int idtype382;
const char* var_class_name383;
long var384 /* : Int */;
val* var386 /* : FlatString */;
var_len = p0;
var_replacements = ((val*)NULL);
var_end_length = var_len;
var_pos = 0l;
var_chr_ln = 0l;
var_rem = var_len;
for(;;) {
{
{ /* Inline kernel#Int#> (var_rem,0l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var4 = var_rem > 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
for(;;) {
{
{ /* Inline kernel#Int#>= (var_rem,4l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var7 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var11 = var_rem >= 4l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline native#NativeString#fetch_4_chars (self,var_pos) on <self:NativeString> */
var14 = (long)*((uint32_t*)(self + var_pos));
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_i = var12;
{
{ /* Inline math#Int#& (var_i,2155905152l) on <var_i:Int> */
var17 = var_i & 2155905152l;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var15,0l) on <var15:Int> */
var20 = var15 == 0l;
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel#Int#+ (var_pos,4l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var24 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var28 = var_pos + 4l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_pos = var22;
{
{ /* Inline kernel#Int#+ (var_chr_ln,4l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var31 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var35 = var_chr_ln + 4l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_chr_ln = var29;
{
{ /* Inline kernel#Int#- (var_rem,4l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var38 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_rem - 4l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_rem = var36;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_rem,0l) on <var_rem:Int> */
var45 = var_rem == 0l;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
goto BREAK_label46;
} else {
}
{
{ /* Inline native#NativeString#[] (self,var_pos) on <self:NativeString> */
var49 = (unsigned char)((int)self[var_pos]);
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_b = var47;
{
{ /* Inline math#Byte#& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var52 = var_b & ((unsigned char)0x80);
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var50,((unsigned char)0x00)) on <var50:Byte> */
var55 = var50 == ((unsigned char)0x00);
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var58 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var62 = var_pos + 1l;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_pos = var56;
{
{ /* Inline kernel#Int#+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var65 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var69 = var_chr_ln + 1l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_chr_ln = var63;
{
{ /* Inline kernel#Int#- (var_rem,1l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var76 = var_rem - 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_rem = var70;
goto BREAK_label77;
} else {
}
var78 = core___core__NativeString___length_of_char_at(self, var_pos);
var_nxst = var78;
{
{ /* Inline kernel#Int#== (var_nxst,1l) on <var_nxst:Int> */
var81 = var_nxst == 1l;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
{
{ /* Inline math#Byte#& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var84 = var_b & ((unsigned char)0x80);
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var82,((unsigned char)0x00)) on <var82:Byte> */
var87 = var82 == ((unsigned char)0x00);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_ok_st = var85;
} else {
{
{ /* Inline kernel#Int#== (var_nxst,2l) on <var_nxst:Int> */
var90 = var_nxst == 2l;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
{ /* Inline math#Byte#& (var_b,((unsigned char)0xe0)) on <var_b:Byte> */
var93 = var_b & ((unsigned char)0xe0);
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var91,((unsigned char)0xc0)) on <var91:Byte> */
var96 = var91 == ((unsigned char)0xc0);
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_ok_st = var94;
} else {
{
{ /* Inline kernel#Int#== (var_nxst,3l) on <var_nxst:Int> */
var99 = var_nxst == 3l;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
if (var97){
{
{ /* Inline math#Byte#& (var_b,((unsigned char)0xf0)) on <var_b:Byte> */
var102 = var_b & ((unsigned char)0xf0);
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var100,((unsigned char)0xe0)) on <var100:Byte> */
var105 = var100 == ((unsigned char)0xe0);
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_ok_st = var103;
} else {
{
{ /* Inline math#Byte#& (var_b,((unsigned char)0xf8)) on <var_b:Byte> */
var108 = var_b & ((unsigned char)0xf8);
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var106,((unsigned char)0xf0)) on <var106:Byte> */
var111 = var106 == ((unsigned char)0xf0);
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
var_ok_st = var109;
}
}
}
var112 = !var_ok_st;
if (var112){
if (var_replacements == NULL) {
var113 = 1; /* is null */
} else {
var113 = 0; /* arg is null but recv is not */
}
if (0) {
var114 = ((short int(*)(val* self, val* p0))(var_replacements->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_replacements, ((val*)NULL)); /* == on <var_replacements:nullable Array[Int]>*/
var113 = var114;
}
if (var113){
var115 = NEW_core__Array(&type_core__Array__core__Int);
{
((void(*)(val* self))(var115->class->vft[COLOR_core__kernel__Object__init]))(var115); /* init on <var115:Array[Int]>*/
}
var_replacements = var115;
} else {
}
{
var116 = (val*)(var_pos<<2|1);
((void(*)(val* self, val* p0))(var_replacements->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_replacements, var116); /* add on <var_replacements:nullable Array[Int](Array[Int])>*/
}
{
{ /* Inline kernel#Int#+ (var_end_length,2l) on <var_end_length:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var119 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var119)) {
var_class_name122 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name122);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var123 = var_end_length + 2l;
var117 = var123;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var_end_length = var117;
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var126 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var126)) {
var_class_name129 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name129);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var130 = var_pos + 1l;
var124 = var130;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
var_pos = var124;
{
{ /* Inline kernel#Int#- (var_rem,1l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var133 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name136 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var137 = var_rem - 1l;
var131 = var137;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
var_rem = var131;
{
{ /* Inline kernel#Int#+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var140 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var140)) {
var_class_name143 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name143);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var144 = var_chr_ln + 1l;
var138 = var144;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
var_chr_ln = var138;
goto BREAK_label77;
} else {
}
var145 = core___core__NativeString___char_at(self, var_pos);
var_c = var145;
{
{ /* Inline kernel#Char#code_point (var_c) on <var_c:Char> */
var148 = (long)var_c;
var146 = var148;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
var_cp = var146;
{
{ /* Inline kernel#Int#== (var_nxst,1l) on <var_nxst:Int> */
var151 = var_nxst == 1l;
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
if (var149){
{
{ /* Inline kernel#Int#>= (var_cp,0l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var155 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var155)) {
var_class_name158 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name158);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var159 = var_cp >= 0l;
var153 = var159;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
var_ = var153;
if (var153){
{
{ /* Inline kernel#Int#<= (var_cp,127l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <127l:Int> isa OTHER */
/* <127l:Int> isa OTHER */
var162 = 1; /* easy <127l:Int> isa OTHER*/
if (unlikely(!var162)) {
var_class_name165 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name165);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var166 = var_cp <= 127l;
var160 = var166;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
var152 = var160;
} else {
var152 = var_;
}
var_ok_c = var152;
} else {
{
{ /* Inline kernel#Int#== (var_nxst,2l) on <var_nxst:Int> */
var169 = var_nxst == 2l;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
if (var167){
{
{ /* Inline kernel#Int#>= (var_cp,128l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var173 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var173)) {
var_class_name176 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name176);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var177 = var_cp >= 128l;
var171 = var177;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
}
var_178 = var171;
if (var171){
{
{ /* Inline kernel#Int#<= (var_cp,2047l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <2047l:Int> isa OTHER */
/* <2047l:Int> isa OTHER */
var181 = 1; /* easy <2047l:Int> isa OTHER*/
if (unlikely(!var181)) {
var_class_name184 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name184);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var185 = var_cp <= 2047l;
var179 = var185;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
}
var170 = var179;
} else {
var170 = var_178;
}
var_ok_c = var170;
} else {
{
{ /* Inline kernel#Int#== (var_nxst,3l) on <var_nxst:Int> */
var188 = var_nxst == 3l;
var186 = var188;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
}
if (var186){
{
{ /* Inline kernel#Int#>= (var_cp,2048l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <2048l:Int> isa OTHER */
/* <2048l:Int> isa OTHER */
var192 = 1; /* easy <2048l:Int> isa OTHER*/
if (unlikely(!var192)) {
var_class_name195 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name195);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var196 = var_cp >= 2048l;
var190 = var196;
goto RET_LABEL191;
RET_LABEL191:(void)0;
}
}
var_197 = var190;
if (var190){
{
{ /* Inline kernel#Int#<= (var_cp,65535l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65535l:Int> isa OTHER */
/* <65535l:Int> isa OTHER */
var200 = 1; /* easy <65535l:Int> isa OTHER*/
if (unlikely(!var200)) {
var_class_name203 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name203);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var204 = var_cp <= 65535l;
var198 = var204;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
}
var189 = var198;
} else {
var189 = var_197;
}
var_ok_c = var189;
var_208 = var_ok_c;
if (var_ok_c){
{
{ /* Inline kernel#Int#>= (var_cp,55296l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <55296l:Int> isa OTHER */
/* <55296l:Int> isa OTHER */
var212 = 1; /* easy <55296l:Int> isa OTHER*/
if (unlikely(!var212)) {
var_class_name215 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name215);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var216 = var_cp >= 55296l;
var210 = var216;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
}
var_217 = var210;
if (var210){
{
{ /* Inline kernel#Int#<= (var_cp,57343l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <57343l:Int> isa OTHER */
/* <57343l:Int> isa OTHER */
var220 = 1; /* easy <57343l:Int> isa OTHER*/
if (unlikely(!var220)) {
var_class_name223 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name223);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var224 = var_cp <= 57343l;
var218 = var224;
goto RET_LABEL219;
RET_LABEL219:(void)0;
}
}
var209 = var218;
} else {
var209 = var_217;
}
var225 = !var209;
var207 = var225;
} else {
var207 = var_208;
}
var_226 = var207;
if (var207){
{
{ /* Inline kernel#Int#!= (var_cp,65534l) on <var_cp:Int> */
var229 = var_cp == 65534l;
var230 = !var229;
var227 = var230;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
var206 = var227;
} else {
var206 = var_226;
}
var_231 = var206;
if (var206){
{
{ /* Inline kernel#Int#!= (var_cp,65535l) on <var_cp:Int> */
var234 = var_cp == 65535l;
var235 = !var234;
var232 = var235;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
}
var205 = var232;
} else {
var205 = var_231;
}
var_ok_c = var205;
} else {
{
{ /* Inline kernel#Int#>= (var_cp,65536l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65536l:Int> isa OTHER */
/* <65536l:Int> isa OTHER */
var239 = 1; /* easy <65536l:Int> isa OTHER*/
if (unlikely(!var239)) {
var_class_name242 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name242);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var243 = var_cp >= 65536l;
var237 = var243;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
}
var_244 = var237;
if (var237){
{
{ /* Inline kernel#Int#<= (var_cp,1114111l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <1114111l:Int> isa OTHER */
/* <1114111l:Int> isa OTHER */
var247 = 1; /* easy <1114111l:Int> isa OTHER*/
if (unlikely(!var247)) {
var_class_name250 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name250);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var251 = var_cp <= 1114111l;
var245 = var251;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
}
var236 = var245;
} else {
var236 = var_244;
}
var_ok_c = var236;
}
}
}
var252 = !var_ok_c;
if (var252){
if (var_replacements == NULL) {
var253 = 1; /* is null */
} else {
var253 = 0; /* arg is null but recv is not */
}
if (0) {
var254 = ((short int(*)(val* self, val* p0))(var_replacements->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_replacements, ((val*)NULL)); /* == on <var_replacements:nullable Array[Int]>*/
var253 = var254;
}
if (var253){
var255 = NEW_core__Array(&type_core__Array__core__Int);
{
((void(*)(val* self))(var255->class->vft[COLOR_core__kernel__Object__init]))(var255); /* init on <var255:Array[Int]>*/
}
var_replacements = var255;
} else {
}
{
var256 = (val*)(var_pos<<2|1);
((void(*)(val* self, val* p0))(var_replacements->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_replacements, var256); /* add on <var_replacements:nullable Array[Int](Array[Int])>*/
}
{
{ /* Inline kernel#Int#+ (var_end_length,2l) on <var_end_length:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var259 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var259)) {
var_class_name262 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name262);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var263 = var_end_length + 2l;
var257 = var263;
goto RET_LABEL258;
RET_LABEL258:(void)0;
}
}
var_end_length = var257;
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var266 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var266)) {
var_class_name269 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name269);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var270 = var_pos + 1l;
var264 = var270;
goto RET_LABEL265;
RET_LABEL265:(void)0;
}
}
var_pos = var264;
{
{ /* Inline kernel#Int#+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var273 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var273)) {
var_class_name276 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name276);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var277 = var_chr_ln + 1l;
var271 = var277;
goto RET_LABEL272;
RET_LABEL272:(void)0;
}
}
var_chr_ln = var271;
{
{ /* Inline kernel#Int#- (var_rem,1l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var280 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var280)) {
var_class_name283 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name283);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var284 = var_rem - 1l;
var278 = var284;
goto RET_LABEL279;
RET_LABEL279:(void)0;
}
}
var_rem = var278;
goto BREAK_label77;
} else {
}
var285 = core__abstract_text___Char___u8char_len(var_c);
var_clen = var285;
{
{ /* Inline kernel#Int#+ (var_pos,var_clen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var288 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var288)) {
var_class_name291 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name291);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var292 = var_pos + var_clen;
var286 = var292;
goto RET_LABEL287;
RET_LABEL287:(void)0;
}
}
var_pos = var286;
{
{ /* Inline kernel#Int#- (var_rem,var_clen) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var295 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var295)) {
var_class_name298 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name298);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var299 = var_rem - var_clen;
var293 = var299;
goto RET_LABEL294;
RET_LABEL294:(void)0;
}
}
var_rem = var293;
{
{ /* Inline kernel#Int#+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var302 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var302)) {
var_class_name305 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name305);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var306 = var_chr_ln + 1l;
var300 = var306;
goto RET_LABEL301;
RET_LABEL301:(void)0;
}
}
var_chr_ln = var300;
} else {
goto BREAK_label46;
}
BREAK_label77: (void)0;
}
BREAK_label46: (void)0;
var_ret = self;
{
{ /* Inline kernel#Int#!= (var_end_length,var_len) on <var_end_length:Int> */
var309 = var_end_length == var_len;
var310 = !var309;
var307 = var310;
goto RET_LABEL308;
RET_LABEL308:(void)0;
}
}
if (var307){
var311 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var311,var_end_length) on <var311:NativeString> */
var314 = (char*)nit_alloc(var_end_length);
var312 = var314;
goto RET_LABEL313;
RET_LABEL313:(void)0;
}
}
var_ret = var312;
var_old_repl = 0l;
var_off = 0l;
if (unlikely(var_replacements == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1276);
fatal_exit(1);
}
var_repls = var_replacements;
{
var315 = ((val*(*)(val* self))(var_repls->class->vft[COLOR_core__array__Array__items]))(var_repls); /* items on <var_repls:Array[Int]>*/
}
if (unlikely(var315 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1277);
fatal_exit(1);
}
var_r = var315;
{
var316 = ((long(*)(val* self))(var_repls->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_repls); /* length on <var_repls:Array[Int]>*/
}
var_imax = var316;
var_i317 = 0l;
var_318 = var_imax;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i317,var_318) on <var_i317:Int> */
/* Covariant cast for argument 0 (i) <var_318:Int> isa OTHER */
/* <var_318:Int> isa OTHER */
var321 = 1; /* easy <var_318:Int> isa OTHER*/
if (unlikely(!var321)) {
var_class_name324 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name324);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var325 = var_i317 < var_318;
var319 = var325;
goto RET_LABEL320;
RET_LABEL320:(void)0;
}
}
if (var319){
} else {
goto BREAK_label326;
}
{
{ /* Inline array#NativeArray#[] (var_r,var_i317) on <var_r:NativeArray[Int]> */
var329 = ((struct instance_core__NativeArray*)var_r)->values[var_i317];
var327 = var329;
goto RET_LABEL328;
RET_LABEL328:(void)0;
}
}
var330 = (long)(var327)>>2;
var_repl_pos = var330;
{
{ /* Inline kernel#Int#- (var_repl_pos,var_old_repl) on <var_repl_pos:Int> */
/* Covariant cast for argument 0 (i) <var_old_repl:Int> isa OTHER */
/* <var_old_repl:Int> isa OTHER */
var333 = 1; /* easy <var_old_repl:Int> isa OTHER*/
if (unlikely(!var333)) {
var_class_name336 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name336);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var337 = var_repl_pos - var_old_repl;
var331 = var337;
goto RET_LABEL332;
RET_LABEL332:(void)0;
}
}
var_chkln = var331;
{
{ /* Inline native#NativeString#copy_to (self,var_ret,var_chkln,var_old_repl,var_off) on <self:NativeString> */
memmove(var_ret+var_off,self+var_old_repl,var_chkln);
RET_LABEL338:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_chkln) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_chkln:Int> isa OTHER */
/* <var_chkln:Int> isa OTHER */
var341 = 1; /* easy <var_chkln:Int> isa OTHER*/
if (unlikely(!var341)) {
var_class_name344 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name344);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var345 = var_off + var_chkln;
var339 = var345;
goto RET_LABEL340;
RET_LABEL340:(void)0;
}
}
var_off = var339;
{
{ /* Inline native#NativeString#[]= (var_ret,var_off,((unsigned char)0xef)) on <var_ret:NativeString> */
var_ret[var_off]=(unsigned char)((unsigned char)0xef);
RET_LABEL346:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,1l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var349 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var349)) {
var_class_name352 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name352);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var353 = var_off + 1l;
var347 = var353;
goto RET_LABEL348;
RET_LABEL348:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_ret,var347,((unsigned char)0xbf)) on <var_ret:NativeString> */
var_ret[var347]=(unsigned char)((unsigned char)0xbf);
RET_LABEL354:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,2l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var357 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var357)) {
var_class_name360 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name360);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var361 = var_off + 2l;
var355 = var361;
goto RET_LABEL356;
RET_LABEL356:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_ret,var355,((unsigned char)0xbd)) on <var_ret:NativeString> */
var_ret[var355]=(unsigned char)((unsigned char)0xbd);
RET_LABEL362:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_repl_pos,1l) on <var_repl_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var365 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var365)) {
var_class_name368 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name368);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var369 = var_repl_pos + 1l;
var363 = var369;
goto RET_LABEL364;
RET_LABEL364:(void)0;
}
}
var_old_repl = var363;
{
{ /* Inline kernel#Int#+ (var_off,3l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var372 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var372)) {
var_class_name375 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name375);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var376 = var_off + 3l;
var370 = var376;
goto RET_LABEL371;
RET_LABEL371:(void)0;
}
}
var_off = var370;
var377 = core___core__Int___Discrete__successor(var_i317, 1l);
var_i317 = var377;
}
BREAK_label326: (void)0;
{
{ /* Inline kernel#Int#- (var_len,var_old_repl) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_old_repl:Int> isa OTHER */
/* <var_old_repl:Int> isa OTHER */
var380 = 1; /* easy <var_old_repl:Int> isa OTHER*/
if (unlikely(!var380)) {
var_class_name383 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name383);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var384 = var_len - var_old_repl;
var378 = var384;
goto RET_LABEL379;
RET_LABEL379:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (self,var_ret,var378,var_old_repl,var_off) on <self:NativeString> */
memmove(var_ret+var_off,self+var_old_repl,var378);
RET_LABEL385:(void)0;
}
}
} else {
}
var386 = NEW_core__FlatString(&type_core__FlatString);
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var386->class->vft[COLOR_core__flat__FlatString__full]))(var386, var_ret, var_end_length, 0l, var_chr_ln); /* full on <var386:FlatString>*/
}
var = var386;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#NativeString#set_char_at for (self: NativeString, Int, Char) */
void core__flat___NativeString___set_char_at(char* self, long p0, uint32_t p1) {
long var_pos /* var pos: Int */;
uint32_t var_c /* var c: Char */;
long var /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var9 /* : Int */;
unsigned char var10 /* : Byte */;
unsigned char var12 /* : Byte */;
long var14 /* : Int */;
long var_ln /* var ln: Int */;
var_pos = p0;
var_c = p1;
{
{ /* Inline kernel#Char#code_point (var_c) on <var_c:Char> */
var2 = (long)var_c;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var,128l) on <var:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var5 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var6 = var < 128l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline kernel#Char#code_point (var_c) on <var_c:Char> */
var9 = (long)var_c;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#to_b (var7) on <var7:Int> */
var12 = (unsigned char)var7;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (self,var_pos,var10) on <self:NativeString> */
self[var_pos]=(unsigned char)var10;
RET_LABEL13:(void)0;
}
}
goto RET_LABEL;
} else {
}
var14 = core__abstract_text___Char___u8char_len(var_c);
var_ln = var14;
core__flat___NativeString___native_set_char(self, var_pos, var_c, var_ln); /* Direct call flat#NativeString#native_set_char on <self:NativeString>*/
RET_LABEL:;
}
/* method flat#NativeString#native_set_char for (self: NativeString, Int, Char, Int) */
void core__flat___NativeString___native_set_char(char* self, long p0, uint32_t p1, long p2) {
core__flat___NativeString_native_set_char___impl(self, p0, p1, p2);
RET_LABEL:;
}
/* method flat#Int#to_base for (self: Int, Int, Bool): String */
val* core__flat___Int___to_base(long self, long p0, short int p1) {
val* var /* : String */;
long var_base /* var base: Int */;
short int var_signed /* var signed: Bool */;
long var1 /* : Int */;
long var_l /* var l: Int */;
val* var2 /* : FlatBuffer */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var_s /* var s: FlatBuffer */;
val* var7 /* : String */;
var_base = p0;
var_signed = p1;
var1 = core___core__Int___digit_count(self, var_base);
var_l = var1;
var2 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = " ";
var5 = core__flat___NativeString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce = var3;
}
{
var6 = ((val*(*)(val* self, long p0))(var3->class->vft[COLOR_core__abstract_text__String___42d]))(var3, var_l); /* * on <var3:String>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__flat__FlatBuffer__from]))(var2, var6); /* from on <var2:FlatBuffer>*/
}
var_s = var2;
core__abstract_text___Int___fill_buffer(self, var_s, var_base, var_signed); /* Direct call abstract_text#Int#fill_buffer on <self:Int>*/
{
var7 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:FlatBuffer>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#Int#to_s for (self: Int): String */
val* core__flat___Int___core__abstract_text__Object__to_s(long self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
long var14 /* : Int */;
long var_nslen /* var nslen: Int */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var19 /* : Int */;
char* var20 /* : NativeString */;
char* var22 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
val* var31 /* : FlatString */;
{
{ /* Inline kernel#Int#== (self,0l) on <self:Int> */
var3 = self == 0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "0";
var6 = core__flat___NativeString___to_s_full(var5, 1l, 1l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (self,1l) on <self:Int> */
var9 = self == 1l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "1";
var13 = core__flat___NativeString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce10 = var11;
}
var = var11;
goto RET_LABEL;
} else {
}
var14 = core__abstract_text___Int___int_to_s_len(self);
var_nslen = var14;
var15 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var19 = var_nslen + 1l;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var15,var16) on <var15:NativeString> */
var22 = (char*)nit_alloc(var16);
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_ns = var20;
{
{ /* Inline native#NativeString#[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:NativeString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var30 = var_nslen + 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
core__abstract_text___Int___native_int_to_s(self, var_ns, var24); /* Direct call abstract_text#Int#native_int_to_s on <self:Int>*/
var31 = NEW_core__FlatString(&type_core__FlatString);
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var31->class->vft[COLOR_core__flat__FlatString__full]))(var31, var_ns, var_nslen, 0l, var_nslen); /* full on <var31:FlatString>*/
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#Int#to_s for (self: Object): String */
val* VIRTUAL_core__flat___Int___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = core__flat___Int___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method flat#Array#plain_to_s for (self: Array[nullable Object]): String */
val* core__flat___Array___core__abstract_text__Collection__plain_to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_l /* var l: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
val* var8 /* : nullable NativeArray[nullable Object] */;
val* var_its /* var its: NativeArray[nullable Object] */;
val* var9 /* : nullable Object */;
val* var11 /* : Object */;
val* var_first /* var first: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : NativeArray[String] */;
val* var_na /* var na: NativeArray[String] */;
long var_i /* var i: Int */;
long var_sl /* var sl: Int */;
long var_mypos /* var mypos: Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var29 /* : Object */;
val* var_itsi /* var itsi: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
val* var39 /* : String */;
val* var_tmp /* var tmp: String */;
long var40 /* : Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const struct type* type_struct;
const char* var_class_name52;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
char* var76 /* : NativeString */;
char* var78 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var_off /* var off: Int */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
val* var89 /* : Object */;
val* var_tmp90 /* var tmp: String */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
long var94 /* : Int */;
long var_tpl /* var tpl: Int */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
val* var105 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var106 /* : Iterator[nullable Object] */;
val* var_107 /* var : Iterator[FlatText] */;
short int var108 /* : Bool */;
val* var110 /* : nullable Object */;
val* var_j /* var j: FlatText */;
short int var111 /* : Bool */;
int cltype112;
int idtype113;
const char* var_class_name114;
val* var_s /* var s: FlatString */;
long var115 /* : Int */;
long var_slen /* var slen: Int */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
long var119 /* : Int */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name124;
long var125 /* : Int */;
long var126 /* : Int */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
const char* var_class_name131;
long var132 /* : Int */;
val* var134 /* : FlatString */;
var1 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var_l = var1;
{
{ /* Inline kernel#Int#== (var_l,0l) on <var_l:Int> */
var4 = var_l == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "";
var7 = core__flat___NativeString___to_s_full(var6, 0l, 0l);
var5 = var7;
varonce = var5;
}
var = var5;
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1365);
fatal_exit(1);
}
var_its = var8;
{
{ /* Inline array#NativeArray#[] (var_its,0l) on <var_its:NativeArray[nullable Object]> */
var11 = ((struct instance_core__NativeArray*)var_its)->values[0l];
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_first = var9;
{
{ /* Inline kernel#Int#== (var_l,1l) on <var_l:Int> */
var14 = var_l == 1l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
if (var_first == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))((((long)var_first&3)?class_info[((long)var_first&3)]:var_first->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_first, ((val*)NULL)); /* == on <var_first:nullable Object>*/
var15 = var16;
}
if (var15){
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "";
var20 = core__flat___NativeString___to_s_full(var19, 0l, 0l);
var18 = var20;
varonce17 = var18;
}
var = var18;
goto RET_LABEL;
} else {
{
var21 = ((val*(*)(val* self))((((long)var_first&3)?class_info[((long)var_first&3)]:var_first->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_first); /* to_s on <var_first:nullable Object(Object)>*/
}
var = var21;
goto RET_LABEL;
}
} else {
}
var22 = NEW_core__NativeArray(var_l, &type_core__NativeArray__core__String);
var_na = var22;
var_i = 0l;
var_sl = 0l;
var_mypos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var25 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var26 = var_i < var_l;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
{ /* Inline array#NativeArray#[] (var_its,var_i) on <var_its:NativeArray[nullable Object]> */
var29 = ((struct instance_core__NativeArray*)var_its)->values[var_i];
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_itsi = var27;
if (var_itsi == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
var31 = ((short int(*)(val* self, val* p0))((((long)var_itsi&3)?class_info[((long)var_itsi&3)]:var_itsi->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_itsi, ((val*)NULL)); /* == on <var_itsi:nullable Object>*/
var30 = var31;
}
if (var30){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var38 = var_i + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_i = var32;
goto BREAK_label;
} else {
}
{
var39 = ((val*(*)(val* self))((((long)var_itsi&3)?class_info[((long)var_itsi&3)]:var_itsi->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_itsi); /* to_s on <var_itsi:nullable Object(Object)>*/
}
var_tmp = var39;
{
var40 = ((long(*)(val* self))(var_tmp->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_tmp); /* bytelen on <var_tmp:String>*/
}
{
{ /* Inline kernel#Int#+ (var_sl,var40) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var43 = 1; /* easy <var40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var47 = var_sl + var40;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_sl = var41;
{
{ /* Inline array#NativeArray#[]= (var_na,var_mypos,var_tmp) on <var_na:NativeArray[String]> */
/* Covariant cast for argument 1 (item) <var_tmp:String> isa E */
/* <var_tmp:String> isa E */
type_struct = var_na->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype50 = type_struct->color;
idtype51 = type_struct->id;
if(cltype50 >= var_tmp->type->table_size) {
var49 = 0;
} else {
var49 = var_tmp->type->type_table[cltype50] == idtype51;
}
if (unlikely(!var49)) {
var_class_name52 = var_tmp == NULL ? "null" : var_tmp->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 988);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var_na)->values[var_mypos]=var_tmp;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var59 = var_i + 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_i = var53;
{
{ /* Inline kernel#Int#+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var66 = var_mypos + 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var_mypos = var60;
} else {
goto BREAK_label67;
}
BREAK_label: (void)0;
}
BREAK_label67: (void)0;
var68 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var71 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var75 = var_sl + 1l;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var68,var69) on <var68:NativeString> */
var78 = (char*)nit_alloc(var69);
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var_ns = var76;
{
{ /* Inline native#NativeString#[]= (var_ns,var_sl,((unsigned char)0x00)) on <var_ns:NativeString> */
var_ns[var_sl]=(unsigned char)((unsigned char)0x00);
RET_LABEL79:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var82 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var82)) {
var_class_name85 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var86 = var_i < var_mypos;
var80 = var86;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
if (var80){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var89 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var_tmp90 = var87;
/* <var_tmp90:String> isa FlatString */
cltype92 = type_core__FlatString.color;
idtype93 = type_core__FlatString.id;
if(cltype92 >= var_tmp90->type->table_size) {
var91 = 0;
} else {
var91 = var_tmp90->type->type_table[cltype92] == idtype93;
}
if (var91){
var94 = var_tmp90->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_tmp90:String(FlatString)> */
var_tpl = var94;
var95 = var_tmp90->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tmp90:String(FlatString)> */
var96 = var_tmp90->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tmp90:String(FlatString)> */
{
{ /* Inline native#NativeString#copy_to (var95,var_ns,var_tpl,var96,var_off) on <var95:NativeString> */
memmove(var_ns+var_off,var95+var96,var_tpl);
RET_LABEL97:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var100 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var104 = var_off + var_tpl;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var_off = var98;
} else {
{
var105 = ((val*(*)(val* self))(var_tmp90->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_tmp90); /* substrings on <var_tmp90:String>*/
}
var_ = var105;
{
var106 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_107 = var106;
for(;;) {
{
var108 = ((short int(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_107); /* is_ok on <var_107:Iterator[FlatText]>*/
}
if (var108){
} else {
goto BREAK_label109;
}
{
var110 = ((val*(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_107); /* item on <var_107:Iterator[FlatText]>*/
}
var_j = var110;
/* <var_j:FlatText> isa FlatString */
cltype112 = type_core__FlatString.color;
idtype113 = type_core__FlatString.id;
if(cltype112 >= var_j->type->table_size) {
var111 = 0;
} else {
var111 = var_j->type->type_table[cltype112] == idtype113;
}
if (unlikely(!var111)) {
var_class_name114 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name114);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1396);
fatal_exit(1);
}
var_s = var_j;
var115 = var_s->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_s:FlatString> */
var_slen = var115;
var116 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
var117 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:FlatString> */
{
{ /* Inline native#NativeString#copy_to (var116,var_ns,var_slen,var117,var_off) on <var116:NativeString> */
memmove(var_ns+var_off,var116+var117,var_slen);
RET_LABEL118:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var121 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var121)) {
var_class_name124 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var125 = var_off + var_slen;
var119 = var125;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
var_off = var119;
{
((void(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_107); /* next on <var_107:Iterator[FlatText]>*/
}
}
BREAK_label109: (void)0;
{
((void(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_107); /* finish on <var_107:Iterator[FlatText]>*/
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var128 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var128)) {
var_class_name131 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name131);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var132 = var_i + 1l;
var126 = var132;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
var_i = var126;
} else {
goto BREAK_label133;
}
}
BREAK_label133: (void)0;
var134 = NEW_core__FlatString(&type_core__FlatString);
{
((void(*)(val* self, char* p0, long p1, long p2))(var134->class->vft[COLOR_core__flat__FlatString__with_infos]))(var134, var_ns, var_sl, 0l); /* with_infos on <var134:FlatString>*/
}
var = var134;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#NativeArray#native_to_s for (self: NativeArray[nullable Object]): String */
val* core__flat___NativeArray___native_to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
long var2 /* : Int */;
long var4 /* : Int */;
long var_l /* var l: Int */;
val* var_na /* var na: NativeArray[String] */;
long var_i /* var i: Int */;
long var_sl /* var sl: Int */;
long var_mypos /* var mypos: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var13 /* : Object */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
char* var44 /* : NativeString */;
char* var46 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var_off /* var off: Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
val* var55 /* : nullable Object */;
val* var57 /* : Object */;
val* var_tmp /* var tmp: String */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
long var61 /* : Int */;
long var_tpl /* var tpl: Int */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
val* var72 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var73 /* : Iterator[nullable Object] */;
val* var_74 /* var : Iterator[FlatText] */;
short int var75 /* : Bool */;
val* var77 /* : nullable Object */;
val* var_j /* var j: FlatText */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
val* var_s /* var s: FlatString */;
long var82 /* : Int */;
long var_slen /* var slen: Int */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
long var86 /* : Int */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
long var92 /* : Int */;
long var93 /* : Int */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
const char* var_class_name98;
long var99 /* : Int */;
val* var101 /* : FlatString */;
/* <self:NativeArray[nullable Object]> isa NativeArray[String] */
cltype = type_core__NativeArray__core__String.color;
idtype = type_core__NativeArray__core__String.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1410);
fatal_exit(1);
}
{
{ /* Inline array#NativeArray#length (self) on <self:NativeArray[nullable Object](NativeArray[String])> */
var4 = ((struct instance_core__NativeArray*)self)->length;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_l = var2;
var_na = self;
var_i = 0l;
var_sl = 0l;
var_mypos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var7 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var10 = var_i < var_l;
var5 = var10;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var13 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var14 = ((long(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var11); /* bytelen on <var11:nullable Object(String)>*/
}
{
{ /* Inline kernel#Int#+ (var_sl,var14) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var21 = var_sl + var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_sl = var15;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var28 = var_i + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_i = var22;
{
{ /* Inline kernel#Int#+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var35 = var_mypos + 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_mypos = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var36 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var43 = var_sl + 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var36,var37) on <var36:NativeString> */
var46 = (char*)nit_alloc(var37);
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_ns = var44;
{
{ /* Inline native#NativeString#[]= (var_ns,var_sl,((unsigned char)0x00)) on <var_ns:NativeString> */
var_ns[var_sl]=(unsigned char)((unsigned char)0x00);
RET_LABEL47:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var50 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var54 = var_i < var_mypos;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var57 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_tmp = var55;
/* <var_tmp:String> isa FlatString */
cltype59 = type_core__FlatString.color;
idtype60 = type_core__FlatString.id;
if(cltype59 >= var_tmp->type->table_size) {
var58 = 0;
} else {
var58 = var_tmp->type->type_table[cltype59] == idtype60;
}
if (var58){
var61 = var_tmp->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_tmp:String(FlatString)> */
var_tpl = var61;
var62 = var_tmp->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tmp:String(FlatString)> */
var63 = var_tmp->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tmp:String(FlatString)> */
{
{ /* Inline native#NativeString#copy_to (var62,var_ns,var_tpl,var63,var_off) on <var62:NativeString> */
memmove(var_ns+var_off,var62+var63,var_tpl);
RET_LABEL64:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var67 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var71 = var_off + var_tpl;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var_off = var65;
} else {
{
var72 = ((val*(*)(val* self))(var_tmp->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_tmp); /* substrings on <var_tmp:String>*/
}
var_ = var72;
{
var73 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_74 = var73;
for(;;) {
{
var75 = ((short int(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_74); /* is_ok on <var_74:Iterator[FlatText]>*/
}
if (var75){
} else {
goto BREAK_label76;
}
{
var77 = ((val*(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_74); /* item on <var_74:Iterator[FlatText]>*/
}
var_j = var77;
/* <var_j:FlatText> isa FlatString */
cltype79 = type_core__FlatString.color;
idtype80 = type_core__FlatString.id;
if(cltype79 >= var_j->type->table_size) {
var78 = 0;
} else {
var78 = var_j->type->type_table[cltype79] == idtype80;
}
if (unlikely(!var78)) {
var_class_name81 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1433);
fatal_exit(1);
}
var_s = var_j;
var82 = var_s->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_s:FlatString> */
var_slen = var82;
var83 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
var84 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:FlatString> */
{
{ /* Inline native#NativeString#copy_to (var83,var_ns,var_slen,var84,var_off) on <var83:NativeString> */
memmove(var_ns+var_off,var83+var84,var_slen);
RET_LABEL85:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var88 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var92 = var_off + var_slen;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var_off = var86;
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_74); /* next on <var_74:Iterator[FlatText]>*/
}
}
BREAK_label76: (void)0;
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_74); /* finish on <var_74:Iterator[FlatText]>*/
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var95 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var95)) {
var_class_name98 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name98);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var99 = var_i + 1l;
var93 = var99;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
var_i = var93;
} else {
goto BREAK_label100;
}
}
BREAK_label100: (void)0;
var101 = NEW_core__FlatString(&type_core__FlatString);
{
((void(*)(val* self, char* p0, long p1, long p2))(var101->class->vft[COLOR_core__flat__FlatString__with_infos]))(var101, var_ns, var_sl, 0l); /* with_infos on <var101:FlatString>*/
}
var = var101;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#Map#join for (self: Map[nullable Object, nullable Object], String, String): String */
val* core__flat___Map___join(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_sep /* var sep: String */;
val* var_couple_sep /* var couple_sep: String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : Buffer */;
val* var6 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var7 /* : MapIterator[nullable Object, nullable Object] */;
val* var_i /* var i: MapIterator[nullable Object, nullable Object] */;
val* var8 /* : nullable Object */;
val* var_k /* var k: nullable Object */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var11 /* : NativeArray[String] */;
static val* varonce10;
val* var12 /* : Object */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : Object */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var27 /* : nullable Object */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
val* var30 /* : Object */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var36 /* : Object */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
var_sep = p0;
var_couple_sep = p1;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__is_empty]))(self); /* is_empty on <self:Map[nullable Object, nullable Object]>*/
}
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = core__flat___NativeString___to_s_full(var3, 0l, 0l);
var2 = var4;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
var5 = NEW_core__Buffer(&type_core__Buffer);
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__Buffer__new]))(var5); /* new on <var5:Buffer>*/
}
var_s = var6;
{
var7 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(self); /* iterator on <self:Map[nullable Object, nullable Object]>*/
}
var_i = var7;
{
var8 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var8;
{
var9 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_e = var9;
if (unlikely(varonce10==NULL)) {
var11 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
} else {
var11 = varonce10;
varonce10 = NULL;
}
if (var_k!=NULL) {
var12 = var_k;
} else {
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "<null>";
var16 = core__flat___NativeString___to_s_full(var15, 6l, 6l);
var14 = var16;
varonce13 = var14;
}
var12 = var14;
}
{
var17 = ((val*(*)(val* self))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var12); /* to_s on <var12:Object>*/
}
((struct instance_core__NativeArray*)var11)->values[0]=var17;
((struct instance_core__NativeArray*)var11)->values[1]=var_couple_sep;
if (var_e!=NULL) {
var18 = var_e;
} else {
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "<null>";
var22 = core__flat___NativeString___to_s_full(var21, 6l, 6l);
var20 = var22;
varonce19 = var20;
}
var18 = var20;
}
{
var23 = ((val*(*)(val* self))((((long)var18&3)?class_info[((long)var18&3)]:var18->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var18); /* to_s on <var18:Object>*/
}
((struct instance_core__NativeArray*)var11)->values[2]=var23;
{
var24 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce10 = var11;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var24); /* append on <var_s:Buffer>*/
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_i); /* next on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
for(;;) {
{
var25 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_i); /* is_ok on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
if (var25){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var_sep); /* append on <var_s:Buffer>*/
}
{
var26 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var26;
{
var27 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_e = var27;
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
} else {
var29 = varonce28;
varonce28 = NULL;
}
if (var_k!=NULL) {
var30 = var_k;
} else {
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "<null>";
var34 = core__flat___NativeString___to_s_full(var33, 6l, 6l);
var32 = var34;
varonce31 = var32;
}
var30 = var32;
}
{
var35 = ((val*(*)(val* self))((((long)var30&3)?class_info[((long)var30&3)]:var30->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var30); /* to_s on <var30:Object>*/
}
((struct instance_core__NativeArray*)var29)->values[0]=var35;
((struct instance_core__NativeArray*)var29)->values[1]=var_couple_sep;
if (var_e!=NULL) {
var36 = var_e;
} else {
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "<null>";
var40 = core__flat___NativeString___to_s_full(var39, 6l, 6l);
var38 = var40;
varonce37 = var38;
}
var36 = var38;
}
{
var41 = ((val*(*)(val* self))((((long)var36&3)?class_info[((long)var36&3)]:var36->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var36); /* to_s on <var36:Object>*/
}
((struct instance_core__NativeArray*)var29)->values[2]=var41;
{
var42 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var42); /* append on <var_s:Buffer>*/
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_i); /* next on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var43 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var43;
goto RET_LABEL;
RET_LABEL:;
return var;
}
