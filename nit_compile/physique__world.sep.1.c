#include "physique__world.sep.0.h"
/* method world#World#entities for (self: World): Array[Entity] */
val* physique___physique__World___entities(val* self) {
val* var /* : Array[Entity] */;
val* var1 /* : Array[Entity] */;
var1 = self->attrs[COLOR_physique__world__World___entities].val; /* _entities on <self:World> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _entities");
PRINT_ERROR(" (%s:%d)\n", FILE_physique__world, 10);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method world#World#entities= for (self: World, Array[Entity]) */
void physique___physique__World___entities_61d(val* self, val* p0) {
self->attrs[COLOR_physique__world__World___entities].val = p0; /* _entities on <self:World> */
RET_LABEL:;
}
/* method world#World#forces_applied for (self: World): Array[Force] */
val* physique___physique__World___forces_applied(val* self) {
val* var /* : Array[Force] */;
val* var1 /* : Array[Force] */;
var1 = self->attrs[COLOR_physique__world__World___forces_applied].val; /* _forces_applied on <self:World> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _forces_applied");
PRINT_ERROR(" (%s:%d)\n", FILE_physique__world, 12);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method world#World#forces_applied= for (self: World, Array[Force]) */
void physique___physique__World___forces_applied_61d(val* self, val* p0) {
self->attrs[COLOR_physique__world__World___forces_applied].val = p0; /* _forces_applied on <self:World> */
RET_LABEL:;
}
/* method world#World#add_entity for (self: World, Entity) */
void physique___physique__World___add_entity(val* self, val* p0) {
val* var_e /* var e: Entity */;
val* var /* : Array[Entity] */;
var_e = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__world__World__entities]))(self); /* entities on <self:World>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var, var_e); /* add on <var:Array[Entity]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_physique__world__World__load_entity]))(self, var_e); /* load_entity on <self:World>*/
}
RET_LABEL:;
}
/* method world#World#load_entity for (self: World, Entity) */
void physique___physique__World___load_entity(val* self, val* p0) {
val* var_e /* var e: Entity */;
val* var /* : Texture */;
var_e = p0;
{
var = ((val*(*)(val* self))(var_e->class->vft[COLOR_physique__nitSimulation__Entity__texture]))(var_e); /* texture on <var_e:Entity>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_gamnit__textures__Texture__load]))(var, ((val*)NULL)); /* load on <var:Texture>*/
}
RET_LABEL:;
}
/* method world#World#add_force for (self: World, Force) */
void physique___physique__World___add_force(val* self, val* p0) {
val* var_f /* var f: Force */;
val* var /* : Array[Force] */;
var_f = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__world__World__forces_applied]))(self); /* forces_applied on <self:World>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var, var_f); /* add on <var:Array[Force]>*/
}
RET_LABEL:;
}
/* method world#World#update for (self: World, Float) */
void physique___physique__World___update(val* self, double p0) {
double var_dt /* var dt: Float */;
long var_i /* var i: Int */;
val* var /* : Array[Entity] */;
long var1 /* : Int */;
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
long var_j /* var j: Int */;
val* var20 /* : Array[Entity] */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
long var_29 /* var : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var38 /* : Array[Entity] */;
val* var39 /* : nullable Object */;
val* var40 /* : Array[Entity] */;
val* var41 /* : nullable Object */;
long var42 /* : Int */;
long var43 /* : Int */;
val* var44 /* : Array[Entity] */;
val* var_45 /* var : Array[Entity] */;
val* var46 /* : Iterator[nullable Object] */;
val* var_47 /* var : IndexedIterator[Entity] */;
short int var48 /* : Bool */;
val* var50 /* : nullable Object */;
val* var_e /* var e: Entity */;
var_dt = p0;
{
((void(*)(val* self))(self->class->vft[COLOR_physique__world__World__apply_forces_entities]))(self); /* apply_forces_entities on <self:World>*/
}
var_i = 0l;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__world__World__entities]))(self); /* entities on <self:World>*/
}
{
var1 = ((long(*)(val* self))(var->class->vft[COLOR_core__abstract_collection__Collection__length]))(var); /* length on <var:Array[Entity]>*/
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
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var19 = var_i + 1l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_j = var13;
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__world__World__entities]))(self); /* entities on <self:World>*/
}
{
var21 = ((long(*)(val* self))(var20->class->vft[COLOR_core__abstract_collection__Collection__length]))(var20); /* length on <var20:Array[Entity]>*/
}
{
{ /* Inline kernel#Int#- (var21,1l) on <var21:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var21 - 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_29 = var22;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_j,var_29) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_29:Int> isa OTHER */
/* <var_29:Int> isa OTHER */
var32 = 1; /* easy <var_29:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var36 = var_j <= var_29;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
} else {
goto BREAK_label37;
}
{
var38 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__world__World__entities]))(self); /* entities on <self:World>*/
}
{
var39 = ((val*(*)(val* self, long p0))(var38->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var38, var_j); /* [] on <var38:Array[Entity]>*/
}
{
var40 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__world__World__entities]))(self); /* entities on <self:World>*/
}
{
var41 = ((val*(*)(val* self, long p0))(var40->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var40, var_i); /* [] on <var40:Array[Entity]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_physique__world__World__check_collision]))(self, var39, var41); /* check_collision on <self:World>*/
}
var42 = core___core__Int___Discrete__successor(var_j, 1l);
var_j = var42;
}
BREAK_label37: (void)0;
var43 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var43;
}
BREAK_label: (void)0;
{
var44 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__world__World__entities]))(self); /* entities on <self:World>*/
}
var_45 = var44;
{
var46 = ((val*(*)(val* self))(var_45->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_45); /* iterator on <var_45:Array[Entity]>*/
}
var_47 = var46;
for(;;) {
{
var48 = ((short int(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_47); /* is_ok on <var_47:IndexedIterator[Entity]>*/
}
if (var48){
} else {
goto BREAK_label49;
}
{
var50 = ((val*(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_47); /* item on <var_47:IndexedIterator[Entity]>*/
}
var_e = var50;
{
((void(*)(val* self, double p0))(var_e->class->vft[COLOR_physique__nitSimulation__Entity__update]))(var_e, var_dt); /* update on <var_e:Entity>*/
}
{
((void(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_47); /* next on <var_47:IndexedIterator[Entity]>*/
}
}
BREAK_label49: (void)0;
{
((void(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_47); /* finish on <var_47:IndexedIterator[Entity]>*/
}
RET_LABEL:;
}
/* method world#World#check_collision for (self: World, Entity, Entity) */
void physique___physique__World___check_collision(val* self, val* p0, val* p1) {
val* var_e1 /* var e1: Entity */;
val* var_e2 /* var e2: Entity */;
val* var /* : Collision */;
val* var_collision /* var collision: Collision */;
var_e1 = p0;
var_e2 = p1;
var = NEW_physique__Collision(&type_physique__Collision);
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Collision>*/
}
var_collision = var;
{
((void(*)(val* self, val* p0, val* p1))(var_collision->class->vft[COLOR_physique__nitPhysics__Collision__check_collision]))(var_collision, var_e1, var_e2); /* check_collision on <var_collision:Collision>*/
}
RET_LABEL:;
}
/* method world#World#apply_forces_entities for (self: World) */
void physique___physique__World___apply_forces_entities(val* self) {
val* var /* : Array[Entity] */;
val* var_ /* var : Array[Entity] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : IndexedIterator[Entity] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_e /* var e: Entity */;
val* var5 /* : Array[Force] */;
val* var_6 /* var : Array[Force] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : IndexedIterator[Force] */;
short int var9 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_f /* var f: Force */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__world__World__entities]))(self); /* entities on <self:World>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Entity]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:IndexedIterator[Entity]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:IndexedIterator[Entity]>*/
}
var_e = var4;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__world__World__forces_applied]))(self); /* forces_applied on <self:World>*/
}
var_6 = var5;
{
var7 = ((val*(*)(val* self))(var_6->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_6); /* iterator on <var_6:Array[Force]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:IndexedIterator[Force]>*/
}
if (var9){
} else {
goto BREAK_label10;
}
{
var11 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:IndexedIterator[Force]>*/
}
var_f = var11;
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_physique__nitPhysics__Force__apply_force]))(var_f, var_e); /* apply_force on <var_f:Force>*/
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:IndexedIterator[Force]>*/
}
}
BREAK_label10: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:IndexedIterator[Force]>*/
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:IndexedIterator[Entity]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:IndexedIterator[Entity]>*/
}
RET_LABEL:;
}
/* method world#World#apply_event for (self: World, Float, Player) */
void physique___physique__World___apply_event(val* self, double p0, val* p1) {
double var_control /* var control: Float */;
val* var_player /* var player: Player */;
long var_i /* var i: Int */;
val* var /* : Array[Entity] */;
long var1 /* : Int */;
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
long var_j /* var j: Int */;
val* var20 /* : Array[Entity] */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
long var_29 /* var : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var38 /* : Array[Entity] */;
val* var39 /* : nullable Object */;
short int var40 /* : Bool */;
val* var41 /* : Array[Entity] */;
val* var42 /* : nullable Object */;
val* var43 /* : Vector_2d */;
val* var_44 /* var : Vector_2d */;
double var45 /* : Float */;
double var46 /* : Float */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
double var52 /* : Float */;
long var53 /* : Int */;
long var54 /* : Int */;
var_control = p0;
var_player = p1;
var_i = 0l;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_physique__world__World__entities]))(self); /* entities on <self:World>*/
}
{
var1 = ((long(*)(val* self))(var->class->vft[COLOR_core__abstract_collection__Collection__length]))(var); /* length on <var:Array[Entity]>*/
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
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var19 = var_i + 1l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_j = var13;
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__world__World__entities]))(self); /* entities on <self:World>*/
}
{
var21 = ((long(*)(val* self))(var20->class->vft[COLOR_core__abstract_collection__Collection__length]))(var20); /* length on <var20:Array[Entity]>*/
}
{
{ /* Inline kernel#Int#- (var21,1l) on <var21:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var21 - 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_29 = var22;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_j,var_29) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_29:Int> isa OTHER */
/* <var_29:Int> isa OTHER */
var32 = 1; /* easy <var_29:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 721);
fatal_exit(1);
}
var36 = var_j <= var_29;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
} else {
goto BREAK_label37;
}
{
var38 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__world__World__entities]))(self); /* entities on <self:World>*/
}
{
var39 = ((val*(*)(val* self, long p0))(var38->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var38, var_j); /* [] on <var38:Array[Entity]>*/
}
{
var40 = ((short int(*)(val* self, val* p0))(var39->class->vft[COLOR_core__kernel__Object___61d_61d]))(var39, var_player); /* == on <var39:nullable Object(Entity)>*/
}
if (var40){
{
var41 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__world__World__entities]))(self); /* entities on <self:World>*/
}
{
var42 = ((val*(*)(val* self, long p0))(var41->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var41, var_j); /* [] on <var41:Array[Entity]>*/
}
{
var43 = ((val*(*)(val* self))(var42->class->vft[COLOR_physique__nitSimulation__Entity__vector]))(var42); /* vector on <var42:nullable Object(Entity)>*/
}
var_44 = var43;
{
var45 = ((double(*)(val* self))(var_44->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x]))(var_44); /* v_x on <var_44:Vector_2d>*/
}
{
{ /* Inline kernel#Float#+ (var45,var_control) on <var45:Float> */
/* Covariant cast for argument 0 (i) <var_control:Float> isa OTHER */
/* <var_control:Float> isa OTHER */
var48 = 1; /* easy <var_control:Float> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var52 = var45 + var_control;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
((void(*)(val* self, double p0))(var_44->class->vft[COLOR_physique__nitConstraints__Vector_95d2d__v_x_61d]))(var_44, var46); /* v_x= on <var_44:Vector_2d>*/
}
} else {
}
var53 = core___core__Int___Discrete__successor(var_j, 1l);
var_j = var53;
}
BREAK_label37: (void)0;
var54 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var54;
}
BREAK_label: (void)0;
RET_LABEL:;
}
