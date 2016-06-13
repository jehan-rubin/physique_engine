#include "core__fixed_ints.sep.0.h"
/* method fixed_ints#Numeric#to_i8 for (self: Numeric): Int8 */
int8_t core__fixed_ints___Numeric___to_i8(val* self) {
int8_t var /* : Int8 */;
long var1 /* : Int */;
int8_t var2 /* : Int8 */;
int8_t var4 /* : Int8 */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Numeric__to_i]))(self); /* to_i on <self:Numeric>*/
}
{
{ /* Inline fixed_ints#Int#to_i8 (var1) on <var1:Int> */
var4 = (int8_t)var1;
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
/* method fixed_ints#Numeric#to_i16 for (self: Numeric): Int16 */
int16_t core__fixed_ints___Numeric___to_i16(val* self) {
int16_t var /* : Int16 */;
long var1 /* : Int */;
int16_t var2 /* : Int16 */;
int16_t var4 /* : Int16 */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Numeric__to_i]))(self); /* to_i on <self:Numeric>*/
}
{
{ /* Inline fixed_ints#Int#to_i16 (var1) on <var1:Int> */
var4 = (int16_t)var1;
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
/* method fixed_ints#Numeric#to_u16 for (self: Numeric): UInt16 */
uint16_t core__fixed_ints___Numeric___to_u16(val* self) {
uint16_t var /* : UInt16 */;
long var1 /* : Int */;
uint16_t var2 /* : UInt16 */;
uint16_t var4 /* : UInt16 */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Numeric__to_i]))(self); /* to_i on <self:Numeric>*/
}
{
{ /* Inline fixed_ints#Int#to_u16 (var1) on <var1:Int> */
var4 = (uint16_t)var1;
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
/* method fixed_ints#Numeric#to_i32 for (self: Numeric): Int32 */
int32_t core__fixed_ints___Numeric___to_i32(val* self) {
int32_t var /* : Int32 */;
long var1 /* : Int */;
int32_t var2 /* : Int32 */;
int32_t var4 /* : Int32 */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Numeric__to_i]))(self); /* to_i on <self:Numeric>*/
}
{
{ /* Inline fixed_ints#Int#to_i32 (var1) on <var1:Int> */
var4 = (int32_t)var1;
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
/* method fixed_ints#Numeric#to_u32 for (self: Numeric): UInt32 */
uint32_t core__fixed_ints___Numeric___to_u32(val* self) {
uint32_t var /* : UInt32 */;
long var1 /* : Int */;
uint32_t var2 /* : UInt32 */;
uint32_t var4 /* : UInt32 */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Numeric__to_i]))(self); /* to_i on <self:Numeric>*/
}
{
{ /* Inline fixed_ints#Int#to_u32 (var1) on <var1:Int> */
var4 = (uint32_t)var1;
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
/* method fixed_ints#Float#to_i8 for (self: Float): Int8 */
int8_t core__fixed_ints___Float___Numeric__to_i8(double self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = (int8_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Float#to_i8 for (self: Numeric): Int8 */
int8_t VIRTUAL_core__fixed_ints___Float___Numeric__to_i8(val* self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
double var3 /* : Float */;
int8_t var4 /* : Int8 */;
{ /* Inline fixed_ints#Float#to_i8 (self) on <self:Numeric(Float)> */
var3 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var4 = (int8_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Float#to_i16 for (self: Float): Int16 */
int16_t core__fixed_ints___Float___Numeric__to_i16(double self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = (int16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Float#to_i16 for (self: Numeric): Int16 */
int16_t VIRTUAL_core__fixed_ints___Float___Numeric__to_i16(val* self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
double var3 /* : Float */;
int16_t var4 /* : Int16 */;
{ /* Inline fixed_ints#Float#to_i16 (self) on <self:Numeric(Float)> */
var3 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var4 = (int16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Float#to_u16 for (self: Float): UInt16 */
uint16_t core__fixed_ints___Float___Numeric__to_u16(double self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = (uint16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Float#to_u16 for (self: Numeric): UInt16 */
uint16_t VIRTUAL_core__fixed_ints___Float___Numeric__to_u16(val* self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
double var3 /* : Float */;
uint16_t var4 /* : UInt16 */;
{ /* Inline fixed_ints#Float#to_u16 (self) on <self:Numeric(Float)> */
var3 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var4 = (uint16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Float#to_i32 for (self: Float): Int32 */
int32_t core__fixed_ints___Float___Numeric__to_i32(double self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = (int32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Float#to_i32 for (self: Numeric): Int32 */
int32_t VIRTUAL_core__fixed_ints___Float___Numeric__to_i32(val* self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
double var3 /* : Float */;
int32_t var4 /* : Int32 */;
{ /* Inline fixed_ints#Float#to_i32 (self) on <self:Numeric(Float)> */
var3 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var4 = (int32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Float#to_u32 for (self: Float): UInt32 */
uint32_t core__fixed_ints___Float___Numeric__to_u32(double self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = (uint32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Float#to_u32 for (self: Numeric): UInt32 */
uint32_t VIRTUAL_core__fixed_ints___Float___Numeric__to_u32(val* self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
double var3 /* : Float */;
uint32_t var4 /* : UInt32 */;
{ /* Inline fixed_ints#Float#to_u32 (self) on <self:Numeric(Float)> */
var3 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var4 = (uint32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Byte#to_i8 for (self: Byte): Int8 */
int8_t core__fixed_ints___Byte___Numeric__to_i8(unsigned char self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = (int8_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Byte#to_i8 for (self: Numeric): Int8 */
int8_t VIRTUAL_core__fixed_ints___Byte___Numeric__to_i8(val* self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
unsigned char var3 /* : Byte */;
int8_t var4 /* : Int8 */;
{ /* Inline fixed_ints#Byte#to_i8 (self) on <self:Numeric(Byte)> */
var3 = ((struct instance_core__Byte*)self)->value; /* autounbox from Numeric to Byte */;
var4 = (int8_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Byte#to_i16 for (self: Byte): Int16 */
int16_t core__fixed_ints___Byte___Numeric__to_i16(unsigned char self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = (int16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Byte#to_i16 for (self: Numeric): Int16 */
int16_t VIRTUAL_core__fixed_ints___Byte___Numeric__to_i16(val* self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
unsigned char var3 /* : Byte */;
int16_t var4 /* : Int16 */;
{ /* Inline fixed_ints#Byte#to_i16 (self) on <self:Numeric(Byte)> */
var3 = ((struct instance_core__Byte*)self)->value; /* autounbox from Numeric to Byte */;
var4 = (int16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Byte#to_u16 for (self: Byte): UInt16 */
uint16_t core__fixed_ints___Byte___Numeric__to_u16(unsigned char self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = (uint16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Byte#to_u16 for (self: Numeric): UInt16 */
uint16_t VIRTUAL_core__fixed_ints___Byte___Numeric__to_u16(val* self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
unsigned char var3 /* : Byte */;
uint16_t var4 /* : UInt16 */;
{ /* Inline fixed_ints#Byte#to_u16 (self) on <self:Numeric(Byte)> */
var3 = ((struct instance_core__Byte*)self)->value; /* autounbox from Numeric to Byte */;
var4 = (uint16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Byte#to_i32 for (self: Byte): Int32 */
int32_t core__fixed_ints___Byte___Numeric__to_i32(unsigned char self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = (int32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Byte#to_i32 for (self: Numeric): Int32 */
int32_t VIRTUAL_core__fixed_ints___Byte___Numeric__to_i32(val* self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
unsigned char var3 /* : Byte */;
int32_t var4 /* : Int32 */;
{ /* Inline fixed_ints#Byte#to_i32 (self) on <self:Numeric(Byte)> */
var3 = ((struct instance_core__Byte*)self)->value; /* autounbox from Numeric to Byte */;
var4 = (int32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Byte#to_u32 for (self: Byte): UInt32 */
uint32_t core__fixed_ints___Byte___Numeric__to_u32(unsigned char self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = (uint32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Byte#to_u32 for (self: Numeric): UInt32 */
uint32_t VIRTUAL_core__fixed_ints___Byte___Numeric__to_u32(val* self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
unsigned char var3 /* : Byte */;
uint32_t var4 /* : UInt32 */;
{ /* Inline fixed_ints#Byte#to_u32 (self) on <self:Numeric(Byte)> */
var3 = ((struct instance_core__Byte*)self)->value; /* autounbox from Numeric to Byte */;
var4 = (uint32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int#to_i8 for (self: Int): Int8 */
int8_t core__fixed_ints___Int___Numeric__to_i8(long self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = (int8_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int#to_i8 for (self: Numeric): Int8 */
int8_t VIRTUAL_core__fixed_ints___Int___Numeric__to_i8(val* self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
long var3 /* : Int */;
int8_t var4 /* : Int8 */;
{ /* Inline fixed_ints#Int#to_i8 (self) on <self:Numeric(Int)> */
var3 = (long)(self)>>2;
var4 = (int8_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int#to_i16 for (self: Int): Int16 */
int16_t core__fixed_ints___Int___Numeric__to_i16(long self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = (int16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int#to_i16 for (self: Numeric): Int16 */
int16_t VIRTUAL_core__fixed_ints___Int___Numeric__to_i16(val* self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
long var3 /* : Int */;
int16_t var4 /* : Int16 */;
{ /* Inline fixed_ints#Int#to_i16 (self) on <self:Numeric(Int)> */
var3 = (long)(self)>>2;
var4 = (int16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int#to_u16 for (self: Int): UInt16 */
uint16_t core__fixed_ints___Int___Numeric__to_u16(long self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = (uint16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int#to_u16 for (self: Numeric): UInt16 */
uint16_t VIRTUAL_core__fixed_ints___Int___Numeric__to_u16(val* self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
long var3 /* : Int */;
uint16_t var4 /* : UInt16 */;
{ /* Inline fixed_ints#Int#to_u16 (self) on <self:Numeric(Int)> */
var3 = (long)(self)>>2;
var4 = (uint16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int#to_i32 for (self: Int): Int32 */
int32_t core__fixed_ints___Int___Numeric__to_i32(long self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = (int32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int#to_i32 for (self: Numeric): Int32 */
int32_t VIRTUAL_core__fixed_ints___Int___Numeric__to_i32(val* self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
long var3 /* : Int */;
int32_t var4 /* : Int32 */;
{ /* Inline fixed_ints#Int#to_i32 (self) on <self:Numeric(Int)> */
var3 = (long)(self)>>2;
var4 = (int32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int#to_u32 for (self: Int): UInt32 */
uint32_t core__fixed_ints___Int___Numeric__to_u32(long self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = (uint32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int#to_u32 for (self: Numeric): UInt32 */
uint32_t VIRTUAL_core__fixed_ints___Int___Numeric__to_u32(val* self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
long var3 /* : Int */;
uint32_t var4 /* : UInt32 */;
{ /* Inline fixed_ints#Int#to_u32 (self) on <self:Numeric(Int)> */
var3 = (long)(self)>>2;
var4 = (uint32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#successor for (self: Int8, Int): Int8 */
int8_t core___core__Int8___core__kernel__Discrete__successor(int8_t self, long p0) {
int8_t var /* : Int8 */;
long var_i /* var i: Int */;
int8_t var1 /* : Int8 */;
int8_t var3 /* : Int8 */;
int8_t var4 /* : Int8 */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int8_t var7 /* : Int8 */;
var_i = p0;
{
{ /* Inline fixed_ints#Int#to_i8 (var_i) on <var_i:Int> */
var3 = (int8_t)var_i;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline fixed_ints#Int8#+ (self,var1) on <self:Int8> */
/* Covariant cast for argument 0 (i) <var1:Int8> isa OTHER */
/* <var1:Int8> isa OTHER */
var6 = 1; /* easy <var1:Int8> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 122);
fatal_exit(1);
}
var7 = self + var1;
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
/* method fixed_ints#Int8#successor for (self: Discrete, Int): Discrete */
val* VIRTUAL_core___core__Int8___core__kernel__Discrete__successor(val* self, long p0) {
val* var /* : Discrete */;
int8_t var1 /* : Int8 */;
int8_t var2 /* : Int8 */;
val* var3 /* : Discrete */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Discrete to Int8 */;
var1 = core___core__Int8___core__kernel__Discrete__successor(var2, p0);
var3 = BOX_core__Int8(var1); /* autobox from Int8 to Discrete */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#predecessor for (self: Int8, Int): Int8 */
int8_t core___core__Int8___core__kernel__Discrete__predecessor(int8_t self, long p0) {
int8_t var /* : Int8 */;
long var_i /* var i: Int */;
int8_t var1 /* : Int8 */;
int8_t var3 /* : Int8 */;
int8_t var4 /* : Int8 */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int8_t var7 /* : Int8 */;
var_i = p0;
{
{ /* Inline fixed_ints#Int#to_i8 (var_i) on <var_i:Int> */
var3 = (int8_t)var_i;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline fixed_ints#Int8#- (self,var1) on <self:Int8> */
/* Covariant cast for argument 0 (i) <var1:Int8> isa OTHER */
/* <var1:Int8> isa OTHER */
var6 = 1; /* easy <var1:Int8> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 127);
fatal_exit(1);
}
var7 = self - var1;
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
/* method fixed_ints#Int8#predecessor for (self: Discrete, Int): Discrete */
val* VIRTUAL_core___core__Int8___core__kernel__Discrete__predecessor(val* self, long p0) {
val* var /* : Discrete */;
int8_t var1 /* : Int8 */;
int8_t var2 /* : Int8 */;
val* var3 /* : Discrete */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Discrete to Int8 */;
var1 = core___core__Int8___core__kernel__Discrete__predecessor(var2, p0);
var3 = BOX_core__Int8(var1); /* autobox from Int8 to Discrete */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#object_id for (self: Int8): Int */
long core___core__Int8___core__kernel__Object__object_id(int8_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#object_id for (self: Object): Int */
long VIRTUAL_core___core__Int8___core__kernel__Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
int8_t var3 /* : Int8 */;
long var4 /* : Int */;
{ /* Inline fixed_ints#Int8#object_id (self) on <self:Object(Int8)> */
var3 = ((struct instance_core__Int8*)self)->value; /* autounbox from Object to Int8 */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#hash for (self: Int8): Int */
long core___core__Int8___core__kernel__Object__hash(int8_t self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline fixed_ints#Int8#to_i (self) on <self:Int8> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#hash for (self: Object): Int */
long VIRTUAL_core___core__Int8___core__kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
int8_t var2 /* : Int8 */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Object to Int8 */;
var1 = core___core__Int8___core__kernel__Object__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#== for (self: Int8, nullable Object): Bool */
short int core___core__Int8___core__kernel__Object___61d_61d(int8_t self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int8_t var2 /* : Int8 */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__Int8)) {
var2 = ((struct instance_core__Int8*)p0)->value; /* autounbox from nullable Object to Int8 */;
var1 = var2 == self;
} else var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Int8___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline fixed_ints#Int8#== (self,p0) on <self:Object(Int8)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__Int8*)self)->value == ((struct instance_core__Int8*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#!= for (self: Int8, nullable Object): Bool */
short int core___core__Int8___core__kernel__Object___33d_61d(int8_t self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int8_t var2 /* : Int8 */;
short int var3 /* : Bool */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__Int8)) {
var2 = ((struct instance_core__Int8*)p0)->value; /* autounbox from nullable Object to Int8 */;
var1 = var2 == self;
} else var1 = 0;
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Int8___core__kernel__Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline fixed_ints#Int8#!= (self,p0) on <self:Object(Int8)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__Int8*)self)->value == ((struct instance_core__Int8*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#output for (self: Int8) */
void core___core__Int8___core__kernel__Object__output(int8_t self) {
printf("%"PRIi8 "\n", self);
RET_LABEL:;
}
/* method fixed_ints#Int8#output for (self: Object) */
void VIRTUAL_core___core__Int8___core__kernel__Object__output(val* self) {
int8_t var /* : Int8 */;
{ /* Inline fixed_ints#Int8#output (self) on <self:Object(Int8)> */
var = ((struct instance_core__Int8*)self)->value; /* autounbox from Object to Int8 */;
printf("%"PRIi8 "\n", var);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method fixed_ints#Int8#<= for (self: Int8, Int8): Bool */
short int core___core__Int8___core__kernel__Comparable___60d_61d(int8_t self, int8_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int8> isa OTHER */
/* <p0:Int8> isa OTHER */
var1 = 1; /* easy <p0:Int8> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 118);
fatal_exit(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#<= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int8___core__kernel__Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int8_t var4 /* : Int8 */;
int8_t var5 /* : Int8 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#Int8#<= (self,p0) on <self:Comparable(Int8)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 118);
fatal_exit(1);
}
var4 = ((struct instance_core__Int8*)self)->value; /* autounbox from Comparable to Int8 */;
var5 = ((struct instance_core__Int8*)p0)->value; /* autounbox from Comparable to Int8 */;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#< for (self: Int8, Int8): Bool */
short int core___core__Int8___core__kernel__Comparable___60d(int8_t self, int8_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int8> isa OTHER */
/* <p0:Int8> isa OTHER */
var1 = 1; /* easy <p0:Int8> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 119);
fatal_exit(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#< for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int8___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int8_t var4 /* : Int8 */;
int8_t var5 /* : Int8 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#Int8#< (self,p0) on <self:Comparable(Int8)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 119);
fatal_exit(1);
}
var4 = ((struct instance_core__Int8*)self)->value; /* autounbox from Comparable to Int8 */;
var5 = ((struct instance_core__Int8*)p0)->value; /* autounbox from Comparable to Int8 */;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#>= for (self: Int8, Int8): Bool */
short int core___core__Int8___core__kernel__Comparable___62d_61d(int8_t self, int8_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int8> isa OTHER */
/* <p0:Int8> isa OTHER */
var1 = 1; /* easy <p0:Int8> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 120);
fatal_exit(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#>= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int8___core__kernel__Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int8_t var4 /* : Int8 */;
int8_t var5 /* : Int8 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#Int8#>= (self,p0) on <self:Comparable(Int8)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 120);
fatal_exit(1);
}
var4 = ((struct instance_core__Int8*)self)->value; /* autounbox from Comparable to Int8 */;
var5 = ((struct instance_core__Int8*)p0)->value; /* autounbox from Comparable to Int8 */;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#> for (self: Int8, Int8): Bool */
short int core___core__Int8___core__kernel__Comparable___62d(int8_t self, int8_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int8> isa OTHER */
/* <p0:Int8> isa OTHER */
var1 = 1; /* easy <p0:Int8> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 121);
fatal_exit(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#> for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int8___core__kernel__Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int8_t var4 /* : Int8 */;
int8_t var5 /* : Int8 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#Int8#> (self,p0) on <self:Comparable(Int8)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 121);
fatal_exit(1);
}
var4 = ((struct instance_core__Int8*)self)->value; /* autounbox from Comparable to Int8 */;
var5 = ((struct instance_core__Int8*)p0)->value; /* autounbox from Comparable to Int8 */;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#+ for (self: Int8, Int8): Int8 */
int8_t core___core__Int8___core__kernel__Numeric___43d(int8_t self, int8_t p0) {
int8_t var /* : Int8 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int8_t var2 /* : Int8 */;
/* Covariant cast for argument 0 (i) <p0:Int8> isa OTHER */
/* <p0:Int8> isa OTHER */
var1 = 1; /* easy <p0:Int8> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 122);
fatal_exit(1);
}
var2 = self + p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#+ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int8___core__kernel__Numeric___43d(val* self, val* p0) {
val* var /* : Numeric */;
int8_t var1 /* : Int8 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int8_t var4 /* : Int8 */;
int8_t var5 /* : Int8 */;
int8_t var6 /* : Int8 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#Int8#+ (self,p0) on <self:Numeric(Int8)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 122);
fatal_exit(1);
}
var4 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var5 = ((struct instance_core__Int8*)p0)->value; /* autounbox from Numeric to Int8 */;
var6 = var4 + var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Int8(var1); /* autobox from Int8 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#unary - for (self: Int8): Int8 */
int8_t core___core__Int8___core__kernel__Numeric__unary_32d_45d(int8_t self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#unary - for (self: Numeric): Numeric */
val* VIRTUAL_core___core__Int8___core__kernel__Numeric__unary_32d_45d(val* self) {
val* var /* : Numeric */;
int8_t var1 /* : Int8 */;
int8_t var3 /* : Int8 */;
int8_t var4 /* : Int8 */;
val* var5 /* : Numeric */;
{ /* Inline fixed_ints#Int8#unary - (self) on <self:Numeric(Int8)> */
var3 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_core__Int8(var1); /* autobox from Int8 to Numeric */
var = var5;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#- for (self: Int8, Int8): Int8 */
int8_t core___core__Int8___core__kernel__Numeric___45d(int8_t self, int8_t p0) {
int8_t var /* : Int8 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int8_t var2 /* : Int8 */;
/* Covariant cast for argument 0 (i) <p0:Int8> isa OTHER */
/* <p0:Int8> isa OTHER */
var1 = 1; /* easy <p0:Int8> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 127);
fatal_exit(1);
}
var2 = self - p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#- for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int8___core__kernel__Numeric___45d(val* self, val* p0) {
val* var /* : Numeric */;
int8_t var1 /* : Int8 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int8_t var4 /* : Int8 */;
int8_t var5 /* : Int8 */;
int8_t var6 /* : Int8 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#Int8#- (self,p0) on <self:Numeric(Int8)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 127);
fatal_exit(1);
}
var4 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var5 = ((struct instance_core__Int8*)p0)->value; /* autounbox from Numeric to Int8 */;
var6 = var4 - var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Int8(var1); /* autobox from Int8 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#* for (self: Int8, Int8): Int8 */
int8_t core___core__Int8___core__kernel__Numeric___42d(int8_t self, int8_t p0) {
int8_t var /* : Int8 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int8_t var2 /* : Int8 */;
/* Covariant cast for argument 0 (i) <p0:Int8> isa OTHER */
/* <p0:Int8> isa OTHER */
var1 = 1; /* easy <p0:Int8> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 128);
fatal_exit(1);
}
var2 = self * p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#* for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int8___core__kernel__Numeric___42d(val* self, val* p0) {
val* var /* : Numeric */;
int8_t var1 /* : Int8 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int8_t var4 /* : Int8 */;
int8_t var5 /* : Int8 */;
int8_t var6 /* : Int8 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#Int8#* (self,p0) on <self:Numeric(Int8)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 128);
fatal_exit(1);
}
var4 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var5 = ((struct instance_core__Int8*)p0)->value; /* autounbox from Numeric to Int8 */;
var6 = var4 * var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Int8(var1); /* autobox from Int8 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#/ for (self: Int8, Int8): Int8 */
int8_t core___core__Int8___core__kernel__Numeric___47d(int8_t self, int8_t p0) {
int8_t var /* : Int8 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int8_t var2 /* : Int8 */;
/* Covariant cast for argument 0 (i) <p0:Int8> isa OTHER */
/* <p0:Int8> isa OTHER */
var1 = 1; /* easy <p0:Int8> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 129);
fatal_exit(1);
}
var2 = self / p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#/ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int8___core__kernel__Numeric___47d(val* self, val* p0) {
val* var /* : Numeric */;
int8_t var1 /* : Int8 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int8_t var4 /* : Int8 */;
int8_t var5 /* : Int8 */;
int8_t var6 /* : Int8 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#Int8#/ (self,p0) on <self:Numeric(Int8)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 129);
fatal_exit(1);
}
var4 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var5 = ((struct instance_core__Int8*)p0)->value; /* autounbox from Numeric to Int8 */;
var6 = var4 / var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Int8(var1); /* autobox from Int8 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#% for (self: Int8, Int8): Int8 */
int8_t core___core__Int8____37d(int8_t self, int8_t p0) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = self % p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#zero for (self: Int8): Int8 */
int8_t core___core__Int8___core__kernel__Numeric__zero(int8_t self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
int8_t var3 /* : Int8 */;
{
{ /* Inline fixed_ints#Int#to_i8 (0l) on <0l:Int> */
var3 = (int8_t)0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#zero for (self: Numeric): Numeric */
val* VIRTUAL_core___core__Int8___core__kernel__Numeric__zero(val* self) {
val* var /* : Numeric */;
int8_t var1 /* : Int8 */;
int8_t var2 /* : Int8 */;
val* var3 /* : Numeric */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var1 = core___core__Int8___core__kernel__Numeric__zero(var2);
var3 = BOX_core__Int8(var1); /* autobox from Int8 to Numeric */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#value_of for (self: Int8, Numeric): Int8 */
int8_t core___core__Int8___core__kernel__Numeric__value_of(int8_t self, val* p0) {
int8_t var /* : Int8 */;
val* var_val /* var val: Numeric */;
int8_t var1 /* : Int8 */;
var_val = p0;
{
var1 = ((int8_t(*)(val* self))((((long)var_val&3)?class_info[((long)var_val&3)]:var_val->class)->vft[COLOR_core__fixed_ints__Numeric__to_i8]))(var_val); /* to_i8 on <var_val:Numeric>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#value_of for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int8___core__kernel__Numeric__value_of(val* self, val* p0) {
val* var /* : Numeric */;
int8_t var1 /* : Int8 */;
int8_t var2 /* : Int8 */;
val* var3 /* : Numeric */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var1 = core___core__Int8___core__kernel__Numeric__value_of(var2, p0);
var3 = BOX_core__Int8(var1); /* autobox from Int8 to Numeric */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#<< for (self: Int8, Int): Int8 */
int8_t core___core__Int8____60d_60d(int8_t self, long p0) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = self << p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#>> for (self: Int8, Int): Int8 */
int8_t core___core__Int8____62d_62d(int8_t self, long p0) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = self >> p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_i for (self: Int8): Int */
long core___core__Int8___core__kernel__Numeric__to_i(int8_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_i for (self: Numeric): Int */
long VIRTUAL_core___core__Int8___core__kernel__Numeric__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
int8_t var3 /* : Int8 */;
long var4 /* : Int */;
{ /* Inline fixed_ints#Int8#to_i (self) on <self:Numeric(Int8)> */
var3 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_f for (self: Int8): Float */
double core___core__Int8___core__kernel__Numeric__to_f(int8_t self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_f for (self: Numeric): Float */
double VIRTUAL_core___core__Int8___core__kernel__Numeric__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
int8_t var3 /* : Int8 */;
double var4 /* : Float */;
{ /* Inline fixed_ints#Int8#to_f (self) on <self:Numeric(Int8)> */
var3 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_b for (self: Int8): Byte */
unsigned char core___core__Int8___core__kernel__Numeric__to_b(int8_t self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = (unsigned char)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_b for (self: Numeric): Byte */
unsigned char VIRTUAL_core___core__Int8___core__kernel__Numeric__to_b(val* self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
int8_t var3 /* : Int8 */;
unsigned char var4 /* : Byte */;
{ /* Inline fixed_ints#Int8#to_b (self) on <self:Numeric(Int8)> */
var3 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var4 = (unsigned char)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_i8 for (self: Int8): Int8 */
int8_t core___core__Int8___Numeric__to_i8(int8_t self) {
int8_t var /* : Int8 */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_i8 for (self: Numeric): Int8 */
int8_t VIRTUAL_core___core__Int8___Numeric__to_i8(val* self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
int8_t var2 /* : Int8 */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var1 = core___core__Int8___Numeric__to_i8(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_i16 for (self: Int8): Int16 */
int16_t core___core__Int8___Numeric__to_i16(int8_t self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = (int16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_i16 for (self: Numeric): Int16 */
int16_t VIRTUAL_core___core__Int8___Numeric__to_i16(val* self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
int8_t var3 /* : Int8 */;
int16_t var4 /* : Int16 */;
{ /* Inline fixed_ints#Int8#to_i16 (self) on <self:Numeric(Int8)> */
var3 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var4 = (int16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_u16 for (self: Int8): UInt16 */
uint16_t core___core__Int8___Numeric__to_u16(int8_t self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = (uint16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_u16 for (self: Numeric): UInt16 */
uint16_t VIRTUAL_core___core__Int8___Numeric__to_u16(val* self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
int8_t var3 /* : Int8 */;
uint16_t var4 /* : UInt16 */;
{ /* Inline fixed_ints#Int8#to_u16 (self) on <self:Numeric(Int8)> */
var3 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var4 = (uint16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_i32 for (self: Int8): Int32 */
int32_t core___core__Int8___Numeric__to_i32(int8_t self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = (int32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_i32 for (self: Numeric): Int32 */
int32_t VIRTUAL_core___core__Int8___Numeric__to_i32(val* self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
int8_t var3 /* : Int8 */;
int32_t var4 /* : Int32 */;
{ /* Inline fixed_ints#Int8#to_i32 (self) on <self:Numeric(Int8)> */
var3 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var4 = (int32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_u32 for (self: Int8): UInt32 */
uint32_t core___core__Int8___Numeric__to_u32(int8_t self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = (uint32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_u32 for (self: Numeric): UInt32 */
uint32_t VIRTUAL_core___core__Int8___Numeric__to_u32(val* self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
int8_t var3 /* : Int8 */;
uint32_t var4 /* : UInt32 */;
{ /* Inline fixed_ints#Int8#to_u32 (self) on <self:Numeric(Int8)> */
var3 = ((struct instance_core__Int8*)self)->value; /* autounbox from Numeric to Int8 */;
var4 = (uint32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#ascii for (self: Int8): Char */
uint32_t core___core__Int8___ascii(int8_t self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = core__fixed_ints___Int8_ascii___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#distance for (self: Int8, Int8): Int */
long core___core__Int8___core__kernel__Discrete__distance(int8_t self, int8_t p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int8_t var_i /* var i: Int8 */;
int8_t var2 /* : Int8 */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
int8_t var8 /* : Int8 */;
long var9 /* : Int */;
long var11 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int8> isa OTHER */
/* <p0:Int8> isa OTHER */
var1 = 1; /* easy <p0:Int8> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 164);
fatal_exit(1);
}
var_i = p0;
{
{ /* Inline fixed_ints#Int8#- (self,var_i) on <self:Int8> */
/* Covariant cast for argument 0 (i) <var_i:Int8> isa OTHER */
/* <var_i:Int8> isa OTHER */
var4 = 1; /* easy <var_i:Int8> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 127);
fatal_exit(1);
}
var8 = self - var_i;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline fixed_ints#Int8#to_i (var2) on <var2:Int8> */
var11 = (long)var2;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#distance for (self: Discrete, Discrete): Int */
long VIRTUAL_core___core__Int8___core__kernel__Discrete__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
int8_t var2 /* : Int8 */;
int8_t var3 /* : Int8 */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Discrete to Int8 */;
var3 = ((struct instance_core__Int8*)p0)->value; /* autounbox from Discrete to Int8 */;
var1 = core___core__Int8___core__kernel__Discrete__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#<=> for (self: Int8, Int8): Int */
long core___core__Int8___core__kernel__Comparable___60d_61d_62d(int8_t self, int8_t p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int8_t var_other /* var other: Int8 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Int8> isa OTHER */
/* <p0:Int8> isa OTHER */
var1 = 1; /* easy <p0:Int8> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 166);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline fixed_ints#Int8#< (self,var_other) on <self:Int8> */
/* Covariant cast for argument 0 (i) <var_other:Int8> isa OTHER */
/* <var_other:Int8> isa OTHER */
var4 = 1; /* easy <var_other:Int8> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 119);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var11 = -1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
{
{ /* Inline fixed_ints#Int8#< (var_other,self) on <var_other:Int8> */
/* Covariant cast for argument 0 (i) <self:Int8> isa OTHER */
/* <self:Int8> isa OTHER */
var14 = 1; /* easy <self:Int8> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 119);
fatal_exit(1);
}
var18 = var_other < self;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#<=> for (self: Comparable, Comparable): Int */
long VIRTUAL_core___core__Int8___core__kernel__Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
int8_t var2 /* : Int8 */;
int8_t var3 /* : Int8 */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Comparable to Int8 */;
var3 = ((struct instance_core__Int8*)p0)->value; /* autounbox from Comparable to Int8 */;
var1 = core___core__Int8___core__kernel__Comparable___60d_61d_62d(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#is_between for (self: Int8, Int8, Int8): Bool */
short int core___core__Int8___core__kernel__Comparable__is_between(int8_t self, int8_t p0, int8_t p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const char* var_class_name5;
int8_t var_c /* var c: Int8 */;
int8_t var_d /* var d: Int8 */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Int8> isa OTHER */
/* <p0:Int8> isa OTHER */
var1 = 1; /* easy <p0:Int8> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 177);
fatal_exit(1);
}
/* Covariant cast for argument 1 (d) <p1:Int8> isa OTHER */
/* <p1:Int8> isa OTHER */
var2 = 1; /* easy <p1:Int8> isa OTHER*/
if (unlikely(!var2)) {
var_class_name5 = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 177);
fatal_exit(1);
}
var_c = p0;
var_d = p1;
{
{ /* Inline fixed_ints#Int8#< (self,var_c) on <self:Int8> */
/* Covariant cast for argument 0 (i) <var_c:Int8> isa OTHER */
/* <var_c:Int8> isa OTHER */
var9 = 1; /* easy <var_c:Int8> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 119);
fatal_exit(1);
}
var13 = self < var_c;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
var6 = var_;
} else {
{
{ /* Inline fixed_ints#Int8#< (var_d,self) on <var_d:Int8> */
/* Covariant cast for argument 0 (i) <self:Int8> isa OTHER */
/* <self:Int8> isa OTHER */
var16 = 1; /* easy <self:Int8> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 119);
fatal_exit(1);
}
var20 = var_d < self;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var6 = var14;
}
if (var6){
var = 0;
goto RET_LABEL;
} else {
var = 1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#is_between for (self: Comparable, Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int8___core__kernel__Comparable__is_between(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int8_t var2 /* : Int8 */;
int8_t var3 /* : Int8 */;
int8_t var4 /* : Int8 */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Comparable to Int8 */;
var3 = ((struct instance_core__Int8*)p0)->value; /* autounbox from Comparable to Int8 */;
var4 = ((struct instance_core__Int8*)p1)->value; /* autounbox from Comparable to Int8 */;
var1 = core___core__Int8___core__kernel__Comparable__is_between(var2, var3, var4);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#max for (self: Int8, Int8): Int8 */
int8_t core___core__Int8___core__kernel__Comparable__max(int8_t self, int8_t p0) {
int8_t var /* : Int8 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int8_t var_other /* var other: Int8 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Int8> isa OTHER */
/* <p0:Int8> isa OTHER */
var1 = 1; /* easy <p0:Int8> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 186);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline fixed_ints#Int8#< (self,var_other) on <self:Int8> */
/* Covariant cast for argument 0 (i) <var_other:Int8> isa OTHER */
/* <var_other:Int8> isa OTHER */
var4 = 1; /* easy <var_other:Int8> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 119);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_other;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#max for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__Int8___core__kernel__Comparable__max(val* self, val* p0) {
val* var /* : Comparable */;
int8_t var1 /* : Int8 */;
int8_t var2 /* : Int8 */;
int8_t var3 /* : Int8 */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Comparable to Int8 */;
var3 = ((struct instance_core__Int8*)p0)->value; /* autounbox from Comparable to Int8 */;
var1 = core___core__Int8___core__kernel__Comparable__max(var2, var3);
var4 = BOX_core__Int8(var1); /* autobox from Int8 to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#min for (self: Int8, Int8): Int8 */
int8_t core___core__Int8___core__kernel__Comparable__min(int8_t self, int8_t p0) {
int8_t var /* : Int8 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int8_t var_c /* var c: Int8 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Int8> isa OTHER */
/* <p0:Int8> isa OTHER */
var1 = 1; /* easy <p0:Int8> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 195);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline fixed_ints#Int8#< (var_c,self) on <var_c:Int8> */
/* Covariant cast for argument 0 (i) <self:Int8> isa OTHER */
/* <self:Int8> isa OTHER */
var4 = 1; /* easy <self:Int8> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int8.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 119);
fatal_exit(1);
}
var8 = var_c < self;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_c;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#min for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__Int8___core__kernel__Comparable__min(val* self, val* p0) {
val* var /* : Comparable */;
int8_t var1 /* : Int8 */;
int8_t var2 /* : Int8 */;
int8_t var3 /* : Int8 */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Comparable to Int8 */;
var3 = ((struct instance_core__Int8*)p0)->value; /* autounbox from Comparable to Int8 */;
var1 = core___core__Int8___core__kernel__Comparable__min(var2, var3);
var4 = BOX_core__Int8(var1); /* autobox from Int8 to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#& for (self: Int8, Int8): Int8 */
int8_t core___core__Int8____38d(int8_t self, int8_t p0) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = self & p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#| for (self: Int8, Int8): Int8 */
int8_t core___core__Int8____124d(int8_t self, int8_t p0) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = self | p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#^ for (self: Int8, Int8): Int8 */
int8_t core___core__Int8____94d(int8_t self, int8_t p0) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = self ^ p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#unary ~ for (self: Int8): Int8 */
int8_t core___core__Int8___unary_32d_126d(int8_t self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = ~self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_s_len for (self: Int8): Int */
long core___core__Int8___to_s_len(int8_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__fixed_ints___Int8_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#native_to_s for (self: Int8, NativeString, Int) */
void core___core__Int8___native_to_s(int8_t self, char* p0, long p1) {
core__fixed_ints___Int8_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints#Int8#to_s for (self: Int8): String */
val* core___core__Int8___core__abstract_text__Object__to_s(int8_t self) {
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
val* var18 /* : FlatString */;
var1 = core___core__Int8___to_s_len(self);
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
core___core__Int8___native_to_s(self, var_ns, var11); /* Direct call fixed_ints#Int8#native_to_s on <self:Int8>*/
var18 = core__flat___NativeString___to_s_with_length(var_ns, var_nslen);
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int8#to_s for (self: Object): String */
val* VIRTUAL_core___core__Int8___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
int8_t var2 /* : Int8 */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Object to Int8 */;
var1 = core___core__Int8___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#successor for (self: Int16, Int): Int16 */
int16_t core___core__Int16___core__kernel__Discrete__successor(int16_t self, long p0) {
int16_t var /* : Int16 */;
long var_i /* var i: Int */;
int16_t var1 /* : Int16 */;
int16_t var3 /* : Int16 */;
int16_t var4 /* : Int16 */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int16_t var7 /* : Int16 */;
var_i = p0;
{
{ /* Inline fixed_ints#Int#to_i16 (var_i) on <var_i:Int> */
var3 = (int16_t)var_i;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline fixed_ints#Int16#+ (self,var1) on <self:Int16> */
/* Covariant cast for argument 0 (i) <var1:Int16> isa OTHER */
/* <var1:Int16> isa OTHER */
var6 = 1; /* easy <var1:Int16> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 268);
fatal_exit(1);
}
var7 = self + var1;
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
/* method fixed_ints#Int16#successor for (self: Discrete, Int): Discrete */
val* VIRTUAL_core___core__Int16___core__kernel__Discrete__successor(val* self, long p0) {
val* var /* : Discrete */;
int16_t var1 /* : Int16 */;
int16_t var2 /* : Int16 */;
val* var3 /* : Discrete */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Discrete to Int16 */;
var1 = core___core__Int16___core__kernel__Discrete__successor(var2, p0);
var3 = BOX_core__Int16(var1); /* autobox from Int16 to Discrete */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#predecessor for (self: Int16, Int): Int16 */
int16_t core___core__Int16___core__kernel__Discrete__predecessor(int16_t self, long p0) {
int16_t var /* : Int16 */;
long var_i /* var i: Int */;
int16_t var1 /* : Int16 */;
int16_t var3 /* : Int16 */;
int16_t var4 /* : Int16 */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int16_t var7 /* : Int16 */;
var_i = p0;
{
{ /* Inline fixed_ints#Int#to_i16 (var_i) on <var_i:Int> */
var3 = (int16_t)var_i;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline fixed_ints#Int16#- (self,var1) on <self:Int16> */
/* Covariant cast for argument 0 (i) <var1:Int16> isa OTHER */
/* <var1:Int16> isa OTHER */
var6 = 1; /* easy <var1:Int16> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 273);
fatal_exit(1);
}
var7 = self - var1;
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
/* method fixed_ints#Int16#predecessor for (self: Discrete, Int): Discrete */
val* VIRTUAL_core___core__Int16___core__kernel__Discrete__predecessor(val* self, long p0) {
val* var /* : Discrete */;
int16_t var1 /* : Int16 */;
int16_t var2 /* : Int16 */;
val* var3 /* : Discrete */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Discrete to Int16 */;
var1 = core___core__Int16___core__kernel__Discrete__predecessor(var2, p0);
var3 = BOX_core__Int16(var1); /* autobox from Int16 to Discrete */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#object_id for (self: Int16): Int */
long core___core__Int16___core__kernel__Object__object_id(int16_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#object_id for (self: Object): Int */
long VIRTUAL_core___core__Int16___core__kernel__Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
int16_t var3 /* : Int16 */;
long var4 /* : Int */;
{ /* Inline fixed_ints#Int16#object_id (self) on <self:Object(Int16)> */
var3 = ((struct instance_core__Int16*)self)->value; /* autounbox from Object to Int16 */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#hash for (self: Int16): Int */
long core___core__Int16___core__kernel__Object__hash(int16_t self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline fixed_ints#Int16#to_i (self) on <self:Int16> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#hash for (self: Object): Int */
long VIRTUAL_core___core__Int16___core__kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
int16_t var2 /* : Int16 */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Object to Int16 */;
var1 = core___core__Int16___core__kernel__Object__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#== for (self: Int16, nullable Object): Bool */
short int core___core__Int16___core__kernel__Object___61d_61d(int16_t self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int16_t var2 /* : Int16 */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__Int16)) {
var2 = ((struct instance_core__Int16*)p0)->value; /* autounbox from nullable Object to Int16 */;
var1 = var2 == self;
} else var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Int16___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline fixed_ints#Int16#== (self,p0) on <self:Object(Int16)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__Int16*)self)->value == ((struct instance_core__Int16*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#!= for (self: Int16, nullable Object): Bool */
short int core___core__Int16___core__kernel__Object___33d_61d(int16_t self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int16_t var2 /* : Int16 */;
short int var3 /* : Bool */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__Int16)) {
var2 = ((struct instance_core__Int16*)p0)->value; /* autounbox from nullable Object to Int16 */;
var1 = var2 == self;
} else var1 = 0;
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Int16___core__kernel__Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline fixed_ints#Int16#!= (self,p0) on <self:Object(Int16)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__Int16*)self)->value == ((struct instance_core__Int16*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#output for (self: Int16) */
void core___core__Int16___core__kernel__Object__output(int16_t self) {
printf("%"PRIi16 "\n", self);
RET_LABEL:;
}
/* method fixed_ints#Int16#output for (self: Object) */
void VIRTUAL_core___core__Int16___core__kernel__Object__output(val* self) {
int16_t var /* : Int16 */;
{ /* Inline fixed_ints#Int16#output (self) on <self:Object(Int16)> */
var = ((struct instance_core__Int16*)self)->value; /* autounbox from Object to Int16 */;
printf("%"PRIi16 "\n", var);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method fixed_ints#Int16#<= for (self: Int16, Int16): Bool */
short int core___core__Int16___core__kernel__Comparable___60d_61d(int16_t self, int16_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int16> isa OTHER */
/* <p0:Int16> isa OTHER */
var1 = 1; /* easy <p0:Int16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 264);
fatal_exit(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#<= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int16___core__kernel__Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int16_t var4 /* : Int16 */;
int16_t var5 /* : Int16 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#Int16#<= (self,p0) on <self:Comparable(Int16)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 264);
fatal_exit(1);
}
var4 = ((struct instance_core__Int16*)self)->value; /* autounbox from Comparable to Int16 */;
var5 = ((struct instance_core__Int16*)p0)->value; /* autounbox from Comparable to Int16 */;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#< for (self: Int16, Int16): Bool */
short int core___core__Int16___core__kernel__Comparable___60d(int16_t self, int16_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int16> isa OTHER */
/* <p0:Int16> isa OTHER */
var1 = 1; /* easy <p0:Int16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 265);
fatal_exit(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#< for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int16___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int16_t var4 /* : Int16 */;
int16_t var5 /* : Int16 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#Int16#< (self,p0) on <self:Comparable(Int16)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 265);
fatal_exit(1);
}
var4 = ((struct instance_core__Int16*)self)->value; /* autounbox from Comparable to Int16 */;
var5 = ((struct instance_core__Int16*)p0)->value; /* autounbox from Comparable to Int16 */;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#>= for (self: Int16, Int16): Bool */
short int core___core__Int16___core__kernel__Comparable___62d_61d(int16_t self, int16_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int16> isa OTHER */
/* <p0:Int16> isa OTHER */
var1 = 1; /* easy <p0:Int16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 266);
fatal_exit(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#>= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int16___core__kernel__Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int16_t var4 /* : Int16 */;
int16_t var5 /* : Int16 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#Int16#>= (self,p0) on <self:Comparable(Int16)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 266);
fatal_exit(1);
}
var4 = ((struct instance_core__Int16*)self)->value; /* autounbox from Comparable to Int16 */;
var5 = ((struct instance_core__Int16*)p0)->value; /* autounbox from Comparable to Int16 */;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#> for (self: Int16, Int16): Bool */
short int core___core__Int16___core__kernel__Comparable___62d(int16_t self, int16_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int16> isa OTHER */
/* <p0:Int16> isa OTHER */
var1 = 1; /* easy <p0:Int16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 267);
fatal_exit(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#> for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int16___core__kernel__Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int16_t var4 /* : Int16 */;
int16_t var5 /* : Int16 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#Int16#> (self,p0) on <self:Comparable(Int16)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 267);
fatal_exit(1);
}
var4 = ((struct instance_core__Int16*)self)->value; /* autounbox from Comparable to Int16 */;
var5 = ((struct instance_core__Int16*)p0)->value; /* autounbox from Comparable to Int16 */;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#+ for (self: Int16, Int16): Int16 */
int16_t core___core__Int16___core__kernel__Numeric___43d(int16_t self, int16_t p0) {
int16_t var /* : Int16 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int16_t var2 /* : Int16 */;
/* Covariant cast for argument 0 (i) <p0:Int16> isa OTHER */
/* <p0:Int16> isa OTHER */
var1 = 1; /* easy <p0:Int16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 268);
fatal_exit(1);
}
var2 = self + p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#+ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int16___core__kernel__Numeric___43d(val* self, val* p0) {
val* var /* : Numeric */;
int16_t var1 /* : Int16 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int16_t var4 /* : Int16 */;
int16_t var5 /* : Int16 */;
int16_t var6 /* : Int16 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#Int16#+ (self,p0) on <self:Numeric(Int16)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 268);
fatal_exit(1);
}
var4 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var5 = ((struct instance_core__Int16*)p0)->value; /* autounbox from Numeric to Int16 */;
var6 = var4 + var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Int16(var1); /* autobox from Int16 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#unary - for (self: Int16): Int16 */
int16_t core___core__Int16___core__kernel__Numeric__unary_32d_45d(int16_t self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#unary - for (self: Numeric): Numeric */
val* VIRTUAL_core___core__Int16___core__kernel__Numeric__unary_32d_45d(val* self) {
val* var /* : Numeric */;
int16_t var1 /* : Int16 */;
int16_t var3 /* : Int16 */;
int16_t var4 /* : Int16 */;
val* var5 /* : Numeric */;
{ /* Inline fixed_ints#Int16#unary - (self) on <self:Numeric(Int16)> */
var3 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_core__Int16(var1); /* autobox from Int16 to Numeric */
var = var5;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#- for (self: Int16, Int16): Int16 */
int16_t core___core__Int16___core__kernel__Numeric___45d(int16_t self, int16_t p0) {
int16_t var /* : Int16 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int16_t var2 /* : Int16 */;
/* Covariant cast for argument 0 (i) <p0:Int16> isa OTHER */
/* <p0:Int16> isa OTHER */
var1 = 1; /* easy <p0:Int16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 273);
fatal_exit(1);
}
var2 = self - p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#- for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int16___core__kernel__Numeric___45d(val* self, val* p0) {
val* var /* : Numeric */;
int16_t var1 /* : Int16 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int16_t var4 /* : Int16 */;
int16_t var5 /* : Int16 */;
int16_t var6 /* : Int16 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#Int16#- (self,p0) on <self:Numeric(Int16)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 273);
fatal_exit(1);
}
var4 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var5 = ((struct instance_core__Int16*)p0)->value; /* autounbox from Numeric to Int16 */;
var6 = var4 - var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Int16(var1); /* autobox from Int16 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#* for (self: Int16, Int16): Int16 */
int16_t core___core__Int16___core__kernel__Numeric___42d(int16_t self, int16_t p0) {
int16_t var /* : Int16 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int16_t var2 /* : Int16 */;
/* Covariant cast for argument 0 (i) <p0:Int16> isa OTHER */
/* <p0:Int16> isa OTHER */
var1 = 1; /* easy <p0:Int16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 274);
fatal_exit(1);
}
var2 = self * p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#* for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int16___core__kernel__Numeric___42d(val* self, val* p0) {
val* var /* : Numeric */;
int16_t var1 /* : Int16 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int16_t var4 /* : Int16 */;
int16_t var5 /* : Int16 */;
int16_t var6 /* : Int16 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#Int16#* (self,p0) on <self:Numeric(Int16)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 274);
fatal_exit(1);
}
var4 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var5 = ((struct instance_core__Int16*)p0)->value; /* autounbox from Numeric to Int16 */;
var6 = var4 * var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Int16(var1); /* autobox from Int16 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#/ for (self: Int16, Int16): Int16 */
int16_t core___core__Int16___core__kernel__Numeric___47d(int16_t self, int16_t p0) {
int16_t var /* : Int16 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int16_t var2 /* : Int16 */;
/* Covariant cast for argument 0 (i) <p0:Int16> isa OTHER */
/* <p0:Int16> isa OTHER */
var1 = 1; /* easy <p0:Int16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 275);
fatal_exit(1);
}
var2 = self / p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#/ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int16___core__kernel__Numeric___47d(val* self, val* p0) {
val* var /* : Numeric */;
int16_t var1 /* : Int16 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int16_t var4 /* : Int16 */;
int16_t var5 /* : Int16 */;
int16_t var6 /* : Int16 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#Int16#/ (self,p0) on <self:Numeric(Int16)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 275);
fatal_exit(1);
}
var4 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var5 = ((struct instance_core__Int16*)p0)->value; /* autounbox from Numeric to Int16 */;
var6 = var4 / var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Int16(var1); /* autobox from Int16 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#ascii for (self: Int16): Char */
uint32_t core___core__Int16___ascii(int16_t self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = core__fixed_ints___Int16_ascii___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#% for (self: Int16, Int16): Int16 */
int16_t core___core__Int16____37d(int16_t self, int16_t p0) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = self % p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#zero for (self: Int16): Int16 */
int16_t core___core__Int16___core__kernel__Numeric__zero(int16_t self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
int16_t var3 /* : Int16 */;
{
{ /* Inline fixed_ints#Int#to_i16 (0l) on <0l:Int> */
var3 = (int16_t)0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#zero for (self: Numeric): Numeric */
val* VIRTUAL_core___core__Int16___core__kernel__Numeric__zero(val* self) {
val* var /* : Numeric */;
int16_t var1 /* : Int16 */;
int16_t var2 /* : Int16 */;
val* var3 /* : Numeric */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var1 = core___core__Int16___core__kernel__Numeric__zero(var2);
var3 = BOX_core__Int16(var1); /* autobox from Int16 to Numeric */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#value_of for (self: Int16, Numeric): Int16 */
int16_t core___core__Int16___core__kernel__Numeric__value_of(int16_t self, val* p0) {
int16_t var /* : Int16 */;
val* var_val /* var val: Numeric */;
int16_t var1 /* : Int16 */;
var_val = p0;
{
var1 = ((int16_t(*)(val* self))((((long)var_val&3)?class_info[((long)var_val&3)]:var_val->class)->vft[COLOR_core__fixed_ints__Numeric__to_i16]))(var_val); /* to_i16 on <var_val:Numeric>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#value_of for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int16___core__kernel__Numeric__value_of(val* self, val* p0) {
val* var /* : Numeric */;
int16_t var1 /* : Int16 */;
int16_t var2 /* : Int16 */;
val* var3 /* : Numeric */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var1 = core___core__Int16___core__kernel__Numeric__value_of(var2, p0);
var3 = BOX_core__Int16(var1); /* autobox from Int16 to Numeric */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#<< for (self: Int16, Int): Int16 */
int16_t core___core__Int16____60d_60d(int16_t self, long p0) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = self << p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#>> for (self: Int16, Int): Int16 */
int16_t core___core__Int16____62d_62d(int16_t self, long p0) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = self >> p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_i for (self: Int16): Int */
long core___core__Int16___core__kernel__Numeric__to_i(int16_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_i for (self: Numeric): Int */
long VIRTUAL_core___core__Int16___core__kernel__Numeric__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
int16_t var3 /* : Int16 */;
long var4 /* : Int */;
{ /* Inline fixed_ints#Int16#to_i (self) on <self:Numeric(Int16)> */
var3 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_f for (self: Int16): Float */
double core___core__Int16___core__kernel__Numeric__to_f(int16_t self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_f for (self: Numeric): Float */
double VIRTUAL_core___core__Int16___core__kernel__Numeric__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
int16_t var3 /* : Int16 */;
double var4 /* : Float */;
{ /* Inline fixed_ints#Int16#to_f (self) on <self:Numeric(Int16)> */
var3 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_b for (self: Int16): Byte */
unsigned char core___core__Int16___core__kernel__Numeric__to_b(int16_t self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = (unsigned char)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_b for (self: Numeric): Byte */
unsigned char VIRTUAL_core___core__Int16___core__kernel__Numeric__to_b(val* self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
int16_t var3 /* : Int16 */;
unsigned char var4 /* : Byte */;
{ /* Inline fixed_ints#Int16#to_b (self) on <self:Numeric(Int16)> */
var3 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var4 = (unsigned char)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_i8 for (self: Int16): Int8 */
int8_t core___core__Int16___Numeric__to_i8(int16_t self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = (int8_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_i8 for (self: Numeric): Int8 */
int8_t VIRTUAL_core___core__Int16___Numeric__to_i8(val* self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
int16_t var3 /* : Int16 */;
int8_t var4 /* : Int8 */;
{ /* Inline fixed_ints#Int16#to_i8 (self) on <self:Numeric(Int16)> */
var3 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var4 = (int8_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_i16 for (self: Int16): Int16 */
int16_t core___core__Int16___Numeric__to_i16(int16_t self) {
int16_t var /* : Int16 */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_i16 for (self: Numeric): Int16 */
int16_t VIRTUAL_core___core__Int16___Numeric__to_i16(val* self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
int16_t var2 /* : Int16 */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var1 = core___core__Int16___Numeric__to_i16(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_u16 for (self: Int16): UInt16 */
uint16_t core___core__Int16___Numeric__to_u16(int16_t self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = (uint16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_u16 for (self: Numeric): UInt16 */
uint16_t VIRTUAL_core___core__Int16___Numeric__to_u16(val* self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
int16_t var3 /* : Int16 */;
uint16_t var4 /* : UInt16 */;
{ /* Inline fixed_ints#Int16#to_u16 (self) on <self:Numeric(Int16)> */
var3 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var4 = (uint16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_i32 for (self: Int16): Int32 */
int32_t core___core__Int16___Numeric__to_i32(int16_t self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = (int32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_i32 for (self: Numeric): Int32 */
int32_t VIRTUAL_core___core__Int16___Numeric__to_i32(val* self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
int16_t var3 /* : Int16 */;
int32_t var4 /* : Int32 */;
{ /* Inline fixed_ints#Int16#to_i32 (self) on <self:Numeric(Int16)> */
var3 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var4 = (int32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_u32 for (self: Int16): UInt32 */
uint32_t core___core__Int16___Numeric__to_u32(int16_t self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = (uint32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_u32 for (self: Numeric): UInt32 */
uint32_t VIRTUAL_core___core__Int16___Numeric__to_u32(val* self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
int16_t var3 /* : Int16 */;
uint32_t var4 /* : UInt32 */;
{ /* Inline fixed_ints#Int16#to_u32 (self) on <self:Numeric(Int16)> */
var3 = ((struct instance_core__Int16*)self)->value; /* autounbox from Numeric to Int16 */;
var4 = (uint32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#distance for (self: Int16, Int16): Int */
long core___core__Int16___core__kernel__Discrete__distance(int16_t self, int16_t p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int16_t var_i /* var i: Int16 */;
int16_t var2 /* : Int16 */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
int16_t var8 /* : Int16 */;
long var9 /* : Int */;
long var11 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int16> isa OTHER */
/* <p0:Int16> isa OTHER */
var1 = 1; /* easy <p0:Int16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 310);
fatal_exit(1);
}
var_i = p0;
{
{ /* Inline fixed_ints#Int16#- (self,var_i) on <self:Int16> */
/* Covariant cast for argument 0 (i) <var_i:Int16> isa OTHER */
/* <var_i:Int16> isa OTHER */
var4 = 1; /* easy <var_i:Int16> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 273);
fatal_exit(1);
}
var8 = self - var_i;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline fixed_ints#Int16#to_i (var2) on <var2:Int16> */
var11 = (long)var2;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#distance for (self: Discrete, Discrete): Int */
long VIRTUAL_core___core__Int16___core__kernel__Discrete__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
int16_t var2 /* : Int16 */;
int16_t var3 /* : Int16 */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Discrete to Int16 */;
var3 = ((struct instance_core__Int16*)p0)->value; /* autounbox from Discrete to Int16 */;
var1 = core___core__Int16___core__kernel__Discrete__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#<=> for (self: Int16, Int16): Int */
long core___core__Int16___core__kernel__Comparable___60d_61d_62d(int16_t self, int16_t p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int16_t var_other /* var other: Int16 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Int16> isa OTHER */
/* <p0:Int16> isa OTHER */
var1 = 1; /* easy <p0:Int16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 312);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline fixed_ints#Int16#< (self,var_other) on <self:Int16> */
/* Covariant cast for argument 0 (i) <var_other:Int16> isa OTHER */
/* <var_other:Int16> isa OTHER */
var4 = 1; /* easy <var_other:Int16> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 265);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var11 = -1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
{
{ /* Inline fixed_ints#Int16#< (var_other,self) on <var_other:Int16> */
/* Covariant cast for argument 0 (i) <self:Int16> isa OTHER */
/* <self:Int16> isa OTHER */
var14 = 1; /* easy <self:Int16> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 265);
fatal_exit(1);
}
var18 = var_other < self;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#<=> for (self: Comparable, Comparable): Int */
long VIRTUAL_core___core__Int16___core__kernel__Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
int16_t var2 /* : Int16 */;
int16_t var3 /* : Int16 */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Comparable to Int16 */;
var3 = ((struct instance_core__Int16*)p0)->value; /* autounbox from Comparable to Int16 */;
var1 = core___core__Int16___core__kernel__Comparable___60d_61d_62d(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#is_between for (self: Int16, Int16, Int16): Bool */
short int core___core__Int16___core__kernel__Comparable__is_between(int16_t self, int16_t p0, int16_t p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const char* var_class_name5;
int16_t var_c /* var c: Int16 */;
int16_t var_d /* var d: Int16 */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Int16> isa OTHER */
/* <p0:Int16> isa OTHER */
var1 = 1; /* easy <p0:Int16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 323);
fatal_exit(1);
}
/* Covariant cast for argument 1 (d) <p1:Int16> isa OTHER */
/* <p1:Int16> isa OTHER */
var2 = 1; /* easy <p1:Int16> isa OTHER*/
if (unlikely(!var2)) {
var_class_name5 = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 323);
fatal_exit(1);
}
var_c = p0;
var_d = p1;
{
{ /* Inline fixed_ints#Int16#< (self,var_c) on <self:Int16> */
/* Covariant cast for argument 0 (i) <var_c:Int16> isa OTHER */
/* <var_c:Int16> isa OTHER */
var9 = 1; /* easy <var_c:Int16> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 265);
fatal_exit(1);
}
var13 = self < var_c;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
var6 = var_;
} else {
{
{ /* Inline fixed_ints#Int16#< (var_d,self) on <var_d:Int16> */
/* Covariant cast for argument 0 (i) <self:Int16> isa OTHER */
/* <self:Int16> isa OTHER */
var16 = 1; /* easy <self:Int16> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 265);
fatal_exit(1);
}
var20 = var_d < self;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var6 = var14;
}
if (var6){
var = 0;
goto RET_LABEL;
} else {
var = 1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#is_between for (self: Comparable, Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int16___core__kernel__Comparable__is_between(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int16_t var2 /* : Int16 */;
int16_t var3 /* : Int16 */;
int16_t var4 /* : Int16 */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Comparable to Int16 */;
var3 = ((struct instance_core__Int16*)p0)->value; /* autounbox from Comparable to Int16 */;
var4 = ((struct instance_core__Int16*)p1)->value; /* autounbox from Comparable to Int16 */;
var1 = core___core__Int16___core__kernel__Comparable__is_between(var2, var3, var4);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#max for (self: Int16, Int16): Int16 */
int16_t core___core__Int16___core__kernel__Comparable__max(int16_t self, int16_t p0) {
int16_t var /* : Int16 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int16_t var_other /* var other: Int16 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Int16> isa OTHER */
/* <p0:Int16> isa OTHER */
var1 = 1; /* easy <p0:Int16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 332);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline fixed_ints#Int16#< (self,var_other) on <self:Int16> */
/* Covariant cast for argument 0 (i) <var_other:Int16> isa OTHER */
/* <var_other:Int16> isa OTHER */
var4 = 1; /* easy <var_other:Int16> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 265);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_other;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#max for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__Int16___core__kernel__Comparable__max(val* self, val* p0) {
val* var /* : Comparable */;
int16_t var1 /* : Int16 */;
int16_t var2 /* : Int16 */;
int16_t var3 /* : Int16 */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Comparable to Int16 */;
var3 = ((struct instance_core__Int16*)p0)->value; /* autounbox from Comparable to Int16 */;
var1 = core___core__Int16___core__kernel__Comparable__max(var2, var3);
var4 = BOX_core__Int16(var1); /* autobox from Int16 to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#min for (self: Int16, Int16): Int16 */
int16_t core___core__Int16___core__kernel__Comparable__min(int16_t self, int16_t p0) {
int16_t var /* : Int16 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int16_t var_c /* var c: Int16 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Int16> isa OTHER */
/* <p0:Int16> isa OTHER */
var1 = 1; /* easy <p0:Int16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 341);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline fixed_ints#Int16#< (var_c,self) on <var_c:Int16> */
/* Covariant cast for argument 0 (i) <self:Int16> isa OTHER */
/* <self:Int16> isa OTHER */
var4 = 1; /* easy <self:Int16> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 265);
fatal_exit(1);
}
var8 = var_c < self;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_c;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#min for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__Int16___core__kernel__Comparable__min(val* self, val* p0) {
val* var /* : Comparable */;
int16_t var1 /* : Int16 */;
int16_t var2 /* : Int16 */;
int16_t var3 /* : Int16 */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Comparable to Int16 */;
var3 = ((struct instance_core__Int16*)p0)->value; /* autounbox from Comparable to Int16 */;
var1 = core___core__Int16___core__kernel__Comparable__min(var2, var3);
var4 = BOX_core__Int16(var1); /* autobox from Int16 to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#& for (self: Int16, Int16): Int16 */
int16_t core___core__Int16____38d(int16_t self, int16_t p0) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = self & p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#| for (self: Int16, Int16): Int16 */
int16_t core___core__Int16____124d(int16_t self, int16_t p0) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = self | p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#^ for (self: Int16, Int16): Int16 */
int16_t core___core__Int16____94d(int16_t self, int16_t p0) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = self ^ p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#unary ~ for (self: Int16): Int16 */
int16_t core___core__Int16___unary_32d_126d(int16_t self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = ~self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_s_len for (self: Int16): Int */
long core___core__Int16___to_s_len(int16_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__fixed_ints___Int16_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#native_to_s for (self: Int16, NativeString, Int) */
void core___core__Int16___native_to_s(int16_t self, char* p0, long p1) {
core__fixed_ints___Int16_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints#Int16#to_s for (self: Int16): String */
val* core___core__Int16___core__abstract_text__Object__to_s(int16_t self) {
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
val* var18 /* : FlatString */;
var1 = core___core__Int16___to_s_len(self);
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
core___core__Int16___native_to_s(self, var_ns, var11); /* Direct call fixed_ints#Int16#native_to_s on <self:Int16>*/
var18 = core__flat___NativeString___to_s_with_length(var_ns, var_nslen);
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int16#to_s for (self: Object): String */
val* VIRTUAL_core___core__Int16___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
int16_t var2 /* : Int16 */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Object to Int16 */;
var1 = core___core__Int16___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#successor for (self: UInt16, Int): UInt16 */
uint16_t core___core__UInt16___core__kernel__Discrete__successor(uint16_t self, long p0) {
uint16_t var /* : UInt16 */;
long var_i /* var i: Int */;
uint16_t var1 /* : UInt16 */;
uint16_t var3 /* : UInt16 */;
uint16_t var4 /* : UInt16 */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint16_t var7 /* : UInt16 */;
var_i = p0;
{
{ /* Inline fixed_ints#Int#to_u16 (var_i) on <var_i:Int> */
var3 = (uint16_t)var_i;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline fixed_ints#UInt16#+ (self,var1) on <self:UInt16> */
/* Covariant cast for argument 0 (i) <var1:UInt16> isa OTHER */
/* <var1:UInt16> isa OTHER */
var6 = 1; /* easy <var1:UInt16> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 414);
fatal_exit(1);
}
var7 = self + var1;
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
/* method fixed_ints#UInt16#successor for (self: Discrete, Int): Discrete */
val* VIRTUAL_core___core__UInt16___core__kernel__Discrete__successor(val* self, long p0) {
val* var /* : Discrete */;
uint16_t var1 /* : UInt16 */;
uint16_t var2 /* : UInt16 */;
val* var3 /* : Discrete */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Discrete to UInt16 */;
var1 = core___core__UInt16___core__kernel__Discrete__successor(var2, p0);
var3 = BOX_core__UInt16(var1); /* autobox from UInt16 to Discrete */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#predecessor for (self: UInt16, Int): UInt16 */
uint16_t core___core__UInt16___core__kernel__Discrete__predecessor(uint16_t self, long p0) {
uint16_t var /* : UInt16 */;
long var_i /* var i: Int */;
uint16_t var1 /* : UInt16 */;
uint16_t var3 /* : UInt16 */;
uint16_t var4 /* : UInt16 */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint16_t var7 /* : UInt16 */;
var_i = p0;
{
{ /* Inline fixed_ints#Int#to_u16 (var_i) on <var_i:Int> */
var3 = (uint16_t)var_i;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline fixed_ints#UInt16#- (self,var1) on <self:UInt16> */
/* Covariant cast for argument 0 (i) <var1:UInt16> isa OTHER */
/* <var1:UInt16> isa OTHER */
var6 = 1; /* easy <var1:UInt16> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 419);
fatal_exit(1);
}
var7 = self - var1;
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
/* method fixed_ints#UInt16#predecessor for (self: Discrete, Int): Discrete */
val* VIRTUAL_core___core__UInt16___core__kernel__Discrete__predecessor(val* self, long p0) {
val* var /* : Discrete */;
uint16_t var1 /* : UInt16 */;
uint16_t var2 /* : UInt16 */;
val* var3 /* : Discrete */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Discrete to UInt16 */;
var1 = core___core__UInt16___core__kernel__Discrete__predecessor(var2, p0);
var3 = BOX_core__UInt16(var1); /* autobox from UInt16 to Discrete */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#object_id for (self: UInt16): Int */
long core___core__UInt16___core__kernel__Object__object_id(uint16_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#object_id for (self: Object): Int */
long VIRTUAL_core___core__UInt16___core__kernel__Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
uint16_t var3 /* : UInt16 */;
long var4 /* : Int */;
{ /* Inline fixed_ints#UInt16#object_id (self) on <self:Object(UInt16)> */
var3 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Object to UInt16 */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#hash for (self: UInt16): Int */
long core___core__UInt16___core__kernel__Object__hash(uint16_t self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline fixed_ints#UInt16#to_i (self) on <self:UInt16> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#hash for (self: Object): Int */
long VIRTUAL_core___core__UInt16___core__kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
uint16_t var2 /* : UInt16 */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Object to UInt16 */;
var1 = core___core__UInt16___core__kernel__Object__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#== for (self: UInt16, nullable Object): Bool */
short int core___core__UInt16___core__kernel__Object___61d_61d(uint16_t self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
uint16_t var2 /* : UInt16 */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__UInt16)) {
var2 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from nullable Object to UInt16 */;
var1 = var2 == self;
} else var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__UInt16___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline fixed_ints#UInt16#== (self,p0) on <self:Object(UInt16)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__UInt16*)self)->value == ((struct instance_core__UInt16*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#!= for (self: UInt16, nullable Object): Bool */
short int core___core__UInt16___core__kernel__Object___33d_61d(uint16_t self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
uint16_t var2 /* : UInt16 */;
short int var3 /* : Bool */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__UInt16)) {
var2 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from nullable Object to UInt16 */;
var1 = var2 == self;
} else var1 = 0;
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__UInt16___core__kernel__Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline fixed_ints#UInt16#!= (self,p0) on <self:Object(UInt16)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__UInt16*)self)->value == ((struct instance_core__UInt16*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#output for (self: UInt16) */
void core___core__UInt16___core__kernel__Object__output(uint16_t self) {
printf("%"PRIu16 "\n", self);
RET_LABEL:;
}
/* method fixed_ints#UInt16#output for (self: Object) */
void VIRTUAL_core___core__UInt16___core__kernel__Object__output(val* self) {
uint16_t var /* : UInt16 */;
{ /* Inline fixed_ints#UInt16#output (self) on <self:Object(UInt16)> */
var = ((struct instance_core__UInt16*)self)->value; /* autounbox from Object to UInt16 */;
printf("%"PRIu16 "\n", var);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method fixed_ints#UInt16#<= for (self: UInt16, UInt16): Bool */
short int core___core__UInt16___core__kernel__Comparable___60d_61d(uint16_t self, uint16_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:UInt16> isa OTHER */
/* <p0:UInt16> isa OTHER */
var1 = 1; /* easy <p0:UInt16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 410);
fatal_exit(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#<= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__UInt16___core__kernel__Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint16_t var4 /* : UInt16 */;
uint16_t var5 /* : UInt16 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#UInt16#<= (self,p0) on <self:Comparable(UInt16)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 410);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Comparable to UInt16 */;
var5 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from Comparable to UInt16 */;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#< for (self: UInt16, UInt16): Bool */
short int core___core__UInt16___core__kernel__Comparable___60d(uint16_t self, uint16_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:UInt16> isa OTHER */
/* <p0:UInt16> isa OTHER */
var1 = 1; /* easy <p0:UInt16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 411);
fatal_exit(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#< for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__UInt16___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint16_t var4 /* : UInt16 */;
uint16_t var5 /* : UInt16 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#UInt16#< (self,p0) on <self:Comparable(UInt16)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 411);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Comparable to UInt16 */;
var5 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from Comparable to UInt16 */;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#>= for (self: UInt16, UInt16): Bool */
short int core___core__UInt16___core__kernel__Comparable___62d_61d(uint16_t self, uint16_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:UInt16> isa OTHER */
/* <p0:UInt16> isa OTHER */
var1 = 1; /* easy <p0:UInt16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 412);
fatal_exit(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#>= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__UInt16___core__kernel__Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint16_t var4 /* : UInt16 */;
uint16_t var5 /* : UInt16 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#UInt16#>= (self,p0) on <self:Comparable(UInt16)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 412);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Comparable to UInt16 */;
var5 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from Comparable to UInt16 */;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#> for (self: UInt16, UInt16): Bool */
short int core___core__UInt16___core__kernel__Comparable___62d(uint16_t self, uint16_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:UInt16> isa OTHER */
/* <p0:UInt16> isa OTHER */
var1 = 1; /* easy <p0:UInt16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 413);
fatal_exit(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#> for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__UInt16___core__kernel__Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint16_t var4 /* : UInt16 */;
uint16_t var5 /* : UInt16 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#UInt16#> (self,p0) on <self:Comparable(UInt16)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 413);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Comparable to UInt16 */;
var5 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from Comparable to UInt16 */;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#+ for (self: UInt16, UInt16): UInt16 */
uint16_t core___core__UInt16___core__kernel__Numeric___43d(uint16_t self, uint16_t p0) {
uint16_t var /* : UInt16 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint16_t var2 /* : UInt16 */;
/* Covariant cast for argument 0 (i) <p0:UInt16> isa OTHER */
/* <p0:UInt16> isa OTHER */
var1 = 1; /* easy <p0:UInt16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 414);
fatal_exit(1);
}
var2 = self + p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#+ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__UInt16___core__kernel__Numeric___43d(val* self, val* p0) {
val* var /* : Numeric */;
uint16_t var1 /* : UInt16 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint16_t var4 /* : UInt16 */;
uint16_t var5 /* : UInt16 */;
uint16_t var6 /* : UInt16 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#UInt16#+ (self,p0) on <self:Numeric(UInt16)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 414);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var5 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from Numeric to UInt16 */;
var6 = var4 + var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__UInt16(var1); /* autobox from UInt16 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#unary - for (self: UInt16): UInt16 */
uint16_t core___core__UInt16___core__kernel__Numeric__unary_32d_45d(uint16_t self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#unary - for (self: Numeric): Numeric */
val* VIRTUAL_core___core__UInt16___core__kernel__Numeric__unary_32d_45d(val* self) {
val* var /* : Numeric */;
uint16_t var1 /* : UInt16 */;
uint16_t var3 /* : UInt16 */;
uint16_t var4 /* : UInt16 */;
val* var5 /* : Numeric */;
{ /* Inline fixed_ints#UInt16#unary - (self) on <self:Numeric(UInt16)> */
var3 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_core__UInt16(var1); /* autobox from UInt16 to Numeric */
var = var5;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#- for (self: UInt16, UInt16): UInt16 */
uint16_t core___core__UInt16___core__kernel__Numeric___45d(uint16_t self, uint16_t p0) {
uint16_t var /* : UInt16 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint16_t var2 /* : UInt16 */;
/* Covariant cast for argument 0 (i) <p0:UInt16> isa OTHER */
/* <p0:UInt16> isa OTHER */
var1 = 1; /* easy <p0:UInt16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 419);
fatal_exit(1);
}
var2 = self - p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#- for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__UInt16___core__kernel__Numeric___45d(val* self, val* p0) {
val* var /* : Numeric */;
uint16_t var1 /* : UInt16 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint16_t var4 /* : UInt16 */;
uint16_t var5 /* : UInt16 */;
uint16_t var6 /* : UInt16 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#UInt16#- (self,p0) on <self:Numeric(UInt16)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 419);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var5 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from Numeric to UInt16 */;
var6 = var4 - var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__UInt16(var1); /* autobox from UInt16 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#* for (self: UInt16, UInt16): UInt16 */
uint16_t core___core__UInt16___core__kernel__Numeric___42d(uint16_t self, uint16_t p0) {
uint16_t var /* : UInt16 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint16_t var2 /* : UInt16 */;
/* Covariant cast for argument 0 (i) <p0:UInt16> isa OTHER */
/* <p0:UInt16> isa OTHER */
var1 = 1; /* easy <p0:UInt16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 420);
fatal_exit(1);
}
var2 = self * p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#* for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__UInt16___core__kernel__Numeric___42d(val* self, val* p0) {
val* var /* : Numeric */;
uint16_t var1 /* : UInt16 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint16_t var4 /* : UInt16 */;
uint16_t var5 /* : UInt16 */;
uint16_t var6 /* : UInt16 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#UInt16#* (self,p0) on <self:Numeric(UInt16)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 420);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var5 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from Numeric to UInt16 */;
var6 = var4 * var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__UInt16(var1); /* autobox from UInt16 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#/ for (self: UInt16, UInt16): UInt16 */
uint16_t core___core__UInt16___core__kernel__Numeric___47d(uint16_t self, uint16_t p0) {
uint16_t var /* : UInt16 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint16_t var2 /* : UInt16 */;
/* Covariant cast for argument 0 (i) <p0:UInt16> isa OTHER */
/* <p0:UInt16> isa OTHER */
var1 = 1; /* easy <p0:UInt16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 421);
fatal_exit(1);
}
var2 = self / p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#/ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__UInt16___core__kernel__Numeric___47d(val* self, val* p0) {
val* var /* : Numeric */;
uint16_t var1 /* : UInt16 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint16_t var4 /* : UInt16 */;
uint16_t var5 /* : UInt16 */;
uint16_t var6 /* : UInt16 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#UInt16#/ (self,p0) on <self:Numeric(UInt16)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 421);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var5 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from Numeric to UInt16 */;
var6 = var4 / var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__UInt16(var1); /* autobox from UInt16 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#% for (self: UInt16, UInt16): UInt16 */
uint16_t core___core__UInt16____37d(uint16_t self, uint16_t p0) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = self % p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#zero for (self: UInt16): UInt16 */
uint16_t core___core__UInt16___core__kernel__Numeric__zero(uint16_t self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
uint16_t var3 /* : UInt16 */;
{
{ /* Inline fixed_ints#Int#to_u16 (0l) on <0l:Int> */
var3 = (uint16_t)0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#zero for (self: Numeric): Numeric */
val* VIRTUAL_core___core__UInt16___core__kernel__Numeric__zero(val* self) {
val* var /* : Numeric */;
uint16_t var1 /* : UInt16 */;
uint16_t var2 /* : UInt16 */;
val* var3 /* : Numeric */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var1 = core___core__UInt16___core__kernel__Numeric__zero(var2);
var3 = BOX_core__UInt16(var1); /* autobox from UInt16 to Numeric */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#value_of for (self: UInt16, Numeric): UInt16 */
uint16_t core___core__UInt16___core__kernel__Numeric__value_of(uint16_t self, val* p0) {
uint16_t var /* : UInt16 */;
val* var_val /* var val: Numeric */;
uint16_t var1 /* : UInt16 */;
var_val = p0;
{
var1 = ((uint16_t(*)(val* self))((((long)var_val&3)?class_info[((long)var_val&3)]:var_val->class)->vft[COLOR_core__fixed_ints__Numeric__to_u16]))(var_val); /* to_u16 on <var_val:Numeric>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#value_of for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__UInt16___core__kernel__Numeric__value_of(val* self, val* p0) {
val* var /* : Numeric */;
uint16_t var1 /* : UInt16 */;
uint16_t var2 /* : UInt16 */;
val* var3 /* : Numeric */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var1 = core___core__UInt16___core__kernel__Numeric__value_of(var2, p0);
var3 = BOX_core__UInt16(var1); /* autobox from UInt16 to Numeric */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#ascii for (self: UInt16): Char */
uint32_t core___core__UInt16___ascii(uint16_t self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = core__fixed_ints___UInt16_ascii___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#<< for (self: UInt16, Int): UInt16 */
uint16_t core___core__UInt16____60d_60d(uint16_t self, long p0) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = self << p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#>> for (self: UInt16, Int): UInt16 */
uint16_t core___core__UInt16____62d_62d(uint16_t self, long p0) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = self >> p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_i for (self: UInt16): Int */
long core___core__UInt16___core__kernel__Numeric__to_i(uint16_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_i for (self: Numeric): Int */
long VIRTUAL_core___core__UInt16___core__kernel__Numeric__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
uint16_t var3 /* : UInt16 */;
long var4 /* : Int */;
{ /* Inline fixed_ints#UInt16#to_i (self) on <self:Numeric(UInt16)> */
var3 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_f for (self: UInt16): Float */
double core___core__UInt16___core__kernel__Numeric__to_f(uint16_t self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_f for (self: Numeric): Float */
double VIRTUAL_core___core__UInt16___core__kernel__Numeric__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
uint16_t var3 /* : UInt16 */;
double var4 /* : Float */;
{ /* Inline fixed_ints#UInt16#to_f (self) on <self:Numeric(UInt16)> */
var3 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_b for (self: UInt16): Byte */
unsigned char core___core__UInt16___core__kernel__Numeric__to_b(uint16_t self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = (unsigned char)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_b for (self: Numeric): Byte */
unsigned char VIRTUAL_core___core__UInt16___core__kernel__Numeric__to_b(val* self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
uint16_t var3 /* : UInt16 */;
unsigned char var4 /* : Byte */;
{ /* Inline fixed_ints#UInt16#to_b (self) on <self:Numeric(UInt16)> */
var3 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var4 = (unsigned char)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_i8 for (self: UInt16): Int8 */
int8_t core___core__UInt16___Numeric__to_i8(uint16_t self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = (int8_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_i8 for (self: Numeric): Int8 */
int8_t VIRTUAL_core___core__UInt16___Numeric__to_i8(val* self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
uint16_t var3 /* : UInt16 */;
int8_t var4 /* : Int8 */;
{ /* Inline fixed_ints#UInt16#to_i8 (self) on <self:Numeric(UInt16)> */
var3 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var4 = (int8_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_i16 for (self: UInt16): Int16 */
int16_t core___core__UInt16___Numeric__to_i16(uint16_t self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = (int16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_i16 for (self: Numeric): Int16 */
int16_t VIRTUAL_core___core__UInt16___Numeric__to_i16(val* self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
uint16_t var3 /* : UInt16 */;
int16_t var4 /* : Int16 */;
{ /* Inline fixed_ints#UInt16#to_i16 (self) on <self:Numeric(UInt16)> */
var3 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var4 = (int16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_u16 for (self: UInt16): UInt16 */
uint16_t core___core__UInt16___Numeric__to_u16(uint16_t self) {
uint16_t var /* : UInt16 */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_u16 for (self: Numeric): UInt16 */
uint16_t VIRTUAL_core___core__UInt16___Numeric__to_u16(val* self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
uint16_t var2 /* : UInt16 */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var1 = core___core__UInt16___Numeric__to_u16(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_i32 for (self: UInt16): Int32 */
int32_t core___core__UInt16___Numeric__to_i32(uint16_t self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = (int32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_i32 for (self: Numeric): Int32 */
int32_t VIRTUAL_core___core__UInt16___Numeric__to_i32(val* self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
uint16_t var3 /* : UInt16 */;
int32_t var4 /* : Int32 */;
{ /* Inline fixed_ints#UInt16#to_i32 (self) on <self:Numeric(UInt16)> */
var3 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var4 = (int32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_u32 for (self: UInt16): UInt32 */
uint32_t core___core__UInt16___Numeric__to_u32(uint16_t self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = (uint32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_u32 for (self: Numeric): UInt32 */
uint32_t VIRTUAL_core___core__UInt16___Numeric__to_u32(val* self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
uint16_t var3 /* : UInt16 */;
uint32_t var4 /* : UInt32 */;
{ /* Inline fixed_ints#UInt16#to_u32 (self) on <self:Numeric(UInt16)> */
var3 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Numeric to UInt16 */;
var4 = (uint32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#distance for (self: UInt16, UInt16): Int */
long core___core__UInt16___core__kernel__Discrete__distance(uint16_t self, uint16_t p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint16_t var_i /* var i: UInt16 */;
uint16_t var2 /* : UInt16 */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
uint16_t var8 /* : UInt16 */;
long var9 /* : Int */;
long var11 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:UInt16> isa OTHER */
/* <p0:UInt16> isa OTHER */
var1 = 1; /* easy <p0:UInt16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 456);
fatal_exit(1);
}
var_i = p0;
{
{ /* Inline fixed_ints#UInt16#- (self,var_i) on <self:UInt16> */
/* Covariant cast for argument 0 (i) <var_i:UInt16> isa OTHER */
/* <var_i:UInt16> isa OTHER */
var4 = 1; /* easy <var_i:UInt16> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 419);
fatal_exit(1);
}
var8 = self - var_i;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline fixed_ints#UInt16#to_i (var2) on <var2:UInt16> */
var11 = (long)var2;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#distance for (self: Discrete, Discrete): Int */
long VIRTUAL_core___core__UInt16___core__kernel__Discrete__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
uint16_t var2 /* : UInt16 */;
uint16_t var3 /* : UInt16 */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Discrete to UInt16 */;
var3 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from Discrete to UInt16 */;
var1 = core___core__UInt16___core__kernel__Discrete__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#<=> for (self: UInt16, UInt16): Int */
long core___core__UInt16___core__kernel__Comparable___60d_61d_62d(uint16_t self, uint16_t p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint16_t var_other /* var other: UInt16 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:UInt16> isa OTHER */
/* <p0:UInt16> isa OTHER */
var1 = 1; /* easy <p0:UInt16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 458);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline fixed_ints#UInt16#< (self,var_other) on <self:UInt16> */
/* Covariant cast for argument 0 (i) <var_other:UInt16> isa OTHER */
/* <var_other:UInt16> isa OTHER */
var4 = 1; /* easy <var_other:UInt16> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 411);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var11 = -1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
{
{ /* Inline fixed_ints#UInt16#< (var_other,self) on <var_other:UInt16> */
/* Covariant cast for argument 0 (i) <self:UInt16> isa OTHER */
/* <self:UInt16> isa OTHER */
var14 = 1; /* easy <self:UInt16> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 411);
fatal_exit(1);
}
var18 = var_other < self;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#<=> for (self: Comparable, Comparable): Int */
long VIRTUAL_core___core__UInt16___core__kernel__Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
uint16_t var2 /* : UInt16 */;
uint16_t var3 /* : UInt16 */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Comparable to UInt16 */;
var3 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from Comparable to UInt16 */;
var1 = core___core__UInt16___core__kernel__Comparable___60d_61d_62d(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#is_between for (self: UInt16, UInt16, UInt16): Bool */
short int core___core__UInt16___core__kernel__Comparable__is_between(uint16_t self, uint16_t p0, uint16_t p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const char* var_class_name5;
uint16_t var_c /* var c: UInt16 */;
uint16_t var_d /* var d: UInt16 */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:UInt16> isa OTHER */
/* <p0:UInt16> isa OTHER */
var1 = 1; /* easy <p0:UInt16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 469);
fatal_exit(1);
}
/* Covariant cast for argument 1 (d) <p1:UInt16> isa OTHER */
/* <p1:UInt16> isa OTHER */
var2 = 1; /* easy <p1:UInt16> isa OTHER*/
if (unlikely(!var2)) {
var_class_name5 = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 469);
fatal_exit(1);
}
var_c = p0;
var_d = p1;
{
{ /* Inline fixed_ints#UInt16#< (self,var_c) on <self:UInt16> */
/* Covariant cast for argument 0 (i) <var_c:UInt16> isa OTHER */
/* <var_c:UInt16> isa OTHER */
var9 = 1; /* easy <var_c:UInt16> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 411);
fatal_exit(1);
}
var13 = self < var_c;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
var6 = var_;
} else {
{
{ /* Inline fixed_ints#UInt16#< (var_d,self) on <var_d:UInt16> */
/* Covariant cast for argument 0 (i) <self:UInt16> isa OTHER */
/* <self:UInt16> isa OTHER */
var16 = 1; /* easy <self:UInt16> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 411);
fatal_exit(1);
}
var20 = var_d < self;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var6 = var14;
}
if (var6){
var = 0;
goto RET_LABEL;
} else {
var = 1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#is_between for (self: Comparable, Comparable, Comparable): Bool */
short int VIRTUAL_core___core__UInt16___core__kernel__Comparable__is_between(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
uint16_t var2 /* : UInt16 */;
uint16_t var3 /* : UInt16 */;
uint16_t var4 /* : UInt16 */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Comparable to UInt16 */;
var3 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from Comparable to UInt16 */;
var4 = ((struct instance_core__UInt16*)p1)->value; /* autounbox from Comparable to UInt16 */;
var1 = core___core__UInt16___core__kernel__Comparable__is_between(var2, var3, var4);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#max for (self: UInt16, UInt16): UInt16 */
uint16_t core___core__UInt16___core__kernel__Comparable__max(uint16_t self, uint16_t p0) {
uint16_t var /* : UInt16 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint16_t var_other /* var other: UInt16 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:UInt16> isa OTHER */
/* <p0:UInt16> isa OTHER */
var1 = 1; /* easy <p0:UInt16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 478);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline fixed_ints#UInt16#< (self,var_other) on <self:UInt16> */
/* Covariant cast for argument 0 (i) <var_other:UInt16> isa OTHER */
/* <var_other:UInt16> isa OTHER */
var4 = 1; /* easy <var_other:UInt16> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 411);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_other;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#max for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__UInt16___core__kernel__Comparable__max(val* self, val* p0) {
val* var /* : Comparable */;
uint16_t var1 /* : UInt16 */;
uint16_t var2 /* : UInt16 */;
uint16_t var3 /* : UInt16 */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Comparable to UInt16 */;
var3 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from Comparable to UInt16 */;
var1 = core___core__UInt16___core__kernel__Comparable__max(var2, var3);
var4 = BOX_core__UInt16(var1); /* autobox from UInt16 to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#min for (self: UInt16, UInt16): UInt16 */
uint16_t core___core__UInt16___core__kernel__Comparable__min(uint16_t self, uint16_t p0) {
uint16_t var /* : UInt16 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint16_t var_c /* var c: UInt16 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:UInt16> isa OTHER */
/* <p0:UInt16> isa OTHER */
var1 = 1; /* easy <p0:UInt16> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 487);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline fixed_ints#UInt16#< (var_c,self) on <var_c:UInt16> */
/* Covariant cast for argument 0 (i) <self:UInt16> isa OTHER */
/* <self:UInt16> isa OTHER */
var4 = 1; /* easy <self:UInt16> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__UInt16.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 411);
fatal_exit(1);
}
var8 = var_c < self;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_c;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#min for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__UInt16___core__kernel__Comparable__min(val* self, val* p0) {
val* var /* : Comparable */;
uint16_t var1 /* : UInt16 */;
uint16_t var2 /* : UInt16 */;
uint16_t var3 /* : UInt16 */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Comparable to UInt16 */;
var3 = ((struct instance_core__UInt16*)p0)->value; /* autounbox from Comparable to UInt16 */;
var1 = core___core__UInt16___core__kernel__Comparable__min(var2, var3);
var4 = BOX_core__UInt16(var1); /* autobox from UInt16 to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#& for (self: UInt16, UInt16): UInt16 */
uint16_t core___core__UInt16____38d(uint16_t self, uint16_t p0) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = self & p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#| for (self: UInt16, UInt16): UInt16 */
uint16_t core___core__UInt16____124d(uint16_t self, uint16_t p0) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = self | p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#^ for (self: UInt16, UInt16): UInt16 */
uint16_t core___core__UInt16____94d(uint16_t self, uint16_t p0) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = self ^ p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#unary ~ for (self: UInt16): UInt16 */
uint16_t core___core__UInt16___unary_32d_126d(uint16_t self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = ~self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_s_len for (self: UInt16): Int */
long core___core__UInt16___to_s_len(uint16_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__fixed_ints___UInt16_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#native_to_s for (self: UInt16, NativeString, Int) */
void core___core__UInt16___native_to_s(uint16_t self, char* p0, long p1) {
core__fixed_ints___UInt16_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints#UInt16#to_s for (self: UInt16): String */
val* core___core__UInt16___core__abstract_text__Object__to_s(uint16_t self) {
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
val* var18 /* : FlatString */;
var1 = core___core__UInt16___to_s_len(self);
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
core___core__UInt16___native_to_s(self, var_ns, var11); /* Direct call fixed_ints#UInt16#native_to_s on <self:UInt16>*/
var18 = core__flat___NativeString___to_s_with_length(var_ns, var_nslen);
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt16#to_s for (self: Object): String */
val* VIRTUAL_core___core__UInt16___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
uint16_t var2 /* : UInt16 */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Object to UInt16 */;
var1 = core___core__UInt16___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#successor for (self: Int32, Int): Int32 */
int32_t core___core__Int32___core__kernel__Discrete__successor(int32_t self, long p0) {
int32_t var /* : Int32 */;
long var_i /* var i: Int */;
int32_t var1 /* : Int32 */;
int32_t var3 /* : Int32 */;
int32_t var4 /* : Int32 */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int32_t var7 /* : Int32 */;
var_i = p0;
{
{ /* Inline fixed_ints#Int#to_i32 (var_i) on <var_i:Int> */
var3 = (int32_t)var_i;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline fixed_ints#Int32#+ (self,var1) on <self:Int32> */
/* Covariant cast for argument 0 (i) <var1:Int32> isa OTHER */
/* <var1:Int32> isa OTHER */
var6 = 1; /* easy <var1:Int32> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 561);
fatal_exit(1);
}
var7 = self + var1;
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
/* method fixed_ints#Int32#successor for (self: Discrete, Int): Discrete */
val* VIRTUAL_core___core__Int32___core__kernel__Discrete__successor(val* self, long p0) {
val* var /* : Discrete */;
int32_t var1 /* : Int32 */;
int32_t var2 /* : Int32 */;
val* var3 /* : Discrete */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Discrete to Int32 */;
var1 = core___core__Int32___core__kernel__Discrete__successor(var2, p0);
var3 = BOX_core__Int32(var1); /* autobox from Int32 to Discrete */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#predecessor for (self: Int32, Int): Int32 */
int32_t core___core__Int32___core__kernel__Discrete__predecessor(int32_t self, long p0) {
int32_t var /* : Int32 */;
long var_i /* var i: Int */;
int32_t var1 /* : Int32 */;
int32_t var3 /* : Int32 */;
int32_t var4 /* : Int32 */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int32_t var7 /* : Int32 */;
var_i = p0;
{
{ /* Inline fixed_ints#Int#to_i32 (var_i) on <var_i:Int> */
var3 = (int32_t)var_i;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline fixed_ints#Int32#- (self,var1) on <self:Int32> */
/* Covariant cast for argument 0 (i) <var1:Int32> isa OTHER */
/* <var1:Int32> isa OTHER */
var6 = 1; /* easy <var1:Int32> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 566);
fatal_exit(1);
}
var7 = self - var1;
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
/* method fixed_ints#Int32#predecessor for (self: Discrete, Int): Discrete */
val* VIRTUAL_core___core__Int32___core__kernel__Discrete__predecessor(val* self, long p0) {
val* var /* : Discrete */;
int32_t var1 /* : Int32 */;
int32_t var2 /* : Int32 */;
val* var3 /* : Discrete */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Discrete to Int32 */;
var1 = core___core__Int32___core__kernel__Discrete__predecessor(var2, p0);
var3 = BOX_core__Int32(var1); /* autobox from Int32 to Discrete */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#object_id for (self: Int32): Int */
long core___core__Int32___core__kernel__Object__object_id(int32_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#object_id for (self: Object): Int */
long VIRTUAL_core___core__Int32___core__kernel__Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
int32_t var3 /* : Int32 */;
long var4 /* : Int */;
{ /* Inline fixed_ints#Int32#object_id (self) on <self:Object(Int32)> */
var3 = ((struct instance_core__Int32*)self)->value; /* autounbox from Object to Int32 */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#hash for (self: Int32): Int */
long core___core__Int32___core__kernel__Object__hash(int32_t self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline fixed_ints#Int32#to_i (self) on <self:Int32> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#hash for (self: Object): Int */
long VIRTUAL_core___core__Int32___core__kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
int32_t var2 /* : Int32 */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Object to Int32 */;
var1 = core___core__Int32___core__kernel__Object__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#== for (self: Int32, nullable Object): Bool */
short int core___core__Int32___core__kernel__Object___61d_61d(int32_t self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int32_t var2 /* : Int32 */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__Int32)) {
var2 = ((struct instance_core__Int32*)p0)->value; /* autounbox from nullable Object to Int32 */;
var1 = var2 == self;
} else var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Int32___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline fixed_ints#Int32#== (self,p0) on <self:Object(Int32)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__Int32*)self)->value == ((struct instance_core__Int32*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#!= for (self: Int32, nullable Object): Bool */
short int core___core__Int32___core__kernel__Object___33d_61d(int32_t self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int32_t var2 /* : Int32 */;
short int var3 /* : Bool */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__Int32)) {
var2 = ((struct instance_core__Int32*)p0)->value; /* autounbox from nullable Object to Int32 */;
var1 = var2 == self;
} else var1 = 0;
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__Int32___core__kernel__Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline fixed_ints#Int32#!= (self,p0) on <self:Object(Int32)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__Int32*)self)->value == ((struct instance_core__Int32*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#output for (self: Int32) */
void core___core__Int32___core__kernel__Object__output(int32_t self) {
printf("%"PRIi32 "\n", self);
RET_LABEL:;
}
/* method fixed_ints#Int32#output for (self: Object) */
void VIRTUAL_core___core__Int32___core__kernel__Object__output(val* self) {
int32_t var /* : Int32 */;
{ /* Inline fixed_ints#Int32#output (self) on <self:Object(Int32)> */
var = ((struct instance_core__Int32*)self)->value; /* autounbox from Object to Int32 */;
printf("%"PRIi32 "\n", var);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method fixed_ints#Int32#<= for (self: Int32, Int32): Bool */
short int core___core__Int32___core__kernel__Comparable___60d_61d(int32_t self, int32_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int32> isa OTHER */
/* <p0:Int32> isa OTHER */
var1 = 1; /* easy <p0:Int32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 557);
fatal_exit(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#<= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int32___core__kernel__Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int32_t var4 /* : Int32 */;
int32_t var5 /* : Int32 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#Int32#<= (self,p0) on <self:Comparable(Int32)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 557);
fatal_exit(1);
}
var4 = ((struct instance_core__Int32*)self)->value; /* autounbox from Comparable to Int32 */;
var5 = ((struct instance_core__Int32*)p0)->value; /* autounbox from Comparable to Int32 */;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#< for (self: Int32, Int32): Bool */
short int core___core__Int32___core__kernel__Comparable___60d(int32_t self, int32_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int32> isa OTHER */
/* <p0:Int32> isa OTHER */
var1 = 1; /* easy <p0:Int32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 558);
fatal_exit(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#< for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int32___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int32_t var4 /* : Int32 */;
int32_t var5 /* : Int32 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#Int32#< (self,p0) on <self:Comparable(Int32)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 558);
fatal_exit(1);
}
var4 = ((struct instance_core__Int32*)self)->value; /* autounbox from Comparable to Int32 */;
var5 = ((struct instance_core__Int32*)p0)->value; /* autounbox from Comparable to Int32 */;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#>= for (self: Int32, Int32): Bool */
short int core___core__Int32___core__kernel__Comparable___62d_61d(int32_t self, int32_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int32> isa OTHER */
/* <p0:Int32> isa OTHER */
var1 = 1; /* easy <p0:Int32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 559);
fatal_exit(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#>= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int32___core__kernel__Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int32_t var4 /* : Int32 */;
int32_t var5 /* : Int32 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#Int32#>= (self,p0) on <self:Comparable(Int32)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 559);
fatal_exit(1);
}
var4 = ((struct instance_core__Int32*)self)->value; /* autounbox from Comparable to Int32 */;
var5 = ((struct instance_core__Int32*)p0)->value; /* autounbox from Comparable to Int32 */;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#> for (self: Int32, Int32): Bool */
short int core___core__Int32___core__kernel__Comparable___62d(int32_t self, int32_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:Int32> isa OTHER */
/* <p0:Int32> isa OTHER */
var1 = 1; /* easy <p0:Int32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 560);
fatal_exit(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#> for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int32___core__kernel__Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int32_t var4 /* : Int32 */;
int32_t var5 /* : Int32 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#Int32#> (self,p0) on <self:Comparable(Int32)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 560);
fatal_exit(1);
}
var4 = ((struct instance_core__Int32*)self)->value; /* autounbox from Comparable to Int32 */;
var5 = ((struct instance_core__Int32*)p0)->value; /* autounbox from Comparable to Int32 */;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#+ for (self: Int32, Int32): Int32 */
int32_t core___core__Int32___core__kernel__Numeric___43d(int32_t self, int32_t p0) {
int32_t var /* : Int32 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int32_t var2 /* : Int32 */;
/* Covariant cast for argument 0 (i) <p0:Int32> isa OTHER */
/* <p0:Int32> isa OTHER */
var1 = 1; /* easy <p0:Int32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 561);
fatal_exit(1);
}
var2 = self + p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#+ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int32___core__kernel__Numeric___43d(val* self, val* p0) {
val* var /* : Numeric */;
int32_t var1 /* : Int32 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int32_t var4 /* : Int32 */;
int32_t var5 /* : Int32 */;
int32_t var6 /* : Int32 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#Int32#+ (self,p0) on <self:Numeric(Int32)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 561);
fatal_exit(1);
}
var4 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var5 = ((struct instance_core__Int32*)p0)->value; /* autounbox from Numeric to Int32 */;
var6 = var4 + var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Int32(var1); /* autobox from Int32 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#unary - for (self: Int32): Int32 */
int32_t core___core__Int32___core__kernel__Numeric__unary_32d_45d(int32_t self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#unary - for (self: Numeric): Numeric */
val* VIRTUAL_core___core__Int32___core__kernel__Numeric__unary_32d_45d(val* self) {
val* var /* : Numeric */;
int32_t var1 /* : Int32 */;
int32_t var3 /* : Int32 */;
int32_t var4 /* : Int32 */;
val* var5 /* : Numeric */;
{ /* Inline fixed_ints#Int32#unary - (self) on <self:Numeric(Int32)> */
var3 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_core__Int32(var1); /* autobox from Int32 to Numeric */
var = var5;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#- for (self: Int32, Int32): Int32 */
int32_t core___core__Int32___core__kernel__Numeric___45d(int32_t self, int32_t p0) {
int32_t var /* : Int32 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int32_t var2 /* : Int32 */;
/* Covariant cast for argument 0 (i) <p0:Int32> isa OTHER */
/* <p0:Int32> isa OTHER */
var1 = 1; /* easy <p0:Int32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 566);
fatal_exit(1);
}
var2 = self - p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#- for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int32___core__kernel__Numeric___45d(val* self, val* p0) {
val* var /* : Numeric */;
int32_t var1 /* : Int32 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int32_t var4 /* : Int32 */;
int32_t var5 /* : Int32 */;
int32_t var6 /* : Int32 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#Int32#- (self,p0) on <self:Numeric(Int32)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 566);
fatal_exit(1);
}
var4 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var5 = ((struct instance_core__Int32*)p0)->value; /* autounbox from Numeric to Int32 */;
var6 = var4 - var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Int32(var1); /* autobox from Int32 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#* for (self: Int32, Int32): Int32 */
int32_t core___core__Int32___core__kernel__Numeric___42d(int32_t self, int32_t p0) {
int32_t var /* : Int32 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int32_t var2 /* : Int32 */;
/* Covariant cast for argument 0 (i) <p0:Int32> isa OTHER */
/* <p0:Int32> isa OTHER */
var1 = 1; /* easy <p0:Int32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 567);
fatal_exit(1);
}
var2 = self * p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#* for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int32___core__kernel__Numeric___42d(val* self, val* p0) {
val* var /* : Numeric */;
int32_t var1 /* : Int32 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int32_t var4 /* : Int32 */;
int32_t var5 /* : Int32 */;
int32_t var6 /* : Int32 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#Int32#* (self,p0) on <self:Numeric(Int32)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 567);
fatal_exit(1);
}
var4 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var5 = ((struct instance_core__Int32*)p0)->value; /* autounbox from Numeric to Int32 */;
var6 = var4 * var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Int32(var1); /* autobox from Int32 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#/ for (self: Int32, Int32): Int32 */
int32_t core___core__Int32___core__kernel__Numeric___47d(int32_t self, int32_t p0) {
int32_t var /* : Int32 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int32_t var2 /* : Int32 */;
/* Covariant cast for argument 0 (i) <p0:Int32> isa OTHER */
/* <p0:Int32> isa OTHER */
var1 = 1; /* easy <p0:Int32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 568);
fatal_exit(1);
}
var2 = self / p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#/ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int32___core__kernel__Numeric___47d(val* self, val* p0) {
val* var /* : Numeric */;
int32_t var1 /* : Int32 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
int32_t var4 /* : Int32 */;
int32_t var5 /* : Int32 */;
int32_t var6 /* : Int32 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#Int32#/ (self,p0) on <self:Numeric(Int32)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 568);
fatal_exit(1);
}
var4 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var5 = ((struct instance_core__Int32*)p0)->value; /* autounbox from Numeric to Int32 */;
var6 = var4 / var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__Int32(var1); /* autobox from Int32 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#ascii for (self: Int32): Char */
uint32_t core___core__Int32___ascii(int32_t self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = core__fixed_ints___Int32_ascii___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#% for (self: Int32, Int32): Int32 */
int32_t core___core__Int32____37d(int32_t self, int32_t p0) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = self % p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#zero for (self: Int32): Int32 */
int32_t core___core__Int32___core__kernel__Numeric__zero(int32_t self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
int32_t var3 /* : Int32 */;
{
{ /* Inline fixed_ints#Int#to_i32 (0l) on <0l:Int> */
var3 = (int32_t)0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#zero for (self: Numeric): Numeric */
val* VIRTUAL_core___core__Int32___core__kernel__Numeric__zero(val* self) {
val* var /* : Numeric */;
int32_t var1 /* : Int32 */;
int32_t var2 /* : Int32 */;
val* var3 /* : Numeric */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var1 = core___core__Int32___core__kernel__Numeric__zero(var2);
var3 = BOX_core__Int32(var1); /* autobox from Int32 to Numeric */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#value_of for (self: Int32, Numeric): Int32 */
int32_t core___core__Int32___core__kernel__Numeric__value_of(int32_t self, val* p0) {
int32_t var /* : Int32 */;
val* var_val /* var val: Numeric */;
int32_t var1 /* : Int32 */;
var_val = p0;
{
var1 = ((int32_t(*)(val* self))((((long)var_val&3)?class_info[((long)var_val&3)]:var_val->class)->vft[COLOR_core__fixed_ints__Numeric__to_i32]))(var_val); /* to_i32 on <var_val:Numeric>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#value_of for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__Int32___core__kernel__Numeric__value_of(val* self, val* p0) {
val* var /* : Numeric */;
int32_t var1 /* : Int32 */;
int32_t var2 /* : Int32 */;
val* var3 /* : Numeric */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var1 = core___core__Int32___core__kernel__Numeric__value_of(var2, p0);
var3 = BOX_core__Int32(var1); /* autobox from Int32 to Numeric */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#<< for (self: Int32, Int): Int32 */
int32_t core___core__Int32____60d_60d(int32_t self, long p0) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = self << p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#>> for (self: Int32, Int): Int32 */
int32_t core___core__Int32____62d_62d(int32_t self, long p0) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = self >> p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_i for (self: Int32): Int */
long core___core__Int32___core__kernel__Numeric__to_i(int32_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_i for (self: Numeric): Int */
long VIRTUAL_core___core__Int32___core__kernel__Numeric__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
int32_t var3 /* : Int32 */;
long var4 /* : Int */;
{ /* Inline fixed_ints#Int32#to_i (self) on <self:Numeric(Int32)> */
var3 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_f for (self: Int32): Float */
double core___core__Int32___core__kernel__Numeric__to_f(int32_t self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_f for (self: Numeric): Float */
double VIRTUAL_core___core__Int32___core__kernel__Numeric__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
int32_t var3 /* : Int32 */;
double var4 /* : Float */;
{ /* Inline fixed_ints#Int32#to_f (self) on <self:Numeric(Int32)> */
var3 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_b for (self: Int32): Byte */
unsigned char core___core__Int32___core__kernel__Numeric__to_b(int32_t self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = (unsigned char)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_b for (self: Numeric): Byte */
unsigned char VIRTUAL_core___core__Int32___core__kernel__Numeric__to_b(val* self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
int32_t var3 /* : Int32 */;
unsigned char var4 /* : Byte */;
{ /* Inline fixed_ints#Int32#to_b (self) on <self:Numeric(Int32)> */
var3 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var4 = (unsigned char)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_i8 for (self: Int32): Int8 */
int8_t core___core__Int32___Numeric__to_i8(int32_t self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = (int8_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_i8 for (self: Numeric): Int8 */
int8_t VIRTUAL_core___core__Int32___Numeric__to_i8(val* self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
int32_t var3 /* : Int32 */;
int8_t var4 /* : Int8 */;
{ /* Inline fixed_ints#Int32#to_i8 (self) on <self:Numeric(Int32)> */
var3 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var4 = (int8_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_i16 for (self: Int32): Int16 */
int16_t core___core__Int32___Numeric__to_i16(int32_t self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = (int16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_i16 for (self: Numeric): Int16 */
int16_t VIRTUAL_core___core__Int32___Numeric__to_i16(val* self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
int32_t var3 /* : Int32 */;
int16_t var4 /* : Int16 */;
{ /* Inline fixed_ints#Int32#to_i16 (self) on <self:Numeric(Int32)> */
var3 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var4 = (int16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_u16 for (self: Int32): UInt16 */
uint16_t core___core__Int32___Numeric__to_u16(int32_t self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = (uint16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_u16 for (self: Numeric): UInt16 */
uint16_t VIRTUAL_core___core__Int32___Numeric__to_u16(val* self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
int32_t var3 /* : Int32 */;
uint16_t var4 /* : UInt16 */;
{ /* Inline fixed_ints#Int32#to_u16 (self) on <self:Numeric(Int32)> */
var3 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var4 = (uint16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_i32 for (self: Int32): Int32 */
int32_t core___core__Int32___Numeric__to_i32(int32_t self) {
int32_t var /* : Int32 */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_i32 for (self: Numeric): Int32 */
int32_t VIRTUAL_core___core__Int32___Numeric__to_i32(val* self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
int32_t var2 /* : Int32 */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var1 = core___core__Int32___Numeric__to_i32(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_u32 for (self: Int32): UInt32 */
uint32_t core___core__Int32___Numeric__to_u32(int32_t self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = (uint32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_u32 for (self: Numeric): UInt32 */
uint32_t VIRTUAL_core___core__Int32___Numeric__to_u32(val* self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
int32_t var3 /* : Int32 */;
uint32_t var4 /* : UInt32 */;
{ /* Inline fixed_ints#Int32#to_u32 (self) on <self:Numeric(Int32)> */
var3 = ((struct instance_core__Int32*)self)->value; /* autounbox from Numeric to Int32 */;
var4 = (uint32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#distance for (self: Int32, Int32): Int */
long core___core__Int32___core__kernel__Discrete__distance(int32_t self, int32_t p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int32_t var_i /* var i: Int32 */;
int32_t var2 /* : Int32 */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
int32_t var8 /* : Int32 */;
long var9 /* : Int */;
long var11 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:Int32> isa OTHER */
/* <p0:Int32> isa OTHER */
var1 = 1; /* easy <p0:Int32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 603);
fatal_exit(1);
}
var_i = p0;
{
{ /* Inline fixed_ints#Int32#- (self,var_i) on <self:Int32> */
/* Covariant cast for argument 0 (i) <var_i:Int32> isa OTHER */
/* <var_i:Int32> isa OTHER */
var4 = 1; /* easy <var_i:Int32> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 566);
fatal_exit(1);
}
var8 = self - var_i;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline fixed_ints#Int32#to_i (var2) on <var2:Int32> */
var11 = (long)var2;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#distance for (self: Discrete, Discrete): Int */
long VIRTUAL_core___core__Int32___core__kernel__Discrete__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
int32_t var2 /* : Int32 */;
int32_t var3 /* : Int32 */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Discrete to Int32 */;
var3 = ((struct instance_core__Int32*)p0)->value; /* autounbox from Discrete to Int32 */;
var1 = core___core__Int32___core__kernel__Discrete__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#<=> for (self: Int32, Int32): Int */
long core___core__Int32___core__kernel__Comparable___60d_61d_62d(int32_t self, int32_t p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int32_t var_other /* var other: Int32 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Int32> isa OTHER */
/* <p0:Int32> isa OTHER */
var1 = 1; /* easy <p0:Int32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 605);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline fixed_ints#Int32#< (self,var_other) on <self:Int32> */
/* Covariant cast for argument 0 (i) <var_other:Int32> isa OTHER */
/* <var_other:Int32> isa OTHER */
var4 = 1; /* easy <var_other:Int32> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 558);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var11 = -1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
{
{ /* Inline fixed_ints#Int32#< (var_other,self) on <var_other:Int32> */
/* Covariant cast for argument 0 (i) <self:Int32> isa OTHER */
/* <self:Int32> isa OTHER */
var14 = 1; /* easy <self:Int32> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 558);
fatal_exit(1);
}
var18 = var_other < self;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#<=> for (self: Comparable, Comparable): Int */
long VIRTUAL_core___core__Int32___core__kernel__Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
int32_t var2 /* : Int32 */;
int32_t var3 /* : Int32 */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Comparable to Int32 */;
var3 = ((struct instance_core__Int32*)p0)->value; /* autounbox from Comparable to Int32 */;
var1 = core___core__Int32___core__kernel__Comparable___60d_61d_62d(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#is_between for (self: Int32, Int32, Int32): Bool */
short int core___core__Int32___core__kernel__Comparable__is_between(int32_t self, int32_t p0, int32_t p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const char* var_class_name5;
int32_t var_c /* var c: Int32 */;
int32_t var_d /* var d: Int32 */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Int32> isa OTHER */
/* <p0:Int32> isa OTHER */
var1 = 1; /* easy <p0:Int32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 616);
fatal_exit(1);
}
/* Covariant cast for argument 1 (d) <p1:Int32> isa OTHER */
/* <p1:Int32> isa OTHER */
var2 = 1; /* easy <p1:Int32> isa OTHER*/
if (unlikely(!var2)) {
var_class_name5 = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 616);
fatal_exit(1);
}
var_c = p0;
var_d = p1;
{
{ /* Inline fixed_ints#Int32#< (self,var_c) on <self:Int32> */
/* Covariant cast for argument 0 (i) <var_c:Int32> isa OTHER */
/* <var_c:Int32> isa OTHER */
var9 = 1; /* easy <var_c:Int32> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 558);
fatal_exit(1);
}
var13 = self < var_c;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
var6 = var_;
} else {
{
{ /* Inline fixed_ints#Int32#< (var_d,self) on <var_d:Int32> */
/* Covariant cast for argument 0 (i) <self:Int32> isa OTHER */
/* <self:Int32> isa OTHER */
var16 = 1; /* easy <self:Int32> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 558);
fatal_exit(1);
}
var20 = var_d < self;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var6 = var14;
}
if (var6){
var = 0;
goto RET_LABEL;
} else {
var = 1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#is_between for (self: Comparable, Comparable, Comparable): Bool */
short int VIRTUAL_core___core__Int32___core__kernel__Comparable__is_between(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int32_t var2 /* : Int32 */;
int32_t var3 /* : Int32 */;
int32_t var4 /* : Int32 */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Comparable to Int32 */;
var3 = ((struct instance_core__Int32*)p0)->value; /* autounbox from Comparable to Int32 */;
var4 = ((struct instance_core__Int32*)p1)->value; /* autounbox from Comparable to Int32 */;
var1 = core___core__Int32___core__kernel__Comparable__is_between(var2, var3, var4);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#max for (self: Int32, Int32): Int32 */
int32_t core___core__Int32___core__kernel__Comparable__max(int32_t self, int32_t p0) {
int32_t var /* : Int32 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int32_t var_other /* var other: Int32 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Int32> isa OTHER */
/* <p0:Int32> isa OTHER */
var1 = 1; /* easy <p0:Int32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 625);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline fixed_ints#Int32#< (self,var_other) on <self:Int32> */
/* Covariant cast for argument 0 (i) <var_other:Int32> isa OTHER */
/* <var_other:Int32> isa OTHER */
var4 = 1; /* easy <var_other:Int32> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 558);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_other;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#max for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__Int32___core__kernel__Comparable__max(val* self, val* p0) {
val* var /* : Comparable */;
int32_t var1 /* : Int32 */;
int32_t var2 /* : Int32 */;
int32_t var3 /* : Int32 */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Comparable to Int32 */;
var3 = ((struct instance_core__Int32*)p0)->value; /* autounbox from Comparable to Int32 */;
var1 = core___core__Int32___core__kernel__Comparable__max(var2, var3);
var4 = BOX_core__Int32(var1); /* autobox from Int32 to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#min for (self: Int32, Int32): Int32 */
int32_t core___core__Int32___core__kernel__Comparable__min(int32_t self, int32_t p0) {
int32_t var /* : Int32 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
int32_t var_c /* var c: Int32 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:Int32> isa OTHER */
/* <p0:Int32> isa OTHER */
var1 = 1; /* easy <p0:Int32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 634);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline fixed_ints#Int32#< (var_c,self) on <var_c:Int32> */
/* Covariant cast for argument 0 (i) <self:Int32> isa OTHER */
/* <self:Int32> isa OTHER */
var4 = 1; /* easy <self:Int32> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 558);
fatal_exit(1);
}
var8 = var_c < self;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_c;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#min for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__Int32___core__kernel__Comparable__min(val* self, val* p0) {
val* var /* : Comparable */;
int32_t var1 /* : Int32 */;
int32_t var2 /* : Int32 */;
int32_t var3 /* : Int32 */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Comparable to Int32 */;
var3 = ((struct instance_core__Int32*)p0)->value; /* autounbox from Comparable to Int32 */;
var1 = core___core__Int32___core__kernel__Comparable__min(var2, var3);
var4 = BOX_core__Int32(var1); /* autobox from Int32 to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#& for (self: Int32, Int32): Int32 */
int32_t core___core__Int32____38d(int32_t self, int32_t p0) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = self & p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#| for (self: Int32, Int32): Int32 */
int32_t core___core__Int32____124d(int32_t self, int32_t p0) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = self | p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#^ for (self: Int32, Int32): Int32 */
int32_t core___core__Int32____94d(int32_t self, int32_t p0) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = self ^ p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#unary ~ for (self: Int32): Int32 */
int32_t core___core__Int32___unary_32d_126d(int32_t self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = ~self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_s_len for (self: Int32): Int */
long core___core__Int32___to_s_len(int32_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__fixed_ints___Int32_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#native_to_s for (self: Int32, NativeString, Int) */
void core___core__Int32___native_to_s(int32_t self, char* p0, long p1) {
core__fixed_ints___Int32_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints#Int32#to_s for (self: Int32): String */
val* core___core__Int32___core__abstract_text__Object__to_s(int32_t self) {
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
val* var18 /* : FlatString */;
var1 = core___core__Int32___to_s_len(self);
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
core___core__Int32___native_to_s(self, var_ns, var11); /* Direct call fixed_ints#Int32#native_to_s on <self:Int32>*/
var18 = core__flat___NativeString___to_s_with_length(var_ns, var_nslen);
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Int32#to_s for (self: Object): String */
val* VIRTUAL_core___core__Int32___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
int32_t var2 /* : Int32 */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Object to Int32 */;
var1 = core___core__Int32___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#successor for (self: UInt32, Int): UInt32 */
uint32_t core___core__UInt32___core__kernel__Discrete__successor(uint32_t self, long p0) {
uint32_t var /* : UInt32 */;
long var_i /* var i: Int */;
uint32_t var1 /* : UInt32 */;
uint32_t var3 /* : UInt32 */;
uint32_t var4 /* : UInt32 */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var7 /* : UInt32 */;
var_i = p0;
{
{ /* Inline fixed_ints#Int#to_u32 (var_i) on <var_i:Int> */
var3 = (uint32_t)var_i;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline fixed_ints#UInt32#+ (self,var1) on <self:UInt32> */
/* Covariant cast for argument 0 (i) <var1:UInt32> isa OTHER */
/* <var1:UInt32> isa OTHER */
var6 = 1; /* easy <var1:UInt32> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 707);
fatal_exit(1);
}
var7 = self + var1;
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
/* method fixed_ints#UInt32#successor for (self: Discrete, Int): Discrete */
val* VIRTUAL_core___core__UInt32___core__kernel__Discrete__successor(val* self, long p0) {
val* var /* : Discrete */;
uint32_t var1 /* : UInt32 */;
uint32_t var2 /* : UInt32 */;
val* var3 /* : Discrete */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Discrete to UInt32 */;
var1 = core___core__UInt32___core__kernel__Discrete__successor(var2, p0);
var3 = BOX_core__UInt32(var1); /* autobox from UInt32 to Discrete */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#predecessor for (self: UInt32, Int): UInt32 */
uint32_t core___core__UInt32___core__kernel__Discrete__predecessor(uint32_t self, long p0) {
uint32_t var /* : UInt32 */;
long var_i /* var i: Int */;
uint32_t var1 /* : UInt32 */;
uint32_t var3 /* : UInt32 */;
uint32_t var4 /* : UInt32 */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var7 /* : UInt32 */;
var_i = p0;
{
{ /* Inline fixed_ints#Int#to_u32 (var_i) on <var_i:Int> */
var3 = (uint32_t)var_i;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline fixed_ints#UInt32#- (self,var1) on <self:UInt32> */
/* Covariant cast for argument 0 (i) <var1:UInt32> isa OTHER */
/* <var1:UInt32> isa OTHER */
var6 = 1; /* easy <var1:UInt32> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 712);
fatal_exit(1);
}
var7 = self - var1;
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
/* method fixed_ints#UInt32#predecessor for (self: Discrete, Int): Discrete */
val* VIRTUAL_core___core__UInt32___core__kernel__Discrete__predecessor(val* self, long p0) {
val* var /* : Discrete */;
uint32_t var1 /* : UInt32 */;
uint32_t var2 /* : UInt32 */;
val* var3 /* : Discrete */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Discrete to UInt32 */;
var1 = core___core__UInt32___core__kernel__Discrete__predecessor(var2, p0);
var3 = BOX_core__UInt32(var1); /* autobox from UInt32 to Discrete */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#object_id for (self: UInt32): Int */
long core___core__UInt32___core__kernel__Object__object_id(uint32_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#object_id for (self: Object): Int */
long VIRTUAL_core___core__UInt32___core__kernel__Object__object_id(val* self) {
long var /* : Int */;
long var1 /* : Int */;
uint32_t var3 /* : UInt32 */;
long var4 /* : Int */;
{ /* Inline fixed_ints#UInt32#object_id (self) on <self:Object(UInt32)> */
var3 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Object to UInt32 */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#hash for (self: UInt32): Int */
long core___core__UInt32___core__kernel__Object__hash(uint32_t self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline fixed_ints#UInt32#to_i (self) on <self:UInt32> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#hash for (self: Object): Int */
long VIRTUAL_core___core__UInt32___core__kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
uint32_t var2 /* : UInt32 */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Object to UInt32 */;
var1 = core___core__UInt32___core__kernel__Object__hash(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#== for (self: UInt32, nullable Object): Bool */
short int core___core__UInt32___core__kernel__Object___61d_61d(uint32_t self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
uint32_t var2 /* : UInt32 */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__UInt32)) {
var2 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from nullable Object to UInt32 */;
var1 = var2 == self;
} else var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#== for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__UInt32___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline fixed_ints#UInt32#== (self,p0) on <self:Object(UInt32)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__UInt32*)self)->value == ((struct instance_core__UInt32*)p0)->value);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#!= for (self: UInt32, nullable Object): Bool */
short int core___core__UInt32___core__kernel__Object___33d_61d(uint32_t self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
uint32_t var2 /* : UInt32 */;
short int var3 /* : Bool */;
if ((p0 != NULL) && ((((long)p0&3)?class_info[((long)p0&3)]:p0->class) == &class_core__UInt32)) {
var2 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from nullable Object to UInt32 */;
var1 = var2 == self;
} else var1 = 0;
var3 = !var1;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#!= for (self: Object, nullable Object): Bool */
short int VIRTUAL_core___core__UInt32___core__kernel__Object___33d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{ /* Inline fixed_ints#UInt32#!= (self,p0) on <self:Object(UInt32)> */
var3 = self == p0 || (p0 != NULL && (!((long)p0&3)) && self->class == p0->class && ((struct instance_core__UInt32*)self)->value == ((struct instance_core__UInt32*)p0)->value);
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#output for (self: UInt32) */
void core___core__UInt32___core__kernel__Object__output(uint32_t self) {
printf("%"PRIu32 "\n", self);
RET_LABEL:;
}
/* method fixed_ints#UInt32#output for (self: Object) */
void VIRTUAL_core___core__UInt32___core__kernel__Object__output(val* self) {
uint32_t var /* : UInt32 */;
{ /* Inline fixed_ints#UInt32#output (self) on <self:Object(UInt32)> */
var = ((struct instance_core__UInt32*)self)->value; /* autounbox from Object to UInt32 */;
printf("%"PRIu32 "\n", var);
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method fixed_ints#UInt32#<= for (self: UInt32, UInt32): Bool */
short int core___core__UInt32___core__kernel__Comparable___60d_61d(uint32_t self, uint32_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:UInt32> isa OTHER */
/* <p0:UInt32> isa OTHER */
var1 = 1; /* easy <p0:UInt32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 703);
fatal_exit(1);
}
var2 = self <= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#<= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__UInt32___core__kernel__Comparable___60d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint32_t var4 /* : UInt32 */;
uint32_t var5 /* : UInt32 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#UInt32#<= (self,p0) on <self:Comparable(UInt32)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 703);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Comparable to UInt32 */;
var5 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from Comparable to UInt32 */;
var6 = var4 <= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#< for (self: UInt32, UInt32): Bool */
short int core___core__UInt32___core__kernel__Comparable___60d(uint32_t self, uint32_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:UInt32> isa OTHER */
/* <p0:UInt32> isa OTHER */
var1 = 1; /* easy <p0:UInt32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 704);
fatal_exit(1);
}
var2 = self < p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#< for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__UInt32___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint32_t var4 /* : UInt32 */;
uint32_t var5 /* : UInt32 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#UInt32#< (self,p0) on <self:Comparable(UInt32)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 704);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Comparable to UInt32 */;
var5 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from Comparable to UInt32 */;
var6 = var4 < var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#>= for (self: UInt32, UInt32): Bool */
short int core___core__UInt32___core__kernel__Comparable___62d_61d(uint32_t self, uint32_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:UInt32> isa OTHER */
/* <p0:UInt32> isa OTHER */
var1 = 1; /* easy <p0:UInt32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 705);
fatal_exit(1);
}
var2 = self >= p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#>= for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__UInt32___core__kernel__Comparable___62d_61d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint32_t var4 /* : UInt32 */;
uint32_t var5 /* : UInt32 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#UInt32#>= (self,p0) on <self:Comparable(UInt32)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 705);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Comparable to UInt32 */;
var5 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from Comparable to UInt32 */;
var6 = var4 >= var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#> for (self: UInt32, UInt32): Bool */
short int core___core__UInt32___core__kernel__Comparable___62d(uint32_t self, uint32_t p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
/* Covariant cast for argument 0 (i) <p0:UInt32> isa OTHER */
/* <p0:UInt32> isa OTHER */
var1 = 1; /* easy <p0:UInt32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 706);
fatal_exit(1);
}
var2 = self > p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#> for (self: Comparable, Comparable): Bool */
short int VIRTUAL_core___core__UInt32___core__kernel__Comparable___62d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint32_t var4 /* : UInt32 */;
uint32_t var5 /* : UInt32 */;
short int var6 /* : Bool */;
{ /* Inline fixed_ints#UInt32#> (self,p0) on <self:Comparable(UInt32)> */
/* Covariant cast for argument 0 (i) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 706);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Comparable to UInt32 */;
var5 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from Comparable to UInt32 */;
var6 = var4 > var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#+ for (self: UInt32, UInt32): UInt32 */
uint32_t core___core__UInt32___core__kernel__Numeric___43d(uint32_t self, uint32_t p0) {
uint32_t var /* : UInt32 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var2 /* : UInt32 */;
/* Covariant cast for argument 0 (i) <p0:UInt32> isa OTHER */
/* <p0:UInt32> isa OTHER */
var1 = 1; /* easy <p0:UInt32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 707);
fatal_exit(1);
}
var2 = self + p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#+ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__UInt32___core__kernel__Numeric___43d(val* self, val* p0) {
val* var /* : Numeric */;
uint32_t var1 /* : UInt32 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint32_t var4 /* : UInt32 */;
uint32_t var5 /* : UInt32 */;
uint32_t var6 /* : UInt32 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#UInt32#+ (self,p0) on <self:Numeric(UInt32)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 707);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var5 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from Numeric to UInt32 */;
var6 = var4 + var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__UInt32(var1); /* autobox from UInt32 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#unary - for (self: UInt32): UInt32 */
uint32_t core___core__UInt32___core__kernel__Numeric__unary_32d_45d(uint32_t self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = -self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#unary - for (self: Numeric): Numeric */
val* VIRTUAL_core___core__UInt32___core__kernel__Numeric__unary_32d_45d(val* self) {
val* var /* : Numeric */;
uint32_t var1 /* : UInt32 */;
uint32_t var3 /* : UInt32 */;
uint32_t var4 /* : UInt32 */;
val* var5 /* : Numeric */;
{ /* Inline fixed_ints#UInt32#unary - (self) on <self:Numeric(UInt32)> */
var3 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var4 = -var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var5 = BOX_core__UInt32(var1); /* autobox from UInt32 to Numeric */
var = var5;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#- for (self: UInt32, UInt32): UInt32 */
uint32_t core___core__UInt32___core__kernel__Numeric___45d(uint32_t self, uint32_t p0) {
uint32_t var /* : UInt32 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var2 /* : UInt32 */;
/* Covariant cast for argument 0 (i) <p0:UInt32> isa OTHER */
/* <p0:UInt32> isa OTHER */
var1 = 1; /* easy <p0:UInt32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 712);
fatal_exit(1);
}
var2 = self - p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#- for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__UInt32___core__kernel__Numeric___45d(val* self, val* p0) {
val* var /* : Numeric */;
uint32_t var1 /* : UInt32 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint32_t var4 /* : UInt32 */;
uint32_t var5 /* : UInt32 */;
uint32_t var6 /* : UInt32 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#UInt32#- (self,p0) on <self:Numeric(UInt32)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 712);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var5 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from Numeric to UInt32 */;
var6 = var4 - var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__UInt32(var1); /* autobox from UInt32 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#* for (self: UInt32, UInt32): UInt32 */
uint32_t core___core__UInt32___core__kernel__Numeric___42d(uint32_t self, uint32_t p0) {
uint32_t var /* : UInt32 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var2 /* : UInt32 */;
/* Covariant cast for argument 0 (i) <p0:UInt32> isa OTHER */
/* <p0:UInt32> isa OTHER */
var1 = 1; /* easy <p0:UInt32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 713);
fatal_exit(1);
}
var2 = self * p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#* for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__UInt32___core__kernel__Numeric___42d(val* self, val* p0) {
val* var /* : Numeric */;
uint32_t var1 /* : UInt32 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint32_t var4 /* : UInt32 */;
uint32_t var5 /* : UInt32 */;
uint32_t var6 /* : UInt32 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#UInt32#* (self,p0) on <self:Numeric(UInt32)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 713);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var5 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from Numeric to UInt32 */;
var6 = var4 * var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__UInt32(var1); /* autobox from UInt32 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#/ for (self: UInt32, UInt32): UInt32 */
uint32_t core___core__UInt32___core__kernel__Numeric___47d(uint32_t self, uint32_t p0) {
uint32_t var /* : UInt32 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var2 /* : UInt32 */;
/* Covariant cast for argument 0 (i) <p0:UInt32> isa OTHER */
/* <p0:UInt32> isa OTHER */
var1 = 1; /* easy <p0:UInt32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 714);
fatal_exit(1);
}
var2 = self / p0;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#/ for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__UInt32___core__kernel__Numeric___47d(val* self, val* p0) {
val* var /* : Numeric */;
uint32_t var1 /* : UInt32 */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
uint32_t var4 /* : UInt32 */;
uint32_t var5 /* : UInt32 */;
uint32_t var6 /* : UInt32 */;
val* var7 /* : Numeric */;
{ /* Inline fixed_ints#UInt32#/ (self,p0) on <self:Numeric(UInt32)> */
/* Covariant cast for argument 0 (i) <p0:Numeric> isa OTHER */
/* <p0:Numeric> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 714);
fatal_exit(1);
}
var4 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var5 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from Numeric to UInt32 */;
var6 = var4 / var5;
var1 = var6;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var7 = BOX_core__UInt32(var1); /* autobox from UInt32 to Numeric */
var = var7;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#ascii for (self: UInt32): Char */
uint32_t core___core__UInt32___ascii(uint32_t self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = core__fixed_ints___UInt32_ascii___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#% for (self: UInt32, UInt32): UInt32 */
uint32_t core___core__UInt32____37d(uint32_t self, uint32_t p0) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = self % p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#zero for (self: UInt32): UInt32 */
uint32_t core___core__UInt32___core__kernel__Numeric__zero(uint32_t self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
uint32_t var3 /* : UInt32 */;
{
{ /* Inline fixed_ints#Int#to_u32 (0l) on <0l:Int> */
var3 = (uint32_t)0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#zero for (self: Numeric): Numeric */
val* VIRTUAL_core___core__UInt32___core__kernel__Numeric__zero(val* self) {
val* var /* : Numeric */;
uint32_t var1 /* : UInt32 */;
uint32_t var2 /* : UInt32 */;
val* var3 /* : Numeric */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var1 = core___core__UInt32___core__kernel__Numeric__zero(var2);
var3 = BOX_core__UInt32(var1); /* autobox from UInt32 to Numeric */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#value_of for (self: UInt32, Numeric): UInt32 */
uint32_t core___core__UInt32___core__kernel__Numeric__value_of(uint32_t self, val* p0) {
uint32_t var /* : UInt32 */;
val* var_val /* var val: Numeric */;
uint32_t var1 /* : UInt32 */;
var_val = p0;
{
var1 = ((uint32_t(*)(val* self))((((long)var_val&3)?class_info[((long)var_val&3)]:var_val->class)->vft[COLOR_core__fixed_ints__Numeric__to_u32]))(var_val); /* to_u32 on <var_val:Numeric>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#value_of for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core___core__UInt32___core__kernel__Numeric__value_of(val* self, val* p0) {
val* var /* : Numeric */;
uint32_t var1 /* : UInt32 */;
uint32_t var2 /* : UInt32 */;
val* var3 /* : Numeric */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var1 = core___core__UInt32___core__kernel__Numeric__value_of(var2, p0);
var3 = BOX_core__UInt32(var1); /* autobox from UInt32 to Numeric */
var = var3;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#<< for (self: UInt32, Int): UInt32 */
uint32_t core___core__UInt32____60d_60d(uint32_t self, long p0) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = self << p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#>> for (self: UInt32, Int): UInt32 */
uint32_t core___core__UInt32____62d_62d(uint32_t self, long p0) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = self >> p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_i for (self: UInt32): Int */
long core___core__UInt32___core__kernel__Numeric__to_i(uint32_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = (long)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_i for (self: Numeric): Int */
long VIRTUAL_core___core__UInt32___core__kernel__Numeric__to_i(val* self) {
long var /* : Int */;
long var1 /* : Int */;
uint32_t var3 /* : UInt32 */;
long var4 /* : Int */;
{ /* Inline fixed_ints#UInt32#to_i (self) on <self:Numeric(UInt32)> */
var3 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var4 = (long)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_f for (self: UInt32): Float */
double core___core__UInt32___core__kernel__Numeric__to_f(uint32_t self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = (double)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_f for (self: Numeric): Float */
double VIRTUAL_core___core__UInt32___core__kernel__Numeric__to_f(val* self) {
double var /* : Float */;
double var1 /* : Float */;
uint32_t var3 /* : UInt32 */;
double var4 /* : Float */;
{ /* Inline fixed_ints#UInt32#to_f (self) on <self:Numeric(UInt32)> */
var3 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var4 = (double)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_b for (self: UInt32): Byte */
unsigned char core___core__UInt32___core__kernel__Numeric__to_b(uint32_t self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = (unsigned char)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_b for (self: Numeric): Byte */
unsigned char VIRTUAL_core___core__UInt32___core__kernel__Numeric__to_b(val* self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
uint32_t var3 /* : UInt32 */;
unsigned char var4 /* : Byte */;
{ /* Inline fixed_ints#UInt32#to_b (self) on <self:Numeric(UInt32)> */
var3 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var4 = (unsigned char)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_i8 for (self: UInt32): Int8 */
int8_t core___core__UInt32___Numeric__to_i8(uint32_t self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
var1 = (int8_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_i8 for (self: Numeric): Int8 */
int8_t VIRTUAL_core___core__UInt32___Numeric__to_i8(val* self) {
int8_t var /* : Int8 */;
int8_t var1 /* : Int8 */;
uint32_t var3 /* : UInt32 */;
int8_t var4 /* : Int8 */;
{ /* Inline fixed_ints#UInt32#to_i8 (self) on <self:Numeric(UInt32)> */
var3 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var4 = (int8_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_i16 for (self: UInt32): Int16 */
int16_t core___core__UInt32___Numeric__to_i16(uint32_t self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
var1 = (int16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_i16 for (self: Numeric): Int16 */
int16_t VIRTUAL_core___core__UInt32___Numeric__to_i16(val* self) {
int16_t var /* : Int16 */;
int16_t var1 /* : Int16 */;
uint32_t var3 /* : UInt32 */;
int16_t var4 /* : Int16 */;
{ /* Inline fixed_ints#UInt32#to_i16 (self) on <self:Numeric(UInt32)> */
var3 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var4 = (int16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_u16 for (self: UInt32): UInt16 */
uint16_t core___core__UInt32___Numeric__to_u16(uint32_t self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
var1 = (uint16_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_u16 for (self: Numeric): UInt16 */
uint16_t VIRTUAL_core___core__UInt32___Numeric__to_u16(val* self) {
uint16_t var /* : UInt16 */;
uint16_t var1 /* : UInt16 */;
uint32_t var3 /* : UInt32 */;
uint16_t var4 /* : UInt16 */;
{ /* Inline fixed_ints#UInt32#to_u16 (self) on <self:Numeric(UInt32)> */
var3 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var4 = (uint16_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_i32 for (self: UInt32): Int32 */
int32_t core___core__UInt32___Numeric__to_i32(uint32_t self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
var1 = (int32_t)self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_i32 for (self: Numeric): Int32 */
int32_t VIRTUAL_core___core__UInt32___Numeric__to_i32(val* self) {
int32_t var /* : Int32 */;
int32_t var1 /* : Int32 */;
uint32_t var3 /* : UInt32 */;
int32_t var4 /* : Int32 */;
{ /* Inline fixed_ints#UInt32#to_i32 (self) on <self:Numeric(UInt32)> */
var3 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var4 = (int32_t)var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_u32 for (self: UInt32): UInt32 */
uint32_t core___core__UInt32___Numeric__to_u32(uint32_t self) {
uint32_t var /* : UInt32 */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_u32 for (self: Numeric): UInt32 */
uint32_t VIRTUAL_core___core__UInt32___Numeric__to_u32(val* self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
uint32_t var2 /* : UInt32 */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Numeric to UInt32 */;
var1 = core___core__UInt32___Numeric__to_u32(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#distance for (self: UInt32, UInt32): Int */
long core___core__UInt32___core__kernel__Discrete__distance(uint32_t self, uint32_t p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_i /* var i: UInt32 */;
uint32_t var2 /* : UInt32 */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
uint32_t var8 /* : UInt32 */;
long var9 /* : Int */;
long var11 /* : Int */;
/* Covariant cast for argument 0 (i) <p0:UInt32> isa OTHER */
/* <p0:UInt32> isa OTHER */
var1 = 1; /* easy <p0:UInt32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 749);
fatal_exit(1);
}
var_i = p0;
{
{ /* Inline fixed_ints#UInt32#- (self,var_i) on <self:UInt32> */
/* Covariant cast for argument 0 (i) <var_i:UInt32> isa OTHER */
/* <var_i:UInt32> isa OTHER */
var4 = 1; /* easy <var_i:UInt32> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 712);
fatal_exit(1);
}
var8 = self - var_i;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline fixed_ints#UInt32#to_i (var2) on <var2:UInt32> */
var11 = (long)var2;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#distance for (self: Discrete, Discrete): Int */
long VIRTUAL_core___core__UInt32___core__kernel__Discrete__distance(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
uint32_t var2 /* : UInt32 */;
uint32_t var3 /* : UInt32 */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Discrete to UInt32 */;
var3 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from Discrete to UInt32 */;
var1 = core___core__UInt32___core__kernel__Discrete__distance(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#<=> for (self: UInt32, UInt32): Int */
long core___core__UInt32___core__kernel__Comparable___60d_61d_62d(uint32_t self, uint32_t p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_other /* var other: UInt32 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:UInt32> isa OTHER */
/* <p0:UInt32> isa OTHER */
var1 = 1; /* easy <p0:UInt32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 751);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline fixed_ints#UInt32#< (self,var_other) on <self:UInt32> */
/* Covariant cast for argument 0 (i) <var_other:UInt32> isa OTHER */
/* <var_other:UInt32> isa OTHER */
var4 = 1; /* easy <var_other:UInt32> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 704);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var11 = -1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
{
{ /* Inline fixed_ints#UInt32#< (var_other,self) on <var_other:UInt32> */
/* Covariant cast for argument 0 (i) <self:UInt32> isa OTHER */
/* <self:UInt32> isa OTHER */
var14 = 1; /* easy <self:UInt32> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 704);
fatal_exit(1);
}
var18 = var_other < self;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#<=> for (self: Comparable, Comparable): Int */
long VIRTUAL_core___core__UInt32___core__kernel__Comparable___60d_61d_62d(val* self, val* p0) {
long var /* : Int */;
long var1 /* : Int */;
uint32_t var2 /* : UInt32 */;
uint32_t var3 /* : UInt32 */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Comparable to UInt32 */;
var3 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from Comparable to UInt32 */;
var1 = core___core__UInt32___core__kernel__Comparable___60d_61d_62d(var2, var3);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#is_between for (self: UInt32, UInt32, UInt32): Bool */
short int core___core__UInt32___core__kernel__Comparable__is_between(uint32_t self, uint32_t p0, uint32_t p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const char* var_class_name5;
uint32_t var_c /* var c: UInt32 */;
uint32_t var_d /* var d: UInt32 */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:UInt32> isa OTHER */
/* <p0:UInt32> isa OTHER */
var1 = 1; /* easy <p0:UInt32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 762);
fatal_exit(1);
}
/* Covariant cast for argument 1 (d) <p1:UInt32> isa OTHER */
/* <p1:UInt32> isa OTHER */
var2 = 1; /* easy <p1:UInt32> isa OTHER*/
if (unlikely(!var2)) {
var_class_name5 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 762);
fatal_exit(1);
}
var_c = p0;
var_d = p1;
{
{ /* Inline fixed_ints#UInt32#< (self,var_c) on <self:UInt32> */
/* Covariant cast for argument 0 (i) <var_c:UInt32> isa OTHER */
/* <var_c:UInt32> isa OTHER */
var9 = 1; /* easy <var_c:UInt32> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 704);
fatal_exit(1);
}
var13 = self < var_c;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
var6 = var_;
} else {
{
{ /* Inline fixed_ints#UInt32#< (var_d,self) on <var_d:UInt32> */
/* Covariant cast for argument 0 (i) <self:UInt32> isa OTHER */
/* <self:UInt32> isa OTHER */
var16 = 1; /* easy <self:UInt32> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 704);
fatal_exit(1);
}
var20 = var_d < self;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var6 = var14;
}
if (var6){
var = 0;
goto RET_LABEL;
} else {
var = 1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#is_between for (self: Comparable, Comparable, Comparable): Bool */
short int VIRTUAL_core___core__UInt32___core__kernel__Comparable__is_between(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
uint32_t var2 /* : UInt32 */;
uint32_t var3 /* : UInt32 */;
uint32_t var4 /* : UInt32 */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Comparable to UInt32 */;
var3 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from Comparable to UInt32 */;
var4 = ((struct instance_core__UInt32*)p1)->value; /* autounbox from Comparable to UInt32 */;
var1 = core___core__UInt32___core__kernel__Comparable__is_between(var2, var3, var4);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#max for (self: UInt32, UInt32): UInt32 */
uint32_t core___core__UInt32___core__kernel__Comparable__max(uint32_t self, uint32_t p0) {
uint32_t var /* : UInt32 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_other /* var other: UInt32 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:UInt32> isa OTHER */
/* <p0:UInt32> isa OTHER */
var1 = 1; /* easy <p0:UInt32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 771);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline fixed_ints#UInt32#< (self,var_other) on <self:UInt32> */
/* Covariant cast for argument 0 (i) <var_other:UInt32> isa OTHER */
/* <var_other:UInt32> isa OTHER */
var4 = 1; /* easy <var_other:UInt32> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 704);
fatal_exit(1);
}
var8 = self < var_other;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_other;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#max for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__UInt32___core__kernel__Comparable__max(val* self, val* p0) {
val* var /* : Comparable */;
uint32_t var1 /* : UInt32 */;
uint32_t var2 /* : UInt32 */;
uint32_t var3 /* : UInt32 */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Comparable to UInt32 */;
var3 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from Comparable to UInt32 */;
var1 = core___core__UInt32___core__kernel__Comparable__max(var2, var3);
var4 = BOX_core__UInt32(var1); /* autobox from UInt32 to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#min for (self: UInt32, UInt32): UInt32 */
uint32_t core___core__UInt32___core__kernel__Comparable__min(uint32_t self, uint32_t p0) {
uint32_t var /* : UInt32 */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_c /* var c: UInt32 */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
/* Covariant cast for argument 0 (c) <p0:UInt32> isa OTHER */
/* <p0:UInt32> isa OTHER */
var1 = 1; /* easy <p0:UInt32> isa OTHER*/
if (unlikely(!var1)) {
var_class_name = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 780);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline fixed_ints#UInt32#< (var_c,self) on <var_c:UInt32> */
/* Covariant cast for argument 0 (i) <self:UInt32> isa OTHER */
/* <self:UInt32> isa OTHER */
var4 = 1; /* easy <self:UInt32> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 704);
fatal_exit(1);
}
var8 = var_c < self;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = var_c;
goto RET_LABEL;
} else {
var = self;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#min for (self: Comparable, Comparable): Comparable */
val* VIRTUAL_core___core__UInt32___core__kernel__Comparable__min(val* self, val* p0) {
val* var /* : Comparable */;
uint32_t var1 /* : UInt32 */;
uint32_t var2 /* : UInt32 */;
uint32_t var3 /* : UInt32 */;
val* var4 /* : Comparable */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Comparable to UInt32 */;
var3 = ((struct instance_core__UInt32*)p0)->value; /* autounbox from Comparable to UInt32 */;
var1 = core___core__UInt32___core__kernel__Comparable__min(var2, var3);
var4 = BOX_core__UInt32(var1); /* autobox from UInt32 to Comparable */
var = var4;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#& for (self: UInt32, UInt32): UInt32 */
uint32_t core___core__UInt32____38d(uint32_t self, uint32_t p0) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = self & p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#| for (self: UInt32, UInt32): UInt32 */
uint32_t core___core__UInt32____124d(uint32_t self, uint32_t p0) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = self | p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#^ for (self: UInt32, UInt32): UInt32 */
uint32_t core___core__UInt32____94d(uint32_t self, uint32_t p0) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = self ^ p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#unary ~ for (self: UInt32): UInt32 */
uint32_t core___core__UInt32___unary_32d_126d(uint32_t self) {
uint32_t var /* : UInt32 */;
uint32_t var1 /* : UInt32 */;
var1 = ~self;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_s_len for (self: UInt32): Int */
long core___core__UInt32___to_s_len(uint32_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__fixed_ints___UInt32_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#native_to_s for (self: UInt32, NativeString, Int) */
void core___core__UInt32___native_to_s(uint32_t self, char* p0, long p1) {
core__fixed_ints___UInt32_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints#UInt32#to_s for (self: UInt32): String */
val* core___core__UInt32___core__abstract_text__Object__to_s(uint32_t self) {
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
val* var18 /* : FlatString */;
var1 = core___core__UInt32___to_s_len(self);
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
core___core__UInt32___native_to_s(self, var_ns, var11); /* Direct call fixed_ints#UInt32#native_to_s on <self:UInt32>*/
var18 = core__flat___NativeString___to_s_with_length(var_ns, var_nslen);
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#UInt32#to_s for (self: Object): String */
val* VIRTUAL_core___core__UInt32___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
uint32_t var2 /* : UInt32 */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Object to UInt32 */;
var1 = core___core__UInt32___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints#Text#strip_numhead for (self: Text): Text */
val* core__fixed_ints___Text___strip_numhead(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
val* var6 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__fixed_ints__Text__get_numhead]))(self); /* get_numhead on <self:Text>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = core__flat___NativeString___to_s_full(var3, 0l, 0l);
var2 = var4;
varonce = var2;
}
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, var2); /* != on <var1:Text>*/
}
if (var5){
{
var6 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__substring_from]))(self, 2l); /* substring_from on <self:Text>*/
}
var = var6;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Text#get_numhead for (self: Text): Text */
val* core__fixed_ints___Text___get_numhead(val* self) {
val* var /* : Text */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
uint32_t var9 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
uint32_t var18 /* : Char */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var_30 /* var : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var_38 /* var : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var_42 /* var : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : Text */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#< (var1,2l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var4 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var5 = var1 < 2l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
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
{
var9 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, 0l); /* [] on <self:Text>*/
}
var_c = var9;
{
{ /* Inline kernel#Char#!= (var_c,'0') on <var_c:Char> */
var12 = var_c == '0';
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "";
var17 = core__flat___NativeString___to_s_full(var16, 0l, 0l);
var15 = var17;
varonce14 = var15;
}
var = var15;
goto RET_LABEL;
} else {
}
{
var18 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, 1l); /* [] on <self:Text>*/
}
var_c = var18;
{
{ /* Inline kernel#Char#== (var_c,'x') on <var_c:Char> */
var26 = var_c == 'x';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_ = var24;
if (var24){
var23 = var_;
} else {
{
{ /* Inline kernel#Char#== (var_c,'b') on <var_c:Char> */
var29 = var_c == 'b';
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var23 = var27;
}
var_30 = var23;
if (var23){
var22 = var_30;
} else {
{
{ /* Inline kernel#Char#== (var_c,'o') on <var_c:Char> */
var33 = var_c == 'o';
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var22 = var31;
}
var_34 = var22;
if (var22){
var21 = var_34;
} else {
{
{ /* Inline kernel#Char#== (var_c,'X') on <var_c:Char> */
var37 = var_c == 'X';
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var21 = var35;
}
var_38 = var21;
if (var21){
var20 = var_38;
} else {
{
{ /* Inline kernel#Char#== (var_c,'B') on <var_c:Char> */
var41 = var_c == 'B';
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var20 = var39;
}
var_42 = var20;
if (var20){
var19 = var_42;
} else {
{
{ /* Inline kernel#Char#== (var_c,'O') on <var_c:Char> */
var45 = var_c == 'O';
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var19 = var43;
}
if (var19){
{
var46 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, 2l); /* substring on <self:Text>*/
}
var = var46;
goto RET_LABEL;
} else {
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "";
var50 = core__flat___NativeString___to_s_full(var49, 0l, 0l);
var48 = var50;
varonce47 = var48;
}
var = var48;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Text#strip_numext for (self: Text): Text */
val* core__fixed_ints___Text___strip_numext(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
val* var_ext /* var ext: Text */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
val* var12 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__fixed_ints__Text__get_numext]))(self); /* get_numext on <self:Text>*/
}
var_ext = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = core__flat___NativeString___to_s_full(var3, 0l, 0l);
var2 = var4;
varonce = var2;
}
{
var5 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_ext, var2); /* != on <var_ext:Text>*/
}
if (var5){
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var7 = ((long(*)(val* self))(var_ext->class->vft[COLOR_core__abstract_text__Text__length]))(var_ext); /* length on <var_ext:Text>*/
}
{
{ /* Inline kernel#Int#- (var6,var7) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var11 = var6 - var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var12 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var8); /* substring on <self:Text>*/
}
var = var12;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Text#get_numext for (self: Text): Text */
val* core__fixed_ints___Text___get_numext(val* self) {
val* var /* : Text */;
long var1 /* : Int */;
long var_len /* var len: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var_max /* var max: Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
uint32_t var23 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
val* var39 /* : Text */;
long var40 /* : Int */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : String */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_len = var1;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#< (var3,3l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var6 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 722);
fatal_exit(1);
}
var7 = var3 < 3l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var2 = var8;
} else {
var2 = 3l;
}
var_max = var2;
var_i = 1l;
var_ = var_max;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var11 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var15 = var_i <= var_;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel#Int#- (var_len,var_i) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var18 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_len - var_i;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
var23 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var16); /* [] on <self:Text>*/
}
var_c = var23;
{
{ /* Inline kernel#Char#== (var_c,'i') on <var_c:Char> */
var27 = var_c == 'i';
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_28 = var25;
if (var25){
var24 = var_28;
} else {
{
{ /* Inline kernel#Char#== (var_c,'u') on <var_c:Char> */
var31 = var_c == 'u';
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var24 = var29;
}
if (var24){
{
{ /* Inline kernel#Int#- (var_len,var_i) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var34 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var38 = var_len - var_i;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
var39 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__substring_from]))(self, var32); /* substring_from on <self:Text>*/
}
var = var39;
goto RET_LABEL;
} else {
}
var40 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var40;
}
BREAK_label: (void)0;
if (likely(varonce!=NULL)) {
var41 = varonce;
} else {
var42 = "";
var43 = core__flat___NativeString___to_s_full(var42, 0l, 0l);
var41 = var43;
varonce = var41;
}
var = var41;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Text#is_int for (self: Text): Bool */
short int core__fixed_ints___Text___is_int(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Pattern */;
val* var6 /* : String */;
val* var_s /* var s: String */;
long var_pos /* var pos: Int */;
uint32_t var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
val* var15 /* : Text */;
val* var16 /* : Text */;
val* var_rets /* var rets: Text */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
short int var20 /* : Bool */;
val* var21 /* : Text */;
val* var_hd /* var hd: Text */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
short int var27 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : String */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
short int var39 /* : Bool */;
short int var_40 /* var : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
short int var52 /* : Bool */;
short int var_53 /* var : Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : String */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__bytelen]))(self); /* bytelen on <self:Text>*/
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
var = 0;
goto RET_LABEL;
} else {
}
{
var5 = (val*)((long)('_')<<2|2);
var6 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__string_search__Text__remove_all]))(self, var5); /* remove_all on <self:Text>*/
}
var_s = var6;
var_pos = 0l;
for(;;) {
{
var7 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, var_pos); /* [] on <var_s:String>*/
}
{
{ /* Inline kernel#Char#== (var7,'-') on <var7:Char> */
var10 = var7 == '-';
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_pos + 1l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_pos = var11;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var15 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, var_pos); /* substring_from on <var_s:String>*/
}
var_s = var15;
{
var16 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__fixed_ints__Text__strip_numhead]))(var_s); /* strip_numhead on <var_s:String>*/
}
var_rets = var16;
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "";
var19 = core__flat___NativeString___to_s_full(var18, 0l, 0l);
var17 = var19;
varonce = var17;
}
{
var20 = ((short int(*)(val* self, val* p0))(var_rets->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rets, var17); /* == on <var_rets:Text>*/
}
if (var20){
var = 0;
goto RET_LABEL;
} else {
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_core__fixed_ints__Text__get_numhead]))(self); /* get_numhead on <self:Text>*/
}
var_hd = var21;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "0x";
var26 = core__flat___NativeString___to_s_full(var25, 2l, 2l);
var24 = var26;
varonce23 = var24;
}
{
var27 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var24); /* == on <var_hd:Text>*/
}
var_ = var27;
if (var27){
var22 = var_;
} else {
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "0X";
var31 = core__flat___NativeString___to_s_full(var30, 2l, 2l);
var29 = var31;
varonce28 = var29;
}
{
var32 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var29); /* == on <var_hd:Text>*/
}
var22 = var32;
}
if (var22){
{
var33 = ((short int(*)(val* self))(var_rets->class->vft[COLOR_core__abstract_text__Text__is_hex]))(var_rets); /* is_hex on <var_rets:Text>*/
}
var = var33;
goto RET_LABEL;
} else {
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "0b";
var38 = core__flat___NativeString___to_s_full(var37, 2l, 2l);
var36 = var38;
varonce35 = var36;
}
{
var39 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var36); /* == on <var_hd:Text>*/
}
var_40 = var39;
if (var39){
var34 = var_40;
} else {
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "0B";
var44 = core__flat___NativeString___to_s_full(var43, 2l, 2l);
var42 = var44;
varonce41 = var42;
}
{
var45 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var42); /* == on <var_hd:Text>*/
}
var34 = var45;
}
if (var34){
{
var46 = ((short int(*)(val* self))(var_rets->class->vft[COLOR_core__abstract_text__Text__is_bin]))(var_rets); /* is_bin on <var_rets:Text>*/
}
var = var46;
goto RET_LABEL;
} else {
}
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "0o";
var51 = core__flat___NativeString___to_s_full(var50, 2l, 2l);
var49 = var51;
varonce48 = var49;
}
{
var52 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var49); /* == on <var_hd:Text>*/
}
var_53 = var52;
if (var52){
var47 = var_53;
} else {
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "0O";
var57 = core__flat___NativeString___to_s_full(var56, 2l, 2l);
var55 = var57;
varonce54 = var55;
}
{
var58 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var55); /* == on <var_hd:Text>*/
}
var47 = var58;
}
if (var47){
{
var59 = ((short int(*)(val* self))(var_rets->class->vft[COLOR_core__abstract_text__Text__is_oct]))(var_rets); /* is_oct on <var_rets:Text>*/
}
var = var59;
goto RET_LABEL;
} else {
}
{
var60 = ((short int(*)(val* self))(var_hd->class->vft[COLOR_core__abstract_text__Text__is_dec]))(var_hd); /* is_dec on <var_hd:Text>*/
}
var = var60;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints#Text#to_i for (self: Text): Int */
long core__fixed_ints___Text___to_i(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
val* var2 /* : Pattern */;
val* var3 /* : String */;
val* var_s /* var s: String */;
long var_val /* var val: Int */;
short int var_neg /* var neg: Bool */;
long var_pos /* var pos: Int */;
uint32_t var4 /* : Char */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
val* var13 /* : Text */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
uint32_t var22 /* : Char */;
uint32_t var_s1 /* var s1: Char */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : Text */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : Text */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var_46 /* var : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : Text */;
long var51 /* : Int */;
short int var52 /* : Bool */;
long var53 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
long var58 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__fixed_ints__Text__is_int]))(self); /* is_int on <self:Text>*/
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 921);
fatal_exit(1);
}
{
var2 = (val*)((long)('_')<<2|2);
var3 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__string_search__Text__remove_all]))(self, var2); /* remove_all on <self:Text>*/
}
var_s = var3;
var_val = 0l;
var_neg = 0;
var_pos = 0l;
for(;;) {
{
var4 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, var_pos); /* [] on <var_s:String>*/
}
{
{ /* Inline kernel#Char#== (var4,'-') on <var4:Char> */
var7 = var4 == '-';
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var8 = !var_neg;
var_neg = var8;
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var_pos + 1l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_pos = var9;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var13 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, var_pos); /* substring_from on <var_s:String>*/
}
var_s = var13;
{
var14 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:String>*/
}
{
{ /* Inline kernel#Int#>= (var14,2l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var17 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var21 = var14 >= 2l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var22 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, 1l); /* [] on <var_s:String>*/
}
var_s1 = var22;
{
{ /* Inline kernel#Char#== (var_s1,'x') on <var_s1:Char> */
var26 = var_s1 == 'x';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_ = var24;
if (var24){
var23 = var_;
} else {
{
{ /* Inline kernel#Char#== (var_s1,'X') on <var_s1:Char> */
var29 = var_s1 == 'X';
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var23 = var27;
}
if (var23){
{
var30 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, 2l); /* substring_from on <var_s:String>*/
}
{
var31 = ((long(*)(val* self, val* p0, val* p1))(var30->class->vft[COLOR_core__abstract_text__Text__to_hex]))(var30, ((val*)NULL), ((val*)NULL)); /* to_hex on <var30:Text(String)>*/
}
var_val = var31;
} else {
{
{ /* Inline kernel#Char#== (var_s1,'o') on <var_s1:Char> */
var35 = var_s1 == 'o';
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_36 = var33;
if (var33){
var32 = var_36;
} else {
{
{ /* Inline kernel#Char#== (var_s1,'O') on <var_s1:Char> */
var39 = var_s1 == 'O';
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var32 = var37;
}
if (var32){
{
var40 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, 2l); /* substring_from on <var_s:String>*/
}
{
var41 = ((long(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__Text__to_oct]))(var40); /* to_oct on <var40:Text(String)>*/
}
var_val = var41;
} else {
{
{ /* Inline kernel#Char#== (var_s1,'b') on <var_s1:Char> */
var45 = var_s1 == 'b';
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_46 = var43;
if (var43){
var42 = var_46;
} else {
{
{ /* Inline kernel#Char#== (var_s1,'B') on <var_s1:Char> */
var49 = var_s1 == 'B';
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var42 = var47;
}
if (var42){
{
var50 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, 2l); /* substring_from on <var_s:String>*/
}
{
var51 = ((long(*)(val* self))(var50->class->vft[COLOR_core__abstract_text__Text__to_bin]))(var50); /* to_bin on <var50:Text(String)>*/
}
var_val = var51;
} else {
var52 = core__abstract_text___Char___is_numeric(var_s1);
if (var52){
{
var53 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__to_dec]))(var_s); /* to_dec on <var_s:String>*/
}
var_val = var53;
} else {
}
}
}
}
} else {
{
var54 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__to_dec]))(var_s); /* to_dec on <var_s:String>*/
}
var_val = var54;
}
if (var_neg){
{
{ /* Inline kernel#Int#unary - (var_val) on <var_val:Int> */
var58 = -var_val;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var55 = var56;
} else {
var55 = var_val;
}
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
