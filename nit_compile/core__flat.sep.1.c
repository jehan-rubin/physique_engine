#include "core__flat.sep.0.h"
/* method flat#FlatSubstringsIter#tgt for (self: FlatSubstringsIter): nullable FlatText */
val* core__flat___core__flat__FlatSubstringsIter___tgt(val* self) {
val* var /* : nullable FlatText */;
val* var1 /* : nullable FlatText */;
var1 = self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatSubstringsIter#tgt= for (self: FlatSubstringsIter, nullable FlatText) */
void core__flat___core__flat__FlatSubstringsIter___tgt_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val = p0; /* _tgt on <self:FlatSubstringsIter> */
RET_LABEL:;
}
/* method flat#FlatSubstringsIter#item for (self: FlatSubstringsIter): FlatText */
val* core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatText */;
short int var1 /* : Bool */;
val* var2 /* : nullable FlatText */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:FlatSubstringsIter>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 28);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatSubstringsIter__tgt]))(self); /* tgt on <self:FlatSubstringsIter>*/
}
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 29);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatSubstringsIter#is_ok for (self: FlatSubstringsIter): Bool */
short int core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable FlatText */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatSubstringsIter__tgt]))(self); /* tgt on <self:FlatSubstringsIter>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable FlatText>*/
var2 = var3;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatSubstringsIter#next for (self: FlatSubstringsIter) */
void core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__next(val* self) {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__flat__FlatSubstringsIter__tgt_61d]))(self, ((val*)NULL)); /* tgt= on <self:FlatSubstringsIter>*/
}
RET_LABEL:;
}
/* method flat#FlatSubstringsIter#init for (self: FlatSubstringsIter) */
void core__flat___core__flat__FlatSubstringsIter___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatSubstringsIter___core__kernel__Object__init]))(self); /* init on <self:FlatSubstringsIter>*/
}
RET_LABEL:;
}
/* method flat#FlatText#first_byte for (self: FlatText): Int */
long core__flat___FlatText___first_byte(val* self) {
long var /* : Int */;
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#last_byte for (self: FlatText): Int */
long core__flat___FlatText___last_byte(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var2 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatText> */
{
{ /* Inline kernel#Int#+ (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var1 + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var3 - 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#position for (self: FlatText): Int */
long core__flat___FlatText___position(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatText#position= for (self: FlatText, Int) */
void core__flat___FlatText___position_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatText___position].l = p0; /* _position on <self:FlatText> */
RET_LABEL:;
}
/* method flat#FlatText#bytepos for (self: FlatText): Int */
long core__flat___FlatText___bytepos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatText___bytepos].l; /* _bytepos on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatText#bytepos= for (self: FlatText, Int) */
void core__flat___FlatText___bytepos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatText___bytepos].l = p0; /* _bytepos on <self:FlatText> */
RET_LABEL:;
}
/* method flat#FlatText#char_to_byte_index for (self: FlatText, Int): Int */
long core__flat___FlatText___char_to_byte_index(val* self, long p0) {
long var /* : Int */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_dpos /* var dpos: Int */;
long var6 /* : Int */;
long var_b /* var b: Int */;
char* var7 /* : NativeString */;
char* var_its /* var its: NativeString */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
unsigned char var11 /* : Byte */;
unsigned char var13 /* : Byte */;
unsigned char var14 /* : Byte */;
unsigned char var16 /* : Byte */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
long var52 /* : Int */;
long var_ln /* var ln: Int */;
long var53 /* : Int */;
long var_pos /* var pos: Int */;
long var_delta_begin /* var delta_begin: Int */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var_delta_end /* var delta_end: Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
long var75 /* : Int */;
long var_delta_cache /* var delta_cache: Int */;
long var_min /* var min: Int */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
long var93 /* : Int */;
long var_ns_i /* var ns_i: Int */;
long var_my_i /* var my_i: Int */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
long var97 /* : Int */;
long var98 /* : Int */;
long var99 /* : Int */;
long var100 /* : Int */;
long var101 /* : Int */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
long var107 /* : Int */;
long var108 /* : Int */;
var_index = p0;
var1 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatText> */
{
{ /* Inline kernel#Int#- (var_index,var1) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = var_index - var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_dpos = var2;
var6 = self->attrs[COLOR_core__flat__FlatText___bytepos].l; /* _bytepos on <self:FlatText> */
var_b = var6;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var7;
{
{ /* Inline kernel#Int#== (var_dpos,1l) on <var_dpos:Int> */
var10 = var_dpos == 1l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline native#NativeString#[] (var_its,var_b) on <var_its:NativeString> */
var13 = (unsigned char)((int)var_its[var_b]);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline math#Byte#& (var11,((unsigned char)0x80)) on <var11:Byte> */
var16 = var11 & ((unsigned char)0x80);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var14,((unsigned char)0x00)) on <var14:Byte> */
var19 = var14 == ((unsigned char)0x00);
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline kernel#Int#+ (var_b,1l) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var26 = var_b + 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_b = var20;
} else {
var27 = core___core__NativeString___length_of_char_at(var_its, var_b);
{
{ /* Inline kernel#Int#+ (var_b,var27) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var34 = var_b + var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_b = var28;
}
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_b; /* _bytepos on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
var = var_b;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var37 = -1l;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_dpos,var35) on <var_dpos:Int> */
var40 = var_dpos == var35;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
{ /* Inline kernel#Int#- (var_b,1l) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var43 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var47 = var_b - 1l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var48 = core___core__NativeString___find_beginning_of_char_at(var_its, var41);
var_b = var48;
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_b; /* _bytepos on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
var = var_b;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_dpos,0l) on <var_dpos:Int> */
var51 = var_dpos == 0l;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
var = var_b;
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
var_ln = var52;
var53 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatText> */
var_pos = var53;
var_delta_begin = var_index;
{
{ /* Inline kernel#Int#- (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var60 = var_ln - 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var54,var_index) on <var54:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var63 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var67 = var54 - var_index;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_delta_end = var61;
{
{ /* Inline kernel#Int#- (var_pos,var_index) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var70 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var74 = var_pos - var_index;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var75 = core___core__Int___abs(var68);
var_delta_cache = var75;
var_min = var_delta_begin;
{
{ /* Inline kernel#Int#< (var_delta_cache,var_min) on <var_delta_cache:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var78 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var82 = var_delta_cache < var_min;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
var_min = var_delta_cache;
} else {
}
{
{ /* Inline kernel#Int#< (var_delta_end,var_min) on <var_delta_end:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var85 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var89 = var_delta_end < var_min;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
if (var83){
var_min = var_delta_end;
} else {
}
{
{ /* Inline kernel#Int#== (var_min,var_delta_cache) on <var_min:Int> */
var92 = var_min == var_delta_cache;
var90 = var92;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
if (var90){
var93 = self->attrs[COLOR_core__flat__FlatText___bytepos].l; /* _bytepos on <self:FlatText> */
var_ns_i = var93;
var_my_i = var_pos;
} else {
{
{ /* Inline kernel#Int#== (var_min,var_delta_begin) on <var_min:Int> */
var96 = var_min == var_delta_begin;
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
if (var94){
{
var97 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_ns_i = var97;
var_my_i = 0l;
} else {
{
var98 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatText>*/
}
var99 = core___core__NativeString___find_beginning_of_char_at(var_its, var98);
var_ns_i = var99;
var100 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
{
{ /* Inline kernel#Int#- (var100,1l) on <var100:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var103 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var107 = var100 - 1l;
var101 = var107;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
var_my_i = var101;
}
}
var108 = core___core__NativeString___char_to_byte_index_cached(var_its, var_index, var_my_i, var_ns_i);
var_ns_i = var108;
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_ns_i; /* _bytepos on <self:FlatText> */
var = var_ns_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#chars_to_html_escape for (self: FlatText): Int */
long core__flat___FlatText___chars_to_html_escape(val* self) {
long var /* : Int */;
char* var1 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var2 /* : Int */;
long var_max /* var max: Int */;
long var3 /* : Int */;
long var_pos /* var pos: Int */;
long var_endlen /* var endlen: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
unsigned char var8 /* : Byte */;
unsigned char var10 /* : Byte */;
unsigned char var_c /* var c: Byte */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
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
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatText>*/
}
var_max = var2;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_pos = var3;
var_endlen = 0l;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_pos,var_max) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var6 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var7 = var_pos <= var_max;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline native#NativeString#[] (var_its,var_pos) on <var_its:NativeString> */
var10 = (unsigned char)((int)var_its[var_pos]);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_c = var8;
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x3c)) on <var_c:Byte> */
var13 = var_c == ((unsigned char)0x3c);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline kernel#Int#+ (var_endlen,3l) on <var_endlen:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var16 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var20 = var_endlen + 3l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_endlen = var14;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x3e)) on <var_c:Byte> */
var23 = var_c == ((unsigned char)0x3e);
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline kernel#Int#+ (var_endlen,3l) on <var_endlen:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var26 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var30 = var_endlen + 3l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_endlen = var24;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x26)) on <var_c:Byte> */
var33 = var_c == ((unsigned char)0x26);
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline kernel#Int#+ (var_endlen,4l) on <var_endlen:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var36 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var40 = var_endlen + 4l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_endlen = var34;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x22)) on <var_c:Byte> */
var43 = var_c == ((unsigned char)0x22);
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline kernel#Int#+ (var_endlen,4l) on <var_endlen:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var46 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var50 = var_endlen + 4l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_endlen = var44;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x27)) on <var_c:Byte> */
var53 = var_c == ((unsigned char)0x27);
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
{ /* Inline kernel#Int#+ (var_endlen,4l) on <var_endlen:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var56 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var60 = var_endlen + 4l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_endlen = var54;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x2f)) on <var_c:Byte> */
var63 = var_c == ((unsigned char)0x2f);
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
{
{ /* Inline kernel#Int#+ (var_endlen,4l) on <var_endlen:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var66 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var70 = var_endlen + 4l;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var_endlen = var64;
} else {
}
}
}
}
}
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var73 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var77 = var_pos + 1l;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var_pos = var71;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_endlen;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#html_escape for (self: FlatText): String */
val* core__flat___FlatText___core__abstract_text__Text__html_escape(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_extra /* var extra: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : String */;
char* var6 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var7 /* : Int */;
long var_max /* var max: Int */;
long var8 /* : Int */;
long var_pos /* var pos: Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
long var_nlen /* var nlen: Int */;
char* var14 /* : NativeString */;
char* var15 /* : NativeString */;
char* var17 /* : NativeString */;
char* var_nits /* var nits: NativeString */;
long var_outpos /* var outpos: Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
unsigned char var25 /* : Byte */;
unsigned char var27 /* : Byte */;
unsigned char var_c /* var c: Byte */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
long var75 /* : Int */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
long var81 /* : Int */;
long var83 /* : Int */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
long var89 /* : Int */;
long var91 /* : Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
long var97 /* : Int */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
long var102 /* : Int */;
short int var104 /* : Bool */;
int cltype105;
int idtype106;
const char* var_class_name107;
long var108 /* : Int */;
long var110 /* : Int */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
long var116 /* : Int */;
long var118 /* : Int */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const char* var_class_name123;
long var124 /* : Int */;
long var126 /* : Int */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
const char* var_class_name131;
long var132 /* : Int */;
long var134 /* : Int */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
long var140 /* : Int */;
short int var141 /* : Bool */;
short int var143 /* : Bool */;
long var145 /* : Int */;
short int var147 /* : Bool */;
int cltype148;
int idtype149;
const char* var_class_name150;
long var151 /* : Int */;
long var153 /* : Int */;
short int var155 /* : Bool */;
int cltype156;
int idtype157;
const char* var_class_name158;
long var159 /* : Int */;
long var161 /* : Int */;
short int var163 /* : Bool */;
int cltype164;
int idtype165;
const char* var_class_name166;
long var167 /* : Int */;
long var169 /* : Int */;
short int var171 /* : Bool */;
int cltype172;
int idtype173;
const char* var_class_name174;
long var175 /* : Int */;
long var177 /* : Int */;
short int var179 /* : Bool */;
int cltype180;
int idtype181;
const char* var_class_name182;
long var183 /* : Int */;
short int var184 /* : Bool */;
short int var186 /* : Bool */;
long var188 /* : Int */;
short int var190 /* : Bool */;
int cltype191;
int idtype192;
const char* var_class_name193;
long var194 /* : Int */;
long var196 /* : Int */;
short int var198 /* : Bool */;
int cltype199;
int idtype200;
const char* var_class_name201;
long var202 /* : Int */;
long var204 /* : Int */;
short int var206 /* : Bool */;
int cltype207;
int idtype208;
const char* var_class_name209;
long var210 /* : Int */;
long var212 /* : Int */;
short int var214 /* : Bool */;
int cltype215;
int idtype216;
const char* var_class_name217;
long var218 /* : Int */;
long var220 /* : Int */;
short int var222 /* : Bool */;
int cltype223;
int idtype224;
const char* var_class_name225;
long var226 /* : Int */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
long var231 /* : Int */;
short int var233 /* : Bool */;
int cltype234;
int idtype235;
const char* var_class_name236;
long var237 /* : Int */;
long var239 /* : Int */;
short int var241 /* : Bool */;
int cltype242;
int idtype243;
const char* var_class_name244;
long var245 /* : Int */;
long var247 /* : Int */;
short int var249 /* : Bool */;
int cltype250;
int idtype251;
const char* var_class_name252;
long var253 /* : Int */;
long var255 /* : Int */;
short int var257 /* : Bool */;
int cltype258;
int idtype259;
const char* var_class_name260;
long var261 /* : Int */;
long var263 /* : Int */;
short int var265 /* : Bool */;
int cltype266;
int idtype267;
const char* var_class_name268;
long var269 /* : Int */;
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
val* var285 /* : FlatString */;
val* var_s /* var s: FlatString */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__chars_to_html_escape]))(self); /* chars_to_html_escape on <self:FlatText>*/
}
var_extra = var1;
{
{ /* Inline kernel#Int#== (var_extra,0l) on <var_extra:Int> */
var4 = var_extra == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:FlatText>*/
}
var = var5;
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var6;
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatText>*/
}
var_max = var7;
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_pos = var8;
var9 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatText> */
{
{ /* Inline kernel#Int#+ (var_extra,var9) on <var_extra:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var_extra + var9;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_nlen = var10;
var14 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var14,var_nlen) on <var14:NativeString> */
var17 = (char*)nit_alloc(var_nlen);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_nits = var15;
var_outpos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_pos,var_max) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var20 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var24 = var_pos <= var_max;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
{ /* Inline native#NativeString#[] (var_its,var_pos) on <var_its:NativeString> */
var27 = (unsigned char)((int)var_its[var_pos]);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_c = var25;
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x3c)) on <var_c:Byte> */
var30 = var_c == ((unsigned char)0x3c);
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
{ /* Inline native#NativeString#[]= (var_nits,var_outpos,((unsigned char)0x26)) on <var_nits:NativeString> */
var_nits[var_outpos]=(unsigned char)((unsigned char)0x26);
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var38 = var_outpos + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var32,((unsigned char)0x6c)) on <var_nits:NativeString> */
var_nits[var32]=(unsigned char)((unsigned char)0x6c);
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,2l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var42 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var46 = var_outpos + 2l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var40,((unsigned char)0x74)) on <var_nits:NativeString> */
var_nits[var40]=(unsigned char)((unsigned char)0x74);
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,3l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var50 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var54 = var_outpos + 3l;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var48,((unsigned char)0x3b)) on <var_nits:NativeString> */
var_nits[var48]=(unsigned char)((unsigned char)0x3b);
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,4l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var58 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var62 = var_outpos + 4l;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_outpos = var56;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x3e)) on <var_c:Byte> */
var65 = var_c == ((unsigned char)0x3e);
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
{
{ /* Inline native#NativeString#[]= (var_nits,var_outpos,((unsigned char)0x26)) on <var_nits:NativeString> */
var_nits[var_outpos]=(unsigned char)((unsigned char)0x26);
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var69 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var73 = var_outpos + 1l;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var67,((unsigned char)0x67)) on <var_nits:NativeString> */
var_nits[var67]=(unsigned char)((unsigned char)0x67);
RET_LABEL74:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,2l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var77 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var81 = var_outpos + 2l;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var75,((unsigned char)0x74)) on <var_nits:NativeString> */
var_nits[var75]=(unsigned char)((unsigned char)0x74);
RET_LABEL82:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,3l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var85 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var89 = var_outpos + 3l;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var83,((unsigned char)0x3b)) on <var_nits:NativeString> */
var_nits[var83]=(unsigned char)((unsigned char)0x3b);
RET_LABEL90:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,4l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var93 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var97 = var_outpos + 4l;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var_outpos = var91;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x26)) on <var_c:Byte> */
var100 = var_c == ((unsigned char)0x26);
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
if (var98){
{
{ /* Inline native#NativeString#[]= (var_nits,var_outpos,((unsigned char)0x26)) on <var_nits:NativeString> */
var_nits[var_outpos]=(unsigned char)((unsigned char)0x26);
RET_LABEL101:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var104 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var104)) {
var_class_name107 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name107);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var108 = var_outpos + 1l;
var102 = var108;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var102,((unsigned char)0x61)) on <var_nits:NativeString> */
var_nits[var102]=(unsigned char)((unsigned char)0x61);
RET_LABEL109:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,2l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var112 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var112)) {
var_class_name115 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var116 = var_outpos + 2l;
var110 = var116;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var110,((unsigned char)0x6d)) on <var_nits:NativeString> */
var_nits[var110]=(unsigned char)((unsigned char)0x6d);
RET_LABEL117:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,3l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var120 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var120)) {
var_class_name123 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name123);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var124 = var_outpos + 3l;
var118 = var124;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var118,((unsigned char)0x70)) on <var_nits:NativeString> */
var_nits[var118]=(unsigned char)((unsigned char)0x70);
RET_LABEL125:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,4l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var128 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var128)) {
var_class_name131 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name131);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var132 = var_outpos + 4l;
var126 = var132;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var126,((unsigned char)0x3b)) on <var_nits:NativeString> */
var_nits[var126]=(unsigned char)((unsigned char)0x3b);
RET_LABEL133:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,5l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var136 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var136)) {
var_class_name139 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var140 = var_outpos + 5l;
var134 = var140;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
var_outpos = var134;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x22)) on <var_c:Byte> */
var143 = var_c == ((unsigned char)0x22);
var141 = var143;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
if (var141){
{
{ /* Inline native#NativeString#[]= (var_nits,var_outpos,((unsigned char)0x26)) on <var_nits:NativeString> */
var_nits[var_outpos]=(unsigned char)((unsigned char)0x26);
RET_LABEL144:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var147 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var147)) {
var_class_name150 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name150);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var151 = var_outpos + 1l;
var145 = var151;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var145,((unsigned char)0x23)) on <var_nits:NativeString> */
var_nits[var145]=(unsigned char)((unsigned char)0x23);
RET_LABEL152:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,2l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var155 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var155)) {
var_class_name158 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name158);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var159 = var_outpos + 2l;
var153 = var159;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var153,((unsigned char)0x33)) on <var_nits:NativeString> */
var_nits[var153]=(unsigned char)((unsigned char)0x33);
RET_LABEL160:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,3l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var163 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var163)) {
var_class_name166 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name166);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var167 = var_outpos + 3l;
var161 = var167;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var161,((unsigned char)0x34)) on <var_nits:NativeString> */
var_nits[var161]=(unsigned char)((unsigned char)0x34);
RET_LABEL168:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,4l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var171 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var171)) {
var_class_name174 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name174);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var175 = var_outpos + 4l;
var169 = var175;
goto RET_LABEL170;
RET_LABEL170:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var169,((unsigned char)0x3b)) on <var_nits:NativeString> */
var_nits[var169]=(unsigned char)((unsigned char)0x3b);
RET_LABEL176:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,5l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var179 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var179)) {
var_class_name182 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name182);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var183 = var_outpos + 5l;
var177 = var183;
goto RET_LABEL178;
RET_LABEL178:(void)0;
}
}
var_outpos = var177;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x27)) on <var_c:Byte> */
var186 = var_c == ((unsigned char)0x27);
var184 = var186;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
}
if (var184){
{
{ /* Inline native#NativeString#[]= (var_nits,var_outpos,((unsigned char)0x26)) on <var_nits:NativeString> */
var_nits[var_outpos]=(unsigned char)((unsigned char)0x26);
RET_LABEL187:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var190 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var190)) {
var_class_name193 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name193);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var194 = var_outpos + 1l;
var188 = var194;
goto RET_LABEL189;
RET_LABEL189:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var188,((unsigned char)0x23)) on <var_nits:NativeString> */
var_nits[var188]=(unsigned char)((unsigned char)0x23);
RET_LABEL195:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,2l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var198 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var198)) {
var_class_name201 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name201);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var202 = var_outpos + 2l;
var196 = var202;
goto RET_LABEL197;
RET_LABEL197:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var196,((unsigned char)0x33)) on <var_nits:NativeString> */
var_nits[var196]=(unsigned char)((unsigned char)0x33);
RET_LABEL203:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,3l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var206 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var206)) {
var_class_name209 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name209);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var210 = var_outpos + 3l;
var204 = var210;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var204,((unsigned char)0x39)) on <var_nits:NativeString> */
var_nits[var204]=(unsigned char)((unsigned char)0x39);
RET_LABEL211:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,4l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var214 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var214)) {
var_class_name217 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name217);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var218 = var_outpos + 4l;
var212 = var218;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var212,((unsigned char)0x3b)) on <var_nits:NativeString> */
var_nits[var212]=(unsigned char)((unsigned char)0x3b);
RET_LABEL219:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,5l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var222 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var222)) {
var_class_name225 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name225);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var226 = var_outpos + 5l;
var220 = var226;
goto RET_LABEL221;
RET_LABEL221:(void)0;
}
}
var_outpos = var220;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x2f)) on <var_c:Byte> */
var229 = var_c == ((unsigned char)0x2f);
var227 = var229;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
if (var227){
{
{ /* Inline native#NativeString#[]= (var_nits,var_outpos,((unsigned char)0x26)) on <var_nits:NativeString> */
var_nits[var_outpos]=(unsigned char)((unsigned char)0x26);
RET_LABEL230:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var233 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var233)) {
var_class_name236 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name236);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var237 = var_outpos + 1l;
var231 = var237;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var231,((unsigned char)0x23)) on <var_nits:NativeString> */
var_nits[var231]=(unsigned char)((unsigned char)0x23);
RET_LABEL238:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,2l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var241 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var241)) {
var_class_name244 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name244);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var245 = var_outpos + 2l;
var239 = var245;
goto RET_LABEL240;
RET_LABEL240:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var239,((unsigned char)0x34)) on <var_nits:NativeString> */
var_nits[var239]=(unsigned char)((unsigned char)0x34);
RET_LABEL246:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,3l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var249 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var249)) {
var_class_name252 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name252);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var253 = var_outpos + 3l;
var247 = var253;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var247,((unsigned char)0x37)) on <var_nits:NativeString> */
var_nits[var247]=(unsigned char)((unsigned char)0x37);
RET_LABEL254:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,4l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var257 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var257)) {
var_class_name260 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name260);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var261 = var_outpos + 4l;
var255 = var261;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nits,var255,((unsigned char)0x3b)) on <var_nits:NativeString> */
var_nits[var255]=(unsigned char)((unsigned char)0x3b);
RET_LABEL262:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,5l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var265 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var265)) {
var_class_name268 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name268);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var269 = var_outpos + 5l;
var263 = var269;
goto RET_LABEL264;
RET_LABEL264:(void)0;
}
}
var_outpos = var263;
} else {
{
{ /* Inline native#NativeString#[]= (var_nits,var_outpos,var_c) on <var_nits:NativeString> */
var_nits[var_outpos]=(unsigned char)var_c;
RET_LABEL270:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var273 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var273)) {
var_class_name276 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name276);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var277 = var_outpos + 1l;
var271 = var277;
goto RET_LABEL272;
RET_LABEL272:(void)0;
}
}
var_outpos = var271;
}
}
}
}
}
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var280 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var280)) {
var_class_name283 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name283);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var284 = var_pos + 1l;
var278 = var284;
goto RET_LABEL279;
RET_LABEL279:(void)0;
}
}
var_pos = var278;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var285 = NEW_core__FlatString(&type_core__FlatString);
{
((void(*)(val* self, char* p0, long p1, long p2))(var285->class->vft[COLOR_core__flat__FlatString__with_infos]))(var285, var_nits, var_nlen, 0l); /* with_infos on <var285:FlatString>*/
}
var_s = var285;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#chars_to_escape_to_c for (self: FlatText): Int */
long core__flat___FlatText___chars_to_escape_to_c(val* self) {
long var /* : Int */;
char* var1 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var2 /* : Int */;
long var_max /* var max: Int */;
long var3 /* : Int */;
long var_pos /* var pos: Int */;
long var_req_esc /* var req_esc: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
unsigned char var8 /* : Byte */;
unsigned char var10 /* : Byte */;
unsigned char var_c /* var c: Byte */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
short int var67 /* : Bool */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
long var75 /* : Int */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
long var81 /* : Int */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatText>*/
}
var_max = var2;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_pos = var3;
var_req_esc = 0l;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_pos,var_max) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var6 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var7 = var_pos <= var_max;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline native#NativeString#[] (var_its,var_pos) on <var_its:NativeString> */
var10 = (unsigned char)((int)var_its[var_pos]);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_c = var8;
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x0a)) on <var_c:Byte> */
var13 = var_c == ((unsigned char)0x0a);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var20 = var_req_esc + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_req_esc = var14;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x09)) on <var_c:Byte> */
var23 = var_c == ((unsigned char)0x09);
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var30 = var_req_esc + 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_req_esc = var24;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x22)) on <var_c:Byte> */
var33 = var_c == ((unsigned char)0x22);
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var36 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var40 = var_req_esc + 1l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_req_esc = var34;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x27)) on <var_c:Byte> */
var43 = var_c == ((unsigned char)0x27);
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var50 = var_req_esc + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_req_esc = var44;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x5c)) on <var_c:Byte> */
var53 = var_c == ((unsigned char)0x5c);
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var60 = var_req_esc + 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_req_esc = var54;
} else {
{
{ /* Inline kernel#Byte#< (var_c,((unsigned char)0x20)) on <var_c:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x20):Byte> isa OTHER */
/* <((unsigned char)0x20):Byte> isa OTHER */
var63 = 1; /* easy <((unsigned char)0x20):Byte> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var67 = var_c < ((unsigned char)0x20);
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
{
{ /* Inline kernel#Int#+ (var_req_esc,3l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var70 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var74 = var_req_esc + 3l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_req_esc = var68;
} else {
}
}
}
}
}
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var77 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var81 = var_pos + 1l;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_pos = var75;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_req_esc;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#escape_to_c for (self: FlatText): String */
val* core__flat___FlatText___core__abstract_text__Text__escape_to_c(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_ln_extra /* var ln_extra: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : String */;
char* var6 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var7 /* : Int */;
long var_max /* var max: Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
long var_nlen /* var nlen: Int */;
char* var13 /* : NativeString */;
char* var14 /* : NativeString */;
char* var16 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
long var17 /* : Int */;
long var_pos /* var pos: Int */;
long var_opos /* var opos: Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
unsigned char var25 /* : Byte */;
unsigned char var27 /* : Byte */;
unsigned char var_c /* var c: Byte */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var78 /* : Int */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
long var84 /* : Int */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
long var89 /* : Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
long var95 /* : Int */;
long var97 /* : Int */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
const char* var_class_name102;
long var103 /* : Int */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
long var108 /* : Int */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
const char* var_class_name113;
long var114 /* : Int */;
long var116 /* : Int */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
long var122 /* : Int */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
const char* var_class_name128;
short int var129 /* : Bool */;
long var131 /* : Int */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name136;
long var137 /* : Int */;
long var139 /* : Int */;
short int var141 /* : Bool */;
int cltype142;
int idtype143;
const char* var_class_name144;
long var145 /* : Int */;
unsigned char var146 /* : Byte */;
unsigned char var148 /* : Byte */;
unsigned char var149 /* : Byte */;
unsigned char var151 /* : Byte */;
unsigned char var152 /* : Byte */;
short int var154 /* : Bool */;
int cltype155;
int idtype156;
const char* var_class_name157;
unsigned char var158 /* : Byte */;
long var160 /* : Int */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
const char* var_class_name165;
long var166 /* : Int */;
unsigned char var167 /* : Byte */;
unsigned char var169 /* : Byte */;
unsigned char var170 /* : Byte */;
short int var172 /* : Bool */;
int cltype173;
int idtype174;
const char* var_class_name175;
unsigned char var176 /* : Byte */;
long var178 /* : Int */;
short int var180 /* : Bool */;
int cltype181;
int idtype182;
const char* var_class_name183;
long var184 /* : Int */;
long var186 /* : Int */;
short int var188 /* : Bool */;
int cltype189;
int idtype190;
const char* var_class_name191;
long var192 /* : Int */;
long var193 /* : Int */;
short int var195 /* : Bool */;
int cltype196;
int idtype197;
const char* var_class_name198;
long var199 /* : Int */;
val* var200 /* : String */;
val* var201 /* : nullable Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__chars_to_escape_to_c]))(self); /* chars_to_escape_to_c on <self:FlatText>*/
}
var_ln_extra = var1;
{
{ /* Inline kernel#Int#== (var_ln_extra,0l) on <var_ln_extra:Int> */
var4 = var_ln_extra == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:FlatText>*/
}
var = var5;
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var6;
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatText>*/
}
var_max = var7;
var8 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatText> */
{
{ /* Inline kernel#Int#+ (var8,var_ln_extra) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var_ln_extra:Int> isa OTHER */
/* <var_ln_extra:Int> isa OTHER */
var11 = 1; /* easy <var_ln_extra:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var8 + var_ln_extra;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_nlen = var9;
var13 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var13,var_nlen) on <var13:NativeString> */
var16 = (char*)nit_alloc(var_nlen);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_nns = var14;
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_pos = var17;
var_opos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_pos,var_max) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var20 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var24 = var_pos <= var_max;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
{ /* Inline native#NativeString#[] (var_its,var_pos) on <var_its:NativeString> */
var27 = (unsigned char)((int)var_its[var_pos]);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_c = var25;
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x09)) on <var_c:Byte> */
var30 = var_c == ((unsigned char)0x09);
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var38 = var_opos + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var32,((unsigned char)0x74)) on <var_nns:NativeString> */
var_nns[var32]=(unsigned char)((unsigned char)0x74);
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var42 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var46 = var_opos + 2l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_opos = var40;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x0a)) on <var_c:Byte> */
var49 = var_c == ((unsigned char)0x0a);
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL50:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var53 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var57 = var_opos + 1l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var51,((unsigned char)0x6e)) on <var_nns:NativeString> */
var_nns[var51]=(unsigned char)((unsigned char)0x6e);
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var61 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var65 = var_opos + 2l;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_opos = var59;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x22)) on <var_c:Byte> */
var68 = var_c == ((unsigned char)0x22);
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var76 = var_opos + 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var70,((unsigned char)0x22)) on <var_nns:NativeString> */
var_nns[var70]=(unsigned char)((unsigned char)0x22);
RET_LABEL77:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var80 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var84 = var_opos + 2l;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var_opos = var78;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x27)) on <var_c:Byte> */
var87 = var_c == ((unsigned char)0x27);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
if (var85){
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL88:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var91 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var95 = var_opos + 1l;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var89,((unsigned char)0x27)) on <var_nns:NativeString> */
var_nns[var89]=(unsigned char)((unsigned char)0x27);
RET_LABEL96:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var99 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var99)) {
var_class_name102 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name102);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var103 = var_opos + 2l;
var97 = var103;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var_opos = var97;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x5c)) on <var_c:Byte> */
var106 = var_c == ((unsigned char)0x5c);
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
if (var104){
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL107:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var110 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var110)) {
var_class_name113 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name113);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var114 = var_opos + 1l;
var108 = var114;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var108,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var108]=(unsigned char)((unsigned char)0x5c);
RET_LABEL115:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var118 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var122 = var_opos + 2l;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
var_opos = var116;
} else {
{
{ /* Inline kernel#Byte#< (var_c,((unsigned char)0x20)) on <var_c:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x20):Byte> isa OTHER */
/* <((unsigned char)0x20):Byte> isa OTHER */
var125 = 1; /* easy <((unsigned char)0x20):Byte> isa OTHER*/
if (unlikely(!var125)) {
var_class_name128 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name128);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var129 = var_c < ((unsigned char)0x20);
var123 = var129;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
if (var123){
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL130:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var133 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name136 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var137 = var_opos + 1l;
var131 = var137;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var131,((unsigned char)0x30)) on <var_nns:NativeString> */
var_nns[var131]=(unsigned char)((unsigned char)0x30);
RET_LABEL138:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var141 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var141)) {
var_class_name144 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name144);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var145 = var_opos + 2l;
var139 = var145;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
}
{
{ /* Inline math#Byte#& (var_c,((unsigned char)0x38)) on <var_c:Byte> */
var148 = var_c & ((unsigned char)0x38);
var146 = var148;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline kernel#Byte#>> (var146,3l) on <var146:Byte> */
var151 = var146 >> 3l;
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
{
{ /* Inline kernel#Byte#+ (var149,((unsigned char)0x30)) on <var149:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x30):Byte> isa OTHER */
/* <((unsigned char)0x30):Byte> isa OTHER */
var154 = 1; /* easy <((unsigned char)0x30):Byte> isa OTHER*/
if (unlikely(!var154)) {
var_class_name157 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name157);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 622);
fatal_exit(1);
}
var158 = var149 + ((unsigned char)0x30);
var152 = var158;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var139,var152) on <var_nns:NativeString> */
var_nns[var139]=(unsigned char)var152;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,3l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var162 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var162)) {
var_class_name165 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name165);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var166 = var_opos + 3l;
var160 = var166;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
{
{ /* Inline math#Byte#& (var_c,((unsigned char)0x07)) on <var_c:Byte> */
var169 = var_c & ((unsigned char)0x07);
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline kernel#Byte#+ (var167,((unsigned char)0x30)) on <var167:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x30):Byte> isa OTHER */
/* <((unsigned char)0x30):Byte> isa OTHER */
var172 = 1; /* easy <((unsigned char)0x30):Byte> isa OTHER*/
if (unlikely(!var172)) {
var_class_name175 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name175);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 622);
fatal_exit(1);
}
var176 = var167 + ((unsigned char)0x30);
var170 = var176;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_nns,var160,var170) on <var_nns:NativeString> */
var_nns[var160]=(unsigned char)var170;
RET_LABEL177:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,4l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var180 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var180)) {
var_class_name183 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name183);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var184 = var_opos + 4l;
var178 = var184;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
var_opos = var178;
} else {
{
{ /* Inline native#NativeString#[]= (var_nns,var_opos,var_c) on <var_nns:NativeString> */
var_nns[var_opos]=(unsigned char)var_c;
RET_LABEL185:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var188 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var188)) {
var_class_name191 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name191);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var192 = var_opos + 1l;
var186 = var192;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
}
var_opos = var186;
}
}
}
}
}
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var195 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var195)) {
var_class_name198 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name198);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var199 = var_pos + 1l;
var193 = var199;
goto RET_LABEL194;
RET_LABEL194:(void)0;
}
}
var_pos = var193;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var201 = (val*)(var_nlen<<2|1);
var200 = core__flat___NativeString___to_s_unsafe(var_nns, var201);
var = var200;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#[] for (self: FlatText, Int): Char */
uint32_t core__flat___FlatText___core__abstract_text__Text___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var_len /* var len: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_dpos /* var dpos: Int */;
long var7 /* : Int */;
long var_b /* var b: Int */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
char* var26 /* : NativeString */;
char* var_its /* var its: NativeString */;
unsigned char var27 /* : Byte */;
unsigned char var29 /* : Byte */;
unsigned char var_c /* var c: Byte */;
unsigned char var30 /* : Byte */;
unsigned char var32 /* : Byte */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
short int var43 /* : Bool */;
long var44 /* : Int */;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var_50 /* var : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
char* var58 /* : NativeString */;
char* var_its59 /* var its: NativeString */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
unsigned char var67 /* : Byte */;
unsigned char var69 /* : Byte */;
unsigned char var_c70 /* var c: Byte */;
unsigned char var71 /* : Byte */;
unsigned char var73 /* : Byte */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
uint32_t var84 /* : Char */;
uint32_t var86 /* : Char */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
char* var90 /* : NativeString */;
char* var_its91 /* var its: NativeString */;
unsigned char var92 /* : Byte */;
unsigned char var94 /* : Byte */;
unsigned char var_c95 /* var c: Byte */;
unsigned char var96 /* : Byte */;
unsigned char var98 /* : Byte */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
uint32_t var102 /* : Char */;
uint32_t var104 /* : Char */;
char* var105 /* : NativeString */;
uint32_t var106 /* : Char */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
const char* var_class_name113;
short int var114 /* : Bool */;
short int var_115 /* var : Bool */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
short int var122 /* : Bool */;
uint32_t var123 /* : Char */;
var_index = p0;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
var_len = var1;
var2 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatText> */
{
{ /* Inline kernel#Int#- (var_index,var2) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var_index - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_dpos = var3;
var7 = self->attrs[COLOR_core__flat__FlatText___bytepos].l; /* _bytepos on <self:FlatText> */
var_b = var7;
{
{ /* Inline kernel#Int#== (var_dpos,1l) on <var_dpos:Int> */
var11 = var_dpos == 1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ = var9;
if (var9){
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var_len - 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_index,var12) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var21 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var25 = var_index < var12;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var8 = var19;
} else {
var8 = var_;
}
if (var8){
var26 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var26;
{
{ /* Inline native#NativeString#[] (var_its,var_b) on <var_its:NativeString> */
var29 = (unsigned char)((int)var_its[var_b]);
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_c = var27;
{
{ /* Inline math#Byte#& (var_c,((unsigned char)0x80)) on <var_c:Byte> */
var32 = var_c & ((unsigned char)0x80);
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var30,((unsigned char)0x00)) on <var30:Byte> */
var35 = var30 == ((unsigned char)0x00);
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
{ /* Inline kernel#Int#+ (var_b,1l) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var42 = var_b + 1l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_b = var36;
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_b; /* _bytepos on <self:FlatText> */
var_dpos = 0l;
} else {
}
} else {
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var46 = -1l;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_dpos,var44) on <var_dpos:Int> */
var49 = var_dpos == var44;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_50 = var47;
if (var47){
{
{ /* Inline kernel#Int#> (var_index,1l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var53 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var57 = var_index > 1l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var43 = var51;
} else {
var43 = var_50;
}
if (var43){
var58 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its59 = var58;
{
{ /* Inline kernel#Int#- (var_b,1l) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var66 = var_b - 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var_its59,var60) on <var_its59:NativeString> */
var69 = (unsigned char)((int)var_its59[var60]);
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_c70 = var67;
{
{ /* Inline math#Byte#& (var_c70,((unsigned char)0x80)) on <var_c70:Byte> */
var73 = var_c70 & ((unsigned char)0x80);
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var71,((unsigned char)0x00)) on <var71:Byte> */
var76 = var71 == ((unsigned char)0x00);
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
if (var74){
{
{ /* Inline kernel#Int#- (var_b,1l) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var79 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var83 = var_b - 1l;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_b = var77;
var_dpos = 0l;
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_b; /* _bytepos on <self:FlatText> */
{
{ /* Inline kernel#Byte#ascii (var_c70) on <var_c70:Byte> */
var86 = (uint32_t)var_c70;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var = var84;
goto RET_LABEL;
} else {
}
} else {
}
}
{
{ /* Inline kernel#Int#== (var_dpos,0l) on <var_dpos:Int> */
var89 = var_dpos == 0l;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
if (var87){
var90 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its91 = var90;
{
{ /* Inline native#NativeString#[] (var_its91,var_b) on <var_its91:NativeString> */
var94 = (unsigned char)((int)var_its91[var_b]);
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var_c95 = var92;
{
{ /* Inline math#Byte#& (var_c95,((unsigned char)0x80)) on <var_c95:Byte> */
var98 = var_c95 & ((unsigned char)0x80);
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var96,((unsigned char)0x00)) on <var96:Byte> */
var101 = var96 == ((unsigned char)0x00);
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
if (var99){
{
{ /* Inline kernel#Byte#ascii (var_c95) on <var_c95:Byte> */
var104 = (uint32_t)var_c95;
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var = var102;
goto RET_LABEL;
} else {
}
{
var105 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__FlatText__items]))(self); /* items on <self:FlatText>*/
}
var106 = core___core__NativeString___char_at(var105, var_b);
var = var106;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var110 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var110)) {
var_class_name113 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name113);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var114 = var_index >= 0l;
var108 = var114;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
var_115 = var108;
if (var108){
{
{ /* Inline kernel#Int#< (var_index,var_len) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var118 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var122 = var_index < var_len;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
var107 = var116;
} else {
var107 = var_115;
}
if (unlikely(!var107)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 341);
fatal_exit(1);
}
{
var123 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__fetch_char_at]))(self, var_index); /* fetch_char_at on <self:FlatText>*/
}
var = var123;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#fetch_char_at for (self: FlatText, Int): Char */
uint32_t core__flat___FlatText___fetch_char_at(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var_i /* var i: Int */;
char* var2 /* : NativeString */;
char* var_items /* var items: NativeString */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
unsigned char var_b /* var b: Byte */;
unsigned char var6 /* : Byte */;
unsigned char var8 /* : Byte */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
uint32_t var12 /* : Char */;
uint32_t var14 /* : Char */;
uint32_t var15 /* : Char */;
var_index = p0;
{
var1 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var_index); /* char_to_byte_index on <self:FlatText>*/
}
var_i = var1;
var2 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_items = var2;
{
{ /* Inline native#NativeString#[] (var_items,var_i) on <var_items:NativeString> */
var5 = (unsigned char)((int)var_items[var_i]);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_b = var3;
{
{ /* Inline math#Byte#& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var8 = var_b & ((unsigned char)0x80);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var6,((unsigned char)0x00)) on <var6:Byte> */
var11 = var6 == ((unsigned char)0x00);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline kernel#Byte#ascii (var_b) on <var_b:Byte> */
var14 = (uint32_t)var_b;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var = var12;
goto RET_LABEL;
} else {
}
var15 = core___core__NativeString___char_at(var_items, var_i);
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#to_hex for (self: FlatText, nullable Int, nullable Int): Int */
long core__flat___FlatText___core__abstract_text__Text__to_hex(val* self, val* p0, val* p1) {
long var /* : Int */;
val* var_pos /* var pos: nullable Int */;
val* var_ln /* var ln: nullable Int */;
long var_res /* var res: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
long var15 /* : Int */;
val* var16 /* : nullable Int */;
long var17 /* : Int */;
long var18 /* : Int */;
val* var19 /* : nullable Int */;
char* var20 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
long var_max /* var max: Int */;
long var30 /* : Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var40 /* : Int */;
unsigned char var41 /* : Byte */;
unsigned char var43 /* : Byte */;
uint32_t var44 /* : Char */;
uint32_t var46 /* : Char */;
long var47 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
long var55 /* : Int */;
var_pos = p0;
var_ln = p1;
var_res = 0l;
if (var_pos == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_pos,((val*)NULL)) on <var_pos:nullable Int> */
var4 = 0; /* incompatible types Int vs. null; cannot be NULL */
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
var5 = (val*)(0l<<2|1);
var_pos = var5;
} else {
}
if (var_ln == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_ln,((val*)NULL)) on <var_ln:nullable Int> */
var9 = 0; /* incompatible types Int vs. null; cannot be NULL */
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:FlatText>*/
}
{
{ /* Inline kernel#Int#- (var10,var_pos) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var_pos:nullable Int(Int)> isa OTHER */
/* <var_pos:nullable Int(Int)> isa OTHER */
var13 = 1; /* easy <var_pos:nullable Int(Int)> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = var_pos == NULL ? "null" : (((long)var_pos&3)?type_info[((long)var_pos&3)]:var_pos->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = (long)(var_pos)>>2;
var15 = var10 - var14;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var16 = (val*)(var11<<2|1);
var_ln = var16;
} else {
}
{
var17 = (long)(var_pos)>>2;
var18 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var17); /* char_to_byte_index on <self:FlatText>*/
}
var19 = (val*)(var18<<2|1);
var_pos = var19;
var20 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var20;
{
{ /* Inline kernel#Int#+ (var_pos,var_ln) on <var_pos:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <var_ln:nullable Int(Int)> isa OTHER */
/* <var_ln:nullable Int(Int)> isa OTHER */
var23 = 1; /* easy <var_ln:nullable Int(Int)> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = var_ln == NULL ? "null" : (((long)var_ln&3)?type_info[((long)var_ln&3)]:var_ln->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var27 = (long)(var_pos)>>2;
var28 = (long)(var_ln)>>2;
var29 = var27 + var28;
var21 = var29;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_max = var21;
var30 = (long)(var_pos)>>2;
var_i = var30;
var_ = var_max;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var33 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var37 = var_i < var_;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel#Int#<< (var_res,4l) on <var_res:Int> */
var40 = var_res << 4l;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_res = var38;
{
{ /* Inline native#NativeString#[] (var_its,var_i) on <var_its:NativeString> */
var43 = (unsigned char)((int)var_its[var_i]);
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline kernel#Byte#ascii (var41) on <var41:Byte> */
var46 = (uint32_t)var41;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var47 = core__abstract_text___Char___from_hex(var44);
{
{ /* Inline kernel#Int#+ (var_res,var47) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var54 = var_res + var47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_res = var48;
var55 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var55;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#first_byte for (self: FlatString): Int */
long core___core__FlatString___FlatText__first_byte(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatString#first_byte= for (self: FlatString, Int) */
void core___core__FlatString___first_byte_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatString___first_byte].l = p0; /* _first_byte on <self:FlatString> */
RET_LABEL:;
}
/* method flat#FlatString#chars for (self: FlatString): SequenceRead[Char] */
val* core___core__FlatString___core__abstract_text__Text__chars(val* self) {
val* var /* : SequenceRead[Char] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : FlatStringCharView */;
var1 = self->attrs[COLOR_core__flat__FlatString___chars].val != NULL; /* _chars on <self:FlatString> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__flat__FlatString___chars].val; /* _chars on <self:FlatString> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 382);
fatal_exit(1);
}
} else {
var3 = NEW_core__flat__FlatStringCharView(&type_core__flat__FlatStringCharView);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_text__StringCharView__target_61d]))(var3, self); /* target= on <var3:FlatStringCharView>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:FlatStringCharView>*/
}
self->attrs[COLOR_core__flat__FlatString___chars].val = var3; /* _chars on <self:FlatString> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatString#chars= for (self: FlatString, SequenceRead[Char]) */
void core___core__FlatString___chars_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatString___chars].val = p0; /* _chars on <self:FlatString> */
RET_LABEL:;
}
/* method flat#FlatString#bytes for (self: FlatString): SequenceRead[Byte] */
val* core___core__FlatString___core__abstract_text__Text__bytes(val* self) {
val* var /* : SequenceRead[Byte] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Byte] */;
val* var3 /* : FlatStringByteView */;
var1 = self->attrs[COLOR_core__flat__FlatString___bytes].val != NULL; /* _bytes on <self:FlatString> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__flat__FlatString___bytes].val; /* _bytes on <self:FlatString> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 384);
fatal_exit(1);
}
} else {
var3 = NEW_core__flat__FlatStringByteView(&type_core__flat__FlatStringByteView);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_text__StringByteView__target_61d]))(var3, self); /* target= on <var3:FlatStringByteView>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:FlatStringByteView>*/
}
self->attrs[COLOR_core__flat__FlatString___bytes].val = var3; /* _bytes on <self:FlatString> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatString#bytes= for (self: FlatString, SequenceRead[Byte]) */
void core___core__FlatString___bytes_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatString___bytes].val = p0; /* _bytes on <self:FlatString> */
RET_LABEL:;
}
/* method flat#FlatString#to_cstring for (self: FlatString): NativeString */
char* core___core__FlatString___core__abstract_text__Text__to_cstring(val* self) {
char* var /* : NativeString */;
short int var1 /* : Bool */;
char* var2 /* : NativeString */;
char* var3 /* : NativeString */;
long var5 /* : Int */;
long var_blen /* var blen: Int */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
char* var11 /* : NativeString */;
char* var13 /* : NativeString */;
char* var_new_items /* var new_items: NativeString */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatString__lazy_32d_to_cstring].s; /* lazy _to_cstring on <self:FlatString> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__flat__FlatString___to_cstring].str; /* _to_cstring on <self:FlatString> */
} else {
{
var5 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
var_blen = var5;
var6 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_blen,1l) on <var_blen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var10 = var_blen + 1l;
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
var_new_items = var11;
var14 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var15 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
{
{ /* Inline native#NativeString#copy_to (var14,var_new_items,var_blen,var15,0l) on <var14:NativeString> */
memmove(var_new_items+0l,var14+var15,var_blen);
RET_LABEL16:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_new_items,var_blen,((unsigned char)0x00)) on <var_new_items:NativeString> */
var_new_items[var_blen]=(unsigned char)((unsigned char)0x00);
RET_LABEL17:(void)0;
}
}
var3 = var_new_items;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__flat__FlatString___to_cstring].str = var3; /* _to_cstring on <self:FlatString> */
var2 = var3;
self->attrs[COLOR_core__flat__FlatString__lazy_32d_to_cstring].s = 1; /* lazy _to_cstring on <self:FlatString> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatString#to_cstring= for (self: FlatString, NativeString) */
void core___core__FlatString___to_cstring_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatString___to_cstring].str = p0; /* _to_cstring on <self:FlatString> */
self->attrs[COLOR_core__flat__FlatString__lazy_32d_to_cstring].s = 1; /* lazy _to_cstring on <self:FlatString> */
RET_LABEL:;
}
/* method flat#FlatString#reversed for (self: FlatString): String */
val* core___core__FlatString___core__abstract_text__String__reversed(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_b /* var b: FlatBuffer */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var_i /* var i: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
uint32_t var22 /* : Char */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
val* var30 /* : String */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
val* var_s /* var s: FlatString */;
long var35 /* : Int */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
var2 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
{
{ /* Inline kernel#Int#+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var2 + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBuffer__with_capacity]))(var1, var3); /* with_capacity on <var1:FlatBuffer>*/
}
var_b = var1;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
{
{ /* Inline kernel#Int#- (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var7 - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_i = var8;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var21 = var_i >= 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var22 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__fetch_char_at]))(self, var_i); /* fetch_char_at on <self:FlatString>*/
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var22); /* add on <var_b:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var25 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var29 = var_i - 1l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_i = var23;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var30 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:FlatBuffer>*/
}
/* <var30:String> isa FlatString */
cltype32 = type_core__FlatString.color;
idtype33 = type_core__FlatString.id;
if(cltype32 >= var30->type->table_size) {
var31 = 0;
} else {
var31 = var30->type->type_table[cltype32] == idtype33;
}
if (unlikely(!var31)) {
var_class_name34 = var30 == NULL ? "null" : var30->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 401);
fatal_exit(1);
}
var_s = var30;
var35 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_s->attrs[COLOR_core__abstract_text__FlatText___length].l = var35; /* _length on <var_s:FlatString> */
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#fast_cstring for (self: FlatString): NativeString */
char* core___core__FlatString___core__abstract_text__FlatText__fast_cstring(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
char* var3 /* : NativeString */;
char* var5 /* : NativeString */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var2 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
{
{ /* Inline native#NativeString#fast_cstring (var1,var2) on <var1:NativeString> */
var5 = var1 + var2;
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
/* method flat#FlatString#substring_from for (self: FlatString, Int): String */
val* core___core__FlatString___core__abstract_text__Text__substring_from(val* self, long p0) {
val* var /* : String */;
long var_from /* var from: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Text */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var_c /* var c: Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var_st /* var st: Int */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
long var_fln /* var fln: Int */;
val* var31 /* : FlatString */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
var_from = p0;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
{
{ /* Inline kernel#Int#>= (var_from,var1) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var5 = var_from >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__empty]))(self); /* empty on <self:FlatString>*/
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#<= (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var13 = var_from <= 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = self;
goto RET_LABEL;
} else {
}
{
var14 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var_from); /* char_to_byte_index on <self:FlatString>*/
}
var_c = var14;
var15 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
{
{ /* Inline kernel#Int#- (var_c,var15) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_c - var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_st = var16;
{
var23 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__bytelen]))(self); /* bytelen on <self:FlatString>*/
}
{
{ /* Inline kernel#Int#- (var23,var_st) on <var23:Int> */
/* Covariant cast for argument 0 (i) <var_st:Int> isa OTHER */
/* <var_st:Int> isa OTHER */
var26 = 1; /* easy <var_st:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var30 = var23 - var_st;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_fln = var24;
var31 = NEW_core__FlatString(&type_core__FlatString);
{
var32 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__FlatText__items]))(self); /* items on <self:FlatString>*/
}
var33 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
{
{ /* Inline kernel#Int#- (var33,var_from) on <var33:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var36 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var40 = var33 - var_from;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var31->class->vft[COLOR_core__flat__FlatString__full]))(var31, var32, var_fln, var_c, var34); /* full on <var31:FlatString>*/
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#substring for (self: FlatString, Int, Int): String */
val* core___core__FlatString___core__abstract_text__Text__substring(val* self, long p0, long p1) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : String */;
long var33 /* : Int */;
long var_ln /* var ln: Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
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
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : String */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
long var_end_index /* var end_index: Int */;
val* var80 /* : String */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var4 = var_count <= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
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
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var10 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var14 = var_from < 0l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var17 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var21 = var_count + var_from;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_count = var15;
{
{ /* Inline kernel#Int#< (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var24 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var28 = var_count < 0l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "";
var32 = core__flat___NativeString___to_s_full(var31, 0l, 0l);
var30 = var32;
varonce29 = var30;
}
var = var30;
goto RET_LABEL;
} else {
}
var_from = 0l;
} else {
}
var33 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_ln = var33;
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var36 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var40 = var_count + var_from;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var34,var_ln) on <var34:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var43 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var47 = var34 > var_ln;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline kernel#Int#- (var_ln,var_from) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var50 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var54 = var_ln - var_from;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_count = var48;
} else {
}
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var57 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var61 = var_count <= 0l;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "";
var65 = core__flat___NativeString___to_s_full(var64, 0l, 0l);
var63 = var65;
varonce62 = var63;
}
var = var63;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var68 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var72 = var_from + var_count;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var66,1l) on <var66:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var75 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var79 = var66 - 1l;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var_end_index = var73;
{
var80 = ((val*(*)(val* self, long p0, long p1, long p2))(self->class->vft[COLOR_core__flat__FlatString__substring_impl]))(self, var_from, var_count, var_end_index); /* substring_impl on <self:FlatString>*/
}
var = var80;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#substring_impl for (self: FlatString, Int, Int, Int): String */
val* core___core__FlatString___substring_impl(val* self, long p0, long p1, long p2) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
long var_end_index /* var end_index: Int */;
long var1 /* : Int */;
long var_cache /* var cache: Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var6 /* : Int */;
long var_dfrom /* var dfrom: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
long var_dend /* var dend: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var_bytefrom /* var bytefrom: Int */;
long var23 /* : Int */;
long var_byteto /* var byteto: Int */;
long var24 /* : Int */;
long var25 /* : Int */;
char* var26 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
val* var42 /* : FlatString */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
val* var_s /* var s: FlatString */;
var_from = p0;
var_count = p1;
var_end_index = p2;
var1 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatString> */
var_cache = var1;
{
{ /* Inline kernel#Int#- (var_cache,var_from) on <var_cache:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var4 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = var_cache - var_from;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var6 = core___core__Int___abs(var2);
var_dfrom = var6;
{
{ /* Inline kernel#Int#- (var_end_index,var_from) on <var_end_index:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var9 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var_end_index - var_from;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var14 = core___core__Int___abs(var7);
var_dend = var14;
{
{ /* Inline kernel#Int#< (var_dfrom,var_dend) on <var_dfrom:Int> */
/* Covariant cast for argument 0 (i) <var_dend:Int> isa OTHER */
/* <var_dend:Int> isa OTHER */
var17 = 1; /* easy <var_dend:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var21 = var_dfrom < var_dend;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var22 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var_from); /* char_to_byte_index on <self:FlatString>*/
}
var_bytefrom = var22;
{
var23 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var_end_index); /* char_to_byte_index on <self:FlatString>*/
}
var_byteto = var23;
} else {
{
var24 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var_end_index); /* char_to_byte_index on <self:FlatString>*/
}
var_byteto = var24;
{
var25 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var_from); /* char_to_byte_index on <self:FlatString>*/
}
var_bytefrom = var25;
}
var26 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var26;
var27 = core___core__NativeString___length_of_char_at(var_its, var_byteto);
{
{ /* Inline kernel#Int#- (var27,1l) on <var27:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var34 = var27 - 1l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_byteto,var28) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var37 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var41 = var_byteto + var28;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_byteto = var35;
var42 = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline kernel#Int#- (var_byteto,var_bytefrom) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var_bytefrom:Int> isa OTHER */
/* <var_bytefrom:Int> isa OTHER */
var45 = 1; /* easy <var_bytefrom:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var49 = var_byteto - var_bytefrom;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var52 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var56 = var43 + 1l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var42->class->vft[COLOR_core__flat__FlatString__full]))(var42, var_its, var50, var_bytefrom, var_count); /* full on <var42:FlatString>*/
}
var_s = var42;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#empty for (self: FlatString): String */
val* core___core__FlatString___core__abstract_text__Text__empty(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = core__flat___NativeString___to_s_full(var2, 0l, 0l);
var1 = var3;
varonce = var1;
}
/* <var1:String> isa FlatString */
cltype = type_core__FlatString.color;
idtype = type_core__FlatString.id;
if(cltype >= var1->type->table_size) {
var4 = 0;
} else {
var4 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 456);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#to_upper for (self: FlatString): String */
val* core___core__FlatString___core__abstract_text__String__to_upper(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_outstr /* var outstr: FlatBuffer */;
long var7 /* : Int */;
long var_mylen /* var mylen: Int */;
long var_pos /* var pos: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var15 /* : SequenceRead[Char] */;
val* var16 /* : nullable Object */;
uint32_t var17 /* : Char */;
uint32_t var18 /* : Char */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
val* var26 /* : String */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
var2 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
{
{ /* Inline kernel#Int#+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var2 + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBuffer__with_capacity]))(var1, var3); /* with_capacity on <var1:FlatBuffer>*/
}
var_outstr = var1;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_mylen = var7;
var_pos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_pos,var_mylen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_mylen:Int> isa OTHER */
/* <var_mylen:Int> isa OTHER */
var10 = 1; /* easy <var_mylen:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var14 = var_pos < var_mylen;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:FlatString>*/
}
{
var16 = ((val*(*)(val* self, long p0))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var15, var_pos); /* [] on <var15:SequenceRead[Char]>*/
}
var18 = (uint32_t)((long)(var16)>>2);
var17 = core___core__Char___to_upper(var18);
{
((void(*)(val* self, uint32_t p0))(var_outstr->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_outstr, var17); /* add on <var_outstr:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var25 = var_pos + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_pos = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var26 = ((val*(*)(val* self))(var_outstr->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_outstr); /* to_s on <var_outstr:FlatBuffer>*/
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#to_lower for (self: FlatString): String */
val* core___core__FlatString___core__abstract_text__String__to_lower(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_outstr /* var outstr: FlatBuffer */;
long var7 /* : Int */;
long var_mylen /* var mylen: Int */;
long var_pos /* var pos: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var15 /* : SequenceRead[Char] */;
val* var16 /* : nullable Object */;
uint32_t var17 /* : Char */;
uint32_t var18 /* : Char */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
val* var26 /* : String */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
var2 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
{
{ /* Inline kernel#Int#+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var2 + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBuffer__with_capacity]))(var1, var3); /* with_capacity on <var1:FlatBuffer>*/
}
var_outstr = var1;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_mylen = var7;
var_pos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_pos,var_mylen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_mylen:Int> isa OTHER */
/* <var_mylen:Int> isa OTHER */
var10 = 1; /* easy <var_mylen:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var14 = var_pos < var_mylen;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:FlatString>*/
}
{
var16 = ((val*(*)(val* self, long p0))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var15, var_pos); /* [] on <var15:SequenceRead[Char]>*/
}
var18 = (uint32_t)((long)(var16)>>2);
var17 = core___core__Char___to_lower(var18);
{
((void(*)(val* self, uint32_t p0))(var_outstr->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_outstr, var17); /* add on <var_outstr:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var25 = var_pos + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_pos = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var26 = ((val*(*)(val* self))(var_outstr->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_outstr); /* to_s on <var_outstr:FlatBuffer>*/
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#output for (self: FlatString) */
void core___core__FlatString___core__kernel__Object__output(val* self) {
val* var /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
uint32_t var5 /* : Char */;
uint32_t var_i /* var i: Char */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:FlatString>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:IndexedIterator[Char]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:IndexedIterator[Char]>*/
}
var5 = (uint32_t)((long)(var4)>>2);
var_i = var5;
core___core__Char___Object__output(var_i); /* Direct call kernel#Char#output on <var_i:Char>*/
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:IndexedIterator[Char]>*/
}
RET_LABEL:;
}
/* method flat#FlatString#with_infos for (self: FlatString, NativeString, Int, Int) */
void core___core__FlatString___with_infos(val* self, char* p0, long p1, long p2) {
char* var_items /* var items: NativeString */;
long var_bytelen /* var bytelen: Int */;
long var_from /* var from: Int */;
char* var /* : NativeString */;
long var1 /* : Int */;
long var2 /* : Int */;
long var_from4 /* var from: Int */;
long var_bytelen5 /* var bytelen: Int */;
long var_st /* var st: Int */;
long var_ln /* var ln: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
long var_i /* var i: Int */;
long var20 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
long var52 /* : Int */;
long var_cln /* var cln: Int */;
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
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FlatString>*/
}
var_items = p0;
var_bytelen = p1;
var_from = p2;
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_items; /* _items on <self:FlatString> */
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var_bytelen; /* _bytelen on <self:FlatString> */
self->attrs[COLOR_core__flat__FlatString___first_byte].l = var_from; /* _first_byte on <self:FlatString> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_from; /* _bytepos on <self:FlatString> */
var = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var1 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
{
{ /* Inline native#NativeString#utf8_length (var,var1,var_bytelen) on <var:NativeString> */
var_from4 = var1;
var_bytelen5 = var_bytelen;
var_st = var_from4;
var_ln = 0l;
for(;;) {
{
{ /* Inline kernel#Int#> (var_bytelen5,0l) on <var_bytelen5:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var9 = var_bytelen5 > 0l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
for(;;) {
{
{ /* Inline kernel#Int#>= (var_bytelen5,4l) on <var_bytelen5:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var12 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var16 = var_bytelen5 >= 4l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
{ /* Inline native#NativeString#fetch_4_chars (var,var_st) on <var:NativeString> */
var19 = (long)*((uint32_t*)(var + var_st));
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_i = var17;
{
{ /* Inline math#Int#& (var_i,2155905152l) on <var_i:Int> */
var22 = var_i & 2155905152l;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var20,0l) on <var20:Int> */
var25 = var20 == 0l;
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel#Int#- (var_bytelen5,4l) on <var_bytelen5:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var29 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var33 = var_bytelen5 - 4l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_bytelen5 = var27;
{
{ /* Inline kernel#Int#+ (var_st,4l) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var36 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var40 = var_st + 4l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_st = var34;
{
{ /* Inline kernel#Int#+ (var_ln,4l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var43 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var47 = var_ln + 4l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_ln = var41;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_bytelen5,0l) on <var_bytelen5:Int> */
var50 = var_bytelen5 == 0l;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
goto BREAK_label51;
} else {
}
var52 = core___core__NativeString___length_of_char_at(var, var_st);
var_cln = var52;
{
{ /* Inline kernel#Int#+ (var_st,var_cln) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var55 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var59 = var_st + var_cln;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_st = var53;
{
{ /* Inline kernel#Int#+ (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var66 = var_ln + 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var_ln = var60;
{
{ /* Inline kernel#Int#- (var_bytelen5,var_cln) on <var_bytelen5:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var69 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var73 = var_bytelen5 - var_cln;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_bytelen5 = var67;
} else {
goto BREAK_label51;
}
}
BREAK_label51: (void)0;
var2 = var_ln;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___length].l = var2; /* _length on <self:FlatString> */
RET_LABEL:;
}
/* method flat#FlatString#full for (self: FlatString, NativeString, Int, Int, Int) */
void core___core__FlatString___full(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: NativeString */;
long var_bytelen /* var bytelen: Int */;
long var_from /* var from: Int */;
long var_length /* var length: Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FlatString>*/
}
var_items = p0;
var_bytelen = p1;
var_from = p2;
var_length = p3;
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_items; /* _items on <self:FlatString> */
self->attrs[COLOR_core__abstract_text__FlatText___length].l = var_length; /* _length on <self:FlatString> */
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var_bytelen; /* _bytelen on <self:FlatString> */
self->attrs[COLOR_core__flat__FlatString___first_byte].l = var_from; /* _first_byte on <self:FlatString> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_from; /* _bytepos on <self:FlatString> */
RET_LABEL:;
}
/* method flat#FlatString#== for (self: FlatString, nullable Object): Bool */
short int core___core__FlatString___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var_my_length /* var my_length: Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var_my_index /* var my_index: Int */;
long var16 /* : Int */;
long var_its_index /* var its_index: Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name;
long var22 /* : Int */;
long var_last_iteration /* var last_iteration: Int */;
char* var23 /* : NativeString */;
char* var_its_items /* var its_items: NativeString */;
char* var24 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
unsigned char var32 /* : Byte */;
unsigned char var34 /* : Byte */;
unsigned char var35 /* : Byte */;
unsigned char var37 /* : Byte */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
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
var_other = p0;
/* <var_other:nullable Object> isa FlatText */
cltype = type_core__FlatText.color;
idtype = type_core__FlatText.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
{
var3 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core___core__FlatString___core__kernel__Object___61d_61d]))(self, p0); /* == on <self:FlatString>*/
}
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__object_id]))(self); /* object_id on <self:FlatString>*/
}
{
var5 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__kernel__Object__object_id]))(var_other); /* object_id on <var_other:nullable Object(FlatText)>*/
}
{
{ /* Inline kernel#Int#== (var4,var5) on <var4:Int> */
var8 = var4 == var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var = 1;
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
var_my_length = var9;
var10 = var_other->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_other:nullable Object(FlatText)> */
{
{ /* Inline kernel#Int#!= (var10,var_my_length) on <var10:Int> */
var13 = var10 == var_my_length;
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var = 0;
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_my_index = var15;
{
var16 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_other); /* first_byte on <var_other:nullable Object(FlatText)>*/
}
var_its_index = var16;
{
{ /* Inline kernel#Int#+ (var_my_index,var_my_length) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var19 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var22 = var_my_index + var_my_length;
var17 = var22;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_last_iteration = var17;
var23 = var_other->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_other:nullable Object(FlatText)> */
var_its_items = var23;
var24 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_my_items = var24;
for(;;) {
{
{ /* Inline kernel#Int#< (var_my_index,var_last_iteration) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_last_iteration:Int> isa OTHER */
/* <var_last_iteration:Int> isa OTHER */
var27 = 1; /* easy <var_last_iteration:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var31 = var_my_index < var_last_iteration;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline native#NativeString#[] (var_my_items,var_my_index) on <var_my_items:NativeString> */
var34 = (unsigned char)((int)var_my_items[var_my_index]);
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var_its_items,var_its_index) on <var_its_items:NativeString> */
var37 = (unsigned char)((int)var_its_items[var_its_index]);
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Byte#!= (var32,var35) on <var32:Byte> */
var40 = var32 == var35;
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_my_index,1l) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var44 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var48 = var_my_index + 1l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_my_index = var42;
{
{ /* Inline kernel#Int#+ (var_its_index,1l) on <var_its_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var51 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var55 = var_its_index + 1l;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_its_index = var49;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#< for (self: FlatString, Text): Bool */
short int core___core__FlatString___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Text */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
char* var12 /* : NativeString */;
char* var_myits /* var myits: NativeString */;
char* var13 /* : NativeString */;
char* var_itsits /* var itsits: NativeString */;
long var14 /* : Int */;
long var_mbt /* var mbt: Int */;
long var15 /* : Int */;
long var_obt /* var obt: Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
long var_minln /* var minln: Int */;
long var24 /* : Int */;
long var_mst /* var mst: Int */;
long var25 /* : Int */;
long var_ost /* var ost: Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
unsigned char var33 /* : Byte */;
unsigned char var35 /* : Byte */;
unsigned char var_my_curr_char /* var my_curr_char: Byte */;
unsigned char var36 /* : Byte */;
unsigned char var38 /* : Byte */;
unsigned char var_its_curr_char /* var its_curr_char: Byte */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
short int var52 /* : Bool */;
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
long var67 /* : Int */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
short int var74 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Text> isa OTHER */
/* <p0:Text> isa OTHER */
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 550);
fatal_exit(1);
}
var_other = p0;
/* <var_other:Text> isa FlatText */
cltype3 = type_core__FlatText.color;
idtype4 = type_core__FlatText.id;
if(cltype3 >= var_other->type->table_size) {
var2 = 0;
} else {
var2 = var_other->type->type_table[cltype3] == idtype4;
}
var5 = !var2;
if (var5){
{
var6 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core___core__FlatString___core__kernel__Comparable___60d]))(self, p0); /* < on <self:FlatString>*/
}
var = var6;
goto RET_LABEL;
} else {
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__object_id]))(self); /* object_id on <self:FlatString>*/
}
{
var8 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__kernel__Object__object_id]))(var_other); /* object_id on <var_other:Text(FlatText)>*/
}
{
{ /* Inline kernel#Int#== (var7,var8) on <var7:Int> */
var11 = var7 == var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_myits = var12;
var13 = var_other->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_other:Text(FlatText)> */
var_itsits = var13;
var14 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
var_mbt = var14;
{
var15 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_other); /* bytelen on <var_other:Text(FlatText)>*/
}
var_obt = var15;
{
{ /* Inline kernel#Int#< (var_mbt,var_obt) on <var_mbt:Int> */
/* Covariant cast for argument 0 (i) <var_obt:Int> isa OTHER */
/* <var_obt:Int> isa OTHER */
var19 = 1; /* easy <var_obt:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var23 = var_mbt < var_obt;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
var16 = var_mbt;
} else {
var16 = var_obt;
}
var_minln = var16;
var24 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_mst = var24;
{
var25 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_other); /* first_byte on <var_other:Text(FlatText)>*/
}
var_ost = var25;
var_i = 0l;
var_ = var_minln;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var28 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var32 = var_i < var_;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
} else {
goto BREAK_label;
}
{
{ /* Inline native#NativeString#[] (var_myits,var_mst) on <var_myits:NativeString> */
var35 = (unsigned char)((int)var_myits[var_mst]);
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_my_curr_char = var33;
{
{ /* Inline native#NativeString#[] (var_itsits,var_ost) on <var_itsits:NativeString> */
var38 = (unsigned char)((int)var_itsits[var_ost]);
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_its_curr_char = var36;
{
{ /* Inline kernel#Byte#> (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Byte> */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Byte> isa OTHER */
/* <var_its_curr_char:Byte> isa OTHER */
var41 = 1; /* easy <var_its_curr_char:Byte> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 621);
fatal_exit(1);
}
var45 = var_my_curr_char > var_its_curr_char;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Byte#< (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Byte> */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Byte> isa OTHER */
/* <var_its_curr_char:Byte> isa OTHER */
var48 = 1; /* easy <var_its_curr_char:Byte> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var52 = var_my_curr_char < var_its_curr_char;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_mst,1l) on <var_mst:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var59 = var_mst + 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_mst = var53;
{
{ /* Inline kernel#Int#+ (var_ost,1l) on <var_ost:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var66 = var_ost + 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var_ost = var60;
var67 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var67;
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#< (var_mbt,var_obt) on <var_mbt:Int> */
/* Covariant cast for argument 0 (i) <var_obt:Int> isa OTHER */
/* <var_obt:Int> isa OTHER */
var70 = 1; /* easy <var_obt:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var74 = var_mbt < var_obt;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var = var68;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#+ for (self: FlatString, Text): String */
val* core___core__FlatString___core__abstract_text__String___43d(val* self, val* p0) {
val* var /* : String */;
val* var_o /* var o: Text */;
val* var1 /* : String */;
val* var_s /* var s: String */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
long var3 /* : Int */;
long var_mlen /* var mlen: Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var_nlen /* var nlen: Int */;
char* var8 /* : NativeString */;
char* var_mits /* var mits: NativeString */;
long var9 /* : Int */;
long var_mifrom /* var mifrom: Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
char* var13 /* : NativeString */;
char* var_sits /* var sits: NativeString */;
long var14 /* : Int */;
long var_sifrom /* var sifrom: Int */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
char* var23 /* : NativeString */;
char* var25 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
val* var28 /* : FlatString */;
long var29 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
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
{ /* Inline kernel#Int#+ (var_mlen,var_slen) on <var_mlen:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var6 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_mlen + var_slen;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_nlen = var4;
var8 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_mits = var8;
var9 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_mifrom = var9;
/* <var_s:String> isa FlatText */
cltype11 = type_core__FlatText.color;
idtype12 = type_core__FlatText.id;
if(cltype11 >= var_s->type->table_size) {
var10 = 0;
} else {
var10 = var_s->type->type_table[cltype11] == idtype12;
}
if (var10){
var13 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:String(FlatText)> */
var_sits = var13;
{
var14 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_s); /* first_byte on <var_s:String(FlatText)>*/
}
var_sifrom = var14;
var15 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nlen,1l) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var22 = var_nlen + 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var15,var16) on <var15:NativeString> */
var25 = (char*)nit_alloc(var16);
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_ns = var23;
{
{ /* Inline native#NativeString#copy_to (var_mits,var_ns,var_mlen,var_mifrom,0l) on <var_mits:NativeString> */
memmove(var_ns+0l,var_mits+var_mifrom,var_mlen);
RET_LABEL26:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var_sits,var_ns,var_slen,var_sifrom,var_mlen) on <var_sits:NativeString> */
memmove(var_ns+var_mlen,var_sits+var_sifrom,var_slen);
RET_LABEL27:(void)0;
}
}
var28 = NEW_core__FlatString(&type_core__FlatString);
var29 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
{
var30 = ((long(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Text__length]))(var_o); /* length on <var_o:Text>*/
}
{
{ /* Inline kernel#Int#+ (var29,var30) on <var29:Int> */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var33 = 1; /* easy <var30:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var37 = var29 + var30;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var28->class->vft[COLOR_core__flat__FlatString__full]))(var28, var_ns, var_nlen, 0l, var31); /* full on <var28:FlatString>*/
}
var = var28;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 595);
fatal_exit(1);
}
RET_LABEL:;
return var;
}
/* method flat#FlatString#* for (self: FlatString, Int): String */
val* core___core__FlatString___core__abstract_text__String___42d(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_mybtlen /* var mybtlen: Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_new_bytelen /* var new_bytelen: Int */;
long var6 /* : Int */;
long var_mylen /* var mylen: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var_newlen /* var newlen: Int */;
char* var14 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var15 /* : Int */;
long var_fb /* var fb: Int */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
char* var24 /* : NativeString */;
char* var26 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var_offset /* var offset: Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
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
val* var50 /* : FlatString */;
var_i = p0;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatString> */
var_mybtlen = var1;
{
{ /* Inline kernel#Int#* (var_mybtlen,var_i) on <var_mybtlen:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var4 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var5 = var_mybtlen * var_i;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_new_bytelen = var2;
var6 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_mylen = var6;
{
{ /* Inline kernel#Int#* (var_mylen,var_i) on <var_mylen:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var9 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var13 = var_mylen * var_i;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_newlen = var7;
var14 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var14;
var15 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_fb = var15;
var16 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_new_bytelen,1l) on <var_new_bytelen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var23 = var_new_bytelen + 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var16,var17) on <var16:NativeString> */
var26 = (char*)nit_alloc(var17);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_ns = var24;
{
{ /* Inline native#NativeString#[]= (var_ns,var_new_bytelen,((unsigned char)0x00)) on <var_ns:NativeString> */
var_ns[var_new_bytelen]=(unsigned char)((unsigned char)0x00);
RET_LABEL27:(void)0;
}
}
var_offset = 0l;
for(;;) {
{
{ /* Inline kernel#Int#> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var30 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var34 = var_i > 0l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
{ /* Inline native#NativeString#copy_to (var_its,var_ns,var_mybtlen,var_fb,var_offset) on <var_its:NativeString> */
memmove(var_ns+var_offset,var_its+var_fb,var_mybtlen);
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_offset,var_mybtlen) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <var_mybtlen:Int> isa OTHER */
/* <var_mybtlen:Int> isa OTHER */
var38 = 1; /* easy <var_mybtlen:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var42 = var_offset + var_mybtlen;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_offset = var36;
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var45 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var49 = var_i - 1l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_i = var43;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var50 = NEW_core__FlatString(&type_core__FlatString);
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var50->class->vft[COLOR_core__flat__FlatString__full]))(var50, var_ns, var_new_bytelen, 0l, var_newlen); /* full on <var50:FlatString>*/
}
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#hash for (self: FlatString): Int */
long core___core__FlatString___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : nullable Int */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var_h /* var h: Int */;
long var6 /* : Int */;
long var_i /* var i: Int */;
char* var7 /* : NativeString */;
char* var_my_items /* var my_items: NativeString */;
long var8 /* : Int */;
long var_max /* var max: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
unsigned char var23 /* : Byte */;
unsigned char var25 /* : Byte */;
long var26 /* : Int */;
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
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
long var45 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__hash_cache]))(self); /* hash_cache on <self:FlatString>*/
}
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var1,((val*)NULL)) on <var1:nullable Int> */
var5 = 0; /* incompatible types Int vs. null; cannot be NULL */
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var_h = 5381l;
var6 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_i = var6;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_my_items = var7;
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatString>*/
}
var_max = var8;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_max) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var11 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var12 = var_i <= var_max;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline kernel#Int#<< (var_h,5l) on <var_h:Int> */
var15 = var_h << 5l;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var13,var_h) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var18 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var22 = var13 + var_h;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var_my_items,var_i) on <var_my_items:NativeString> */
var25 = (unsigned char)((int)var_my_items[var_i]);
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Byte#to_i (var23) on <var23:Byte> */
var28 = (long)var23;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var16,var26) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var31 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var35 = var16 + var26;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_h = var29;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var42 = var_i + 1l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_i = var36;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var43 = (val*)(var_h<<2|1);
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__hash_cache_61d]))(self, var43); /* hash_cache= on <self:FlatString>*/
}
} else {
}
{
var44 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__hash_cache]))(self); /* hash_cache on <self:FlatString>*/
}
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 636);
fatal_exit(1);
}
var45 = (long)(var44)>>2;
var = var45;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#substrings for (self: FlatString): Iterator[FlatText] */
val* core___core__FlatString___core__abstract_text__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_core__flat__FlatSubstringsIter(&type_core__flat__FlatSubstringsIter);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatSubstringsIter__tgt_61d]))(var1, self); /* tgt= on <var1:FlatSubstringsIter>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatSubstringsIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#target for (self: FlatStringCharReverseIterator): FlatString */
val* core__flat___core__flat__FlatStringCharReverseIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___target].val; /* _target on <self:FlatStringCharReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 645);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#target= for (self: FlatStringCharReverseIterator, FlatString) */
void core__flat___core__flat__FlatStringCharReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___target].val = p0; /* _target on <self:FlatStringCharReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharReverseIterator#curr_pos for (self: FlatStringCharReverseIterator): Int */
long core__flat___core__flat__FlatStringCharReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#curr_pos= for (self: FlatStringCharReverseIterator, Int) */
void core__flat___core__flat__FlatStringCharReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringCharReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharReverseIterator#is_ok for (self: FlatStringCharReverseIterator): Bool */
short int core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringCharReverseIterator>*/
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
/* method flat#FlatStringCharReverseIterator#item for (self: FlatStringCharReverseIterator): Char */
uint32_t core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatString */;
long var2 /* : Int */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__target]))(self); /* target on <self:FlatStringCharReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringCharReverseIterator>*/
}
{
var3 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var2); /* [] on <var1:FlatString>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#next for (self: FlatStringCharReverseIterator) */
void core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringCharReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringCharReverseIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatStringCharReverseIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatStringCharReverseIterator#index for (self: FlatStringCharReverseIterator): Int */
long core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#init for (self: FlatStringCharReverseIterator) */
void core__flat___core__flat__FlatStringCharReverseIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringCharReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringCharReverseIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#target for (self: FlatStringCharIterator): FlatString */
val* core__flat___core__flat__FlatStringCharIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharIterator___target].val; /* _target on <self:FlatStringCharIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 662);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#target= for (self: FlatStringCharIterator, FlatString) */
void core__flat___core__flat__FlatStringCharIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringCharIterator___target].val = p0; /* _target on <self:FlatStringCharIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#max for (self: FlatStringCharIterator): Int */
long core__flat___core__flat__FlatStringCharIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharIterator___max].l; /* _max on <self:FlatStringCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#max= for (self: FlatStringCharIterator, Int) */
void core__flat___core__flat__FlatStringCharIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringCharIterator___max].l = p0; /* _max on <self:FlatStringCharIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#curr_pos for (self: FlatStringCharIterator): Int */
long core__flat___core__flat__FlatStringCharIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#curr_pos= for (self: FlatStringCharIterator, Int) */
void core__flat___core__flat__FlatStringCharIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringCharIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#init for (self: FlatStringCharIterator) */
void core__flat___core__flat__FlatStringCharIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatString */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringCharIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringCharIterator>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__target]))(self); /* target on <self:FlatStringCharIterator>*/
}
var1 = var->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var:FlatString> */
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
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__max_61d]))(self, var2); /* max= on <self:FlatStringCharIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#is_ok for (self: FlatStringCharIterator): Bool */
short int core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringCharIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__max]))(self); /* max on <self:FlatStringCharIterator>*/
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
/* method flat#FlatStringCharIterator#item for (self: FlatStringCharIterator): Char */
uint32_t core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatString */;
long var2 /* : Int */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__target]))(self); /* target on <self:FlatStringCharIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringCharIterator>*/
}
{
var3 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var2); /* [] on <var1:FlatString>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#next for (self: FlatStringCharIterator) */
void core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringCharIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatStringCharIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringCharIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatStringCharIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatStringCharIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#index for (self: FlatStringCharIterator): Int */
long core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharView#[] for (self: FlatStringCharView, Int): Char */
uint32_t core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
uint32_t var2 /* : Char */;
var_index = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatStringCharView>*/
}
{
var2 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var_index); /* [] on <var1:Text(FlatString)>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharView#iterator_from for (self: FlatStringCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringCharIterator */;
val* var2 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringCharIterator(&type_core__flat__FlatStringCharIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatStringCharView>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatStringCharIterator__target_61d]))(var1, var2); /* target= on <var1:FlatStringCharIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatStringCharIterator__curr_pos_61d]))(var1, var_start); /* curr_pos= on <var1:FlatStringCharIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharView#reverse_iterator_from for (self: FlatStringCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringCharReverseIterator */;
val* var2 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringCharReverseIterator(&type_core__flat__FlatStringCharReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatStringCharView>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__target_61d]))(var1, var2); /* target= on <var1:FlatStringCharReverseIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__curr_pos_61d]))(var1, var_start); /* curr_pos= on <var1:FlatStringCharReverseIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteReverseIterator#target for (self: FlatStringByteReverseIterator): FlatString */
val* core__flat___core__flat__FlatStringByteReverseIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target].val; /* _target on <self:FlatStringByteReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 696);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteReverseIterator#target= for (self: FlatStringByteReverseIterator, FlatString) */
void core__flat___core__flat__FlatStringByteReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target].val = p0; /* _target on <self:FlatStringByteReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatStringByteReverseIterator#target_items for (self: FlatStringByteReverseIterator): NativeString */
char* core__flat___core__flat__FlatStringByteReverseIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target_items].str; /* _target_items on <self:FlatStringByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteReverseIterator#target_items= for (self: FlatStringByteReverseIterator, NativeString) */
void core__flat___core__flat__FlatStringByteReverseIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target_items].str = p0; /* _target_items on <self:FlatStringByteReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatStringByteReverseIterator#curr_pos for (self: FlatStringByteReverseIterator): Int */
long core__flat___core__flat__FlatStringByteReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteReverseIterator#curr_pos= for (self: FlatStringByteReverseIterator, Int) */
void core__flat___core__flat__FlatStringByteReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringByteReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatStringByteReverseIterator#init for (self: FlatStringByteReverseIterator) */
void core__flat___core__flat__FlatStringByteReverseIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatString */;
val* var_tgt /* var tgt: FlatString */;
char* var1 /* : NativeString */;
val* var_ /* var : FlatStringByteReverseIterator */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringByteReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringByteReverseIterator>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__target]))(self); /* target on <self:FlatStringByteReverseIterator>*/
}
var_tgt = var;
var1 = var_tgt->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tgt:FlatString> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__target_items_61d]))(self, var1); /* target_items= on <self:FlatStringByteReverseIterator>*/
}
var_ = self;
{
var2 = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringByteReverseIterator>*/
}
var3 = var_tgt->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tgt:FlatString> */
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos_61d]))(var_, var4); /* curr_pos= on <var_:FlatStringByteReverseIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatStringByteReverseIterator#is_ok for (self: FlatStringByteReverseIterator): Bool */
short int core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringByteReverseIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__target]))(self); /* target on <self:FlatStringByteReverseIterator>*/
}
var3 = var2->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var2:FlatString> */
{
{ /* Inline kernel#Int#>= (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var7 = var1 >= var3;
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
/* method flat#FlatStringByteReverseIterator#item for (self: FlatStringByteReverseIterator): Byte */
unsigned char core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__target_items]))(self); /* target_items on <self:FlatStringByteReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringByteReverseIterator>*/
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
/* method flat#FlatStringByteReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteReverseIterator#next for (self: FlatStringByteReverseIterator) */
void core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringByteReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringByteReverseIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatStringByteReverseIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatStringByteReverseIterator#index for (self: FlatStringByteReverseIterator): Int */
long core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringByteReverseIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__target]))(self); /* target on <self:FlatStringByteReverseIterator>*/
}
var3 = var2->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var2:FlatString> */
{
{ /* Inline kernel#Int#- (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var1 - var3;
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
/* method flat#FlatStringByteIterator#target for (self: FlatStringByteIterator): FlatString */
val* core__flat___core__flat__FlatStringByteIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteIterator___target].val; /* _target on <self:FlatStringByteIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 722);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteIterator#target= for (self: FlatStringByteIterator, FlatString) */
void core__flat___core__flat__FlatStringByteIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringByteIterator___target].val = p0; /* _target on <self:FlatStringByteIterator> */
RET_LABEL:;
}
/* method flat#FlatStringByteIterator#target_items for (self: FlatStringByteIterator): NativeString */
char* core__flat___core__flat__FlatStringByteIterator___target_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteIterator___target_items].str; /* _target_items on <self:FlatStringByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteIterator#target_items= for (self: FlatStringByteIterator, NativeString) */
void core__flat___core__flat__FlatStringByteIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatStringByteIterator___target_items].str = p0; /* _target_items on <self:FlatStringByteIterator> */
RET_LABEL:;
}
/* method flat#FlatStringByteIterator#curr_pos for (self: FlatStringByteIterator): Int */
long core__flat___core__flat__FlatStringByteIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteIterator___curr_pos].l; /* _curr_pos on <self:FlatStringByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteIterator#curr_pos= for (self: FlatStringByteIterator, Int) */
void core__flat___core__flat__FlatStringByteIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringByteIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringByteIterator> */
RET_LABEL:;
}
/* method flat#FlatStringByteIterator#init for (self: FlatStringByteIterator) */
void core__flat___core__flat__FlatStringByteIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatString */;
val* var_tgt /* var tgt: FlatString */;
char* var1 /* : NativeString */;
val* var_ /* var : FlatStringByteIterator */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringByteIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringByteIterator>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__target]))(self); /* target on <self:FlatStringByteIterator>*/
}
var_tgt = var;
var1 = var_tgt->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tgt:FlatString> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__target_items_61d]))(self, var1); /* target_items= on <self:FlatStringByteIterator>*/
}
var_ = self;
{
var2 = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringByteIterator>*/
}
var3 = var_tgt->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tgt:FlatString> */
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos_61d]))(var_, var4); /* curr_pos= on <var_:FlatStringByteIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatStringByteIterator#is_ok for (self: FlatStringByteIterator): Bool */
short int core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringByteIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__target]))(self); /* target on <self:FlatStringByteIterator>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__flat__FlatText__last_byte]))(var2); /* last_byte on <var2:FlatString>*/
}
{
{ /* Inline kernel#Int#<= (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var7 = var1 <= var3;
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
/* method flat#FlatStringByteIterator#item for (self: FlatStringByteIterator): Byte */
unsigned char core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__target_items]))(self); /* target_items on <self:FlatStringByteIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringByteIterator>*/
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
/* method flat#FlatStringByteIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteIterator#next for (self: FlatStringByteIterator) */
void core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringByteIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringByteIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatStringByteIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatStringByteIterator#index for (self: FlatStringByteIterator): Int */
long core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringByteIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__target]))(self); /* target on <self:FlatStringByteIterator>*/
}
var3 = var2->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var2:FlatString> */
{
{ /* Inline kernel#Int#- (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var1 - var3;
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
/* method flat#FlatStringByteView#[] for (self: FlatStringByteView, Int): Byte */
unsigned char core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
unsigned char var /* : Byte */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
val* var_target /* var target: FlatString */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var_ind /* var ind: Int */;
char* var23 /* : NativeString */;
unsigned char var24 /* : Byte */;
unsigned char var26 /* : Byte */;
var_index = p0;
var1 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:FlatStringByteView> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 754);
fatal_exit(1);
}
var_target = var1;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var6 = var_index >= 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var7 = var_target->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_target:FlatString> */
{
{ /* Inline kernel#Int#< (var_index,var7) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var14 = var_index < var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var2 = var8;
} else {
var2 = var_;
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 755);
fatal_exit(1);
}
var15 = var_target->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_target:FlatString> */
{
{ /* Inline kernel#Int#+ (var_index,var15) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var22 = var_index + var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_ind = var16;
var23 = var_target->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_target:FlatString> */
{
{ /* Inline native#NativeString#[] (var23,var_ind) on <var23:NativeString> */
var26 = (unsigned char)((int)var23[var_ind]);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteView#iterator_from for (self: FlatStringByteView, Int): IndexedIterator[Byte] */
val* core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringByteIterator */;
val* var2 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringByteIterator(&type_core__flat__FlatStringByteIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:FlatStringByteView>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatStringByteIterator__target_61d]))(var1, var2); /* target= on <var1:FlatStringByteIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos_61d]))(var1, var_start); /* curr_pos= on <var1:FlatStringByteIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringByteView#reverse_iterator_from for (self: FlatStringByteView, Int): IndexedIterator[Byte] */
val* core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringByteReverseIterator */;
val* var2 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringByteReverseIterator(&type_core__flat__FlatStringByteReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:FlatStringByteView>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__target_61d]))(var1, var2); /* target= on <var1:FlatStringByteReverseIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos_61d]))(var1, var_start); /* curr_pos= on <var1:FlatStringByteReverseIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#Buffer#new for (self: Buffer): Buffer */
val* core__flat___Buffer___new(val* self) {
val* var /* : Buffer */;
val* var1 /* : FlatBuffer */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#Buffer#with_cap for (self: Buffer, Int): Buffer */
val* core__flat___Buffer___with_cap(val* self, long p0) {
val* var /* : Buffer */;
long var_i /* var i: Int */;
val* var1 /* : FlatBuffer */;
var_i = p0;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBuffer__with_capacity]))(var1, var_i); /* with_capacity on <var1:FlatBuffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#chars for (self: FlatBuffer): Sequence[Char] */
val* core___core__FlatBuffer___core__abstract_text__Text__chars(val* self) {
val* var /* : Sequence[Char] */;
short int var1 /* : Bool */;
val* var2 /* : Sequence[Char] */;
val* var3 /* : FlatBufferCharView */;
var1 = self->attrs[COLOR_core__flat__FlatBuffer___chars].val != NULL; /* _chars on <self:FlatBuffer> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__flat__FlatBuffer___chars].val; /* _chars on <self:FlatBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _chars");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 777);
fatal_exit(1);
}
} else {
var3 = NEW_core__flat__FlatBufferCharView(&type_core__flat__FlatBufferCharView);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_text__StringCharView__target_61d]))(var3, self); /* target= on <var3:FlatBufferCharView>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:FlatBufferCharView>*/
}
self->attrs[COLOR_core__flat__FlatBuffer___chars].val = var3; /* _chars on <self:FlatBuffer> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#chars= for (self: FlatBuffer, Sequence[Char]) */
void core___core__FlatBuffer___chars_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBuffer___chars].val = p0; /* _chars on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#bytes for (self: FlatBuffer): SequenceRead[Byte] */
val* core___core__FlatBuffer___core__abstract_text__Text__bytes(val* self) {
val* var /* : SequenceRead[Byte] */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Byte] */;
val* var3 /* : FlatBufferByteView */;
var1 = self->attrs[COLOR_core__flat__FlatBuffer___bytes].val != NULL; /* _bytes on <self:FlatBuffer> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__flat__FlatBuffer___bytes].val; /* _bytes on <self:FlatBuffer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 779);
fatal_exit(1);
}
} else {
var3 = NEW_core__flat__FlatBufferByteView(&type_core__flat__FlatBufferByteView);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_text__StringByteView__target_61d]))(var3, self); /* target= on <var3:FlatBufferByteView>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:FlatBufferByteView>*/
}
self->attrs[COLOR_core__flat__FlatBuffer___bytes].val = var3; /* _bytes on <self:FlatBuffer> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#bytes= for (self: FlatBuffer, SequenceRead[Byte]) */
void core___core__FlatBuffer___bytes_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBuffer___bytes].val = p0; /* _bytes on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#char_cache for (self: FlatBuffer): Int */
long core___core__FlatBuffer___char_cache(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBuffer___char_cache].l; /* _char_cache on <self:FlatBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#char_cache= for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___char_cache_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBuffer___char_cache].l = p0; /* _char_cache on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#byte_cache for (self: FlatBuffer): Int */
long core___core__FlatBuffer___byte_cache(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBuffer___byte_cache].l; /* _byte_cache on <self:FlatBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#byte_cache= for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___byte_cache_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBuffer___byte_cache].l = p0; /* _byte_cache on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#capacity for (self: FlatBuffer): Int */
long core___core__FlatBuffer___capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#capacity= for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___capacity_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = p0; /* _capacity on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#real_items for (self: FlatBuffer): NativeString */
char* core___core__FlatBuffer___real_items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__flat__FlatBuffer___real_items].str; /* _real_items on <self:FlatBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#real_items= for (self: FlatBuffer, NativeString) */
void core___core__FlatBuffer___real_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatBuffer___real_items].str = p0; /* _real_items on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#fast_cstring for (self: FlatBuffer): NativeString */
char* core___core__FlatBuffer___core__abstract_text__FlatText__fast_cstring(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
{
{ /* Inline native#NativeString#fast_cstring (var1,0l) on <var1:NativeString> */
var4 = var1 + 0l;
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
/* method flat#FlatBuffer#substrings for (self: FlatBuffer): Iterator[FlatText] */
val* core___core__FlatBuffer___core__abstract_text__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_core__flat__FlatSubstringsIter(&type_core__flat__FlatSubstringsIter);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatSubstringsIter__tgt_61d]))(var1, self); /* tgt= on <var1:FlatSubstringsIter>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatSubstringsIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#reset for (self: FlatBuffer) */
void core___core__FlatBuffer___reset(val* self) {
char* var /* : NativeString */;
long var1 /* : Int */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
var = NULL/*special!*/;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
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
var5 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#!= (var5,0l) on <var5:Int> */
var8 = var5 == 0l;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var11 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
{
{ /* Inline native#NativeString#copy_to (var10,var_nns,var11,0l,0l) on <var10:NativeString> */
memmove(var_nns+0l,var10+0l,var11);
RET_LABEL12:(void)0;
}
}
} else {
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_nns; /* _items on <self:FlatBuffer> */
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__written_61d]))(self, 0); /* written= on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method flat#FlatBuffer#rshift_bytes for (self: FlatBuffer, Int, Int) */
void core___core__FlatBuffer___rshift_bytes(val* self, long p0, long p1) {
long var_from /* var from: Int */;
long var_len /* var len: Int */;
char* var /* : NativeString */;
char* var_oit /* var oit: NativeString */;
char* var1 /* : NativeString */;
char* var_nit /* var nit: NativeString */;
long var2 /* : Int */;
long var_bt /* var bt: Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
char* var32 /* : NativeString */;
char* var34 /* : NativeString */;
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
var_from = p0;
var_len = p1;
var = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_oit = var;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_nit = var1;
var2 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
var_bt = var2;
{
{ /* Inline kernel#Int#+ (var_bt,var_len) on <var_bt:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var5 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var_bt + var_len;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#> (var3,var7) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var14 = var3 > var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#* (var15,2l) on <var15:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var18 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var22 = var15 * 2l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var16,2l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var25 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var29 = var16 + 2l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity_61d]))(self, var23); /* capacity= on <self:FlatBuffer>*/
}
var30 = NULL/*special!*/;
{
var31 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
{
{ /* Inline native#NativeString#new (var30,var31) on <var30:NativeString> */
var34 = (char*)nit_alloc(var31);
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_nit = var32;
{
{ /* Inline native#NativeString#copy_to (var_oit,var_nit,0l,0l,var_from) on <var_oit:NativeString> */
memmove(var_nit+var_from,var_oit+0l,0l);
RET_LABEL35:(void)0;
}
}
} else {
}
{
{ /* Inline kernel#Int#- (var_bt,var_from) on <var_bt:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var38 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_bt - var_from;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_from,var_len) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var45 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var49 = var_from + var_len;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var_oit,var_nit,var36,var_from,var43) on <var_oit:NativeString> */
memmove(var_nit+var43,var_oit+var_from,var36);
RET_LABEL50:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBuffer#lshift_bytes for (self: FlatBuffer, Int, Int) */
void core___core__FlatBuffer___lshift_bytes(val* self, long p0, long p1) {
long var_from /* var from: Int */;
long var_len /* var len: Int */;
char* var /* : NativeString */;
char* var_it /* var it: NativeString */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
var_from = p0;
var_len = p1;
var = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#- (var1,var_from) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var4 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = var1 - var_from;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_from,var_len) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var8 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var_from - var_len;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline native#NativeString#copy_to (var_it,var_it,var2,var_from,var6) on <var_it:NativeString> */
memmove(var_it+var6,var_it+var_from,var2);
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBuffer#[]= for (self: FlatBuffer, Int, Char) */
void core___core__FlatBuffer___core__abstract_text__Buffer___91d_93d_61d(val* self, long p0, uint32_t p1) {
long var_index /* var index: Int */;
uint32_t var_item /* var item: Char */;
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
short int var13 /* : Bool */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
char* var18 /* : NativeString */;
char* var_it /* var it: NativeString */;
long var19 /* : Int */;
long var_ip /* var ip: Int */;
uint32_t var20 /* : Char */;
uint32_t var_c /* var c: Char */;
long var21 /* : Int */;
long var_clen /* var clen: Int */;
long var22 /* : Int */;
long var_itemlen /* var itemlen: Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
long var_size_diff /* var size_diff: Int */;
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
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
long var58 /* : Int */;
long var60 /* : Int */;
val* var_61 /* var : FlatBuffer */;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
var_index = p0;
var_item = p1;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var4 = var_index >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
var5 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#<= (var_index,var5) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var12 = var_index <= var5;
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 830);
fatal_exit(1);
}
{
var13 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var13){
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__is_dirty_61d]))(self, 1); /* is_dirty= on <self:FlatBuffer>*/
}
var14 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#== (var_index,var14) on <var_index:Int> */
var17 = var_index == var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
((void(*)(val* self, uint32_t p0))(self->class->vft[COLOR_core__abstract_text__Buffer__add]))(self, var_item); /* add on <self:FlatBuffer>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var18;
var19 = core___core__NativeString___char_to_byte_index(var_it, var_index);
var_ip = var19;
var20 = core___core__NativeString___char_at(var_it, var_ip);
var_c = var20;
var21 = core__abstract_text___Char___u8char_len(var_c);
var_clen = var21;
var22 = core__abstract_text___Char___u8char_len(var_item);
var_itemlen = var22;
{
{ /* Inline kernel#Int#- (var_itemlen,var_clen) on <var_itemlen:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var25 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var29 = var_itemlen - var_clen;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_size_diff = var23;
{
{ /* Inline kernel#Int#> (var_size_diff,0l) on <var_size_diff:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var36 = var_size_diff > 0l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
{ /* Inline kernel#Int#+ (var_ip,var_clen) on <var_ip:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var39 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var43 = var_ip + var_clen;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__flat__FlatBuffer__rshift_bytes]))(self, var37, var_size_diff); /* rshift_bytes on <self:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Int#< (var_size_diff,0l) on <var_size_diff:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var46 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var50 = var_size_diff < 0l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
{
{ /* Inline kernel#Int#+ (var_ip,var_clen) on <var_ip:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var53 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var57 = var_ip + var_clen;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel#Int#unary - (var_size_diff) on <var_size_diff:Int> */
var60 = -var_size_diff;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__flat__FlatBuffer__lshift_bytes]))(self, var51, var58); /* lshift_bytes on <self:FlatBuffer>*/
}
} else {
}
}
var_61 = self;
var62 = var_61->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_61:FlatBuffer> */
{
{ /* Inline kernel#Int#+ (var62,var_size_diff) on <var62:Int> */
/* Covariant cast for argument 0 (i) <var_size_diff:Int> isa OTHER */
/* <var_size_diff:Int> isa OTHER */
var65 = 1; /* easy <var_size_diff:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var69 = var62 + var_size_diff;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_61->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var63; /* _bytelen on <var_61:FlatBuffer> */
core__flat___NativeString___set_char_at(var_it, var_ip, var_item); /* Direct call flat#NativeString#set_char_at on <var_it:NativeString>*/
RET_LABEL:;
}
/* method flat#FlatBuffer#add for (self: FlatBuffer, Char) */
void core___core__FlatBuffer___core__abstract_text__Buffer__add(val* self, uint32_t p0) {
uint32_t var_c /* var c: Char */;
short int var /* : Bool */;
long var1 /* : Int */;
long var_clen /* var clen: Int */;
long var2 /* : Int */;
long var_bt /* var bt: Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
char* var7 /* : NativeString */;
val* var_ /* var : FlatBuffer */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
val* var_16 /* var : FlatBuffer */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
var_c = p0;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__is_dirty_61d]))(self, 1); /* is_dirty= on <self:FlatBuffer>*/
}
var1 = core__abstract_text___Char___u8char_len(var_c);
var_clen = var1;
var2 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
var_bt = var2;
{
{ /* Inline kernel#Int#+ (var_bt,var_clen) on <var_bt:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var5 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var_bt + var_clen;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Buffer__enlarge]))(self, var3); /* enlarge on <self:FlatBuffer>*/
}
var7 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
core__flat___NativeString___set_char_at(var7, var_bt, var_c); /* Direct call flat#NativeString#set_char_at on <var7:NativeString>*/
var_ = self;
var8 = var_->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_:FlatBuffer> */
{
{ /* Inline kernel#Int#+ (var8,var_clen) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var11 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var15 = var8 + var_clen;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var9; /* _bytelen on <var_:FlatBuffer> */
var_16 = self;
var17 = var_16->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_16:FlatBuffer> */
{
{ /* Inline kernel#Int#+ (var17,1l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var24 = var17 + 1l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_16->attrs[COLOR_core__abstract_text__FlatText___length].l = var18; /* _length on <var_16:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#clear for (self: FlatBuffer) */
void core___core__FlatBuffer___core__abstract_text__Buffer__clear(val* self) {
short int var /* : Bool */;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__is_dirty_61d]))(self, 1); /* is_dirty= on <self:FlatBuffer>*/
}
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = 0l; /* _bytelen on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__FlatText___length].l = 0l; /* _length on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#empty for (self: FlatBuffer): Buffer */
val* core___core__FlatBuffer___core__abstract_text__Text__empty(val* self) {
val* var /* : Buffer */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
var1 = NEW_core__Buffer(&type_core__Buffer);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#enlarge for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___core__abstract_text__Buffer__enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
long var_c /* var c: Int */;
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
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
long var26 /* : Int */;
long var_bln /* var bln: Int */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
char* var35 /* : NativeString */;
char* var37 /* : NativeString */;
char* var_a /* var a: NativeString */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
char* var45 /* : NativeString */;
char* var_it /* var it: NativeString */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
short int var52 /* : Bool */;
var_cap = p0;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
var_c = var;
{
{ /* Inline kernel#Int#<= (var_cap,var_c) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var3 = 1; /* easy <var_c:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var4 = var_cap <= var_c;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
goto RET_LABEL;
} else {
}
for(;;) {
{
{ /* Inline kernel#Int#<= (var_c,var_cap) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var_cap:Int> isa OTHER */
/* <var_cap:Int> isa OTHER */
var7 = 1; /* easy <var_cap:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var11 = var_c <= var_cap;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline kernel#Int#* (var_c,2l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var14 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var18 = var_c * 2l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var12,2l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var21 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var25 = var12 + 2l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_c = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__written_61d]))(self, 0); /* written= on <self:FlatBuffer>*/
}
var26 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
var_bln = var26;
var27 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_c,1l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var34 = var_c + 1l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var27,var28) on <var27:NativeString> */
var37 = (char*)nit_alloc(var28);
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_a = var35;
{
{ /* Inline kernel#Int#> (var_bln,0l) on <var_bln:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var40 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var44 = var_bln > 0l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
var45 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var45;
{
{ /* Inline kernel#Int#> (var_bln,0l) on <var_bln:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var48 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var52 = var_bln > 0l;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
{
{ /* Inline native#NativeString#copy_to (var_it,var_a,var_bln,0l,0l) on <var_it:NativeString> */
memmove(var_a+0l,var_it+0l,var_bln);
RET_LABEL53:(void)0;
}
}
} else {
}
} else {
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_a; /* _items on <self:FlatBuffer> */
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity_61d]))(self, var_c); /* capacity= on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method flat#FlatBuffer#to_s for (self: FlatBuffer): String */
val* core___core__FlatBuffer___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_bln /* var bln: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
char* var5 /* : NativeString */;
char* var6 /* : NativeString */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__written_61d]))(self, 1); /* written= on <self:FlatBuffer>*/
}
var1 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
var_bln = var1;
{
{ /* Inline kernel#Int#== (var_bln,0l) on <var_bln:Int> */
var4 = var_bln == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var5 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var5,1l) on <var5:NativeString> */
var8 = (char*)nit_alloc(1l);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var6; /* _items on <self:FlatBuffer> */
} else {
}
var9 = NEW_core__FlatString(&type_core__FlatString);
var10 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var11 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var9->class->vft[COLOR_core__flat__FlatString__full]))(var9, var10, var_bln, 0l, var11); /* full on <var9:FlatString>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#to_cstring for (self: FlatBuffer): NativeString */
char* core___core__FlatBuffer___core__abstract_text__Text__to_cstring(val* self) {
char* var /* : NativeString */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var_bln /* var bln: Int */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
char* var8 /* : NativeString */;
char* var10 /* : NativeString */;
char* var_new_native /* var new_native: NativeString */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
char* var20 /* : NativeString */;
char* var22 /* : NativeString */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__is_dirty]))(self); /* is_dirty on <self:FlatBuffer>*/
}
if (var1){
var2 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
var_bln = var2;
var3 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_bln,1l) on <var_bln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_bln + 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var3,var4) on <var3:NativeString> */
var10 = (char*)nit_alloc(var4);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_new_native = var8;
{
{ /* Inline native#NativeString#[]= (var_new_native,var_bln,((unsigned char)0x00)) on <var_new_native:NativeString> */
var_new_native[var_bln]=(unsigned char)((unsigned char)0x00);
RET_LABEL11:(void)0;
}
}
var12 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#> (var12,0l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var15 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var19 = var12 > 0l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var20 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
{
{ /* Inline native#NativeString#copy_to (var20,var_new_native,var_bln,0l,0l) on <var20:NativeString> */
memmove(var_new_native+0l,var20+0l,var_bln);
RET_LABEL21:(void)0;
}
}
} else {
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__flat__FlatBuffer__real_items_61d]))(self, var_new_native); /* real_items= on <self:FlatBuffer>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__is_dirty_61d]))(self, 0); /* is_dirty= on <self:FlatBuffer>*/
}
} else {
}
{
var22 = ((char*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__real_items]))(self); /* real_items on <self:FlatBuffer>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#init for (self: FlatBuffer) */
void core___core__FlatBuffer___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method flat#FlatBuffer#with_infos for (self: FlatBuffer, NativeString, Int, Int, Int) */
void core___core__FlatBuffer___with_infos(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: NativeString */;
long var_capacity /* var capacity: Int */;
long var_bytelen /* var bytelen: Int */;
long var_length /* var length: Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
var_items = p0;
var_capacity = p1;
var_bytelen = p2;
var_length = p3;
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_items; /* _items on <self:FlatBuffer> */
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity_61d]))(self, var_capacity); /* capacity= on <self:FlatBuffer>*/
}
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var_bytelen; /* _bytelen on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__FlatText___length].l = var_length; /* _length on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#from for (self: FlatBuffer, Text) */
void core___core__FlatBuffer___from(val* self, val* p0) {
val* var_s /* var s: Text */;
char* var /* : NativeString */;
long var1 /* : Int */;
char* var2 /* : NativeString */;
char* var4 /* : NativeString */;
short int var5 /* : Bool */;
int cltype;
int idtype;
char* var6 /* : NativeString */;
val* var7 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : Iterator[FlatText] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_i /* var i: FlatText */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name;
char* var15 /* : NativeString */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
var_s = p0;
var = NULL/*special!*/;
{
var1 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_s); /* bytelen on <var_s:Text>*/
}
{
{ /* Inline native#NativeString#new (var,var1) on <var:NativeString> */
var4 = (char*)nit_alloc(var1);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var2; /* _items on <self:FlatBuffer> */
/* <var_s:Text> isa FlatText */
cltype = type_core__FlatText.color;
idtype = type_core__FlatText.id;
if(cltype >= var_s->type->table_size) {
var5 = 0;
} else {
var5 = var_s->type->type_table[cltype] == idtype;
}
if (var5){
var6 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:Text(FlatText)> */
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var6; /* _items on <self:FlatBuffer> */
} else {
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__substrings]))(self); /* substrings on <self:FlatBuffer>*/
}
var_ = var7;
{
var8 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[FlatText]>*/
}
if (var10){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[FlatText]>*/
}
var_i = var11;
/* <var_i:FlatText> isa FlatString */
cltype13 = type_core__FlatString.color;
idtype14 = type_core__FlatString.id;
if(cltype13 >= var_i->type->table_size) {
var12 = 0;
} else {
var12 = var_i->type->type_table[cltype13] == idtype14;
}
if (unlikely(!var12)) {
var_class_name = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 937);
fatal_exit(1);
}
var15 = var_i->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_i:FlatText(FlatString)> */
var16 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var17 = var_i->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <var_i:FlatText> */
{
{ /* Inline native#NativeString#copy_to (var15,var16,var17,0l,0l) on <var15:NativeString> */
memmove(var16+0l,var15+0l,var17);
RET_LABEL18:(void)0;
}
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[FlatText]>*/
}
}
{
var19 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_s); /* bytelen on <var_s:Text>*/
}
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var19; /* _bytelen on <self:FlatBuffer> */
{
var20 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text>*/
}
self->attrs[COLOR_core__abstract_text__FlatText___length].l = var20; /* _length on <self:FlatBuffer> */
var21 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = var21; /* _capacity on <self:FlatBuffer> */
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__written_61d]))(self, 1); /* written= on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method flat#FlatBuffer#with_capacity for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___with_capacity(val* self, long p0) {
long var_cap /* var cap: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
long var11 /* : Int */;
char* var12 /* : NativeString */;
char* var14 /* : NativeString */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
var_cap = p0;
{
{ /* Inline kernel#Int#>= (var_cap,0l) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var3 = var_cap >= 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 948);
fatal_exit(1);
}
var4 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_cap,1l) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var11 = var_cap + 1l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var4,var5) on <var4:NativeString> */
var14 = (char*)nit_alloc(var5);
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var12; /* _items on <self:FlatBuffer> */
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity_61d]))(self, var_cap); /* capacity= on <self:FlatBuffer>*/
}
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = 0l; /* _bytelen on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#append for (self: FlatBuffer, Text) */
void core___core__FlatBuffer___core__abstract_text__Buffer__append(val* self, val* p0) {
val* var_s /* var s: Text */;
short int var /* : Bool */;
long var1 /* : Int */;
long var_sl /* var sl: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_nln /* var nln: Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
char* var10 /* : NativeString */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
long var13 /* : Int */;
val* var15 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[FlatText] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_i /* var i: FlatText */;
val* var_20 /* var : FlatBuffer */;
long var21 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
var_s = p0;
{
var = ((short int(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_s); /* is_empty on <var_s:Text>*/
}
if (var){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__is_dirty_61d]))(self, 1); /* is_dirty= on <self:FlatBuffer>*/
}
{
var1 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_s); /* bytelen on <var_s:Text>*/
}
var_sl = var1;
var2 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#+ (var2,var_sl) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var5 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var2 + var_sl;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_nln = var3;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Buffer__enlarge]))(self, var_nln); /* enlarge on <self:FlatBuffer>*/
}
/* <var_s:Text> isa FlatText */
cltype8 = type_core__FlatText.color;
idtype9 = type_core__FlatText.id;
if(cltype8 >= var_s->type->table_size) {
var7 = 0;
} else {
var7 = var_s->type->type_table[cltype8] == idtype9;
}
if (var7){
var10 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:Text(FlatText)> */
var11 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
{
var12 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_s); /* first_byte on <var_s:Text(FlatText)>*/
}
var13 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatBuffer> */
{
{ /* Inline native#NativeString#copy_to (var10,var11,var_sl,var12,var13) on <var10:NativeString> */
memmove(var11+var13,var10+var12,var_sl);
RET_LABEL14:(void)0;
}
}
} else {
{
var15 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_s); /* substrings on <var_s:Text>*/
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
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Buffer__append]))(self, var_i); /* append on <self:FlatBuffer>*/
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[FlatText]>*/
}
goto RET_LABEL;
}
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = var_nln; /* _bytelen on <self:FlatBuffer> */
var_20 = self;
var21 = var_20->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_20:FlatBuffer> */
{
var22 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text(FlatText)>*/
}
{
{ /* Inline kernel#Int#+ (var21,var22) on <var21:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var29 = var21 + var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_20->attrs[COLOR_core__abstract_text__FlatText___length].l = var23; /* _length on <var_20:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#copy for (self: FlatBuffer, Int, Int, Buffer, Int) */
void core___core__FlatBuffer___copy(val* self, long p0, long p1, val* p2, long p3) {
long var_start /* var start: Int */;
long var_len /* var len: Int */;
val* var_dest /* var dest: Buffer */;
long var_new_start /* var new_start: Int */;
val* var /* : SequenceRead[Char] */;
val* var_self_chars /* var self_chars: Sequence[Char] */;
val* var1 /* : SequenceRead[Char] */;
val* var_dest_chars /* var dest_chars: Sequence[Char] */;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_ /* var : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var27 /* : nullable Object */;
long var28 /* : Int */;
var_start = p0;
var_len = p1;
var_dest = p2;
var_new_start = p3;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:FlatBuffer>*/
}
var_self_chars = var;
{
var1 = ((val*(*)(val* self))(var_dest->class->vft[COLOR_core__abstract_text__Text__chars]))(var_dest); /* chars on <var_dest:Buffer>*/
}
var_dest_chars = var1;
var_i = 0l;
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = var_len - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var12 = var_i <= var_;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel#Int#+ (var_new_start,var_i) on <var_new_start:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var15 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var19 = var_new_start + var_i;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_start,var_i) on <var_start:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var22 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var26 = var_start + var_i;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
var27 = ((val*(*)(val* self, long p0))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_self_chars, var20); /* [] on <var_self_chars:Sequence[Char]>*/
}
{
((void(*)(val* self, long p0, val* p1))((((long)var_dest_chars&3)?class_info[((long)var_dest_chars&3)]:var_dest_chars->class)->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_dest_chars, var13, var27); /* []= on <var_dest_chars:Sequence[Char]>*/
}
var28 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var28;
}
BREAK_label: (void)0;
RET_LABEL:;
}
