#include "core__file.sep.0.h"
/* method file#FileStream#path for (self: FileStream): nullable String */
val* core___core__FileStream___path(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_core__file__FileStream___path].val; /* _path on <self:FileStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStream#path= for (self: FileStream, nullable String) */
void core___core__FileStream___path_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__FileStream___path].val = p0; /* _path on <self:FileStream> */
RET_LABEL:;
}
/* method file#FileStream#file for (self: FileStream): nullable NativeFile */
val* core___core__FileStream___file(val* self) {
val* var /* : nullable NativeFile */;
val* var1 /* : nullable NativeFile */;
var1 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStream#file= for (self: FileStream, nullable NativeFile) */
void core___core__FileStream___file_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__FileStream___file].val = p0; /* _file on <self:FileStream> */
RET_LABEL:;
}
/* method file#FileStream#file_stat for (self: FileStream): nullable FileStat */
val* core___core__FileStream___file_stat(val* self) {
val* var /* : nullable FileStat */;
val* var1 /* : nullable NativeFile */;
val* var2 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var3 /* : Bool */;
val* var4 /* : FileStat */;
var1 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 52);
fatal_exit(1);
} else {
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__file__NativeFile__file_stat]))(var1); /* file_stat on <var1:nullable NativeFile>*/
}
var_stat = var2;
{
var3 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var4 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__file__FileStat__stat_61d]))(var4, var_stat); /* stat= on <var4:FileStat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:FileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStream#fd for (self: FileStream): Int */
long core___core__FileStream___fd(val* self) {
long var /* : Int */;
val* var1 /* : nullable NativeFile */;
long var2 /* : Int */;
var1 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 58);
fatal_exit(1);
} else {
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__file__NativeFile__fileno]))(var1); /* fileno on <var1:nullable NativeFile>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStream#close for (self: FileStream) */
void core___core__FileStream___core__stream__Stream__close(val* self) {
val* var /* : nullable NativeFile */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable NativeFile */;
short int var4 /* : Bool */;
val* var5 /* : nullable IOError */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : IOError */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
val* var12 /* : nullable NativeFile */;
long var13 /* : Int */;
long var_i /* var i: Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : IOError */;
val* var20 /* : NativeArray[String] */;
static val* varonce19;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : String */;
val* var25 /* : Sys */;
val* var27 /* : Sys */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : String */;
var = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, ((val*)NULL)); /* == on <var:nullable NativeFile>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 63);
fatal_exit(1);
} else {
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var3); /* address_is_null on <var3:nullable NativeFile>*/
}
if (var4){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:FileStream>*/
}
if (var5 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___33d_61d]))(var5, ((val*)NULL)); /* != on <var5:nullable IOError>*/
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
var8 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "Cannot close unopened file";
var11 = core__flat___NativeString___to_s_full(var10, 26l, 26l);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__error__Error__message_61d]))(var8, var9); /* message= on <var8:IOError>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var8); /* last_error= on <self:FileStream>*/
}
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 68);
fatal_exit(1);
} else {
var13 = ((long(*)(val* self))(var12->class->vft[COLOR_core__file__NativeFile__io_close]))(var12); /* io_close on <var12:nullable NativeFile>*/
}
var_i = var13;
{
{ /* Inline kernel#Int#!= (var_i,0l) on <var_i:Int> */
var16 = var_i == 0l;
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var18 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce19==NULL)) {
var20 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "Close failed due to error ";
var24 = core__flat___NativeString___to_s_full(var23, 26l, 26l);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var20)->values[0]=var22;
} else {
var20 = varonce19;
varonce19 = NULL;
}
{
{ /* Inline kernel#Object#sys (self) on <self:FileStream> */
var27 = glob_sys;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
var28 = ((long(*)(val* self))(var25->class->vft[COLOR_core__kernel__Sys__errno]))(var25); /* errno on <var25:Sys>*/
}
var29 = core__abstract_text___Int___strerror(var28);
((struct instance_core__NativeArray*)var20)->values[1]=var29;
{
var30 = ((val*(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce19 = var20;
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_core__error__Error__message_61d]))(var18, var30); /* message= on <var18:IOError>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_core__kernel__Object__init]))(var18); /* init on <var18:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var18); /* last_error= on <self:FileStream>*/
}
} else {
}
self->attrs[COLOR_core__file__FileStream___file].val = ((val*)NULL); /* _file on <self:FileStream> */
RET_LABEL:;
}
/* method file#FileStream#set_buffering_mode for (self: FileStream, Int, Int) */
void core___core__FileStream___set_buffering_mode(val* self, long p0, long p1) {
long var_buf_size /* var buf_size: Int */;
long var_mode /* var mode: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
val* var4 /* : nullable NativeFile */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : IOError */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
val* var16 /* : Sys */;
val* var18 /* : Sys */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : String */;
var_buf_size = p0;
var_mode = p1;
{
{ /* Inline kernel#Int#<= (var_buf_size,0l) on <var_buf_size:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var3 = var_buf_size <= 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
var_buf_size = 512l;
} else {
}
var4 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 86);
fatal_exit(1);
} else {
var5 = ((long(*)(val* self, long p0, long p1))(var4->class->vft[COLOR_core__file__NativeFile__set_buffering_type]))(var4, var_buf_size, var_mode); /* set_buffering_type on <var4:nullable NativeFile>*/
}
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
var10 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Error while changing buffering type for FileStream, returned error ";
var15 = core__flat___NativeString___to_s_full(var14, 67l, 67l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
} else {
var11 = varonce;
varonce = NULL;
}
{
{ /* Inline kernel#Object#sys (self) on <self:FileStream> */
var18 = glob_sys;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
var19 = ((long(*)(val* self))(var16->class->vft[COLOR_core__kernel__Sys__errno]))(var16); /* errno on <var16:Sys>*/
}
var20 = core__abstract_text___Int___strerror(var19);
((struct instance_core__NativeArray*)var11)->values[1]=var20;
{
var21 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__error__Error__message_61d]))(var10, var21); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var10); /* last_error= on <self:FileStream>*/
}
} else {
}
RET_LABEL:;
}
/* method file#FileReader#reopen for (self: FileReader) */
void core___core__FileReader___reopen(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
val* var3 /* : nullable NativeFile */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : NativeFile */;
val* var7 /* : nullable String */;
char* var8 /* : NativeString */;
val* var9 /* : NativeFile */;
val* var10 /* : nullable NativeFile */;
short int var11 /* : Bool */;
val* var12 /* : IOError */;
val* var13 /* : NativeArray[String] */;
static val* varonce;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
val* var22 /* : nullable String */;
val* var23 /* : Sys */;
val* var25 /* : Sys */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:FileReader>*/
}
var2 = !var1;
var_ = var2;
if (var2){
var3 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 108);
fatal_exit(1);
} else {
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var3); /* address_is_null on <var3:nullable NativeFile>*/
}
var5 = !var4;
var = var5;
} else {
var = var_;
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__close]))(self); /* close on <self:FileReader>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:FileReader>*/
}
var6 = NEW_core__file__NativeFile(&type_core__file__NativeFile);
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStream__path]))(self); /* path on <self:FileReader>*/
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 110);
fatal_exit(1);
} else {
var8 = ((char*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var7); /* to_cstring on <var7:nullable String>*/
}
{
var9 = ((val*(*)(val* self, char* p0))(var6->class->vft[COLOR_core__file__NativeFile__io_open_read]))(var6, var8); /* io_open_read on <var6:NativeFile>*/
}
self->attrs[COLOR_core__file__FileStream___file].val = var9; /* _file on <self:FileReader> */
var10 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 111);
fatal_exit(1);
} else {
var11 = ((short int(*)(val* self))(var10->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var10); /* address_is_null on <var10:nullable NativeFile>*/
}
if (var11){
var12 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var13 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "Cannot open `";
var17 = core__flat___NativeString___to_s_full(var16, 13l, 13l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var13)->values[0]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "`: ";
var21 = core__flat___NativeString___to_s_full(var20, 3l, 3l);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var13)->values[2]=var19;
} else {
var13 = varonce;
varonce = NULL;
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStream__path]))(self); /* path on <self:FileReader>*/
}
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 112);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var13)->values[1]=var22;
{
{ /* Inline kernel#Object#sys (self) on <self:FileReader> */
var25 = glob_sys;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
var26 = ((long(*)(val* self))(var23->class->vft[COLOR_core__kernel__Sys__errno]))(var23); /* errno on <var23:Sys>*/
}
var27 = core__abstract_text___Int___strerror(var26);
((struct instance_core__NativeArray*)var13)->values[3]=var27;
{
var28 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_core__error__Error__message_61d]))(var12, var28); /* message= on <var12:IOError>*/
}
{
((void(*)(val* self))(var12->class->vft[COLOR_core__kernel__Object__init]))(var12); /* init on <var12:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var12); /* last_error= on <self:FileReader>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 0); /* end_reached= on <self:FileReader>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__buffer_reset]))(self); /* buffer_reset on <self:FileReader>*/
}
RET_LABEL:;
}
/* method file#FileReader#close for (self: FileReader) */
void core___core__FileReader___core__stream__Stream__close(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FileReader___core__stream__Stream__close]))(self); /* close on <self:FileReader>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__buffer_reset]))(self); /* buffer_reset on <self:FileReader>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
RET_LABEL:;
}
/* method file#FileReader#fill_buffer for (self: FileReader) */
void core___core__FileReader___core__stream__BufferedReader__fill_buffer(val* self) {
val* var /* : nullable NativeFile */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
long var3 /* : Int */;
long var_nb /* var nb: Int */;
short int var4 /* : Bool */;
val* var5 /* : nullable IOError */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : nullable NativeFile */;
short int var9 /* : Bool */;
val* var10 /* : IOError */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
val* var20 /* : nullable String */;
val* var21 /* : Sys */;
val* var23 /* : Sys */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : String */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var30 /* : Bool */;
var = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:FileReader> */
var2 = self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l; /* _buffer_capacity on <self:FileReader> */
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 129);
fatal_exit(1);
} else {
var3 = ((long(*)(val* self, char* p0, long p1))(var->class->vft[COLOR_core__file__NativeFile__io_read]))(var, var1, var2); /* io_read on <var:nullable NativeFile>*/
}
var_nb = var3;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:FileReader>*/
}
if (var5 == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, ((val*)NULL)); /* == on <var5:nullable IOError>*/
var6 = var7;
}
var_ = var6;
if (var6){
var8 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 130);
fatal_exit(1);
} else {
var9 = ((short int(*)(val* self))(var8->class->vft[COLOR_core__file__NativeFile__ferror]))(var8); /* ferror on <var8:nullable NativeFile>*/
}
var4 = var9;
} else {
var4 = var_;
}
if (var4){
var10 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Cannot read `";
var15 = core__flat___NativeString___to_s_full(var14, 13l, 13l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "`: ";
var19 = core__flat___NativeString___to_s_full(var18, 3l, 3l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var11)->values[2]=var17;
} else {
var11 = varonce;
varonce = NULL;
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStream__path]))(self); /* path on <self:FileReader>*/
}
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 131);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var11)->values[1]=var20;
{
{ /* Inline kernel#Object#sys (self) on <self:FileReader> */
var23 = glob_sys;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var24 = ((long(*)(val* self))(var21->class->vft[COLOR_core__kernel__Sys__errno]))(var21); /* errno on <var21:Sys>*/
}
var25 = core__abstract_text___Int___strerror(var24);
((struct instance_core__NativeArray*)var11)->values[3]=var25;
{
var26 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__error__Error__message_61d]))(var10, var26); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var10); /* last_error= on <self:FileReader>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
} else {
}
{
{ /* Inline kernel#Int#<= (var_nb,0l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var29 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var30 = var_nb <= 0l;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
var_nb = 0l;
} else {
}
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = var_nb; /* _buffer_length on <self:FileReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:FileReader> */
RET_LABEL:;
}
/* method file#FileReader#end_reached for (self: FileReader): Bool */
short int core___core__FileReader___core__stream__BufferedReader__end_reached(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__file__FileReader___end_reached].s; /* _end_reached on <self:FileReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileReader#end_reached= for (self: FileReader, Bool) */
void core___core__FileReader___end_reached_61d(val* self, short int p0) {
self->attrs[COLOR_core__file__FileReader___end_reached].s = p0; /* _end_reached on <self:FileReader> */
RET_LABEL:;
}
/* method file#FileReader#open for (self: FileReader, String) */
void core___core__FileReader___open(val* self, val* p0) {
val* var_path /* var path: String */;
val* var /* : NativeFile */;
char* var1 /* : NativeString */;
val* var2 /* : NativeFile */;
val* var3 /* : nullable NativeFile */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
val* var15 /* : Sys */;
val* var17 /* : Sys */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FileReader>*/
}
var_path = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var_path); /* path= on <self:FileReader>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__stream__BufferedReader__prepare_buffer]))(self, 100l); /* prepare_buffer on <self:FileReader>*/
}
var = NEW_core__file__NativeFile(&type_core__file__NativeFile);
{
var1 = ((char*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_path); /* to_cstring on <var_path:String>*/
}
{
var2 = ((val*(*)(val* self, char* p0))(var->class->vft[COLOR_core__file__NativeFile__io_open_read]))(var, var1); /* io_open_read on <var:NativeFile>*/
}
self->attrs[COLOR_core__file__FileStream___file].val = var2; /* _file on <self:FileReader> */
var3 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 161);
fatal_exit(1);
} else {
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var3); /* address_is_null on <var3:nullable NativeFile>*/
}
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Cannot open `";
var10 = core__flat___NativeString___to_s_full(var9, 13l, 13l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "`: ";
var14 = core__flat___NativeString___to_s_full(var13, 3l, 3l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var6)->values[1]=var_path;
{
{ /* Inline kernel#Object#sys (self) on <self:FileReader> */
var17 = glob_sys;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var18 = ((long(*)(val* self))(var15->class->vft[COLOR_core__kernel__Sys__errno]))(var15); /* errno on <var15:Sys>*/
}
var19 = core__abstract_text___Int___strerror(var18);
((struct instance_core__NativeArray*)var6)->values[3]=var19;
{
var20 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var20); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileReader>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
} else {
}
RET_LABEL:;
}
/* method file#FileReader#from_fd for (self: FileReader, Int) */
void core___core__FileReader___from_fd(val* self, long p0) {
long var_fd /* var fd: Int */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : Sys */;
char* var4 /* : NativeString */;
val* var5 /* : NativeFile */;
val* var6 /* : nullable NativeFile */;
short int var7 /* : Bool */;
val* var8 /* : IOError */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : Sys */;
val* var26 /* : Sys */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FileReader>*/
}
var_fd = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var2 = core__flat___NativeString___to_s_full(var1, 0l, 0l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var); /* path= on <self:FileReader>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__stream__BufferedReader__prepare_buffer]))(self, 1l); /* prepare_buffer on <self:FileReader>*/
}
var3 = glob_sys;
{
var4 = ((char*(*)(val* self))(var3->class->vft[COLOR_core__file__Sys__read_only]))(var3); /* read_only on <var3:Sys>*/
}
var5 = core__file___Int___fd_to_stream(var_fd, var4);
self->attrs[COLOR_core__file__FileStream___file].val = var5; /* _file on <self:FileReader> */
var6 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 174);
fatal_exit(1);
} else {
var7 = ((short int(*)(val* self))(var6->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var6); /* address_is_null on <var6:nullable NativeFile>*/
}
if (var7){
var8 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce9==NULL)) {
var10 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Error: Converting fd ";
var14 = core__flat___NativeString___to_s_full(var13, 21l, 21l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = " to stream failed with \'";
var18 = core__flat___NativeString___to_s_full(var17, 24l, 24l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "\'";
var22 = core__flat___NativeString___to_s_full(var21, 1l, 1l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var10)->values[4]=var20;
} else {
var10 = varonce9;
varonce9 = NULL;
}
var23 = core__flat___Int___core__abstract_text__Object__to_s(var_fd);
((struct instance_core__NativeArray*)var10)->values[1]=var23;
{
{ /* Inline kernel#Object#sys (self) on <self:FileReader> */
var26 = glob_sys;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var27 = ((long(*)(val* self))(var24->class->vft[COLOR_core__kernel__Sys__errno]))(var24); /* errno on <var24:Sys>*/
}
var28 = core__abstract_text___Int___strerror(var27);
((struct instance_core__NativeArray*)var10)->values[3]=var28;
{
var29 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__error__Error__message_61d]))(var8, var29); /* message= on <var8:IOError>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var8); /* last_error= on <self:FileReader>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
} else {
}
RET_LABEL:;
}
/* method file#FileReader#poll_in for (self: FileReader): Bool */
short int core___core__FileReader___core__stream__PollableReader__poll_in(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
long var_res /* var res: Int */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : IOError */;
val* var10 /* : Sys */;
long var11 /* : Int */;
val* var12 /* : String */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var16 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__file__FileStream__fd]))(self); /* fd on <self:FileReader>*/
}
{
var2 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__file__FileReader__native_poll_in]))(self, var1); /* native_poll_in on <self:FileReader>*/
}
var_res = var2;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var5 = -1l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_res,var3) on <var_res:Int> */
var8 = var_res == var3;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var9 = NEW_core__IOError(&type_core__IOError);
var10 = glob_sys;
{
var11 = ((long(*)(val* self))(var10->class->vft[COLOR_core__kernel__Sys__errno]))(var10); /* errno on <var10:Sys>*/
}
var12 = core__flat___Int___core__abstract_text__Object__to_s(var11);
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_core__error__Error__message_61d]))(var9, var12); /* message= on <var9:IOError>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var9); /* last_error= on <self:FileReader>*/
}
var = 0;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#> (var_res,0l) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var15 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var16 = var_res > 0l;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var = var13;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file#FileReader#native_poll_in for (self: FileReader, Int): Int */
long core___core__FileReader___native_poll_in(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__file___FileReader_native_poll_in___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileWriter#write_bytes for (self: FileWriter, Bytes) */
void core___core__FileWriter___core__stream__Writer__write_bytes(val* self, val* p0) {
val* var_s /* var s: Bytes */;
val* var /* : nullable IOError */;
short int var1 /* : Bool */;
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
var_s = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:FileWriter>*/
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
var3 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var4 = !var3;
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "cannot write to non-writable stream";
var8 = core__flat___NativeString___to_s_full(var7, 35l, 35l);
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
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileWriter>*/
}
goto RET_LABEL;
} else {
}
{
var9 = ((char*(*)(val* self))(var_s->class->vft[COLOR_core__bytes__Bytes__items]))(var_s); /* items on <var_s:Bytes>*/
}
{
var10 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Bytes>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2))(self->class->vft[COLOR_core__file__FileWriter__write_native]))(self, var9, 0l, var10); /* write_native on <self:FileWriter>*/
}
RET_LABEL:;
}
/* method file#FileWriter#write for (self: FileWriter, Text) */
void core___core__FileWriter___core__stream__Writer__write(val* self, val* p0) {
val* var_s /* var s: Text */;
val* var /* : nullable IOError */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
var_s = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:FileWriter>*/
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
var3 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var4 = !var3;
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "cannot write to non-writable stream";
var8 = core__flat___NativeString___to_s_full(var7, 35l, 35l);
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
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileWriter>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__file__Text__write_native_to]))(var_s, self); /* write_native_to on <var_s:Text>*/
}
RET_LABEL:;
}
/* method file#FileWriter#write_byte for (self: FileWriter, Byte) */
void core___core__FileWriter___core__stream__Writer__write_byte(val* self, unsigned char p0) {
unsigned char var_value /* var value: Byte */;
val* var /* : nullable IOError */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : nullable NativeFile */;
short int var10 /* : Bool */;
val* var11 /* : IOError */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
val* var16 /* : nullable NativeFile */;
long var17 /* : Int */;
long var_err /* var err: Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : IOError */;
val* var24 /* : NativeArray[String] */;
static val* varonce23;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : String */;
var_value = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:FileWriter>*/
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
var3 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var4 = !var3;
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Cannot write to non-writable stream";
var8 = core__flat___NativeString___to_s_full(var7, 35l, 35l);
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
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileWriter>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 226);
fatal_exit(1);
} else {
var10 = ((short int(*)(val* self))(var9->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var9); /* address_is_null on <var9:nullable NativeFile>*/
}
if (var10){
var11 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Writing on a null stream";
var15 = core__flat___NativeString___to_s_full(var14, 24l, 24l);
var13 = var15;
varonce12 = var13;
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_core__error__Error__message_61d]))(var11, var13); /* message= on <var11:IOError>*/
}
{
((void(*)(val* self))(var11->class->vft[COLOR_core__kernel__Object__init]))(var11); /* init on <var11:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var11); /* last_error= on <self:FileWriter>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
goto RET_LABEL;
} else {
}
var16 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 232);
fatal_exit(1);
} else {
var17 = ((long(*)(val* self, unsigned char p0))(var16->class->vft[COLOR_core__file__NativeFile__write_byte]))(var16, var_value); /* write_byte on <var16:nullable NativeFile>*/
}
var_err = var17;
{
{ /* Inline kernel#Int#!= (var_err,1l) on <var_err:Int> */
var20 = var_err == 1l;
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
var22 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce23==NULL)) {
var24 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Problem writing a byte: ";
var28 = core__flat___NativeString___to_s_full(var27, 24l, 24l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var24)->values[0]=var26;
} else {
var24 = varonce23;
varonce23 = NULL;
}
var29 = core__flat___Int___core__abstract_text__Object__to_s(var_err);
((struct instance_core__NativeArray*)var24)->values[1]=var29;
{
var30 = ((val*(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce23 = var24;
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__error__Error__message_61d]))(var22, var30); /* message= on <var22:IOError>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var22); /* last_error= on <self:FileWriter>*/
}
} else {
}
RET_LABEL:;
}
/* method file#FileWriter#close for (self: FileWriter) */
void core___core__FileWriter___core__stream__Stream__close(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FileWriter___core__stream__Stream__close]))(self); /* close on <self:FileWriter>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
RET_LABEL:;
}
/* method file#FileWriter#is_writable for (self: FileWriter): Bool */
short int core___core__FileWriter___core__stream__Writer__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileWriter#is_writable= for (self: FileWriter, Bool) */
void core___core__FileWriter___is_writable_61d(val* self, short int p0) {
self->attrs[COLOR_core__file__FileWriter___is_writable].s = p0; /* _is_writable on <self:FileWriter> */
RET_LABEL:;
}
/* method file#FileWriter#write_native for (self: FileWriter, NativeString, Int, Int) */
void core___core__FileWriter___write_native(val* self, char* p0, long p1, long p2) {
char* var_native /* var native: NativeString */;
long var_from /* var from: Int */;
long var_len /* var len: Int */;
val* var /* : nullable IOError */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : nullable NativeFile */;
short int var10 /* : Bool */;
val* var11 /* : IOError */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
val* var16 /* : nullable NativeFile */;
long var17 /* : Int */;
long var_err /* var err: Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : IOError */;
val* var24 /* : NativeArray[String] */;
static val* varonce23;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : String */;
var_native = p0;
var_from = p1;
var_len = p2;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:FileWriter>*/
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
var3 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var4 = !var3;
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Cannot write to non-writable stream";
var8 = core__flat___NativeString___to_s_full(var7, 35l, 35l);
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
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileWriter>*/
}
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 254);
fatal_exit(1);
} else {
var10 = ((short int(*)(val* self))(var9->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var9); /* address_is_null on <var9:nullable NativeFile>*/
}
if (var10){
var11 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Writing on a null stream";
var15 = core__flat___NativeString___to_s_full(var14, 24l, 24l);
var13 = var15;
varonce12 = var13;
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_core__error__Error__message_61d]))(var11, var13); /* message= on <var11:IOError>*/
}
{
((void(*)(val* self))(var11->class->vft[COLOR_core__kernel__Object__init]))(var11); /* init on <var11:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var11); /* last_error= on <self:FileWriter>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
goto RET_LABEL;
} else {
}
var16 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 259);
fatal_exit(1);
} else {
var17 = ((long(*)(val* self, char* p0, long p1, long p2))(var16->class->vft[COLOR_core__file__NativeFile__io_write]))(var16, var_native, var_from, var_len); /* io_write on <var16:nullable NativeFile>*/
}
var_err = var17;
{
{ /* Inline kernel#Int#!= (var_err,var_len) on <var_err:Int> */
var20 = var_err == var_len;
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
var22 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce23==NULL)) {
var24 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Problem in writing : ";
var28 = core__flat___NativeString___to_s_full(var27, 21l, 21l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var24)->values[0]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " ";
var32 = core__flat___NativeString___to_s_full(var31, 1l, 1l);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var24)->values[2]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = " \n";
var36 = core__flat___NativeString___to_s_full(var35, 2l, 2l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var24)->values[4]=var34;
} else {
var24 = varonce23;
varonce23 = NULL;
}
var37 = core__flat___Int___core__abstract_text__Object__to_s(var_err);
((struct instance_core__NativeArray*)var24)->values[1]=var37;
var38 = core__flat___Int___core__abstract_text__Object__to_s(var_len);
((struct instance_core__NativeArray*)var24)->values[3]=var38;
{
var39 = ((val*(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce23 = var24;
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__error__Error__message_61d]))(var22, var39); /* message= on <var22:IOError>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var22); /* last_error= on <self:FileWriter>*/
}
} else {
}
RET_LABEL:;
}
/* method file#FileWriter#open for (self: FileWriter, String) */
void core___core__FileWriter___open(val* self, val* p0) {
val* var_path /* var path: String */;
val* var /* : NativeFile */;
char* var1 /* : NativeString */;
val* var2 /* : NativeFile */;
val* var3 /* : nullable NativeFile */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
val* var15 /* : Sys */;
val* var17 /* : Sys */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FileWriter>*/
}
var_path = p0;
var = NEW_core__file__NativeFile(&type_core__file__NativeFile);
{
var1 = ((char*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_path); /* to_cstring on <var_path:String>*/
}
{
var2 = ((val*(*)(val* self, char* p0))(var->class->vft[COLOR_core__file__NativeFile__io_open_write]))(var, var1); /* io_open_write on <var:NativeFile>*/
}
self->attrs[COLOR_core__file__FileStream___file].val = var2; /* _file on <self:FileWriter> */
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var_path); /* path= on <self:FileWriter>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:FileWriter> */
var3 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 272);
fatal_exit(1);
} else {
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var3); /* address_is_null on <var3:nullable NativeFile>*/
}
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Cannot open `";
var10 = core__flat___NativeString___to_s_full(var9, 13l, 13l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "`: ";
var14 = core__flat___NativeString___to_s_full(var13, 3l, 3l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var6)->values[1]=var_path;
{
{ /* Inline kernel#Object#sys (self) on <self:FileWriter> */
var17 = glob_sys;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var18 = ((long(*)(val* self))(var15->class->vft[COLOR_core__kernel__Sys__errno]))(var15); /* errno on <var15:Sys>*/
}
var19 = core__abstract_text___Int___strerror(var18);
((struct instance_core__NativeArray*)var6)->values[3]=var19;
{
var20 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var20); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileWriter>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileWriter__is_writable_61d]))(self, 0); /* is_writable= on <self:FileWriter>*/
}
} else {
}
RET_LABEL:;
}
/* method file#FileWriter#from_fd for (self: FileWriter, Int) */
void core___core__FileWriter___from_fd(val* self, long p0) {
long var_fd /* var fd: Int */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
val* var3 /* : Sys */;
char* var4 /* : NativeString */;
val* var5 /* : NativeFile */;
val* var6 /* : nullable NativeFile */;
short int var7 /* : Bool */;
val* var8 /* : IOError */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : Sys */;
val* var26 /* : Sys */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FileWriter>*/
}
var_fd = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var2 = core__flat___NativeString___to_s_full(var1, 0l, 0l);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var); /* path= on <self:FileWriter>*/
}
var3 = glob_sys;
{
var4 = ((char*(*)(val* self))(var3->class->vft[COLOR_core__file__Sys__wipe_write]))(var3); /* wipe_write on <var3:Sys>*/
}
var5 = core__file___Int___fd_to_stream(var_fd, var4);
self->attrs[COLOR_core__file__FileStream___file].val = var5; /* _file on <self:FileWriter> */
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:FileWriter> */
var6 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 283);
fatal_exit(1);
} else {
var7 = ((short int(*)(val* self))(var6->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var6); /* address_is_null on <var6:nullable NativeFile>*/
}
if (var7){
var8 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce9==NULL)) {
var10 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Error: Opening stream from file descriptor ";
var14 = core__flat___NativeString___to_s_full(var13, 43l, 43l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = " failed with \'";
var18 = core__flat___NativeString___to_s_full(var17, 14l, 14l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "\'";
var22 = core__flat___NativeString___to_s_full(var21, 1l, 1l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var10)->values[4]=var20;
} else {
var10 = varonce9;
varonce9 = NULL;
}
var23 = core__flat___Int___core__abstract_text__Object__to_s(var_fd);
((struct instance_core__NativeArray*)var10)->values[1]=var23;
{
{ /* Inline kernel#Object#sys (self) on <self:FileWriter> */
var26 = glob_sys;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var27 = ((long(*)(val* self))(var24->class->vft[COLOR_core__kernel__Sys__errno]))(var24); /* errno on <var24:Sys>*/
}
var28 = core__abstract_text___Int___strerror(var27);
((struct instance_core__NativeArray*)var10)->values[3]=var28;
{
var29 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__error__Error__message_61d]))(var8, var29); /* message= on <var8:IOError>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var8); /* last_error= on <self:FileWriter>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
} else {
}
RET_LABEL:;
}
/* method file#Int#fd_to_stream for (self: Int, NativeString): NativeFile */
val* core__file___Int___fd_to_stream(long self, char* p0) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___Int_fd_to_stream___impl(self, p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Stdin#init for (self: Stdin) */
void core___core__Stdin___core__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Stdin___core__kernel__Object__init]))(self); /* init on <self:Stdin>*/
}
var = NEW_core__file__NativeFile(&type_core__file__NativeFile);
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__file__NativeFile__native_stdin]))(var); /* native_stdin on <var:NativeFile>*/
}
self->attrs[COLOR_core__file__FileStream___file].val = var1; /* _file on <self:Stdin> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "/dev/stdin";
var4 = core__flat___NativeString___to_s_full(var3, 10l, 10l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var2); /* path= on <self:Stdin>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__stream__BufferedReader__prepare_buffer]))(self, 1l); /* prepare_buffer on <self:Stdin>*/
}
RET_LABEL:;
}
/* method file#Stdout#init for (self: Stdout) */
void core___core__Stdout___core__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : Sys */;
val* var7 /* : Sys */;
long var8 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Stdout___core__kernel__Object__init]))(self); /* init on <self:Stdout>*/
}
var = NEW_core__file__NativeFile(&type_core__file__NativeFile);
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__file__NativeFile__native_stdout]))(var); /* native_stdout on <var:NativeFile>*/
}
self->attrs[COLOR_core__file__FileStream___file].val = var1; /* _file on <self:Stdout> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "/dev/stdout";
var4 = core__flat___NativeString___to_s_full(var3, 11l, 11l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var2); /* path= on <self:Stdout>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:Stdout> */
{
{ /* Inline kernel#Object#sys (self) on <self:Stdout> */
var7 = glob_sys;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var8 = ((long(*)(val* self))(var5->class->vft[COLOR_core__file__Sys__buffer_mode_line]))(var5); /* buffer_mode_line on <var5:Sys>*/
}
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__file__FileStream__set_buffering_mode]))(self, 256l, var8); /* set_buffering_mode on <self:Stdout>*/
}
RET_LABEL:;
}
/* method file#Stderr#init for (self: Stderr) */
void core___core__Stderr___core__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Stderr___core__kernel__Object__init]))(self); /* init on <self:Stderr>*/
}
var = NEW_core__file__NativeFile(&type_core__file__NativeFile);
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__file__NativeFile__native_stderr]))(var); /* native_stderr on <var:NativeFile>*/
}
self->attrs[COLOR_core__file__FileStream___file].val = var1; /* _file on <self:Stderr> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "/dev/stderr";
var4 = core__flat___NativeString___to_s_full(var3, 11l, 11l);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var2); /* path= on <self:Stderr>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:Stderr> */
RET_LABEL:;
}
/* method file#Writable#write_to_file for (self: Writable, String) */
void core__file___Writable___write_to_file(val* self, val* p0) {
val* var_filepath /* var filepath: String */;
val* var /* : FileWriter */;
val* var_stream /* var stream: FileWriter */;
var_filepath = p0;
var = NEW_core__FileWriter(&type_core__FileWriter);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__file__FileWriter__open]))(var, var_filepath); /* open on <var:FileWriter>*/
}
var_stream = var;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__stream__Writable__write_to]))(self, var_stream); /* write_to on <self:Writable>*/
}
{
((void(*)(val* self))(var_stream->class->vft[COLOR_core__stream__Stream__close]))(var_stream); /* close on <var_stream:FileWriter>*/
}
RET_LABEL:;
}
/* method file#Path#path for (self: Path): String */
val* core___core__Path___path(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 370);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#Path#path= for (self: Path, String) */
void core___core__Path___path_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___path].val = p0; /* _path on <self:Path> */
RET_LABEL:;
}
/* method file#Path#to_s for (self: Path): String */
val* core___core__Path___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#filename for (self: Path): String */
val* core___core__Path___filename(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
var1 = self->attrs[COLOR_core__file__Path___filename].val != NULL; /* _filename on <self:Path> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Path___filename].val; /* _filename on <self:Path> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 375);
fatal_exit(1);
}
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__file__String__basename]))(var3, ((val*)NULL)); /* basename on <var3:String>*/
}
self->attrs[COLOR_core__file__Path___filename].val = var4; /* _filename on <self:Path> */
var2 = var4;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Path#filename= for (self: Path, String) */
void core___core__Path___filename_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___filename].val = p0; /* _filename on <self:Path> */
RET_LABEL:;
}
/* method file#Path#simplified for (self: Path): Path */
val* core___core__Path___simplified(val* self) {
val* var /* : Path */;
short int var1 /* : Bool */;
val* var2 /* : Path */;
val* var3 /* : Path */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : Path */;
val* var_res /* var res: Path */;
var1 = self->attrs[COLOR_core__file__Path___simplified].val != NULL; /* _simplified on <self:Path> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Path___simplified].val; /* _simplified on <self:Path> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _simplified");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 385);
fatal_exit(1);
}
} else {
{
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__file__String__simplify_path]))(var5); /* simplify_path on <var5:String>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__file__Text__to_path]))(var6); /* to_path on <var6:String>*/
}
var_res = var7;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__file__Path__simplified_61d]))(var_res, var_res); /* simplified= on <var_res:Path>*/
}
var3 = var_res;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__file__Path___simplified].val = var3; /* _simplified on <self:Path> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Path#simplified= for (self: Path, Path) */
void core___core__Path___simplified_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___simplified].val = p0; /* _simplified on <self:Path> */
RET_LABEL:;
}
/* method file#Path#dir for (self: Path): Path */
val* core___core__Path___dir(val* self) {
val* var /* : Path */;
short int var1 /* : Bool */;
val* var2 /* : Path */;
val* var3 /* : Path */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : Path */;
var1 = self->attrs[COLOR_core__file__Path___dir].val != NULL; /* _dir on <self:Path> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Path___dir].val; /* _dir on <self:Path> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dir");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 401);
fatal_exit(1);
}
} else {
{
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__file__String__dirname]))(var5); /* dirname on <var5:String>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__file__Text__to_path]))(var6); /* to_path on <var6:String>*/
}
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__file__Path___dir].val = var3; /* _dir on <self:Path> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Path#dir= for (self: Path, Path) */
void core___core__Path___dir_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___dir].val = p0; /* _dir on <self:Path> */
RET_LABEL:;
}
/* method file#Path#last_error for (self: Path): nullable IOError */
val* core___core__Path___last_error(val* self) {
val* var /* : nullable IOError */;
val* var1 /* : nullable IOError */;
var1 = self->attrs[COLOR_core__file__Path___last_error].val; /* _last_error on <self:Path> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#Path#last_error= for (self: Path, nullable IOError) */
void core___core__Path___last_error_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___last_error].val = p0; /* _last_error on <self:Path> */
RET_LABEL:;
}
/* method file#Path#exists for (self: Path): Bool */
short int core___core__Path___exists(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable FileStat */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__stat]))(self); /* stat on <self:Path>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable FileStat>*/
var2 = var3;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#stat for (self: Path): nullable FileStat */
val* core___core__Path___stat(val* self) {
val* var /* : nullable FileStat */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : Sys */;
val* var18 /* : Sys */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : FileStat */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
var3 = core__file___NativeString___file_stat(var2);
var_stat = var3;
{
var4 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Cannot open `";
var10 = core__flat___NativeString___to_s_full(var9, 13l, 13l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "`: ";
var14 = core__flat___NativeString___to_s_full(var13, 3l, 3l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
((struct instance_core__NativeArray*)var6)->values[1]=var15;
{
{ /* Inline kernel#Object#sys (self) on <self:Path> */
var18 = glob_sys;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
var19 = ((long(*)(val* self))(var16->class->vft[COLOR_core__kernel__Sys__errno]))(var16); /* errno on <var16:Sys>*/
}
var20 = core__abstract_text___Int___strerror(var19);
((struct instance_core__NativeArray*)var6)->values[3]=var20;
{
var21 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var21); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var5); /* last_error= on <self:Path>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:Path>*/
}
var22 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__file__FileStat__stat_61d]))(var22, var_stat); /* stat= on <var22:FileStat>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:FileStat>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#link_stat for (self: Path): nullable FileStat */
val* core___core__Path___link_stat(val* self) {
val* var /* : nullable FileStat */;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : Sys */;
val* var18 /* : Sys */;
long var19 /* : Int */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : FileStat */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
var3 = core__file___NativeString___file_lstat(var2);
var_stat = var3;
{
var4 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Cannot open `";
var10 = core__flat___NativeString___to_s_full(var9, 13l, 13l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "`: ";
var14 = core__flat___NativeString___to_s_full(var13, 3l, 3l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
((struct instance_core__NativeArray*)var6)->values[1]=var15;
{
{ /* Inline kernel#Object#sys (self) on <self:Path> */
var18 = glob_sys;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
var19 = ((long(*)(val* self))(var16->class->vft[COLOR_core__kernel__Sys__errno]))(var16); /* errno on <var16:Sys>*/
}
var20 = core__abstract_text___Int___strerror(var19);
((struct instance_core__NativeArray*)var6)->values[3]=var20;
{
var21 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var21); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var5); /* last_error= on <self:Path>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:Path>*/
}
var22 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__file__FileStat__stat_61d]))(var22, var_stat); /* stat= on <var22:FileStat>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:FileStat>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#delete for (self: Path) */
void core___core__Path___delete(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
short int var2 /* : Bool */;
short int var_res /* var res: Bool */;
short int var3 /* : Bool */;
val* var4 /* : IOError */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : Sys */;
val* var17 /* : Sys */;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var1 = ((char*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var); /* to_cstring on <var:String>*/
}
var2 = core__file___NativeString___file_delete(var1);
var_res = var2;
var3 = !var_res;
if (var3){
var4 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "Cannot delete `";
var9 = core__flat___NativeString___to_s_full(var8, 15l, 15l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "`: ";
var13 = core__flat___NativeString___to_s_full(var12, 3l, 3l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var5)->values[2]=var11;
} else {
var5 = varonce;
varonce = NULL;
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var14;
{
{ /* Inline kernel#Object#sys (self) on <self:Path> */
var17 = glob_sys;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var18 = ((long(*)(val* self))(var15->class->vft[COLOR_core__kernel__Sys__errno]))(var15); /* errno on <var15:Sys>*/
}
var19 = core__abstract_text___Int___strerror(var18);
((struct instance_core__NativeArray*)var5)->values[3]=var19;
{
var20 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__error__Error__message_61d]))(var4, var20); /* message= on <var4:IOError>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var4); /* last_error= on <self:Path>*/
}
} else {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:Path>*/
}
}
RET_LABEL:;
}
/* method file#Path#copy for (self: Path, Path) */
void core___core__Path___copy(val* self, val* p0) {
val* var_dest /* var dest: Path */;
val* var /* : FileReader */;
val* var_input /* var input: FileReader */;
val* var1 /* : FileWriter */;
val* var_output /* var output: FileWriter */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var_buffer /* var buffer: String */;
val* var5 /* : nullable IOError */;
val* var6 /* : nullable IOError */;
val* var7 /* : nullable IOError */;
var_dest = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:Path>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__open_ro]))(self); /* open_ro on <self:Path>*/
}
var_input = var;
{
var1 = ((val*(*)(val* self))(var_dest->class->vft[COLOR_core__file__Path__open_wo]))(var_dest); /* open_wo on <var_dest:Path>*/
}
var_output = var1;
for(;;) {
{
var2 = ((short int(*)(val* self))(var_input->class->vft[COLOR_core__stream__Reader__eof]))(var_input); /* eof on <var_input:FileReader>*/
}
var3 = !var2;
if (var3){
{
var4 = ((val*(*)(val* self, long p0))(var_input->class->vft[COLOR_core__stream__Reader__read]))(var_input, 1024l); /* read on <var_input:FileReader>*/
}
var_buffer = var4;
{
((void(*)(val* self, val* p0))(var_output->class->vft[COLOR_core__stream__Writer__write]))(var_output, var_buffer); /* write on <var_output:FileWriter>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_input->class->vft[COLOR_core__stream__Stream__close]))(var_input); /* close on <var_input:FileReader>*/
}
{
((void(*)(val* self))(var_output->class->vft[COLOR_core__stream__Stream__close]))(var_output); /* close on <var_output:FileWriter>*/
}
{
var6 = ((val*(*)(val* self))(var_input->class->vft[COLOR_core__stream__Stream__last_error]))(var_input); /* last_error on <var_input:FileReader>*/
}
if (var6!=NULL) {
var5 = var6;
} else {
{
var7 = ((val*(*)(val* self))(var_output->class->vft[COLOR_core__stream__Stream__last_error]))(var_output); /* last_error on <var_output:FileWriter>*/
}
var5 = var7;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var5); /* last_error= on <self:Path>*/
}
RET_LABEL:;
}
/* method file#Path#open_ro for (self: Path): FileReader */
val* core___core__Path___open_ro(val* self) {
val* var /* : FileReader */;
val* var1 /* : FileReader */;
val* var2 /* : String */;
val* var_res /* var res: FileReader */;
val* var3 /* : nullable IOError */;
var1 = NEW_core__FileReader(&type_core__FileReader);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__FileReader__open]))(var1, var2); /* open on <var1:FileReader>*/
}
var_res = var1;
{
var3 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__stream__Stream__last_error]))(var_res); /* last_error on <var_res:FileReader>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var3); /* last_error= on <self:Path>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#open_wo for (self: Path): FileWriter */
val* core___core__Path___open_wo(val* self) {
val* var /* : FileWriter */;
val* var1 /* : FileWriter */;
val* var2 /* : String */;
val* var_res /* var res: FileWriter */;
val* var3 /* : nullable IOError */;
var1 = NEW_core__FileWriter(&type_core__FileWriter);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__FileWriter__open]))(var1, var2); /* open on <var1:FileWriter>*/
}
var_res = var1;
{
var3 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__stream__Stream__last_error]))(var_res); /* last_error on <var_res:FileWriter>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var3); /* last_error= on <self:Path>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#read_all for (self: Path): String */
val* core___core__Path___read_all(val* self) {
val* var /* : String */;
val* var1 /* : Bytes */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__read_all_bytes]))(self); /* read_all_bytes on <self:Path>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1); /* to_s on <var1:Bytes>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#read_all_bytes for (self: Path): Bytes */
val* core___core__Path___read_all_bytes(val* self) {
val* var /* : Bytes */;
val* var1 /* : FileReader */;
val* var_s /* var s: FileReader */;
val* var2 /* : Bytes */;
val* var_res /* var res: Bytes */;
val* var3 /* : nullable IOError */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__open_ro]))(self); /* open_ro on <self:Path>*/
}
var_s = var1;
{
var2 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__stream__Reader__read_all_bytes]))(var_s); /* read_all_bytes on <var_s:FileReader>*/
}
var_res = var2;
{
((void(*)(val* self))(var_s->class->vft[COLOR_core__stream__Stream__close]))(var_s); /* close on <var_s:FileReader>*/
}
{
var3 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__stream__Stream__last_error]))(var_s); /* last_error on <var_s:FileReader>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var3); /* last_error= on <self:Path>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#read_lines for (self: Path): Array[String] */
val* core___core__Path___read_lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : FileReader */;
val* var_s /* var s: FileReader */;
val* var2 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
val* var3 /* : nullable IOError */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__open_ro]))(self); /* open_ro on <self:Path>*/
}
var_s = var1;
{
var2 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__stream__Reader__read_lines]))(var_s); /* read_lines on <var_s:FileReader>*/
}
var_res = var2;
{
((void(*)(val* self))(var_s->class->vft[COLOR_core__stream__Stream__close]))(var_s); /* close on <var_s:FileReader>*/
}
{
var3 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__stream__Stream__last_error]))(var_s); /* last_error on <var_s:FileReader>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var3); /* last_error= on <self:Path>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#each_line for (self: Path): LineIterator */
val* core___core__Path___each_line(val* self) {
val* var /* : LineIterator */;
val* var1 /* : FileReader */;
val* var_s /* var s: FileReader */;
val* var2 /* : LineIterator */;
val* var_res /* var res: LineIterator */;
val* var3 /* : nullable IOError */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__open_ro]))(self); /* open_ro on <self:Path>*/
}
var_s = var1;
{
var2 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__stream__Reader__each_line]))(var_s); /* each_line on <var_s:FileReader>*/
}
var_res = var2;
{
((void(*)(val* self, short int p0))(var_res->class->vft[COLOR_core__stream__LineIterator__close_on_finish_61d]))(var_res, 1); /* close_on_finish= on <var_res:LineIterator>*/
}
{
var3 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__stream__Stream__last_error]))(var_s); /* last_error on <var_s:FileReader>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var3); /* last_error= on <self:Path>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#files for (self: Path): Array[Path] */
val* core___core__Path___files(val* self) {
val* var /* : Array[Path] */;
val* var1 /* : Array[Path] */;
val* var_res /* var res: Array[Path] */;
val* var2 /* : NativeDir */;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : NativeDir */;
val* var_d /* var d: NativeDir */;
short int var6 /* : Bool */;
val* var7 /* : IOError */;
val* var8 /* : NativeArray[String] */;
static val* varonce;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : Sys */;
val* var20 /* : Sys */;
long var21 /* : Int */;
val* var22 /* : String */;
val* var23 /* : String */;
char* var24 /* : NativeString */;
char* var_de /* var de: NativeString */;
short int var25 /* : Bool */;
val* var26 /* : Pointer */;
val* var27 /* : FlatString */;
val* var_name /* var name: FlatString */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : String */;
short int var33 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
short int var38 /* : Bool */;
val* var40 /* : Path */;
val* var41 /* : String */;
val* var42 /* : String */;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:Path>*/
}
var1 = NEW_core__Array(&type_core__Array__core__Path);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[Path]>*/
}
var_res = var1;
var2 = NEW_core__file__NativeDir(&type_core__file__NativeDir);
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var4 = ((char*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var3); /* to_cstring on <var3:String>*/
}
{
var5 = ((val*(*)(val* self, char* p0))(var2->class->vft[COLOR_core__file__NativeDir__opendir]))(var2, var4); /* opendir on <var2:NativeDir>*/
}
var_d = var5;
{
var6 = ((short int(*)(val* self))(var_d->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_d); /* address_is_null on <var_d:NativeDir>*/
}
if (var6){
var7 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var8 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "Cannot list directory `";
var12 = core__flat___NativeString___to_s_full(var11, 23l, 23l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[0]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "`: ";
var16 = core__flat___NativeString___to_s_full(var15, 3l, 3l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var8)->values[2]=var14;
} else {
var8 = varonce;
varonce = NULL;
}
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
((struct instance_core__NativeArray*)var8)->values[1]=var17;
{
{ /* Inline kernel#Object#sys (self) on <self:Path> */
var20 = glob_sys;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
var21 = ((long(*)(val* self))(var18->class->vft[COLOR_core__kernel__Sys__errno]))(var18); /* errno on <var18:Sys>*/
}
var22 = core__abstract_text___Int___strerror(var21);
((struct instance_core__NativeArray*)var8)->values[3]=var22;
{
var23 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce = var8;
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_core__error__Error__message_61d]))(var7, var23); /* message= on <var7:IOError>*/
}
{
((void(*)(val* self))(var7->class->vft[COLOR_core__kernel__Object__init]))(var7); /* init on <var7:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var7); /* last_error= on <self:Path>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
for(;;) {
{
var24 = ((char*(*)(val* self))(var_d->class->vft[COLOR_core__file__NativeDir__readdir]))(var_d); /* readdir on <var_d:NativeDir>*/
}
var_de = var24;
var26 = BOX_core__Pointer(var_de); /* autobox from NativeString to Pointer */
var25 = core___core__Pointer___address_is_null(var26);
if (var25){
goto BREAK_label;
} else {
}
var27 = core__flat___NativeString___to_s_with_copy(var_de);
var_name = var27;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = ".";
var32 = core__flat___NativeString___to_s_full(var31, 1l, 1l);
var30 = var32;
varonce29 = var30;
}
{
var33 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var30); /* == on <var_name:FlatString>*/
}
var_ = var33;
if (var33){
var28 = var_;
} else {
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "..";
var37 = core__flat___NativeString___to_s_full(var36, 2l, 2l);
var35 = var37;
varonce34 = var35;
}
{
var38 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var35); /* == on <var_name:FlatString>*/
}
var28 = var38;
}
if (var28){
goto BREAK_label39;
} else {
}
var40 = NEW_core__Path(&type_core__Path);
{
var41 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var42 = ((val*(*)(val* self, val* p0))(var41->class->vft[COLOR_core__file__String___47d]))(var41, var_name); /* / on <var41:String>*/
}
{
((void(*)(val* self, val* p0))(var40->class->vft[COLOR_core__file__Path__path_61d]))(var40, var42); /* path= on <var40:Path>*/
}
{
((void(*)(val* self))(var40->class->vft[COLOR_core__kernel__Object__init]))(var40); /* init on <var40:Path>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var40); /* add on <var_res:Array[Path]>*/
}
BREAK_label39: (void)0;
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_d->class->vft[COLOR_core__file__NativeDir__closedir]))(var_d); /* closedir on <var_d:NativeDir>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#rmdir for (self: Path) */
void core___core__Path___rmdir(val* self) {
val* var /* : Array[Path] */;
val* var_ /* var : Array[Path] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : IndexedIterator[Path] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_file /* var file: Path */;
val* var5 /* : nullable FileStat */;
val* var_stat /* var stat: nullable FileStat */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable IOError */;
short int var10 /* : Bool */;
val* var11 /* : nullable IOError */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable IOError */;
val* var15 /* : nullable IOError */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : String */;
char* var19 /* : NativeString */;
short int var20 /* : Bool */;
val* var21 /* : IOError */;
val* var22 /* : NativeArray[String] */;
static val* varonce;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : Sys */;
val* var34 /* : Sys */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : String */;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:Path>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__files]))(self); /* files on <self:Path>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Path]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:IndexedIterator[Path]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:IndexedIterator[Path]>*/
}
var_file = var4;
{
var5 = ((val*(*)(val* self))(var_file->class->vft[COLOR_core__file__Path__link_stat]))(var_file); /* link_stat on <var_file:Path>*/
}
var_stat = var5;
if (var_stat == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_stat->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_stat, ((val*)NULL)); /* == on <var_stat:nullable FileStat>*/
var6 = var7;
}
if (var6){
{
var8 = ((val*(*)(val* self))(var_file->class->vft[COLOR_core__file__Path__last_error]))(var_file); /* last_error on <var_file:Path>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var8); /* last_error= on <self:Path>*/
}
goto BREAK_label9;
} else {
}
{
var10 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_core__file__FileStat__is_dir]))(var_stat); /* is_dir on <var_stat:nullable FileStat(FileStat)>*/
}
if (var10){
{
((void(*)(val* self))(var_file->class->vft[COLOR_core__file__Path__rmdir]))(var_file); /* rmdir on <var_file:Path>*/
}
} else {
{
((void(*)(val* self))(var_file->class->vft[COLOR_core__file__Path__delete]))(var_file); /* delete on <var_file:Path>*/
}
}
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__last_error]))(self); /* last_error on <self:Path>*/
}
if (var11 == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_core__kernel__Object___61d_61d]))(var11, ((val*)NULL)); /* == on <var11:nullable IOError>*/
var12 = var13;
}
if (var12){
{
var14 = ((val*(*)(val* self))(var_file->class->vft[COLOR_core__file__Path__last_error]))(var_file); /* last_error on <var_file:Path>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var14); /* last_error= on <self:Path>*/
}
} else {
}
BREAK_label9: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:IndexedIterator[Path]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:IndexedIterator[Path]>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__last_error]))(self); /* last_error on <self:Path>*/
}
if (var15 == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
var17 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_core__kernel__Object___61d_61d]))(var15, ((val*)NULL)); /* == on <var15:nullable IOError>*/
var16 = var17;
}
if (var16){
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var19 = ((char*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var18); /* to_cstring on <var18:String>*/
}
var20 = core__file___NativeString___rmdir(var19);
if (var20){
var21 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var22 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Cannot remove `";
var26 = core__flat___NativeString___to_s_full(var25, 15l, 15l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var22)->values[0]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "`: ";
var30 = core__flat___NativeString___to_s_full(var29, 3l, 3l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var22)->values[2]=var28;
} else {
var22 = varonce;
varonce = NULL;
}
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Path>*/
}
((struct instance_core__NativeArray*)var22)->values[1]=var31;
{
{ /* Inline kernel#Object#sys (self) on <self:Path> */
var34 = glob_sys;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
var35 = ((long(*)(val* self))(var32->class->vft[COLOR_core__kernel__Sys__errno]))(var32); /* errno on <var32:Sys>*/
}
var36 = core__abstract_text___Int___strerror(var35);
((struct instance_core__NativeArray*)var22)->values[3]=var36;
{
var37 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce = var22;
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_core__error__Error__message_61d]))(var21, var37); /* message= on <var21:IOError>*/
}
{
((void(*)(val* self))(var21->class->vft[COLOR_core__kernel__Object__init]))(var21); /* init on <var21:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var21); /* last_error= on <self:Path>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method file#Path#== for (self: Path, nullable Object): Bool */
short int core___core__Path___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : Path */;
val* var4 /* : String */;
val* var5 /* : Path */;
val* var6 /* : String */;
short int var7 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Path */
cltype = type_core__Path.color;
idtype = type_core__Path.id;
if(var_other == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__simplified]))(self); /* simplified on <self:Path>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__file__Path__path]))(var3); /* path on <var3:Path>*/
}
{
var5 = ((val*(*)(val* self))(var_other->class->vft[COLOR_core__file__Path__simplified]))(var_other); /* simplified on <var_other:nullable Object(Path)>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__file__Path__path]))(var5); /* path on <var5:Path>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_core__kernel__Object___61d_61d]))(var4, var6); /* == on <var4:String>*/
}
var1 = var7;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#hash for (self: Path): Int */
long core___core__Path___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : Path */;
val* var2 /* : String */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__simplified]))(self); /* simplified on <self:Path>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__file__Path__path]))(var1); /* path on <var1:Path>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__hash]))(var2); /* hash on <var2:String>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#init for (self: Path) */
void core___core__Path___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Path___core__kernel__Object__init]))(self); /* init on <self:Path>*/
}
RET_LABEL:;
}
/* method file#FileStat#stat for (self: FileStat): NativeFileStat */
val* core___core__FileStat___stat(val* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
var1 = self->attrs[COLOR_core__file__FileStat___stat].val; /* _stat on <self:FileStat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stat");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 720);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#stat= for (self: FileStat, NativeFileStat) */
void core___core__FileStat___stat_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__FileStat___stat].val = p0; /* _stat on <self:FileStat> */
RET_LABEL:;
}
/* method file#FileStat#finalized for (self: FileStat): Bool */
short int core___core__FileStat___finalized(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__file__FileStat___finalized].s; /* _finalized on <self:FileStat> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#finalized= for (self: FileStat, Bool) */
void core___core__FileStat___finalized_61d(val* self, short int p0) {
self->attrs[COLOR_core__file__FileStat___finalized].s = p0; /* _finalized on <self:FileStat> */
RET_LABEL:;
}
/* method file#FileStat#finalize for (self: FileStat) */
void core___core__FileStat___core__gc__Finalizable__finalize(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : NativeFileStat */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var1 = !var;
if (var1){
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Pointer__free]))(var2); /* free on <var2:NativeFileStat>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileStat__finalized_61d]))(self, 1); /* finalized= on <self:FileStat>*/
}
} else {
}
RET_LABEL:;
}
/* method file#FileStat#last_access_time for (self: FileStat): Int */
long core___core__FileStat___last_access_time(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 738);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__atime]))(var3); /* atime on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#atime for (self: FileStat): Int */
long core___core__FileStat___atime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__last_access_time]))(self); /* last_access_time on <self:FileStat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#last_modification_time for (self: FileStat): Int */
long core___core__FileStat___last_modification_time(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 750);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__mtime]))(var3); /* mtime on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#mtime for (self: FileStat): Int */
long core___core__FileStat___mtime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__last_modification_time]))(self); /* last_modification_time on <self:FileStat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#size for (self: FileStat): Int */
long core___core__FileStat___size(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 763);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__size]))(var3); /* size on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_file for (self: FileStat): Bool */
short int core___core__FileStat___is_file(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 770);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_reg]))(var3); /* is_reg on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_reg for (self: FileStat): Bool */
short int core___core__FileStat___is_reg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__is_file]))(self); /* is_file on <self:FileStat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_dir for (self: FileStat): Bool */
short int core___core__FileStat___is_dir(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 780);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_dir]))(var3); /* is_dir on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_link for (self: FileStat): Bool */
short int core___core__FileStat___is_link(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 787);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_lnk]))(var3); /* is_lnk on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#last_status_change_time for (self: FileStat): Int */
long core___core__FileStat___last_status_change_time(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 796);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__ctime]))(var3); /* ctime on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#ctime for (self: FileStat): Int */
long core___core__FileStat___ctime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__last_status_change_time]))(self); /* last_status_change_time on <self:FileStat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#mode for (self: FileStat): Int */
long core___core__FileStat___mode(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 808);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__mode]))(var3); /* mode on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_chr for (self: FileStat): Bool */
short int core___core__FileStat___is_chr(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 815);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_chr]))(var3); /* is_chr on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_blk for (self: FileStat): Bool */
short int core___core__FileStat___is_blk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 822);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_blk]))(var3); /* is_blk on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_fifo for (self: FileStat): Bool */
short int core___core__FileStat___is_fifo(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 829);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_fifo]))(var3); /* is_fifo on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#is_sock for (self: FileStat): Bool */
short int core___core__FileStat___is_sock(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 836);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_sock]))(var3); /* is_sock on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#init for (self: FileStat) */
void core___core__FileStat___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FileStat___core__kernel__Object__init]))(self); /* init on <self:FileStat>*/
}
RET_LABEL:;
}
/* method file#Text#to_path for (self: Text): Path */
val* core__file___Text___to_path(val* self) {
val* var /* : Path */;
val* var1 /* : Path */;
val* var2 /* : String */;
var1 = NEW_core__Path(&type_core__Path);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__Path__path_61d]))(var1, var2); /* path= on <var1:Path>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Path>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Text#write_native_to for (self: Text, FileWriter) */
void core__file___Text___write_native_to(val* self, val* p0) {
val* var_s /* var s: FileWriter */;
val* var /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[FlatText] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: FlatText */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
var_s = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__substrings]))(self); /* substrings on <self:Text>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[FlatText]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[FlatText]>*/
}
var_i = var4;
{
var5 = ((char*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_i); /* to_cstring on <var_i:FlatText>*/
}
{
var6 = ((long(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Text__bytelen]))(var_i); /* bytelen on <var_i:FlatText>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2))(var_s->class->vft[COLOR_core__file__FileWriter__write_native]))(var_s, var5, 0l, var6); /* write_native on <var_s:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[FlatText]>*/
}
RET_LABEL:;
}
/* method file#String#file_exists for (self: String): Bool */
short int core__file___String___file_exists(val* self) {
short int var /* : Bool */;
char* var1 /* : NativeString */;
short int var2 /* : Bool */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = core__file___NativeString___file_exists(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_stat for (self: String): nullable FileStat */
val* core__file___String___file_stat(val* self) {
val* var /* : nullable FileStat */;
char* var1 /* : NativeString */;
val* var2 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var3 /* : Bool */;
val* var4 /* : FileStat */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = core__file___NativeString___file_stat(var1);
var_stat = var2;
{
var3 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var4 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__file__FileStat__stat_61d]))(var4, var_stat); /* stat= on <var4:FileStat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:FileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_lstat for (self: String): nullable FileStat */
val* core__file___String___file_lstat(val* self) {
val* var /* : nullable FileStat */;
char* var1 /* : NativeString */;
val* var2 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var3 /* : Bool */;
val* var4 /* : FileStat */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = core__file___NativeString___file_lstat(var1);
var_stat = var2;
{
var3 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var4 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__file__FileStat__stat_61d]))(var4, var_stat); /* stat= on <var4:FileStat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:FileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_delete for (self: String): Bool */
short int core__file___String___file_delete(val* self) {
short int var /* : Bool */;
char* var1 /* : NativeString */;
short int var2 /* : Bool */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = core__file___NativeString___file_delete(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_copy_to for (self: String, String) */
void core__file___String___file_copy_to(val* self, val* p0) {
val* var_dest /* var dest: String */;
val* var /* : Path */;
val* var1 /* : Path */;
var_dest = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Text__to_path]))(self); /* to_path on <self:String>*/
}
{
var1 = ((val*(*)(val* self))(var_dest->class->vft[COLOR_core__file__Text__to_path]))(var_dest); /* to_path on <var_dest:String>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__file__Path__copy]))(var, var1); /* copy on <var:Path>*/
}
RET_LABEL:;
}
/* method file#String#strip_extension for (self: String, nullable String): String */
val* core__file___String___strip_extension(val* self, val* p0) {
val* var /* : String */;
val* var_extension /* var extension: nullable String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : String */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var18 /* : Int */;
val* var19 /* : Text */;
var_extension = p0;
if (var_extension == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_extension, ((val*)NULL)); /* == on <var_extension:nullable String>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__String__file_extension]))(self); /* file_extension on <self:String>*/
}
var_extension = var3;
if (var_extension == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_extension, ((val*)NULL)); /* == on <var_extension:nullable String>*/
var4 = var5;
}
if (var4){
var = self;
goto RET_LABEL;
} else {
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = ".";
var10 = core__flat___NativeString___to_s_full(var9, 1l, 1l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var6)->values[1]=var_extension;
{
var11 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var_extension = var11;
}
} else {
}
{
var12 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__has_suffix]))(self, var_extension); /* has_suffix on <self:String>*/
}
if (var12){
{
var13 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
var14 = ((long(*)(val* self))(var_extension->class->vft[COLOR_core__abstract_text__Text__length]))(var_extension); /* length on <var_extension:nullable String(String)>*/
}
{
{ /* Inline kernel#Int#- (var13,var14) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var13 - var14;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var19 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var15); /* substring on <self:String>*/
}
var = var19;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#basename for (self: String, nullable String): String */
val* core__file___String___basename(val* self, val* p0) {
val* var /* : String */;
val* var_extension /* var extension: nullable String */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_l /* var l: Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
uint32_t var19 /* : Char */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : String */;
val* var33 /* : SequenceRead[Char] */;
val* var34 /* : nullable Object */;
long var35 /* : Int */;
long var_pos /* var pos: Int */;
val* var_n /* var n: String */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
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
val* var57 /* : Text */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : String */;
var_extension = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
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
var_l = var2;
for(;;) {
{
{ /* Inline kernel#Int#> (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var13 = var_l > 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var15 = ((val*(*)(val* self, long p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var14, var_l); /* [] on <var14:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var15,'/') on <var15:nullable Object(Char)> */
var19 = (uint32_t)((long)(var15)>>2);
var18 = var19 == '/';
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var6 = var16;
} else {
var6 = var_;
}
if (var6){
{
{ /* Inline kernel#Int#- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var26 = var_l - 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_l = var20;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_l,0l) on <var_l:Int> */
var29 = var_l == 0l;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
if (likely(varonce!=NULL)) {
var30 = varonce;
} else {
var31 = "/";
var32 = core__flat___NativeString___to_s_full(var31, 1l, 1l);
var30 = var32;
varonce = var30;
}
var = var30;
goto RET_LABEL;
} else {
}
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var34 = (val*)((long)('/')<<2|2);
var35 = ((long(*)(val* self, val* p0, long p1))((((long)var33&3)?class_info[((long)var33&3)]:var33->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(var33, var34, var_l); /* last_index_of_from on <var33:SequenceRead[Char]>*/
}
var_pos = var35;
var_n = self;
{
{ /* Inline kernel#Int#>= (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var38 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var42 = var_pos >= 0l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var45 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var49 = var_pos + 1l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_l,var_pos) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var52 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var56 = var_l - var_pos;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
var57 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var43, var50); /* substring on <self:String>*/
}
var_n = var57;
} else {
}
if (var_extension == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
var59 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_extension, ((val*)NULL)); /* != on <var_extension:nullable String>*/
var58 = var59;
}
if (var58){
{
var60 = ((val*(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__file__String__strip_extension]))(var_n, var_extension); /* strip_extension on <var_n:String>*/
}
var = var60;
goto RET_LABEL;
} else {
var = var_n;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file#String#dirname for (self: String): String */
val* core__file___String___dirname(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_l /* var l: Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
uint32_t var19 /* : Char */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var27 /* : SequenceRead[Char] */;
val* var28 /* : nullable Object */;
long var29 /* : Int */;
long var_pos /* var pos: Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var37 /* : Text */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : String */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
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
var_l = var2;
for(;;) {
{
{ /* Inline kernel#Int#> (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var13 = var_l > 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var15 = ((val*(*)(val* self, long p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var14, var_l); /* [] on <var14:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var15,'/') on <var15:nullable Object(Char)> */
var19 = (uint32_t)((long)(var15)>>2);
var18 = var19 == '/';
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var6 = var16;
} else {
var6 = var_;
}
if (var6){
{
{ /* Inline kernel#Int#- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var26 = var_l - 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_l = var20;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var28 = (val*)((long)('/')<<2|2);
var29 = ((long(*)(val* self, val* p0, long p1))((((long)var27&3)?class_info[((long)var27&3)]:var27->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(var27, var28, var_l); /* last_index_of_from on <var27:SequenceRead[Char]>*/
}
var_pos = var29;
{
{ /* Inline kernel#Int#> (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var36 = var_pos > 0l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
var37 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var_pos); /* substring on <self:String>*/
}
var = var37;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#== (var_pos,0l) on <var_pos:Int> */
var40 = var_pos == 0l;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
if (likely(varonce!=NULL)) {
var41 = varonce;
} else {
var42 = "/";
var43 = core__flat___NativeString___to_s_full(var42, 1l, 1l);
var41 = var43;
varonce = var41;
}
var = var41;
goto RET_LABEL;
} else {
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = ".";
var47 = core__flat___NativeString___to_s_full(var46, 1l, 1l);
var45 = var47;
varonce44 = var45;
}
var = var45;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method file#String#realpath for (self: String): String */
val* core__file___String___realpath(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
char* var2 /* : NativeString */;
char* var_cs /* var cs: NativeString */;
short int var3 /* : Bool */;
val* var4 /* : FlatString */;
val* var_res /* var res: FlatString */;
val* var5 /* : Pointer */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = core__file___NativeString___file_realpath(var1);
var_cs = var2;
{
var3 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__String__file_exists]))(self); /* file_exists on <self:String>*/
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 966);
fatal_exit(1);
}
var4 = core__flat___NativeString___to_s_with_copy(var_cs);
var_res = var4;
var5 = BOX_core__Pointer(var_cs); /* autobox from NativeString to Pointer */
core___core__Pointer___free(var5); /* Direct call kernel#Pointer#free on <var5:Pointer(NativeString)>*/
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#simplify_path for (self: String): String */
val* core__file___String___simplify_path(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : Array[String] */;
val* var_a /* var a: Array[String] */;
val* var5 /* : Array[String] */;
val* var_a2 /* var a2: Array[String] */;
val* var_ /* var : Array[String] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : IndexedIterator[String] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_x /* var x: String */;
short int var10 /* : Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : String */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : String */;
short int var25 /* : Bool */;
short int var_26 /* var : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var_39 /* var : Bool */;
val* var40 /* : nullable Object */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
val* var50 /* : String */;
short int var51 /* : Bool */;
val* var52 /* : nullable Object */;
val* var53 /* : nullable Object */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var_57 /* var : Bool */;
val* var58 /* : nullable Object */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : String */;
short int var63 /* : Bool */;
val* var64 /* : nullable Object */;
short int var65 /* : Bool */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : String */;
short int var70 /* : Bool */;
long var71 /* : Int */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var_75 /* var : Bool */;
val* var76 /* : nullable Object */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : String */;
short int var81 /* : Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
val* var90 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var3 = core__flat___NativeString___to_s_full(var2, 1l, 1l);
var1 = var3;
varonce = var1;
}
{
var4 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__string_search__Text__split_with]))(self, var1); /* split_with on <self:String>*/
}
var_a = var4;
var5 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:Array[String]>*/
}
var_a2 = var5;
var_ = var_a;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:IndexedIterator[String]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:IndexedIterator[String]>*/
}
var_x = var9;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = ".";
var14 = core__flat___NativeString___to_s_full(var13, 1l, 1l);
var12 = var14;
varonce11 = var12;
}
{
var15 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var12); /* == on <var_x:String>*/
}
var_16 = var15;
if (var15){
{
var17 = ((short int(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_a2); /* is_empty on <var_a2:Array[String]>*/
}
var18 = !var17;
var10 = var18;
} else {
var10 = var_16;
}
if (var10){
goto BREAK_label19;
} else {
}
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "";
var24 = core__flat___NativeString___to_s_full(var23, 0l, 0l);
var22 = var24;
varonce21 = var22;
}
{
var25 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var22); /* == on <var_x:String>*/
}
var_26 = var25;
if (var25){
{
var27 = ((short int(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_a2); /* is_empty on <var_a2:Array[String]>*/
}
var28 = !var27;
var20 = var28;
} else {
var20 = var_26;
}
if (var20){
goto BREAK_label19;
} else {
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "..";
var34 = core__flat___NativeString___to_s_full(var33, 2l, 2l);
var32 = var34;
varonce31 = var32;
}
{
var35 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var32); /* == on <var_x:String>*/
}
var_36 = var35;
if (var35){
{
var37 = ((short int(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_a2); /* is_empty on <var_a2:Array[String]>*/
}
var38 = !var37;
var30 = var38;
} else {
var30 = var_36;
}
var_39 = var30;
if (var30){
{
var40 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var_a2); /* last on <var_a2:Array[String]>*/
}
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "..";
var44 = core__flat___NativeString___to_s_full(var43, 2l, 2l);
var42 = var44;
varonce41 = var42;
}
{
var45 = ((short int(*)(val* self, val* p0))(var40->class->vft[COLOR_core__kernel__Object___33d_61d]))(var40, var42); /* != on <var40:nullable Object(String)>*/
}
var29 = var45;
} else {
var29 = var_39;
}
if (var29){
{
var46 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var_a2); /* last on <var_a2:Array[String]>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = ".";
var50 = core__flat___NativeString___to_s_full(var49, 1l, 1l);
var48 = var50;
varonce47 = var48;
}
{
var51 = ((short int(*)(val* self, val* p0))(var46->class->vft[COLOR_core__kernel__Object___61d_61d]))(var46, var48); /* == on <var46:nullable Object(String)>*/
}
if (var51){
{
var52 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Sequence__pop]))(var_a2); /* pop on <var_a2:Array[String]>*/
}
} else {
{
var53 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Sequence__pop]))(var_a2); /* pop on <var_a2:Array[String]>*/
}
goto BREAK_label19;
}
} else {
{
var55 = ((short int(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_a2); /* is_empty on <var_a2:Array[String]>*/
}
var56 = !var55;
var_57 = var56;
if (var56){
{
var58 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var_a2); /* last on <var_a2:Array[String]>*/
}
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = ".";
var62 = core__flat___NativeString___to_s_full(var61, 1l, 1l);
var60 = var62;
varonce59 = var60;
}
{
var63 = ((short int(*)(val* self, val* p0))(var58->class->vft[COLOR_core__kernel__Object___61d_61d]))(var58, var60); /* == on <var58:nullable Object(String)>*/
}
var54 = var63;
} else {
var54 = var_57;
}
if (var54){
{
var64 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Sequence__pop]))(var_a2); /* pop on <var_a2:Array[String]>*/
}
} else {
}
}
{
((void(*)(val* self, val* p0))(var_a2->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_a2, var_x); /* push on <var_a2:Array[String]>*/
}
BREAK_label19: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:IndexedIterator[String]>*/
}
{
var65 = ((short int(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_a2); /* is_empty on <var_a2:Array[String]>*/
}
if (var65){
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = ".";
var69 = core__flat___NativeString___to_s_full(var68, 1l, 1l);
var67 = var69;
varonce66 = var67;
}
var = var67;
goto RET_LABEL;
} else {
}
{
var71 = ((long(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_a2); /* length on <var_a2:Array[String]>*/
}
{
{ /* Inline kernel#Int#== (var71,1l) on <var71:Int> */
var74 = var71 == 1l;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var_75 = var72;
if (var72){
{
var76 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__first]))(var_a2); /* first on <var_a2:Array[String]>*/
}
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "";
var80 = core__flat___NativeString___to_s_full(var79, 0l, 0l);
var78 = var80;
varonce77 = var78;
}
{
var81 = ((short int(*)(val* self, val* p0))(var76->class->vft[COLOR_core__kernel__Object___61d_61d]))(var76, var78); /* == on <var76:nullable Object(String)>*/
}
var70 = var81;
} else {
var70 = var_75;
}
if (var70){
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "/";
var85 = core__flat___NativeString___to_s_full(var84, 1l, 1l);
var83 = var85;
varonce82 = var83;
}
var = var83;
goto RET_LABEL;
} else {
}
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "/";
var89 = core__flat___NativeString___to_s_full(var88, 1l, 1l);
var87 = var89;
varonce86 = var87;
}
{
var90 = ((val*(*)(val* self, val* p0))(var_a2->class->vft[COLOR_core__abstract_text__Collection__join]))(var_a2, var87); /* join on <var_a2:Array[String]>*/
}
var = var90;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#join_path for (self: String, String): String */
val* core__file___String___join_path(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : SequenceRead[Char] */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
uint32_t var8 /* : Char */;
uint32_t var9 /* : Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : NativeArray[String] */;
static val* varonce;
val* var14 /* : String */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : String */;
val* var21 /* : String */;
var_path = p0;
{
var1 = ((short int(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_path); /* is_empty on <var_path:String>*/
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_empty]))(self); /* is_empty on <self:String>*/
}
if (var2){
var = var_path;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__chars]))(var_path); /* chars on <var_path:String>*/
}
{
var4 = ((val*(*)(val* self, long p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var3, 0l); /* [] on <var3:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var4,'/') on <var4:nullable Object(Char)> */
var8 = (uint32_t)((long)(var4)>>2);
var7 = var8 == '/';
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = var_path;
goto RET_LABEL;
} else {
}
{
var9 = ((uint32_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__last]))(self); /* last on <self:String>*/
}
{
{ /* Inline kernel#Char#== (var9,'/') on <var9:Char> */
var12 = var9 == '/';
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (unlikely(varonce==NULL)) {
var13 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
} else {
var13 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var13)->values[0]=self;
((struct instance_core__NativeArray*)var13)->values[1]=var_path;
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
var = var14;
goto RET_LABEL;
} else {
}
if (unlikely(varonce15==NULL)) {
var16 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "/";
var20 = core__flat___NativeString___to_s_full(var19, 1l, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var16)->values[1]=var18;
} else {
var16 = varonce15;
varonce15 = NULL;
}
((struct instance_core__NativeArray*)var16)->values[0]=self;
((struct instance_core__NativeArray*)var16)->values[2]=var_path;
{
var21 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#to_program_name for (self: String): String */
val* core__file___String___to_program_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce5;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var3 = core__flat___NativeString___to_s_full(var2, 1l, 1l);
var1 = var3;
varonce = var1;
}
{
var4 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__has_prefix]))(self, var1); /* has_prefix on <self:String>*/
}
if (var4){
var = self;
goto RET_LABEL;
} else {
if (unlikely(varonce5==NULL)) {
var6 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "./";
var10 = core__flat___NativeString___to_s_full(var9, 2l, 2l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
} else {
var6 = varonce5;
varonce5 = NULL;
}
((struct instance_core__NativeArray*)var6)->values[1]=self;
{
var11 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce5 = var6;
var = var11;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file#String#/ for (self: String, String): String */
val* core__file___String____47d(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
val* var1 /* : String */;
var_path = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__String__join_path]))(self, var_path); /* join_path on <self:String>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#relpath for (self: String, String): String */
val* core__file___String___relpath(val* self, val* p0) {
val* var /* : String */;
val* var_dest /* var dest: String */;
val* var1 /* : Sys */;
val* var2 /* : String */;
val* var_cwd /* var cwd: String */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
val* var8 /* : Array[String] */;
val* var_from /* var from: Array[String] */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var12 /* : String */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
val* var17 /* : String */;
val* var18 /* : Array[String] */;
val* var_to /* var to: Array[String] */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var_ /* var : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
val* var29 /* : nullable Object */;
val* var30 /* : nullable Object */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var33 /* : nullable Object */;
long var34 /* : Int */;
long var_from_len /* var from_len: Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : String */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var50 /* : Int */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var_up /* var up: String */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
val* var67 /* : String */;
val* var68 /* : String */;
val* var_res /* var res: String */;
var_dest = p0;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__file__Sys__getcwd]))(var1); /* getcwd on <var1:Sys>*/
}
var_cwd = var2;
{
var3 = ((val*(*)(val* self, val* p0))(var_cwd->class->vft[COLOR_core__file__String___47d]))(var_cwd, self); /* / on <var_cwd:String>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__file__String__simplify_path]))(var3); /* simplify_path on <var3:String>*/
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "/";
var7 = core__flat___NativeString___to_s_full(var6, 1l, 1l);
var5 = var7;
varonce = var5;
}
{
var8 = ((val*(*)(val* self, val* p0))(var4->class->vft[COLOR_core__string_search__Text__split]))(var4, var5); /* split on <var4:String>*/
}
var_from = var8;
{
var9 = ((val*(*)(val* self))(var_from->class->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var_from); /* last on <var_from:Array[String]>*/
}
{
var10 = ((short int(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var9); /* is_empty on <var9:nullable Object(String)>*/
}
if (var10){
{
var11 = ((val*(*)(val* self))(var_from->class->vft[COLOR_core__abstract_collection__Sequence__pop]))(var_from); /* pop on <var_from:Array[String]>*/
}
} else {
}
{
var12 = ((val*(*)(val* self, val* p0))(var_cwd->class->vft[COLOR_core__file__String___47d]))(var_cwd, var_dest); /* / on <var_cwd:String>*/
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__file__String__simplify_path]))(var12); /* simplify_path on <var12:String>*/
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "/";
var17 = core__flat___NativeString___to_s_full(var16, 1l, 1l);
var15 = var17;
varonce14 = var15;
}
{
var18 = ((val*(*)(val* self, val* p0))(var13->class->vft[COLOR_core__string_search__Text__split]))(var13, var15); /* split on <var13:String>*/
}
var_to = var18;
{
var19 = ((val*(*)(val* self))(var_to->class->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var_to); /* last on <var_to:Array[String]>*/
}
{
var20 = ((short int(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var19); /* is_empty on <var19:nullable Object(String)>*/
}
if (var20){
{
var21 = ((val*(*)(val* self))(var_to->class->vft[COLOR_core__abstract_collection__Sequence__pop]))(var_to); /* pop on <var_to:Array[String]>*/
}
} else {
}
for(;;) {
{
var24 = ((short int(*)(val* self))(var_from->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_from); /* is_empty on <var_from:Array[String]>*/
}
var25 = !var24;
var_ = var25;
if (var25){
{
var26 = ((short int(*)(val* self))(var_to->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_to); /* is_empty on <var_to:Array[String]>*/
}
var27 = !var26;
var23 = var27;
} else {
var23 = var_;
}
var_28 = var23;
if (var23){
{
var29 = ((val*(*)(val* self))(var_from->class->vft[COLOR_core__abstract_collection__Collection__first]))(var_from); /* first on <var_from:Array[String]>*/
}
{
var30 = ((val*(*)(val* self))(var_to->class->vft[COLOR_core__abstract_collection__Collection__first]))(var_to); /* first on <var_to:Array[String]>*/
}
{
var31 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_core__kernel__Object___61d_61d]))(var29, var30); /* == on <var29:nullable Object(String)>*/
}
var22 = var31;
} else {
var22 = var_28;
}
if (var22){
{
var32 = ((val*(*)(val* self))(var_from->class->vft[COLOR_core__abstract_collection__Sequence__shift]))(var_from); /* shift on <var_from:Array[String]>*/
}
{
var33 = ((val*(*)(val* self))(var_to->class->vft[COLOR_core__abstract_collection__Sequence__shift]))(var_to); /* shift on <var_to:Array[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var34 = ((long(*)(val* self))(var_from->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_from); /* length on <var_from:Array[String]>*/
}
var_from_len = var34;
{
{ /* Inline kernel#Int#== (var_from_len,0l) on <var_from_len:Int> */
var37 = var_from_len == 0l;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "/";
var41 = core__flat___NativeString___to_s_full(var40, 1l, 1l);
var39 = var41;
varonce38 = var39;
}
{
var42 = ((val*(*)(val* self, val* p0))(var_to->class->vft[COLOR_core__abstract_text__Collection__join]))(var_to, var39); /* join on <var_to:Array[String]>*/
}
var = var42;
goto RET_LABEL;
} else {
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "../";
var46 = core__flat___NativeString___to_s_full(var45, 3l, 3l);
var44 = var46;
varonce43 = var44;
}
{
{ /* Inline kernel#Int#- (var_from_len,1l) on <var_from_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var49 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var_from_len - 1l;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
var51 = ((val*(*)(val* self, long p0))(var44->class->vft[COLOR_core__abstract_text__String___42d]))(var44, var47); /* * on <var44:String>*/
}
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "..";
var55 = core__flat___NativeString___to_s_full(var54, 2l, 2l);
var53 = var55;
varonce52 = var53;
}
{
var56 = ((val*(*)(val* self, val* p0))(var51->class->vft[COLOR_core__abstract_text__String___43d]))(var51, var53); /* + on <var51:String>*/
}
var_up = var56;
{
var57 = ((short int(*)(val* self))(var_to->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_to); /* is_empty on <var_to:Array[String]>*/
}
if (var57){
var = var_up;
goto RET_LABEL;
} else {
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "/";
var61 = core__flat___NativeString___to_s_full(var60, 1l, 1l);
var59 = var61;
varonce58 = var59;
}
{
var62 = ((val*(*)(val* self, val* p0))(var_up->class->vft[COLOR_core__abstract_text__String___43d]))(var_up, var59); /* + on <var_up:String>*/
}
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "/";
var66 = core__flat___NativeString___to_s_full(var65, 1l, 1l);
var64 = var66;
varonce63 = var64;
}
{
var67 = ((val*(*)(val* self, val* p0))(var_to->class->vft[COLOR_core__abstract_text__Collection__join]))(var_to, var64); /* join on <var_to:Array[String]>*/
}
{
var68 = ((val*(*)(val* self, val* p0))(var62->class->vft[COLOR_core__abstract_text__String___43d]))(var62, var67); /* + on <var62:String>*/
}
var_res = var68;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#mkdir for (self: String): nullable Error */
val* core__file___String___mkdir(val* self) {
val* var /* : nullable Error */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : Array[String] */;
val* var_dirs /* var dirs: Array[String] */;
val* var5 /* : FlatBuffer */;
val* var_path /* var path: FlatBuffer */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
val* var_error /* var error: nullable Error */;
val* var_ /* var : Array[String] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : IndexedIterator[String] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_d /* var d: String */;
short int var13 /* : Bool */;
val* var15 /* : String */;
char* var16 /* : NativeString */;
short int var17 /* : Bool */;
short int var_res /* var res: Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_20 /* var : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : IOError */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : Sys */;
val* var37 /* : Sys */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var3 = core__flat___NativeString___to_s_full(var2, 1l, 1l);
var1 = var3;
varonce = var1;
}
{
var4 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__string_search__Text__split_with]))(self, var1); /* split_with on <self:String>*/
}
var_dirs = var4;
var5 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:FlatBuffer>*/
}
var_path = var5;
{
var6 = ((short int(*)(val* self))(var_dirs->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_dirs); /* is_empty on <var_dirs:Array[String]>*/
}
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self, long p0))(var_dirs->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_dirs, 0l); /* [] on <var_dirs:Array[String]>*/
}
{
var8 = ((short int(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var7); /* is_empty on <var7:nullable Object(String)>*/
}
if (var8){
{
((void(*)(val* self, uint32_t p0))(var_path->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_path, '/'); /* add on <var_path:FlatBuffer>*/
}
} else {
}
var_error = ((val*)NULL);
var_ = var_dirs;
{
var9 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:IndexedIterator[String]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:IndexedIterator[String]>*/
}
var_d = var12;
{
var13 = ((short int(*)(val* self))(var_d->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_d); /* is_empty on <var_d:String>*/
}
if (var13){
goto BREAK_label14;
} else {
}
{
((void(*)(val* self, val* p0))(var_path->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_path, var_d); /* append on <var_path:FlatBuffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_path->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_path, '/'); /* add on <var_path:FlatBuffer>*/
}
{
var15 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_path); /* to_s on <var_path:FlatBuffer>*/
}
{
var16 = ((char*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var15); /* to_cstring on <var15:String>*/
}
var17 = core__file___NativeString___file_mkdir(var16);
var_res = var17;
var19 = !var_res;
var_20 = var19;
if (var19){
if (var_error == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
var22 = ((short int(*)(val* self, val* p0))(var_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_error, ((val*)NULL)); /* == on <var_error:nullable Error>*/
var21 = var22;
}
var18 = var21;
} else {
var18 = var_20;
}
if (var18){
var23 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce24==NULL)) {
var25 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Cannot create directory `";
var29 = core__flat___NativeString___to_s_full(var28, 25l, 25l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "`: ";
var33 = core__flat___NativeString___to_s_full(var32, 3l, 3l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var25)->values[2]=var31;
} else {
var25 = varonce24;
varonce24 = NULL;
}
{
var34 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_path); /* to_s on <var_path:FlatBuffer>*/
}
((struct instance_core__NativeArray*)var25)->values[1]=var34;
{
{ /* Inline kernel#Object#sys (self) on <self:String> */
var37 = glob_sys;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
var38 = ((long(*)(val* self))(var35->class->vft[COLOR_core__kernel__Sys__errno]))(var35); /* errno on <var35:Sys>*/
}
var39 = core__abstract_text___Int___strerror(var38);
((struct instance_core__NativeArray*)var25)->values[3]=var39;
{
var40 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__error__Error__message_61d]))(var23, var40); /* message= on <var23:IOError>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:IOError>*/
}
var_error = var23;
} else {
}
BREAK_label14: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:IndexedIterator[String]>*/
}
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#rmdir for (self: String): nullable Error */
val* core__file___String___rmdir(val* self) {
val* var /* : nullable Error */;
val* var1 /* : Path */;
val* var_p /* var p: Path */;
val* var2 /* : nullable IOError */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Text__to_path]))(self); /* to_path on <self:String>*/
}
var_p = var1;
{
((void(*)(val* self))(var_p->class->vft[COLOR_core__file__Path__rmdir]))(var_p); /* rmdir on <var_p:Path>*/
}
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_core__file__Path__last_error]))(var_p); /* last_error on <var_p:Path>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#chdir for (self: String): nullable Error */
val* core__file___String___chdir(val* self) {
val* var /* : nullable Error */;
char* var1 /* : NativeString */;
short int var2 /* : Bool */;
short int var_res /* var res: Bool */;
val* var3 /* : IOError */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : String */;
val* var13 /* : Sys */;
val* var15 /* : Sys */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_error /* var error: IOError */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = core__file___NativeString___file_chdir(var1);
var_res = var2;
if (var_res){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var3 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "Cannot change directory to `";
var8 = core__flat___NativeString___to_s_full(var7, 28l, 28l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "`: ";
var12 = core__flat___NativeString___to_s_full(var11, 3l, 3l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var4)->values[1]=self;
{
{ /* Inline kernel#Object#sys (self) on <self:String> */
var15 = glob_sys;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
var16 = ((long(*)(val* self))(var13->class->vft[COLOR_core__kernel__Sys__errno]))(var13); /* errno on <var13:Sys>*/
}
var17 = core__abstract_text___Int___strerror(var16);
((struct instance_core__NativeArray*)var4)->values[3]=var17;
{
var18 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__error__Error__message_61d]))(var3, var18); /* message= on <var3:IOError>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:IOError>*/
}
var_error = var3;
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_extension for (self: String): nullable String */
val* core__file___String___file_extension(val* self) {
val* var /* : nullable String */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
long var3 /* : Int */;
long var_last_slash /* var last_slash: Int */;
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
long var15 /* : Int */;
val* var16 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var2 = (val*)((long)('.')<<2|2);
var3 = ((long(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of]))(var1, var2); /* last_index_of on <var1:SequenceRead[Char]>*/
}
var_last_slash = var3;
{
{ /* Inline kernel#Int#> (var_last_slash,0l) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var7 = var_last_slash > 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel#Int#+ (var_last_slash,1l) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_last_slash + 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
var16 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var8, var15); /* substring on <self:String>*/
}
var = var16;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file#String#files for (self: String): Array[String] */
val* core__file___String___files(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
val* var2 /* : NativeDir */;
char* var3 /* : NativeString */;
val* var4 /* : NativeDir */;
val* var_d /* var d: NativeDir */;
short int var5 /* : Bool */;
char* var6 /* : NativeString */;
char* var_de /* var de: NativeString */;
short int var7 /* : Bool */;
val* var8 /* : Pointer */;
val* var9 /* : FlatString */;
val* var_name /* var name: FlatString */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
short int var19 /* : Bool */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_res = var1;
var2 = NEW_core__file__NativeDir(&type_core__file__NativeDir);
{
var3 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
var4 = ((val*(*)(val* self, char* p0))(var2->class->vft[COLOR_core__file__NativeDir__opendir]))(var2, var3); /* opendir on <var2:NativeDir>*/
}
var_d = var4;
{
var5 = ((short int(*)(val* self))(var_d->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_d); /* address_is_null on <var_d:NativeDir>*/
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
for(;;) {
{
var6 = ((char*(*)(val* self))(var_d->class->vft[COLOR_core__file__NativeDir__readdir]))(var_d); /* readdir on <var_d:NativeDir>*/
}
var_de = var6;
var8 = BOX_core__Pointer(var_de); /* autobox from NativeString to Pointer */
var7 = core___core__Pointer___address_is_null(var8);
if (var7){
goto BREAK_label;
} else {
}
var9 = core__flat___NativeString___to_s_with_copy(var_de);
var_name = var9;
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = ".";
var13 = core__flat___NativeString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce = var11;
}
{
var14 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var11); /* == on <var_name:FlatString>*/
}
var_ = var14;
if (var14){
var10 = var_;
} else {
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "..";
var18 = core__flat___NativeString___to_s_full(var17, 2l, 2l);
var16 = var18;
varonce15 = var16;
}
{
var19 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var16); /* == on <var_name:FlatString>*/
}
var10 = var19;
}
if (var10){
goto BREAK_label20;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var_name); /* add on <var_res:Array[String]>*/
}
BREAK_label20: (void)0;
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_d->class->vft[COLOR_core__file__NativeDir__closedir]))(var_d); /* closedir on <var_d:NativeDir>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FlatString#write_native_to for (self: FlatString, FileWriter) */
void core__file___FlatString___Text__write_native_to(val* self, val* p0) {
val* var_s /* var s: FileWriter */;
char* var /* : NativeString */;
long var1 /* : Int */;
long var2 /* : Int */;
var_s = p0;
{
var = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__FlatText__items]))(self); /* items on <self:FlatString>*/
}
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatString>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__bytelen]))(self); /* bytelen on <self:FlatString>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2))(var_s->class->vft[COLOR_core__file__FileWriter__write_native]))(var_s, var, var1, var2); /* write_native on <var_s:FileWriter>*/
}
RET_LABEL:;
}
/* method file#FlatString#file_extension for (self: FlatString): nullable String */
val* core__file___FlatString___String__file_extension(val* self) {
val* var /* : nullable String */;
char* var1 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var2 /* : Int */;
long var_p /* var p: Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
unsigned char var_c /* var c: Byte */;
long var6 /* : Int */;
long var_st /* var st: Int */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
unsigned char var12 /* : Byte */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
unsigned char var24 /* : Byte */;
unsigned char var26 /* : Byte */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var_ls /* var ls: Int */;
val* var35 /* : FlatString */;
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
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatString>*/
}
var_p = var2;
{
{ /* Inline native#NativeString#[] (var_its,var_p) on <var_its:NativeString> */
var5 = (unsigned char)((int)var_its[var_p]);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_c = var3;
var6 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_st = var6;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_p,var_st) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_st:Int> isa OTHER */
/* <var_st:Int> isa OTHER */
var10 = 1; /* easy <var_st:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var11 = var_p >= var_st;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_ = var8;
if (var8){
var12 = core___core__Char___ascii('.');
{
{ /* Inline kernel#Byte#!= (var_c,var12) on <var_c:Byte> */
var15 = var_c == var12;
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var7 = var13;
} else {
var7 = var_;
}
if (var7){
{
{ /* Inline kernel#Int#- (var_p,1l) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = var_p - 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_p = var17;
{
{ /* Inline native#NativeString#[] (var_its,var_p) on <var_its:NativeString> */
var26 = (unsigned char)((int)var_its[var_p]);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_c = var24;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#<= (var_p,var_st) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_st:Int> isa OTHER */
/* <var_st:Int> isa OTHER */
var29 = 1; /* easy <var_st:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var33 = var_p <= var_st;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var34 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatString>*/
}
var_ls = var34;
var35 = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline kernel#Int#- (var_ls,var_p) on <var_ls:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var38 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_ls - var_p;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_p,1l) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var45 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var49 = var_p + 1l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2))(var35->class->vft[COLOR_core__flat__FlatString__with_infos]))(var35, var_its, var36, var43); /* with_infos on <var35:FlatString>*/
}
var = var35;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FlatString#basename for (self: FlatString, nullable String): String */
val* core__file___FlatString___String__basename(val* self, val* p0) {
val* var /* : String */;
val* var_extension /* var extension: nullable String */;
long var1 /* : Int */;
long var_l /* var l: Int */;
char* var2 /* : NativeString */;
char* var_its /* var its: NativeString */;
long var3 /* : Int */;
long var_min /* var min: Int */;
unsigned char var4 /* : Byte */;
unsigned char var_sl /* var sl: Byte */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
unsigned char var10 /* : Byte */;
unsigned char var12 /* : Byte */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
static val* varonce;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : String */;
long var_ns /* var ns: Int */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
unsigned char var38 /* : Byte */;
unsigned char var40 /* : Byte */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
val* var53 /* : FlatString */;
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
val* var_bname /* var bname: FlatString */;
val* var68 /* : String */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : String */;
var_extension = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatString>*/
}
var_l = var1;
var2 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var2;
var3 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_min = var3;
var4 = core___core__Char___ascii('/');
var_sl = var4;
for(;;) {
{
{ /* Inline kernel#Int#> (var_l,var_min) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var8 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var9 = var_l > var_min;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_ = var6;
if (var6){
{
{ /* Inline native#NativeString#[] (var_its,var_l) on <var_its:NativeString> */
var12 = (unsigned char)((int)var_its[var_l]);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var10,var_sl) on <var10:Byte> */
var15 = var10 == var_sl;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var5 = var13;
} else {
var5 = var_;
}
if (var5){
{
{ /* Inline kernel#Int#- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_l - 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_l = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_l,var_min) on <var_l:Int> */
var25 = var_l == var_min;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
if (likely(varonce!=NULL)) {
var26 = varonce;
} else {
var27 = "/";
var28 = core__flat___NativeString___to_s_full(var27, 1l, 1l);
var26 = var28;
varonce = var26;
}
var = var26;
goto RET_LABEL;
} else {
}
var_ns = var_l;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_ns,var_min) on <var_ns:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var32 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var36 = var_ns >= var_min;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_37 = var30;
if (var30){
{
{ /* Inline native#NativeString#[] (var_its,var_ns) on <var_its:NativeString> */
var40 = (unsigned char)((int)var_its[var_ns]);
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel#Byte#!= (var38,var_sl) on <var38:Byte> */
var43 = var38 == var_sl;
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var29 = var41;
} else {
var29 = var_37;
}
if (var29){
{
{ /* Inline kernel#Int#- (var_ns,1l) on <var_ns:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var47 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var51 = var_ns - 1l;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_ns = var45;
} else {
goto BREAK_label52;
}
}
BREAK_label52: (void)0;
var53 = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline kernel#Int#- (var_l,var_ns) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_ns:Int> isa OTHER */
/* <var_ns:Int> isa OTHER */
var56 = 1; /* easy <var_ns:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var60 = var_l - var_ns;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_ns,1l) on <var_ns:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var67 = var_ns + 1l;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2))(var53->class->vft[COLOR_core__flat__FlatString__with_infos]))(var53, var_its, var54, var61); /* with_infos on <var53:FlatString>*/
}
var_bname = var53;
if (var_extension == NULL) {
var69 = 0; /* is null */
} else {
var69 = 1; /* arg is null and recv is not */
}
if (0) {
var70 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_extension, ((val*)NULL)); /* != on <var_extension:nullable String>*/
var69 = var70;
}
if (var69){
{
var71 = ((val*(*)(val* self, val* p0))(var_bname->class->vft[COLOR_core__file__String__strip_extension]))(var_bname, var_extension); /* strip_extension on <var_bname:FlatString>*/
}
var68 = var71;
} else {
var68 = var_bname;
}
var = var68;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_exists for (self: NativeString): Bool */
short int core__file___NativeString___file_exists(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__file___NativeString_file_exists___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_stat for (self: NativeString): NativeFileStat */
val* core__file___NativeString___file_stat(char* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
val* var2 /* : NativeFileStat */;
var1 = core__file___NativeString_file_stat___impl(self);
var2 = BOX_core__Pointer(var1); /* boxing NativeFileStat */
var2->type = &type_core__file__NativeFileStat;
var2->class = &class_core__file__NativeFileStat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_lstat for (self: NativeString): NativeFileStat */
val* core__file___NativeString___file_lstat(char* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
val* var2 /* : NativeFileStat */;
var1 = core__file___NativeString_file_lstat___impl(self);
var2 = BOX_core__Pointer(var1); /* boxing NativeFileStat */
var2->type = &type_core__file__NativeFileStat;
var2->class = &class_core__file__NativeFileStat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_mkdir for (self: NativeString): Bool */
short int core__file___NativeString___file_mkdir(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__file___NativeString_file_mkdir___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#rmdir for (self: NativeString): Bool */
short int core__file___NativeString___rmdir(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__file___NativeString_rmdir___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_delete for (self: NativeString): Bool */
short int core__file___NativeString___file_delete(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__file___NativeString_file_delete___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_chdir for (self: NativeString): Bool */
short int core__file___NativeString___file_chdir(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__file___NativeString_file_chdir___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeString#file_realpath for (self: NativeString): NativeString */
char* core__file___NativeString___file_realpath(char* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
var1 = core__file___NativeString_file_realpath___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#mode for (self: NativeFileStat): Int */
long core__file___core__file__NativeFileStat___mode(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_mode___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#atime for (self: NativeFileStat): Int */
long core__file___core__file__NativeFileStat___atime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_atime___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#ctime for (self: NativeFileStat): Int */
long core__file___core__file__NativeFileStat___ctime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_ctime___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#mtime for (self: NativeFileStat): Int */
long core__file___core__file__NativeFileStat___mtime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_mtime___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#size for (self: NativeFileStat): Int */
long core__file___core__file__NativeFileStat___size(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_size___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_reg for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_reg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_reg___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_dir for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_dir(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_dir___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_chr for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_chr(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_chr___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_blk for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_blk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_blk___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_fifo for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_fifo(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_fifo___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_lnk for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_lnk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_lnk___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_sock for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_sock(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_sock___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_read for (self: NativeFile, NativeString, Int): Int */
long core__file___core__file__NativeFile___io_read(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_io_read___impl(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_write for (self: NativeFile, NativeString, Int, Int): Int */
long core__file___core__file__NativeFile___io_write(val* self, char* p0, long p1, long p2) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_io_write___impl(var2, p0, p1, p2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#write_byte for (self: NativeFile, Byte): Int */
long core__file___core__file__NativeFile___write_byte(val* self, unsigned char p0) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_write_byte___impl(var2, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_close for (self: NativeFile): Int */
long core__file___core__file__NativeFile___io_close(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_io_close___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#file_stat for (self: NativeFile): NativeFileStat */
val* core__file___core__file__NativeFile___file_stat(val* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
void* var2 /* : NativeFile for extern */;
val* var3 /* : NativeFileStat */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_file_stat___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing NativeFileStat */
var3->type = &type_core__file__NativeFileStat;
var3->class = &class_core__file__NativeFileStat;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#ferror for (self: NativeFile): Bool */
short int core__file___core__file__NativeFile___ferror(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_ferror___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#fileno for (self: NativeFile): Int */
long core__file___core__file__NativeFile___fileno(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_fileno___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#flush for (self: NativeFile): Int */
long core__file___core__file__NativeFile___flush(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_flush___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#set_buffering_type for (self: NativeFile, Int, Int): Int */
long core__file___core__file__NativeFile___set_buffering_type(val* self, long p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_set_buffering_type___impl(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_read for (self: NativeFile, NativeString): NativeFile */
val* core__file___core__file__NativeFile___io_open_read(val* self, char* p0) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_io_open_read___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_write for (self: NativeFile, NativeString): NativeFile */
val* core__file___core__file__NativeFile___io_open_write(val* self, char* p0) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_io_open_write___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdin for (self: NativeFile): NativeFile */
val* core__file___core__file__NativeFile___native_stdin(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_native_stdin___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdout for (self: NativeFile): NativeFile */
val* core__file___core__file__NativeFile___native_stdout(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_native_stdout___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stderr for (self: NativeFile): NativeFile */
val* core__file___core__file__NativeFile___native_stderr(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_native_stderr___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeDir#opendir for (self: NativeDir, NativeString): NativeDir */
val* core__file___core__file__NativeDir___opendir(val* self, char* p0) {
val* var /* : NativeDir */;
val* var1 /* : NativeDir */;
val* var2 /* : NativeDir */;
var1 = core__file___new_NativeDir_opendir___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeDir */
var2->type = &type_core__file__NativeDir;
var2->class = &class_core__file__NativeDir;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeDir#closedir for (self: NativeDir) */
void core__file___core__file__NativeDir___closedir(val* self) {
void* var /* : NativeDir for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeDir */
core__file___NativeDir_closedir___impl(var);
RET_LABEL:;
}
/* method file#NativeDir#readdir for (self: NativeDir): NativeString */
char* core__file___core__file__NativeDir___readdir(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
void* var2 /* : NativeDir for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeDir */
var1 = core__file___NativeDir_readdir___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#stdin for (self: Sys): PollableReader */
val* core__file___Sys___stdin(val* self) {
val* var /* : PollableReader */;
short int var1 /* : Bool */;
val* var2 /* : PollableReader */;
val* var3 /* : Stdin */;
var1 = self->attrs[COLOR_core__file__Sys___stdin].val != NULL; /* _stdin on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Sys___stdin].val; /* _stdin on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdin");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 1452);
fatal_exit(1);
}
} else {
var3 = NEW_core__Stdin(&type_core__Stdin);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Stdin>*/
}
self->attrs[COLOR_core__file__Sys___stdin].val = var3; /* _stdin on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Sys#stdin= for (self: Sys, PollableReader) */
void core__file___Sys___stdin_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Sys___stdin].val = p0; /* _stdin on <self:Sys> */
RET_LABEL:;
}
/* method file#Sys#stdout for (self: Sys): Writer */
val* core__file___Sys___stdout(val* self) {
val* var /* : Writer */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
val* var3 /* : Stdout */;
var1 = self->attrs[COLOR_core__file__Sys___stdout].val != NULL; /* _stdout on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Sys___stdout].val; /* _stdout on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 1455);
fatal_exit(1);
}
} else {
var3 = NEW_core__Stdout(&type_core__Stdout);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Stdout>*/
}
self->attrs[COLOR_core__file__Sys___stdout].val = var3; /* _stdout on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Sys#stdout= for (self: Sys, Writer) */
void core__file___Sys___stdout_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Sys___stdout].val = p0; /* _stdout on <self:Sys> */
RET_LABEL:;
}
/* method file#Sys#stderr for (self: Sys): Writer */
val* core__file___Sys___stderr(val* self) {
val* var /* : Writer */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
val* var3 /* : Stderr */;
var1 = self->attrs[COLOR_core__file__Sys___stderr].val != NULL; /* _stderr on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Sys___stderr].val; /* _stderr on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 1458);
fatal_exit(1);
}
} else {
var3 = NEW_core__Stderr(&type_core__Stderr);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Stderr>*/
}
self->attrs[COLOR_core__file__Sys___stderr].val = var3; /* _stderr on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Sys#stderr= for (self: Sys, Writer) */
void core__file___Sys___stderr_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Sys___stderr].val = p0; /* _stderr on <self:Sys> */
RET_LABEL:;
}
/* method file#Sys#buffer_mode_full for (self: Sys): Int */
long core__file___Sys___buffer_mode_full(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__file___Sys_buffer_mode_full___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#buffer_mode_line for (self: Sys): Int */
long core__file___Sys___buffer_mode_line(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__file___Sys_buffer_mode_line___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#buffer_mode_none for (self: Sys): Int */
long core__file___Sys___buffer_mode_none(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__file___Sys_buffer_mode_none___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#poll for (self: Sys, Sequence[FileStream]): nullable FileStream */
val* core__file___Sys___poll(val* self, val* p0) {
val* var /* : nullable FileStream */;
val* var_streams /* var streams: Sequence[FileStream] */;
val* var1 /* : Array[Int] */;
val* var_in_fds /* var in_fds: Array[Int] */;
val* var2 /* : Array[Int] */;
val* var_out_fds /* var out_fds: Array[Int] */;
val* var3 /* : HashMap[Int, FileStream] */;
val* var_fd_to_stream /* var fd_to_stream: HashMap[Int, FileStream] */;
val* var_ /* var : Sequence[FileStream] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[FileStream] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_s /* var s: FileStream */;
long var8 /* : Int */;
long var_fd /* var fd: Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : nullable Object */;
val* var15 /* : nullable Object */;
val* var16 /* : nullable Int */;
val* var_polled_fd /* var polled_fd: nullable Int */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
var_streams = p0;
var1 = NEW_core__Array(&type_core__Array__core__Int);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[Int]>*/
}
var_in_fds = var1;
var2 = NEW_core__Array(&type_core__Array__core__Int);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:Array[Int]>*/
}
var_out_fds = var2;
var3 = NEW_core__HashMap(&type_core__HashMap__core__Int__core__FileStream);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:HashMap[Int, FileStream]>*/
}
var_fd_to_stream = var3;
var_ = var_streams;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[FileStream]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[FileStream]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[FileStream]>*/
}
var_s = var7;
{
var8 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__file__FileStream__fd]))(var_s); /* fd on <var_s:FileStream>*/
}
var_fd = var8;
/* <var_s:FileStream> isa FileReader */
cltype = type_core__FileReader.color;
idtype = type_core__FileReader.id;
if(cltype >= var_s->type->table_size) {
var9 = 0;
} else {
var9 = var_s->type->type_table[cltype] == idtype;
}
if (var9){
{
var10 = (val*)(var_fd<<2|1);
((void(*)(val* self, val* p0))(var_in_fds->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_in_fds, var10); /* add on <var_in_fds:Array[Int]>*/
}
} else {
}
/* <var_s:FileStream> isa FileWriter */
cltype12 = type_core__FileWriter.color;
idtype13 = type_core__FileWriter.id;
if(cltype12 >= var_s->type->table_size) {
var11 = 0;
} else {
var11 = var_s->type->type_table[cltype12] == idtype13;
}
if (var11){
{
var14 = (val*)(var_fd<<2|1);
((void(*)(val* self, val* p0))(var_out_fds->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_out_fds, var14); /* add on <var_out_fds:Array[Int]>*/
}
} else {
}
{
var15 = (val*)(var_fd<<2|1);
((void(*)(val* self, val* p0, val* p1))(var_fd_to_stream->class->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var_fd_to_stream, var15, var_s); /* []= on <var_fd_to_stream:HashMap[Int, FileStream]>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[FileStream]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[FileStream]>*/
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_core__file__Sys__intern_poll]))(self, var_in_fds, var_out_fds); /* intern_poll on <self:Sys>*/
}
var_polled_fd = var16;
if (var_polled_fd == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_polled_fd,((val*)NULL)) on <var_polled_fd:nullable Int> */
var20 = 0; /* incompatible types Int vs. null; cannot be NULL */
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
var21 = ((val*(*)(val* self, val* p0))(var_fd_to_stream->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var_fd_to_stream, var_polled_fd); /* [] on <var_fd_to_stream:HashMap[Int, FileStream]>*/
}
var = var21;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file#Sys#intern_poll for (self: Sys, Array[Int], Array[Int]): nullable Int */
val* core__file___Sys___intern_poll(val* self, val* p0, val* p1) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* var_for_c_1;
var_for_c_1 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
struct nitni_instance* var_for_c_2;
var_for_c_2 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_2->value = p1;
struct nitni_instance* ret_var;
ret_var = core__file___Sys_intern_poll___impl(var_for_c_0, var_for_c_1, var_for_c_2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
struct nitni_instance * NIT_NULL___null_Int() {
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = NULL;
return ret_for_c;
}
struct nitni_instance * NIT_NULL___null_Object() {
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = NULL;
return ret_for_c;
}
/* nitni callback for core::Collection::length */
long core__file___Array_of_Int_length( struct nitni_instance * self ) {
long var /* : Int */;
{
var = ((long(*)(val* self))(self->value->class->vft[COLOR_core__abstract_collection__Collection__length]))(self->value); /* length on <self->value:Array[Int]>*/
}
return var;
}
/* nitni callback for core::SequenceRead::[] */
long core__file___Array_of_Int__index( struct nitni_instance * self, long index ) {
val* var /* : nullable Object */;
long var1 /* : Int */;
{
var = ((val*(*)(val* self, long p0))(self->value->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self->value, index); /* [] on <self->value:Array[Int]>*/
}
var1 = (long)(var)>>2;
return var1;
}
/* nitni check for Int to nullable Int */
int core__file___Int_is_a_nullable_Int(long from) {
short int var /* : Bool */;
int cltype;
int idtype;
/* <from:Int> isa nullable Int */
var = 1; /* easy <from:Int> isa nullable Int*/
return var;
}
/* nitni cast for Int to nullable Int */
struct nitni_instance * core__file___Int_as_nullable_Int(long from) {
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : nullable Int */;
/* <from:Int> isa nullable Int */
var = 1; /* easy <from:Int> isa nullable Int*/
if (!var) {
PRINT_ERROR("Runtime error: %s", "FFI cast failed");
PRINT_ERROR("\n");
fatal_exit(1);
}
var1 = (val*)(from<<2|1);
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var1;
return ret_for_c;
}
/* method file#Sys#read_only for (self: Sys): NativeString */
char* core__file___Sys___read_only(val* self) {
char* var /* : NativeString */;
static char* varonce;
static int varonce_guard;
char* var1 /* : NativeString */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
char* var6 /* : NativeString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "r";
var5 = core__flat___NativeString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce2 = var3;
}
{
var6 = ((char*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var3); /* to_cstring on <var3:String>*/
}
var1 = var6;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#wipe_write for (self: Sys): NativeString */
char* core__file___Sys___wipe_write(val* self) {
char* var /* : NativeString */;
static char* varonce;
static int varonce_guard;
char* var1 /* : NativeString */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : String */;
char* var6 /* : NativeString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "w";
var5 = core__flat___NativeString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce2 = var3;
}
{
var6 = ((char*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var3); /* to_cstring on <var3:String>*/
}
var1 = var6;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#printn for (self: Sys, Array[Object]) */
void core__file___Sys___printn(val* self, val* p0) {
val* var_objects /* var objects: Array[Object] */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : String */;
var_objects = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_core__file__Sys__stdout]))(var); /* stdout on <var:Sys>*/
}
{
var4 = ((val*(*)(val* self))(var_objects->class->vft[COLOR_core__abstract_text__Collection__plain_to_s]))(var_objects); /* plain_to_s on <var_objects:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__stream__Writer__write]))(var3, var4); /* write on <var3:Writer>*/
}
RET_LABEL:;
}
/* method file#Sys#print for (self: Sys, Object) */
void core__file___Sys___print(val* self, val* p0) {
val* var_object /* var object: Object */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : String */;
val* var5 /* : Sys */;
val* var7 /* : Sys */;
val* var8 /* : Writer */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
var_object = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_core__file__Sys__stdout]))(var); /* stdout on <var:Sys>*/
}
{
var4 = ((val*(*)(val* self))((((long)var_object&3)?class_info[((long)var_object&3)]:var_object->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_object); /* to_s on <var_object:Object>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__stream__Writer__write]))(var3, var4); /* write on <var3:Writer>*/
}
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var7 = glob_sys;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var8 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__file__Sys__stdout]))(var5); /* stdout on <var5:Sys>*/
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "\n";
var11 = core__flat___NativeString___to_s_full(var10, 1l, 1l);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__stream__Writer__write]))(var8, var9); /* write on <var8:Writer>*/
}
RET_LABEL:;
}
/* method file#Sys#print_error for (self: Sys, Object) */
void core__file___Sys___print_error(val* self, val* p0) {
val* var_object /* var object: Object */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : String */;
val* var5 /* : Sys */;
val* var7 /* : Sys */;
val* var8 /* : Writer */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
var_object = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_core__file__Sys__stderr]))(var); /* stderr on <var:Sys>*/
}
{
var4 = ((val*(*)(val* self))((((long)var_object&3)?class_info[((long)var_object&3)]:var_object->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_object); /* to_s on <var_object:Object>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__stream__Writer__write]))(var3, var4); /* write on <var3:Writer>*/
}
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var7 = glob_sys;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var8 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__file__Sys__stderr]))(var5); /* stderr on <var5:Sys>*/
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "\n";
var11 = core__flat___NativeString___to_s_full(var10, 1l, 1l);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__stream__Writer__write]))(var8, var9); /* write on <var8:Writer>*/
}
RET_LABEL:;
}
/* method file#Sys#getc for (self: Sys): Char */
uint32_t core__file___Sys___getc(val* self) {
uint32_t var /* : Char */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : PollableReader */;
val* var5 /* : nullable Char */;
val* var_c /* var c: nullable Char */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
uint32_t var10 /* : Char */;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__file__Sys__stdin]))(var1); /* stdin on <var1:Sys>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__stream__Reader__read_char]))(var4); /* read_char on <var4:PollableReader>*/
}
var_c = var5;
if (var_c == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Char#== (var_c,((val*)NULL)) on <var_c:nullable Char> */
var9 = 0; /* incompatible types Char vs. null; cannot be NULL */
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
var = '1';
goto RET_LABEL;
} else {
}
var10 = (uint32_t)((long)(var_c)>>2);
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#gets for (self: Sys): String */
val* core__file___Sys___gets(val* self) {
val* var /* : String */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : PollableReader */;
val* var5 /* : String */;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__file__Sys__stdin]))(var1); /* stdin on <var1:Sys>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__stream__Reader__read_line]))(var4); /* read_line on <var4:PollableReader>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#getcwd for (self: Sys): String */
val* core__file___Sys___getcwd(val* self) {
val* var /* : String */;
char* var1 /* : NativeString */;
val* var2 /* : String */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__file__Sys__native_getcwd]))(self); /* native_getcwd on <self:Sys>*/
}
var2 = core__flat___NativeString___core__abstract_text__Object__to_s(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#native_getcwd for (self: Sys): NativeString */
char* core__file___Sys___native_getcwd(val* self) {
char* var /* : NativeString */;
char* var1 /* : NativeString */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__file___Sys_native_getcwd___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
