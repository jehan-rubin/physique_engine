#include "core__abstract_text.sep.0.h"
/* method abstract_text#Text#chars for (self: Text): SequenceRead[Char] */
val* core___core__Text___chars(val* self) {
val* var /* : SequenceRead[Char] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "chars", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 34);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Text#bytes for (self: Text): SequenceRead[Byte] */
val* core___core__Text___bytes(val* self) {
val* var /* : SequenceRead[Byte] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "bytes", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 39);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Text#length for (self: Text): Int */
long core___core__Text___length(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "length", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 44);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Text#bytelen for (self: Text): Int */
long core___core__Text___bytelen(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "bytelen", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 51);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Text#substring for (self: Text, Int, Int): Text */
val* core___core__Text___substring(val* self, long p0, long p1) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "substring", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 57);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Text#substrings for (self: Text): Iterator[FlatText] */
val* core___core__Text___substrings(val* self) {
val* var /* : Iterator[FlatText] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "substrings", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 70);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Text#is_empty for (self: Text): Bool */
short int core___core__Text___is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
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
/* method abstract_text#Text#empty for (self: Text): Text */
val* core___core__Text___empty(val* self) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "empty", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 79);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Text#first for (self: Text): Char */
uint32_t core___core__Text___first(val* self) {
uint32_t var /* : Char */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var1, 0l); /* [] on <var1:SequenceRead[Char]>*/
}
var3 = (uint32_t)((long)(var2)>>2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#[] for (self: Text, Int): Char */
uint32_t core___core__Text____91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
uint32_t var3 /* : Char */;
var_index = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var1, var_index); /* [] on <var1:SequenceRead[Char]>*/
}
var3 = (uint32_t)((long)(var2)>>2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#index_of for (self: Text, Char): Int */
long core___core__Text___index_of(val* self, uint32_t p0) {
long var /* : Int */;
uint32_t var_c /* var c: Char */;
long var1 /* : Int */;
var_c = p0;
{
var1 = ((long(*)(val* self, uint32_t p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__index_of_from]))(self, var_c, 0l); /* index_of_from on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#last for (self: Text): Char */
uint32_t core___core__Text___last(val* self) {
uint32_t var /* : Char */;
val* var1 /* : SequenceRead[Char] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var2 - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var1, var3); /* [] on <var1:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#index_of_from for (self: Text, Char, Int): Int */
long core___core__Text___index_of_from(val* self, uint32_t p0, long p1) {
long var /* : Int */;
uint32_t var_c /* var c: Char */;
long var_pos /* var pos: Int */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : IndexedIterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
uint32_t var8 /* : Char */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
var_c = p0;
var_pos = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(var1, var_pos); /* iterator_from on <var1:SequenceRead[Char]>*/
}
var_iter = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_iter); /* is_ok on <var_iter:IndexedIterator[Char]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_iter); /* item on <var_iter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Char#== (var4,var_c) on <var4:nullable Object(Char)> */
var8 = (uint32_t)((long)(var4)>>2);
var7 = var8 == var_c;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
var = var9;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_iter); /* next on <var_iter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var12 = -1l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#last_index_of for (self: Text, Char): Int */
long core___core__Text___last_index_of(val* self, uint32_t p0) {
long var /* : Int */;
uint32_t var_c /* var c: Char */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var6 /* : Int */;
var_c = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
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
var6 = ((long(*)(val* self, uint32_t p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__last_index_of_from]))(self, var_c, var2); /* last_index_of_from on <self:Text>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#to_cstring for (self: Text): NativeString */
char* core___core__Text___to_cstring(val* self) {
char* var /* : NativeString */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_cstring", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 137);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Text#last_index_of_from for (self: Text, Char, Int): Int */
long core___core__Text___last_index_of_from(val* self, uint32_t p0, long p1) {
long var /* : Int */;
uint32_t var_item /* var item: Char */;
long var_pos /* var pos: Int */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
long var3 /* : Int */;
var_item = p0;
var_pos = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = (val*)((long)(var_item)<<2|2);
var3 = ((long(*)(val* self, val* p0, long p1))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(var1, var2, var_pos); /* last_index_of_from on <var1:SequenceRead[Char]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#iterator for (self: Text): Iterator[Char] */
val* core___core__Text___iterator(val* self) {
val* var /* : Iterator[Char] */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var1); /* iterator on <var1:SequenceRead[Char]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#to_a for (self: Text): Array[Char] */
val* core___core__Text___to_a(val* self) {
val* var /* : Array[Char] */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : Array[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__array__Collection__to_a]))(var1); /* to_a on <var1:SequenceRead[Char]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#substring_from for (self: Text, Int): Text */
val* core___core__Text___substring_from(val* self, long p0) {
val* var /* : Text */;
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
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
val* var22 /* : Text */;
var_from = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
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
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__empty]))(self); /* empty on <self:Text>*/
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var13 = var_from < 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var_from = 0l;
} else {
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var14,var_from) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var17 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var21 = var14 - var_from;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var22 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_from, var15); /* substring on <self:Text>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#has_substring for (self: Text, String, Int): Bool */
short int core___core__Text___has_substring(val* self, val* p0, long p1) {
short int var /* : Bool */;
val* var_str /* var str: String */;
long var_pos /* var pos: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
val* var23 /* : SequenceRead[Char] */;
val* var24 /* : IndexedIterator[nullable Object] */;
val* var_myiter /* var myiter: IndexedIterator[Char] */;
val* var25 /* : SequenceRead[Char] */;
val* var26 /* : Iterator[nullable Object] */;
val* var_itsiter /* var itsiter: IndexedIterator[Char] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var_29 /* var : Bool */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var32 /* : nullable Object */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
var_str = p0;
var_pos = p1;
{
var1 = ((short int(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_str); /* is_empty on <var_str:String>*/
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var6 = var_pos < 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var2 = var_;
} else {
{
var7 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:String>*/
}
{
{ /* Inline kernel#Int#+ (var_pos,var7) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_pos + var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#> (var8,var15) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var22 = var8 > var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var2 = var16;
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var24 = ((val*(*)(val* self, long p0))((((long)var23&3)?class_info[((long)var23&3)]:var23->class)->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(var23, var_pos); /* iterator_from on <var23:SequenceRead[Char]>*/
}
var_myiter = var24;
{
var25 = ((val*(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var26 = ((val*(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var25); /* iterator on <var25:SequenceRead[Char]>*/
}
var_itsiter = var26;
for(;;) {
{
var28 = ((short int(*)(val* self))((((long)var_myiter&3)?class_info[((long)var_myiter&3)]:var_myiter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_myiter); /* is_ok on <var_myiter:IndexedIterator[Char]>*/
}
var_29 = var28;
if (var28){
{
var30 = ((short int(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_itsiter); /* is_ok on <var_itsiter:IndexedIterator[Char]>*/
}
var27 = var30;
} else {
var27 = var_29;
}
if (var27){
{
var31 = ((val*(*)(val* self))((((long)var_myiter&3)?class_info[((long)var_myiter&3)]:var_myiter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_myiter); /* item on <var_myiter:IndexedIterator[Char]>*/
}
{
var32 = ((val*(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_itsiter); /* item on <var_itsiter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Char#!= (var31,var32) on <var31:nullable Object(Char)> */
var35 = var31 == var32;
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_myiter&3)?class_info[((long)var_myiter&3)]:var_myiter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_myiter); /* next on <var_myiter:IndexedIterator[Char]>*/
}
{
((void(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_itsiter); /* next on <var_itsiter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var37 = ((short int(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_itsiter); /* is_ok on <var_itsiter:IndexedIterator[Char]>*/
}
if (var37){
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#has_prefix for (self: Text, String): Bool */
short int core___core__Text___has_prefix(val* self, val* p0) {
short int var /* : Bool */;
val* var_prefix /* var prefix: String */;
short int var1 /* : Bool */;
var_prefix = p0;
{
var1 = ((short int(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__has_substring]))(self, var_prefix, 0l); /* has_substring on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#has_suffix for (self: Text, String): Bool */
short int core___core__Text___has_suffix(val* self, val* p0) {
short int var /* : Bool */;
val* var_suffix /* var suffix: String */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
short int var7 /* : Bool */;
var_suffix = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var2 = ((long(*)(val* self))(var_suffix->class->vft[COLOR_core__abstract_text__Text__length]))(var_suffix); /* length on <var_suffix:String>*/
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
{
var7 = ((short int(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__has_substring]))(self, var_suffix, var3); /* has_substring on <self:Text>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#to_i for (self: Text): Int */
long core___core__Text___to_i(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_i", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 226);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Text#to_f for (self: Text): Float */
double core___core__Text___to_f(val* self) {
double var /* : Float */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
double var3 /* : Float */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
var3 = core___core__NativeString___atof(var2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#to_hex for (self: Text, nullable Int, nullable Int): Int */
long core___core__Text___to_hex(val* self, val* p0, val* p1) {
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
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var_max /* var max: Int */;
long var26 /* : Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var36 /* : Int */;
uint32_t var37 /* : Char */;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
long var46 /* : Int */;
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
var10 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
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
{ /* Inline kernel#Int#+ (var_pos,var_ln) on <var_pos:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <var_ln:nullable Int(Int)> isa OTHER */
/* <var_ln:nullable Int(Int)> isa OTHER */
var19 = 1; /* easy <var_ln:nullable Int(Int)> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = var_ln == NULL ? "null" : (((long)var_ln&3)?type_info[((long)var_ln&3)]:var_ln->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var23 = (long)(var_pos)>>2;
var24 = (long)(var_ln)>>2;
var25 = var23 + var24;
var17 = var25;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_max = var17;
var26 = (long)(var_pos)>>2;
var_i = var26;
var_ = var_max;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var29 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var33 = var_i < var_;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel#Int#<< (var_res,4l) on <var_res:Int> */
var36 = var_res << 4l;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_res = var34;
{
var37 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
var38 = core__abstract_text___Char___from_hex(var37);
{
{ /* Inline kernel#Int#+ (var_res,var38) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var38:Int> isa OTHER */
/* <var38:Int> isa OTHER */
var41 = 1; /* easy <var38:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var45 = var_res + var38;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_res = var39;
var46 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var46;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#to_oct for (self: Text): Int */
long core___core__Text___to_oct(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__a_to]))(self, 8l); /* a_to on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#to_bin for (self: Text): Int */
long core___core__Text___to_bin(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__a_to]))(self, 2l); /* a_to on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#to_dec for (self: Text): Int */
long core___core__Text___to_dec(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__a_to]))(self, 10l); /* a_to on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#a_to for (self: Text, Int): Int */
long core___core__Text___a_to(val* self, long p0) {
long var /* : Int */;
long var_base /* var base: Int */;
long var_i /* var i: Int */;
short int var_neg /* var neg: Bool */;
long var_j /* var j: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_c /* var c: Char */;
long var9 /* : Int */;
long var_v /* var v: Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
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
long var42 /* : Int */;
long var44 /* : Int */;
var_base = p0;
var_i = 0l;
var_neg = 0;
var_j = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var5 = var_j < var_;
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
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var6, var_j); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_c = var8;
var9 = core___core__Char___to_i(var_c);
var_v = var9;
{
{ /* Inline kernel#Int#> (var_v,var_base) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var12 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var16 = var_v > var_base;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (var_neg){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var19 = -var_i;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var = var17;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
} else {
{
{ /* Inline kernel#Int#< (var_v,0l) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var22 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var26 = var_v < 0l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var_neg = 1;
} else {
{
{ /* Inline kernel#Int#* (var_i,var_base) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var29 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var33 = var_i * var_base;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var27,var_v) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_v:Int> isa OTHER */
/* <var_v:Int> isa OTHER */
var36 = 1; /* easy <var_v:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var40 = var27 + var_v;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_i = var34;
}
}
var41 = core___core__Int___Discrete__successor(var_j, 1l);
var_j = var41;
}
BREAK_label: (void)0;
if (var_neg){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var44 = -var_i;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var = var42;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_text#Text#is_numeric for (self: Text): Bool */
short int core___core__Text___is_numeric(val* self) {
short int var /* : Bool */;
short int var_has_point /* var has_point: Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_e_index /* var e_index: Int */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
uint32_t var11 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_18 /* var : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var_27 /* var : Bool */;
long var28 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
short int var_42 /* var : Bool */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
short int var_58 /* var : Bool */;
val* var59 /* : SequenceRead[Char] */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
val* var67 /* : nullable Object */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
uint32_t var71 /* : Char */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var_78 /* var : Bool */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var_89 /* var : Bool */;
long var90 /* : Int */;
long var91 /* : Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
long var97 /* : Int */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
short int var104 /* : Bool */;
long var105 /* : Int */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
var_has_point = 0;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var3 = -1l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_e_index = var1;
var_i = 0l;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var10 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (uint32_t)((long)(var10)>>2);
var_c = var11;
var12 = core__abstract_text___Char___is_numeric(var_c);
var13 = !var12;
if (var13){
{
{ /* Inline kernel#Char#== (var_c,'.') on <var_c:Char> */
var17 = var_c == '.';
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_18 = var15;
if (var15){
var19 = !var_has_point;
var14 = var19;
} else {
var14 = var_18;
}
if (var14){
var_has_point = 1;
} else {
{
{ /* Inline kernel#Char#== (var_c,'e') on <var_c:Char> */
var26 = var_c == 'e';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_27 = var24;
if (var24){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var30 = -1l;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_e_index,var28) on <var_e_index:Int> */
var33 = var_e_index == var28;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var23 = var31;
} else {
var23 = var_27;
}
var_34 = var23;
if (var23){
{
{ /* Inline kernel#Int#> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var37 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var41 = var_i > 0l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var22 = var35;
} else {
var22 = var_34;
}
var_42 = var22;
if (var22){
{
var43 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var43 - 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_i,var44) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var53 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var57 = var_i < var44;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var21 = var51;
} else {
var21 = var_42;
}
var_58 = var21;
if (var21){
{
var59 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var66 = var_i - 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
var67 = ((val*(*)(val* self, long p0))((((long)var59&3)?class_info[((long)var59&3)]:var59->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var59, var60); /* [] on <var59:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#!= (var67,'-') on <var67:nullable Object(Char)> */
var71 = (uint32_t)((long)(var67)>>2);
var70 = var71 == '-';
var72 = !var70;
var68 = var72;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var20 = var68;
} else {
var20 = var_58;
}
if (var20){
var_e_index = var_i;
} else {
{
{ /* Inline kernel#Char#== (var_c,'-') on <var_c:Char> */
var77 = var_c == '-';
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_78 = var75;
if (var75){
{
{ /* Inline kernel#Int#+ (var_e_index,1l) on <var_e_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var81 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var85 = var_e_index + 1l;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var79) on <var_i:Int> */
var88 = var_i == var79;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var74 = var86;
} else {
var74 = var_78;
}
var_89 = var74;
if (var74){
{
var90 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var90,1l) on <var90:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var93 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var97 = var90 - 1l;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_i,var91) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var91:Int> isa OTHER */
/* <var91:Int> isa OTHER */
var100 = 1; /* easy <var91:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var104 = var_i < var91;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var73 = var98;
} else {
var73 = var_89;
}
if (var73){
} else {
var = 0;
goto RET_LABEL;
}
}
}
} else {
}
var105 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var105;
}
BREAK_label: (void)0;
{
var106 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_empty]))(self); /* is_empty on <self:Text>*/
}
var107 = !var106;
var = var107;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#is_hex for (self: Text): Bool */
short int core___core__Text___is_hex(val* self) {
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
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var_46 /* var : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
long var64 /* : Int */;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
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
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_c = var8;
{
{ /* Inline kernel#Char#>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var14 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var18 = var_c >= 'a';
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_19 = var12;
if (var12){
{
{ /* Inline kernel#Char#<= (var_c,'f') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'f':Char> isa OTHER */
/* <'f':Char> isa OTHER */
var22 = 1; /* easy <'f':Char> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var26 = var_c <= 'f';
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var11 = var20;
} else {
var11 = var_19;
}
var27 = !var11;
var_28 = var27;
if (var27){
{
{ /* Inline kernel#Char#>= (var_c,'A') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var32 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var36 = var_c >= 'A';
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_37 = var30;
if (var30){
{
{ /* Inline kernel#Char#<= (var_c,'F') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'F':Char> isa OTHER */
/* <'F':Char> isa OTHER */
var40 = 1; /* easy <'F':Char> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var44 = var_c <= 'F';
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var29 = var38;
} else {
var29 = var_37;
}
var45 = !var29;
var10 = var45;
} else {
var10 = var_28;
}
var_46 = var10;
if (var10){
{
{ /* Inline kernel#Char#>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var50 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var54 = var_c >= '0';
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_55 = var48;
if (var48){
{
{ /* Inline kernel#Char#<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var58 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var62 = var_c <= '9';
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var47 = var56;
} else {
var47 = var_55;
}
var63 = !var47;
var9 = var63;
} else {
var9 = var_46;
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
var64 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var64;
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#is_bin for (self: Text): Bool */
short int core___core__Text___is_bin(val* self) {
short int var /* : Bool */;
val* var1 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : IndexedIterator[Char] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
uint32_t var6 /* : Char */;
uint32_t var_i /* var i: Char */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:IndexedIterator[Char]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((long)(var5)>>2);
var_i = var6;
{
{ /* Inline kernel#Char#!= (var_i,'0') on <var_i:Char> */
var10 = var_i == '0';
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_12 = var8;
if (var8){
{
{ /* Inline kernel#Char#!= (var_i,'1') on <var_i:Char> */
var15 = var_i == '1';
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var7 = var13;
} else {
var7 = var_12;
}
if (var7){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#is_oct for (self: Text): Bool */
short int core___core__Text___is_oct(val* self) {
short int var /* : Bool */;
val* var1 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : IndexedIterator[Char] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
uint32_t var6 /* : Char */;
uint32_t var_i /* var i: Char */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:IndexedIterator[Char]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((long)(var5)>>2);
var_i = var6;
{
{ /* Inline kernel#Char#< (var_i,'0') on <var_i:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var10 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 911);
fatal_exit(1);
}
var11 = var_i < '0';
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_12 = var8;
if (var8){
var7 = var_12;
} else {
{
{ /* Inline kernel#Char#> (var_i,'7') on <var_i:Char> */
/* Covariant cast for argument 0 (i) <'7':Char> isa OTHER */
/* <'7':Char> isa OTHER */
var15 = 1; /* easy <'7':Char> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var19 = var_i > '7';
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var7 = var13;
}
if (var7){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#is_dec for (self: Text): Bool */
short int core___core__Text___is_dec(val* self) {
short int var /* : Bool */;
val* var1 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : IndexedIterator[Char] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
uint32_t var6 /* : Char */;
uint32_t var_i /* var i: Char */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:IndexedIterator[Char]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((long)(var5)>>2);
var_i = var6;
{
{ /* Inline kernel#Char#< (var_i,'0') on <var_i:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var10 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 911);
fatal_exit(1);
}
var11 = var_i < '0';
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_12 = var8;
if (var8){
var7 = var_12;
} else {
{
{ /* Inline kernel#Char#> (var_i,'9') on <var_i:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var15 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var19 = var_i > '9';
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var7 = var13;
}
if (var7){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#is_upper for (self: Text): Bool */
short int core___core__Text___is_upper(val* self) {
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
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_char /* var char: Char */;
short int var9 /* : Bool */;
long var10 /* : Int */;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
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
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_char = var8;
var9 = core___core__Char___is_lower(var_char);
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
var10 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var10;
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#is_lower for (self: Text): Bool */
short int core___core__Text___is_lower(val* self) {
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
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_char /* var char: Char */;
short int var9 /* : Bool */;
long var10 /* : Int */;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
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
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_char = var8;
var9 = core___core__Char___is_upper(var_char);
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
var10 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var10;
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#l_trim for (self: Text): Text */
val* core___core__Text___l_trim(val* self) {
val* var /* : Text */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
uint32_t var6 /* : Char */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Text */;
long var14 /* : Int */;
val* var15 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var1); /* iterator on <var1:SequenceRead[Char]>*/
}
var_iter = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_iter); /* is_ok on <var_iter:IndexedIterator[Char]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_iter); /* item on <var_iter:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((long)(var4)>>2);
var5 = core___core__Char___is_whitespace(var6);
var7 = !var5;
if (var7){
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_iter); /* next on <var_iter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var8 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#== (var8,var9) on <var8:Int> */
var12 = var8 == var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__empty]))(self); /* empty on <self:Text>*/
}
var = var13;
goto RET_LABEL;
} else {
}
{
var14 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
var15 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__substring_from]))(self, var14); /* substring_from on <self:Text>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#r_trim for (self: Text): Text */
val* core___core__Text___r_trim(val* self) {
val* var /* : Text */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : IndexedIterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
uint32_t var6 /* : Char */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
val* var13 /* : Text */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
val* var22 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator]))(var1); /* reverse_iterator on <var1:SequenceRead[Char]>*/
}
var_iter = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_iter); /* is_ok on <var_iter:IndexedIterator[Char]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_iter); /* item on <var_iter:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((long)(var4)>>2);
var5 = core___core__Char___is_whitespace(var6);
var7 = !var5;
if (var7){
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_iter); /* next on <var_iter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var8 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Int#< (var8,0l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var12 = var8 < 0l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__empty]))(self); /* empty on <self:Text>*/
}
var = var13;
goto RET_LABEL;
} else {
}
{
var14 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Int#+ (var14,1l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var21 = var14 + 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var22 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var15); /* substring on <self:Text>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#trim for (self: Text): Text */
val* core___core__Text___trim(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
val* var2 /* : Text */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__l_trim]))(self); /* l_trim on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__r_trim]))(var1); /* r_trim on <var1:Text>*/
}
/* <var2:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var2->type->table_size) {
var3 = 0;
} else {
var3 = var2->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = var2 == NULL ? "null" : var2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 446);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#is_whitespace for (self: Text): Bool */
short int core___core__Text___is_whitespace(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[Char] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
uint32_t var7 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_empty]))(self); /* is_empty on <self:Text>*/
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[Char]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[Char]>*/
}
var7 = (uint32_t)((long)(var6)>>2);
var_c = var7;
var8 = core___core__Char___is_whitespace(var_c);
var9 = !var8;
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#chomp for (self: Text): Text */
val* core___core__Text___chomp(val* self) {
val* var /* : Text */;
long var1 /* : Int */;
long var_len /* var len: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_l /* var l: Char */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var19 /* : Text */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const struct type* type_struct27;
const char* var_class_name28;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
short int var_ /* var : Bool */;
val* var37 /* : SequenceRead[Char] */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
val* var45 /* : nullable Object */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
uint32_t var49 /* : Char */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
val* var57 /* : Text */;
long var58 /* : Int */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
long var64 /* : Int */;
val* var65 /* : Text */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_len = var1;
{
{ /* Inline kernel#Int#== (var_len,0l) on <var_len:Int> */
var4 = var_len == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
/* <self:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var5 = 0;
} else {
var5 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 485);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var6); /* last on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_l = var8;
{
{ /* Inline kernel#Char#== (var_l,'\015') on <var_l:Char> */
var11 = var_l == '\015';
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
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
var19 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var12); /* substring on <self:Text>*/
}
var = var19;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Char#!= (var_l,'\n') on <var_l:Char> */
var22 = var_l == '\n';
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
/* <self:Text> isa SELFTYPE */
type_struct27 = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
cltype25 = type_struct27->color;
idtype26 = type_struct27->id;
if(cltype25 >= self->type->table_size) {
var24 = 0;
} else {
var24 = self->type->type_table[cltype25] == idtype26;
}
if (unlikely(!var24)) {
var_class_name28 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 490);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#> (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var36 = var_len > 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_ = var30;
if (var30){
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var_len,2l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var40 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var44 = var_len - 2l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
var45 = ((val*(*)(val* self, long p0))((((long)var37&3)?class_info[((long)var37&3)]:var37->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var37, var38); /* [] on <var37:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var45,'\015') on <var45:nullable Object(Char)> */
var49 = (uint32_t)((long)(var45)>>2);
var48 = var49 == '\015';
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var29 = var46;
} else {
var29 = var_;
}
if (var29){
{
{ /* Inline kernel#Int#- (var_len,2l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var52 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var56 = var_len - 2l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
var57 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var50); /* substring on <self:Text>*/
}
var = var57;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var60 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var64 = var_len - 1l;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
{
var65 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var58); /* substring on <self:Text>*/
}
var = var65;
goto RET_LABEL;
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_text#Text#justify for (self: Text, Int, Float): String */
val* core___core__Text___justify(val* self, long p0, double p1) {
val* var /* : String */;
long var_length /* var length: Int */;
double var_left /* var left: Float */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_diff /* var diff: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
val* var13 /* : String */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
double var29 /* : Float */;
double var31 /* : Float */;
double var32 /* : Float */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
double var38 /* : Float */;
long var39 /* : Int */;
long var41 /* : Int */;
long var_before /* var before: Int */;
static val* varonce;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
val* var58 /* : String */;
val* var59 /* : String */;
var_length = p0;
var_left = p1;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var_length,var1) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = var_length - var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_diff = var2;
{
{ /* Inline kernel#Int#<= (var_diff,0l) on <var_diff:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var12 = var_diff <= 0l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
var = var13;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Float#>= (var_left,0.0) on <var_left:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var17 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 531);
fatal_exit(1);
}
var21 = var_left >= 0.0;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_ = var15;
if (var15){
{
{ /* Inline kernel#Float#<= (var_left,1.0) on <var_left:Float> */
/* Covariant cast for argument 0 (i) <1.0:Float> isa OTHER */
/* <1.0:Float> isa OTHER */
var24 = 1; /* easy <1.0:Float> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 529);
fatal_exit(1);
}
var28 = var_left <= 1.0;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var14 = var22;
} else {
var14 = var_;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 522);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#to_f (var_diff) on <var_diff:Int> */
var31 = (double)var_diff;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline kernel#Float#* (var29,var_left) on <var29:Float> */
/* Covariant cast for argument 0 (i) <var_left:Float> isa OTHER */
/* <var_left:Float> isa OTHER */
var34 = 1; /* easy <var_left:Float> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var38 = var29 * var_left;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Float#to_i (var32) on <var32:Float> */
var41 = (long)var32;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_before = var39;
if (likely(varonce!=NULL)) {
var42 = varonce;
} else {
var43 = " ";
var44 = core__flat___NativeString___to_s_full(var43, 1l, 1l);
var42 = var44;
varonce = var42;
}
{
var45 = ((val*(*)(val* self, long p0))(var42->class->vft[COLOR_core__abstract_text__String___42d]))(var42, var_before); /* * on <var42:String>*/
}
{
var46 = ((val*(*)(val* self, val* p0))(var45->class->vft[COLOR_core__abstract_text__String___43d]))(var45, self); /* + on <var45:String>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = " ";
var50 = core__flat___NativeString___to_s_full(var49, 1l, 1l);
var48 = var50;
varonce47 = var48;
}
{
{ /* Inline kernel#Int#- (var_diff,var_before) on <var_diff:Int> */
/* Covariant cast for argument 0 (i) <var_before:Int> isa OTHER */
/* <var_before:Int> isa OTHER */
var53 = 1; /* easy <var_before:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var57 = var_diff - var_before;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
var58 = ((val*(*)(val* self, long p0))(var48->class->vft[COLOR_core__abstract_text__String___42d]))(var48, var51); /* * on <var48:String>*/
}
{
var59 = ((val*(*)(val* self, val* p0))(var46->class->vft[COLOR_core__abstract_text__String___43d]))(var46, var58); /* + on <var46:String>*/
}
var = var59;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#to_cmangle for (self: Text): String */
val* core___core__Text___to_cmangle(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : Buffer */;
val* var6 /* : Buffer */;
val* var_res /* var res: Buffer */;
short int var_underscore /* var underscore: Bool */;
long var_start /* var start: Int */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
uint32_t var9 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var24 /* : Int */;
val* var25 /* : String */;
long var_i /* var i: Int */;
long var26 /* : Int */;
long var_27 /* var : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
val* var35 /* : SequenceRead[Char] */;
val* var36 /* : nullable Object */;
uint32_t var37 /* : Char */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var46 /* : Bool */;
short int var_47 /* var : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
short int var63 /* : Bool */;
short int var_64 /* var : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
short int var71 /* : Bool */;
long var73 /* : Int */;
long var75 /* : Int */;
val* var76 /* : String */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
short int var84 /* : Bool */;
short int var_85 /* var : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
long var96 /* : Int */;
long var98 /* : Int */;
val* var99 /* : String */;
long var100 /* : Int */;
long var101 /* : Int */;
long var103 /* : Int */;
val* var104 /* : String */;
val* var105 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_empty]))(self); /* is_empty on <self:Text>*/
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
var_res = var6;
var_underscore = 0;
var_start = 0l;
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var8 = ((val*(*)(val* self, long p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var7, 0l); /* [] on <var7:SequenceRead[Char]>*/
}
var9 = (uint32_t)((long)(var8)>>2);
var_c = var9;
{
{ /* Inline kernel#Char#>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var13 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var14 = var_c >= '0';
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
{
{ /* Inline kernel#Char#<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var17 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var21 = var_c <= '9';
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var10 = var15;
} else {
var10 = var_;
}
if (var10){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '_'); /* add on <var_res:Buffer>*/
}
{
{ /* Inline kernel#Char#code_point (var_c) on <var_c:Char> */
var24 = (long)var_c;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var25 = core__flat___Int___core__abstract_text__Object__to_s(var22);
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var25); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
var_start = 1l;
} else {
}
var_i = var_start;
{
var26 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_27 = var26;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_27) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_27:Int> isa OTHER */
/* <var_27:Int> isa OTHER */
var30 = 1; /* easy <var_27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var34 = var_i < var_27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
} else {
goto BREAK_label;
}
{
var35 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var36 = ((val*(*)(val* self, long p0))((((long)var35&3)?class_info[((long)var35&3)]:var35->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var35, var_i); /* [] on <var35:SequenceRead[Char]>*/
}
var37 = (uint32_t)((long)(var36)>>2);
var_c = var37;
{
{ /* Inline kernel#Char#>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var42 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var46 = var_c >= 'a';
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_47 = var40;
if (var40){
{
{ /* Inline kernel#Char#<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var50 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var54 = var_c <= 'z';
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var39 = var48;
} else {
var39 = var_47;
}
var_55 = var39;
if (var39){
var38 = var_55;
} else {
{
{ /* Inline kernel#Char#>= (var_c,'A') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var59 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var63 = var_c >= 'A';
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var_64 = var57;
if (var57){
{
{ /* Inline kernel#Char#<= (var_c,'Z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'Z':Char> isa OTHER */
/* <'Z':Char> isa OTHER */
var67 = 1; /* easy <'Z':Char> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var71 = var_c <= 'Z';
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var56 = var65;
} else {
var56 = var_64;
}
var38 = var56;
}
if (var38){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
var_underscore = 0;
goto BREAK_label72;
} else {
}
if (var_underscore){
{
{ /* Inline kernel#Char#code_point ('_') on <'_':Char> */
var75 = (long)'_';
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var76 = core__flat___Int___core__abstract_text__Object__to_s(var73);
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var76); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
} else {
}
{
{ /* Inline kernel#Char#>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var80 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var84 = var_c >= '0';
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var_85 = var78;
if (var78){
{
{ /* Inline kernel#Char#<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var88 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var92 = var_c <= '9';
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var77 = var86;
} else {
var77 = var_85;
}
if (var77){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
var_underscore = 0;
} else {
{
{ /* Inline kernel#Char#== (var_c,'_') on <var_c:Char> */
var95 = var_c == '_';
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
if (var93){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
var_underscore = 1;
} else {
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '_'); /* add on <var_res:Buffer>*/
}
{
{ /* Inline kernel#Char#code_point (var_c) on <var_c:Char> */
var98 = (long)var_c;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var99 = core__flat___Int___core__abstract_text__Object__to_s(var96);
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var99); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
var_underscore = 0;
}
}
BREAK_label72: (void)0;
var100 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var100;
}
BREAK_label: (void)0;
if (var_underscore){
{
{ /* Inline kernel#Char#code_point ('_') on <'_':Char> */
var103 = (long)'_';
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
var104 = core__flat___Int___core__abstract_text__Object__to_s(var101);
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var104); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
} else {
}
{
var105 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:Buffer>*/
}
var = var105;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#escape_to_c for (self: Text): String */
val* core___core__Text___escape_to_c(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var_b /* var b: Buffer */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : SequenceRead[Char] */;
val* var9 /* : nullable Object */;
uint32_t var10 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : String */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
long var45 /* : Int */;
long var47 /* : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
long var55 /* : Int */;
long var57 /* : Int */;
val* var58 /* : String */;
val* var_oct /* var oct: String */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
long var63 /* : Int */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
long var67 /* : Int */;
val* var68 /* : String */;
var1 = NEW_core__Buffer(&type_core__Buffer);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_b = var2;
var_i = 0l;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var3;
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
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var9 = ((val*(*)(val* self, long p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var8, var_i); /* [] on <var8:SequenceRead[Char]>*/
}
var10 = (uint32_t)((long)(var9)>>2);
var_c = var10;
{
{ /* Inline kernel#Char#== (var_c,'\n') on <var_c:Char> */
var13 = var_c == '\n';
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "\\n";
var16 = core__flat___NativeString___to_s_full(var15, 2l, 2l);
var14 = var16;
varonce = var14;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var14); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\t') on <var_c:Char> */
var19 = var_c == '\t';
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "\\t";
var23 = core__flat___NativeString___to_s_full(var22, 2l, 2l);
var21 = var23;
varonce20 = var21;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var21); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\"') on <var_c:Char> */
var26 = var_c == '\"';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "\\\"";
var30 = core__flat___NativeString___to_s_full(var29, 2l, 2l);
var28 = var30;
varonce27 = var28;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var28); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\'') on <var_c:Char> */
var33 = var_c == '\'';
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "\\\'";
var37 = core__flat___NativeString___to_s_full(var36, 2l, 2l);
var35 = var37;
varonce34 = var35;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var35); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\\') on <var_c:Char> */
var40 = var_c == '\\';
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "\\\\";
var44 = core__flat___NativeString___to_s_full(var43, 2l, 2l);
var42 = var44;
varonce41 = var42;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var42); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#code_point (var_c) on <var_c:Char> */
var47 = (long)var_c;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var45,32l) on <var45:Int> */
/* Covariant cast for argument 0 (i) <32l:Int> isa OTHER */
/* <32l:Int> isa OTHER */
var50 = 1; /* easy <32l:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var54 = var45 < 32l;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '\\'); /* add on <var_b:Buffer>*/
}
{
{ /* Inline kernel#Char#code_point (var_c) on <var_c:Char> */
var57 = (long)var_c;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var58 = core__flat___Int___to_base(var55, 8l, 0);
var_oct = var58;
{
var59 = ((long(*)(val* self))(var_oct->class->vft[COLOR_core__abstract_text__Text__length]))(var_oct); /* length on <var_oct:String>*/
}
{
{ /* Inline kernel#Int#== (var59,1l) on <var59:Int> */
var62 = var59 == 1l;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (var60){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '0'); /* add on <var_b:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '0'); /* add on <var_b:Buffer>*/
}
} else {
{
var63 = ((long(*)(val* self))(var_oct->class->vft[COLOR_core__abstract_text__Text__length]))(var_oct); /* length on <var_oct:String>*/
}
{
{ /* Inline kernel#Int#== (var63,2l) on <var63:Int> */
var66 = var63 == 2l;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
if (var64){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '0'); /* add on <var_b:Buffer>*/
}
} else {
}
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var_oct); /* append on <var_b:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
}
}
}
}
}
}
var67 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var67;
}
BREAK_label: (void)0;
{
var68 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var68;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#escape_more_to_c for (self: Text, String): String */
val* core___core__Text___escape_more_to_c(val* self, val* p0) {
val* var /* : String */;
val* var_chars /* var chars: String */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var_b /* var b: Buffer */;
val* var3 /* : String */;
val* var4 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : IndexedIterator[Char] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
uint32_t var9 /* : Char */;
uint32_t var_c /* var c: Char */;
val* var10 /* : SequenceRead[Char] */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : String */;
var_chars = p0;
var1 = NEW_core__Buffer(&type_core__Buffer);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_b = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(self); /* escape_to_c on <self:Text>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__Text__chars]))(var3); /* chars on <var3:String>*/
}
var_ = var4;
{
var5 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:IndexedIterator[Char]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:IndexedIterator[Char]>*/
}
var9 = (uint32_t)((long)(var8)>>2);
var_c = var9;
{
var10 = ((val*(*)(val* self))(var_chars->class->vft[COLOR_core__abstract_text__Text__chars]))(var_chars); /* chars on <var_chars:String>*/
}
{
var11 = (val*)((long)(var_c)<<2|2);
var12 = ((short int(*)(val* self, val* p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var10, var11); /* has on <var10:SequenceRead[Char]>*/
}
if (var12){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '\\'); /* add on <var_b:Buffer>*/
}
} else {
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:IndexedIterator[Char]>*/
}
{
var13 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#escape_to_nit for (self: Text): String */
val* core___core__Text___escape_to_nit(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "{}";
var3 = core__flat___NativeString___to_s_full(var2, 2l, 2l);
var1 = var3;
varonce = var1;
}
{
var4 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__escape_more_to_c]))(self, var1); /* escape_more_to_c on <self:Text>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#escape_to_sh for (self: Text): String */
val* core___core__Text___escape_to_sh(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var_b /* var b: Buffer */;
val* var3 /* : SequenceRead[Char] */;
val* var4 /* : nullable Object */;
long var_i /* var i: Int */;
long var5 /* : Int */;
long var_ /* var : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : SequenceRead[Char] */;
val* var11 /* : nullable Object */;
uint32_t var12 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
long var23 /* : Int */;
val* var24 /* : SequenceRead[Char] */;
val* var25 /* : nullable Object */;
val* var26 /* : String */;
var1 = NEW_core__Buffer(&type_core__Buffer);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_b = var2;
{
var3 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Text__chars]))(var_b); /* chars on <var_b:Buffer>*/
}
{
var4 = (val*)((long)('\'')<<2|2);
((void(*)(val* self, val* p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var3, var4); /* add on <var3:SequenceRead[Char](Sequence[Char])>*/
}
var_i = 0l;
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var5;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var9 = var_i < var_;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var11 = ((val*(*)(val* self, long p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var10, var_i); /* [] on <var10:SequenceRead[Char]>*/
}
var12 = (uint32_t)((long)(var11)>>2);
var_c = var12;
{
{ /* Inline kernel#Char#== (var_c,'\'') on <var_c:Char> */
var15 = var_c == '\'';
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
if (likely(varonce!=NULL)) {
var16 = varonce;
} else {
var17 = "\'\\\'\'";
var18 = core__flat___NativeString___to_s_full(var17, 4l, 4l);
var16 = var18;
varonce = var16;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var16); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#!= (var_c,'\000') on <var_c:Char> */
var21 = var_c == '\000';
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (unlikely(!var19)) {
PRINT_ERROR("Runtime error: %s", "Assert \'without_null_byte\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 669);
fatal_exit(1);
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
}
var23 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var23;
}
BREAK_label: (void)0;
{
var24 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Text__chars]))(var_b); /* chars on <var_b:Buffer>*/
}
{
var25 = (val*)((long)('\'')<<2|2);
((void(*)(val* self, val* p0))((((long)var24&3)?class_info[((long)var24&3)]:var24->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var24, var25); /* add on <var24:SequenceRead[Char](Sequence[Char])>*/
}
{
var26 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#escape_to_mk for (self: Text): String */
val* core___core__Text___escape_to_mk(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var_b /* var b: Buffer */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : SequenceRead[Char] */;
val* var9 /* : nullable Object */;
uint32_t var10 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var_22 /* var : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var_26 /* var : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
short int var_44 /* var : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var_48 /* var : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var_52 /* var : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var_56 /* var : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
val* var61 /* : NativeArray[String] */;
static val* varonce60;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : String */;
long var66 /* : Int */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : String */;
long var71 /* : Int */;
val* var72 /* : String */;
var1 = NEW_core__Buffer(&type_core__Buffer);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_b = var2;
var_i = 0l;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var3;
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
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var9 = ((val*(*)(val* self, long p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var8, var_i); /* [] on <var8:SequenceRead[Char]>*/
}
var10 = (uint32_t)((long)(var9)>>2);
var_c = var10;
{
{ /* Inline kernel#Char#== (var_c,'$') on <var_c:Char> */
var13 = var_c == '$';
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "$$";
var16 = core__flat___NativeString___to_s_full(var15, 2l, 2l);
var14 = var16;
varonce = var14;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var14); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,':') on <var_c:Char> */
var21 = var_c == ':';
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_22 = var19;
if (var19){
var18 = var_22;
} else {
{
{ /* Inline kernel#Char#== (var_c,' ') on <var_c:Char> */
var25 = var_c == ' ';
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var18 = var23;
}
var_26 = var18;
if (var18){
var17 = var_26;
} else {
{
{ /* Inline kernel#Char#== (var_c,'#') on <var_c:Char> */
var29 = var_c == '#';
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var17 = var27;
}
if (var17){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '\\'); /* add on <var_b:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#code_point (var_c) on <var_c:Char> */
var36 = (long)var_c;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var34,32l) on <var34:Int> */
/* Covariant cast for argument 0 (i) <32l:Int> isa OTHER */
/* <32l:Int> isa OTHER */
var39 = 1; /* easy <32l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var43 = var34 < 32l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_44 = var37;
if (var37){
var33 = var_44;
} else {
{
{ /* Inline kernel#Char#== (var_c,';') on <var_c:Char> */
var47 = var_c == ';';
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var33 = var45;
}
var_48 = var33;
if (var33){
var32 = var_48;
} else {
{
{ /* Inline kernel#Char#== (var_c,'|') on <var_c:Char> */
var51 = var_c == '|';
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var32 = var49;
}
var_52 = var32;
if (var32){
var31 = var_52;
} else {
{
{ /* Inline kernel#Char#== (var_c,'\\') on <var_c:Char> */
var55 = var_c == '\\';
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var31 = var53;
}
var_56 = var31;
if (var31){
var30 = var_56;
} else {
{
{ /* Inline kernel#Char#== (var_c,'=') on <var_c:Char> */
var59 = var_c == '=';
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var30 = var57;
}
if (var30){
if (unlikely(varonce60==NULL)) {
var61 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "?";
var65 = core__flat___NativeString___to_s_full(var64, 1l, 1l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var61)->values[0]=var63;
} else {
var61 = varonce60;
varonce60 = NULL;
}
{
{ /* Inline kernel#Char#code_point (var_c) on <var_c:Char> */
var68 = (long)var_c;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var69 = core__flat___Int___to_base(var66, 16l, 0);
((struct instance_core__NativeArray*)var61)->values[1]=var69;
{
var70 = ((val*(*)(val* self))(var61->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var70); /* append on <var_b:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
}
}
}
var71 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var71;
}
BREAK_label: (void)0;
{
var72 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var72;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#unescape_nit for (self: Text): String */
val* core___core__Text___unescape_nit(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
long var2 /* : Int */;
val* var3 /* : Buffer */;
val* var_res /* var res: Buffer */;
short int var_was_slash /* var was_slash: Bool */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
uint32_t var11 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
long var29 /* : Int */;
val* var30 /* : String */;
var1 = NEW_core__Buffer(&type_core__Buffer);
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var3 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var1, var2); /* with_cap on <var1:Buffer>*/
}
var_res = var3;
var_was_slash = 0;
var_i = 0l;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var10 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (uint32_t)((long)(var10)>>2);
var_c = var11;
var12 = !var_was_slash;
if (var12){
{
{ /* Inline kernel#Char#== (var_c,'\\') on <var_c:Char> */
var15 = var_c == '\\';
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var_was_slash = 1;
} else {
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
}
goto BREAK_label16;
} else {
}
var_was_slash = 0;
{
{ /* Inline kernel#Char#== (var_c,'n') on <var_c:Char> */
var19 = var_c == 'n';
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '\n'); /* add on <var_res:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'r') on <var_c:Char> */
var22 = var_c == 'r';
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '\015'); /* add on <var_res:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'t') on <var_c:Char> */
var25 = var_c == 't';
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '\t'); /* add on <var_res:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'0') on <var_c:Char> */
var28 = var_c == '0';
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '\000'); /* add on <var_res:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
}
}
}
}
BREAK_label16: (void)0;
var29 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var29;
}
BREAK_label: (void)0;
{
var30 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:Buffer>*/
}
var = var30;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#escape_to_utf16 for (self: Text): String */
val* core___core__Text___escape_to_utf16(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var_buf /* var buf: Buffer */;
val* var3 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[Char] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_i /* var i: Char */;
val* var9 /* : String */;
val* var10 /* : String */;
var1 = NEW_core__Buffer(&type_core__Buffer);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_buf = var2;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[Char]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_i = var8;
var9 = core__abstract_text___Char___escape_to_utf16(var_i);
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var9); /* append on <var_buf:Buffer>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[Char]>*/
}
{
var10 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_buf); /* to_s on <var_buf:Buffer>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#from_utf16_escape for (self: Text, nullable Int, nullable Int): Char */
uint32_t core___core__Text___from_utf16_escape(val* self, val* p0, val* p1) {
uint32_t var /* : Char */;
val* var_pos /* var pos: nullable Int */;
val* var_ln /* var ln: nullable Int */;
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
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
short int var24 /* : Bool */;
uint32_t var25 /* : Char */;
uint32_t var27 /* : Char */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
val* var36 /* : nullable Int */;
long var37 /* : Int */;
long var_cp /* var cp: Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
uint32_t var45 /* : Char */;
uint32_t var47 /* : Char */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
uint32_t var55 /* : Char */;
uint32_t var57 /* : Char */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
short int var64 /* : Bool */;
uint32_t var65 /* : Char */;
uint32_t var67 /* : Char */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
long var71 /* : Int */;
uint32_t var72 /* : Char */;
uint32_t var74 /* : Char */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
long var81 /* : Int */;
short int var82 /* : Bool */;
uint32_t var83 /* : Char */;
uint32_t var85 /* : Char */;
long var86 /* : Int */;
long var88 /* : Int */;
long var89 /* : Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
long var95 /* : Int */;
long var96 /* : Int */;
val* var97 /* : nullable Int */;
long var98 /* : Int */;
long var99 /* : Int */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
long var105 /* : Int */;
long var106 /* : Int */;
long var108 /* : Int */;
long var_cplo /* var cplo: Int */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
int cltype112;
int idtype113;
const char* var_class_name114;
short int var115 /* : Bool */;
uint32_t var116 /* : Char */;
uint32_t var118 /* : Char */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name124;
short int var125 /* : Bool */;
uint32_t var126 /* : Char */;
uint32_t var128 /* : Char */;
long var129 /* : Int */;
uint32_t var130 /* : Char */;
uint32_t var132 /* : Char */;
var_pos = p0;
var_ln = p1;
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
var10 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
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
{ /* Inline kernel#Int#< (var_ln,6l) on <var_ln:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <6l:Int> isa OTHER */
/* <6l:Int> isa OTHER */
var19 = 1; /* easy <6l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var23 = (long)(var_ln)>>2;
var24 = var23 < 6l;
var17 = var24;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline kernel#Int#code_point (65533l) on <65533l:Int> */
var27 = (uint32_t)65533l;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var = var25;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_pos,2l) on <var_pos:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var30 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var34 = (long)(var_pos)>>2;
var35 = var34 + 2l;
var28 = var35;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
var36 = (val*)(var28<<2|1);
var37 = ((long(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__from_utf16_digit]))(self, var36); /* from_utf16_digit on <self:Text>*/
}
var_cp = var37;
{
{ /* Inline kernel#Int#< (var_cp,55296l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <55296l:Int> isa OTHER */
/* <55296l:Int> isa OTHER */
var40 = 1; /* easy <55296l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var44 = var_cp < 55296l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
{ /* Inline kernel#Int#code_point (var_cp) on <var_cp:Int> */
var47 = (uint32_t)var_cp;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var = var45;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#> (var_cp,57343l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <57343l:Int> isa OTHER */
/* <57343l:Int> isa OTHER */
var50 = 1; /* easy <57343l:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var54 = var_cp > 57343l;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
{
{ /* Inline kernel#Int#code_point (var_cp) on <var_cp:Int> */
var57 = (uint32_t)var_cp;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var = var55;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#> (var_cp,56319l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <56319l:Int> isa OTHER */
/* <56319l:Int> isa OTHER */
var60 = 1; /* easy <56319l:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var64 = var_cp > 56319l;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
if (var58){
{
{ /* Inline kernel#Int#code_point (65533l) on <65533l:Int> */
var67 = (uint32_t)65533l;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var = var65;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_ln,6l) on <var_ln:nullable Int(Int)> */
var71 = (long)(var_ln)>>2;
var70 = var71 == 6l;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
if (var68){
{
{ /* Inline kernel#Int#code_point (65533l) on <65533l:Int> */
var74 = (uint32_t)65533l;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var = var72;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_ln,12l) on <var_ln:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <12l:Int> isa OTHER */
/* <12l:Int> isa OTHER */
var77 = 1; /* easy <12l:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var81 = (long)(var_ln)>>2;
var82 = var81 < 12l;
var75 = var82;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
if (var75){
{
{ /* Inline kernel#Int#code_point (65533l) on <65533l:Int> */
var85 = (uint32_t)65533l;
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var = var83;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#<< (var_cp,16l) on <var_cp:Int> */
var88 = var_cp << 16l;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var_cp = var86;
{
{ /* Inline kernel#Int#+ (var_pos,8l) on <var_pos:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <8l:Int> isa OTHER */
/* <8l:Int> isa OTHER */
var91 = 1; /* easy <8l:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var95 = (long)(var_pos)>>2;
var96 = var95 + 8l;
var89 = var96;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
var97 = (val*)(var89<<2|1);
var98 = ((long(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__from_utf16_digit]))(self, var97); /* from_utf16_digit on <self:Text>*/
}
{
{ /* Inline kernel#Int#+ (var_cp,var98) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <var98:Int> isa OTHER */
/* <var98:Int> isa OTHER */
var101 = 1; /* easy <var98:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var105 = var_cp + var98;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var_cp = var99;
{
{ /* Inline math#Int#& (var_cp,65535l) on <var_cp:Int> */
var108 = var_cp & 65535l;
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
var_cplo = var106;
{
{ /* Inline kernel#Int#< (var_cplo,56320l) on <var_cplo:Int> */
/* Covariant cast for argument 0 (i) <56320l:Int> isa OTHER */
/* <56320l:Int> isa OTHER */
var111 = 1; /* easy <56320l:Int> isa OTHER*/
if (unlikely(!var111)) {
var_class_name114 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name114);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var115 = var_cplo < 56320l;
var109 = var115;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
if (var109){
{
{ /* Inline kernel#Int#code_point (65533l) on <65533l:Int> */
var118 = (uint32_t)65533l;
var116 = var118;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
var = var116;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#> (var_cplo,57343l) on <var_cplo:Int> */
/* Covariant cast for argument 0 (i) <57343l:Int> isa OTHER */
/* <57343l:Int> isa OTHER */
var121 = 1; /* easy <57343l:Int> isa OTHER*/
if (unlikely(!var121)) {
var_class_name124 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var125 = var_cplo > 57343l;
var119 = var125;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
if (var119){
{
{ /* Inline kernel#Int#code_point (65533l) on <65533l:Int> */
var128 = (uint32_t)65533l;
var126 = var128;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
var = var126;
goto RET_LABEL;
} else {
}
var129 = core__native___Int___from_utf16_surr(var_cp);
{
{ /* Inline kernel#Int#code_point (var129) on <var129:Int> */
var132 = (uint32_t)var129;
var130 = var132;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
}
var = var130;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#from_utf16_digit for (self: Text, nullable Int): Int */
long core___core__Text___from_utf16_digit(val* self, val* p0) {
long var /* : Int */;
val* var_pos /* var pos: nullable Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
long var7 /* : Int */;
var_pos = p0;
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
{
var6 = (val*)(4l<<2|1);
var7 = ((long(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_core__abstract_text__Text__to_hex]))(self, var_pos, var6); /* to_hex on <self:Text>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#to_percent_encoding for (self: Text): String */
val* core___core__Text___to_percent_encoding(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var_buf /* var buf: Buffer */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : SequenceRead[Char] */;
val* var9 /* : nullable Object */;
uint32_t var10 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
short int var_25 /* var : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
short int var_33 /* var : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
short int var_42 /* var : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
short int var49 /* : Bool */;
short int var_50 /* var : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
short int var58 /* : Bool */;
short int var_59 /* var : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
short int var66 /* : Bool */;
short int var_67 /* var : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var_71 /* var : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var_75 /* var : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var_79 /* var : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
val* var83 /* : String */;
val* var84 /* : SequenceRead[Byte] */;
val* var_bytes /* var bytes: SequenceRead[Byte] */;
val* var_85 /* var : SequenceRead[Byte] */;
val* var86 /* : Iterator[nullable Object] */;
val* var_87 /* var : IndexedIterator[Byte] */;
short int var88 /* : Bool */;
val* var90 /* : nullable Object */;
unsigned char var91 /* : Byte */;
unsigned char var_b /* var b: Byte */;
val* var92 /* : NativeArray[String] */;
static val* varonce;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : String */;
long var97 /* : Int */;
long var99 /* : Int */;
val* var100 /* : String */;
val* var101 /* : String */;
long var102 /* : Int */;
val* var103 /* : String */;
var1 = NEW_core__Buffer(&type_core__Buffer);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_buf = var2;
var_i = 0l;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var3;
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
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var9 = ((val*(*)(val* self, long p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var8, var_i); /* [] on <var8:SequenceRead[Char]>*/
}
var10 = (uint32_t)((long)(var9)>>2);
var_c = var10;
{
{ /* Inline kernel#Char#>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var20 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var24 = var_c >= '0';
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_25 = var18;
if (var18){
{
{ /* Inline kernel#Char#<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var28 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var32 = var_c <= '9';
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var17 = var26;
} else {
var17 = var_25;
}
var_33 = var17;
if (var17){
var16 = var_33;
} else {
{
{ /* Inline kernel#Char#>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var37 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var41 = var_c >= 'a';
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_42 = var35;
if (var35){
{
{ /* Inline kernel#Char#<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var45 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var49 = var_c <= 'z';
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var34 = var43;
} else {
var34 = var_42;
}
var16 = var34;
}
var_50 = var16;
if (var16){
var15 = var_50;
} else {
{
{ /* Inline kernel#Char#>= (var_c,'A') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var54 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var58 = var_c >= 'A';
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var_59 = var52;
if (var52){
{
{ /* Inline kernel#Char#<= (var_c,'Z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'Z':Char> isa OTHER */
/* <'Z':Char> isa OTHER */
var62 = 1; /* easy <'Z':Char> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var66 = var_c <= 'Z';
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var51 = var60;
} else {
var51 = var_59;
}
var15 = var51;
}
var_67 = var15;
if (var15){
var14 = var_67;
} else {
{
{ /* Inline kernel#Char#== (var_c,'-') on <var_c:Char> */
var70 = var_c == '-';
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var14 = var68;
}
var_71 = var14;
if (var14){
var13 = var_71;
} else {
{
{ /* Inline kernel#Char#== (var_c,'.') on <var_c:Char> */
var74 = var_c == '.';
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var13 = var72;
}
var_75 = var13;
if (var13){
var12 = var_75;
} else {
{
{ /* Inline kernel#Char#== (var_c,'_') on <var_c:Char> */
var78 = var_c == '_';
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var12 = var76;
}
var_79 = var12;
if (var12){
var11 = var_79;
} else {
{
{ /* Inline kernel#Char#== (var_c,'~') on <var_c:Char> */
var82 = var_c == '~';
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var11 = var80;
}
if (var11){
{
((void(*)(val* self, uint32_t p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buf, var_c); /* add on <var_buf:Buffer>*/
}
} else {
var83 = core__abstract_text___Char___Object__to_s(var_c);
{
var84 = ((val*(*)(val* self))(var83->class->vft[COLOR_core__abstract_text__Text__bytes]))(var83); /* bytes on <var83:String>*/
}
var_bytes = var84;
var_85 = var_bytes;
{
var86 = ((val*(*)(val* self))((((long)var_85&3)?class_info[((long)var_85&3)]:var_85->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_85); /* iterator on <var_85:SequenceRead[Byte]>*/
}
var_87 = var86;
for(;;) {
{
var88 = ((short int(*)(val* self))((((long)var_87&3)?class_info[((long)var_87&3)]:var_87->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_87); /* is_ok on <var_87:IndexedIterator[Byte]>*/
}
if (var88){
} else {
goto BREAK_label89;
}
{
var90 = ((val*(*)(val* self))((((long)var_87&3)?class_info[((long)var_87&3)]:var_87->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_87); /* item on <var_87:IndexedIterator[Byte]>*/
}
var91 = ((struct instance_core__Byte*)var90)->value; /* autounbox from nullable Object to Byte */;
var_b = var91;
if (unlikely(varonce==NULL)) {
var92 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "%";
var96 = core__flat___NativeString___to_s_full(var95, 1l, 1l);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var92)->values[0]=var94;
} else {
var92 = varonce;
varonce = NULL;
}
{
{ /* Inline kernel#Byte#to_i (var_b) on <var_b:Byte> */
var99 = (long)var_b;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var100 = core__abstract_text___Int___to_hex(var97);
((struct instance_core__NativeArray*)var92)->values[1]=var100;
{
var101 = ((val*(*)(val* self))(var92->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var92); /* native_to_s on <var92:NativeArray[String]>*/
}
varonce = var92;
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var101); /* append on <var_buf:Buffer>*/
}
{
((void(*)(val* self))((((long)var_87&3)?class_info[((long)var_87&3)]:var_87->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_87); /* next on <var_87:IndexedIterator[Byte]>*/
}
}
BREAK_label89: (void)0;
{
((void(*)(val* self))((((long)var_87&3)?class_info[((long)var_87&3)]:var_87->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_87); /* finish on <var_87:IndexedIterator[Byte]>*/
}
}
var102 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var102;
}
BREAK_label: (void)0;
{
var103 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_buf); /* to_s on <var_buf:Buffer>*/
}
var = var103;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#from_percent_encoding for (self: Text): String */
val* core___core__Text___from_percent_encoding(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_len /* var len: Int */;
short int var_has_percent /* var has_percent: Bool */;
val* var2 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[Char] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
uint32_t var7 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
short int var15 /* : Bool */;
val* var16 /* : String */;
char* var17 /* : NativeString */;
char* var18 /* : NativeString */;
char* var20 /* : NativeString */;
char* var_buf /* var buf: NativeString */;
long var_i /* var i: Int */;
long var_l /* var l: Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
val* var29 /* : SequenceRead[Char] */;
val* var30 /* : nullable Object */;
uint32_t var31 /* : Char */;
uint32_t var_c32 /* var c: Char */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
unsigned char var51 /* : Byte */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
val* var60 /* : Text */;
val* var_hex_s /* var hex_s: Text */;
short int var61 /* : Bool */;
long var62 /* : Int */;
long var_hex_i /* var hex_i: Int */;
unsigned char var63 /* : Byte */;
unsigned char var65 /* : Byte */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
unsigned char var74 /* : Byte */;
long var76 /* : Int */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
long var82 /* : Int */;
unsigned char var83 /* : Byte */;
long var85 /* : Int */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
long var91 /* : Int */;
long var92 /* : Int */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
long var98 /* : Int */;
val* var100 /* : String */;
val* var101 /* : nullable Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__bytelen]))(self); /* bytelen on <self:Text>*/
}
var_len = var1;
var_has_percent = 0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[Char]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[Char]>*/
}
var7 = (uint32_t)((long)(var6)>>2);
var_c = var7;
{
{ /* Inline kernel#Char#== (var_c,'%') on <var_c:Char> */
var10 = var_c == '%';
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline kernel#Int#- (var_len,2l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var13 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_len - 2l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_len = var11;
var_has_percent = 1;
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[Char]>*/
}
var15 = !var_has_percent;
if (var15){
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
var = var16;
goto RET_LABEL;
} else {
}
var17 = NULL/*special!*/;
{
{ /* Inline native#NativeString#new (var17,var_len) on <var17:NativeString> */
var20 = (char*)nit_alloc(var_len);
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_buf = var18;
var_i = 0l;
var_l = 0l;
for(;;) {
{
var21 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#< (var_i,var21) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var28 = var_i < var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var30 = ((val*(*)(val* self, long p0))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var29, var_i); /* [] on <var29:SequenceRead[Char]>*/
}
var31 = (uint32_t)((long)(var30)>>2);
var_c32 = var31;
{
{ /* Inline kernel#Char#== (var_c32,'%') on <var_c32:Char> */
var35 = var_c32 == '%';
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
{ /* Inline kernel#Int#+ (var_i,2l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var38 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var42 = var_i + 2l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
var43 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#>= (var36,var43) on <var36:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var50 = var36 >= var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
var51 = core___core__Char___ascii('?');
{
{ /* Inline native#NativeString#[]= (var_buf,var_l,var51) on <var_buf:NativeString> */
var_buf[var_l]=(unsigned char)var51;
RET_LABEL52:(void)0;
}
}
} else {
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
var60 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_i, 2l); /* substring on <self:Text>*/
}
var_hex_s = var60;
{
var61 = ((short int(*)(val* self))(var_hex_s->class->vft[COLOR_core__abstract_text__Text__is_hex]))(var_hex_s); /* is_hex on <var_hex_s:Text>*/
}
if (var61){
{
var62 = ((long(*)(val* self, val* p0, val* p1))(var_hex_s->class->vft[COLOR_core__abstract_text__Text__to_hex]))(var_hex_s, ((val*)NULL), ((val*)NULL)); /* to_hex on <var_hex_s:Text>*/
}
var_hex_i = var62;
{
{ /* Inline kernel#Int#to_b (var_hex_i) on <var_hex_i:Int> */
var65 = (unsigned char)var_hex_i;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline native#NativeString#[]= (var_buf,var_l,var63) on <var_buf:NativeString> */
var_buf[var_l]=(unsigned char)var63;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var69 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var73 = var_i + 1l;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_i = var67;
} else {
var74 = core___core__Char___ascii('?');
{
{ /* Inline native#NativeString#[]= (var_buf,var_l,var74) on <var_buf:NativeString> */
var_buf[var_l]=(unsigned char)var74;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var78 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var82 = var_i - 1l;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var_i = var76;
}
}
} else {
var83 = core___core__Char___ascii(var_c32);
{
{ /* Inline native#NativeString#[]= (var_buf,var_l,var83) on <var_buf:NativeString> */
var_buf[var_l]=(unsigned char)var83;
RET_LABEL84:(void)0;
}
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var87 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var91 = var_i + 1l;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_i = var85;
{
{ /* Inline kernel#Int#+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var94 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var94)) {
var_class_name97 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var98 = var_l + 1l;
var92 = var98;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var_l = var92;
} else {
goto BREAK_label99;
}
}
BREAK_label99: (void)0;
var101 = (val*)(var_l<<2|1);
var100 = core__flat___NativeString___to_s_unsafe(var_buf, var101);
var = var100;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#html_escape for (self: Text): String */
val* core___core__Text___html_escape(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var_buf /* var buf: Buffer */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : SequenceRead[Char] */;
val* var9 /* : nullable Object */;
uint32_t var10 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : String */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
long var52 /* : Int */;
val* var53 /* : String */;
var1 = NEW_core__Buffer(&type_core__Buffer);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_buf = var2;
var_i = 0l;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var3;
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
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var9 = ((val*(*)(val* self, long p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var8, var_i); /* [] on <var8:SequenceRead[Char]>*/
}
var10 = (uint32_t)((long)(var9)>>2);
var_c = var10;
{
{ /* Inline kernel#Char#== (var_c,'&') on <var_c:Char> */
var13 = var_c == '&';
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "&amp;";
var16 = core__flat___NativeString___to_s_full(var15, 5l, 5l);
var14 = var16;
varonce = var14;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var14); /* append on <var_buf:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'<') on <var_c:Char> */
var19 = var_c == '<';
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "&lt;";
var23 = core__flat___NativeString___to_s_full(var22, 4l, 4l);
var21 = var23;
varonce20 = var21;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var21); /* append on <var_buf:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'>') on <var_c:Char> */
var26 = var_c == '>';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "&gt;";
var30 = core__flat___NativeString___to_s_full(var29, 4l, 4l);
var28 = var30;
varonce27 = var28;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var28); /* append on <var_buf:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\"') on <var_c:Char> */
var33 = var_c == '\"';
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "&#34;";
var37 = core__flat___NativeString___to_s_full(var36, 5l, 5l);
var35 = var37;
varonce34 = var35;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var35); /* append on <var_buf:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'\'') on <var_c:Char> */
var40 = var_c == '\'';
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "&#39;";
var44 = core__flat___NativeString___to_s_full(var43, 5l, 5l);
var42 = var44;
varonce41 = var42;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var42); /* append on <var_buf:Buffer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_c,'/') on <var_c:Char> */
var47 = var_c == '/';
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "&#47;";
var51 = core__flat___NativeString___to_s_full(var50, 5l, 5l);
var49 = var51;
varonce48 = var49;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var49); /* append on <var_buf:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buf, var_c); /* add on <var_buf:Buffer>*/
}
}
}
}
}
}
}
var52 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var52;
}
BREAK_label: (void)0;
{
var53 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_buf); /* to_s on <var_buf:Buffer>*/
}
var = var53;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#== for (self: Text, nullable Object): Bool */
short int core___core__Text___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : SequenceRead[Char] */;
short int var16 /* : Bool */;
var_o = p0;
if (var_o == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_o, ((val*)NULL)); /* == on <var_o:nullable Object>*/
var1 = var2;
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_o:nullable Object(Object)> isa Text */
cltype = type_core__Text.color;
idtype = type_core__Text.id;
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
var4 = !var3;
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#is_same_instance (self,var_o) on <self:Text> */
var7 = self == var_o;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 1;
goto RET_LABEL;
} else {
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var9 = ((long(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Text__length]))(var_o); /* length on <var_o:nullable Object(Text)>*/
}
{
{ /* Inline kernel#Int#!= (var8,var9) on <var8:Int> */
var12 = var8 == var9;
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = 0;
goto RET_LABEL;
} else {
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var15 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Text__chars]))(var_o); /* chars on <var_o:nullable Object(Text)>*/
}
{
var16 = ((short int(*)(val* self, val* p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var14, var15); /* == on <var14:SequenceRead[Char]>*/
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#< for (self: Text, Text): Bool */
short int core___core__Text___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Text */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_self_chars /* var self_chars: IndexedIterator[Char] */;
val* var4 /* : SequenceRead[Char] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_other_chars /* var other_chars: IndexedIterator[Char] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
uint32_t var17 /* : Char */;
uint32_t var18 /* : Char */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
uint32_t var28 /* : Char */;
uint32_t var29 /* : Char */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 918);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var3 = ((val*(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var2); /* iterator on <var2:SequenceRead[Char]>*/
}
var_self_chars = var3;
{
var4 = ((val*(*)(val* self))(var_other->class->vft[COLOR_core__abstract_text__Text__chars]))(var_other); /* chars on <var_other:Text>*/
}
{
var5 = ((val*(*)(val* self))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var4); /* iterator on <var4:SequenceRead[Char]>*/
}
var_other_chars = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_self_chars); /* is_ok on <var_self_chars:IndexedIterator[Char]>*/
}
var_ = var7;
if (var7){
{
var8 = ((short int(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_other_chars); /* is_ok on <var_other_chars:IndexedIterator[Char]>*/
}
var6 = var8;
} else {
var6 = var_;
}
if (var6){
{
var9 = ((val*(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_self_chars); /* item on <var_self_chars:IndexedIterator[Char]>*/
}
{
var10 = ((val*(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_other_chars); /* item on <var_other_chars:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Char#< (var9,var10) on <var9:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var10:nullable Object(Char)> isa OTHER */
/* <var10:nullable Object(Char)> isa OTHER */
var13 = 1; /* easy <var10:nullable Object(Char)> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = var10 == NULL ? "null" : (((long)var10&3)?type_info[((long)var10&3)]:var10->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 911);
fatal_exit(1);
}
var17 = (uint32_t)((long)(var9)>>2);
var18 = (uint32_t)((long)(var10)>>2);
var19 = var17 < var18;
var11 = var19;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var = 1;
goto RET_LABEL;
} else {
}
{
var20 = ((val*(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_self_chars); /* item on <var_self_chars:IndexedIterator[Char]>*/
}
{
var21 = ((val*(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_other_chars); /* item on <var_other_chars:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel#Char#> (var20,var21) on <var20:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var21:nullable Object(Char)> isa OTHER */
/* <var21:nullable Object(Char)> isa OTHER */
var24 = 1; /* easy <var21:nullable Object(Char)> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = var21 == NULL ? "null" : (((long)var21&3)?type_info[((long)var21&3)]:var21->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var28 = (uint32_t)((long)(var20)>>2);
var29 = (uint32_t)((long)(var21)>>2);
var30 = var28 > var29;
var22 = var30;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_self_chars); /* next on <var_self_chars:IndexedIterator[Char]>*/
}
{
((void(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_other_chars); /* next on <var_other_chars:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var31 = ((short int(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_self_chars); /* is_ok on <var_self_chars:IndexedIterator[Char]>*/
}
if (var31){
var = 0;
goto RET_LABEL;
} else {
var = 1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_text#Text#escape_to_dot for (self: Text): String */
val* core___core__Text___escape_to_dot(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "|{}<>";
var3 = core__flat___NativeString___to_s_full(var2, 5l, 5l);
var1 = var3;
varonce = var1;
}
{
var4 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__escape_more_to_c]))(self, var1); /* escape_more_to_c on <self:Text>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#hash_cache for (self: Text): nullable Int */
val* core___core__Text___hash_cache(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = self->attrs[COLOR_core__abstract_text__Text___hash_cache].val; /* _hash_cache on <self:Text> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#hash_cache= for (self: Text, nullable Int) */
void core___core__Text___hash_cache_61d(val* self, val* p0) {
self->attrs[COLOR_core__abstract_text__Text___hash_cache].val = p0; /* _hash_cache on <self:Text> */
RET_LABEL:;
}
/* method abstract_text#Text#hash for (self: Text): Int */
long core___core__Text___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : nullable Int */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var_h /* var h: Int */;
long var_i /* var i: Int */;
long var6 /* : Int */;
long var_ /* var : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : SequenceRead[Char] */;
val* var12 /* : nullable Object */;
uint32_t var13 /* : Char */;
uint32_t var_char /* var char: Char */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
long var34 /* : Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
long var37 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__hash_cache]))(self); /* hash_cache on <self:Text>*/
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
var_i = 0l;
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var6;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var9 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var10 = var_i < var_;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var12 = ((val*(*)(val* self, long p0))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var11, var_i); /* [] on <var11:SequenceRead[Char]>*/
}
var13 = (uint32_t)((long)(var12)>>2);
var_char = var13;
{
{ /* Inline kernel#Int#<< (var_h,5l) on <var_h:Int> */
var16 = var_h << 5l;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var14,var_h) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var19 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var23 = var14 + var_h;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Char#code_point (var_char) on <var_char:Char> */
var26 = (long)var_char;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var17,var24) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var29 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var33 = var17 + var24;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_h = var27;
var34 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var34;
}
BREAK_label: (void)0;
{
var35 = (val*)(var_h<<2|1);
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__hash_cache_61d]))(self, var35); /* hash_cache= on <self:Text>*/
}
} else {
}
{
var36 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__hash_cache]))(self); /* hash_cache on <self:Text>*/
}
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 964);
fatal_exit(1);
}
var37 = (long)(var36)>>2;
var = var37;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#format for (self: Text, Array[Object]): String */
val* core___core__Text___format(val* self, val* p0) {
val* var /* : String */;
val* var_args /* var args: Array[Object] */;
val* var1 /* : Array[Text] */;
val* var_s /* var s: Array[Text] */;
long var_curr_st /* var curr_st: Int */;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
uint32_t var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var_fmt_st /* var fmt_st: Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
long var_ciph_st /* var ciph_st: Int */;
short int var18 /* : Bool */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
uint32_t var27 /* : Char */;
short int var28 /* : Bool */;
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
long var_ciph_len /* var ciph_len: Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
val* var53 /* : Text */;
short int var54 /* : Bool */;
long var55 /* : Int */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
short int var62 /* : Bool */;
short int var_63 /* var : Bool */;
uint32_t var64 /* : Char */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
val* var76 /* : Text */;
long var77 /* : Int */;
long var_arg_index /* var arg_index: Int */;
long var78 /* : Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
short int var85 /* : Bool */;
long var86 /* : Int */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
long var92 /* : Int */;
val* var93 /* : Text */;
val* var94 /* : nullable Object */;
val* var95 /* : String */;
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
long var111 /* : Int */;
long var112 /* : Int */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
const char* var_class_name117;
long var118 /* : Int */;
val* var119 /* : Text */;
val* var120 /* : String */;
var_args = p0;
var1 = NEW_core__Array(&type_core__Array__core__Text);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[Text]>*/
}
var_s = var1;
var_curr_st = 0l;
var_i = 0l;
for(;;) {
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
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
var7 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
{
{ /* Inline kernel#Char#== (var7,'%') on <var7:Char> */
var10 = var7 == '%';
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var_fmt_st = var_i;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var17 = var_i + 1l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_i = var11;
var_ciph_st = var_i;
for(;;) {
{
var19 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#< (var_i,var19) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var26 = var_i < var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_ = var20;
if (var20){
{
var27 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
var28 = core__abstract_text___Char___is_numeric(var27);
var18 = var28;
} else {
var18 = var_;
}
if (var18){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var35 = var_i + 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_i = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#- (var_i,var_ciph_st) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_ciph_st:Int> isa OTHER */
/* <var_ciph_st:Int> isa OTHER */
var38 = 1; /* easy <var_ciph_st:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_i - var_ciph_st;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_ciph_len = var36;
{
{ /* Inline kernel#Int#== (var_ciph_len,0l) on <var_ciph_len:Int> */
var45 = var_ciph_len == 0l;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
{ /* Inline kernel#Int#- (var_i,var_curr_st) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_curr_st:Int> isa OTHER */
/* <var_curr_st:Int> isa OTHER */
var48 = 1; /* easy <var_curr_st:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var52 = var_i - var_curr_st;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
var53 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_curr_st, var46); /* substring on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_s, var53); /* push on <var_s:Array[Text]>*/
}
{
var55 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#< (var_i,var55) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var55:Int> isa OTHER */
/* <var55:Int> isa OTHER */
var58 = 1; /* easy <var55:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var62 = var_i < var55;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_63 = var56;
if (var56){
{
var64 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
{
{ /* Inline kernel#Char#== (var64,'%') on <var64:Char> */
var67 = var64 == '%';
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var54 = var65;
} else {
var54 = var_63;
}
if (var54){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var74 = var_i + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_i = var68;
} else {
}
var_curr_st = var_i;
goto BREAK_label75;
} else {
}
{
var76 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_ciph_st, var_ciph_len); /* substring on <self:Text>*/
}
{
var77 = ((long(*)(val* self))(var76->class->vft[COLOR_core__abstract_text__Text__to_i]))(var76); /* to_i on <var76:Text>*/
}
var_arg_index = var77;
{
var78 = ((long(*)(val* self))(var_args->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[Object]>*/
}
{
{ /* Inline kernel#Int#>= (var_arg_index,var78) on <var_arg_index:Int> */
/* Covariant cast for argument 0 (i) <var78:Int> isa OTHER */
/* <var78:Int> isa OTHER */
var81 = 1; /* easy <var78:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var85 = var_arg_index >= var78;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
goto BREAK_label75;
} else {
}
{
{ /* Inline kernel#Int#- (var_fmt_st,var_curr_st) on <var_fmt_st:Int> */
/* Covariant cast for argument 0 (i) <var_curr_st:Int> isa OTHER */
/* <var_curr_st:Int> isa OTHER */
var88 = 1; /* easy <var_curr_st:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var92 = var_fmt_st - var_curr_st;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
{
var93 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_curr_st, var86); /* substring on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_s, var93); /* push on <var_s:Array[Text]>*/
}
{
var94 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_args, var_arg_index); /* [] on <var_args:Array[Object]>*/
}
{
var95 = ((val*(*)(val* self))((((long)var94&3)?class_info[((long)var94&3)]:var94->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var94); /* to_s on <var94:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_s, var95); /* push on <var_s:Array[Text]>*/
}
var_curr_st = var_i;
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var98 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var102 = var_i - 1l;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var_i = var96;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var105 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var109 = var_i + 1l;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_i = var103;
} else {
goto BREAK_label110;
}
BREAK_label75: (void)0;
}
BREAK_label110: (void)0;
{
var111 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#- (var111,var_curr_st) on <var111:Int> */
/* Covariant cast for argument 0 (i) <var_curr_st:Int> isa OTHER */
/* <var_curr_st:Int> isa OTHER */
var114 = 1; /* easy <var_curr_st:Int> isa OTHER*/
if (unlikely(!var114)) {
var_class_name117 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name117);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var118 = var111 - var_curr_st;
var112 = var118;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
{
var119 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_curr_st, var112); /* substring on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_s, var119); /* push on <var_s:Array[Text]>*/
}
{
var120 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Collection__plain_to_s]))(var_s); /* plain_to_s on <var_s:Array[Text]>*/
}
var = var120;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#levenshtein_distance for (self: Text, String): Int */
long core___core__Text___levenshtein_distance(val* self, val* p0) {
long var /* : Int */;
val* var_other /* var other: String */;
long var1 /* : Int */;
long var_slen /* var slen: Int */;
long var2 /* : Int */;
long var_olen /* var olen: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[Int] */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
val* var_v0 /* var v0: Array[Int] */;
val* var15 /* : Array[Int] */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
val* var_v1 /* var v1: Array[Int] */;
long var_j /* var j: Int */;
long var_ /* var : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
long var31 /* : Int */;
long var_i /* var i: Int */;
long var_32 /* var : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
val* var48 /* : nullable Object */;
long var_j49 /* var j: Int */;
long var_50 /* var : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
val* var59 /* : nullable Object */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
long var67 /* : Int */;
long var_cost1 /* var cost1: Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
val* var75 /* : nullable Object */;
long var76 /* : Int */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
long var82 /* : Int */;
long var83 /* : Int */;
long var_cost2 /* var cost2: Int */;
val* var84 /* : nullable Object */;
long var85 /* : Int */;
long var_cost3 /* var cost3: Int */;
uint32_t var86 /* : Char */;
uint32_t var87 /* : Char */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
long var92 /* : Int */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
long var98 /* : Int */;
long var99 /* : Int */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
long var105 /* : Int */;
long var106 /* : Int */;
long var107 /* : Int */;
val* var108 /* : nullable Object */;
long var109 /* : Int */;
val* var_tmp /* var tmp: Array[Int] */;
long var110 /* : Int */;
val* var111 /* : nullable Object */;
long var112 /* : Int */;
var_other = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_slen = var1;
{
var2 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__abstract_text__Text__length]))(var_other); /* length on <var_other:String>*/
}
var_olen = var2;
{
{ /* Inline kernel#Int#== (var_slen,0l) on <var_slen:Int> */
var5 = var_slen == 0l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var = var_olen;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_olen,0l) on <var_olen:Int> */
var8 = var_olen == 0l;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var = var_slen;
goto RET_LABEL;
} else {
}
{
var9 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var_other); /* == on <self:Text>*/
}
if (var9){
var = 0l;
goto RET_LABEL;
} else {
}
var10 = NEW_core__Array(&type_core__Array__core__Int);
{
{ /* Inline kernel#Int#+ (var_olen,1l) on <var_olen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_olen + 1l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_core__array__Array__with_capacity]))(var10, var11); /* with_capacity on <var10:Array[Int]>*/
}
var_v0 = var10;
var15 = NEW_core__Array(&type_core__Array__core__Int);
{
{ /* Inline kernel#Int#+ (var_olen,1l) on <var_olen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var22 = var_olen + 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
((void(*)(val* self, long p0))(var15->class->vft[COLOR_core__array__Array__with_capacity]))(var15, var16); /* with_capacity on <var15:Array[Int]>*/
}
var_v1 = var15;
var_j = 0l;
var_ = var_olen;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var25 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var29 = var_j <= var_;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
} else {
goto BREAK_label;
}
{
var30 = (val*)(var_j<<2|1);
((void(*)(val* self, long p0, val* p1))(var_v0->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_v0, var_j, var30); /* []= on <var_v0:Array[Int]>*/
}
var31 = core___core__Int___Discrete__successor(var_j, 1l);
var_j = var31;
}
BREAK_label: (void)0;
var_i = 0l;
var_32 = var_slen;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_32) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_32:Int> isa OTHER */
/* <var_32:Int> isa OTHER */
var35 = 1; /* easy <var_32:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var39 = var_i < var_32;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
} else {
goto BREAK_label40;
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var43 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var47 = var_i + 1l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
var48 = (val*)(var41<<2|1);
((void(*)(val* self, long p0, val* p1))(var_v1->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_v1, 0l, var48); /* []= on <var_v1:Array[Int]>*/
}
var_j49 = 0l;
var_50 = var_olen;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j49,var_50) on <var_j49:Int> */
/* Covariant cast for argument 0 (i) <var_50:Int> isa OTHER */
/* <var_50:Int> isa OTHER */
var53 = 1; /* easy <var_50:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var57 = var_j49 < var_50;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
} else {
goto BREAK_label58;
}
{
var59 = ((val*(*)(val* self, long p0))(var_v1->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_v1, var_j49); /* [] on <var_v1:Array[Int]>*/
}
{
{ /* Inline kernel#Int#+ (var59,1l) on <var59:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var66 = (long)(var59)>>2;
var67 = var66 + 1l;
var60 = var67;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var_cost1 = var60;
{
{ /* Inline kernel#Int#+ (var_j49,1l) on <var_j49:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var74 = var_j49 + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
var75 = ((val*(*)(val* self, long p0))(var_v0->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_v0, var68); /* [] on <var_v0:Array[Int]>*/
}
{
{ /* Inline kernel#Int#+ (var75,1l) on <var75:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var78 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var82 = (long)(var75)>>2;
var83 = var82 + 1l;
var76 = var83;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var_cost2 = var76;
{
var84 = ((val*(*)(val* self, long p0))(var_v0->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_v0, var_j49); /* [] on <var_v0:Array[Int]>*/
}
var85 = (long)(var84)>>2;
var_cost3 = var85;
{
var86 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
{
var87 = ((uint32_t(*)(val* self, long p0))(var_other->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_other, var_j49); /* [] on <var_other:String>*/
}
{
{ /* Inline kernel#Char#!= (var86,var87) on <var86:Char> */
var90 = var86 == var87;
var91 = !var90;
var88 = var91;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
{ /* Inline kernel#Int#+ (var_cost3,1l) on <var_cost3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var94 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var94)) {
var_class_name97 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var98 = var_cost3 + 1l;
var92 = var98;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var_cost3 = var92;
} else {
}
{
{ /* Inline kernel#Int#+ (var_j49,1l) on <var_j49:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var101 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var105 = var_j49 + 1l;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var106 = core___core__Int___Comparable__min(var_cost1, var_cost2);
var107 = core___core__Int___Comparable__min(var106, var_cost3);
{
var108 = (val*)(var107<<2|1);
((void(*)(val* self, long p0, val* p1))(var_v1->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_v1, var99, var108); /* []= on <var_v1:Array[Int]>*/
}
var109 = core___core__Int___Discrete__successor(var_j49, 1l);
var_j49 = var109;
}
BREAK_label58: (void)0;
var_tmp = var_v1;
var_v1 = var_v0;
var_v0 = var_tmp;
var110 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var110;
}
BREAK_label40: (void)0;
{
var111 = ((val*(*)(val* self, long p0))(var_v0->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_v0, var_olen); /* [] on <var_v0:Array[Int]>*/
}
var112 = (long)(var111)>>2;
var = var112;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Text#copy_to_native for (self: Text, NativeString, Int, Int, Int) */
void core___core__Text___copy_to_native(val* self, char* p0, long p1, long p2, long p3) {
char* var_dest /* var dest: NativeString */;
long var_n /* var n: Int */;
long var_src_offset /* var src_offset: Int */;
long var_dest_offset /* var dest_offset: Int */;
long var_mypos /* var mypos: Int */;
long var_itspos /* var itspos: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
val* var4 /* : SequenceRead[Byte] */;
val* var5 /* : nullable Object */;
unsigned char var7 /* : Byte */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
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
var_dest = p0;
var_n = p1;
var_src_offset = p2;
var_dest_offset = p3;
var_mypos = var_src_offset;
var_itspos = var_dest_offset;
for(;;) {
{
{ /* Inline kernel#Int#> (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var3 = var_n > 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__bytes]))(self); /* bytes on <self:Text>*/
}
{
var5 = ((val*(*)(val* self, long p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var4, var_mypos); /* [] on <var4:SequenceRead[Byte]>*/
}
{
{ /* Inline native#NativeString#[]= (var_dest,var_itspos,var5) on <var_dest:NativeString> */
var7 = ((struct instance_core__Byte*)var5)->value; /* autounbox from nullable Object to Byte */;
var_dest[var_itspos]=(unsigned char)var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_itspos,1l) on <var_itspos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_itspos + 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_itspos = var8;
{
{ /* Inline kernel#Int#+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var21 = var_mypos + 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_mypos = var15;
{
{ /* Inline kernel#Int#- (var_n,1l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_n - 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_n = var22;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_text#FlatText#items for (self: FlatText): NativeString */
char* core___core__FlatText___items(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text#FlatText#items= for (self: FlatText, NativeString) */
void core___core__FlatText___items_61d(val* self, char* p0) {
self->attrs[COLOR_core__abstract_text__FlatText___items].str = p0; /* _items on <self:FlatText> */
RET_LABEL:;
}
/* method abstract_text#FlatText#fast_cstring for (self: FlatText): NativeString */
char* core___core__FlatText___fast_cstring(val* self) {
char* var /* : NativeString */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "fast_cstring", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1106);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#FlatText#length for (self: FlatText): Int */
long core___core__FlatText___Text__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text#FlatText#length= for (self: FlatText, Int) */
void core___core__FlatText___length_61d(val* self, long p0) {
self->attrs[COLOR_core__abstract_text__FlatText___length].l = p0; /* _length on <self:FlatText> */
RET_LABEL:;
}
/* method abstract_text#FlatText#bytelen for (self: FlatText): Int */
long core___core__FlatText___Text__bytelen(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l; /* _bytelen on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text#FlatText#bytelen= for (self: FlatText, Int) */
void core___core__FlatText___bytelen_61d(val* self, long p0) {
self->attrs[COLOR_core__abstract_text__FlatText___bytelen].l = p0; /* _bytelen on <self:FlatText> */
RET_LABEL:;
}
/* method abstract_text#FlatText#output for (self: FlatText) */
void core___core__FlatText___core__kernel__Object__output(val* self) {
long var_i /* var i: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
char* var5 /* : NativeString */;
unsigned char var6 /* : Byte */;
unsigned char var8 /* : Byte */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
var_i = 0l;
for(;;) {
{
var = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:FlatText>*/
}
{
{ /* Inline kernel#Int#< (var_i,var) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var4 = var_i < var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
var5 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__FlatText__items]))(self); /* items on <self:FlatText>*/
}
{
{ /* Inline native#NativeString#[] (var5,var_i) on <var5:NativeString> */
var8 = (unsigned char)((int)var5[var_i]);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Byte#output (var6) on <var6:Byte> */
printf("%x\n", var6);
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var16 = var_i + 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_i = var10;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_text#FlatText#copy_to_native for (self: FlatText, NativeString, Int, Int, Int) */
void core___core__FlatText___Text__copy_to_native(val* self, char* p0, long p1, long p2, long p3) {
char* var_dest /* var dest: NativeString */;
long var_n /* var n: Int */;
long var_src_offset /* var src_offset: Int */;
long var_dest_offset /* var dest_offset: Int */;
char* var /* : NativeString */;
var_dest = p0;
var_n = p1;
var_src_offset = p2;
var_dest_offset = p3;
{
var = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__FlatText__items]))(self); /* items on <self:FlatText>*/
}
{
{ /* Inline native#NativeString#copy_to (var,var_dest,var_n,var_src_offset,var_dest_offset) on <var:NativeString> */
memmove(var_dest+var_dest_offset,var+var_src_offset,var_n);
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_text#StringCharView#target for (self: StringCharView): Text */
val* core__abstract_text___core__abstract_text__StringCharView___target(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
var1 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:StringCharView> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1148);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text#StringCharView#target= for (self: StringCharView, Text) */
void core__abstract_text___core__abstract_text__StringCharView___target_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (target) <p0:Text> isa SELFTYPE */
/* <p0:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__StringCharView__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1148);
fatal_exit(1);
}
self->attrs[COLOR_core__abstract_text__StringCharView___target].val = p0; /* _target on <self:StringCharView> */
RET_LABEL:;
}
/* method abstract_text#StringCharView#is_empty for (self: StringCharView): Bool */
short int core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Text */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:StringCharView>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var1); /* is_empty on <var1:Text>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#StringCharView#length for (self: StringCharView): Int */
long core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : Text */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:StringCharView>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:Text>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#StringCharView#iterator for (self: StringCharView): IndexedIterator[Char] */
val* core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : IndexedIterator[nullable Object] */;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(self, 0l); /* iterator_from on <self:StringCharView>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#StringCharView#reverse_iterator for (self: StringCharView): IndexedIterator[Char] */
val* core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__SequenceRead__reverse_iterator(val* self) {
val* var /* : IndexedIterator[Char] */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
val* var6 /* : IndexedIterator[nullable Object] */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:StringCharView>*/
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
var6 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator_from]))(self, var2); /* reverse_iterator_from on <self:StringCharView>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#StringCharView#init for (self: StringCharView) */
void core__abstract_text___core__abstract_text__StringCharView___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__abstract_text___core__abstract_text__StringCharView___core__kernel__Object__init]))(self); /* init on <self:StringCharView>*/
}
RET_LABEL:;
}
/* method abstract_text#StringByteView#target for (self: StringByteView): Text */
val* core__abstract_text___core__abstract_text__StringByteView___target(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
var1 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:StringByteView> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1166);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text#StringByteView#target= for (self: StringByteView, Text) */
void core__abstract_text___core__abstract_text__StringByteView___target_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (target) <p0:Text> isa SELFTYPE */
/* <p0:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__StringByteView__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1166);
fatal_exit(1);
}
self->attrs[COLOR_core__abstract_text__StringByteView___target].val = p0; /* _target on <self:StringByteView> */
RET_LABEL:;
}
/* method abstract_text#StringByteView#is_empty for (self: StringByteView): Bool */
short int core__abstract_text___core__abstract_text__StringByteView___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Text */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:StringByteView>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var1); /* is_empty on <var1:Text>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#StringByteView#length for (self: StringByteView): Int */
long core__abstract_text___core__abstract_text__StringByteView___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : Text */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:StringByteView>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var1); /* bytelen on <var1:Text>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#StringByteView#iterator for (self: StringByteView): Iterator[Byte] */
val* core__abstract_text___core__abstract_text__StringByteView___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[Byte] */;
val* var1 /* : IndexedIterator[nullable Object] */;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(self, 0l); /* iterator_from on <self:StringByteView>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#StringByteView#reverse_iterator for (self: StringByteView): IndexedIterator[Byte] */
val* core__abstract_text___core__abstract_text__StringByteView___core__abstract_collection__SequenceRead__reverse_iterator(val* self) {
val* var /* : IndexedIterator[Byte] */;
val* var1 /* : Text */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var7 /* : IndexedIterator[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:StringByteView>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var1); /* bytelen on <var1:Text>*/
}
{
{ /* Inline kernel#Int#- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var2 - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator_from]))(self, var3); /* reverse_iterator_from on <self:StringByteView>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#StringByteView#init for (self: StringByteView) */
void core__abstract_text___core__abstract_text__StringByteView___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__abstract_text___core__abstract_text__StringByteView___core__kernel__Object__init]))(self); /* init on <self:StringByteView>*/
}
RET_LABEL:;
}
/* method abstract_text#String#to_s for (self: String): String */
val* core___core__String___Object__to_s(val* self) {
val* var /* : String */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#String#+ for (self: String, Text): String */
val* core___core__String____43d(val* self, val* p0) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "+", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1189);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#String#* for (self: String, Int): String */
val* core___core__String____42d(val* self, long p0) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "*", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1195);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#String#insert_at for (self: String, String, Int): String */
val* core___core__String___insert_at(val* self, val* p0, long p1) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "insert_at", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1202);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#String#substrings for (self: String): Iterator[FlatText] */
val* core___core__String___Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "substrings", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1207);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#String#reversed for (self: String): String */
val* core___core__String___reversed(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "reversed", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1209);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#String#to_upper for (self: String): String */
val* core___core__String___to_upper(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_upper", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1216);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#String#to_lower for (self: String): String */
val* core___core__String___to_lower(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_lower", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1221);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#String#to_snake_case for (self: String): String */
val* core___core__String___to_snake_case(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : Buffer */;
long var3 /* : Int */;
val* var4 /* : Buffer */;
val* var_new_str /* var new_str: Buffer */;
short int var_prev_is_lower /* var prev_is_lower: Bool */;
short int var_prev_is_upper /* var prev_is_upper: Bool */;
long var_i /* var i: Int */;
long var5 /* : Int */;
long var_ /* var : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : SequenceRead[Char] */;
val* var11 /* : nullable Object */;
uint32_t var12 /* : Char */;
uint32_t var_char /* var char: Char */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
short int var_33 /* var : Bool */;
val* var34 /* : SequenceRead[Char] */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
val* var42 /* : nullable Object */;
short int var43 /* : Bool */;
uint32_t var44 /* : Char */;
uint32_t var45 /* : Char */;
long var46 /* : Int */;
val* var47 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_lower]))(self); /* is_lower on <self:String>*/
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
var2 = NEW_core__Buffer(&type_core__Buffer);
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
var4 = ((val*(*)(val* self, long p0))(var2->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var2, var3); /* with_cap on <var2:Buffer>*/
}
var_new_str = var4;
var_prev_is_lower = 0;
var_prev_is_upper = 0;
var_i = 0l;
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
var_ = var5;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var9 = var_i < var_;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var11 = ((val*(*)(val* self, long p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var10, var_i); /* [] on <var10:SequenceRead[Char]>*/
}
var12 = (uint32_t)((long)(var11)>>2);
var_char = var12;
var13 = core___core__Char___is_lower(var_char);
if (var13){
{
((void(*)(val* self, uint32_t p0))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_new_str, var_char); /* add on <var_new_str:Buffer>*/
}
var_prev_is_lower = 1;
var_prev_is_upper = 0;
} else {
var14 = core___core__Char___is_upper(var_char);
if (var14){
if (var_prev_is_lower){
{
((void(*)(val* self, uint32_t p0))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_new_str, '_'); /* add on <var_new_str:Buffer>*/
}
} else {
var_17 = var_prev_is_upper;
if (var_prev_is_upper){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var24 = var_i + 1l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
var25 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel#Int#< (var18,var25) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var28 = 1; /* easy <var25:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var32 = var18 < var25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var16 = var26;
} else {
var16 = var_17;
}
var_33 = var16;
if (var16){
{
var34 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var37 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var41 = var_i + 1l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
var42 = ((val*(*)(val* self, long p0))((((long)var34&3)?class_info[((long)var34&3)]:var34->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var34, var35); /* [] on <var34:SequenceRead[Char]>*/
}
var44 = (uint32_t)((long)(var42)>>2);
var43 = core___core__Char___is_lower(var44);
var15 = var43;
} else {
var15 = var_33;
}
if (var15){
{
((void(*)(val* self, uint32_t p0))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_new_str, '_'); /* add on <var_new_str:Buffer>*/
}
} else {
}
}
var45 = core___core__Char___to_lower(var_char);
{
((void(*)(val* self, uint32_t p0))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_new_str, var45); /* add on <var_new_str:Buffer>*/
}
var_prev_is_lower = 0;
var_prev_is_upper = 1;
} else {
{
((void(*)(val* self, uint32_t p0))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_new_str, var_char); /* add on <var_new_str:Buffer>*/
}
var_prev_is_lower = 0;
var_prev_is_upper = 0;
}
}
var46 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var46;
}
BREAK_label: (void)0;
{
var47 = ((val*(*)(val* self))(var_new_str->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_new_str); /* to_s on <var_new_str:Buffer>*/
}
var = var47;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#String#to_camel_case for (self: String): String */
val* core___core__String___to_camel_case(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var_new_str /* var new_str: Buffer */;
short int var_is_first_char /* var is_first_char: Bool */;
short int var_follows_us /* var follows_us: Bool */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
uint32_t var11 /* : Char */;
uint32_t var_char /* var char: Char */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
uint32_t var15 /* : Char */;
long var16 /* : Int */;
val* var17 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_upper]))(self); /* is_upper on <self:String>*/
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
var2 = NEW_core__Buffer(&type_core__Buffer);
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Buffer__new]))(var2); /* new on <var2:Buffer>*/
}
var_new_str = var3;
var_is_first_char = 1;
var_follows_us = 0;
var_i = 0l;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var10 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (uint32_t)((long)(var10)>>2);
var_char = var11;
if (var_is_first_char){
{
((void(*)(val* self, uint32_t p0))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_new_str, var_char); /* add on <var_new_str:Buffer>*/
}
var_is_first_char = 0;
} else {
{
{ /* Inline kernel#Char#== (var_char,'_') on <var_char:Char> */
var14 = var_char == '_';
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var_follows_us = 1;
} else {
if (var_follows_us){
var15 = core___core__Char___to_upper(var_char);
{
((void(*)(val* self, uint32_t p0))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_new_str, var15); /* add on <var_new_str:Buffer>*/
}
var_follows_us = 0;
} else {
{
((void(*)(val* self, uint32_t p0))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_new_str, var_char); /* add on <var_new_str:Buffer>*/
}
}
}
}
var16 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var16;
}
BREAK_label: (void)0;
{
var17 = ((val*(*)(val* self))(var_new_str->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_new_str); /* to_s on <var_new_str:Buffer>*/
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#String#capitalized for (self: String): String */
val* core___core__String___capitalized(val* self) {
val* var /* : String */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Buffer */;
long var6 /* : Int */;
val* var7 /* : Buffer */;
val* var_buf /* var buf: Buffer */;
val* var8 /* : SequenceRead[Char] */;
val* var9 /* : nullable Object */;
uint32_t var10 /* : Char */;
uint32_t var11 /* : Char */;
uint32_t var_curr /* var curr: Char */;
uint32_t var_prev /* var prev: Char */;
long var_i /* var i: Int */;
long var12 /* : Int */;
long var_ /* var : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var16 /* : Bool */;
uint32_t var17 /* : Char */;
short int var18 /* : Bool */;
uint32_t var19 /* : Char */;
uint32_t var20 /* : Char */;
long var21 /* : Int */;
val* var22 /* : String */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = self;
goto RET_LABEL;
} else {
}
var5 = NEW_core__Buffer(&type_core__Buffer);
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
var7 = ((val*(*)(val* self, long p0))(var5->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var5, var6); /* with_cap on <var5:Buffer>*/
}
var_buf = var7;
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var9 = ((val*(*)(val* self, long p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var8, 0l); /* [] on <var8:SequenceRead[Char]>*/
}
var11 = (uint32_t)((long)(var9)>>2);
var10 = core___core__Char___to_upper(var11);
var_curr = var10;
var_prev = var_curr;
{
((void(*)(val* self, long p0, uint32_t p1))(var_buf->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(var_buf, 0l, var_curr); /* []= on <var_buf:Buffer>*/
}
var_i = 1l;
{
var12 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
var_ = var12;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var15 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var16 = var_i < var_;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
} else {
goto BREAK_label;
}
var_prev = var_curr;
{
var17 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:String>*/
}
var_curr = var17;
var18 = core___core__Char___is_letter(var_prev);
if (var18){
var19 = core___core__Char___to_lower(var_curr);
{
((void(*)(val* self, long p0, uint32_t p1))(var_buf->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(var_buf, var_i, var19); /* []= on <var_buf:Buffer>*/
}
} else {
var20 = core___core__Char___to_upper(var_curr);
{
((void(*)(val* self, long p0, uint32_t p1))(var_buf->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(var_buf, var_i, var20); /* []= on <var_buf:Buffer>*/
}
}
var21 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var21;
}
BREAK_label: (void)0;
{
var22 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_buf); /* to_s on <var_buf:Buffer>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Buffer#new for (self: Buffer): Buffer */
val* core___core__Buffer___new(val* self) {
val* var /* : Buffer */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "new", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1358);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Buffer#with_cap for (self: Buffer, Int): Buffer */
val* core___core__Buffer___with_cap(val* self, long p0) {
val* var /* : Buffer */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "with_cap", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1361);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Buffer#is_dirty for (self: Buffer): Bool */
short int core___core__Buffer___is_dirty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__abstract_text__Buffer___is_dirty].s; /* _is_dirty on <self:Buffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text#Buffer#is_dirty= for (self: Buffer, Bool) */
void core___core__Buffer___is_dirty_61d(val* self, short int p0) {
self->attrs[COLOR_core__abstract_text__Buffer___is_dirty].s = p0; /* _is_dirty on <self:Buffer> */
RET_LABEL:;
}
/* method abstract_text#Buffer#written for (self: Buffer): Bool */
short int core___core__Buffer___written(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__abstract_text__Buffer___written].s; /* _written on <self:Buffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text#Buffer#written= for (self: Buffer, Bool) */
void core___core__Buffer___written_61d(val* self, short int p0) {
self->attrs[COLOR_core__abstract_text__Buffer___written].s = p0; /* _written on <self:Buffer> */
RET_LABEL:;
}
/* method abstract_text#Buffer#[]= for (self: Buffer, Int, Char) */
void core___core__Buffer____91d_93d_61d(val* self, long p0, uint32_t p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "[]=", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1377);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text#Buffer#add for (self: Buffer, Char) */
void core___core__Buffer___add(val* self, uint32_t p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "add", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1382);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text#Buffer#clear for (self: Buffer) */
void core___core__Buffer___clear(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "clear", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1387);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text#Buffer#enlarge for (self: Buffer, Int) */
void core___core__Buffer___enlarge(val* self, long p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "enlarge", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1396);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text#Buffer#append for (self: Buffer, Text) */
void core___core__Buffer___append(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "append", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1399);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text#Buffer#times for (self: Buffer, Int) */
void core___core__Buffer___times(val* self, long p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "times", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1407);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text#Buffer#reverse for (self: Buffer) */
void core___core__Buffer___reverse(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "reverse", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1415);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text#Buffer#upper for (self: Buffer) */
void core___core__Buffer___upper(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "upper", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1423);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text#Buffer#lower for (self: Buffer) */
void core___core__Buffer___lower(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "lower", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1431);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text#Buffer#capitalize for (self: Buffer) */
void core___core__Buffer___capitalize(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
uint32_t var4 /* : Char */;
uint32_t var5 /* : Char */;
uint32_t var_c /* var c: Char */;
uint32_t var_prev /* var prev: Char */;
long var_i /* var i: Int */;
long var6 /* : Int */;
long var_ /* var : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
uint32_t var11 /* : Char */;
short int var12 /* : Bool */;
uint32_t var13 /* : Char */;
uint32_t var14 /* : Char */;
long var15 /* : Int */;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Buffer>*/
}
{
{ /* Inline kernel#Int#== (var,0l) on <var:Int> */
var3 = var == 0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
goto RET_LABEL;
} else {
}
{
var4 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, 0l); /* [] on <self:Buffer>*/
}
var5 = core___core__Char___to_upper(var4);
var_c = var5;
{
((void(*)(val* self, long p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, 0l, var_c); /* []= on <self:Buffer>*/
}
var_prev = var_c;
var_i = 1l;
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Buffer>*/
}
var_ = var6;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var9 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var10 = var_i < var_;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
} else {
goto BREAK_label;
}
var_prev = var_c;
{
var11 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Buffer>*/
}
var_c = var11;
var12 = core___core__Char___is_letter(var_prev);
if (var12){
var13 = core___core__Char___to_lower(var_c);
{
((void(*)(val* self, long p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, var_i, var13); /* []= on <self:Buffer>*/
}
} else {
var14 = core___core__Char___to_upper(var_c);
{
((void(*)(val* self, long p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, var_i, var14); /* []= on <self:Buffer>*/
}
}
var15 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var15;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_text#Buffer#hash for (self: Buffer): Int */
long core___core__Buffer___core__kernel__Object__hash(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
long var2 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__is_dirty]))(self); /* is_dirty on <self:Buffer>*/
}
if (var1){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__hash_cache_61d]))(self, ((val*)NULL)); /* hash_cache= on <self:Buffer>*/
}
} else {
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core___core__Buffer___core__kernel__Object__hash]))(self); /* hash on <self:Buffer>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Buffer#chars for (self: Buffer): Sequence[Char] */
val* core___core__Buffer___Text__chars(val* self) {
val* var /* : Sequence[Char] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "chars", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1477);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Object#to_s for (self: Object): String */
val* core__abstract_text___Object___to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_text__Object__inspect]))(self); /* inspect on <self:Object>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Object#native_class_name for (self: Object): NativeString */
char* core__abstract_text___Object___native_class_name(val* self) {
char* var /* : NativeString */;
const char* var_class_name;
char* var1 /* : NativeString */;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
var1 = (char*)var_class_name;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Object#class_name for (self: Object): String */
val* core__abstract_text___Object___class_name(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
const char* var_class_name;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
{ /* Inline abstract_text#Object#native_class_name (self) on <self:Object> */
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
var3 = (char*)var_class_name;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var4 = core__flat___NativeString___core__abstract_text__Object__to_s(var1);
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Object#inspect for (self: Object): String */
val* core__abstract_text___Object___inspect(val* self) {
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
val* var10 /* : String */;
val* var11 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "<";
var5 = core__flat___NativeString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ">";
var9 = core__flat___NativeString___to_s_full(var8, 1l, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_text__Object__inspect_head]))(self); /* inspect_head on <self:Object>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Object#inspect_head for (self: Object): String */
val* core__abstract_text___Object___inspect_head(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
val* var6 /* : String */;
long var7 /* : Int */;
val* var8 /* : String */;
val* var9 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ":#";
var5 = core__flat___NativeString___to_s_full(var4, 2l, 2l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_text__Object__class_name]))(self); /* class_name on <self:Object>*/
}
((struct instance_core__NativeArray*)var1)->values[0]=var6;
{
var7 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Object__object_id]))(self); /* object_id on <self:Object>*/
}
var8 = core__abstract_text___Int___to_hex(var7);
((struct instance_core__NativeArray*)var1)->values[2]=var8;
{
var9 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Bool#to_s for (self: Bool): String */
val* core__abstract_text___Bool___Object__to_s(short int self) {
val* var /* : String */;
static val* varonce;
static int varonce_guard;
val* var1 /* : String */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
static val* varonce6;
static int varonce6_guard;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
if (self){
if (likely(varonce_guard)) {
var1 = varonce;
} else {
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "true";
var5 = core__flat___NativeString___to_s_full(var4, 4l, 4l);
var3 = var5;
varonce2 = var3;
}
var1 = var3;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
} else {
if (likely(varonce6_guard)) {
var7 = varonce6;
} else {
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "false";
var11 = core__flat___NativeString___to_s_full(var10, 5l, 5l);
var9 = var11;
varonce8 = var9;
}
var7 = var9;
varonce6 = var7;
varonce6_guard = 1;
}
var = var7;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_text#Bool#to_s for (self: Object): String */
val* VIRTUAL_core__abstract_text___Bool___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
short int var2 /* : Bool */;
var2 = (short int)((long)(self)>>2);
var1 = core__abstract_text___Bool___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text#Byte#byte_to_s_len for (self: Byte): Int */
long core__abstract_text___Byte___byte_to_s_len(unsigned char self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__abstract_text___Byte_byte_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Byte#native_byte_to_s for (self: Byte, NativeString, Int) */
void core__abstract_text___Byte___native_byte_to_s(unsigned char self, char* p0, long p1) {
core__abstract_text___Byte_native_byte_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method abstract_text#Byte#to_s for (self: Byte): String */
val* core__abstract_text___Byte___Object__to_s(unsigned char self) {
val* var /* : String */;
long var1 /* : Int */;
long var_nslen /* var nslen: Int */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
char* var7 /* : NativeString */;
char* var9 /* : NativeString */;
char* var_ns /* var ns: NativeString */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
var1 = core__abstract_text___Byte___byte_to_s_len(self);
var_nslen = var1;
var2 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var_nslen + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline native#NativeString#new (var2,var3) on <var2:NativeString> */
var9 = (char*)nit_alloc(var3);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ns = var7;
{
{ /* Inline native#NativeString#[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:NativeString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var17 = var_nslen + 1l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
core__abstract_text___Byte___native_byte_to_s(self, var_ns, var11); /* Direct call abstract_text#Byte#native_byte_to_s on <self:Byte>*/
var19 = (val*)(var_nslen<<2|1);
var18 = core__flat___NativeString___to_s_unsafe(var_ns, var19);
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Byte#to_s for (self: Object): String */
val* VIRTUAL_core__abstract_text___Byte___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
unsigned char var2 /* : Byte */;
var2 = ((struct instance_core__Byte*)self)->value; /* autounbox from Object to Byte */;
var1 = core__abstract_text___Byte___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text#Int#strerror_ext for (self: Int): NativeString */
char* core__abstract_text___Int___strerror_ext(long self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = core__abstract_text___Int_strerror_ext___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Int#strerror for (self: Int): String */
val* core__abstract_text___Int___strerror(long self) {
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
var1 = core__abstract_text___Int___strerror_ext(self);
var2 = core__flat___NativeString___core__abstract_text__Object__to_s(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Int#fill_buffer for (self: Int, Buffer, Int, Bool) */
void core__abstract_text___Int___fill_buffer(long self, val* p0, long p1, short int p2) {
val* var_s /* var s: Buffer */;
long var_base /* var base: Int */;
short int var_signed /* var signed: Bool */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
long var_n /* var n: Int */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : SequenceRead[Char] */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
long var_pos /* var pos: Int */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var37 /* : SequenceRead[Char] */;
long var38 /* : Int */;
long var40 /* : Int */;
uint32_t var41 /* : Char */;
val* var42 /* : nullable Object */;
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
var_s = p0;
var_base = p1;
var_signed = p2;
{
{ /* Inline kernel#Int#< (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var3 = self < 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
{
{ /* Inline kernel#Int#unary - (self) on <self:Int> */
var6 = -self;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_n = var4;
{
var7 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
var8 = (val*)((long)('-')<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var7, 0l, var8); /* []= on <var7:SequenceRead[Char](Sequence[Char])>*/
}
} else {
{
{ /* Inline kernel#Int#== (self,0l) on <self:Int> */
var11 = self == 0l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var12 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
var13 = (val*)((long)('0')<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var12, 0l, var13); /* []= on <var12:SequenceRead[Char](Sequence[Char])>*/
}
goto RET_LABEL;
} else {
var_n = self;
}
}
var14 = core___core__Int___digit_count(self, var_base);
{
{ /* Inline kernel#Int#- (var14,1l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var21 = var14 - 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_pos = var15;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var25 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var29 = var_pos >= 0l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_ = var23;
if (var23){
{
{ /* Inline kernel#Int#> (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var36 = var_n > 0l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var22 = var30;
} else {
var22 = var_;
}
if (var22){
{
var37 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
{ /* Inline kernel#Int#% (var_n,var_base) on <var_n:Int> */
var40 = var_n % var_base;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var41 = core___core__Int___to_c(var38);
{
var42 = (val*)((long)(var41)<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var37&3)?class_info[((long)var37&3)]:var37->class)->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var37, var_pos, var42); /* []= on <var37:SequenceRead[Char](Sequence[Char])>*/
}
{
{ /* Inline kernel#Int#/ (var_n,var_base) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var45 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var49 = var_n / var_base;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_n = var43;
{
{ /* Inline kernel#Int#- (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var52 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var56 = var_pos - 1l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_pos = var50;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_text#Int#int_to_s_len for (self: Int): Int */
long core__abstract_text___Int___int_to_s_len(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__abstract_text___Int_int_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Int#native_int_to_s for (self: Int, NativeString, Int) */
void core__abstract_text___Int___native_int_to_s(long self, char* p0, long p1) {
core__abstract_text___Int_native_int_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method abstract_text#Int#to_base for (self: Int, Int, Bool): String */
val* core__abstract_text___Int___to_base(long self, long p0, short int p1) {
val* var /* : String */;
const char* var_class_name;
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_base", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1606);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Int#to_hex for (self: Int): String */
val* core__abstract_text___Int___to_hex(long self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = core__flat___Int___to_base(self, 16l, 0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Float#to_s for (self: Float): String */
val* core__abstract_text___Float___Object__to_s(double self) {
val* var /* : String */;
val* var1 /* : String */;
val* var_str /* var str: String */;
short int var2 /* : Bool */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var_len /* var len: Int */;
long var_i /* var i: Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
long var_14 /* var : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
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
long var_j /* var j: Int */;
val* var36 /* : SequenceRead[Char] */;
val* var37 /* : nullable Object */;
uint32_t var38 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
val* var53 /* : Text */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
val* var61 /* : Text */;
long var62 /* : Int */;
var1 = core__abstract_text___Float___to_precision(self, 3l);
var_str = var1;
var3 = core__math___Float___is_inf(self);
{
{ /* Inline kernel#Int#!= (var3,0l) on <var3:Int> */
var6 = var3 == 0l;
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
var2 = var_;
} else {
var8 = core__math___Float___is_nan(self);
var2 = var8;
}
if (var2){
var = var_str;
goto RET_LABEL;
} else {
}
{
var9 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:String>*/
}
var_len = var9;
var_i = 0l;
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var_len - 1l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_14 = var10;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_14) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_14:Int> isa OTHER */
/* <var_14:Int> isa OTHER */
var17 = 1; /* easy <var_14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var21 = var_i <= var_14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_len - 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var22,var_i) on <var22:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var31 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var22 - var_i;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_j = var29;
{
var36 = ((val*(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var37 = ((val*(*)(val* self, long p0))((((long)var36&3)?class_info[((long)var36&3)]:var36->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var36, var_j); /* [] on <var36:SequenceRead[Char]>*/
}
var38 = (uint32_t)((long)(var37)>>2);
var_c = var38;
{
{ /* Inline kernel#Char#== (var_c,'0') on <var_c:Char> */
var41 = var_c == '0';
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
goto BREAK_label42;
} else {
{
{ /* Inline kernel#Char#== (var_c,'.') on <var_c:Char> */
var45 = var_c == '.';
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
{ /* Inline kernel#Int#+ (var_j,2l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var48 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var52 = var_j + 2l;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
var53 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_core__abstract_text__Text__substring]))(var_str, 0l, var46); /* substring on <var_str:String>*/
}
var = var53;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var60 = var_j + 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
var61 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_core__abstract_text__Text__substring]))(var_str, 0l, var54); /* substring on <var_str:String>*/
}
var = var61;
goto RET_LABEL;
}
}
BREAK_label42: (void)0;
var62 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var62;
}
BREAK_label: (void)0;
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Float#to_s for (self: Object): String */
val* VIRTUAL_core__abstract_text___Float___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
double var2 /* : Float */;
var2 = ((struct instance_core__Float*)self)->value; /* autounbox from Object to Float */;
var1 = core__abstract_text___Float___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
