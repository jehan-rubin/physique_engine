#include "core__utf8.sep.0.h"
/* method utf8#UTF8Coder#code_char for (self: UTF8Coder, Char): Bytes */
val* core__utf8___core__utf8__UTF8Coder___core__codec_base__Coder__code_char(val* self, uint32_t p0) {
val* var /* : Bytes */;
uint32_t var_c /* var c: Char */;
val* var1 /* : String */;
val* var2 /* : Bytes */;
var_c = p0;
var1 = core__abstract_text___Char___Object__to_s(var_c);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__bytes__Text__to_bytes]))(var1); /* to_bytes on <var1:String>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8#UTF8Coder#add_char_to for (self: UTF8Coder, Char, Bytes) */
void core__utf8___core__utf8__UTF8Coder___core__codec_base__Coder__add_char_to(val* self, uint32_t p0, val* p1) {
uint32_t var_c /* var c: Char */;
val* var_stream /* var stream: Bytes */;
val* var /* : String */;
var_c = p0;
var_stream = p1;
var = core__abstract_text___Char___Object__to_s(var_c);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__bytes__Text__append_to_bytes]))(var, var_stream); /* append_to_bytes on <var:String>*/
}
RET_LABEL:;
}
/* method utf8#UTF8Coder#code_string for (self: UTF8Coder, Text): Bytes */
val* core__utf8___core__utf8__UTF8Coder___core__codec_base__Coder__code_string(val* self, val* p0) {
val* var /* : Bytes */;
val* var_s /* var s: Text */;
val* var1 /* : Bytes */;
var_s = p0;
{
var1 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__bytes__Text__to_bytes]))(var_s); /* to_bytes on <var_s:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8#UTF8Coder#add_string_to for (self: UTF8Coder, Text, Bytes) */
void core__utf8___core__utf8__UTF8Coder___core__codec_base__Coder__add_string_to(val* self, val* p0, val* p1) {
val* var_s /* var s: Text */;
val* var_b /* var b: Bytes */;
var_s = p0;
var_b = p1;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__bytes__Text__append_to_bytes]))(var_s, var_b); /* append_to_bytes on <var_s:Text>*/
}
RET_LABEL:;
}
/* method utf8#UTF8Decoder#decode_char for (self: UTF8Decoder, Bytes): Char */
uint32_t core__utf8___core__utf8__UTF8Decoder___core__codec_base__Decoder__decode_char(val* self, val* p0) {
uint32_t var /* : Char */;
val* var_b /* var b: Bytes */;
val* var1 /* : String */;
val* var_s /* var s: String */;
uint32_t var2 /* : Char */;
var_b = p0;
{
var1 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Bytes>*/
}
var_s = var1;
{
var2 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, 0l); /* [] on <var_s:String>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8#UTF8Decoder#decode_string for (self: UTF8Decoder, Bytes): String */
val* core__utf8___core__utf8__UTF8Decoder___core__codec_base__Decoder__decode_string(val* self, val* p0) {
val* var /* : String */;
val* var_b /* var b: Bytes */;
val* var1 /* : String */;
var_b = p0;
{
var1 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Bytes>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8#Sys#utf8_coder for (self: Sys): Coder */
val* core__utf8___Sys___utf8_coder(val* self) {
val* var /* : Coder */;
static val* varonce;
static int varonce_guard;
val* var1 /* : UTF8Coder */;
val* var2 /* : UTF8Coder */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_core__utf8__UTF8Coder(&type_core__utf8__UTF8Coder);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:UTF8Coder>*/
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
/* method utf8#Sys#utf8_decoder for (self: Sys): Decoder */
val* core__utf8___Sys___utf8_decoder(val* self) {
val* var /* : Decoder */;
static val* varonce;
static int varonce_guard;
val* var1 /* : UTF8Decoder */;
val* var2 /* : UTF8Decoder */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_core__utf8__UTF8Decoder(&type_core__utf8__UTF8Decoder);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:UTF8Decoder>*/
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
