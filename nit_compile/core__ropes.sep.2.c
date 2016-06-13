#include "core__ropes.sep.0.h"
/* method ropes#RopeBufferByteIterator#from for (self: RopeBufferByteIterator, RopeBuffer, Int) */
void core___core__RopeBufferByteIterator___from(val* self, val* p0, long p1) {
val* var_t /* var t: RopeBuffer */;
long var_pos /* var pos: Int */;
char* var /* : NativeString */;
long var1 /* : Int */;
val* var2 /* : String */;
val* var3 /* : SequenceRead[Byte] */;
val* var4 /* : IndexedIterator[nullable Object] */;
val* var5 /* : String */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeBufferByteIterator>*/
}
var_t = p0;
var_pos = p1;
{
var = ((char*(*)(val* self))(var_t->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(var_t); /* ns on <var_t:RopeBuffer>*/
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeBufferByteIterator__ns_61d]))(self, var); /* ns= on <self:RopeBufferByteIterator>*/
}
var1 = var_t->attrs[COLOR_core__ropes__RopeBuffer___bytelen].l; /* _bytelen on <var_t:RopeBuffer> */
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBufferByteIterator__maxpos_61d]))(self, var1); /* maxpos= on <self:RopeBufferByteIterator>*/
}
{
var2 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var_t); /* str on <var_t:RopeBuffer>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__bytes]))(var2); /* bytes on <var2:String>*/
}
{
var4 = ((val*(*)(val* self, long p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(var3, var_pos); /* iterator_from on <var3:SequenceRead[Byte]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeBufferByteIterator__sit_61d]))(self, var4); /* sit= on <self:RopeBufferByteIterator>*/
}
{
var5 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var_t); /* str on <var_t:RopeBuffer>*/
}
{
var6 = ((long(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__Text__length]))(var5); /* length on <var5:String>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var6) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var10 = var_pos - var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBufferByteIterator__pns_61d]))(self, var7); /* pns= on <self:RopeBufferByteIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBufferByteIterator__index_61d]))(self, var_pos); /* index= on <self:RopeBufferByteIterator>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferByteIterator#is_ok for (self: RopeBufferByteIterator): Bool */
short int core___core__RopeBufferByteIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(self); /* index on <self:RopeBufferByteIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferByteIterator__maxpos]))(self); /* maxpos on <self:RopeBufferByteIterator>*/
}
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
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#item for (self: RopeBufferByteIterator): Byte */
unsigned char core___core__RopeBufferByteIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
val* var1 /* : IndexedIterator[Byte] */;
short int var2 /* : Bool */;
val* var3 /* : IndexedIterator[Byte] */;
val* var4 /* : nullable Object */;
unsigned char var5 /* : Byte */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
unsigned char var8 /* : Byte */;
unsigned char var10 /* : Byte */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferByteIterator__sit]))(self); /* sit on <self:RopeBufferByteIterator>*/
}
{
var2 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var1); /* is_ok on <var1:IndexedIterator[Byte]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferByteIterator__sit]))(self); /* sit on <self:RopeBufferByteIterator>*/
}
{
var4 = ((val*(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var3); /* item on <var3:IndexedIterator[Byte]>*/
}
var5 = ((struct instance_core__Byte*)var4)->value; /* autounbox from nullable Object to Byte */;
var = var5;
goto RET_LABEL;
} else {
}
{
var6 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferByteIterator__ns]))(self); /* ns on <self:RopeBufferByteIterator>*/
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferByteIterator__pns]))(self); /* pns on <self:RopeBufferByteIterator>*/
}
{
{ /* Inline native#NativeString#[] (var6,var7) on <var6:NativeString> */
var10 = (unsigned char)((int)var6[var7]);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core___core__RopeBufferByteIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core___core__RopeBufferByteIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteIterator#next for (self: RopeBufferByteIterator) */
void core___core__RopeBufferByteIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeBufferByteIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var5 /* : IndexedIterator[Byte] */;
short int var6 /* : Bool */;
val* var7 /* : IndexedIterator[Byte] */;
val* var_8 /* var : RopeBufferByteIterator */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_); /* index on <var_:RopeBufferByteIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__RopeBufferByteIterator__index_61d]))(var_, var1); /* index= on <var_:RopeBufferByteIterator>*/
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferByteIterator__sit]))(self); /* sit on <self:RopeBufferByteIterator>*/
}
{
var6 = ((short int(*)(val* self))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var5); /* is_ok on <var5:IndexedIterator[Byte]>*/
}
if (var6){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferByteIterator__sit]))(self); /* sit on <self:RopeBufferByteIterator>*/
}
{
((void(*)(val* self))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var7); /* next on <var7:IndexedIterator[Byte]>*/
}
} else {
var_8 = self;
{
var9 = ((long(*)(val* self))(var_8->class->vft[COLOR_core__ropes__RopeBufferByteIterator__pns]))(var_8); /* pns on <var_8:RopeBufferByteIterator>*/
}
{
{ /* Inline kernel#Int#+ (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var16 = var9 + 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_8->class->vft[COLOR_core__ropes__RopeBufferByteIterator__pns_61d]))(var_8, var10); /* pns= on <var_8:RopeBufferByteIterator>*/
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferByteReverseIterator#sit for (self: RopeBufferByteReverseIterator): IndexedIterator[Byte] */
val* core___core__RopeBufferByteReverseIterator___sit(val* self) {
val* var /* : IndexedIterator[Byte] */;
val* var1 /* : IndexedIterator[Byte] */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___sit].val; /* _sit on <self:RopeBufferByteReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sit");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 1124);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteReverseIterator#sit= for (self: RopeBufferByteReverseIterator, IndexedIterator[Byte]) */
void core___core__RopeBufferByteReverseIterator___sit_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___sit].val = p0; /* _sit on <self:RopeBufferByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteReverseIterator#ns for (self: RopeBufferByteReverseIterator): NativeString */
char* core___core__RopeBufferByteReverseIterator___ns(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___ns].str; /* _ns on <self:RopeBufferByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteReverseIterator#ns= for (self: RopeBufferByteReverseIterator, NativeString) */
void core___core__RopeBufferByteReverseIterator___ns_61d(val* self, char* p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___ns].str = p0; /* _ns on <self:RopeBufferByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteReverseIterator#pns for (self: RopeBufferByteReverseIterator): Int */
long core___core__RopeBufferByteReverseIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___pns].l; /* _pns on <self:RopeBufferByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteReverseIterator#pns= for (self: RopeBufferByteReverseIterator, Int) */
void core___core__RopeBufferByteReverseIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___pns].l = p0; /* _pns on <self:RopeBufferByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteReverseIterator#index for (self: RopeBufferByteReverseIterator): Int */
long core___core__RopeBufferByteReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___index].l; /* _index on <self:RopeBufferByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteReverseIterator#index= for (self: RopeBufferByteReverseIterator, Int) */
void core___core__RopeBufferByteReverseIterator___index_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBufferByteReverseIterator___index].l = p0; /* _index on <self:RopeBufferByteReverseIterator> */
RET_LABEL:;
}
/* method ropes#RopeBufferByteReverseIterator#from for (self: RopeBufferByteReverseIterator, RopeBuffer, Int) */
void core___core__RopeBufferByteReverseIterator___from(val* self, val* p0, long p1) {
val* var_tgt /* var tgt: RopeBuffer */;
long var_pos /* var pos: Int */;
val* var /* : String */;
val* var1 /* : SequenceRead[Byte] */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
val* var15 /* : IndexedIterator[nullable Object] */;
val* var16 /* : String */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
char* var33 /* : NativeString */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeBufferByteReverseIterator>*/
}
var_tgt = p0;
var_pos = p1;
{
var = ((val*(*)(val* self))(var_tgt->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var_tgt); /* str on <var_tgt:RopeBuffer>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__Text__bytes]))(var); /* bytes on <var:String>*/
}
{
var2 = ((long(*)(val* self))(var_tgt->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(var_tgt); /* rpos on <var_tgt:RopeBuffer>*/
}
{
var3 = ((long(*)(val* self))(var_tgt->class->vft[COLOR_core__ropes__RopeBuffer__dumped]))(var_tgt); /* dumped on <var_tgt:RopeBuffer>*/
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
{ /* Inline kernel#Int#- (var_pos,var4) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var10 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_pos - var4;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var15 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator_from]))(var1, var8); /* reverse_iterator_from on <var1:SequenceRead[Byte]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__sit_61d]))(self, var15); /* sit= on <self:RopeBufferByteReverseIterator>*/
}
{
var16 = ((val*(*)(val* self))(var_tgt->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var_tgt); /* str on <var_tgt:RopeBuffer>*/
}
{
var17 = ((long(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var16); /* bytelen on <var16:String>*/
}
{
{ /* Inline kernel#Int#- (var_pos,var17) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var24 = var_pos - var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
var25 = ((long(*)(val* self))(var_tgt->class->vft[COLOR_core__ropes__RopeBuffer__rpos]))(var_tgt); /* rpos on <var_tgt:RopeBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var18,var25) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var28 = 1; /* easy <var25:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var32 = var18 + var25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__pns_61d]))(self, var26); /* pns= on <self:RopeBufferByteReverseIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__index_61d]))(self, var_pos); /* index= on <self:RopeBufferByteReverseIterator>*/
}
{
var33 = ((char*(*)(val* self))(var_tgt->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(var_tgt); /* ns on <var_tgt:RopeBuffer>*/
}
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__ns_61d]))(self, var33); /* ns= on <self:RopeBufferByteReverseIterator>*/
}
RET_LABEL:;
}
/* method ropes#RopeBufferByteReverseIterator#is_ok for (self: RopeBufferByteReverseIterator): Bool */
short int core___core__RopeBufferByteReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(self); /* index on <self:RopeBufferByteReverseIterator>*/
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
/* method ropes#RopeBufferByteReverseIterator#item for (self: RopeBufferByteReverseIterator): Byte */
unsigned char core___core__RopeBufferByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
unsigned char var8 /* : Byte */;
unsigned char var10 /* : Byte */;
val* var11 /* : IndexedIterator[Byte] */;
val* var12 /* : nullable Object */;
unsigned char var13 /* : Byte */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__pns]))(self); /* pns on <self:RopeBufferByteReverseIterator>*/
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
if (var2){
{
var6 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__ns]))(self); /* ns on <self:RopeBufferByteReverseIterator>*/
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__pns]))(self); /* pns on <self:RopeBufferByteReverseIterator>*/
}
{
{ /* Inline native#NativeString#[] (var6,var7) on <var6:NativeString> */
var10 = (unsigned char)((int)var6[var7]);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
} else {
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__sit]))(self); /* sit on <self:RopeBufferByteReverseIterator>*/
}
{
var12 = ((val*(*)(val* self))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var11); /* item on <var11:IndexedIterator[Byte]>*/
}
var13 = ((struct instance_core__Byte*)var12)->value; /* autounbox from nullable Object to Byte */;
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core___core__RopeBufferByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core___core__RopeBufferByteReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferByteReverseIterator#next for (self: RopeBufferByteReverseIterator) */
void core___core__RopeBufferByteReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeBufferByteReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
val* var_13 /* var : RopeBufferByteReverseIterator */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
val* var22 /* : IndexedIterator[Byte] */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_); /* index on <var_:RopeBufferByteReverseIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__index_61d]))(var_, var1); /* index= on <var_:RopeBufferByteReverseIterator>*/
}
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__pns]))(self); /* pns on <self:RopeBufferByteReverseIterator>*/
}
{
{ /* Inline kernel#Int#>= (var5,0l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var12 = var5 >= 0l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var_13 = self;
{
var14 = ((long(*)(val* self))(var_13->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__pns]))(var_13); /* pns on <var_13:RopeBufferByteReverseIterator>*/
}
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
{
((void(*)(val* self, long p0))(var_13->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__pns_61d]))(var_13, var15); /* pns= on <var_13:RopeBufferByteReverseIterator>*/
}
} else {
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__sit]))(self); /* sit on <self:RopeBufferByteReverseIterator>*/
}
{
((void(*)(val* self))((((long)var22&3)?class_info[((long)var22&3)]:var22->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var22); /* next on <var22:IndexedIterator[Byte]>*/
}
}
RET_LABEL:;
}
/* method ropes#RopeBufferBytes#[] for (self: RopeBufferBytes, Int): Byte */
unsigned char core___core__RopeBufferBytes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
unsigned char var /* : Byte */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : Text */;
val* var9 /* : String */;
val* var10 /* : SequenceRead[Byte] */;
val* var11 /* : nullable Object */;
unsigned char var12 /* : Byte */;
val* var13 /* : Text */;
char* var14 /* : NativeString */;
val* var15 /* : Text */;
val* var16 /* : String */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
unsigned char var25 /* : Byte */;
unsigned char var27 /* : Byte */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:RopeBufferBytes>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var1); /* str on <var1:Text(RopeBuffer)>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var2); /* bytelen on <var2:String>*/
}
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
if (var4){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:RopeBufferBytes>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var8); /* str on <var8:Text(RopeBuffer)>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__Text__bytes]))(var9); /* bytes on <var9:String>*/
}
{
var11 = ((val*(*)(val* self, long p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var10, var_i); /* [] on <var10:SequenceRead[Byte]>*/
}
var12 = ((struct instance_core__Byte*)var11)->value; /* autounbox from nullable Object to Byte */;
var = var12;
goto RET_LABEL;
} else {
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:RopeBufferBytes>*/
}
{
var14 = ((char*(*)(val* self))(var13->class->vft[COLOR_core__ropes__RopeBuffer__ns]))(var13); /* ns on <var13:Text(RopeBuffer)>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:RopeBufferBytes>*/
}
{
var16 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__ropes__RopeBuffer__str]))(var15); /* str on <var15:Text(RopeBuffer)>*/
}
{
var17 = ((long(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var16); /* bytelen on <var16:String>*/
}
{
{ /* Inline kernel#Int#- (var_i,var17) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var24 = var_i - var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline native#NativeString#[] (var14,var18) on <var14:NativeString> */
var27 = (unsigned char)((int)var14[var18]);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var = var25;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferBytes#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core___core__RopeBufferBytes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core___core__RopeBufferBytes___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferBytes#iterator_from for (self: RopeBufferBytes, Int): IndexedIterator[Byte] */
val* core___core__RopeBufferBytes___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_i /* var i: Int */;
val* var1 /* : RopeBufferByteIterator */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_core__RopeBufferByteIterator(&type_core__RopeBufferByteIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:RopeBufferBytes>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeBufferByteIterator__from]))(var1, var2, var_i); /* from on <var1:RopeBufferByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#RopeBufferBytes#reverse_iterator_from for (self: RopeBufferBytes, Int): IndexedIterator[Byte] */
val* core___core__RopeBufferBytes___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_i /* var i: Int */;
val* var1 /* : RopeBufferByteReverseIterator */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_core__RopeBufferByteReverseIterator(&type_core__RopeBufferByteReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:RopeBufferBytes>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeBufferByteReverseIterator__from]))(var1, var2, var_i); /* from on <var1:RopeBufferByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes#Sys#maxlen for (self: Sys): Int */
long core__ropes___Sys___maxlen(val* self) {
long var /* : Int */;
var = 64l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
