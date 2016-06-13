#include "core__range.sep.0.h"
/* method range#Range#first for (self: Range[Discrete]): Discrete */
val* core___core__Range___core__abstract_collection__Collection__first(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_core__range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 22);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#first= for (self: Range[Discrete], Discrete) */
void core___core__Range___first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (first) <p0:Discrete> isa E */
/* <p0:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 22);
fatal_exit(1);
}
self->attrs[COLOR_core__range__Range___first].val = p0; /* _first on <self:Range[Discrete]> */
RET_LABEL:;
}
/* method range#Range#last for (self: Range[Discrete]): Discrete */
val* core___core__Range___last(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_core__range__Range___last].val; /* _last on <self:Range[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _last");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#last= for (self: Range[Discrete], Discrete) */
void core___core__Range___last_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (last) <p0:Discrete> isa E */
/* <p0:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 24);
fatal_exit(1);
}
self->attrs[COLOR_core__range__Range___last].val = p0; /* _last on <self:Range[Discrete]> */
RET_LABEL:;
}
/* method range#Range#after for (self: Range[Discrete]): Discrete */
val* core___core__Range___after(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_core__range__Range___after].val; /* _after on <self:Range[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _after");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#after= for (self: Range[Discrete], Discrete) */
void core___core__Range___after_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (after) <p0:Discrete> isa E */
/* <p0:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 27);
fatal_exit(1);
}
self->attrs[COLOR_core__range__Range___after].val = p0; /* _after on <self:Range[Discrete]> */
RET_LABEL:;
}
/* method range#Range#has for (self: Range[Discrete], nullable Object): Bool */
short int core___core__Range___core__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
val* var_item /* var item: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var_6 /* var : Bool */;
val* var7 /* : Discrete */;
short int var8 /* : Bool */;
var_item = p0;
/* <var_item:nullable Object> isa Comparable */
cltype = type_core__Comparable.color;
idtype = type_core__Comparable.id;
if(var_item == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->type_table[cltype] == idtype;
}
}
var_ = var3;
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__first]))(self); /* first on <self:Range[Discrete]>*/
}
{
var5 = ((short int(*)(val* self, val* p0))((((long)var_item&3)?class_info[((long)var_item&3)]:var_item->class)->vft[COLOR_core__kernel__Comparable___62d_61d]))(var_item, var4); /* >= on <var_item:nullable Object(Comparable)>*/
}
var2 = var5;
} else {
var2 = var_;
}
var_6 = var2;
if (var2){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_core__range__Range__last]))(self); /* last on <self:Range[Discrete]>*/
}
{
var8 = ((short int(*)(val* self, val* p0))((((long)var_item&3)?class_info[((long)var_item&3)]:var_item->class)->vft[COLOR_core__kernel__Comparable___60d_61d]))(var_item, var7); /* <= on <var_item:nullable Object(Comparable)>*/
}
var1 = var8;
} else {
var1 = var_6;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#has_only for (self: Range[Discrete], nullable Object): Bool */
short int core___core__Range___core__abstract_collection__Collection__has_only(val* self, val* p0) {
short int var /* : Bool */;
val* var_item /* var item: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
val* var5 /* : Discrete */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_8 /* var : Bool */;
short int var9 /* : Bool */;
var_item = p0;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__first]))(self); /* first on <self:Range[Discrete]>*/
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var3, var_item); /* == on <var3:nullable Object(Discrete)>*/
}
var_ = var4;
if (var4){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__range__Range__last]))(self); /* last on <self:Range[Discrete]>*/
}
if (var_item == NULL) {
var6 = 0; /* <var5:Discrete> cannot be null */
} else {
var7 = ((short int(*)(val* self, val* p0))((((long)var_item&3)?class_info[((long)var_item&3)]:var_item->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_item, var5); /* == on <var_item:nullable Object>*/
var6 = var7;
}
var2 = var6;
} else {
var2 = var_;
}
var_8 = var2;
if (var2){
var1 = var_8;
} else {
{
var9 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:Range[Discrete]>*/
}
var1 = var9;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#count for (self: Range[Discrete], nullable Object): Int */
long core___core__Range___core__abstract_collection__Collection__count(val* self, val* p0) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
short int var1 /* : Bool */;
var_item = p0;
{
var1 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_collection__Collection__has]))(self, var_item); /* has on <self:Range[Discrete]>*/
}
if (var1){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method range#Range#iterator for (self: Range[Discrete]): Iterator[Discrete] */
val* core___core__Range___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[Discrete] */;
val* var1 /* : IteratorRange[Discrete] */;
var1 = NEW_core__range__IteratorRange(self->type->resolution_table->types[COLOR_core__range__IteratorRange__core__Range___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__range__IteratorRange__range_61d]))(var1, self); /* range= on <var1:IteratorRange[Discrete]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:IteratorRange[Discrete]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#reverse_iterator for (self: Range[Discrete]): Iterator[Discrete] */
val* core___core__Range___reverse_iterator(val* self) {
val* var /* : Iterator[Discrete] */;
val* var1 /* : ReverseIteratorRange[Discrete] */;
var1 = NEW_core__range__ReverseIteratorRange(self->type->resolution_table->types[COLOR_core__range__ReverseIteratorRange__core__Range___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__range__ReverseIteratorRange__range_61d]))(var1, self); /* range= on <var1:ReverseIteratorRange[Discrete]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ReverseIteratorRange[Discrete]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#length for (self: Range[Discrete]): Int */
long core___core__Range___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
val* var3 /* : Discrete */;
long var4 /* : Int */;
long var_nb /* var nb: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:Range[Discrete]>*/
}
if (var1){
var = 0l;
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__first]))(self); /* first on <self:Range[Discrete]>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__range__Range__after]))(self); /* after on <self:Range[Discrete]>*/
}
{
var4 = ((long(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__kernel__Discrete__distance]))(var2, var3); /* distance on <var2:nullable Object(Discrete)>*/
}
var_nb = var4;
{
{ /* Inline kernel#Int#> (var_nb,0l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var8 = var_nb > 0l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = var_nb;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method range#Range#is_empty for (self: Range[Discrete]): Bool */
short int core___core__Range___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable Object */;
val* var2 /* : Discrete */;
short int var3 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__first]))(self); /* first on <self:Range[Discrete]>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__range__Range__after]))(self); /* after on <self:Range[Discrete]>*/
}
{
var3 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Comparable___62d_61d]))(var1, var2); /* >= on <var1:nullable Object(Discrete)>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#init for (self: Range[Discrete], Discrete, Discrete) */
void core___core__Range___init(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
val* var_from /* var from: Discrete */;
val* var_to /* var to: Discrete */;
val* var6 /* : Discrete */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const struct type* type_struct10;
const char* var_class_name11;
/* Covariant cast for argument 0 (from) <p0:Discrete> isa E */
/* <p0:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 81);
fatal_exit(1);
}
/* Covariant cast for argument 1 (to) <p1:Discrete> isa E */
/* <p1:Discrete> isa E */
type_struct4 = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 81);
fatal_exit(1);
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:Range[Discrete]>*/
}
var_from = p0;
var_to = p1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__range__Range__first_61d]))(self, var_from); /* first= on <self:Range[Discrete]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__range__Range__last_61d]))(self, var_to); /* last= on <self:Range[Discrete]>*/
}
{
var6 = ((val*(*)(val* self, long p0))((((long)var_to&3)?class_info[((long)var_to&3)]:var_to->class)->vft[COLOR_core__kernel__Discrete__successor]))(var_to, 1l); /* successor on <var_to:Discrete>*/
}
/* <var6:Discrete> isa E */
type_struct10 = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype8 = type_struct10->color;
idtype9 = type_struct10->id;
if(cltype8 >= (((long)var6&3)?type_info[((long)var6&3)]:var6->type)->table_size) {
var7 = 0;
} else {
var7 = (((long)var6&3)?type_info[((long)var6&3)]:var6->type)->type_table[cltype8] == idtype9;
}
if (unlikely(!var7)) {
var_class_name11 = var6 == NULL ? "null" : (((long)var6&3)?type_info[((long)var6&3)]:var6->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 91);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__range__Range__after_61d]))(self, var6); /* after= on <self:Range[Discrete]>*/
}
RET_LABEL:;
}
/* method range#Range#without_last for (self: Range[Discrete], Discrete, Discrete) */
void core___core__Range___without_last(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
val* var_from /* var from: Discrete */;
val* var_to /* var to: Discrete */;
short int var6 /* : Bool */;
val* var7 /* : Discrete */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const struct type* type_struct11;
const char* var_class_name12;
val* var13 /* : Discrete */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const struct type* type_struct17;
const char* var_class_name18;
/* Covariant cast for argument 0 (from) <p0:Discrete> isa E */
/* <p0:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 94);
fatal_exit(1);
}
/* Covariant cast for argument 1 (to) <p1:Discrete> isa E */
/* <p1:Discrete> isa E */
type_struct4 = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 94);
fatal_exit(1);
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:Range[Discrete]>*/
}
var_from = p0;
var_to = p1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__range__Range__first_61d]))(self, var_from); /* first= on <self:Range[Discrete]>*/
}
{
var6 = ((short int(*)(val* self, val* p0))((((long)var_from&3)?class_info[((long)var_from&3)]:var_from->class)->vft[COLOR_core__kernel__Comparable___60d_61d]))(var_from, var_to); /* <= on <var_from:Discrete>*/
}
if (var6){
{
var7 = ((val*(*)(val* self, long p0))((((long)var_to&3)?class_info[((long)var_to&3)]:var_to->class)->vft[COLOR_core__kernel__Discrete__predecessor]))(var_to, 1l); /* predecessor on <var_to:Discrete>*/
}
/* <var7:Discrete> isa E */
type_struct11 = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype9 = type_struct11->color;
idtype10 = type_struct11->id;
if(cltype9 >= (((long)var7&3)?type_info[((long)var7&3)]:var7->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var7&3)?type_info[((long)var7&3)]:var7->type)->type_table[cltype9] == idtype10;
}
if (unlikely(!var8)) {
var_class_name12 = var7 == NULL ? "null" : (((long)var7&3)?type_info[((long)var7&3)]:var7->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 105);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__range__Range__last_61d]))(self, var7); /* last= on <self:Range[Discrete]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__range__Range__after_61d]))(self, var_to); /* after= on <self:Range[Discrete]>*/
}
} else {
{
var13 = ((val*(*)(val* self, long p0))((((long)var_to&3)?class_info[((long)var_to&3)]:var_to->class)->vft[COLOR_core__kernel__Discrete__successor]))(var_to, 1l); /* successor on <var_to:Discrete>*/
}
/* <var13:Discrete> isa E */
type_struct17 = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype15 = type_struct17->color;
idtype16 = type_struct17->id;
if(cltype15 >= (((long)var13&3)?type_info[((long)var13&3)]:var13->type)->table_size) {
var14 = 0;
} else {
var14 = (((long)var13&3)?type_info[((long)var13&3)]:var13->type)->type_table[cltype15] == idtype16;
}
if (unlikely(!var14)) {
var_class_name18 = var13 == NULL ? "null" : (((long)var13&3)?type_info[((long)var13&3)]:var13->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 108);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__range__Range__last_61d]))(self, var13); /* last= on <self:Range[Discrete]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__range__Range__after_61d]))(self, var_to); /* after= on <self:Range[Discrete]>*/
}
}
RET_LABEL:;
}
/* method range#Range#== for (self: Range[Discrete], nullable Object): Bool */
short int core___core__Range___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
short int var_ /* var : Bool */;
val* var4 /* : nullable Object */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
short int var_7 /* var : Bool */;
val* var8 /* : Discrete */;
val* var9 /* : Discrete */;
short int var10 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa Range[E] */
type_struct = self->type->resolution_table->types[COLOR_core__Range__core__Range___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_o == NULL) {
var3 = is_nullable;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var_ = var3;
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__first]))(self); /* first on <self:Range[Discrete]>*/
}
{
var5 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__abstract_collection__Collection__first]))(var_o); /* first on <var_o:nullable Object(Range[Discrete])>*/
}
{
var6 = ((short int(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var4, var5); /* == on <var4:nullable Object(Discrete)>*/
}
var2 = var6;
} else {
var2 = var_;
}
var_7 = var2;
if (var2){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__range__Range__last]))(self); /* last on <self:Range[Discrete]>*/
}
{
var9 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__range__Range__last]))(var_o); /* last on <var_o:nullable Object(Range[Discrete])>*/
}
{
var10 = ((short int(*)(val* self, val* p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var8, var9); /* == on <var8:Discrete>*/
}
var1 = var10;
} else {
var1 = var_7;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#hash for (self: Range[Discrete]): Int */
long core___core__Range___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : nullable Object */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var7 /* : Discrete */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__first]))(self); /* first on <self:Range[Discrete]>*/
}
{
var2 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Object__hash]))(var1); /* hash on <var1:nullable Object(Discrete)>*/
}
{
{ /* Inline kernel#Int#* (var2,11l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <11l:Int> isa OTHER */
/* <11l:Int> isa OTHER */
var5 = 1; /* easy <11l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var6 = var2 * 11l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_core__range__Range__last]))(self); /* last on <self:Range[Discrete]>*/
}
{
var8 = ((long(*)(val* self))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__kernel__Object__hash]))(var7); /* hash on <var7:Discrete>*/
}
{
{ /* Inline kernel#Int#* (var8,23l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <23l:Int> isa OTHER */
/* <23l:Int> isa OTHER */
var11 = 1; /* easy <23l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var15 = var8 * 23l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var3,var9) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var18 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var22 = var3 + var9;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#step for (self: Range[Discrete], Int): Iterator[Discrete] */
val* core___core__Range___step(val* self, long p0) {
val* var /* : Iterator[Discrete] */;
long var_step /* var step: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : Iterator[nullable Object] */;
val* var_i /* var i: nullable Object */;
val* var6 /* : DowntoIteratorRange[Discrete] */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Iterator[nullable Object] */;
var_step = p0;
{
{ /* Inline kernel#Int#>= (var_step,0l) on <var_step:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 723);
fatal_exit(1);
}
var4 = var_step >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(self); /* iterator on <self:Range[Discrete]>*/
}
var_i = var5;
} else {
var6 = NEW_core__range__DowntoIteratorRange(self->type->resolution_table->types[COLOR_core__range__DowntoIteratorRange__core__Range___35dE]);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__range__DowntoIteratorRange__range_61d]))(var6, self); /* range= on <var6:DowntoIteratorRange[Discrete]>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:DowntoIteratorRange[Discrete]>*/
}
var_i = var6;
{
{ /* Inline kernel#Int#unary - (var_step) on <var_step:Int> */
var9 = -var_step;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_step = var7;
}
{
{ /* Inline kernel#Int#== (var_step,1l) on <var_step:Int> */
var12 = var_step == 1l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = var_i;
goto RET_LABEL;
} else {
}
{
var13 = ((val*(*)(val* self, long p0))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__to_step]))(var_i, var_step); /* to_step on <var_i:nullable Object(Iterator[Discrete])>*/
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#IteratorRange#range for (self: IteratorRange[Discrete]): Range[Discrete] */
val* core__range___core__range__IteratorRange___range(val* self) {
val* var /* : Range[Discrete] */;
val* var1 /* : Range[Discrete] */;
var1 = self->attrs[COLOR_core__range__IteratorRange___range].val; /* _range on <self:IteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _range");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 194);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#IteratorRange#range= for (self: IteratorRange[Discrete], Range[Discrete]) */
void core__range___core__range__IteratorRange___range_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (range) <p0:Range[Discrete]> isa Range[E] */
/* <p0:Range[Discrete]> isa Range[E] */
type_struct = self->type->resolution_table->types[COLOR_core__Range__core__range__IteratorRange___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 194);
fatal_exit(1);
}
self->attrs[COLOR_core__range__IteratorRange___range].val = p0; /* _range on <self:IteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#IteratorRange#item for (self: IteratorRange[Discrete]): Discrete */
val* core__range___core__range__IteratorRange___core__abstract_collection__Iterator__item(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_core__range__IteratorRange___item].val; /* _item on <self:IteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 195);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#IteratorRange#item= for (self: IteratorRange[Discrete], Discrete) */
void core__range___core__range__IteratorRange___item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (item) <p0:Discrete> isa E */
/* <p0:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__range__IteratorRange___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 195);
fatal_exit(1);
}
self->attrs[COLOR_core__range__IteratorRange___item].val = p0; /* _item on <self:IteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#IteratorRange#is_ok for (self: IteratorRange[Discrete]): Bool */
short int core__range___core__range__IteratorRange___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Discrete */;
val* var2 /* : Range[Discrete] */;
val* var3 /* : Discrete */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_core__range__IteratorRange___item].val; /* _item on <self:IteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 197);
fatal_exit(1);
}
var2 = self->attrs[COLOR_core__range__IteratorRange___range].val; /* _range on <self:IteratorRange[Discrete]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _range");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 197);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__range__Range__after]))(var2); /* after on <var2:Range[Discrete]>*/
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Comparable___60d]))(var1, var3); /* < on <var1:Discrete>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#IteratorRange#next for (self: IteratorRange[Discrete]) */
void core__range___core__range__IteratorRange___core__abstract_collection__Iterator__next(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var = self->attrs[COLOR_core__range__IteratorRange___item].val; /* _item on <self:IteratorRange[Discrete]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 199);
fatal_exit(1);
}
{
var1 = ((val*(*)(val* self, long p0))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__kernel__Discrete__successor]))(var, 1l); /* successor on <var:Discrete>*/
}
/* <var1:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__range__IteratorRange___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 199);
fatal_exit(1);
}
self->attrs[COLOR_core__range__IteratorRange___item].val = var1; /* _item on <self:IteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#IteratorRange#init for (self: IteratorRange[Discrete]) */
void core__range___core__range__IteratorRange___core__kernel__Object__init(val* self) {
val* var /* : Range[Discrete] */;
val* var1 /* : nullable Object */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__range___core__range__IteratorRange___core__kernel__Object__init]))(self); /* init on <self:IteratorRange[Discrete]>*/
}
var = self->attrs[COLOR_core__range__IteratorRange___range].val; /* _range on <self:IteratorRange[Discrete]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _range");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 203);
fatal_exit(1);
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_collection__Collection__first]))(var); /* first on <var:Range[Discrete]>*/
}
self->attrs[COLOR_core__range__IteratorRange___item].val = var1; /* _item on <self:IteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#ReverseIteratorRange#range for (self: ReverseIteratorRange[Discrete]): Range[Discrete] */
val* core__range___core__range__ReverseIteratorRange___range(val* self) {
val* var /* : Range[Discrete] */;
val* var1 /* : Range[Discrete] */;
var1 = self->attrs[COLOR_core__range__ReverseIteratorRange___range].val; /* _range on <self:ReverseIteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _range");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 210);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#ReverseIteratorRange#range= for (self: ReverseIteratorRange[Discrete], Range[Discrete]) */
void core__range___core__range__ReverseIteratorRange___range_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (range) <p0:Range[Discrete]> isa Range[E] */
/* <p0:Range[Discrete]> isa Range[E] */
type_struct = self->type->resolution_table->types[COLOR_core__Range__core__range__ReverseIteratorRange___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 210);
fatal_exit(1);
}
self->attrs[COLOR_core__range__ReverseIteratorRange___range].val = p0; /* _range on <self:ReverseIteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#ReverseIteratorRange#item for (self: ReverseIteratorRange[Discrete]): Discrete */
val* core__range___core__range__ReverseIteratorRange___core__abstract_collection__Iterator__item(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_core__range__ReverseIteratorRange___item].val; /* _item on <self:ReverseIteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 211);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#ReverseIteratorRange#item= for (self: ReverseIteratorRange[Discrete], Discrete) */
void core__range___core__range__ReverseIteratorRange___item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (item) <p0:Discrete> isa E */
/* <p0:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__range__ReverseIteratorRange___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 211);
fatal_exit(1);
}
self->attrs[COLOR_core__range__ReverseIteratorRange___item].val = p0; /* _item on <self:ReverseIteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#ReverseIteratorRange#is_ok for (self: ReverseIteratorRange[Discrete]): Bool */
short int core__range___core__range__ReverseIteratorRange___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Discrete */;
val* var2 /* : Range[Discrete] */;
val* var3 /* : nullable Object */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_core__range__ReverseIteratorRange___item].val; /* _item on <self:ReverseIteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 213);
fatal_exit(1);
}
var2 = self->attrs[COLOR_core__range__ReverseIteratorRange___range].val; /* _range on <self:ReverseIteratorRange[Discrete]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _range");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 213);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_collection__Collection__first]))(var2); /* first on <var2:Range[Discrete]>*/
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Comparable___62d_61d]))(var1, var3); /* >= on <var1:Discrete>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#ReverseIteratorRange#next for (self: ReverseIteratorRange[Discrete]) */
void core__range___core__range__ReverseIteratorRange___core__abstract_collection__Iterator__next(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var = self->attrs[COLOR_core__range__ReverseIteratorRange___item].val; /* _item on <self:ReverseIteratorRange[Discrete]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 215);
fatal_exit(1);
}
{
var1 = ((val*(*)(val* self, long p0))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__kernel__Discrete__predecessor]))(var, 1l); /* predecessor on <var:Discrete>*/
}
/* <var1:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__range__ReverseIteratorRange___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 215);
fatal_exit(1);
}
self->attrs[COLOR_core__range__ReverseIteratorRange___item].val = var1; /* _item on <self:ReverseIteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#ReverseIteratorRange#init for (self: ReverseIteratorRange[Discrete]) */
void core__range___core__range__ReverseIteratorRange___core__kernel__Object__init(val* self) {
val* var /* : Range[Discrete] */;
val* var1 /* : Discrete */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__range___core__range__ReverseIteratorRange___core__kernel__Object__init]))(self); /* init on <self:ReverseIteratorRange[Discrete]>*/
}
var = self->attrs[COLOR_core__range__ReverseIteratorRange___range].val; /* _range on <self:ReverseIteratorRange[Discrete]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _range");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 219);
fatal_exit(1);
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__range__Range__last]))(var); /* last on <var:Range[Discrete]>*/
}
self->attrs[COLOR_core__range__ReverseIteratorRange___item].val = var1; /* _item on <self:ReverseIteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#DowntoIteratorRange#range for (self: DowntoIteratorRange[Discrete]): Range[Discrete] */
val* core__range___core__range__DowntoIteratorRange___range(val* self) {
val* var /* : Range[Discrete] */;
val* var1 /* : Range[Discrete] */;
var1 = self->attrs[COLOR_core__range__DowntoIteratorRange___range].val; /* _range on <self:DowntoIteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _range");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 226);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#DowntoIteratorRange#range= for (self: DowntoIteratorRange[Discrete], Range[Discrete]) */
void core__range___core__range__DowntoIteratorRange___range_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (range) <p0:Range[Discrete]> isa Range[E] */
/* <p0:Range[Discrete]> isa Range[E] */
type_struct = self->type->resolution_table->types[COLOR_core__Range__core__range__DowntoIteratorRange___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 226);
fatal_exit(1);
}
self->attrs[COLOR_core__range__DowntoIteratorRange___range].val = p0; /* _range on <self:DowntoIteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#DowntoIteratorRange#item for (self: DowntoIteratorRange[Discrete]): Discrete */
val* core__range___core__range__DowntoIteratorRange___core__abstract_collection__Iterator__item(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_core__range__DowntoIteratorRange___item].val; /* _item on <self:DowntoIteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 227);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#DowntoIteratorRange#item= for (self: DowntoIteratorRange[Discrete], Discrete) */
void core__range___core__range__DowntoIteratorRange___item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (item) <p0:Discrete> isa E */
/* <p0:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__range__DowntoIteratorRange___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 227);
fatal_exit(1);
}
self->attrs[COLOR_core__range__DowntoIteratorRange___item].val = p0; /* _item on <self:DowntoIteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#DowntoIteratorRange#index for (self: DowntoIteratorRange[Discrete]): Int */
long core__range___core__range__DowntoIteratorRange___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
val* var1 /* : Discrete */;
val* var2 /* : Range[Discrete] */;
val* var3 /* : nullable Object */;
long var4 /* : Int */;
var1 = self->attrs[COLOR_core__range__DowntoIteratorRange___item].val; /* _item on <self:DowntoIteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 228);
fatal_exit(1);
}
var2 = self->attrs[COLOR_core__range__DowntoIteratorRange___range].val; /* _range on <self:DowntoIteratorRange[Discrete]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _range");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 228);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_collection__Collection__first]))(var2); /* first on <var2:Range[Discrete]>*/
}
{
var4 = ((long(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Discrete__distance]))(var1, var3); /* distance on <var1:Discrete>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#DowntoIteratorRange#is_ok for (self: DowntoIteratorRange[Discrete]): Bool */
short int core__range___core__range__DowntoIteratorRange___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Discrete */;
val* var2 /* : Range[Discrete] */;
val* var3 /* : Discrete */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_core__range__DowntoIteratorRange___item].val; /* _item on <self:DowntoIteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 230);
fatal_exit(1);
}
var2 = self->attrs[COLOR_core__range__DowntoIteratorRange___range].val; /* _range on <self:DowntoIteratorRange[Discrete]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _range");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 230);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__range__Range__last]))(var2); /* last on <var2:Range[Discrete]>*/
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Comparable___62d_61d]))(var1, var3); /* >= on <var1:Discrete>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#DowntoIteratorRange#next for (self: DowntoIteratorRange[Discrete]) */
void core__range___core__range__DowntoIteratorRange___core__abstract_collection__Iterator__next(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var = self->attrs[COLOR_core__range__DowntoIteratorRange___item].val; /* _item on <self:DowntoIteratorRange[Discrete]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 232);
fatal_exit(1);
}
{
var1 = ((val*(*)(val* self, long p0))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__kernel__Discrete__predecessor]))(var, 1l); /* predecessor on <var:Discrete>*/
}
/* <var1:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__range__DowntoIteratorRange___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 232);
fatal_exit(1);
}
self->attrs[COLOR_core__range__DowntoIteratorRange___item].val = var1; /* _item on <self:DowntoIteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#DowntoIteratorRange#init for (self: DowntoIteratorRange[Discrete]) */
void core__range___core__range__DowntoIteratorRange___core__kernel__Object__init(val* self) {
val* var /* : Range[Discrete] */;
val* var1 /* : nullable Object */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__range___core__range__DowntoIteratorRange___core__kernel__Object__init]))(self); /* init on <self:DowntoIteratorRange[Discrete]>*/
}
var = self->attrs[COLOR_core__range__DowntoIteratorRange___range].val; /* _range on <self:DowntoIteratorRange[Discrete]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _range");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 236);
fatal_exit(1);
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_collection__Collection__first]))(var); /* first on <var:Range[Discrete]>*/
}
self->attrs[COLOR_core__range__DowntoIteratorRange___item].val = var1; /* _item on <self:DowntoIteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#Int#times for (self: Int): Range[Int] */
val* core__range___Int___times(long self) {
val* var /* : Range[Int] */;
val* var1 /* : Range[Int] */;
val* var2 /* : Discrete */;
val* var3 /* : Discrete */;
var1 = NEW_core__Range(&type_core__Range__core__Int);
{
var2 = (val*)(0l<<2|1);
var3 = (val*)(self<<2|1);
((void(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_core__range__Range__without_last]))(var1, var2, var3); /* without_last on <var1:Range[Int]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
