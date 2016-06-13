#include "core__fixed_ints.sep.0.h"
/* method fixed_ints#Text#is_num for (self: Text): Bool */
short int core__fixed_ints___Text___is_num(val* self) {
short int var /* : Bool */;
val* var1 /* : Text */;
val* var_prefix /* var prefix: Text */;
val* var2 /* : Text */;
val* var3 /* : Text */;
val* var4 /* : Pattern */;
val* var5 /* : String */;
val* var_s /* var s: String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
short int var9 /* : Bool */;
uint32_t var10 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__fixed_ints__Text__get_numhead]))(self); /* get_numhead on <self:Text>*/
}
var_prefix = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__fixed_ints__Text__strip_numhead]))(self); /* strip_numhead on <self:Text>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__fixed_ints__Text__strip_numext]))(var2); /* strip_numext on <var2:Text>*/
}
{
var4 = (val*)((long)('_')<<2|2);
var5 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__string_search__Text__remove_all]))(var3, var4); /* remove_all on <var3:Text>*/
}
var_s = var5;
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "";
var8 = core__flat___NativeString___to_s_full(var7, 0l, 0l);
var6 = var8;
varonce = var6;
}
{
var9 = ((short int(*)(val* self, val* p0))(var_prefix->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_prefix, var6); /* != on <var_prefix:Text>*/
}
if (var9){
{
var10 = ((uint32_t(*)(val* self, long p0))(var_prefix->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_prefix, 1l); /* [] on <var_prefix:Text>*/
}
var_c = var10;
{
{ /* Inline kernel#Char#== (var_c,'x') on <var_c:Char> */
var14 = var_c == 'x';
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_ = var12;
if (var12){
var11 = var_;
} else {
{
{ /* Inline kernel#Char#== (var_c,'X') on <var_c:Char> */
var17 = var_c == 'X';
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var11 = var15;
}
if (var11){
{
var18 = ((short int(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__is_hex]))(var_s); /* is_hex on <var_s:String>*/
}
var = var18;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Char#== (var_c,'o') on <var_c:Char> */
var22 = var_c == 'o';
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_23 = var20;
if (var20){
var19 = var_23;
} else {
{
{ /* Inline kernel#Char#== (var_c,'O') on <var_c:Char> */
var26 = var_c == 'O';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var19 = var24;
}
if (var19){
{
var27 = ((short int(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__is_oct]))(var_s); /* is_oct on <var_s:String>*/
}
var = var27;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Char#== (var_c,'b') on <var_c:Char> */
var31 = var_c == 'b';
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_32 = var29;
if (var29){
var28 = var_32;
} else {
{
{ /* Inline kernel#Char#== (var_c,'B') on <var_c:Char> */
var35 = var_c == 'B';
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var28 = var33;
}
if (var28){
{
var36 = ((short int(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__is_bin]))(var_s); /* is_bin on <var_s:String>*/
}
var = var36;
goto RET_LABEL;
} else {
}
} else {
}
{
var37 = ((short int(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__is_dec]))(var_s); /* is_dec on <var_s:String>*/
}
var = var37;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Text#to_num for (self: Text): nullable Numeric */
val* core__fixed_ints___Text___to_num(val* self) {
val* var /* : nullable Numeric */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Pattern */;
val* var4 /* : String */;
val* var_s /* var s: String */;
val* var5 /* : Text */;
val* var_ext /* var ext: Text */;
val* var6 /* : Text */;
val* var_trunk /* var trunk: Text */;
val* var7 /* : Text */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var_trval /* var trval: Int */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
short int var17 /* : Bool */;
unsigned char var18 /* : Byte */;
unsigned char var20 /* : Byte */;
val* var21 /* : nullable Numeric */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : String */;
short int var26 /* : Bool */;
int8_t var27 /* : Int8 */;
int8_t var29 /* : Int8 */;
val* var30 /* : nullable Numeric */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
short int var35 /* : Bool */;
int16_t var36 /* : Int16 */;
int16_t var38 /* : Int16 */;
val* var39 /* : nullable Numeric */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : String */;
short int var44 /* : Bool */;
uint16_t var45 /* : UInt16 */;
uint16_t var47 /* : UInt16 */;
val* var48 /* : nullable Numeric */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : String */;
short int var53 /* : Bool */;
int32_t var54 /* : Int32 */;
int32_t var56 /* : Int32 */;
val* var57 /* : nullable Numeric */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
short int var62 /* : Bool */;
uint32_t var63 /* : UInt32 */;
uint32_t var65 /* : UInt32 */;
val* var66 /* : nullable Numeric */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : String */;
short int var71 /* : Bool */;
val* var72 /* : nullable Numeric */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__fixed_ints__Text__is_num]))(self); /* is_num on <self:Text>*/
}
var2 = !var1;
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var3 = (val*)((long)('_')<<2|2);
var4 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__string_search__Text__remove_all]))(self, var3); /* remove_all on <self:Text>*/
}
var_s = var4;
{
var5 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__fixed_ints__Text__get_numext]))(var_s); /* get_numext on <var_s:String>*/
}
var_ext = var5;
{
var6 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__fixed_ints__Text__strip_numext]))(var_s); /* strip_numext on <var_s:String>*/
}
var_trunk = var6;
{
var7 = ((val*(*)(val* self))(var_trunk->class->vft[COLOR_core__fixed_ints__Text__strip_numhead]))(var_trunk); /* strip_numhead on <var_trunk:Text>*/
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "";
var10 = core__flat___NativeString___to_s_full(var9, 0l, 0l);
var8 = var10;
varonce = var8;
}
{
var11 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Object___61d_61d]))(var7, var8); /* == on <var7:Text>*/
}
if (var11){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var12 = ((long(*)(val* self))(var_trunk->class->vft[COLOR_core__abstract_text__Text__to_i]))(var_trunk); /* to_i on <var_trunk:Text>*/
}
var_trval = var12;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "u8";
var16 = core__flat___NativeString___to_s_full(var15, 2l, 2l);
var14 = var16;
varonce13 = var14;
}
{
var17 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var14); /* == on <var_ext:Text>*/
}
if (var17){
{
{ /* Inline kernel#Int#to_b (var_trval) on <var_trval:Int> */
var20 = (unsigned char)var_trval;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var21 = BOX_core__Byte(var18); /* autobox from Byte to nullable Numeric */
var = var21;
goto RET_LABEL;
} else {
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "i8";
var25 = core__flat___NativeString___to_s_full(var24, 2l, 2l);
var23 = var25;
varonce22 = var23;
}
{
var26 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var23); /* == on <var_ext:Text>*/
}
if (var26){
{
{ /* Inline fixed_ints#Int#to_i8 (var_trval) on <var_trval:Int> */
var29 = (int8_t)var_trval;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var30 = BOX_core__Int8(var27); /* autobox from Int8 to nullable Numeric */
var = var30;
goto RET_LABEL;
} else {
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "i16";
var34 = core__flat___NativeString___to_s_full(var33, 3l, 3l);
var32 = var34;
varonce31 = var32;
}
{
var35 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var32); /* == on <var_ext:Text>*/
}
if (var35){
{
{ /* Inline fixed_ints#Int#to_i16 (var_trval) on <var_trval:Int> */
var38 = (int16_t)var_trval;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var39 = BOX_core__Int16(var36); /* autobox from Int16 to nullable Numeric */
var = var39;
goto RET_LABEL;
} else {
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "u16";
var43 = core__flat___NativeString___to_s_full(var42, 3l, 3l);
var41 = var43;
varonce40 = var41;
}
{
var44 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var41); /* == on <var_ext:Text>*/
}
if (var44){
{
{ /* Inline fixed_ints#Int#to_u16 (var_trval) on <var_trval:Int> */
var47 = (uint16_t)var_trval;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var48 = BOX_core__UInt16(var45); /* autobox from UInt16 to nullable Numeric */
var = var48;
goto RET_LABEL;
} else {
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "i32";
var52 = core__flat___NativeString___to_s_full(var51, 3l, 3l);
var50 = var52;
varonce49 = var50;
}
{
var53 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var50); /* == on <var_ext:Text>*/
}
if (var53){
{
{ /* Inline fixed_ints#Int#to_i32 (var_trval) on <var_trval:Int> */
var56 = (int32_t)var_trval;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var57 = BOX_core__Int32(var54); /* autobox from Int32 to nullable Numeric */
var = var57;
goto RET_LABEL;
} else {
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "u32";
var61 = core__flat___NativeString___to_s_full(var60, 3l, 3l);
var59 = var61;
varonce58 = var59;
}
{
var62 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var59); /* == on <var_ext:Text>*/
}
if (var62){
{
{ /* Inline fixed_ints#Int#to_u32 (var_trval) on <var_trval:Int> */
var65 = (uint32_t)var_trval;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var66 = BOX_core__UInt32(var63); /* autobox from UInt32 to nullable Numeric */
var = var66;
goto RET_LABEL;
} else {
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "";
var70 = core__flat___NativeString___to_s_full(var69, 0l, 0l);
var68 = var70;
varonce67 = var68;
}
{
var71 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var68); /* == on <var_ext:Text>*/
}
if (var71){
var72 = (val*)(var_trval<<2|1);
var = var72;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
}
}
}
}
}
}
RET_LABEL:;
return var;
}
