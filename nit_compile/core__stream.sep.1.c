#include "core__stream.sep.0.h"
/* method stream#Stream#last_error for (self: Stream): nullable IOError */
val* core___core__Stream___last_error(val* self) {
val* var /* : nullable IOError */;
val* var1 /* : nullable IOError */;
var1 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:Stream> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#Stream#last_error= for (self: Stream, nullable IOError) */
void core___core__Stream___last_error_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__Stream___last_error].val = p0; /* _last_error on <self:Stream> */
RET_LABEL:;
}
/* method stream#Stream#close for (self: Stream) */
void core___core__Stream___close(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "close", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 40);
fatal_exit(1);
RET_LABEL:;
}
/* method stream#Stream#start for (self: Stream) */
void core___core__Stream___start(val* self) {
RET_LABEL:;
}
/* method stream#Stream#finish for (self: Stream) */
void core___core__Stream___finish(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__close]))(self); /* close on <self:Stream>*/
}
RET_LABEL:;
}
/* method stream#Reader#decoder for (self: Reader): Decoder */
val* core___core__Reader___decoder(val* self) {
val* var /* : Decoder */;
val* var1 /* : Decoder */;
var1 = self->attrs[COLOR_core__stream__Reader___decoder].val; /* _decoder on <self:Reader> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decoder");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 68);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream#Reader#decoder= for (self: Reader, Decoder) */
void core___core__Reader___decoder_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__Reader___decoder].val = p0; /* _decoder on <self:Reader> */
RET_LABEL:;
}
/* method stream#Reader#read_char for (self: Reader): nullable Char */
val* core___core__Reader___read_char(val* self) {
val* var /* : nullable Char */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "read_char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 71);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream#Reader#read_byte for (self: Reader): nullable Byte */
val* core___core__Reader___read_byte(val* self) {
val* var /* : nullable Byte */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "read_byte", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 74);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream#Reader#read for (self: Reader, Int): String */
val* core___core__Reader___read(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var1 /* : Bytes */;
val* var2 /* : String */;
var_i = p0;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__stream__Reader__read_bytes]))(self, var_i); /* read_bytes on <self:Reader>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1); /* to_s on <var1:Bytes>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#read_bytes for (self: Reader, Int): Bytes */
val* core___core__Reader___read_bytes(val* self, long p0) {
val* var /* : Bytes */;
long var_i /* var i: Int */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Bytes */;
char* var5 /* : NativeString */;
char* var6 /* : NativeString */;
char* var8 /* : NativeString */;
char* var_s /* var s: NativeString */;
val* var9 /* : Bytes */;
val* var_buf /* var buf: Bytes */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable Byte */;
val* var_c /* var c: nullable Byte */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:Reader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
var4 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self))(var4->class->vft[COLOR_core__bytes__Bytes__empty]))(var4); /* empty on <var4:Bytes>*/
}
var = var4;
goto RET_LABEL;
} else {
}
var5 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var5,var_i) on <var5:NativeString> */
var8 = (char*)nit_alloc(var_i);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_s = var6;
var9 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, char* p0))(var9->class->vft[COLOR_core__bytes__Bytes__items_61d]))(var9, var_s); /* items= on <var9:Bytes>*/
}
{
((void(*)(val* self, long p0))(var9->class->vft[COLOR_core__array__AbstractArrayRead__length_61d]))(var9, 0l); /* length= on <var9:Bytes>*/
}
{
((void(*)(val* self, long p0))(var9->class->vft[COLOR_core__bytes__Bytes__capacity_61d]))(var9, 0l); /* capacity= on <var9:Bytes>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:Bytes>*/
}
var_buf = var9;
for(;;) {
{
{ /* Inline kernel#Int#> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var13 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var14 = var_i > 0l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
{
var15 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var16 = !var15;
var10 = var16;
} else {
var10 = var_;
}
if (var10){
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_byte]))(self); /* read_byte on <self:Reader>*/
}
var_c = var17;
if (var_c == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Byte#!= (var_c,((val*)NULL)) on <var_c:nullable Byte> */
var21 = 0; /* incompatible types Byte vs. null; cannot be NULL */
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_buf, var_c); /* add on <var_buf:Bytes>*/
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
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_buf;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#read_line for (self: Reader): String */
val* core___core__Reader___read_line(val* self) {
val* var /* : String */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
short int var7 /* : Bool */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
val* var12 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var13 /* : String */;
val* var14 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:Reader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = core__flat___NativeString___to_s_full(var5, 0l, 0l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
var7 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
if (var7){
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "";
var11 = core__flat___NativeString___to_s_full(var10, 0l, 0l);
var9 = var11;
varonce8 = var9;
}
var = var9;
goto RET_LABEL;
} else {
}
var12 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self))(var12->class->vft[COLOR_core__kernel__Object__init]))(var12); /* init on <var12:FlatBuffer>*/
}
var_s = var12;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Reader__append_line_to]))(self, var_s); /* append_line_to on <self:Reader>*/
}
{
var13 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:FlatBuffer>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__Text__chomp]))(var13); /* chomp on <var13:String>*/
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#read_lines for (self: Reader): Array[String] */
val* core___core__Reader___read_lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : String */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_res = var1;
for(;;) {
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var3 = !var2;
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_line]))(self); /* read_line on <self:Reader>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var4); /* add on <var_res:Array[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#each_line for (self: Reader): LineIterator */
val* core___core__Reader___each_line(val* self) {
val* var /* : LineIterator */;
val* var1 /* : LineIterator */;
var1 = NEW_core__LineIterator(&type_core__LineIterator);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__stream__LineIterator__stream_61d]))(var1, self); /* stream= on <var1:LineIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:LineIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#read_all for (self: Reader): String */
val* core___core__Reader___read_all(val* self) {
val* var /* : String */;
val* var1 /* : Bytes */;
val* var_s /* var s: Bytes */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var_rets /* var rets: String */;
long var_pos /* var pos: Int */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var_str /* var str: FlatString */;
long var15 /* : Int */;
char* var16 /* : NativeString */;
char* var_sits /* var sits: NativeString */;
long var_remsp /* var remsp: Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var20 /* : Bool */;
long var_chunksz /* var chunksz: Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
val* var28 /* : FlatString */;
val* var29 /* : String */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var44 /* : Int */;
long var_st /* var st: Int */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
long var_bytelen /* var bytelen: Int */;
val* var52 /* : FlatString */;
val* var53 /* : String */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
val* var64 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_all_bytes]))(self); /* read_all_bytes on <self:Reader>*/
}
var_s = var1;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Bytes>*/
}
var_slen = var2;
{
{ /* Inline kernel#Int#== (var_slen,0l) on <var_slen:Int> */
var5 = var_slen == 0l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "";
var8 = core__flat___NativeString___to_s_full(var7, 0l, 0l);
var6 = var8;
varonce = var6;
}
var = var6;
goto RET_LABEL;
} else {
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "";
var12 = core__flat___NativeString___to_s_full(var11, 0l, 0l);
var10 = var12;
varonce9 = var10;
}
var_rets = var10;
var_pos = 0l;
{
var13 = ((char*(*)(val* self))(var_s->class->vft[COLOR_core__bytes__Bytes__items]))(var_s); /* items on <var_s:Bytes>*/
}
var14 = core__flat___NativeString___clean_utf8(var13, var_slen);
var_str = var14;
{
var15 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_str); /* bytelen on <var_str:FlatString>*/
}
var_slen = var15;
{
var16 = ((char*(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__FlatText__items]))(var_str); /* items on <var_str:FlatString>*/
}
var_sits = var16;
var_remsp = var_slen;
for(;;) {
{
{ /* Inline kernel#Int#< (var_pos,var_slen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var19 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var20 = var_pos < var_slen;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
var_chunksz = 129l;
{
{ /* Inline kernel#Int#> (var_chunksz,var_remsp) on <var_chunksz:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var23 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var27 = var_chunksz > var_remsp;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
var28 = NEW_core__FlatString(&type_core__FlatString);
{
((void(*)(val* self, char* p0, long p1, long p2))(var28->class->vft[COLOR_core__flat__FlatString__with_infos]))(var28, var_sits, var_remsp, var_pos); /* with_infos on <var28:FlatString>*/
}
{
var29 = ((val*(*)(val* self, val* p0))(var_rets->class->vft[COLOR_core__abstract_text__String___43d]))(var_rets, var28); /* + on <var_rets:String>*/
}
var_rets = var29;
goto BREAK_label;
} else {
}
{
{ /* Inline kernel#Int#+ (var_pos,var_chunksz) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_chunksz:Int> isa OTHER */
/* <var_chunksz:Int> isa OTHER */
var32 = 1; /* easy <var_chunksz:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var36 = var_pos + var_chunksz;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var30,1l) on <var30:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var43 = var30 - 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var44 = core___core__NativeString___find_beginning_of_char_at(var_sits, var37);
var_st = var44;
{
{ /* Inline kernel#Int#- (var_st,var_pos) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var47 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var51 = var_st - var_pos;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_bytelen = var45;
var52 = NEW_core__FlatString(&type_core__FlatString);
{
((void(*)(val* self, char* p0, long p1, long p2))(var52->class->vft[COLOR_core__flat__FlatString__with_infos]))(var52, var_sits, var_bytelen, var_pos); /* with_infos on <var52:FlatString>*/
}
{
var53 = ((val*(*)(val* self, val* p0))(var_rets->class->vft[COLOR_core__abstract_text__String___43d]))(var_rets, var52); /* + on <var_rets:String>*/
}
var_rets = var53;
var_pos = var_st;
{
{ /* Inline kernel#Int#- (var_remsp,var_bytelen) on <var_remsp:Int> */
/* Covariant cast for argument 0 (i) <var_bytelen:Int> isa OTHER */
/* <var_bytelen:Int> isa OTHER */
var56 = 1; /* easy <var_bytelen:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var60 = var_remsp - var_bytelen;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_remsp = var54;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
/* <var_rets:String> isa Concat */
cltype62 = type_core__ropes__Concat.color;
idtype63 = type_core__ropes__Concat.id;
if(cltype62 >= var_rets->type->table_size) {
var61 = 0;
} else {
var61 = var_rets->type->type_table[cltype62] == idtype63;
}
if (var61){
{
var64 = ((val*(*)(val* self))(var_rets->class->vft[COLOR_core__ropes__Concat__balance]))(var_rets); /* balance on <var_rets:String(Concat)>*/
}
var = var64;
goto RET_LABEL;
} else {
}
var = var_rets;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#read_all_bytes for (self: Reader): Bytes */
val* core___core__Reader___read_all_bytes(val* self) {
val* var /* : Bytes */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Bytes */;
val* var5 /* : Bytes */;
val* var_s /* var s: Bytes */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Byte */;
val* var_c /* var c: nullable Byte */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:Reader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
var4 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self))(var4->class->vft[COLOR_core__bytes__Bytes__empty]))(var4); /* empty on <var4:Bytes>*/
}
var = var4;
goto RET_LABEL;
} else {
}
var5 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self))(var5->class->vft[COLOR_core__bytes__Bytes__empty]))(var5); /* empty on <var5:Bytes>*/
}
var_s = var5;
for(;;) {
{
var6 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var7 = !var6;
if (var7){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_byte]))(self); /* read_byte on <self:Reader>*/
}
var_c = var8;
if (var_c == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Byte#!= (var_c,((val*)NULL)) on <var_c:nullable Byte> */
var12 = 0; /* incompatible types Byte vs. null; cannot be NULL */
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_s, var_c); /* add on <var_s:Bytes>*/
}
} else {
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#append_line_to for (self: Reader, Buffer) */
void core___core__Reader___append_line_to(val* self, val* p0) {
val* var_s /* var s: Buffer */;
val* var /* : nullable IOError */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Char */;
val* var_x /* var x: nullable Char */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
uint32_t var13 /* : Char */;
var_s = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:Reader>*/
}
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable IOError>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
for(;;) {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_char]))(self); /* read_char on <self:Reader>*/
}
var_x = var3;
if (var_x == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Char#== (var_x,((val*)NULL)) on <var_x:nullable Char> */
var7 = 0; /* incompatible types Char vs. null; cannot be NULL */
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
var8 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
if (var8){
goto RET_LABEL;
} else {
}
} else {
{
var9 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
((void(*)(val* self, val* p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__Sequence__push]))(var9, var_x); /* push on <var9:SequenceRead[Char](Sequence[Char])>*/
}
{
{ /* Inline kernel#Char#== (var_x,'\n') on <var_x:nullable Char(Char)> */
var13 = (uint32_t)((long)(var_x)>>2);
var12 = var13 == '\n';
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
goto RET_LABEL;
} else {
}
}
}
RET_LABEL:;
}
/* method stream#Reader#eof for (self: Reader): Bool */
short int core___core__Reader___eof(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "eof", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 284);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream#Reader#read_word for (self: Reader): String */
val* core___core__Reader___read_word(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_buf /* var buf: FlatBuffer */;
val* var2 /* : nullable Char */;
val* var_c /* var c: nullable Char */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
uint32_t var8 /* : Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable Char */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
uint32_t var17 /* : Char */;
uint32_t var18 /* : Char */;
val* var19 /* : String */;
val* var_res /* var res: String */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_buf = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_nonwhitespace]))(self); /* read_nonwhitespace on <self:Reader>*/
}
var_c = var2;
if (var_c == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Char#!= (var_c,((val*)NULL)) on <var_c:nullable Char> */
var6 = 0; /* incompatible types Char vs. null; cannot be NULL */
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
var8 = (uint32_t)((long)(var_c)>>2);
((void(*)(val* self, uint32_t p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buf, var8); /* add on <var_buf:FlatBuffer>*/
}
for(;;) {
{
var9 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var10 = !var9;
if (var10){
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_char]))(self); /* read_char on <self:Reader>*/
}
var_c = var11;
if (var_c == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Char#== (var_c,((val*)NULL)) on <var_c:nullable Char> */
var15 = 0; /* incompatible types Char vs. null; cannot be NULL */
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
goto BREAK_label;
} else {
}
var17 = (uint32_t)((long)(var_c)>>2);
var16 = core___core__Char___is_whitespace(var17);
if (var16){
goto BREAK_label;
} else {
}
{
var18 = (uint32_t)((long)(var_c)>>2);
((void(*)(val* self, uint32_t p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buf, var18); /* add on <var_buf:FlatBuffer>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
{
var19 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_buf); /* to_s on <var_buf:FlatBuffer>*/
}
var_res = var19;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Reader#read_nonwhitespace for (self: Reader): nullable Char */
val* core___core__Reader___read_nonwhitespace(val* self) {
val* var /* : nullable Char */;
val* var_c /* var c: nullable Char */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Char */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
uint32_t var10 /* : Char */;
short int var11 /* : Bool */;
var_c = ((val*)NULL);
for(;;) {
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var2 = !var1;
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_char]))(self); /* read_char on <self:Reader>*/
}
var_c = var3;
if (var_c == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Char#== (var_c,((val*)NULL)) on <var_c:nullable Char> */
var8 = 0; /* incompatible types Char vs. null; cannot be NULL */
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
var_ = var5;
if (var5){
var4 = var_;
} else {
var10 = (uint32_t)((long)(var_c)>>2);
var9 = core___core__Char___is_whitespace(var10);
var11 = !var9;
var4 = var11;
}
if (var4){
goto BREAK_label;
} else {
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_c;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#LineIterator#stream for (self: LineIterator): Reader */
val* core___core__LineIterator___stream(val* self) {
val* var /* : Reader */;
val* var1 /* : Reader */;
var1 = self->attrs[COLOR_core__stream__LineIterator___stream].val; /* _stream on <self:LineIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 353);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream#LineIterator#stream= for (self: LineIterator, Reader) */
void core___core__LineIterator___stream_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__LineIterator___stream].val = p0; /* _stream on <self:LineIterator> */
RET_LABEL:;
}
/* method stream#LineIterator#is_ok for (self: LineIterator): Bool */
short int core___core__LineIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Reader */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var_res /* var res: Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Reader */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__stream]))(self); /* stream on <self:LineIterator>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_core__stream__Reader__eof]))(var1); /* eof on <var1:Reader>*/
}
var3 = !var2;
var_res = var3;
var5 = !var_res;
var_ = var5;
if (var5){
{
var6 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__close_on_finish]))(self); /* close_on_finish on <self:LineIterator>*/
}
var4 = var6;
} else {
var4 = var_;
}
if (var4){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__stream]))(self); /* stream on <self:LineIterator>*/
}
{
((void(*)(val* self))(var7->class->vft[COLOR_core__stream__Stream__close]))(var7); /* close on <var7:Reader>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#LineIterator#item for (self: LineIterator): String */
val* core___core__LineIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_line /* var line: nullable String */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Reader */;
val* var5 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__line]))(self); /* line on <self:LineIterator>*/
}
var_line = var1;
if (var_line == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_line->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_line, ((val*)NULL)); /* == on <var_line:nullable String>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__stream]))(self); /* stream on <self:LineIterator>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__stream__Reader__read_line]))(var4); /* read_line on <var4:Reader>*/
}
var_line = var5;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__LineIterator__line_61d]))(self, var_line); /* line= on <self:LineIterator>*/
}
var = var_line;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#LineIterator#line for (self: LineIterator): nullable String */
val* core___core__LineIterator___line(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_core__stream__LineIterator___line].val; /* _line on <self:LineIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#LineIterator#line= for (self: LineIterator, nullable String) */
void core___core__LineIterator___line_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__LineIterator___line].val = p0; /* _line on <self:LineIterator> */
RET_LABEL:;
}
/* method stream#LineIterator#next for (self: LineIterator) */
void core___core__LineIterator___core__abstract_collection__Iterator__next(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__line]))(self); /* line on <self:LineIterator>*/
}
if (var == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, ((val*)NULL)); /* == on <var:nullable String>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Iterator__item]))(self); /* item on <self:LineIterator>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__LineIterator__line_61d]))(self, ((val*)NULL)); /* line= on <self:LineIterator>*/
}
RET_LABEL:;
}
/* method stream#LineIterator#close_on_finish for (self: LineIterator): Bool */
short int core___core__LineIterator___close_on_finish(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__stream__LineIterator___close_on_finish].s; /* _close_on_finish on <self:LineIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#LineIterator#close_on_finish= for (self: LineIterator, Bool) */
void core___core__LineIterator___close_on_finish_61d(val* self, short int p0) {
self->attrs[COLOR_core__stream__LineIterator___close_on_finish].s = p0; /* _close_on_finish on <self:LineIterator> */
RET_LABEL:;
}
/* method stream#LineIterator#finish for (self: LineIterator) */
void core___core__LineIterator___core__abstract_collection__Iterator__finish(val* self) {
short int var /* : Bool */;
val* var1 /* : Reader */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__close_on_finish]))(self); /* close_on_finish on <self:LineIterator>*/
}
if (var){
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__stream]))(self); /* stream on <self:LineIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__stream__Stream__close]))(var1); /* close on <var1:Reader>*/
}
} else {
}
RET_LABEL:;
}
/* method stream#LineIterator#init for (self: LineIterator) */
void core___core__LineIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__LineIterator___core__kernel__Object__init]))(self); /* init on <self:LineIterator>*/
}
RET_LABEL:;
}
/* method stream#PollableReader#poll_in for (self: PollableReader): Bool */
short int core___core__PollableReader___poll_in(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "poll_in", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 399);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream#Writer#coder for (self: Writer): Coder */
val* core___core__Writer___coder(val* self) {
val* var /* : Coder */;
val* var1 /* : Coder */;
var1 = self->attrs[COLOR_core__stream__Writer___coder].val; /* _coder on <self:Writer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _coder");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 408);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream#Writer#coder= for (self: Writer, Coder) */
void core___core__Writer___coder_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__Writer___coder].val = p0; /* _coder on <self:Writer> */
RET_LABEL:;
}
/* method stream#Writer#write_bytes for (self: Writer, Bytes) */
void core___core__Writer___write_bytes(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "write_bytes", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 411);
fatal_exit(1);
RET_LABEL:;
}
/* method stream#Writer#write for (self: Writer, Text) */
void core___core__Writer___write(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "write", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 414);
fatal_exit(1);
RET_LABEL:;
}
/* method stream#Writer#write_byte for (self: Writer, Byte) */
void core___core__Writer___write_byte(val* self, unsigned char p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "write_byte", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 417);
fatal_exit(1);
RET_LABEL:;
}
/* method stream#Writer#is_writable for (self: Writer): Bool */
short int core___core__Writer___is_writable(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "is_writable", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 420);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream#Writable#write_to for (self: Writable, Writer) */
void core___core__Writable___write_to(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "write_to", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 431);
fatal_exit(1);
RET_LABEL:;
}
/* method stream#Writable#write_to_string for (self: Writable): String */
val* core___core__Writable___write_to_string(val* self) {
val* var /* : String */;
val* var1 /* : StringWriter */;
val* var_stream /* var stream: StringWriter */;
val* var2 /* : String */;
var1 = NEW_core__StringWriter(&type_core__StringWriter);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:StringWriter>*/
}
var_stream = var1;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__stream__Writable__write_to]))(self, var_stream); /* write_to on <self:Writable>*/
}
{
var2 = ((val*(*)(val* self))(var_stream->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_stream); /* to_s on <var_stream:StringWriter>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Bytes#write_to for (self: Bytes, Writer) */
void core__stream___Bytes___Writable__write_to(val* self, val* p0) {
val* var_s /* var s: Writer */;
var_s = p0;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__stream__Writer__write_bytes]))(var_s, self); /* write_bytes on <var_s:Writer>*/
}
RET_LABEL:;
}
/* method stream#Bytes#write_to_string for (self: Bytes): String */
val* core__stream___Bytes___Writable__write_to_string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Bytes>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#Text#write_to for (self: Text, Writer) */
void core__stream___Text___Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
var_stream = p0;
{
((void(*)(val* self, val* p0))(var_stream->class->vft[COLOR_core__stream__Writer__write]))(var_stream, self); /* write on <var_stream:Writer>*/
}
RET_LABEL:;
}
/* method stream#BufferedReader#read_char for (self: BufferedReader): nullable Char */
val* core___core__BufferedReader___Reader__read_char(val* self) {
val* var /* : nullable Char */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
unsigned char var11 /* : Byte */;
unsigned char var13 /* : Byte */;
long var14 /* : Int */;
long var16 /* : Int */;
uint32_t var17 /* : Char */;
uint32_t var19 /* : Char */;
uint32_t var_c /* var c: Char */;
val* var_ /* var : BufferedReader */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var24 /* : Int */;
val* var25 /* : nullable Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:BufferedReader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var4 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:BufferedReader>*/
}
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Stream has reached eof";
var8 = core__flat___NativeString___to_s_full(var7, 22l, 22l);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var6); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:BufferedReader>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var10 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline native#NativeString#[] (var9,var10) on <var9:NativeString> */
var13 = (unsigned char)((int)var9[var10]);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Byte#to_i (var11) on <var11:Byte> */
var16 = (long)var11;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Int#code_point (var14) on <var14:Int> */
var19 = (uint32_t)var14;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_c = var17;
var_ = self;
var20 = var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <var_:BufferedReader> */
{
{ /* Inline kernel#Int#+ (var20,1l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var24 = var20 + 1l;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var21; /* _buffer_pos on <var_:BufferedReader> */
var25 = (val*)((long)(var_c)<<2|2);
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#read_byte for (self: BufferedReader): nullable Byte */
val* core___core__BufferedReader___Reader__read_byte(val* self) {
val* var /* : nullable Byte */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
unsigned char var11 /* : Byte */;
unsigned char var13 /* : Byte */;
unsigned char var_c /* var c: Byte */;
val* var_ /* var : BufferedReader */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var18 /* : Int */;
val* var19 /* : nullable Byte */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:BufferedReader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var4 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:BufferedReader>*/
}
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Stream has reached eof";
var8 = core__flat___NativeString___to_s_full(var7, 22l, 22l);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var6); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:BufferedReader>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var10 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline native#NativeString#[] (var9,var10) on <var9:NativeString> */
var13 = (unsigned char)((int)var9[var10]);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_c = var11;
var_ = self;
var14 = var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <var_:BufferedReader> */
{
{ /* Inline kernel#Int#+ (var14,1l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var18 = var14 + 1l;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var15; /* _buffer_pos on <var_:BufferedReader> */
var19 = BOX_core__Byte(var_c); /* autobox from Byte to nullable Byte */
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#buffer_reset for (self: BufferedReader) */
void core___core__BufferedReader___buffer_reset(val* self) {
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream#BufferedReader#peek for (self: BufferedReader, Int): Bytes */
val* core___core__BufferedReader___peek(val* self, long p0) {
val* var /* : Bytes */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
val* var2 /* : Bytes */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
long var_remsp /* var remsp: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : Bytes */;
val* var_bf /* var bf: Bytes */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : Bytes */;
val* var_bf20 /* var bf: Bytes */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var_full_len /* var full_len: Int */;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
long var58 /* : Int */;
long var_c /* var c: Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
short int var65 /* : Bool */;
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
char* var80 /* : NativeString */;
long var81 /* : Int */;
char* var82 /* : NativeString */;
char* var84 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
long var90 /* : Int */;
var_i = p0;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:BufferedReader>*/
}
if (var1){
var2 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__bytes__Bytes__empty]))(var2); /* empty on <var2:Bytes>*/
}
var = var2;
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
var4 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
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
var_remsp = var5;
{
{ /* Inline kernel#Int#<= (var_i,var_remsp) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var11 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var15 = var_i <= var_remsp;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var16 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, long p0))(var16->class->vft[COLOR_core__bytes__Bytes__with_capacity]))(var16, var_i); /* with_capacity on <var16:Bytes>*/
}
var_bf = var16;
var17 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var18 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
((void(*)(val* self, char* p0, long p1, long p2))(var_bf->class->vft[COLOR_core__bytes__Bytes__append_ns_from]))(var_bf, var17, var_i, var18); /* append_ns_from on <var_bf:Bytes>*/
}
var = var_bf;
goto RET_LABEL;
} else {
}
var19 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, long p0))(var19->class->vft[COLOR_core__bytes__Bytes__with_capacity]))(var19, var_i); /* with_capacity on <var19:Bytes>*/
}
var_bf20 = var19;
var21 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var22 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
((void(*)(val* self, char* p0, long p1, long p2))(var_bf20->class->vft[COLOR_core__bytes__Bytes__append_ns_from]))(var_bf20, var21, var_remsp, var22); /* append_ns_from on <var_bf20:Bytes>*/
}
var23 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var23; /* _buffer_pos on <self:BufferedReader> */
{
var24 = ((long(*)(val* self))(var_bf20->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_bf20); /* length on <var_bf20:Bytes>*/
}
{
{ /* Inline kernel#Int#- (var_i,var24) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var31 = var_i - var24;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
var32 = ((long(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__stream__BufferedReader__read_intern]))(self, var25, var_bf20); /* read_intern on <self:BufferedReader>*/
}
var33 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
var34 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel#Int#- (var33,var34) on <var33:Int> */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var37 = 1; /* easy <var34:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var41 = var33 - var34;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_remsp = var35;
{
var42 = ((long(*)(val* self))(var_bf20->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_bf20); /* length on <var_bf20:Bytes>*/
}
{
{ /* Inline kernel#Int#+ (var42,var_remsp) on <var42:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var45 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var49 = var42 + var_remsp;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_full_len = var43;
var50 = self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l; /* _buffer_capacity on <self:BufferedReader> */
{
{ /* Inline kernel#Int#> (var_full_len,var50) on <var_full_len:Int> */
/* Covariant cast for argument 0 (i) <var50:Int> isa OTHER */
/* <var50:Int> isa OTHER */
var53 = 1; /* easy <var50:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var57 = var_full_len > var50;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
var58 = self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l; /* _buffer_capacity on <self:BufferedReader> */
var_c = var58;
for(;;) {
{
{ /* Inline kernel#Int#< (var_c,var_full_len) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var_full_len:Int> isa OTHER */
/* <var_full_len:Int> isa OTHER */
var61 = 1; /* easy <var_full_len:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var65 = var_c < var_full_len;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
{
{ /* Inline kernel#Int#* (var_c,2l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var68 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var72 = var_c * 2l;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var66,2l) on <var66:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var75 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var79 = var66 + 2l;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var_c = var73;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l = var_c; /* _buffer_capacity on <self:BufferedReader> */
} else {
}
var80 = NULL/*special!*/;
var81 = self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l; /* _buffer_capacity on <self:BufferedReader> */
{
{ /* Inline native#NativeString#new (var80,var81) on <var80:NativeString> */
var84 = (char*)nit_alloc(var81);
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var_nns = var82;
{
var85 = ((char*(*)(val* self))(var_bf20->class->vft[COLOR_core__bytes__Bytes__items]))(var_bf20); /* items on <var_bf20:Bytes>*/
}
{
var86 = ((long(*)(val* self))(var_bf20->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_bf20); /* length on <var_bf20:Bytes>*/
}
{
{ /* Inline native#NativeString#copy_to (var85,var_nns,var86,0l,0l) on <var85:NativeString> */
memmove(var_nns+0l,var85+0l,var86);
RET_LABEL87:(void)0;
}
}
var88 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var89 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
var90 = ((long(*)(val* self))(var_bf20->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_bf20); /* length on <var_bf20:Bytes>*/
}
{
{ /* Inline native#NativeString#copy_to (var88,var_nns,var_remsp,var89,var90) on <var88:NativeString> */
memmove(var_nns+var90,var88+var89,var_remsp);
RET_LABEL91:(void)0;
}
}
self->attrs[COLOR_core__stream__BufferedReader___buffer].str = var_nns; /* _buffer on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = var_full_len; /* _buffer_length on <self:BufferedReader> */
var = var_bf20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#read_bytes for (self: BufferedReader, Int): Bytes */
val* core___core__BufferedReader___Reader__read_bytes(val* self, long p0) {
val* var /* : Bytes */;
long var_i /* var i: Int */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Bytes */;
val* var5 /* : Bytes */;
val* var_buf /* var buf: Bytes */;
long var6 /* : Int */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:BufferedReader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
var4 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self))(var4->class->vft[COLOR_core__bytes__Bytes__empty]))(var4); /* empty on <var4:Bytes>*/
}
var = var4;
goto RET_LABEL;
} else {
}
var5 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_core__bytes__Bytes__with_capacity]))(var5, var_i); /* with_capacity on <var5:Bytes>*/
}
var_buf = var5;
{
var6 = ((long(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__stream__BufferedReader__read_intern]))(self, var_i, var_buf); /* read_intern on <self:BufferedReader>*/
}
var = var_buf;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#read_intern for (self: BufferedReader, Int, Bytes): Int */
long core___core__BufferedReader___read_intern(val* self, long p0, val* p1) {
long var /* : Int */;
long var_i /* var i: Int */;
val* var_buf /* var buf: Bytes */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var_p /* var p: Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var_bufsp /* var bufsp: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var_ /* var : BufferedReader */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
long var_readln /* var readln: Int */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
long var_rd /* var rd: Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
var_i = p0;
var_buf = p1;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:BufferedReader>*/
}
if (var1){
var = 0l;
goto RET_LABEL;
} else {
}
var2 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_p = var2;
var3 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel#Int#- (var3,var_p) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var6 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var3 - var_p;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_bufsp = var4;
{
{ /* Inline kernel#Int#>= (var_bufsp,var_i) on <var_bufsp:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var10 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var14 = var_bufsp >= var_i;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var_ = self;
var15 = var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <var_:BufferedReader> */
{
{ /* Inline kernel#Int#+ (var15,var_i) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var18 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var22 = var15 + var_i;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var16; /* _buffer_pos on <var_:BufferedReader> */
var23 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
((void(*)(val* self, char* p0, long p1, long p2))(var_buf->class->vft[COLOR_core__bytes__Bytes__append_ns_from]))(var_buf, var23, var_i, var_p); /* append_ns_from on <var_buf:Bytes>*/
}
var = var_i;
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var24; /* _buffer_pos on <self:BufferedReader> */
var25 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel#Int#- (var25,var_p) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var28 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var32 = var25 - var_p;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_readln = var26;
var33 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
((void(*)(val* self, char* p0, long p1, long p2))(var_buf->class->vft[COLOR_core__bytes__Bytes__append_ns_from]))(var_buf, var33, var_readln, var_p); /* append_ns_from on <var_buf:Bytes>*/
}
{
{ /* Inline kernel#Int#- (var_i,var_readln) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_readln:Int> isa OTHER */
/* <var_readln:Int> isa OTHER */
var36 = 1; /* easy <var_readln:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var40 = var_i - var_readln;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var41 = ((long(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__stream__BufferedReader__read_intern]))(self, var34, var_buf); /* read_intern on <self:BufferedReader>*/
}
var_rd = var41;
{
{ /* Inline kernel#Int#+ (var_rd,var_readln) on <var_rd:Int> */
/* Covariant cast for argument 0 (i) <var_readln:Int> isa OTHER */
/* <var_readln:Int> isa OTHER */
var44 = 1; /* easy <var_readln:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var48 = var_rd + var_readln;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#read_all_bytes for (self: BufferedReader): Bytes */
val* core___core__BufferedReader___Reader__read_all_bytes(val* self) {
val* var /* : Bytes */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Bytes */;
val* var5 /* : Bytes */;
val* var_s /* var s: Bytes */;
char* var6 /* : NativeString */;
char* var_b /* var b: NativeString */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var_j /* var j: Int */;
long var10 /* : Int */;
long var_k /* var k: Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
long var_rd_sz /* var rd_sz: Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:BufferedReader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
var4 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self))(var4->class->vft[COLOR_core__bytes__Bytes__empty]))(var4); /* empty on <var4:Bytes>*/
}
var = var4;
goto RET_LABEL;
} else {
}
var5 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_core__bytes__Bytes__with_capacity]))(var5, 10l); /* with_capacity on <var5:Bytes>*/
}
var_s = var5;
var6 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var_b = var6;
for(;;) {
{
var7 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:BufferedReader>*/
}
var8 = !var7;
if (var8){
var9 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_j = var9;
var10 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
var_k = var10;
{
{ /* Inline kernel#Int#- (var_k,var_j) on <var_k:Int> */
/* Covariant cast for argument 0 (i) <var_j:Int> isa OTHER */
/* <var_j:Int> isa OTHER */
var13 = 1; /* easy <var_j:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_k - var_j;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_rd_sz = var11;
{
((void(*)(val* self, char* p0, long p1, long p2))(var_s->class->vft[COLOR_core__bytes__Bytes__append_ns_from]))(var_s, var_b, var_rd_sz, var_j); /* append_ns_from on <var_s:Bytes>*/
}
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var_k; /* _buffer_pos on <self:BufferedReader> */
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__fill_buffer]))(self); /* fill_buffer on <self:BufferedReader>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#append_line_to for (self: BufferedReader, Buffer) */
void core___core__BufferedReader___Reader__append_line_to(val* self, val* p0) {
val* var_s /* var s: Buffer */;
val* var /* : Bytes */;
val* var_lb /* var lb: Bytes */;
long var1 /* : Int */;
long var_i /* var i: Int */;
short int var2 /* : Bool */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
char* var8 /* : NativeString */;
unsigned char var9 /* : Byte */;
unsigned char var11 /* : Byte */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
char* var31 /* : NativeString */;
unsigned char var32 /* : Byte */;
unsigned char var34 /* : Byte */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
val* var45 /* : nullable Object */;
val* var_eol /* var eol: nullable Object */;
val* var46 /* : nullable Object */;
long var47 /* : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
long var55 /* : Int */;
long var_j /* var j: Int */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
short int var62 /* : Bool */;
char* var63 /* : NativeString */;
unsigned char var64 /* : Byte */;
unsigned char var66 /* : Byte */;
val* var67 /* : nullable Object */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
short int var76 /* : Bool */;
val* var77 /* : String */;
short int var78 /* : Bool */;
val* var79 /* : String */;
short int var80 /* : Bool */;
val* var81 /* : String */;
var_s = p0;
var = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_core__bytes__Bytes__with_capacity]))(var, 10l); /* with_capacity on <var:Bytes>*/
}
var_lb = var;
for(;;) {
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_i = var1;
for(;;) {
var3 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel#Int#< (var_i,var3) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var7 = var_i < var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
var8 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline native#NativeString#[] (var8,var_i) on <var8:NativeString> */
var11 = (unsigned char)((int)var8[var_i]);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Byte#!= (var9,((unsigned char)0x0a)) on <var9:Byte> */
var14 = var9 == ((unsigned char)0x0a);
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var2 = var12;
} else {
var2 = var_;
}
if (var2){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var22 = var_i + 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_i = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var23 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel#Int#< (var_i,var23) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var30 = var_i < var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
var31 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline native#NativeString#[] (var31,var_i) on <var31:NativeString> */
var34 = (unsigned char)((int)var31[var_i]);
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var32,((unsigned char)0x0a)) on <var32:Byte> */
var37 = var32 == ((unsigned char)0x0a);
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (unlikely(!var35)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 583);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var40 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var44 = var_i + 1l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_i = var38;
var45 = (val*)((long)(1)<<2|3);
var_eol = var45;
} else {
var46 = (val*)((long)(0)<<2|3);
var_eol = var46;
}
var47 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel#Int#> (var_i,var47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var54 = var_i > var47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
var55 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_j = var55;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var58 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var62 = var_j < var_i;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
if (var56){
var63 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline native#NativeString#[] (var63,var_j) on <var63:NativeString> */
var66 = (unsigned char)((int)var63[var_j]);
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
{
var67 = BOX_core__Byte(var64); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_lb->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_lb, var67); /* add on <var_lb:Bytes>*/
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var74 = var_j + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_j = var68;
} else {
goto BREAK_label75;
}
}
BREAK_label75: (void)0;
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var_i; /* _buffer_pos on <self:BufferedReader> */
} else {
{
var76 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__end_reached]))(self); /* end_reached on <self:BufferedReader>*/
}
if (unlikely(!var76)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 600);
fatal_exit(1);
}
{
var77 = ((val*(*)(val* self))(var_lb->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_lb); /* to_s on <var_lb:Bytes>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var77); /* append on <var_s:Buffer>*/
}
goto RET_LABEL;
}
var78 = (short int)((long)(var_eol)>>2);
if (var78){
{
var79 = ((val*(*)(val* self))(var_lb->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_lb); /* to_s on <var_lb:Bytes>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var79); /* append on <var_s:Buffer>*/
}
goto RET_LABEL;
} else {
{
var80 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__end_reached]))(self); /* end_reached on <self:BufferedReader>*/
}
if (var80){
{
var81 = ((val*(*)(val* self))(var_lb->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_lb); /* to_s on <var_lb:Bytes>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var81); /* append on <var_s:Buffer>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__fill_buffer]))(self); /* fill_buffer on <self:BufferedReader>*/
}
}
}
RET_LABEL:;
}
/* method stream#BufferedReader#eof for (self: BufferedReader): Bool */
short int core___core__BufferedReader___Reader__eof(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
short int var18 /* : Bool */;
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var2 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel#Int#< (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var6 = var1 < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var = 0;
goto RET_LABEL;
} else {
}
{
var7 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__end_reached]))(self); /* end_reached on <self:BufferedReader>*/
}
if (var7){
var = 1;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__fill_buffer]))(self); /* fill_buffer on <self:BufferedReader>*/
}
var9 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var10 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel#Int#>= (var9,var10) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var17 = var9 >= var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
{
var18 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__end_reached]))(self); /* end_reached on <self:BufferedReader>*/
}
var8 = var18;
} else {
var8 = var_;
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#buffer for (self: BufferedReader): NativeString */
char* core___core__BufferedReader___buffer(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#buffer= for (self: BufferedReader, NativeString) */
void core___core__BufferedReader___buffer_61d(val* self, char* p0) {
self->attrs[COLOR_core__stream__BufferedReader___buffer].str = p0; /* _buffer on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream#BufferedReader#buffer_pos for (self: BufferedReader): Int */
long core___core__BufferedReader___buffer_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#buffer_pos= for (self: BufferedReader, Int) */
void core___core__BufferedReader___buffer_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = p0; /* _buffer_pos on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream#BufferedReader#buffer_length for (self: BufferedReader): Int */
long core___core__BufferedReader___buffer_length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#buffer_length= for (self: BufferedReader, Int) */
void core___core__BufferedReader___buffer_length_61d(val* self, long p0) {
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = p0; /* _buffer_length on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream#BufferedReader#buffer_capacity for (self: BufferedReader): Int */
long core___core__BufferedReader___buffer_capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l; /* _buffer_capacity on <self:BufferedReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#buffer_capacity= for (self: BufferedReader, Int) */
void core___core__BufferedReader___buffer_capacity_61d(val* self, long p0) {
self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l = p0; /* _buffer_capacity on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream#BufferedReader#fill_buffer for (self: BufferedReader) */
void core___core__BufferedReader___fill_buffer(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "fill_buffer", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 640);
fatal_exit(1);
RET_LABEL:;
}
/* method stream#BufferedReader#end_reached for (self: BufferedReader): Bool */
short int core___core__BufferedReader___end_reached(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "end_reached", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 643);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream#BufferedReader#prepare_buffer for (self: BufferedReader, Int) */
void core___core__BufferedReader___prepare_buffer(val* self, long p0) {
long var_capacity /* var capacity: Int */;
char* var /* : NativeString */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
var_capacity = p0;
var = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var,var_capacity) on <var:NativeString> */
var3 = (char*)nit_alloc(var_capacity);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_core__stream__BufferedReader___buffer].str = var1; /* _buffer on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l = var_capacity; /* _buffer_capacity on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream#StringWriter#content for (self: StringWriter): Array[String] */
val* core___core__StringWriter___content(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_core__stream__StringWriter___content].val; /* _content on <self:StringWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 668);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream#StringWriter#content= for (self: StringWriter, Array[String]) */
void core___core__StringWriter___content_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__StringWriter___content].val = p0; /* _content on <self:StringWriter> */
RET_LABEL:;
}
/* method stream#StringWriter#to_s for (self: StringWriter): String */
val* core___core__StringWriter___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Array[String] */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringWriter__content]))(self); /* content on <self:StringWriter>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Collection__plain_to_s]))(var1); /* plain_to_s on <var1:Array[String]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#StringWriter#is_writable for (self: StringWriter): Bool */
short int core___core__StringWriter___Writer__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__StringWriter__closed]))(self); /* closed on <self:StringWriter>*/
}
var2 = !var1;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#StringWriter#write_bytes for (self: StringWriter, Bytes) */
void core___core__StringWriter___Writer__write_bytes(val* self, val* p0) {
val* var_b /* var b: Bytes */;
val* var /* : Array[String] */;
val* var1 /* : String */;
var_b = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringWriter__content]))(self); /* content on <self:StringWriter>*/
}
{
var1 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Bytes>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var, var1); /* add on <var:Array[String]>*/
}
RET_LABEL:;
}
/* method stream#StringWriter#write for (self: StringWriter, Text) */
void core___core__StringWriter___Writer__write(val* self, val* p0) {
val* var_str /* var str: Text */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Array[String] */;
val* var3 /* : String */;
var_str = p0;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__StringWriter__closed]))(self); /* closed on <self:StringWriter>*/
}
var1 = !var;
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 678);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringWriter__content]))(self); /* content on <self:StringWriter>*/
}
{
var3 = ((val*(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_str); /* to_s on <var_str:Text>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var2, var3); /* add on <var2:Array[String]>*/
}
RET_LABEL:;
}
/* method stream#StringWriter#closed for (self: StringWriter): Bool */
short int core___core__StringWriter___closed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__stream__StringWriter___closed].s; /* _closed on <self:StringWriter> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#StringWriter#closed= for (self: StringWriter, Bool) */
void core___core__StringWriter___closed_61d(val* self, short int p0) {
self->attrs[COLOR_core__stream__StringWriter___closed].s = p0; /* _closed on <self:StringWriter> */
RET_LABEL:;
}
/* method stream#StringWriter#close for (self: StringWriter) */
void core___core__StringWriter___Stream__close(val* self) {
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__stream__StringWriter__closed_61d]))(self, 1); /* closed= on <self:StringWriter>*/
}
RET_LABEL:;
}
/* method stream#StringReader#source for (self: StringReader): String */
val* core___core__StringReader___source(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__stream__StringReader___source].val; /* _source on <self:StringReader> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _source");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 694);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream#StringReader#source= for (self: StringReader, String) */
void core___core__StringReader___source_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__StringReader___source].val = p0; /* _source on <self:StringReader> */
RET_LABEL:;
}
/* method stream#StringReader#cursor for (self: StringReader): Int */
long core___core__StringReader___cursor(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__stream__StringReader___cursor].l; /* _cursor on <self:StringReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream#StringReader#cursor= for (self: StringReader, Int) */
void core___core__StringReader___cursor_61d(val* self, long p0) {
self->attrs[COLOR_core__stream__StringReader___cursor].l = p0; /* _cursor on <self:StringReader> */
RET_LABEL:;
}
/* method stream#StringReader#read_char for (self: StringReader): nullable Char */
val* core___core__StringReader___Reader__read_char(val* self) {
val* var /* : nullable Char */;
long var1 /* : Int */;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : String */;
long var9 /* : Int */;
uint32_t var10 /* : Char */;
uint32_t var_c /* var c: Char */;
val* var_ /* var : StringReader */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var19 /* : nullable Char */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__length]))(var2); /* length on <var2:String>*/
}
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
if (var4){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
var10 = ((uint32_t(*)(val* self, long p0))(var8->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var8, var9); /* [] on <var8:String>*/
}
var_c = var10;
var_ = self;
{
var11 = ((long(*)(val* self))(var_->class->vft[COLOR_core__stream__StringReader__cursor]))(var_); /* cursor on <var_:StringReader>*/
}
{
{ /* Inline kernel#Int#+ (var11,1l) on <var11:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var18 = var11 + 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__stream__StringReader__cursor_61d]))(var_, var12); /* cursor= on <var_:StringReader>*/
}
var19 = (val*)((long)(var_c)<<2|2);
var = var19;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method stream#StringReader#read_byte for (self: StringReader): nullable Byte */
val* core___core__StringReader___Reader__read_byte(val* self) {
val* var /* : nullable Byte */;
long var1 /* : Int */;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : String */;
val* var9 /* : SequenceRead[Byte] */;
long var10 /* : Int */;
val* var11 /* : nullable Object */;
unsigned char var12 /* : Byte */;
unsigned char var_c /* var c: Byte */;
val* var_ /* var : StringReader */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
val* var21 /* : nullable Byte */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__length]))(var2); /* length on <var2:String>*/
}
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
if (var4){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__Text__bytes]))(var8); /* bytes on <var8:String>*/
}
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
var11 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, var10); /* [] on <var9:SequenceRead[Byte]>*/
}
var12 = ((struct instance_core__Byte*)var11)->value; /* autounbox from nullable Object to Byte */;
var_c = var12;
var_ = self;
{
var13 = ((long(*)(val* self))(var_->class->vft[COLOR_core__stream__StringReader__cursor]))(var_); /* cursor on <var_:StringReader>*/
}
{
{ /* Inline kernel#Int#+ (var13,1l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var20 = var13 + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__stream__StringReader__cursor_61d]))(var_, var14); /* cursor= on <var_:StringReader>*/
}
var21 = BOX_core__Byte(var_c); /* autobox from Byte to nullable Byte */
var = var21;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method stream#StringReader#close for (self: StringReader) */
void core___core__StringReader___Stream__close(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var2 = core__flat___NativeString___to_s_full(var1, 0l, 0l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__StringReader__source_61d]))(self, var); /* source= on <self:StringReader>*/
}
RET_LABEL:;
}
/* method stream#StringReader#read_all_bytes for (self: StringReader): Bytes */
val* core___core__StringReader___Reader__read_all_bytes(val* self) {
val* var /* : Bytes */;
val* var1 /* : String */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var_nslen /* var nslen: Int */;
char* var8 /* : NativeString */;
char* var9 /* : NativeString */;
char* var11 /* : NativeString */;
char* var_nns /* var nns: NativeString */;
val* var12 /* : String */;
long var13 /* : Int */;
val* var14 /* : Bytes */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:String>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
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
var_nslen = var4;
var8 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var8,var_nslen) on <var8:NativeString> */
var11 = (char*)nit_alloc(var_nslen);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_nns = var9;
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var13 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var12->class->vft[COLOR_core__abstract_text__Text__copy_to_native]))(var12, var_nns, var_nslen, var13, 0l); /* copy_to_native on <var12:String>*/
}
var14 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, char* p0))(var14->class->vft[COLOR_core__bytes__Bytes__items_61d]))(var14, var_nns); /* items= on <var14:Bytes>*/
}
{
((void(*)(val* self, long p0))(var14->class->vft[COLOR_core__array__AbstractArrayRead__length_61d]))(var14, var_nslen); /* length= on <var14:Bytes>*/
}
{
((void(*)(val* self, long p0))(var14->class->vft[COLOR_core__bytes__Bytes__capacity_61d]))(var14, var_nslen); /* capacity= on <var14:Bytes>*/
}
{
((void(*)(val* self))(var14->class->vft[COLOR_core__kernel__Object__init]))(var14); /* init on <var14:Bytes>*/
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream#StringReader#eof for (self: StringReader): Bool */
short int core___core__StringReader___Reader__eof(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var2); /* bytelen on <var2:String>*/
}
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
/* method stream#StringReader#init for (self: StringReader) */
void core___core__StringReader___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__StringReader___core__kernel__Object__init]))(self); /* init on <self:StringReader>*/
}
RET_LABEL:;
}
