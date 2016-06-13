#include "core__abstract_text.sep.0.h"
/* method abstract_text#Float#to_precision for (self: Float, Int): String */
val* core__abstract_text___Float___to_precision(double self, long p0) {
val* var /* : String */;
long var_decimals /* var decimals: Int */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
long var5 /* : Int */;
long var_isinf /* var isinf: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
long var13 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
long var26 /* : Int */;
long var28 /* : Int */;
val* var29 /* : String */;
double var_f /* var f: Float */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var33 /* : Bool */;
double var34 /* : Float */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
double var40 /* : Float */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
double var49 /* : Float */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
double var55 /* : Float */;
double var56 /* : Float */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
double var62 /* : Float */;
long var63 /* : Int */;
long var65 /* : Int */;
long var_i66 /* var i: Int */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : String */;
val* var78 /* : String */;
val* var79 /* : String */;
long var80 /* : Int */;
val* var81 /* : String */;
val* var_s /* var s: String */;
long var82 /* : Int */;
long var_sl /* var sl: Int */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
short int var89 /* : Bool */;
long var90 /* : Int */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
long var96 /* : Int */;
val* var97 /* : Text */;
val* var_p1 /* var p1: nullable Object */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
val* var105 /* : Text */;
val* var_p2 /* var p2: nullable Object */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
val* var113 /* : String */;
long var114 /* : Int */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
const char* var_class_name119;
long var120 /* : Int */;
val* var121 /* : String */;
val* var122 /* : String */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
const char* var_class_name128;
short int var129 /* : Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
val* var133 /* : String */;
val* var134 /* : String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
val* var138 /* : String */;
val* var139 /* : String */;
val* var140 /* : String */;
var_decimals = p0;
var1 = core__math___Float___is_nan(self);
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "nan";
var4 = core__flat___NativeString___to_s_full(var3, 3l, 3l);
var2 = var4;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
var5 = core__math___Float___is_inf(self);
var_isinf = var5;
{
{ /* Inline kernel#Int#== (var_isinf,1l) on <var_isinf:Int> */
var8 = var_isinf == 1l;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "inf";
var12 = core__flat___NativeString___to_s_full(var11, 3l, 3l);
var10 = var12;
varonce9 = var10;
}
var = var10;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var15 = -1l;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_isinf,var13) on <var_isinf:Int> */
var18 = var_isinf == var13;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "-inf";
var22 = core__flat___NativeString___to_s_full(var21, 4l, 4l);
var20 = var22;
varonce19 = var20;
}
var = var20;
goto RET_LABEL;
} else {
}
}
{
{ /* Inline kernel#Int#== (var_decimals,0l) on <var_decimals:Int> */
var25 = var_decimals == 0l;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
{ /* Inline kernel#Float#to_i (self) on <self:Float> */
var28 = (long)self;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var29 = core__flat___Int___core__abstract_text__Object__to_s(var26);
var = var29;
goto RET_LABEL;
} else {
}
var_f = self;
var_i = 0l;
var_ = var_decimals;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var32 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var33 = var_i < var_;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel#Float#* (var_f,10.0) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <10.0:Float> isa OTHER */
/* <10.0:Float> isa OTHER */
var36 = 1; /* easy <10.0:Float> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var40 = var_f * 10.0;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_f = var34;
var41 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var41;
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Float#> (self,0.0) on <self:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var44 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 532);
fatal_exit(1);
}
var48 = self > 0.0;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
{
{ /* Inline kernel#Float#+ (var_f,0.5) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <0.5:Float> isa OTHER */
/* <0.5:Float> isa OTHER */
var51 = 1; /* easy <0.5:Float> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var55 = var_f + 0.5;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_f = var49;
} else {
{
{ /* Inline kernel#Float#- (var_f,0.5) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <0.5:Float> isa OTHER */
/* <0.5:Float> isa OTHER */
var58 = 1; /* easy <0.5:Float> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var62 = var_f - 0.5;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_f = var56;
}
{
{ /* Inline kernel#Float#to_i (var_f) on <var_f:Float> */
var65 = (long)var_f;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_i66 = var63;
{
{ /* Inline kernel#Int#== (var_i66,0l) on <var_i66:Int> */
var69 = var_i66 == 0l;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
if (var67){
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "0.";
var73 = core__flat___NativeString___to_s_full(var72, 2l, 2l);
var71 = var73;
varonce70 = var71;
}
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "0";
var77 = core__flat___NativeString___to_s_full(var76, 1l, 1l);
var75 = var77;
varonce74 = var75;
}
{
var78 = ((val*(*)(val* self, long p0))(var75->class->vft[COLOR_core__abstract_text__String___42d]))(var75, var_decimals); /* * on <var75:String>*/
}
{
var79 = ((val*(*)(val* self, val* p0))(var71->class->vft[COLOR_core__abstract_text__String___43d]))(var71, var78); /* + on <var71:String>*/
}
var = var79;
goto RET_LABEL;
} else {
}
var80 = core___core__Int___abs(var_i66);
var81 = core__flat___Int___core__abstract_text__Object__to_s(var80);
var_s = var81;
{
var82 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:String>*/
}
var_sl = var82;
{
{ /* Inline kernel#Int#> (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var85 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var89 = var_sl > var_decimals;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
if (var83){
{
{ /* Inline kernel#Int#- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var92 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var96 = var_sl - var_decimals;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
{
var97 = ((val*(*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_core__abstract_text__Text__substring]))(var_s, 0l, var90); /* substring on <var_s:String>*/
}
var_p1 = var97;
{
{ /* Inline kernel#Int#- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var100 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var104 = var_sl - var_decimals;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
{
var105 = ((val*(*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_core__abstract_text__Text__substring]))(var_s, var98, var_decimals); /* substring on <var_s:String>*/
}
var_p2 = var105;
} else {
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "0";
var109 = core__flat___NativeString___to_s_full(var108, 1l, 1l);
var107 = var109;
varonce106 = var107;
}
var_p1 = var107;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "0";
var113 = core__flat___NativeString___to_s_full(var112, 1l, 1l);
var111 = var113;
varonce110 = var111;
}
{
{ /* Inline kernel#Int#- (var_decimals,var_sl) on <var_decimals:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var116 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var116)) {
var_class_name119 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name119);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var120 = var_decimals - var_sl;
var114 = var120;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
{
var121 = ((val*(*)(val* self, long p0))(var111->class->vft[COLOR_core__abstract_text__String___42d]))(var111, var114); /* * on <var111:String>*/
}
{
var122 = ((val*(*)(val* self, val* p0))(var121->class->vft[COLOR_core__abstract_text__String___43d]))(var121, var_s); /* + on <var121:String>*/
}
var_p2 = var122;
}
{
{ /* Inline kernel#Int#< (var_i66,0l) on <var_i66:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var125 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var125)) {
var_class_name128 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name128);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var129 = var_i66 < 0l;
var123 = var129;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
if (var123){
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "-";
var133 = core__flat___NativeString___to_s_full(var132, 1l, 1l);
var131 = var133;
varonce130 = var131;
}
{
var134 = ((val*(*)(val* self, val* p0))(var131->class->vft[COLOR_core__abstract_text__String___43d]))(var131, var_p1); /* + on <var131:String>*/
}
var_p1 = var134;
} else {
}
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = ".";
var138 = core__flat___NativeString___to_s_full(var137, 1l, 1l);
var136 = var138;
varonce135 = var136;
}
{
var139 = ((val*(*)(val* self, val* p0))(var_p1->class->vft[COLOR_core__abstract_text__String___43d]))(var_p1, var136); /* + on <var_p1:nullable Object(String)>*/
}
{
var140 = ((val*(*)(val* self, val* p0))(var139->class->vft[COLOR_core__abstract_text__String___43d]))(var139, var_p2); /* + on <var139:String>*/
}
var = var140;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Char#bytes for (self: Char): SequenceRead[Byte] */
val* core__abstract_text___Char___bytes(uint32_t self) {
val* var /* : SequenceRead[Byte] */;
val* var1 /* : String */;
val* var2 /* : SequenceRead[Byte] */;
var1 = core__abstract_text___Char___Object__to_s(self);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__bytes]))(var1); /* bytes on <var1:String>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Char#is_surrogate for (self: Char): Bool */
short int core__abstract_text___Char___is_surrogate(uint32_t self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_cp /* var cp: Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
{
{ /* Inline kernel#Char#code_point (self) on <self:Char> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_cp = var1;
{
{ /* Inline kernel#Int#>= (var_cp,55296l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <55296l:Int> isa OTHER */
/* <55296l:Int> isa OTHER */
var7 = 1; /* easy <55296l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var8 = var_cp >= 55296l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
{
{ /* Inline kernel#Int#<= (var_cp,57343l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <57343l:Int> isa OTHER */
/* <57343l:Int> isa OTHER */
var11 = 1; /* easy <57343l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var15 = var_cp <= 57343l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var4 = var9;
} else {
var4 = var_;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Char#u8char_len for (self: Char): Int */
long core__abstract_text___Char___u8char_len(uint32_t self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_c /* var c: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
{
{ /* Inline kernel#Char#code_point (self) on <self:Char> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_c = var1;
{
{ /* Inline kernel#Int#< (var_c,128l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var6 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var7 = var_c < 128l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = 1l;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#<= (var_c,2047l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <2047l:Int> isa OTHER */
/* <2047l:Int> isa OTHER */
var10 = 1; /* easy <2047l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var14 = var_c <= 2047l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var = 2l;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#<= (var_c,65535l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <65535l:Int> isa OTHER */
/* <65535l:Int> isa OTHER */
var17 = 1; /* easy <65535l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var21 = var_c <= 65535l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var = 3l;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#<= (var_c,1114111l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <1114111l:Int> isa OTHER */
/* <1114111l:Int> isa OTHER */
var24 = 1; /* easy <1114111l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var28 = var_c <= 1114111l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var = 4l;
goto RET_LABEL;
} else {
}
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Char#to_s for (self: Char): String */
val* core__abstract_text___Char___Object__to_s(uint32_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var_ln /* var ln: Int */;
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
val* var10 /* : String */;
val* var11 /* : nullable Int */;
var1 = core__abstract_text___Char___u8char_len(self);
var_ln = var1;
var2 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var_ln + 1l;
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
core__abstract_text___Char___u8char_tos(self, var_ns, var_ln); /* Direct call abstract_text#Char#u8char_tos on <self:Char>*/
var11 = (val*)(var_ln<<2|1);
var10 = core__flat___NativeString___to_s_unsafe(var_ns, var11);
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Char#to_s for (self: Object): String */
val* VIRTUAL_core__abstract_text___Char___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
uint32_t var2 /* : Char */;
var2 = (uint32_t)((long)(self)>>2);
var1 = core__abstract_text___Char___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text#Char#escape_to_utf16 for (self: Char): String */
val* core__abstract_text___Char___escape_to_utf16(uint32_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_cp /* var cp: Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
val* var25 /* : Buffer */;
val* var26 /* : Buffer */;
val* var_buf /* var buf: Buffer */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var_hx /* var hx: String */;
long var_outid /* var outid: Int */;
val* var31 /* : SequenceRead[Char] */;
val* var32 /* : IndexedIterator[nullable Object] */;
val* var_33 /* var : IndexedIterator[Char] */;
val* var34 /* : Iterator[nullable Object] */;
val* var_35 /* var : Iterator[Char] */;
short int var36 /* : Bool */;
val* var37 /* : nullable Object */;
uint32_t var38 /* : Char */;
uint32_t var_i /* var i: Char */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
val* var46 /* : Buffer */;
val* var47 /* : Buffer */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
long var59 /* : Int */;
long var61 /* : Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
val* var69 /* : String */;
val* var_lo /* var lo: String */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var77 /* : Int */;
long var79 /* : Int */;
long var80 /* : Int */;
long var82 /* : Int */;
long var83 /* : Int */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
long var89 /* : Int */;
val* var90 /* : String */;
val* var_hi /* var hi: String */;
long var_out /* var out: Int */;
val* var_91 /* var : String */;
val* var92 /* : Iterator[Char] */;
val* var_93 /* var : Iterator[Char] */;
short int var94 /* : Bool */;
val* var96 /* : nullable Object */;
uint32_t var97 /* : Char */;
uint32_t var_i98 /* var i: Char */;
long var99 /* : Int */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
long var105 /* : Int */;
val* var_106 /* var : String */;
val* var107 /* : Iterator[Char] */;
val* var_108 /* var : Iterator[Char] */;
short int var109 /* : Bool */;
val* var111 /* : nullable Object */;
uint32_t var112 /* : Char */;
uint32_t var_i113 /* var i: Char */;
long var114 /* : Int */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
const char* var_class_name119;
long var120 /* : Int */;
val* var121 /* : String */;
{
{ /* Inline kernel#Char#code_point (self) on <self:Char> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_cp = var1;
{
{ /* Inline kernel#Int#< (var_cp,55296l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <55296l:Int> isa OTHER */
/* <55296l:Int> isa OTHER */
var7 = 1; /* easy <55296l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var8 = var_cp < 55296l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
var4 = var_;
} else {
{
{ /* Inline kernel#Int#>= (var_cp,57344l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <57344l:Int> isa OTHER */
/* <57344l:Int> isa OTHER */
var12 = 1; /* easy <57344l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var16 = var_cp >= 57344l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_17 = var10;
if (var10){
{
{ /* Inline kernel#Int#<= (var_cp,65535l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65535l:Int> isa OTHER */
/* <65535l:Int> isa OTHER */
var20 = 1; /* easy <65535l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var24 = var_cp <= 65535l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var9 = var18;
} else {
var9 = var_17;
}
var4 = var9;
}
if (var4){
var25 = NEW_core__Buffer(&type_core__Buffer);
{
var26 = ((val*(*)(val* self, long p0))(var25->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var25, 6l); /* with_cap on <var25:Buffer>*/
}
var_buf = var26;
if (likely(varonce!=NULL)) {
var27 = varonce;
} else {
var28 = "\\u0000";
var29 = core__flat___NativeString___to_s_full(var28, 6l, 6l);
var27 = var29;
varonce = var27;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var27); /* append on <var_buf:Buffer>*/
}
var30 = core__abstract_text___Int___to_hex(var_cp);
var_hx = var30;
var_outid = 5l;
{
var31 = ((val*(*)(val* self))(var_hx->class->vft[COLOR_core__abstract_text__Text__chars]))(var_hx); /* chars on <var_hx:String>*/
}
{
var32 = ((val*(*)(val* self))((((long)var31&3)?class_info[((long)var31&3)]:var31->class)->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator]))(var31); /* reverse_iterator on <var31:SequenceRead[Char]>*/
}
var_33 = var32;
{
var34 = ((val*(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_33); /* iterator on <var_33:IndexedIterator[Char]>*/
}
var_35 = var34;
for(;;) {
{
var36 = ((short int(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_35); /* is_ok on <var_35:Iterator[Char]>*/
}
if (var36){
} else {
goto BREAK_label;
}
{
var37 = ((val*(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_35); /* item on <var_35:Iterator[Char]>*/
}
var38 = (uint32_t)((long)(var37)>>2);
var_i = var38;
{
((void(*)(val* self, long p0, uint32_t p1))(var_buf->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(var_buf, var_outid, var_i); /* []= on <var_buf:Buffer>*/
}
{
{ /* Inline kernel#Int#- (var_outid,1l) on <var_outid:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var41 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var45 = var_outid - 1l;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_outid = var39;
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_35); /* next on <var_35:Iterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_35); /* finish on <var_35:Iterator[Char]>*/
}
} else {
var46 = NEW_core__Buffer(&type_core__Buffer);
{
var47 = ((val*(*)(val* self, long p0))(var46->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var46, 12l); /* with_cap on <var46:Buffer>*/
}
var_buf = var47;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "\\u0000\\u0000";
var51 = core__flat___NativeString___to_s_full(var50, 12l, 12l);
var49 = var51;
varonce48 = var49;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var49); /* append on <var_buf:Buffer>*/
}
{
{ /* Inline kernel#Int#- (var_cp,65536l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65536l:Int> isa OTHER */
/* <65536l:Int> isa OTHER */
var54 = 1; /* easy <65536l:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var58 = var_cp - 65536l;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline math#Int#& (var52,1023l) on <var52:Int> */
var61 = var52 & 1023l;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var59,56320l) on <var59:Int> */
/* Covariant cast for argument 0 (i) <56320l:Int> isa OTHER */
/* <56320l:Int> isa OTHER */
var64 = 1; /* easy <56320l:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var68 = var59 + 56320l;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var69 = core__abstract_text___Int___to_hex(var62);
var_lo = var69;
{
{ /* Inline kernel#Int#- (var_cp,65536l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65536l:Int> isa OTHER */
/* <65536l:Int> isa OTHER */
var72 = 1; /* easy <65536l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var76 = var_cp - 65536l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline math#Int#& (var70,1047552l) on <var70:Int> */
var79 = var70 & 1047552l;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline kernel#Int#>> (var77,10l) on <var77:Int> */
var82 = var77 >> 10l;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var80,55296l) on <var80:Int> */
/* Covariant cast for argument 0 (i) <55296l:Int> isa OTHER */
/* <55296l:Int> isa OTHER */
var85 = 1; /* easy <55296l:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var89 = var80 + 55296l;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var90 = core__abstract_text___Int___to_hex(var83);
var_hi = var90;
var_out = 2l;
var_91 = var_hi;
{
var92 = ((val*(*)(val* self))(var_91->class->vft[COLOR_core__abstract_text__Text__iterator]))(var_91); /* iterator on <var_91:String>*/
}
var_93 = var92;
for(;;) {
{
var94 = ((short int(*)(val* self))((((long)var_93&3)?class_info[((long)var_93&3)]:var_93->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_93); /* is_ok on <var_93:Iterator[Char]>*/
}
if (var94){
} else {
goto BREAK_label95;
}
{
var96 = ((val*(*)(val* self))((((long)var_93&3)?class_info[((long)var_93&3)]:var_93->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_93); /* item on <var_93:Iterator[Char]>*/
}
var97 = (uint32_t)((long)(var96)>>2);
var_i98 = var97;
{
((void(*)(val* self, long p0, uint32_t p1))(var_buf->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(var_buf, var_out, var_i98); /* []= on <var_buf:Buffer>*/
}
{
{ /* Inline kernel#Int#+ (var_out,1l) on <var_out:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var101 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var105 = var_out + 1l;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var_out = var99;
{
((void(*)(val* self))((((long)var_93&3)?class_info[((long)var_93&3)]:var_93->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_93); /* next on <var_93:Iterator[Char]>*/
}
}
BREAK_label95: (void)0;
{
((void(*)(val* self))((((long)var_93&3)?class_info[((long)var_93&3)]:var_93->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_93); /* finish on <var_93:Iterator[Char]>*/
}
var_out = 8l;
var_106 = var_lo;
{
var107 = ((val*(*)(val* self))(var_106->class->vft[COLOR_core__abstract_text__Text__iterator]))(var_106); /* iterator on <var_106:String>*/
}
var_108 = var107;
for(;;) {
{
var109 = ((short int(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_108); /* is_ok on <var_108:Iterator[Char]>*/
}
if (var109){
} else {
goto BREAK_label110;
}
{
var111 = ((val*(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_108); /* item on <var_108:Iterator[Char]>*/
}
var112 = (uint32_t)((long)(var111)>>2);
var_i113 = var112;
{
((void(*)(val* self, long p0, uint32_t p1))(var_buf->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(var_buf, var_out, var_i113); /* []= on <var_buf:Buffer>*/
}
{
{ /* Inline kernel#Int#+ (var_out,1l) on <var_out:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var116 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var116)) {
var_class_name119 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name119);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var120 = var_out + 1l;
var114 = var120;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
var_out = var114;
{
((void(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_108); /* next on <var_108:Iterator[Char]>*/
}
}
BREAK_label110: (void)0;
{
((void(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_108); /* finish on <var_108:Iterator[Char]>*/
}
}
{
var121 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_buf); /* to_s on <var_buf:Buffer>*/
}
var = var121;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Char#u8char_tos for (self: Char, NativeString, Int) */
void core__abstract_text___Char___u8char_tos(uint32_t self, char* p0, long p1) {
core__abstract_text___Char_u8char_tos___impl(self, p0, p1);
RET_LABEL:;
}
/* method abstract_text#Char#is_numeric for (self: Char): Bool */
short int core__abstract_text___Char___is_numeric(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
{
{ /* Inline kernel#Char#>= (self,'0') on <self:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var4 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var5 = self >= '0';
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel#Char#<= (self,'9') on <self:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var8 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var12 = self <= '9';
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Char#is_alpha for (self: Char): Bool */
short int core__abstract_text___Char___is_alpha(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_14 /* var : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
{
{ /* Inline kernel#Char#>= (self,'a') on <self:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var5 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var6 = self >= 'a';
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
{ /* Inline kernel#Char#<= (self,'z') on <self:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var9 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var13 = self <= 'z';
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var2 = var7;
} else {
var2 = var_;
}
var_14 = var2;
if (var2){
var1 = var_14;
} else {
{
{ /* Inline kernel#Char#>= (self,'A') on <self:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var18 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var22 = self >= 'A';
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_23 = var16;
if (var16){
{
{ /* Inline kernel#Char#<= (self,'Z') on <self:Char> */
/* Covariant cast for argument 0 (i) <'Z':Char> isa OTHER */
/* <'Z':Char> isa OTHER */
var26 = 1; /* easy <'Z':Char> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var30 = self <= 'Z';
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var15 = var24;
} else {
var15 = var_23;
}
var1 = var15;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Char#is_hexdigit for (self: Char): Bool */
short int core__abstract_text___Char___is_hexdigit(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
short int var_15 /* var : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
{
{ /* Inline kernel#Char#>= (self,'0') on <self:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var6 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var7 = self >= '0';
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
{
{ /* Inline kernel#Char#<= (self,'9') on <self:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var10 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var14 = self <= '9';
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var3 = var8;
} else {
var3 = var_;
}
var_15 = var3;
if (var3){
var2 = var_15;
} else {
{
{ /* Inline kernel#Char#>= (self,'A') on <self:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var19 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var23 = self >= 'A';
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_24 = var17;
if (var17){
{
{ /* Inline kernel#Char#<= (self,'F') on <self:Char> */
/* Covariant cast for argument 0 (i) <'F':Char> isa OTHER */
/* <'F':Char> isa OTHER */
var27 = 1; /* easy <'F':Char> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var31 = self <= 'F';
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var16 = var25;
} else {
var16 = var_24;
}
var2 = var16;
}
var_32 = var2;
if (var2){
var1 = var_32;
} else {
{
{ /* Inline kernel#Char#>= (self,'a') on <self:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var36 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var40 = self >= 'a';
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_41 = var34;
if (var34){
{
{ /* Inline kernel#Char#<= (self,'f') on <self:Char> */
/* Covariant cast for argument 0 (i) <'f':Char> isa OTHER */
/* <'f':Char> isa OTHER */
var44 = 1; /* easy <'f':Char> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var48 = self <= 'f';
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var33 = var42;
} else {
var33 = var_41;
}
var1 = var33;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Char#is_alphanumeric for (self: Char): Bool */
short int core__abstract_text___Char___is_alphanumeric(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
var2 = core__abstract_text___Char___is_numeric(self);
var_ = var2;
if (var2){
var1 = var_;
} else {
var3 = core__abstract_text___Char___is_alpha(self);
var1 = var3;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Char#from_hex for (self: Char): Int */
long core__abstract_text___Char___from_hex(uint32_t self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
short int var_31 /* var : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
long var39 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
short int var56 /* : Bool */;
short int var_57 /* var : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
short int var64 /* : Bool */;
long var65 /* : Int */;
long var67 /* : Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
short int var75 /* : Bool */;
{
{ /* Inline kernel#Char#>= (self,'0') on <self:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var4 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var5 = self >= '0';
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel#Char#<= (self,'9') on <self:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var8 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var12 = self <= '9';
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
if (var1){
{
{ /* Inline kernel#Char#code_point (self) on <self:Char> */
var15 = (long)self;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var13,48l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <48l:Int> isa OTHER */
/* <48l:Int> isa OTHER */
var18 = 1; /* easy <48l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var13 - 48l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var = var16;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Char#>= (self,'A') on <self:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var26 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var30 = self >= 'A';
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_31 = var24;
if (var24){
{
{ /* Inline kernel#Char#<= (self,'F') on <self:Char> */
/* Covariant cast for argument 0 (i) <'F':Char> isa OTHER */
/* <'F':Char> isa OTHER */
var34 = 1; /* easy <'F':Char> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var38 = self <= 'F';
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var23 = var32;
} else {
var23 = var_31;
}
if (var23){
{
{ /* Inline kernel#Char#code_point (self) on <self:Char> */
var41 = (long)self;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var39,55l) on <var39:Int> */
/* Covariant cast for argument 0 (i) <55l:Int> isa OTHER */
/* <55l:Int> isa OTHER */
var44 = 1; /* easy <55l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var48 = var39 - 55l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var = var42;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Char#>= (self,'a') on <self:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var52 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 912);
fatal_exit(1);
}
var56 = self >= 'a';
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_57 = var50;
if (var50){
{
{ /* Inline kernel#Char#<= (self,'f') on <self:Char> */
/* Covariant cast for argument 0 (i) <'f':Char> isa OTHER */
/* <'f':Char> isa OTHER */
var60 = 1; /* easy <'f':Char> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 910);
fatal_exit(1);
}
var64 = self <= 'f';
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var49 = var58;
} else {
var49 = var_57;
}
if (var49){
{
{ /* Inline kernel#Char#code_point (self) on <self:Char> */
var67 = (long)self;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var65,87l) on <var65:Int> */
/* Covariant cast for argument 0 (i) <87l:Int> isa OTHER */
/* <87l:Int> isa OTHER */
var70 = 1; /* easy <87l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var74 = var65 - 87l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var = var68;
goto RET_LABEL;
} else {
}
var75 = core__abstract_text___Char___is_hexdigit(self);
if (unlikely(!var75)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1846);
fatal_exit(1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1848);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Collection#to_s for (self: Collection[nullable Object]): String */
val* core__abstract_text___Collection___Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
val* var8 /* : String */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
val* var14 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "[";
var3 = core__flat___NativeString___to_s_full(var2, 1l, 1l);
var1 = var3;
varonce = var1;
}
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = ",";
var7 = core__flat___NativeString___to_s_full(var6, 1l, 1l);
var5 = var7;
varonce4 = var5;
}
{
var8 = ((val*(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_text__Collection__join]))(self, var5); /* join on <self:Collection[nullable Object]>*/
}
{
var9 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_text__String___43d]))(var1, var8); /* + on <var1:String>*/
}
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "]";
var13 = core__flat___NativeString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce10 = var11;
}
{
var14 = ((val*(*)(val* self, val* p0))(var9->class->vft[COLOR_core__abstract_text__String___43d]))(var9, var11); /* + on <var9:String>*/
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Collection#plain_to_s for (self: Collection[nullable Object]): String */
val* core__abstract_text___Collection___plain_to_s(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var_ /* var : Collection[nullable Object] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : String */;
val* var10 /* : String */;
var1 = NEW_core__Buffer(&type_core__Buffer);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_s = var2;
var_ = self;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[nullable Object]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[nullable Object]>*/
}
var_e = var6;
if (var_e == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var7 = var8;
}
if (var7){
{
var9 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var9); /* append on <var_s:Buffer>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[nullable Object]>*/
}
{
var10 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Collection#join for (self: Collection[nullable Object], nullable Text): String */
val* core__abstract_text___Collection___join(val* self, val* p0) {
val* var /* : String */;
val* var_separator /* var separator: nullable Text */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : Buffer */;
val* var6 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var7 /* : Iterator[nullable Object] */;
val* var_i /* var i: Iterator[nullable Object] */;
val* var8 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : String */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : String */;
val* var19 /* : String */;
var_separator = p0;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:Collection[nullable Object]>*/
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
var7 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(self); /* iterator on <self:Collection[nullable Object]>*/
}
var_i = var7;
{
var8 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:Iterator[nullable Object]>*/
}
var_e = var8;
if (var_e == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var9 = var10;
}
if (var9){
{
var11 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var11); /* append on <var_s:Buffer>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:Iterator[nullable Object]>*/
}
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:Iterator[nullable Object]>*/
}
if (var12){
if (var_separator == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))(var_separator->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_separator, ((val*)NULL)); /* != on <var_separator:nullable Text>*/
var13 = var14;
}
if (var13){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var_separator); /* append on <var_s:Buffer>*/
}
} else {
}
{
var15 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:Iterator[nullable Object]>*/
}
var_e = var15;
if (var_e == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
var17 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var16 = var17;
}
if (var16){
{
var18 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var18); /* append on <var_s:Buffer>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:Iterator[nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var19 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Map#join for (self: Map[nullable Object, nullable Object], String, String): String */
val* core__abstract_text___Map___join(val* self, val* p0, val* p1) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "join", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1914);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#Sys#args_cache for (self: Sys): nullable Sequence[String] */
val* core__abstract_text___Sys___args_cache(val* self) {
val* var /* : nullable Sequence[String] */;
val* var1 /* : nullable Sequence[String] */;
var1 = self->attrs[COLOR_core__abstract_text__Sys___args_cache].val; /* _args_cache on <self:Sys> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text#Sys#args_cache= for (self: Sys, nullable Sequence[String]) */
void core__abstract_text___Sys___args_cache_61d(val* self, val* p0) {
self->attrs[COLOR_core__abstract_text__Sys___args_cache].val = p0; /* _args_cache on <self:Sys> */
RET_LABEL:;
}
/* method abstract_text#Sys#program_args for (self: Sys): Sequence[String] */
val* core__abstract_text___Sys___program_args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : nullable Sequence[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Sequence[String] */;
var1 = self->attrs[COLOR_core__abstract_text__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var1, ((val*)NULL)); /* == on <var1:nullable Sequence[String]>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Sys__init_args]))(self); /* init_args on <self:Sys>*/
}
} else {
}
var4 = self->attrs[COLOR_core__abstract_text__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1932);
fatal_exit(1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Sys#program_name for (self: Sys): String */
val* core__abstract_text___Sys___program_name(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
{ /* Inline abstract_text#Sys#native_argv (self,0l) on <self:Sys> */
var3 = glob_argv[0l];
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
/* method abstract_text#Sys#init_args for (self: Sys) */
void core__abstract_text___Sys___init_args(val* self) {
long var /* : Int */;
long var2 /* : Int */;
long var_argc /* var argc: Int */;
val* var3 /* : Array[String] */;
val* var_args /* var args: Array[String] */;
long var_i /* var i: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
char* var15 /* : NativeString */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
{
{ /* Inline abstract_text#Sys#native_argc (self) on <self:Sys> */
var2 = glob_argc;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_argc = var;
var3 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self, long p0))(var3->class->vft[COLOR_core__array__Array__with_capacity]))(var3, 0l); /* with_capacity on <var3:Array[String]>*/
}
var_args = var3;
var_i = 1l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_argc) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_argc:Int> isa OTHER */
/* <var_argc:Int> isa OTHER */
var6 = 1; /* easy <var_argc:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var7 = var_i < var_argc;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_i - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_text#Sys#native_argv (self,var_i) on <self:Sys> */
var17 = glob_argv[var_i];
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var18 = core__flat___NativeString___core__abstract_text__Object__to_s(var15);
{
((void(*)(val* self, long p0, val* p1))(var_args->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_args, var8, var18); /* []= on <var_args:Array[String]>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var25 = var_i + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_i = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_core__abstract_text__Sys___args_cache].val = var_args; /* _args_cache on <self:Sys> */
RET_LABEL:;
}
/* method abstract_text#Sys#native_argc for (self: Sys): Int */
long core__abstract_text___Sys___native_argc(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = glob_argc;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Sys#native_argv for (self: Sys, Int): NativeString */
char* core__abstract_text___Sys___native_argv(val* self, long p0) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = glob_argv[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Sys#alpha_comparator for (self: Sys): Comparator */
val* core__abstract_text___Sys___alpha_comparator(val* self) {
val* var /* : Comparator */;
static val* varonce;
static int varonce_guard;
val* var1 /* : AlphaComparator */;
val* var2 /* : AlphaComparator */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_core__abstract_text__AlphaComparator(&type_core__abstract_text__AlphaComparator);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:AlphaComparator>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#Sys#args for (self: Sys): Sequence[String] */
val* core__abstract_text___Sys___args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : Sequence[String] */;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Sys__program_args]))(var1); /* program_args on <var1:Sys>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#CachedAlphaComparator#cache for (self: CachedAlphaComparator): HashMap[Object, String] */
val* core___core__CachedAlphaComparator___cache(val* self) {
val* var /* : HashMap[Object, String] */;
val* var1 /* : HashMap[Object, String] */;
var1 = self->attrs[COLOR_core__abstract_text__CachedAlphaComparator___cache].val; /* _cache on <self:CachedAlphaComparator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1977);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text#CachedAlphaComparator#cache= for (self: CachedAlphaComparator, HashMap[Object, String]) */
void core___core__CachedAlphaComparator___cache_61d(val* self, val* p0) {
self->attrs[COLOR_core__abstract_text__CachedAlphaComparator___cache].val = p0; /* _cache on <self:CachedAlphaComparator> */
RET_LABEL:;
}
/* method abstract_text#CachedAlphaComparator#do_to_s for (self: CachedAlphaComparator, Object): String */
val* core___core__CachedAlphaComparator___do_to_s(val* self, val* p0) {
val* var /* : String */;
val* var_a /* var a: Object */;
val* var1 /* : HashMap[Object, String] */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[Object, String] */;
val* var4 /* : nullable Object */;
val* var5 /* : String */;
val* var_res /* var res: String */;
val* var6 /* : HashMap[Object, String] */;
var_a = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__CachedAlphaComparator__cache]))(self); /* cache on <self:CachedAlphaComparator>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var1, var_a); /* has_key on <var1:HashMap[Object, String]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__CachedAlphaComparator__cache]))(self); /* cache on <self:CachedAlphaComparator>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var3, var_a); /* [] on <var3:HashMap[Object, String]>*/
}
var = var4;
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:Object>*/
}
var_res = var5;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__CachedAlphaComparator__cache]))(self); /* cache on <self:CachedAlphaComparator>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var6, var_a, var_res); /* []= on <var6:HashMap[Object, String]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#CachedAlphaComparator#compare for (self: CachedAlphaComparator, Object, Object): Int */
long core___core__CachedAlphaComparator___core__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_a /* var a: Object */;
val* var_b /* var b: Object */;
val* var7 /* : String */;
val* var8 /* : String */;
long var9 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:Object> isa COMPARED */
/* <p0:Object> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1986);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:Object> isa COMPARED */
/* <p1:Object> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1986);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__CachedAlphaComparator__do_to_s]))(self, var_a); /* do_to_s on <self:CachedAlphaComparator>*/
}
{
var8 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__CachedAlphaComparator__do_to_s]))(self, var_b); /* do_to_s on <self:CachedAlphaComparator>*/
}
{
var9 = ((long(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Comparable___60d_61d_62d]))(var7, var8); /* <=> on <var7:String>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#AlphaComparator#compare for (self: AlphaComparator, nullable Object, nullable Object): Int */
long core__abstract_text___core__abstract_text__AlphaComparator___core__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
val* var_a /* var a: nullable Object */;
val* var_b /* var b: nullable Object */;
val* var8 /* : String */;
val* var9 /* : String */;
long var10 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:nullable Object> isa COMPARED */
/* <p0:nullable Object> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1994);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:nullable Object> isa COMPARED */
/* <p1:nullable Object> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1994);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
if (var_a == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1994);
fatal_exit(1);
} else {
var8 = ((val*(*)(val* self))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:nullable Object>*/
}
if (var_b == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1994);
fatal_exit(1);
} else {
var9 = ((val*(*)(val* self))((((long)var_b&3)?class_info[((long)var_b&3)]:var_b->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:nullable Object>*/
}
{
var10 = ((long(*)(val* self, val* p0))(var8->class->vft[COLOR_core__kernel__Comparable___60d_61d_62d]))(var8, var9); /* <=> on <var8:String>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text#NativeString#to_s_with_copy for (self: NativeString): String */
val* core__abstract_text___NativeString___to_s_with_copy(char* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = type_core__NativeString.name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_s_with_copy", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2014);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#NativeString#to_s_with_length for (self: NativeString, Int): String */
val* core__abstract_text___NativeString___to_s_with_length(char* self, long p0) {
val* var /* : String */;
const char* var_class_name;
var_class_name = type_core__NativeString.name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_s_with_length", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2017);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#NativeString#to_s_unsafe for (self: NativeString, nullable Int): String */
val* core__abstract_text___NativeString___to_s_unsafe(char* self, val* p0) {
val* var /* : String */;
const char* var_class_name;
var_class_name = type_core__NativeString.name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_s_unsafe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2020);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#NativeString#to_s_full for (self: NativeString, Int, Int): String */
val* core__abstract_text___NativeString___to_s_full(char* self, long p0, long p1) {
val* var /* : String */;
const char* var_class_name;
var_class_name = type_core__NativeString.name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_s_full", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2026);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text#NativeArray#native_to_s for (self: NativeArray[nullable Object]): String */
val* core__abstract_text___NativeArray___native_to_s(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "native_to_s", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2034);
fatal_exit(1);
RET_LABEL:;
return var;
}
