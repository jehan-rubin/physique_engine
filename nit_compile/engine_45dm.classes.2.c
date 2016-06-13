#include "engine_45dm.classes.0.h"
/* runtime class gamnit__GamnitSubtexture: gamnit::GamnitSubtexture (dead=false; need_corpse=false)*/
const struct class class_gamnit__GamnitSubtexture = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___core__kernel__Object__init, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to textures:GamnitSubtexture:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to textures:GamnitSubtexture:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to textures:GamnitSubtexture:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to textures:GamnitSubtexture:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to textures:GamnitSubtexture:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to textures:GamnitSubtexture:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to textures:GamnitSubtexture:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to textures:GamnitSubtexture:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to textures:GamnitSubtexture:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to textures:GamnitSubtexture:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to textures:GamnitSubtexture:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to textures:GamnitSubtexture:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___Texture__load, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#load */
(nitmethod_t)gamnit___gamnit__Texture___error, /* pointer to textures:GamnitSubtexture:textures#Texture#error */
(nitmethod_t)gamnit___gamnit__Texture___width, /* pointer to textures:GamnitSubtexture:textures#Texture#width */
(nitmethod_t)gamnit___gamnit__Texture___height, /* pointer to textures:GamnitSubtexture:textures#Texture#height */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___Texture__offset_left, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#offset_left */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___Texture__offset_bottom, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#offset_bottom */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___Texture__offset_right, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#offset_right */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___Texture__offset_top, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#offset_top */
(nitmethod_t)gamnit___gamnit__Texture___new, /* pointer to textures:GamnitSubtexture:textures#Texture#new */
(nitmethod_t)gamnit___gamnit__Texture___subtexture, /* pointer to textures:GamnitSubtexture:textures#Texture#subtexture */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___Texture__root, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#root */
(nitmethod_t)gamnit___gamnit__Texture___width_61d, /* pointer to textures:GamnitSubtexture:textures#Texture#width= */
(nitmethod_t)gamnit___gamnit__Texture___height_61d, /* pointer to textures:GamnitSubtexture:textures#Texture#height= */
(nitmethod_t)gamnit___gamnit__Texture___error_61d, /* pointer to textures:GamnitSubtexture:textures#Texture#error= */
(nitmethod_t)gamnit___gamnit__Texture___gl_texture, /* pointer to textures:GamnitSubtexture:textures#Texture#gl_texture */
(nitmethod_t)gamnit__flat___Texture___texture_coords_invert_x, /* pointer to textures:GamnitSubtexture:flat#Texture#texture_coords_invert_x */
(nitmethod_t)gamnit__flat___Texture___texture_coords, /* pointer to textures:GamnitSubtexture:flat#Texture#texture_coords */
(nitmethod_t)gamnit__flat___Texture___vertices, /* pointer to textures:GamnitSubtexture:flat#Texture#vertices */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___parent, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#parent */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___left, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#left */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___top, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#top */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___root_61d, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#root= */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___parent_61d, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#parent= */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___left_61d, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#left= */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___top_61d, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#top= */
(nitmethod_t)gamnit___gamnit__GamnitSubtexture___set_wh, /* pointer to textures:GamnitSubtexture:textures#GamnitSubtexture#set_wh */
(nitmethod_t)core___core__Object___init, /* pointer to textures:GamnitSubtexture:kernel#Object#init */
}
};
/* allocate GamnitSubtexture */
val* NEW_gamnit__GamnitSubtexture(const struct type* type) {
val* self /* : GamnitSubtexture */;
self = nit_alloc(sizeof(struct instance) + 21*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__GamnitSubtexture;
self->attrs[COLOR_gamnit__textures__Texture___width].d = 0.0; /* _width on <self:GamnitSubtexture exact> */
self->attrs[COLOR_gamnit__textures__Texture___height].d = 0.0; /* _height on <self:GamnitSubtexture exact> */
return self;
}
/* runtime class gamnit__TextureSet: gamnit::TextureSet (dead=false; need_corpse=false)*/
const struct class class_gamnit__TextureSet = {
0, /* box_kind */
{
(nitmethod_t)core___core__HashSet___core__kernel__Object__init, /* pointer to textures:TextureSet:hash_collection#HashSet#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to textures:TextureSet:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to textures:TextureSet:kernel#Object#sys */
(nitmethod_t)core___core__Set___core__kernel__Object___61d_61d, /* pointer to textures:TextureSet:abstract_collection#Set#== */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to textures:TextureSet:abstract_text#Collection#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to textures:TextureSet:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to textures:TextureSet:kernel#Object#is_same_type */
(nitmethod_t)core___core__Set___core__kernel__Object__hash, /* pointer to textures:TextureSet:abstract_collection#Set#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to textures:TextureSet:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to textures:TextureSet:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to textures:TextureSet:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to textures:TextureSet:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to textures:TextureSet:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___init, /* pointer to textures:TextureSet:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to textures:TextureSet:abstract_text#Collection#join */
(nitmethod_t)core___core__HashSet___core__abstract_collection__Collection__length, /* pointer to textures:TextureSet:hash_collection#HashSet#length */
(nitmethod_t)core___core__Collection___has_all, /* pointer to textures:TextureSet:abstract_collection#Collection#has_all */
(nitmethod_t)core___core__HashSet___core__abstract_collection__Collection__is_empty, /* pointer to textures:TextureSet:hash_collection#HashSet#is_empty */
(nitmethod_t)core___core__HashSet___core__abstract_collection__Collection__iterator, /* pointer to textures:TextureSet:hash_collection#HashSet#iterator */
(nitmethod_t)core___core__HashSet___core__abstract_collection__Collection__has, /* pointer to textures:TextureSet:hash_collection#HashSet#has */
(nitmethod_t)core___core__HashSet___core__abstract_collection__Collection__first, /* pointer to textures:TextureSet:hash_collection#HashSet#first */
(nitmethod_t)core__array___Collection___to_a, /* pointer to textures:TextureSet:array#Collection#to_a */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___node_at, /* pointer to textures:TextureSet:hash_collection#HashCollection#node_at */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___node_at_idx, /* pointer to textures:TextureSet:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___index_at, /* pointer to textures:TextureSet:hash_collection#HashCollection#index_at */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___enlarge, /* pointer to textures:TextureSet:hash_collection#HashCollection#enlarge */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___store, /* pointer to textures:TextureSet:hash_collection#HashCollection#store */
(nitmethod_t)core___core__HashSet___core__abstract_collection__SimpleCollection__add, /* pointer to textures:TextureSet:hash_collection#HashSet#add */
(nitmethod_t)core___core__SimpleCollection___add_all, /* pointer to textures:TextureSet:abstract_collection#SimpleCollection#add_all */
}
};
/* allocate TextureSet */
val* NEW_gamnit__TextureSet(const struct type* type) {
val* self /* : TextureSet */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__TextureSet;
self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:TextureSet exact> */
self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:TextureSet exact> */
return self;
}
/* runtime class gamnit__ShaderVariable: gamnit::ShaderVariable (dead=true; need_corpse=false)*/
/* allocate ShaderVariable */
val* NEW_gamnit__ShaderVariable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ShaderVariable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class gamnit__InactiveVariable: gamnit::InactiveVariable (dead=true; need_corpse=false)*/
/* allocate InactiveVariable */
val* NEW_gamnit__InactiveVariable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "InactiveVariable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class gamnit__Attribute: gamnit::Attribute (dead=false; need_corpse=false)*/
const struct class class_gamnit__Attribute = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:Attribute:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:Attribute:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:Attribute:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:Attribute:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:Attribute:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:Attribute:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:Attribute:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:Attribute:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:Attribute:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:Attribute:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:Attribute:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:Attribute:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:Attribute:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:Attribute:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:Attribute:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:Attribute:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:Attribute:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:Attribute:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:Attribute:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:Attribute:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__ShaderVariable___is_active, /* pointer to programs:Attribute:programs#ShaderVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:Attribute:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:Attribute:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Attribute___array_enabled_61d, /* pointer to programs:Attribute:programs#Attribute#array_enabled= */
(nitmethod_t)gamnit___gamnit__Attribute___array_enabled_cache_61d, /* pointer to programs:Attribute:programs#Attribute#array_enabled_cache= */
(nitmethod_t)gamnit___gamnit__Attribute___array, /* pointer to programs:Attribute:programs#Attribute#array */
(nitmethod_t)gamnit___gamnit__Attribute___native_float_array, /* pointer to programs:Attribute:programs#Attribute#native_float_array */
(nitmethod_t)gamnit___gamnit__Attribute___native_float_array_61d, /* pointer to programs:Attribute:programs#Attribute#native_float_array= */
}
};
/* allocate Attribute */
val* NEW_gamnit__Attribute(const struct type* type) {
val* self /* : Attribute */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__Attribute;
self->attrs[COLOR_gamnit__programs__Attribute___array_enabled_cache].s = 0; /* _array_enabled_cache on <self:Attribute exact> */
return self;
}
/* runtime class gamnit__AttributeFloat: gamnit::AttributeFloat (dead=false; need_corpse=false)*/
const struct class class_gamnit__AttributeFloat = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:AttributeFloat:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:AttributeFloat:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:AttributeFloat:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:AttributeFloat:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:AttributeFloat:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:AttributeFloat:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:AttributeFloat:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:AttributeFloat:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:AttributeFloat:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:AttributeFloat:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:AttributeFloat:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:AttributeFloat:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:AttributeFloat:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:AttributeFloat:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:AttributeFloat:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:AttributeFloat:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:AttributeFloat:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:AttributeFloat:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:AttributeFloat:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:AttributeFloat:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__ShaderVariable___is_active, /* pointer to programs:AttributeFloat:programs#ShaderVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:AttributeFloat:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:AttributeFloat:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Attribute___array_enabled_61d, /* pointer to programs:AttributeFloat:programs#Attribute#array_enabled= */
(nitmethod_t)gamnit___gamnit__Attribute___array_enabled_cache_61d, /* pointer to programs:AttributeFloat:programs#Attribute#array_enabled_cache= */
(nitmethod_t)gamnit___gamnit__Attribute___array, /* pointer to programs:AttributeFloat:programs#Attribute#array */
(nitmethod_t)gamnit___gamnit__Attribute___native_float_array, /* pointer to programs:AttributeFloat:programs#Attribute#native_float_array */
(nitmethod_t)gamnit___gamnit__Attribute___native_float_array_61d, /* pointer to programs:AttributeFloat:programs#Attribute#native_float_array= */
(nitmethod_t)gamnit___gamnit__AttributeFloat___uniform, /* pointer to programs:AttributeFloat:programs#AttributeFloat#uniform */
}
};
/* allocate AttributeFloat */
val* NEW_gamnit__AttributeFloat(const struct type* type) {
val* self /* : AttributeFloat */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__AttributeFloat;
self->attrs[COLOR_gamnit__programs__Attribute___array_enabled_cache].s = 0; /* _array_enabled_cache on <self:AttributeFloat exact> */
return self;
}
/* runtime class gamnit__AttributeVec2: gamnit::AttributeVec2 (dead=false; need_corpse=false)*/
const struct class class_gamnit__AttributeVec2 = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:AttributeVec2:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:AttributeVec2:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:AttributeVec2:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:AttributeVec2:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:AttributeVec2:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:AttributeVec2:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:AttributeVec2:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:AttributeVec2:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:AttributeVec2:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:AttributeVec2:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:AttributeVec2:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:AttributeVec2:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:AttributeVec2:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:AttributeVec2:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:AttributeVec2:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:AttributeVec2:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:AttributeVec2:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:AttributeVec2:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:AttributeVec2:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:AttributeVec2:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__ShaderVariable___is_active, /* pointer to programs:AttributeVec2:programs#ShaderVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:AttributeVec2:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:AttributeVec2:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Attribute___array_enabled_61d, /* pointer to programs:AttributeVec2:programs#Attribute#array_enabled= */
(nitmethod_t)gamnit___gamnit__Attribute___array_enabled_cache_61d, /* pointer to programs:AttributeVec2:programs#Attribute#array_enabled_cache= */
(nitmethod_t)gamnit___gamnit__Attribute___array, /* pointer to programs:AttributeVec2:programs#Attribute#array */
(nitmethod_t)gamnit___gamnit__Attribute___native_float_array, /* pointer to programs:AttributeVec2:programs#Attribute#native_float_array */
(nitmethod_t)gamnit___gamnit__Attribute___native_float_array_61d, /* pointer to programs:AttributeVec2:programs#Attribute#native_float_array= */
}
};
/* allocate AttributeVec2 */
val* NEW_gamnit__AttributeVec2(const struct type* type) {
val* self /* : AttributeVec2 */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__AttributeVec2;
self->attrs[COLOR_gamnit__programs__Attribute___array_enabled_cache].s = 0; /* _array_enabled_cache on <self:AttributeVec2 exact> */
return self;
}
/* runtime class gamnit__AttributeVec3: gamnit::AttributeVec3 (dead=false; need_corpse=false)*/
const struct class class_gamnit__AttributeVec3 = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:AttributeVec3:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:AttributeVec3:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:AttributeVec3:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:AttributeVec3:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:AttributeVec3:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:AttributeVec3:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:AttributeVec3:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:AttributeVec3:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:AttributeVec3:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:AttributeVec3:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:AttributeVec3:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:AttributeVec3:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:AttributeVec3:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:AttributeVec3:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:AttributeVec3:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:AttributeVec3:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:AttributeVec3:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:AttributeVec3:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:AttributeVec3:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:AttributeVec3:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__ShaderVariable___is_active, /* pointer to programs:AttributeVec3:programs#ShaderVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:AttributeVec3:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:AttributeVec3:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Attribute___array_enabled_61d, /* pointer to programs:AttributeVec3:programs#Attribute#array_enabled= */
(nitmethod_t)gamnit___gamnit__Attribute___array_enabled_cache_61d, /* pointer to programs:AttributeVec3:programs#Attribute#array_enabled_cache= */
(nitmethod_t)gamnit___gamnit__Attribute___array, /* pointer to programs:AttributeVec3:programs#Attribute#array */
(nitmethod_t)gamnit___gamnit__Attribute___native_float_array, /* pointer to programs:AttributeVec3:programs#Attribute#native_float_array */
(nitmethod_t)gamnit___gamnit__Attribute___native_float_array_61d, /* pointer to programs:AttributeVec3:programs#Attribute#native_float_array= */
}
};
/* allocate AttributeVec3 */
val* NEW_gamnit__AttributeVec3(const struct type* type) {
val* self /* : AttributeVec3 */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__AttributeVec3;
self->attrs[COLOR_gamnit__programs__Attribute___array_enabled_cache].s = 0; /* _array_enabled_cache on <self:AttributeVec3 exact> */
return self;
}
/* runtime class gamnit__AttributeVec4: gamnit::AttributeVec4 (dead=false; need_corpse=false)*/
const struct class class_gamnit__AttributeVec4 = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:AttributeVec4:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:AttributeVec4:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:AttributeVec4:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:AttributeVec4:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:AttributeVec4:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:AttributeVec4:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:AttributeVec4:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:AttributeVec4:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:AttributeVec4:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:AttributeVec4:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:AttributeVec4:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:AttributeVec4:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:AttributeVec4:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:AttributeVec4:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:AttributeVec4:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:AttributeVec4:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:AttributeVec4:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:AttributeVec4:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:AttributeVec4:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:AttributeVec4:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__ShaderVariable___is_active, /* pointer to programs:AttributeVec4:programs#ShaderVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:AttributeVec4:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:AttributeVec4:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Attribute___array_enabled_61d, /* pointer to programs:AttributeVec4:programs#Attribute#array_enabled= */
(nitmethod_t)gamnit___gamnit__Attribute___array_enabled_cache_61d, /* pointer to programs:AttributeVec4:programs#Attribute#array_enabled_cache= */
(nitmethod_t)gamnit___gamnit__Attribute___array, /* pointer to programs:AttributeVec4:programs#Attribute#array */
(nitmethod_t)gamnit___gamnit__Attribute___native_float_array, /* pointer to programs:AttributeVec4:programs#Attribute#native_float_array */
(nitmethod_t)gamnit___gamnit__Attribute___native_float_array_61d, /* pointer to programs:AttributeVec4:programs#Attribute#native_float_array= */
NULL, /* empty */
(nitmethod_t)gamnit___gamnit__AttributeVec4___uniform, /* pointer to programs:AttributeVec4:programs#AttributeVec4#uniform */
}
};
/* allocate AttributeVec4 */
val* NEW_gamnit__AttributeVec4(const struct type* type) {
val* self /* : AttributeVec4 */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__AttributeVec4;
self->attrs[COLOR_gamnit__programs__Attribute___array_enabled_cache].s = 0; /* _array_enabled_cache on <self:AttributeVec4 exact> */
return self;
}
/* runtime class gamnit__InactiveAttribute: gamnit::InactiveAttribute (dead=false; need_corpse=false)*/
const struct class class_gamnit__InactiveAttribute = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:InactiveAttribute:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:InactiveAttribute:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:InactiveAttribute:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:InactiveAttribute:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:InactiveAttribute:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:InactiveAttribute:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:InactiveAttribute:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:InactiveAttribute:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:InactiveAttribute:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:InactiveAttribute:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:InactiveAttribute:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:InactiveAttribute:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:InactiveAttribute:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:InactiveAttribute:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:InactiveAttribute:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:InactiveAttribute:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:InactiveAttribute:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:InactiveAttribute:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:InactiveAttribute:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:InactiveAttribute:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__InactiveVariable___ShaderVariable__is_active, /* pointer to programs:InactiveAttribute:programs#InactiveVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:InactiveAttribute:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:InactiveAttribute:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Attribute___array_enabled_61d, /* pointer to programs:InactiveAttribute:programs#Attribute#array_enabled= */
(nitmethod_t)gamnit___gamnit__Attribute___array_enabled_cache_61d, /* pointer to programs:InactiveAttribute:programs#Attribute#array_enabled_cache= */
(nitmethod_t)gamnit___gamnit__Attribute___array, /* pointer to programs:InactiveAttribute:programs#Attribute#array */
(nitmethod_t)gamnit___gamnit__Attribute___native_float_array, /* pointer to programs:InactiveAttribute:programs#Attribute#native_float_array */
(nitmethod_t)gamnit___gamnit__Attribute___native_float_array_61d, /* pointer to programs:InactiveAttribute:programs#Attribute#native_float_array= */
(nitmethod_t)gamnit___gamnit__AttributeFloat___uniform, /* pointer to programs:InactiveAttribute:programs#AttributeFloat#uniform */
(nitmethod_t)gamnit___gamnit__AttributeVec4___uniform, /* pointer to programs:InactiveAttribute:programs#AttributeVec4#uniform */
}
};
/* allocate InactiveAttribute */
val* NEW_gamnit__InactiveAttribute(const struct type* type) {
val* self /* : InactiveAttribute */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__InactiveAttribute;
self->attrs[COLOR_gamnit__programs__Attribute___array_enabled_cache].s = 0; /* _array_enabled_cache on <self:InactiveAttribute exact> */
return self;
}
/* runtime class gamnit__Uniform: gamnit::Uniform (dead=false; need_corpse=false)*/
const struct class class_gamnit__Uniform = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:Uniform:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:Uniform:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:Uniform:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:Uniform:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:Uniform:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:Uniform:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:Uniform:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:Uniform:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:Uniform:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:Uniform:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:Uniform:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:Uniform:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:Uniform:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:Uniform:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:Uniform:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:Uniform:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:Uniform:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:Uniform:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:Uniform:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:Uniform:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__ShaderVariable___is_active, /* pointer to programs:Uniform:programs#ShaderVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:Uniform:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:Uniform:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Uniform___uniform_95d1i, /* pointer to programs:Uniform:programs#Uniform#uniform_1i */
}
};
/* allocate Uniform */
val* NEW_gamnit__Uniform(const struct type* type) {
val* self /* : Uniform */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__Uniform;
return self;
}
/* runtime class gamnit__UniformBool: gamnit::UniformBool (dead=false; need_corpse=false)*/
const struct class class_gamnit__UniformBool = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:UniformBool:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:UniformBool:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:UniformBool:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:UniformBool:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:UniformBool:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:UniformBool:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:UniformBool:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:UniformBool:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:UniformBool:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:UniformBool:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:UniformBool:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:UniformBool:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:UniformBool:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:UniformBool:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:UniformBool:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:UniformBool:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:UniformBool:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:UniformBool:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:UniformBool:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:UniformBool:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__ShaderVariable___is_active, /* pointer to programs:UniformBool:programs#ShaderVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:UniformBool:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:UniformBool:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Uniform___uniform_95d1i, /* pointer to programs:UniformBool:programs#Uniform#uniform_1i */
(nitmethod_t)gamnit___gamnit__UniformBool___uniform, /* pointer to programs:UniformBool:programs#UniformBool#uniform */
}
};
/* allocate UniformBool */
val* NEW_gamnit__UniformBool(const struct type* type) {
val* self /* : UniformBool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__UniformBool;
return self;
}
/* runtime class gamnit__UniformFloat: gamnit::UniformFloat (dead=false; need_corpse=false)*/
const struct class class_gamnit__UniformFloat = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:UniformFloat:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:UniformFloat:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:UniformFloat:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:UniformFloat:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:UniformFloat:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:UniformFloat:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:UniformFloat:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:UniformFloat:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:UniformFloat:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:UniformFloat:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:UniformFloat:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:UniformFloat:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:UniformFloat:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:UniformFloat:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:UniformFloat:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:UniformFloat:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:UniformFloat:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:UniformFloat:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:UniformFloat:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:UniformFloat:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__ShaderVariable___is_active, /* pointer to programs:UniformFloat:programs#ShaderVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:UniformFloat:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:UniformFloat:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Uniform___uniform_95d1i, /* pointer to programs:UniformFloat:programs#Uniform#uniform_1i */
}
};
/* allocate UniformFloat */
val* NEW_gamnit__UniformFloat(const struct type* type) {
val* self /* : UniformFloat */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__UniformFloat;
return self;
}
/* runtime class gamnit__UniformVec2: gamnit::UniformVec2 (dead=false; need_corpse=false)*/
const struct class class_gamnit__UniformVec2 = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:UniformVec2:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:UniformVec2:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:UniformVec2:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:UniformVec2:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:UniformVec2:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:UniformVec2:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:UniformVec2:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:UniformVec2:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:UniformVec2:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:UniformVec2:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:UniformVec2:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:UniformVec2:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:UniformVec2:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:UniformVec2:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:UniformVec2:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:UniformVec2:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:UniformVec2:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:UniformVec2:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:UniformVec2:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:UniformVec2:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__ShaderVariable___is_active, /* pointer to programs:UniformVec2:programs#ShaderVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:UniformVec2:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:UniformVec2:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Uniform___uniform_95d1i, /* pointer to programs:UniformVec2:programs#Uniform#uniform_1i */
}
};
/* allocate UniformVec2 */
val* NEW_gamnit__UniformVec2(const struct type* type) {
val* self /* : UniformVec2 */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__UniformVec2;
return self;
}
/* runtime class gamnit__UniformVec3: gamnit::UniformVec3 (dead=false; need_corpse=false)*/
const struct class class_gamnit__UniformVec3 = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:UniformVec3:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:UniformVec3:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:UniformVec3:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:UniformVec3:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:UniformVec3:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:UniformVec3:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:UniformVec3:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:UniformVec3:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:UniformVec3:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:UniformVec3:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:UniformVec3:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:UniformVec3:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:UniformVec3:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:UniformVec3:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:UniformVec3:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:UniformVec3:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:UniformVec3:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:UniformVec3:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:UniformVec3:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:UniformVec3:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__ShaderVariable___is_active, /* pointer to programs:UniformVec3:programs#ShaderVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:UniformVec3:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:UniformVec3:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Uniform___uniform_95d1i, /* pointer to programs:UniformVec3:programs#Uniform#uniform_1i */
}
};
/* allocate UniformVec3 */
val* NEW_gamnit__UniformVec3(const struct type* type) {
val* self /* : UniformVec3 */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__UniformVec3;
return self;
}
/* runtime class gamnit__UniformVec4: gamnit::UniformVec4 (dead=false; need_corpse=false)*/
const struct class class_gamnit__UniformVec4 = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:UniformVec4:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:UniformVec4:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:UniformVec4:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:UniformVec4:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:UniformVec4:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:UniformVec4:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:UniformVec4:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:UniformVec4:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:UniformVec4:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:UniformVec4:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:UniformVec4:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:UniformVec4:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:UniformVec4:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:UniformVec4:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:UniformVec4:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:UniformVec4:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:UniformVec4:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:UniformVec4:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:UniformVec4:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:UniformVec4:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__ShaderVariable___is_active, /* pointer to programs:UniformVec4:programs#ShaderVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:UniformVec4:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:UniformVec4:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Uniform___uniform_95d1i, /* pointer to programs:UniformVec4:programs#Uniform#uniform_1i */
}
};
/* allocate UniformVec4 */
val* NEW_gamnit__UniformVec4(const struct type* type) {
val* self /* : UniformVec4 */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__UniformVec4;
return self;
}
/* runtime class gamnit__UniformSampler2D: gamnit::UniformSampler2D (dead=false; need_corpse=false)*/
const struct class class_gamnit__UniformSampler2D = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:UniformSampler2D:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:UniformSampler2D:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:UniformSampler2D:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:UniformSampler2D:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:UniformSampler2D:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:UniformSampler2D:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:UniformSampler2D:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:UniformSampler2D:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:UniformSampler2D:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:UniformSampler2D:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:UniformSampler2D:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:UniformSampler2D:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:UniformSampler2D:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:UniformSampler2D:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:UniformSampler2D:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:UniformSampler2D:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:UniformSampler2D:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:UniformSampler2D:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:UniformSampler2D:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:UniformSampler2D:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__ShaderVariable___is_active, /* pointer to programs:UniformSampler2D:programs#ShaderVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:UniformSampler2D:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:UniformSampler2D:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Uniform___uniform_95d1i, /* pointer to programs:UniformSampler2D:programs#Uniform#uniform_1i */
NULL, /* empty */
(nitmethod_t)gamnit___gamnit__UniformSampler2D___uniform, /* pointer to programs:UniformSampler2D:programs#UniformSampler2D#uniform */
}
};
/* allocate UniformSampler2D */
val* NEW_gamnit__UniformSampler2D(const struct type* type) {
val* self /* : UniformSampler2D */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__UniformSampler2D;
return self;
}
/* runtime class gamnit__UniformMat4: gamnit::UniformMat4 (dead=false; need_corpse=false)*/
const struct class class_gamnit__UniformMat4 = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:UniformMat4:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:UniformMat4:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:UniformMat4:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:UniformMat4:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:UniformMat4:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:UniformMat4:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:UniformMat4:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:UniformMat4:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:UniformMat4:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:UniformMat4:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:UniformMat4:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:UniformMat4:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:UniformMat4:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:UniformMat4:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:UniformMat4:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:UniformMat4:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:UniformMat4:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:UniformMat4:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:UniformMat4:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:UniformMat4:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__ShaderVariable___is_active, /* pointer to programs:UniformMat4:programs#ShaderVariable#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:UniformMat4:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:UniformMat4:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Uniform___uniform_95d1i, /* pointer to programs:UniformMat4:programs#Uniform#uniform_1i */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)gamnit___gamnit__UniformMat4___uniform, /* pointer to programs:UniformMat4:programs#UniformMat4#uniform */
(nitmethod_t)gamnit___gamnit__UniformMat4___native_matrix_cache, /* pointer to programs:UniformMat4:programs#UniformMat4#native_matrix_cache */
(nitmethod_t)gamnit___gamnit__UniformMat4___native_matrix_cache_61d, /* pointer to programs:UniformMat4:programs#UniformMat4#native_matrix_cache= */
(nitmethod_t)gamnit___gamnit__UniformMat4___uniform_matrix_95d4f, /* pointer to programs:UniformMat4:programs#UniformMat4#uniform_matrix_4f */
}
};
/* allocate UniformMat4 */
val* NEW_gamnit__UniformMat4(const struct type* type) {
val* self /* : UniformMat4 */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__UniformMat4;
return self;
}
/* runtime class gamnit__InactiveUniform: gamnit::InactiveUniform (dead=false; need_corpse=false)*/
const struct class class_gamnit__InactiveUniform = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__kernel__Object__init, /* pointer to programs:InactiveUniform:programs#ShaderVariable#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:InactiveUniform:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:InactiveUniform:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:InactiveUniform:kernel#Object#== */
(nitmethod_t)gamnit___gamnit__ShaderVariable___core__abstract_text__Object__to_s, /* pointer to programs:InactiveUniform:programs#ShaderVariable#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:InactiveUniform:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:InactiveUniform:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:InactiveUniform:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:InactiveUniform:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:InactiveUniform:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:InactiveUniform:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:InactiveUniform:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:InactiveUniform:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location_61d, /* pointer to programs:InactiveUniform:programs#ShaderVariable#location= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program_61d, /* pointer to programs:InactiveUniform:programs#ShaderVariable#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name_61d, /* pointer to programs:InactiveUniform:programs#ShaderVariable#name= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size_61d, /* pointer to programs:InactiveUniform:programs#ShaderVariable#size= */
(nitmethod_t)gamnit___gamnit__ShaderVariable___name, /* pointer to programs:InactiveUniform:programs#ShaderVariable#name */
(nitmethod_t)gamnit___gamnit__ShaderVariable___location, /* pointer to programs:InactiveUniform:programs#ShaderVariable#location */
(nitmethod_t)gamnit___gamnit__ShaderVariable___size, /* pointer to programs:InactiveUniform:programs#ShaderVariable#size */
(nitmethod_t)gamnit___gamnit__InactiveUniform___ShaderVariable__is_active, /* pointer to programs:InactiveUniform:programs#InactiveUniform#is_active */
(nitmethod_t)gamnit___gamnit__ShaderVariable___program, /* pointer to programs:InactiveUniform:programs#ShaderVariable#program */
(nitmethod_t)core___core__Object___init, /* pointer to programs:InactiveUniform:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__Uniform___uniform_95d1i, /* pointer to programs:InactiveUniform:programs#Uniform#uniform_1i */
(nitmethod_t)gamnit___gamnit__UniformBool___uniform, /* pointer to programs:InactiveUniform:programs#UniformBool#uniform */
(nitmethod_t)gamnit___gamnit__UniformSampler2D___uniform, /* pointer to programs:InactiveUniform:programs#UniformSampler2D#uniform */
(nitmethod_t)gamnit___gamnit__UniformMat4___uniform, /* pointer to programs:InactiveUniform:programs#UniformMat4#uniform */
(nitmethod_t)gamnit___gamnit__UniformMat4___native_matrix_cache, /* pointer to programs:InactiveUniform:programs#UniformMat4#native_matrix_cache */
(nitmethod_t)gamnit___gamnit__UniformMat4___native_matrix_cache_61d, /* pointer to programs:InactiveUniform:programs#UniformMat4#native_matrix_cache= */
(nitmethod_t)gamnit___gamnit__UniformMat4___uniform_matrix_95d4f, /* pointer to programs:InactiveUniform:programs#UniformMat4#uniform_matrix_4f */
}
};
/* allocate InactiveUniform */
val* NEW_gamnit__InactiveUniform(const struct type* type) {
val* self /* : InactiveUniform */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__InactiveUniform;
return self;
}
/* runtime class gamnit__Shader: gamnit::Shader (dead=true; need_corpse=false)*/
/* allocate Shader */
val* NEW_gamnit__Shader(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Shader is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class gamnit__VertexShader: gamnit::VertexShader (dead=false; need_corpse=false)*/
const struct class class_gamnit__VertexShader = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__Shader___core__kernel__Object__init, /* pointer to programs:VertexShader:programs#Shader#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:VertexShader:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:VertexShader:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:VertexShader:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to programs:VertexShader:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:VertexShader:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:VertexShader:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:VertexShader:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:VertexShader:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:VertexShader:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:VertexShader:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:VertexShader:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:VertexShader:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__Shader___source_61d, /* pointer to programs:VertexShader:programs#Shader#source= */
(nitmethod_t)gamnit___gamnit__Shader___compile, /* pointer to programs:VertexShader:programs#Shader#compile */
(nitmethod_t)gamnit___gamnit__Shader___error, /* pointer to programs:VertexShader:programs#Shader#error */
(nitmethod_t)gamnit___gamnit__Shader___gl_shader, /* pointer to programs:VertexShader:programs#Shader#gl_shader */
(nitmethod_t)gamnit___gamnit__VertexShader___Shader__gl_shader_type, /* pointer to programs:VertexShader:programs#VertexShader#gl_shader_type */
(nitmethod_t)gamnit___gamnit__Shader___error_61d, /* pointer to programs:VertexShader:programs#Shader#error= */
(nitmethod_t)gamnit___gamnit__Shader___gl_shader_61d, /* pointer to programs:VertexShader:programs#Shader#gl_shader= */
(nitmethod_t)gamnit___gamnit__Shader___source, /* pointer to programs:VertexShader:programs#Shader#source */
(nitmethod_t)core___core__Object___init, /* pointer to programs:VertexShader:kernel#Object#init */
}
};
/* allocate VertexShader */
val* NEW_gamnit__VertexShader(const struct type* type) {
val* self /* : VertexShader */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__VertexShader;
self->attrs[COLOR_gamnit__programs__Shader___deleted].s = 0; /* _deleted on <self:VertexShader exact> */
return self;
}
/* runtime class gamnit__FragmentShader: gamnit::FragmentShader (dead=false; need_corpse=false)*/
const struct class class_gamnit__FragmentShader = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__Shader___core__kernel__Object__init, /* pointer to programs:FragmentShader:programs#Shader#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:FragmentShader:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:FragmentShader:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to programs:FragmentShader:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to programs:FragmentShader:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:FragmentShader:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:FragmentShader:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to programs:FragmentShader:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:FragmentShader:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:FragmentShader:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:FragmentShader:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:FragmentShader:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:FragmentShader:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__Shader___source_61d, /* pointer to programs:FragmentShader:programs#Shader#source= */
(nitmethod_t)gamnit___gamnit__Shader___compile, /* pointer to programs:FragmentShader:programs#Shader#compile */
(nitmethod_t)gamnit___gamnit__Shader___error, /* pointer to programs:FragmentShader:programs#Shader#error */
(nitmethod_t)gamnit___gamnit__Shader___gl_shader, /* pointer to programs:FragmentShader:programs#Shader#gl_shader */
(nitmethod_t)gamnit___gamnit__FragmentShader___Shader__gl_shader_type, /* pointer to programs:FragmentShader:programs#FragmentShader#gl_shader_type */
(nitmethod_t)gamnit___gamnit__Shader___error_61d, /* pointer to programs:FragmentShader:programs#Shader#error= */
(nitmethod_t)gamnit___gamnit__Shader___gl_shader_61d, /* pointer to programs:FragmentShader:programs#Shader#gl_shader= */
(nitmethod_t)gamnit___gamnit__Shader___source, /* pointer to programs:FragmentShader:programs#Shader#source */
(nitmethod_t)core___core__Object___init, /* pointer to programs:FragmentShader:kernel#Object#init */
}
};
/* allocate FragmentShader */
val* NEW_gamnit__FragmentShader(const struct type* type) {
val* self /* : FragmentShader */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__FragmentShader;
self->attrs[COLOR_gamnit__programs__Shader___deleted].s = 0; /* _deleted on <self:FragmentShader exact> */
return self;
}
/* runtime class gamnit__GamnitProgram: gamnit::GamnitProgram (dead=true; need_corpse=false)*/
/* allocate GamnitProgram */
val* NEW_gamnit__GamnitProgram(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "GamnitProgram is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class gamnit__GamnitProgramFromSource: gamnit::GamnitProgramFromSource (dead=true; need_corpse=false)*/
/* allocate GamnitProgramFromSource */
val* NEW_gamnit__GamnitProgramFromSource(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "GamnitProgramFromSource is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class gamnit__ShaderVariableMap: gamnit::ShaderVariableMap (dead=true; need_corpse=false)*/
/* allocate ShaderVariableMap[ShaderVariable] */
val* NEW_gamnit__ShaderVariableMap(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ShaderVariableMap is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class gamnit__AttributeMap: gamnit::AttributeMap (dead=false; need_corpse=false)*/
const struct class class_gamnit__AttributeMap = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariableMap___core__kernel__Object__init, /* pointer to programs:AttributeMap:programs#ShaderVariableMap#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:AttributeMap:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:AttributeMap:kernel#Object#sys */
(nitmethod_t)core___core__MapRead___core__kernel__Object___61d_61d, /* pointer to programs:AttributeMap:abstract_collection#MapRead#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to programs:AttributeMap:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:AttributeMap:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:AttributeMap:kernel#Object#is_same_type */
(nitmethod_t)core___core__MapRead___core__kernel__Object__hash, /* pointer to programs:AttributeMap:abstract_collection#MapRead#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:AttributeMap:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:AttributeMap:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:AttributeMap:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:AttributeMap:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:AttributeMap:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__AttributeMap___core__abstract_collection__MapRead___91d_93d, /* pointer to programs:AttributeMap:programs#AttributeMap#[] */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__length, /* pointer to programs:AttributeMap:hash_collection#HashMap#length */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__iterator, /* pointer to programs:AttributeMap:hash_collection#HashMap#iterator */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__has_key, /* pointer to programs:AttributeMap:hash_collection#HashMap#has_key */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__is_empty, /* pointer to programs:AttributeMap:hash_collection#HashMap#is_empty */
(nitmethod_t)gamnit___gamnit__AttributeMap___core__abstract_collection__MapRead__provide_default_value, /* pointer to programs:AttributeMap:programs#AttributeMap#provide_default_value */
(nitmethod_t)core___core__HashMap___core__abstract_collection__Map___91d_93d_61d, /* pointer to programs:AttributeMap:hash_collection#HashMap#[]= */
(nitmethod_t)core___core__Object___init, /* pointer to programs:AttributeMap:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__ShaderVariableMap___program_61d, /* pointer to programs:AttributeMap:programs#ShaderVariableMap#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariableMap___program, /* pointer to programs:AttributeMap:programs#ShaderVariableMap#program */
(nitmethod_t)gamnit___gamnit__AttributeMap___ShaderVariableMap__max_name_length, /* pointer to programs:AttributeMap:programs#AttributeMap#max_name_length */
(nitmethod_t)core___core__HashMap___core__kernel__Object__init, /* pointer to programs:AttributeMap:hash_collection#HashMap#init */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___node_at, /* pointer to programs:AttributeMap:hash_collection#HashCollection#node_at */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___node_at_idx, /* pointer to programs:AttributeMap:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___index_at, /* pointer to programs:AttributeMap:hash_collection#HashCollection#index_at */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___enlarge, /* pointer to programs:AttributeMap:hash_collection#HashCollection#enlarge */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___store, /* pointer to programs:AttributeMap:hash_collection#HashCollection#store */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead___91d_93d, /* pointer to programs:AttributeMap:hash_collection#HashMap#[] */
(nitmethod_t)gamnit___gamnit__ShaderVariableMap___core__abstract_collection__MapRead___91d_93d, /* pointer to programs:AttributeMap:programs#ShaderVariableMap#[] */
}
};
/* allocate AttributeMap */
val* NEW_gamnit__AttributeMap(const struct type* type) {
val* self /* : AttributeMap */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__AttributeMap;
self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:AttributeMap exact> */
self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:AttributeMap exact> */
return self;
}
/* runtime class gamnit__UniformMap: gamnit::UniformMap (dead=false; need_corpse=false)*/
const struct class class_gamnit__UniformMap = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__ShaderVariableMap___core__kernel__Object__init, /* pointer to programs:UniformMap:programs#ShaderVariableMap#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to programs:UniformMap:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to programs:UniformMap:kernel#Object#sys */
(nitmethod_t)core___core__MapRead___core__kernel__Object___61d_61d, /* pointer to programs:UniformMap:abstract_collection#MapRead#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to programs:UniformMap:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to programs:UniformMap:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to programs:UniformMap:kernel#Object#is_same_type */
(nitmethod_t)core___core__MapRead___core__kernel__Object__hash, /* pointer to programs:UniformMap:abstract_collection#MapRead#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to programs:UniformMap:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to programs:UniformMap:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to programs:UniformMap:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to programs:UniformMap:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to programs:UniformMap:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__UniformMap___core__abstract_collection__MapRead___91d_93d, /* pointer to programs:UniformMap:programs#UniformMap#[] */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__length, /* pointer to programs:UniformMap:hash_collection#HashMap#length */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__iterator, /* pointer to programs:UniformMap:hash_collection#HashMap#iterator */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__has_key, /* pointer to programs:UniformMap:hash_collection#HashMap#has_key */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__is_empty, /* pointer to programs:UniformMap:hash_collection#HashMap#is_empty */
(nitmethod_t)gamnit___gamnit__UniformMap___core__abstract_collection__MapRead__provide_default_value, /* pointer to programs:UniformMap:programs#UniformMap#provide_default_value */
(nitmethod_t)core___core__HashMap___core__abstract_collection__Map___91d_93d_61d, /* pointer to programs:UniformMap:hash_collection#HashMap#[]= */
(nitmethod_t)core___core__Object___init, /* pointer to programs:UniformMap:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__ShaderVariableMap___program_61d, /* pointer to programs:UniformMap:programs#ShaderVariableMap#program= */
(nitmethod_t)gamnit___gamnit__ShaderVariableMap___program, /* pointer to programs:UniformMap:programs#ShaderVariableMap#program */
(nitmethod_t)gamnit___gamnit__UniformMap___ShaderVariableMap__max_name_length, /* pointer to programs:UniformMap:programs#UniformMap#max_name_length */
(nitmethod_t)core___core__HashMap___core__kernel__Object__init, /* pointer to programs:UniformMap:hash_collection#HashMap#init */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___node_at, /* pointer to programs:UniformMap:hash_collection#HashCollection#node_at */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___node_at_idx, /* pointer to programs:UniformMap:hash_collection#HashCollection#node_at_idx */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___index_at, /* pointer to programs:UniformMap:hash_collection#HashCollection#index_at */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___enlarge, /* pointer to programs:UniformMap:hash_collection#HashCollection#enlarge */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___store, /* pointer to programs:UniformMap:hash_collection#HashCollection#store */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead___91d_93d, /* pointer to programs:UniformMap:hash_collection#HashMap#[] */
(nitmethod_t)gamnit___gamnit__ShaderVariableMap___core__abstract_collection__MapRead___91d_93d, /* pointer to programs:UniformMap:programs#ShaderVariableMap#[] */
}
};
/* allocate UniformMap */
val* NEW_gamnit__UniformMap(const struct type* type) {
val* self /* : UniformMap */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__UniformMap;
self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:UniformMap exact> */
self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:UniformMap exact> */
return self;
}
/* runtime class gamnit__Camera: gamnit::Camera (dead=true; need_corpse=false)*/
/* allocate Camera */
val* NEW_gamnit__Camera(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Camera is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class gamnit__EulerCamera: gamnit::EulerCamera (dead=false; need_corpse=false)*/
const struct class class_gamnit__EulerCamera = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__Camera___core__kernel__Object__init, /* pointer to cameras:EulerCamera:cameras#Camera#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to cameras:EulerCamera:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to cameras:EulerCamera:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to cameras:EulerCamera:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to cameras:EulerCamera:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to cameras:EulerCamera:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to cameras:EulerCamera:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to cameras:EulerCamera:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to cameras:EulerCamera:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to cameras:EulerCamera:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to cameras:EulerCamera:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to cameras:EulerCamera:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to cameras:EulerCamera:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__Camera___display_61d, /* pointer to cameras:EulerCamera:cameras#Camera#display= */
(nitmethod_t)gamnit___gamnit__Camera___display, /* pointer to cameras:EulerCamera:cameras#Camera#display */
(nitmethod_t)gamnit___gamnit__Camera___position, /* pointer to cameras:EulerCamera:cameras#Camera#position */
(nitmethod_t)gamnit___gamnit__EulerCamera___Camera__mvp_matrix, /* pointer to cameras:EulerCamera:cameras#EulerCamera#mvp_matrix */
(nitmethod_t)core___core__Object___init, /* pointer to cameras:EulerCamera:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__EulerCamera___reset_height, /* pointer to cameras:EulerCamera:cameras#EulerCamera#reset_height */
(nitmethod_t)gamnit___gamnit__EulerCamera___near_61d, /* pointer to cameras:EulerCamera:cameras#EulerCamera#near= */
(nitmethod_t)gamnit___gamnit__EulerCamera___field_of_view_y, /* pointer to cameras:EulerCamera:cameras#EulerCamera#field_of_view_y */
(nitmethod_t)gamnit___gamnit__EulerCamera___pitch_61d, /* pointer to cameras:EulerCamera:cameras#EulerCamera#pitch= */
(nitmethod_t)gamnit___gamnit__EulerCamera___yaw_61d, /* pointer to cameras:EulerCamera:cameras#EulerCamera#yaw= */
(nitmethod_t)gamnit___gamnit__EulerCamera___roll_61d, /* pointer to cameras:EulerCamera:cameras#EulerCamera#roll= */
(nitmethod_t)gamnit___gamnit__EulerCamera___rotation_matrix, /* pointer to cameras:EulerCamera:cameras#EulerCamera#rotation_matrix */
(nitmethod_t)gamnit___gamnit__EulerCamera___near, /* pointer to cameras:EulerCamera:cameras#EulerCamera#near */
(nitmethod_t)gamnit___gamnit__EulerCamera___far, /* pointer to cameras:EulerCamera:cameras#EulerCamera#far */
(nitmethod_t)gamnit___gamnit__EulerCamera___yaw, /* pointer to cameras:EulerCamera:cameras#EulerCamera#yaw */
(nitmethod_t)gamnit___gamnit__EulerCamera___pitch, /* pointer to cameras:EulerCamera:cameras#EulerCamera#pitch */
(nitmethod_t)gamnit___gamnit__EulerCamera___roll, /* pointer to cameras:EulerCamera:cameras#EulerCamera#roll */
}
};
/* allocate EulerCamera */
val* NEW_gamnit__EulerCamera(const struct type* type) {
val* self /* : EulerCamera */;
val* var /* : Point3d[Float] */;
val* var1 /* : Numeric */;
val* var2 /* : Numeric */;
val* var3 /* : Numeric */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__EulerCamera;
var = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var1 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var, var1); /* x= on <var:Point3d[Float]>*/
}
{
var2 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var, var2); /* y= on <var:Point3d[Float]>*/
}
{
var3 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var, var3); /* z= on <var:Point3d[Float]>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Point3d[Float]>*/
}
self->attrs[COLOR_gamnit__cameras__Camera___position].val = var; /* _position on <self:EulerCamera exact> */
self->attrs[COLOR_gamnit__cameras__EulerCamera___pitch].d = 0.0; /* _pitch on <self:EulerCamera exact> */
self->attrs[COLOR_gamnit__cameras__EulerCamera___yaw].d = 0.0; /* _yaw on <self:EulerCamera exact> */
self->attrs[COLOR_gamnit__cameras__EulerCamera___roll].d = 0.0; /* _roll on <self:EulerCamera exact> */
self->attrs[COLOR_gamnit__cameras__EulerCamera___field_of_view_y].d = 0.8; /* _field_of_view_y on <self:EulerCamera exact> */
self->attrs[COLOR_gamnit__cameras__EulerCamera___near].d = 0.01; /* _near on <self:EulerCamera exact> */
self->attrs[COLOR_gamnit__cameras__EulerCamera___far].d = 10000.0; /* _far on <self:EulerCamera exact> */
self->attrs[COLOR_gamnit__cameras__EulerCamera___sensitivity].d = 0.005; /* _sensitivity on <self:EulerCamera exact> */
return self;
}
/* runtime class gamnit__UICamera: gamnit::UICamera (dead=false; need_corpse=false)*/
const struct class class_gamnit__UICamera = {
0, /* box_kind */
{
(nitmethod_t)gamnit___gamnit__Camera___core__kernel__Object__init, /* pointer to cameras:UICamera:cameras#Camera#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to cameras:UICamera:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to cameras:UICamera:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to cameras:UICamera:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to cameras:UICamera:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to cameras:UICamera:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to cameras:UICamera:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to cameras:UICamera:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to cameras:UICamera:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to cameras:UICamera:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to cameras:UICamera:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to cameras:UICamera:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to cameras:UICamera:abstract_text#Object#native_class_name */
(nitmethod_t)gamnit___gamnit__Camera___display_61d, /* pointer to cameras:UICamera:cameras#Camera#display= */
(nitmethod_t)gamnit___gamnit__Camera___display, /* pointer to cameras:UICamera:cameras#Camera#display */
(nitmethod_t)gamnit___gamnit__Camera___position, /* pointer to cameras:UICamera:cameras#Camera#position */
(nitmethod_t)gamnit___gamnit__UICamera___Camera__mvp_matrix, /* pointer to cameras:UICamera:cameras#UICamera#mvp_matrix */
(nitmethod_t)core___core__Object___init, /* pointer to cameras:UICamera:kernel#Object#init */
(nitmethod_t)gamnit___gamnit__UICamera___width, /* pointer to cameras:UICamera:cameras#UICamera#width */
(nitmethod_t)gamnit___gamnit__UICamera___height, /* pointer to cameras:UICamera:cameras#UICamera#height */
(nitmethod_t)gamnit___gamnit__UICamera___near, /* pointer to cameras:UICamera:cameras#UICamera#near */
(nitmethod_t)gamnit___gamnit__UICamera___far, /* pointer to cameras:UICamera:cameras#UICamera#far */
}
};
/* allocate UICamera */
val* NEW_gamnit__UICamera(const struct type* type) {
val* self /* : UICamera */;
val* var /* : Point3d[Float] */;
val* var1 /* : Numeric */;
val* var2 /* : Numeric */;
val* var3 /* : Numeric */;
double var4 /* : Float */;
double var5 /* : Float */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_gamnit__UICamera;
var = NEW_geometry__Point3d(&type_geometry__Point3d__core__Float);
{
var1 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var->class->vft[COLOR_geometry__points_and_lines__Point__x_61d]))(var, var1); /* x= on <var:Point3d[Float]>*/
}
{
var2 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var->class->vft[COLOR_geometry__points_and_lines__Point__y_61d]))(var, var2); /* y= on <var:Point3d[Float]>*/
}
{
var3 = BOX_core__Float(0.0); /* autobox from Float to Numeric */
((void(*)(val* self, val* p0))(var->class->vft[COLOR_geometry__points_and_lines__Point3d__z_61d]))(var, var3); /* z= on <var:Point3d[Float]>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Point3d[Float]>*/
}
self->attrs[COLOR_gamnit__cameras__Camera___position].val = var; /* _position on <self:UICamera exact> */
self->attrs[COLOR_gamnit__cameras__UICamera___near].d = 100.0; /* _near on <self:UICamera exact> */
{
{ /* Inline kernel#Float#unary - (100.0) on <100.0:Float> */
var5 = -100.0;
var4 = var5;
goto RET_LABEL;
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_gamnit__cameras__UICamera___far].d = var4; /* _far on <self:UICamera exact> */
return self;
}
/* runtime class geometry__Boxed: geometry::Boxed (dead=true; need_corpse=false)*/
/* allocate Boxed[Numeric] */
val* NEW_geometry__Boxed(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Boxed is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class geometry__Box: geometry::Box (dead=true; need_corpse=false)*/
/* allocate Box[Numeric] */
val* NEW_geometry__Box(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Box is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class geometry__Boxed3d: geometry::Boxed3d (dead=true; need_corpse=false)*/
/* allocate Boxed3d[Numeric] */
val* NEW_geometry__Boxed3d(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Boxed3d is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class geometry__Box3d: geometry::Box3d (dead=true; need_corpse=false)*/
/* allocate Box3d[Numeric] */
val* NEW_geometry__Box3d(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Box3d is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class geometry__BoxedCollection: geometry::BoxedCollection (dead=true; need_corpse=false)*/
/* allocate BoxedCollection[Boxed[Numeric]] */
val* NEW_geometry__BoxedCollection(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "BoxedCollection is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class geometry__BoxedArray: geometry::BoxedArray (dead=true; need_corpse=false)*/
/* allocate BoxedArray[Boxed[Numeric]] */
val* NEW_geometry__BoxedArray(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "BoxedArray is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class physique__Spritesheet: physique::Spritesheet (dead=false; need_corpse=false)*/
const struct class class_physique__Spritesheet = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to spritesheet:Spritesheet:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to spritesheet:Spritesheet:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to spritesheet:Spritesheet:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to spritesheet:Spritesheet:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to spritesheet:Spritesheet:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to spritesheet:Spritesheet:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to spritesheet:Spritesheet:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to spritesheet:Spritesheet:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to spritesheet:Spritesheet:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to spritesheet:Spritesheet:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to spritesheet:Spritesheet:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to spritesheet:Spritesheet:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to spritesheet:Spritesheet:abstract_text#Object#native_class_name */
(nitmethod_t)physique___physique__Spritesheet___ufo_green, /* pointer to spritesheet:Spritesheet:spritesheet#Spritesheet#ufo_green */
(nitmethod_t)physique___physique__Spritesheet___root_texture, /* pointer to spritesheet:Spritesheet:spritesheet#Spritesheet#root_texture */
(nitmethod_t)physique___physique__Spritesheet___ufo_yellow, /* pointer to spritesheet:Spritesheet:spritesheet#Spritesheet#ufo_yellow */
}
};
/* allocate Spritesheet */
val* NEW_physique__Spritesheet(const struct type* type) {
val* self /* : Spritesheet */;
val* var /* : Texture */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
val* var4 /* : Texture */;
val* var5 /* : Texture */;
val* var6 /* : Numeric */;
val* var7 /* : Numeric */;
val* var8 /* : Numeric */;
val* var9 /* : Numeric */;
val* var10 /* : GamnitSubtexture */;
val* var11 /* : Texture */;
val* var12 /* : Numeric */;
val* var13 /* : Numeric */;
val* var14 /* : Numeric */;
val* var15 /* : Numeric */;
val* var16 /* : GamnitSubtexture */;
val* var17 /* : Texture */;
val* var18 /* : Numeric */;
val* var19 /* : Numeric */;
val* var20 /* : Numeric */;
val* var21 /* : Numeric */;
val* var22 /* : GamnitSubtexture */;
val* var23 /* : Texture */;
val* var24 /* : Numeric */;
val* var25 /* : Numeric */;
val* var26 /* : Numeric */;
val* var27 /* : Numeric */;
val* var28 /* : GamnitSubtexture */;
val* var29 /* : Texture */;
val* var30 /* : Numeric */;
val* var31 /* : Numeric */;
val* var32 /* : Numeric */;
val* var33 /* : Numeric */;
val* var34 /* : GamnitSubtexture */;
val* var35 /* : Texture */;
val* var36 /* : Numeric */;
val* var37 /* : Numeric */;
val* var38 /* : Numeric */;
val* var39 /* : Numeric */;
val* var40 /* : GamnitSubtexture */;
val* var41 /* : Texture */;
val* var42 /* : Numeric */;
val* var43 /* : Numeric */;
val* var44 /* : Numeric */;
val* var45 /* : Numeric */;
val* var46 /* : GamnitSubtexture */;
val* var47 /* : Texture */;
val* var48 /* : Numeric */;
val* var49 /* : Numeric */;
val* var50 /* : Numeric */;
val* var51 /* : Numeric */;
val* var52 /* : GamnitSubtexture */;
val* var53 /* : Texture */;
val* var54 /* : Numeric */;
val* var55 /* : Numeric */;
val* var56 /* : Numeric */;
val* var57 /* : Numeric */;
val* var58 /* : GamnitSubtexture */;
val* var59 /* : Texture */;
val* var60 /* : Numeric */;
val* var61 /* : Numeric */;
val* var62 /* : Numeric */;
val* var63 /* : Numeric */;
val* var64 /* : GamnitSubtexture */;
val* var65 /* : Texture */;
val* var66 /* : Numeric */;
val* var67 /* : Numeric */;
val* var68 /* : Numeric */;
val* var69 /* : Numeric */;
val* var70 /* : GamnitSubtexture */;
val* var71 /* : Texture */;
val* var72 /* : Numeric */;
val* var73 /* : Numeric */;
val* var74 /* : Numeric */;
val* var75 /* : Numeric */;
val* var76 /* : GamnitSubtexture */;
val* var77 /* : Texture */;
val* var78 /* : Numeric */;
val* var79 /* : Numeric */;
val* var80 /* : Numeric */;
val* var81 /* : Numeric */;
val* var82 /* : GamnitSubtexture */;
val* var83 /* : Texture */;
val* var84 /* : Numeric */;
val* var85 /* : Numeric */;
val* var86 /* : Numeric */;
val* var87 /* : Numeric */;
val* var88 /* : GamnitSubtexture */;
val* var89 /* : Texture */;
val* var90 /* : Numeric */;
val* var91 /* : Numeric */;
val* var92 /* : Numeric */;
val* var93 /* : Numeric */;
val* var94 /* : GamnitSubtexture */;
val* var95 /* : Texture */;
val* var96 /* : Numeric */;
val* var97 /* : Numeric */;
val* var98 /* : Numeric */;
val* var99 /* : Numeric */;
val* var100 /* : GamnitSubtexture */;
val* var101 /* : Texture */;
val* var102 /* : Numeric */;
val* var103 /* : Numeric */;
val* var104 /* : Numeric */;
val* var105 /* : Numeric */;
val* var106 /* : GamnitSubtexture */;
val* var107 /* : Texture */;
val* var108 /* : Numeric */;
val* var109 /* : Numeric */;
val* var110 /* : Numeric */;
val* var111 /* : Numeric */;
val* var112 /* : GamnitSubtexture */;
val* var113 /* : Texture */;
val* var114 /* : Numeric */;
val* var115 /* : Numeric */;
val* var116 /* : Numeric */;
val* var117 /* : Numeric */;
val* var118 /* : GamnitSubtexture */;
val* var119 /* : Texture */;
val* var120 /* : Numeric */;
val* var121 /* : Numeric */;
val* var122 /* : Numeric */;
val* var123 /* : Numeric */;
val* var124 /* : GamnitSubtexture */;
val* var125 /* : Texture */;
val* var126 /* : Numeric */;
val* var127 /* : Numeric */;
val* var128 /* : Numeric */;
val* var129 /* : Numeric */;
val* var130 /* : GamnitSubtexture */;
val* var131 /* : Texture */;
val* var132 /* : Numeric */;
val* var133 /* : Numeric */;
val* var134 /* : Numeric */;
val* var135 /* : Numeric */;
val* var136 /* : GamnitSubtexture */;
val* var137 /* : Texture */;
val* var138 /* : Numeric */;
val* var139 /* : Numeric */;
val* var140 /* : Numeric */;
val* var141 /* : Numeric */;
val* var142 /* : GamnitSubtexture */;
val* var143 /* : Texture */;
val* var144 /* : Numeric */;
val* var145 /* : Numeric */;
val* var146 /* : Numeric */;
val* var147 /* : Numeric */;
val* var148 /* : GamnitSubtexture */;
val* var149 /* : Texture */;
val* var150 /* : Numeric */;
val* var151 /* : Numeric */;
val* var152 /* : Numeric */;
val* var153 /* : Numeric */;
val* var154 /* : GamnitSubtexture */;
val* var155 /* : Texture */;
val* var156 /* : Numeric */;
val* var157 /* : Numeric */;
val* var158 /* : Numeric */;
val* var159 /* : Numeric */;
val* var160 /* : GamnitSubtexture */;
val* var161 /* : Texture */;
val* var162 /* : Numeric */;
val* var163 /* : Numeric */;
val* var164 /* : Numeric */;
val* var165 /* : Numeric */;
val* var166 /* : GamnitSubtexture */;
val* var167 /* : Texture */;
val* var168 /* : Numeric */;
val* var169 /* : Numeric */;
val* var170 /* : Numeric */;
val* var171 /* : Numeric */;
val* var172 /* : GamnitSubtexture */;
val* var173 /* : Texture */;
val* var174 /* : Numeric */;
val* var175 /* : Numeric */;
val* var176 /* : Numeric */;
val* var177 /* : Numeric */;
val* var178 /* : GamnitSubtexture */;
val* var179 /* : Texture */;
val* var180 /* : Numeric */;
val* var181 /* : Numeric */;
val* var182 /* : Numeric */;
val* var183 /* : Numeric */;
val* var184 /* : GamnitSubtexture */;
val* var185 /* : Texture */;
val* var186 /* : Numeric */;
val* var187 /* : Numeric */;
val* var188 /* : Numeric */;
val* var189 /* : Numeric */;
val* var190 /* : GamnitSubtexture */;
val* var191 /* : Texture */;
val* var192 /* : Numeric */;
val* var193 /* : Numeric */;
val* var194 /* : Numeric */;
val* var195 /* : Numeric */;
val* var196 /* : GamnitSubtexture */;
val* var197 /* : Texture */;
val* var198 /* : Numeric */;
val* var199 /* : Numeric */;
val* var200 /* : Numeric */;
val* var201 /* : Numeric */;
val* var202 /* : GamnitSubtexture */;
val* var203 /* : Texture */;
val* var204 /* : Numeric */;
val* var205 /* : Numeric */;
val* var206 /* : Numeric */;
val* var207 /* : Numeric */;
val* var208 /* : GamnitSubtexture */;
val* var209 /* : Texture */;
val* var210 /* : Numeric */;
val* var211 /* : Numeric */;
val* var212 /* : Numeric */;
val* var213 /* : Numeric */;
val* var214 /* : GamnitSubtexture */;
val* var215 /* : Texture */;
val* var216 /* : Numeric */;
val* var217 /* : Numeric */;
val* var218 /* : Numeric */;
val* var219 /* : Numeric */;
val* var220 /* : GamnitSubtexture */;
val* var221 /* : Texture */;
val* var222 /* : Numeric */;
val* var223 /* : Numeric */;
val* var224 /* : Numeric */;
val* var225 /* : Numeric */;
val* var226 /* : GamnitSubtexture */;
val* var227 /* : Texture */;
val* var228 /* : Numeric */;
val* var229 /* : Numeric */;
val* var230 /* : Numeric */;
val* var231 /* : Numeric */;
val* var232 /* : GamnitSubtexture */;
val* var233 /* : Texture */;
val* var234 /* : Numeric */;
val* var235 /* : Numeric */;
val* var236 /* : Numeric */;
val* var237 /* : Numeric */;
val* var238 /* : GamnitSubtexture */;
val* var239 /* : Texture */;
val* var240 /* : Numeric */;
val* var241 /* : Numeric */;
val* var242 /* : Numeric */;
val* var243 /* : Numeric */;
val* var244 /* : GamnitSubtexture */;
val* var245 /* : Texture */;
val* var246 /* : Numeric */;
val* var247 /* : Numeric */;
val* var248 /* : Numeric */;
val* var249 /* : Numeric */;
val* var250 /* : GamnitSubtexture */;
val* var251 /* : Texture */;
val* var252 /* : Numeric */;
val* var253 /* : Numeric */;
val* var254 /* : Numeric */;
val* var255 /* : Numeric */;
val* var256 /* : GamnitSubtexture */;
val* var257 /* : Texture */;
val* var258 /* : Numeric */;
val* var259 /* : Numeric */;
val* var260 /* : Numeric */;
val* var261 /* : Numeric */;
val* var262 /* : GamnitSubtexture */;
val* var263 /* : Texture */;
val* var264 /* : Numeric */;
val* var265 /* : Numeric */;
val* var266 /* : Numeric */;
val* var267 /* : Numeric */;
val* var268 /* : GamnitSubtexture */;
val* var269 /* : Texture */;
val* var270 /* : Numeric */;
val* var271 /* : Numeric */;
val* var272 /* : Numeric */;
val* var273 /* : Numeric */;
val* var274 /* : GamnitSubtexture */;
val* var275 /* : Texture */;
val* var276 /* : Numeric */;
val* var277 /* : Numeric */;
val* var278 /* : Numeric */;
val* var279 /* : Numeric */;
val* var280 /* : GamnitSubtexture */;
val* var281 /* : Texture */;
val* var282 /* : Numeric */;
val* var283 /* : Numeric */;
val* var284 /* : Numeric */;
val* var285 /* : Numeric */;
val* var286 /* : GamnitSubtexture */;
val* var287 /* : Texture */;
val* var288 /* : Numeric */;
val* var289 /* : Numeric */;
val* var290 /* : Numeric */;
val* var291 /* : Numeric */;
val* var292 /* : GamnitSubtexture */;
val* var293 /* : Texture */;
val* var294 /* : Numeric */;
val* var295 /* : Numeric */;
val* var296 /* : Numeric */;
val* var297 /* : Numeric */;
val* var298 /* : GamnitSubtexture */;
val* var299 /* : Texture */;
val* var300 /* : Numeric */;
val* var301 /* : Numeric */;
val* var302 /* : Numeric */;
val* var303 /* : Numeric */;
val* var304 /* : GamnitSubtexture */;
val* var305 /* : Texture */;
val* var306 /* : Numeric */;
val* var307 /* : Numeric */;
val* var308 /* : Numeric */;
val* var309 /* : Numeric */;
val* var310 /* : GamnitSubtexture */;
val* var311 /* : Texture */;
val* var312 /* : Numeric */;
val* var313 /* : Numeric */;
val* var314 /* : Numeric */;
val* var315 /* : Numeric */;
val* var316 /* : GamnitSubtexture */;
val* var317 /* : Texture */;
val* var318 /* : Numeric */;
val* var319 /* : Numeric */;
val* var320 /* : Numeric */;
val* var321 /* : Numeric */;
val* var322 /* : GamnitSubtexture */;
val* var323 /* : Texture */;
val* var324 /* : Numeric */;
val* var325 /* : Numeric */;
val* var326 /* : Numeric */;
val* var327 /* : Numeric */;
val* var328 /* : GamnitSubtexture */;
val* var329 /* : Texture */;
val* var330 /* : Numeric */;
val* var331 /* : Numeric */;
val* var332 /* : Numeric */;
val* var333 /* : Numeric */;
val* var334 /* : GamnitSubtexture */;
val* var335 /* : Texture */;
val* var336 /* : Numeric */;
val* var337 /* : Numeric */;
val* var338 /* : Numeric */;
val* var339 /* : Numeric */;
val* var340 /* : GamnitSubtexture */;
val* var341 /* : Texture */;
val* var342 /* : Numeric */;
val* var343 /* : Numeric */;
val* var344 /* : Numeric */;
val* var345 /* : Numeric */;
val* var346 /* : GamnitSubtexture */;
val* var347 /* : Texture */;
val* var348 /* : Numeric */;
val* var349 /* : Numeric */;
val* var350 /* : Numeric */;
val* var351 /* : Numeric */;
val* var352 /* : GamnitSubtexture */;
val* var353 /* : Texture */;
val* var354 /* : Numeric */;
val* var355 /* : Numeric */;
val* var356 /* : Numeric */;
val* var357 /* : Numeric */;
val* var358 /* : GamnitSubtexture */;
val* var359 /* : Texture */;
val* var360 /* : Numeric */;
val* var361 /* : Numeric */;
val* var362 /* : Numeric */;
val* var363 /* : Numeric */;
val* var364 /* : GamnitSubtexture */;
val* var365 /* : Texture */;
val* var366 /* : Numeric */;
val* var367 /* : Numeric */;
val* var368 /* : Numeric */;
val* var369 /* : Numeric */;
val* var370 /* : GamnitSubtexture */;
val* var371 /* : Texture */;
val* var372 /* : Numeric */;
val* var373 /* : Numeric */;
val* var374 /* : Numeric */;
val* var375 /* : Numeric */;
val* var376 /* : GamnitSubtexture */;
val* var377 /* : Texture */;
val* var378 /* : Numeric */;
val* var379 /* : Numeric */;
val* var380 /* : Numeric */;
val* var381 /* : Numeric */;
val* var382 /* : GamnitSubtexture */;
val* var383 /* : Texture */;
val* var384 /* : Numeric */;
val* var385 /* : Numeric */;
val* var386 /* : Numeric */;
val* var387 /* : Numeric */;
val* var388 /* : GamnitSubtexture */;
val* var389 /* : Texture */;
val* var390 /* : Numeric */;
val* var391 /* : Numeric */;
val* var392 /* : Numeric */;
val* var393 /* : Numeric */;
val* var394 /* : GamnitSubtexture */;
val* var395 /* : Texture */;
val* var396 /* : Numeric */;
val* var397 /* : Numeric */;
val* var398 /* : Numeric */;
val* var399 /* : Numeric */;
val* var400 /* : GamnitSubtexture */;
val* var401 /* : Texture */;
val* var402 /* : Numeric */;
val* var403 /* : Numeric */;
val* var404 /* : Numeric */;
val* var405 /* : Numeric */;
val* var406 /* : GamnitSubtexture */;
val* var407 /* : Texture */;
val* var408 /* : Numeric */;
val* var409 /* : Numeric */;
val* var410 /* : Numeric */;
val* var411 /* : Numeric */;
val* var412 /* : GamnitSubtexture */;
val* var413 /* : Texture */;
val* var414 /* : Numeric */;
val* var415 /* : Numeric */;
val* var416 /* : Numeric */;
val* var417 /* : Numeric */;
val* var418 /* : GamnitSubtexture */;
val* var419 /* : Texture */;
val* var420 /* : Numeric */;
val* var421 /* : Numeric */;
val* var422 /* : Numeric */;
val* var423 /* : Numeric */;
val* var424 /* : GamnitSubtexture */;
val* var425 /* : Texture */;
val* var426 /* : Numeric */;
val* var427 /* : Numeric */;
val* var428 /* : Numeric */;
val* var429 /* : Numeric */;
val* var430 /* : GamnitSubtexture */;
val* var431 /* : Texture */;
val* var432 /* : Numeric */;
val* var433 /* : Numeric */;
val* var434 /* : Numeric */;
val* var435 /* : Numeric */;
val* var436 /* : GamnitSubtexture */;
val* var437 /* : Texture */;
val* var438 /* : Numeric */;
val* var439 /* : Numeric */;
val* var440 /* : Numeric */;
val* var441 /* : Numeric */;
val* var442 /* : GamnitSubtexture */;
val* var443 /* : Texture */;
val* var444 /* : Numeric */;
val* var445 /* : Numeric */;
val* var446 /* : Numeric */;
val* var447 /* : Numeric */;
val* var448 /* : GamnitSubtexture */;
val* var449 /* : Texture */;
val* var450 /* : Numeric */;
val* var451 /* : Numeric */;
val* var452 /* : Numeric */;
val* var453 /* : Numeric */;
val* var454 /* : GamnitSubtexture */;
val* var455 /* : Texture */;
val* var456 /* : Numeric */;
val* var457 /* : Numeric */;
val* var458 /* : Numeric */;
val* var459 /* : Numeric */;
val* var460 /* : GamnitSubtexture */;
val* var461 /* : Texture */;
val* var462 /* : Numeric */;
val* var463 /* : Numeric */;
val* var464 /* : Numeric */;
val* var465 /* : Numeric */;
val* var466 /* : GamnitSubtexture */;
val* var467 /* : Texture */;
val* var468 /* : Numeric */;
val* var469 /* : Numeric */;
val* var470 /* : Numeric */;
val* var471 /* : Numeric */;
val* var472 /* : GamnitSubtexture */;
val* var473 /* : Texture */;
val* var474 /* : Numeric */;
val* var475 /* : Numeric */;
val* var476 /* : Numeric */;
val* var477 /* : Numeric */;
val* var478 /* : GamnitSubtexture */;
val* var479 /* : Texture */;
val* var480 /* : Numeric */;
val* var481 /* : Numeric */;
val* var482 /* : Numeric */;
val* var483 /* : Numeric */;
val* var484 /* : GamnitSubtexture */;
val* var485 /* : Texture */;
val* var486 /* : Numeric */;
val* var487 /* : Numeric */;
val* var488 /* : Numeric */;
val* var489 /* : Numeric */;
val* var490 /* : GamnitSubtexture */;
val* var491 /* : Texture */;
val* var492 /* : Numeric */;
val* var493 /* : Numeric */;
val* var494 /* : Numeric */;
val* var495 /* : Numeric */;
val* var496 /* : GamnitSubtexture */;
val* var497 /* : Texture */;
val* var498 /* : Numeric */;
val* var499 /* : Numeric */;
val* var500 /* : Numeric */;
val* var501 /* : Numeric */;
val* var502 /* : GamnitSubtexture */;
val* var503 /* : Texture */;
val* var504 /* : Numeric */;
val* var505 /* : Numeric */;
val* var506 /* : Numeric */;
val* var507 /* : Numeric */;
val* var508 /* : GamnitSubtexture */;
val* var509 /* : Texture */;
val* var510 /* : Numeric */;
val* var511 /* : Numeric */;
val* var512 /* : Numeric */;
val* var513 /* : Numeric */;
val* var514 /* : GamnitSubtexture */;
val* var515 /* : Texture */;
val* var516 /* : Numeric */;
val* var517 /* : Numeric */;
val* var518 /* : Numeric */;
val* var519 /* : Numeric */;
val* var520 /* : GamnitSubtexture */;
val* var521 /* : Texture */;
val* var522 /* : Numeric */;
val* var523 /* : Numeric */;
val* var524 /* : Numeric */;
val* var525 /* : Numeric */;
val* var526 /* : GamnitSubtexture */;
val* var527 /* : Texture */;
val* var528 /* : Numeric */;
val* var529 /* : Numeric */;
val* var530 /* : Numeric */;
val* var531 /* : Numeric */;
val* var532 /* : GamnitSubtexture */;
val* var533 /* : Texture */;
val* var534 /* : Numeric */;
val* var535 /* : Numeric */;
val* var536 /* : Numeric */;
val* var537 /* : Numeric */;
val* var538 /* : GamnitSubtexture */;
val* var539 /* : Texture */;
val* var540 /* : Numeric */;
val* var541 /* : Numeric */;
val* var542 /* : Numeric */;
val* var543 /* : Numeric */;
val* var544 /* : GamnitSubtexture */;
val* var545 /* : Texture */;
val* var546 /* : Numeric */;
val* var547 /* : Numeric */;
val* var548 /* : Numeric */;
val* var549 /* : Numeric */;
val* var550 /* : GamnitSubtexture */;
val* var551 /* : Texture */;
val* var552 /* : Numeric */;
val* var553 /* : Numeric */;
val* var554 /* : Numeric */;
val* var555 /* : Numeric */;
val* var556 /* : GamnitSubtexture */;
val* var557 /* : Texture */;
val* var558 /* : Numeric */;
val* var559 /* : Numeric */;
val* var560 /* : Numeric */;
val* var561 /* : Numeric */;
val* var562 /* : GamnitSubtexture */;
val* var563 /* : Texture */;
val* var564 /* : Numeric */;
val* var565 /* : Numeric */;
val* var566 /* : Numeric */;
val* var567 /* : Numeric */;
val* var568 /* : GamnitSubtexture */;
val* var569 /* : Texture */;
val* var570 /* : Numeric */;
val* var571 /* : Numeric */;
val* var572 /* : Numeric */;
val* var573 /* : Numeric */;
val* var574 /* : GamnitSubtexture */;
val* var575 /* : Texture */;
val* var576 /* : Numeric */;
val* var577 /* : Numeric */;
val* var578 /* : Numeric */;
val* var579 /* : Numeric */;
val* var580 /* : GamnitSubtexture */;
val* var581 /* : Texture */;
val* var582 /* : Numeric */;
val* var583 /* : Numeric */;
val* var584 /* : Numeric */;
val* var585 /* : Numeric */;
val* var586 /* : GamnitSubtexture */;
val* var587 /* : Texture */;
val* var588 /* : Numeric */;
val* var589 /* : Numeric */;
val* var590 /* : Numeric */;
val* var591 /* : Numeric */;
val* var592 /* : GamnitSubtexture */;
val* var593 /* : Texture */;
val* var594 /* : Numeric */;
val* var595 /* : Numeric */;
val* var596 /* : Numeric */;
val* var597 /* : Numeric */;
val* var598 /* : GamnitSubtexture */;
val* var599 /* : Texture */;
val* var600 /* : Numeric */;
val* var601 /* : Numeric */;
val* var602 /* : Numeric */;
val* var603 /* : Numeric */;
val* var604 /* : GamnitSubtexture */;
val* var605 /* : Texture */;
val* var606 /* : Numeric */;
val* var607 /* : Numeric */;
val* var608 /* : Numeric */;
val* var609 /* : Numeric */;
val* var610 /* : GamnitSubtexture */;
val* var611 /* : Texture */;
val* var612 /* : Numeric */;
val* var613 /* : Numeric */;
val* var614 /* : Numeric */;
val* var615 /* : Numeric */;
val* var616 /* : GamnitSubtexture */;
val* var617 /* : Texture */;
val* var618 /* : Numeric */;
val* var619 /* : Numeric */;
val* var620 /* : Numeric */;
val* var621 /* : Numeric */;
val* var622 /* : GamnitSubtexture */;
val* var623 /* : Texture */;
val* var624 /* : Numeric */;
val* var625 /* : Numeric */;
val* var626 /* : Numeric */;
val* var627 /* : Numeric */;
val* var628 /* : GamnitSubtexture */;
val* var629 /* : Texture */;
val* var630 /* : Numeric */;
val* var631 /* : Numeric */;
val* var632 /* : Numeric */;
val* var633 /* : Numeric */;
val* var634 /* : GamnitSubtexture */;
val* var635 /* : Texture */;
val* var636 /* : Numeric */;
val* var637 /* : Numeric */;
val* var638 /* : Numeric */;
val* var639 /* : Numeric */;
val* var640 /* : GamnitSubtexture */;
val* var641 /* : Texture */;
val* var642 /* : Numeric */;
val* var643 /* : Numeric */;
val* var644 /* : Numeric */;
val* var645 /* : Numeric */;
val* var646 /* : GamnitSubtexture */;
val* var647 /* : Texture */;
val* var648 /* : Numeric */;
val* var649 /* : Numeric */;
val* var650 /* : Numeric */;
val* var651 /* : Numeric */;
val* var652 /* : GamnitSubtexture */;
val* var653 /* : Texture */;
val* var654 /* : Numeric */;
val* var655 /* : Numeric */;
val* var656 /* : Numeric */;
val* var657 /* : Numeric */;
val* var658 /* : GamnitSubtexture */;
val* var659 /* : Texture */;
val* var660 /* : Numeric */;
val* var661 /* : Numeric */;
val* var662 /* : Numeric */;
val* var663 /* : Numeric */;
val* var664 /* : GamnitSubtexture */;
val* var665 /* : Texture */;
val* var666 /* : Numeric */;
val* var667 /* : Numeric */;
val* var668 /* : Numeric */;
val* var669 /* : Numeric */;
val* var670 /* : GamnitSubtexture */;
val* var671 /* : Texture */;
val* var672 /* : Numeric */;
val* var673 /* : Numeric */;
val* var674 /* : Numeric */;
val* var675 /* : Numeric */;
val* var676 /* : GamnitSubtexture */;
val* var677 /* : Texture */;
val* var678 /* : Numeric */;
val* var679 /* : Numeric */;
val* var680 /* : Numeric */;
val* var681 /* : Numeric */;
val* var682 /* : GamnitSubtexture */;
val* var683 /* : Texture */;
val* var684 /* : Numeric */;
val* var685 /* : Numeric */;
val* var686 /* : Numeric */;
val* var687 /* : Numeric */;
val* var688 /* : GamnitSubtexture */;
val* var689 /* : Texture */;
val* var690 /* : Numeric */;
val* var691 /* : Numeric */;
val* var692 /* : Numeric */;
val* var693 /* : Numeric */;
val* var694 /* : GamnitSubtexture */;
val* var695 /* : Texture */;
val* var696 /* : Numeric */;
val* var697 /* : Numeric */;
val* var698 /* : Numeric */;
val* var699 /* : Numeric */;
val* var700 /* : GamnitSubtexture */;
val* var701 /* : Texture */;
val* var702 /* : Numeric */;
val* var703 /* : Numeric */;
val* var704 /* : Numeric */;
val* var705 /* : Numeric */;
val* var706 /* : GamnitSubtexture */;
val* var707 /* : Texture */;
val* var708 /* : Numeric */;
val* var709 /* : Numeric */;
val* var710 /* : Numeric */;
val* var711 /* : Numeric */;
val* var712 /* : GamnitSubtexture */;
val* var713 /* : Texture */;
val* var714 /* : Numeric */;
val* var715 /* : Numeric */;
val* var716 /* : Numeric */;
val* var717 /* : Numeric */;
val* var718 /* : GamnitSubtexture */;
val* var719 /* : Texture */;
val* var720 /* : Numeric */;
val* var721 /* : Numeric */;
val* var722 /* : Numeric */;
val* var723 /* : Numeric */;
val* var724 /* : GamnitSubtexture */;
val* var725 /* : Texture */;
val* var726 /* : Numeric */;
val* var727 /* : Numeric */;
val* var728 /* : Numeric */;
val* var729 /* : Numeric */;
val* var730 /* : GamnitSubtexture */;
val* var731 /* : Texture */;
val* var732 /* : Numeric */;
val* var733 /* : Numeric */;
val* var734 /* : Numeric */;
val* var735 /* : Numeric */;
val* var736 /* : GamnitSubtexture */;
val* var737 /* : Texture */;
val* var738 /* : Numeric */;
val* var739 /* : Numeric */;
val* var740 /* : Numeric */;
val* var741 /* : Numeric */;
val* var742 /* : GamnitSubtexture */;
val* var743 /* : Texture */;
val* var744 /* : Numeric */;
val* var745 /* : Numeric */;
val* var746 /* : Numeric */;
val* var747 /* : Numeric */;
val* var748 /* : GamnitSubtexture */;
val* var749 /* : Texture */;
val* var750 /* : Numeric */;
val* var751 /* : Numeric */;
val* var752 /* : Numeric */;
val* var753 /* : Numeric */;
val* var754 /* : GamnitSubtexture */;
val* var755 /* : Texture */;
val* var756 /* : Numeric */;
val* var757 /* : Numeric */;
val* var758 /* : Numeric */;
val* var759 /* : Numeric */;
val* var760 /* : GamnitSubtexture */;
val* var761 /* : Texture */;
val* var762 /* : Numeric */;
val* var763 /* : Numeric */;
val* var764 /* : Numeric */;
val* var765 /* : Numeric */;
val* var766 /* : GamnitSubtexture */;
val* var767 /* : Texture */;
val* var768 /* : Numeric */;
val* var769 /* : Numeric */;
val* var770 /* : Numeric */;
val* var771 /* : Numeric */;
val* var772 /* : GamnitSubtexture */;
val* var773 /* : Texture */;
val* var774 /* : Numeric */;
val* var775 /* : Numeric */;
val* var776 /* : Numeric */;
val* var777 /* : Numeric */;
val* var778 /* : GamnitSubtexture */;
val* var779 /* : Texture */;
val* var780 /* : Numeric */;
val* var781 /* : Numeric */;
val* var782 /* : Numeric */;
val* var783 /* : Numeric */;
val* var784 /* : GamnitSubtexture */;
val* var785 /* : Texture */;
val* var786 /* : Numeric */;
val* var787 /* : Numeric */;
val* var788 /* : Numeric */;
val* var789 /* : Numeric */;
val* var790 /* : GamnitSubtexture */;
val* var791 /* : Texture */;
val* var792 /* : Numeric */;
val* var793 /* : Numeric */;
val* var794 /* : Numeric */;
val* var795 /* : Numeric */;
val* var796 /* : GamnitSubtexture */;
val* var797 /* : Texture */;
val* var798 /* : Numeric */;
val* var799 /* : Numeric */;
val* var800 /* : Numeric */;
val* var801 /* : Numeric */;
val* var802 /* : GamnitSubtexture */;
val* var803 /* : Texture */;
val* var804 /* : Numeric */;
val* var805 /* : Numeric */;
val* var806 /* : Numeric */;
val* var807 /* : Numeric */;
val* var808 /* : GamnitSubtexture */;
val* var809 /* : Texture */;
val* var810 /* : Numeric */;
val* var811 /* : Numeric */;
val* var812 /* : Numeric */;
val* var813 /* : Numeric */;
val* var814 /* : GamnitSubtexture */;
val* var815 /* : Texture */;
val* var816 /* : Numeric */;
val* var817 /* : Numeric */;
val* var818 /* : Numeric */;
val* var819 /* : Numeric */;
val* var820 /* : GamnitSubtexture */;
val* var821 /* : Texture */;
val* var822 /* : Numeric */;
val* var823 /* : Numeric */;
val* var824 /* : Numeric */;
val* var825 /* : Numeric */;
val* var826 /* : GamnitSubtexture */;
val* var827 /* : Texture */;
val* var828 /* : Numeric */;
val* var829 /* : Numeric */;
val* var830 /* : Numeric */;
val* var831 /* : Numeric */;
val* var832 /* : GamnitSubtexture */;
val* var833 /* : Texture */;
val* var834 /* : Numeric */;
val* var835 /* : Numeric */;
val* var836 /* : Numeric */;
val* var837 /* : Numeric */;
val* var838 /* : GamnitSubtexture */;
val* var839 /* : Texture */;
val* var840 /* : Numeric */;
val* var841 /* : Numeric */;
val* var842 /* : Numeric */;
val* var843 /* : Numeric */;
val* var844 /* : GamnitSubtexture */;
val* var845 /* : Texture */;
val* var846 /* : Numeric */;
val* var847 /* : Numeric */;
val* var848 /* : Numeric */;
val* var849 /* : Numeric */;
val* var850 /* : GamnitSubtexture */;
val* var851 /* : Texture */;
val* var852 /* : Numeric */;
val* var853 /* : Numeric */;
val* var854 /* : Numeric */;
val* var855 /* : Numeric */;
val* var856 /* : GamnitSubtexture */;
val* var857 /* : Texture */;
val* var858 /* : Numeric */;
val* var859 /* : Numeric */;
val* var860 /* : Numeric */;
val* var861 /* : Numeric */;
val* var862 /* : GamnitSubtexture */;
val* var863 /* : Texture */;
val* var864 /* : Numeric */;
val* var865 /* : Numeric */;
val* var866 /* : Numeric */;
val* var867 /* : Numeric */;
val* var868 /* : GamnitSubtexture */;
val* var869 /* : Texture */;
val* var870 /* : Numeric */;
val* var871 /* : Numeric */;
val* var872 /* : Numeric */;
val* var873 /* : Numeric */;
val* var874 /* : GamnitSubtexture */;
val* var875 /* : Texture */;
val* var876 /* : Numeric */;
val* var877 /* : Numeric */;
val* var878 /* : Numeric */;
val* var879 /* : Numeric */;
val* var880 /* : GamnitSubtexture */;
val* var881 /* : Texture */;
val* var882 /* : Numeric */;
val* var883 /* : Numeric */;
val* var884 /* : Numeric */;
val* var885 /* : Numeric */;
val* var886 /* : GamnitSubtexture */;
val* var887 /* : Texture */;
val* var888 /* : Numeric */;
val* var889 /* : Numeric */;
val* var890 /* : Numeric */;
val* var891 /* : Numeric */;
val* var892 /* : GamnitSubtexture */;
val* var893 /* : Texture */;
val* var894 /* : Numeric */;
val* var895 /* : Numeric */;
val* var896 /* : Numeric */;
val* var897 /* : Numeric */;
val* var898 /* : GamnitSubtexture */;
val* var899 /* : Texture */;
val* var900 /* : Numeric */;
val* var901 /* : Numeric */;
val* var902 /* : Numeric */;
val* var903 /* : Numeric */;
val* var904 /* : GamnitSubtexture */;
val* var905 /* : Texture */;
val* var906 /* : Numeric */;
val* var907 /* : Numeric */;
val* var908 /* : Numeric */;
val* var909 /* : Numeric */;
val* var910 /* : GamnitSubtexture */;
val* var911 /* : Texture */;
val* var912 /* : Numeric */;
val* var913 /* : Numeric */;
val* var914 /* : Numeric */;
val* var915 /* : Numeric */;
val* var916 /* : GamnitSubtexture */;
val* var917 /* : Texture */;
val* var918 /* : Numeric */;
val* var919 /* : Numeric */;
val* var920 /* : Numeric */;
val* var921 /* : Numeric */;
val* var922 /* : GamnitSubtexture */;
val* var923 /* : Texture */;
val* var924 /* : Numeric */;
val* var925 /* : Numeric */;
val* var926 /* : Numeric */;
val* var927 /* : Numeric */;
val* var928 /* : GamnitSubtexture */;
val* var929 /* : Texture */;
val* var930 /* : Numeric */;
val* var931 /* : Numeric */;
val* var932 /* : Numeric */;
val* var933 /* : Numeric */;
val* var934 /* : GamnitSubtexture */;
val* var935 /* : Texture */;
val* var936 /* : Numeric */;
val* var937 /* : Numeric */;
val* var938 /* : Numeric */;
val* var939 /* : Numeric */;
val* var940 /* : GamnitSubtexture */;
val* var941 /* : Texture */;
val* var942 /* : Numeric */;
val* var943 /* : Numeric */;
val* var944 /* : Numeric */;
val* var945 /* : Numeric */;
val* var946 /* : GamnitSubtexture */;
val* var947 /* : Texture */;
val* var948 /* : Numeric */;
val* var949 /* : Numeric */;
val* var950 /* : Numeric */;
val* var951 /* : Numeric */;
val* var952 /* : GamnitSubtexture */;
val* var953 /* : Texture */;
val* var954 /* : Numeric */;
val* var955 /* : Numeric */;
val* var956 /* : Numeric */;
val* var957 /* : Numeric */;
val* var958 /* : GamnitSubtexture */;
val* var959 /* : Texture */;
val* var960 /* : Numeric */;
val* var961 /* : Numeric */;
val* var962 /* : Numeric */;
val* var963 /* : Numeric */;
val* var964 /* : GamnitSubtexture */;
val* var965 /* : Texture */;
val* var966 /* : Numeric */;
val* var967 /* : Numeric */;
val* var968 /* : Numeric */;
val* var969 /* : Numeric */;
val* var970 /* : GamnitSubtexture */;
val* var971 /* : Texture */;
val* var972 /* : Numeric */;
val* var973 /* : Numeric */;
val* var974 /* : Numeric */;
val* var975 /* : Numeric */;
val* var976 /* : GamnitSubtexture */;
val* var977 /* : Texture */;
val* var978 /* : Numeric */;
val* var979 /* : Numeric */;
val* var980 /* : Numeric */;
val* var981 /* : Numeric */;
val* var982 /* : GamnitSubtexture */;
val* var983 /* : Texture */;
val* var984 /* : Numeric */;
val* var985 /* : Numeric */;
val* var986 /* : Numeric */;
val* var987 /* : Numeric */;
val* var988 /* : GamnitSubtexture */;
val* var989 /* : Texture */;
val* var990 /* : Numeric */;
val* var991 /* : Numeric */;
val* var992 /* : Numeric */;
val* var993 /* : Numeric */;
val* var994 /* : GamnitSubtexture */;
val* var995 /* : Texture */;
val* var996 /* : Numeric */;
val* var997 /* : Numeric */;
val* var998 /* : Numeric */;
val* var999 /* : Numeric */;
val* var1000 /* : GamnitSubtexture */;
val* var1001 /* : Texture */;
val* var1002 /* : Numeric */;
val* var1003 /* : Numeric */;
val* var1004 /* : Numeric */;
val* var1005 /* : Numeric */;
val* var1006 /* : GamnitSubtexture */;
val* var1007 /* : Texture */;
val* var1008 /* : Numeric */;
val* var1009 /* : Numeric */;
val* var1010 /* : Numeric */;
val* var1011 /* : Numeric */;
val* var1012 /* : GamnitSubtexture */;
val* var1013 /* : Texture */;
val* var1014 /* : Numeric */;
val* var1015 /* : Numeric */;
val* var1016 /* : Numeric */;
val* var1017 /* : Numeric */;
val* var1018 /* : GamnitSubtexture */;
val* var1019 /* : Texture */;
val* var1020 /* : Numeric */;
val* var1021 /* : Numeric */;
val* var1022 /* : Numeric */;
val* var1023 /* : Numeric */;
val* var1024 /* : GamnitSubtexture */;
val* var1025 /* : Texture */;
val* var1026 /* : Numeric */;
val* var1027 /* : Numeric */;
val* var1028 /* : Numeric */;
val* var1029 /* : Numeric */;
val* var1030 /* : GamnitSubtexture */;
val* var1031 /* : Texture */;
val* var1032 /* : Numeric */;
val* var1033 /* : Numeric */;
val* var1034 /* : Numeric */;
val* var1035 /* : Numeric */;
val* var1036 /* : GamnitSubtexture */;
val* var1037 /* : Texture */;
val* var1038 /* : Numeric */;
val* var1039 /* : Numeric */;
val* var1040 /* : Numeric */;
val* var1041 /* : Numeric */;
val* var1042 /* : GamnitSubtexture */;
val* var1043 /* : Texture */;
val* var1044 /* : Numeric */;
val* var1045 /* : Numeric */;
val* var1046 /* : Numeric */;
val* var1047 /* : Numeric */;
val* var1048 /* : GamnitSubtexture */;
val* var1049 /* : Texture */;
val* var1050 /* : Numeric */;
val* var1051 /* : Numeric */;
val* var1052 /* : Numeric */;
val* var1053 /* : Numeric */;
val* var1054 /* : GamnitSubtexture */;
val* var1055 /* : Texture */;
val* var1056 /* : Numeric */;
val* var1057 /* : Numeric */;
val* var1058 /* : Numeric */;
val* var1059 /* : Numeric */;
val* var1060 /* : GamnitSubtexture */;
val* var1061 /* : Texture */;
val* var1062 /* : Numeric */;
val* var1063 /* : Numeric */;
val* var1064 /* : Numeric */;
val* var1065 /* : Numeric */;
val* var1066 /* : GamnitSubtexture */;
val* var1067 /* : Texture */;
val* var1068 /* : Numeric */;
val* var1069 /* : Numeric */;
val* var1070 /* : Numeric */;
val* var1071 /* : Numeric */;
val* var1072 /* : GamnitSubtexture */;
val* var1073 /* : Texture */;
val* var1074 /* : Numeric */;
val* var1075 /* : Numeric */;
val* var1076 /* : Numeric */;
val* var1077 /* : Numeric */;
val* var1078 /* : GamnitSubtexture */;
val* var1079 /* : Texture */;
val* var1080 /* : Numeric */;
val* var1081 /* : Numeric */;
val* var1082 /* : Numeric */;
val* var1083 /* : Numeric */;
val* var1084 /* : GamnitSubtexture */;
val* var1085 /* : Texture */;
val* var1086 /* : Numeric */;
val* var1087 /* : Numeric */;
val* var1088 /* : Numeric */;
val* var1089 /* : Numeric */;
val* var1090 /* : GamnitSubtexture */;
val* var1091 /* : Texture */;
val* var1092 /* : Numeric */;
val* var1093 /* : Numeric */;
val* var1094 /* : Numeric */;
val* var1095 /* : Numeric */;
val* var1096 /* : GamnitSubtexture */;
val* var1097 /* : Texture */;
val* var1098 /* : Numeric */;
val* var1099 /* : Numeric */;
val* var1100 /* : Numeric */;
val* var1101 /* : Numeric */;
val* var1102 /* : GamnitSubtexture */;
val* var1103 /* : Texture */;
val* var1104 /* : Numeric */;
val* var1105 /* : Numeric */;
val* var1106 /* : Numeric */;
val* var1107 /* : Numeric */;
val* var1108 /* : GamnitSubtexture */;
val* var1109 /* : Texture */;
val* var1110 /* : Numeric */;
val* var1111 /* : Numeric */;
val* var1112 /* : Numeric */;
val* var1113 /* : Numeric */;
val* var1114 /* : GamnitSubtexture */;
val* var1115 /* : Texture */;
val* var1116 /* : Numeric */;
val* var1117 /* : Numeric */;
val* var1118 /* : Numeric */;
val* var1119 /* : Numeric */;
val* var1120 /* : GamnitSubtexture */;
val* var1121 /* : Texture */;
val* var1122 /* : Numeric */;
val* var1123 /* : Numeric */;
val* var1124 /* : Numeric */;
val* var1125 /* : Numeric */;
val* var1126 /* : GamnitSubtexture */;
val* var1127 /* : Texture */;
val* var1128 /* : Numeric */;
val* var1129 /* : Numeric */;
val* var1130 /* : Numeric */;
val* var1131 /* : Numeric */;
val* var1132 /* : GamnitSubtexture */;
val* var1133 /* : Texture */;
val* var1134 /* : Numeric */;
val* var1135 /* : Numeric */;
val* var1136 /* : Numeric */;
val* var1137 /* : Numeric */;
val* var1138 /* : GamnitSubtexture */;
val* var1139 /* : Texture */;
val* var1140 /* : Numeric */;
val* var1141 /* : Numeric */;
val* var1142 /* : Numeric */;
val* var1143 /* : Numeric */;
val* var1144 /* : GamnitSubtexture */;
val* var1145 /* : Texture */;
val* var1146 /* : Numeric */;
val* var1147 /* : Numeric */;
val* var1148 /* : Numeric */;
val* var1149 /* : Numeric */;
val* var1150 /* : GamnitSubtexture */;
val* var1151 /* : Texture */;
val* var1152 /* : Numeric */;
val* var1153 /* : Numeric */;
val* var1154 /* : Numeric */;
val* var1155 /* : Numeric */;
val* var1156 /* : GamnitSubtexture */;
val* var1157 /* : Texture */;
val* var1158 /* : Numeric */;
val* var1159 /* : Numeric */;
val* var1160 /* : Numeric */;
val* var1161 /* : Numeric */;
val* var1162 /* : GamnitSubtexture */;
val* var1163 /* : Texture */;
val* var1164 /* : Numeric */;
val* var1165 /* : Numeric */;
val* var1166 /* : Numeric */;
val* var1167 /* : Numeric */;
val* var1168 /* : GamnitSubtexture */;
val* var1169 /* : Texture */;
val* var1170 /* : Numeric */;
val* var1171 /* : Numeric */;
val* var1172 /* : Numeric */;
val* var1173 /* : Numeric */;
val* var1174 /* : GamnitSubtexture */;
val* var1175 /* : Texture */;
val* var1176 /* : Numeric */;
val* var1177 /* : Numeric */;
val* var1178 /* : Numeric */;
val* var1179 /* : Numeric */;
val* var1180 /* : GamnitSubtexture */;
val* var1181 /* : Texture */;
val* var1182 /* : Numeric */;
val* var1183 /* : Numeric */;
val* var1184 /* : Numeric */;
val* var1185 /* : Numeric */;
val* var1186 /* : GamnitSubtexture */;
val* var1187 /* : Texture */;
val* var1188 /* : Numeric */;
val* var1189 /* : Numeric */;
val* var1190 /* : Numeric */;
val* var1191 /* : Numeric */;
val* var1192 /* : GamnitSubtexture */;
val* var1193 /* : Texture */;
val* var1194 /* : Numeric */;
val* var1195 /* : Numeric */;
val* var1196 /* : Numeric */;
val* var1197 /* : Numeric */;
val* var1198 /* : GamnitSubtexture */;
val* var1199 /* : Texture */;
val* var1200 /* : Numeric */;
val* var1201 /* : Numeric */;
val* var1202 /* : Numeric */;
val* var1203 /* : Numeric */;
val* var1204 /* : GamnitSubtexture */;
val* var1205 /* : Texture */;
val* var1206 /* : Numeric */;
val* var1207 /* : Numeric */;
val* var1208 /* : Numeric */;
val* var1209 /* : Numeric */;
val* var1210 /* : GamnitSubtexture */;
val* var1211 /* : Texture */;
val* var1212 /* : Numeric */;
val* var1213 /* : Numeric */;
val* var1214 /* : Numeric */;
val* var1215 /* : Numeric */;
val* var1216 /* : GamnitSubtexture */;
val* var1217 /* : Texture */;
val* var1218 /* : Numeric */;
val* var1219 /* : Numeric */;
val* var1220 /* : Numeric */;
val* var1221 /* : Numeric */;
val* var1222 /* : GamnitSubtexture */;
val* var1223 /* : Texture */;
val* var1224 /* : Numeric */;
val* var1225 /* : Numeric */;
val* var1226 /* : Numeric */;
val* var1227 /* : Numeric */;
val* var1228 /* : GamnitSubtexture */;
val* var1229 /* : Texture */;
val* var1230 /* : Numeric */;
val* var1231 /* : Numeric */;
val* var1232 /* : Numeric */;
val* var1233 /* : Numeric */;
val* var1234 /* : GamnitSubtexture */;
val* var1235 /* : Texture */;
val* var1236 /* : Numeric */;
val* var1237 /* : Numeric */;
val* var1238 /* : Numeric */;
val* var1239 /* : Numeric */;
val* var1240 /* : GamnitSubtexture */;
val* var1241 /* : Texture */;
val* var1242 /* : Numeric */;
val* var1243 /* : Numeric */;
val* var1244 /* : Numeric */;
val* var1245 /* : Numeric */;
val* var1246 /* : GamnitSubtexture */;
val* var1247 /* : Texture */;
val* var1248 /* : Numeric */;
val* var1249 /* : Numeric */;
val* var1250 /* : Numeric */;
val* var1251 /* : Numeric */;
val* var1252 /* : GamnitSubtexture */;
val* var1253 /* : Texture */;
val* var1254 /* : Numeric */;
val* var1255 /* : Numeric */;
val* var1256 /* : Numeric */;
val* var1257 /* : Numeric */;
val* var1258 /* : GamnitSubtexture */;
val* var1259 /* : Texture */;
val* var1260 /* : Numeric */;
val* var1261 /* : Numeric */;
val* var1262 /* : Numeric */;
val* var1263 /* : Numeric */;
val* var1264 /* : GamnitSubtexture */;
val* var1265 /* : Texture */;
val* var1266 /* : Numeric */;
val* var1267 /* : Numeric */;
val* var1268 /* : Numeric */;
val* var1269 /* : Numeric */;
val* var1270 /* : GamnitSubtexture */;
val* var1271 /* : Texture */;
val* var1272 /* : Numeric */;
val* var1273 /* : Numeric */;
val* var1274 /* : Numeric */;
val* var1275 /* : Numeric */;
val* var1276 /* : GamnitSubtexture */;
val* var1277 /* : Texture */;
val* var1278 /* : Numeric */;
val* var1279 /* : Numeric */;
val* var1280 /* : Numeric */;
val* var1281 /* : Numeric */;
val* var1282 /* : GamnitSubtexture */;
val* var1283 /* : Texture */;
val* var1284 /* : Numeric */;
val* var1285 /* : Numeric */;
val* var1286 /* : Numeric */;
val* var1287 /* : Numeric */;
val* var1288 /* : GamnitSubtexture */;
val* var1289 /* : Texture */;
val* var1290 /* : Numeric */;
val* var1291 /* : Numeric */;
val* var1292 /* : Numeric */;
val* var1293 /* : Numeric */;
val* var1294 /* : GamnitSubtexture */;
val* var1295 /* : Texture */;
val* var1296 /* : Numeric */;
val* var1297 /* : Numeric */;
val* var1298 /* : Numeric */;
val* var1299 /* : Numeric */;
val* var1300 /* : GamnitSubtexture */;
val* var1301 /* : Texture */;
val* var1302 /* : Numeric */;
val* var1303 /* : Numeric */;
val* var1304 /* : Numeric */;
val* var1305 /* : Numeric */;
val* var1306 /* : GamnitSubtexture */;
val* var1307 /* : Texture */;
val* var1308 /* : Numeric */;
val* var1309 /* : Numeric */;
val* var1310 /* : Numeric */;
val* var1311 /* : Numeric */;
val* var1312 /* : GamnitSubtexture */;
val* var1313 /* : Texture */;
val* var1314 /* : Numeric */;
val* var1315 /* : Numeric */;
val* var1316 /* : Numeric */;
val* var1317 /* : Numeric */;
val* var1318 /* : GamnitSubtexture */;
val* var1319 /* : Texture */;
val* var1320 /* : Numeric */;
val* var1321 /* : Numeric */;
val* var1322 /* : Numeric */;
val* var1323 /* : Numeric */;
val* var1324 /* : GamnitSubtexture */;
val* var1325 /* : Texture */;
val* var1326 /* : Numeric */;
val* var1327 /* : Numeric */;
val* var1328 /* : Numeric */;
val* var1329 /* : Numeric */;
val* var1330 /* : GamnitSubtexture */;
val* var1331 /* : Texture */;
val* var1332 /* : Numeric */;
val* var1333 /* : Numeric */;
val* var1334 /* : Numeric */;
val* var1335 /* : Numeric */;
val* var1336 /* : GamnitSubtexture */;
val* var1337 /* : Texture */;
val* var1338 /* : Numeric */;
val* var1339 /* : Numeric */;
val* var1340 /* : Numeric */;
val* var1341 /* : Numeric */;
val* var1342 /* : GamnitSubtexture */;
val* var1343 /* : Texture */;
val* var1344 /* : Numeric */;
val* var1345 /* : Numeric */;
val* var1346 /* : Numeric */;
val* var1347 /* : Numeric */;
val* var1348 /* : GamnitSubtexture */;
val* var1349 /* : Texture */;
val* var1350 /* : Numeric */;
val* var1351 /* : Numeric */;
val* var1352 /* : Numeric */;
val* var1353 /* : Numeric */;
val* var1354 /* : GamnitSubtexture */;
val* var1355 /* : Texture */;
val* var1356 /* : Numeric */;
val* var1357 /* : Numeric */;
val* var1358 /* : Numeric */;
val* var1359 /* : Numeric */;
val* var1360 /* : GamnitSubtexture */;
val* var1361 /* : Texture */;
val* var1362 /* : Numeric */;
val* var1363 /* : Numeric */;
val* var1364 /* : Numeric */;
val* var1365 /* : Numeric */;
val* var1366 /* : GamnitSubtexture */;
val* var1367 /* : Texture */;
val* var1368 /* : Numeric */;
val* var1369 /* : Numeric */;
val* var1370 /* : Numeric */;
val* var1371 /* : Numeric */;
val* var1372 /* : GamnitSubtexture */;
val* var1373 /* : Texture */;
val* var1374 /* : Numeric */;
val* var1375 /* : Numeric */;
val* var1376 /* : Numeric */;
val* var1377 /* : Numeric */;
val* var1378 /* : GamnitSubtexture */;
val* var1379 /* : Texture */;
val* var1380 /* : Numeric */;
val* var1381 /* : Numeric */;
val* var1382 /* : Numeric */;
val* var1383 /* : Numeric */;
val* var1384 /* : GamnitSubtexture */;
val* var1385 /* : Texture */;
val* var1386 /* : Numeric */;
val* var1387 /* : Numeric */;
val* var1388 /* : Numeric */;
val* var1389 /* : Numeric */;
val* var1390 /* : GamnitSubtexture */;
val* var1391 /* : Texture */;
val* var1392 /* : Numeric */;
val* var1393 /* : Numeric */;
val* var1394 /* : Numeric */;
val* var1395 /* : Numeric */;
val* var1396 /* : GamnitSubtexture */;
val* var1397 /* : Texture */;
val* var1398 /* : Numeric */;
val* var1399 /* : Numeric */;
val* var1400 /* : Numeric */;
val* var1401 /* : Numeric */;
val* var1402 /* : GamnitSubtexture */;
val* var1403 /* : Texture */;
val* var1404 /* : Numeric */;
val* var1405 /* : Numeric */;
val* var1406 /* : Numeric */;
val* var1407 /* : Numeric */;
val* var1408 /* : GamnitSubtexture */;
val* var1409 /* : Texture */;
val* var1410 /* : Numeric */;
val* var1411 /* : Numeric */;
val* var1412 /* : Numeric */;
val* var1413 /* : Numeric */;
val* var1414 /* : GamnitSubtexture */;
val* var1415 /* : Texture */;
val* var1416 /* : Numeric */;
val* var1417 /* : Numeric */;
val* var1418 /* : Numeric */;
val* var1419 /* : Numeric */;
val* var1420 /* : GamnitSubtexture */;
val* var1421 /* : Texture */;
val* var1422 /* : Numeric */;
val* var1423 /* : Numeric */;
val* var1424 /* : Numeric */;
val* var1425 /* : Numeric */;
val* var1426 /* : GamnitSubtexture */;
val* var1427 /* : Texture */;
val* var1428 /* : Numeric */;
val* var1429 /* : Numeric */;
val* var1430 /* : Numeric */;
val* var1431 /* : Numeric */;
val* var1432 /* : GamnitSubtexture */;
val* var1433 /* : Texture */;
val* var1434 /* : Numeric */;
val* var1435 /* : Numeric */;
val* var1436 /* : Numeric */;
val* var1437 /* : Numeric */;
val* var1438 /* : GamnitSubtexture */;
val* var1439 /* : Texture */;
val* var1440 /* : Numeric */;
val* var1441 /* : Numeric */;
val* var1442 /* : Numeric */;
val* var1443 /* : Numeric */;
val* var1444 /* : GamnitSubtexture */;
val* var1445 /* : Texture */;
val* var1446 /* : Numeric */;
val* var1447 /* : Numeric */;
val* var1448 /* : Numeric */;
val* var1449 /* : Numeric */;
val* var1450 /* : GamnitSubtexture */;
val* var1451 /* : Texture */;
val* var1452 /* : Numeric */;
val* var1453 /* : Numeric */;
val* var1454 /* : Numeric */;
val* var1455 /* : Numeric */;
val* var1456 /* : GamnitSubtexture */;
val* var1457 /* : Texture */;
val* var1458 /* : Numeric */;
val* var1459 /* : Numeric */;
val* var1460 /* : Numeric */;
val* var1461 /* : Numeric */;
val* var1462 /* : GamnitSubtexture */;
val* var1463 /* : Texture */;
val* var1464 /* : Numeric */;
val* var1465 /* : Numeric */;
val* var1466 /* : Numeric */;
val* var1467 /* : Numeric */;
val* var1468 /* : GamnitSubtexture */;
val* var1469 /* : Texture */;
val* var1470 /* : Numeric */;
val* var1471 /* : Numeric */;
val* var1472 /* : Numeric */;
val* var1473 /* : Numeric */;
val* var1474 /* : GamnitSubtexture */;
val* var1475 /* : Texture */;
val* var1476 /* : Numeric */;
val* var1477 /* : Numeric */;
val* var1478 /* : Numeric */;
val* var1479 /* : Numeric */;
val* var1480 /* : GamnitSubtexture */;
val* var1481 /* : Texture */;
val* var1482 /* : Numeric */;
val* var1483 /* : Numeric */;
val* var1484 /* : Numeric */;
val* var1485 /* : Numeric */;
val* var1486 /* : GamnitSubtexture */;
val* var1487 /* : Texture */;
val* var1488 /* : Numeric */;
val* var1489 /* : Numeric */;
val* var1490 /* : Numeric */;
val* var1491 /* : Numeric */;
val* var1492 /* : GamnitSubtexture */;
val* var1493 /* : Texture */;
val* var1494 /* : Numeric */;
val* var1495 /* : Numeric */;
val* var1496 /* : Numeric */;
val* var1497 /* : Numeric */;
val* var1498 /* : GamnitSubtexture */;
val* var1499 /* : Texture */;
val* var1500 /* : Numeric */;
val* var1501 /* : Numeric */;
val* var1502 /* : Numeric */;
val* var1503 /* : Numeric */;
val* var1504 /* : GamnitSubtexture */;
val* var1505 /* : Texture */;
val* var1506 /* : Numeric */;
val* var1507 /* : Numeric */;
val* var1508 /* : Numeric */;
val* var1509 /* : Numeric */;
val* var1510 /* : GamnitSubtexture */;
val* var1511 /* : Texture */;
val* var1512 /* : Numeric */;
val* var1513 /* : Numeric */;
val* var1514 /* : Numeric */;
val* var1515 /* : Numeric */;
val* var1516 /* : GamnitSubtexture */;
val* var1517 /* : Texture */;
val* var1518 /* : Numeric */;
val* var1519 /* : Numeric */;
val* var1520 /* : Numeric */;
val* var1521 /* : Numeric */;
val* var1522 /* : GamnitSubtexture */;
val* var1523 /* : Texture */;
val* var1524 /* : Numeric */;
val* var1525 /* : Numeric */;
val* var1526 /* : Numeric */;
val* var1527 /* : Numeric */;
val* var1528 /* : GamnitSubtexture */;
val* var1529 /* : Texture */;
val* var1530 /* : Numeric */;
val* var1531 /* : Numeric */;
val* var1532 /* : Numeric */;
val* var1533 /* : Numeric */;
val* var1534 /* : GamnitSubtexture */;
val* var1535 /* : Texture */;
val* var1536 /* : Numeric */;
val* var1537 /* : Numeric */;
val* var1538 /* : Numeric */;
val* var1539 /* : Numeric */;
val* var1540 /* : GamnitSubtexture */;
val* var1541 /* : Texture */;
val* var1542 /* : Numeric */;
val* var1543 /* : Numeric */;
val* var1544 /* : Numeric */;
val* var1545 /* : Numeric */;
val* var1546 /* : GamnitSubtexture */;
val* var1547 /* : Texture */;
val* var1548 /* : Numeric */;
val* var1549 /* : Numeric */;
val* var1550 /* : Numeric */;
val* var1551 /* : Numeric */;
val* var1552 /* : GamnitSubtexture */;
val* var1553 /* : Texture */;
val* var1554 /* : Numeric */;
val* var1555 /* : Numeric */;
val* var1556 /* : Numeric */;
val* var1557 /* : Numeric */;
val* var1558 /* : GamnitSubtexture */;
val* var1559 /* : Texture */;
val* var1560 /* : Numeric */;
val* var1561 /* : Numeric */;
val* var1562 /* : Numeric */;
val* var1563 /* : Numeric */;
val* var1564 /* : GamnitSubtexture */;
val* var1565 /* : Texture */;
val* var1566 /* : Numeric */;
val* var1567 /* : Numeric */;
val* var1568 /* : Numeric */;
val* var1569 /* : Numeric */;
val* var1570 /* : GamnitSubtexture */;
val* var1571 /* : Texture */;
val* var1572 /* : Numeric */;
val* var1573 /* : Numeric */;
val* var1574 /* : Numeric */;
val* var1575 /* : Numeric */;
val* var1576 /* : GamnitSubtexture */;
val* var1577 /* : Texture */;
val* var1578 /* : Numeric */;
val* var1579 /* : Numeric */;
val* var1580 /* : Numeric */;
val* var1581 /* : Numeric */;
val* var1582 /* : GamnitSubtexture */;
val* var1583 /* : Texture */;
val* var1584 /* : Numeric */;
val* var1585 /* : Numeric */;
val* var1586 /* : Numeric */;
val* var1587 /* : Numeric */;
val* var1588 /* : GamnitSubtexture */;
val* var1589 /* : Texture */;
val* var1590 /* : Numeric */;
val* var1591 /* : Numeric */;
val* var1592 /* : Numeric */;
val* var1593 /* : Numeric */;
val* var1594 /* : GamnitSubtexture */;
val* var1595 /* : Texture */;
val* var1596 /* : Numeric */;
val* var1597 /* : Numeric */;
val* var1598 /* : Numeric */;
val* var1599 /* : Numeric */;
val* var1600 /* : GamnitSubtexture */;
val* var1601 /* : Texture */;
val* var1602 /* : Numeric */;
val* var1603 /* : Numeric */;
val* var1604 /* : Numeric */;
val* var1605 /* : Numeric */;
val* var1606 /* : GamnitSubtexture */;
val* var1607 /* : Texture */;
val* var1608 /* : Numeric */;
val* var1609 /* : Numeric */;
val* var1610 /* : Numeric */;
val* var1611 /* : Numeric */;
val* var1612 /* : GamnitSubtexture */;
val* var1613 /* : Texture */;
val* var1614 /* : Numeric */;
val* var1615 /* : Numeric */;
val* var1616 /* : Numeric */;
val* var1617 /* : Numeric */;
val* var1618 /* : GamnitSubtexture */;
val* var1619 /* : Texture */;
val* var1620 /* : Numeric */;
val* var1621 /* : Numeric */;
val* var1622 /* : Numeric */;
val* var1623 /* : Numeric */;
val* var1624 /* : GamnitSubtexture */;
val* var1625 /* : Texture */;
val* var1626 /* : Numeric */;
val* var1627 /* : Numeric */;
val* var1628 /* : Numeric */;
val* var1629 /* : Numeric */;
val* var1630 /* : GamnitSubtexture */;
val* var1631 /* : Texture */;
val* var1632 /* : Numeric */;
val* var1633 /* : Numeric */;
val* var1634 /* : Numeric */;
val* var1635 /* : Numeric */;
val* var1636 /* : GamnitSubtexture */;
val* var1637 /* : Texture */;
val* var1638 /* : Numeric */;
val* var1639 /* : Numeric */;
val* var1640 /* : Numeric */;
val* var1641 /* : Numeric */;
val* var1642 /* : GamnitSubtexture */;
val* var1643 /* : Texture */;
val* var1644 /* : Numeric */;
val* var1645 /* : Numeric */;
val* var1646 /* : Numeric */;
val* var1647 /* : Numeric */;
val* var1648 /* : GamnitSubtexture */;
val* var1649 /* : Texture */;
val* var1650 /* : Numeric */;
val* var1651 /* : Numeric */;
val* var1652 /* : Numeric */;
val* var1653 /* : Numeric */;
val* var1654 /* : GamnitSubtexture */;
val* var1655 /* : Texture */;
val* var1656 /* : Numeric */;
val* var1657 /* : Numeric */;
val* var1658 /* : Numeric */;
val* var1659 /* : Numeric */;
val* var1660 /* : GamnitSubtexture */;
val* var1661 /* : Texture */;
val* var1662 /* : Numeric */;
val* var1663 /* : Numeric */;
val* var1664 /* : Numeric */;
val* var1665 /* : Numeric */;
val* var1666 /* : GamnitSubtexture */;
val* var1667 /* : Texture */;
val* var1668 /* : Numeric */;
val* var1669 /* : Numeric */;
val* var1670 /* : Numeric */;
val* var1671 /* : Numeric */;
val* var1672 /* : GamnitSubtexture */;
val* var1673 /* : Texture */;
val* var1674 /* : Numeric */;
val* var1675 /* : Numeric */;
val* var1676 /* : Numeric */;
val* var1677 /* : Numeric */;
val* var1678 /* : GamnitSubtexture */;
val* var1679 /* : Texture */;
val* var1680 /* : Numeric */;
val* var1681 /* : Numeric */;
val* var1682 /* : Numeric */;
val* var1683 /* : Numeric */;
val* var1684 /* : GamnitSubtexture */;
val* var1685 /* : Texture */;
val* var1686 /* : Numeric */;
val* var1687 /* : Numeric */;
val* var1688 /* : Numeric */;
val* var1689 /* : Numeric */;
val* var1690 /* : GamnitSubtexture */;
val* var1691 /* : Texture */;
val* var1692 /* : Numeric */;
val* var1693 /* : Numeric */;
val* var1694 /* : Numeric */;
val* var1695 /* : Numeric */;
val* var1696 /* : GamnitSubtexture */;
val* var1697 /* : Texture */;
val* var1698 /* : Numeric */;
val* var1699 /* : Numeric */;
val* var1700 /* : Numeric */;
val* var1701 /* : Numeric */;
val* var1702 /* : GamnitSubtexture */;
val* var1703 /* : Texture */;
val* var1704 /* : Numeric */;
val* var1705 /* : Numeric */;
val* var1706 /* : Numeric */;
val* var1707 /* : Numeric */;
val* var1708 /* : GamnitSubtexture */;
val* var1709 /* : Texture */;
val* var1710 /* : Numeric */;
val* var1711 /* : Numeric */;
val* var1712 /* : Numeric */;
val* var1713 /* : Numeric */;
val* var1714 /* : GamnitSubtexture */;
val* var1715 /* : Texture */;
val* var1716 /* : Numeric */;
val* var1717 /* : Numeric */;
val* var1718 /* : Numeric */;
val* var1719 /* : Numeric */;
val* var1720 /* : GamnitSubtexture */;
val* var1721 /* : Texture */;
val* var1722 /* : Numeric */;
val* var1723 /* : Numeric */;
val* var1724 /* : Numeric */;
val* var1725 /* : Numeric */;
val* var1726 /* : GamnitSubtexture */;
val* var1727 /* : Texture */;
val* var1728 /* : Numeric */;
val* var1729 /* : Numeric */;
val* var1730 /* : Numeric */;
val* var1731 /* : Numeric */;
val* var1732 /* : GamnitSubtexture */;
val* var1733 /* : Texture */;
val* var1734 /* : Numeric */;
val* var1735 /* : Numeric */;
val* var1736 /* : Numeric */;
val* var1737 /* : Numeric */;
val* var1738 /* : GamnitSubtexture */;
val* var1739 /* : Texture */;
val* var1740 /* : Numeric */;
val* var1741 /* : Numeric */;
val* var1742 /* : Numeric */;
val* var1743 /* : Numeric */;
val* var1744 /* : GamnitSubtexture */;
val* var1745 /* : Texture */;
val* var1746 /* : Numeric */;
val* var1747 /* : Numeric */;
val* var1748 /* : Numeric */;
val* var1749 /* : Numeric */;
val* var1750 /* : GamnitSubtexture */;
val* var1751 /* : Texture */;
val* var1752 /* : Numeric */;
val* var1753 /* : Numeric */;
val* var1754 /* : Numeric */;
val* var1755 /* : Numeric */;
val* var1756 /* : GamnitSubtexture */;
val* var1757 /* : Texture */;
val* var1758 /* : Numeric */;
val* var1759 /* : Numeric */;
val* var1760 /* : Numeric */;
val* var1761 /* : Numeric */;
val* var1762 /* : GamnitSubtexture */;
val* var1763 /* : Texture */;
val* var1764 /* : Numeric */;
val* var1765 /* : Numeric */;
val* var1766 /* : Numeric */;
val* var1767 /* : Numeric */;
val* var1768 /* : GamnitSubtexture */;
self = nit_alloc(sizeof(struct instance) + 295*sizeof(nitattribute_t));
self->type = type;
self->class = &class_physique__Spritesheet;
var = NEW_gamnit__Texture(&type_gamnit__Texture);
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "images/sheet.png";
var3 = core__flat___NativeString___to_s_full(var2, 16l, 16l);
var1 = var3;
varonce = var1;
}
{
var4 = ((val*(*)(val* self, val* p0))(var->class->vft[COLOR_gamnit__textures__Texture__new]))(var, var1); /* new on <var:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___root_texture].val = var4; /* _root_texture on <self:Spritesheet exact> */
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var6 = (val*)(143l<<2|1);
var7 = (val*)(377l<<2|1);
var8 = (val*)(43l<<2|1);
var9 = (val*)(31l<<2|1);
var10 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var5->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var5, var6, var7, var8, var9); /* subtexture on <var5:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___beam0].val = var10; /* _beam0 on <self:Spritesheet exact> */
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var12 = (val*)(327l<<2|1);
var13 = (val*)(644l<<2|1);
var14 = (val*)(40l<<2|1);
var15 = (val*)(20l<<2|1);
var16 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var11->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var11, var12, var13, var14, var15); /* subtexture on <var11:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___beam1].val = var16; /* _beam1 on <self:Spritesheet exact> */
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var18 = (val*)(262l<<2|1);
var19 = (val*)(907l<<2|1);
var20 = (val*)(38l<<2|1);
var21 = (val*)(31l<<2|1);
var22 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var17->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var17, var18, var19, var20, var21); /* subtexture on <var17:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___beam2].val = var22; /* _beam2 on <self:Spritesheet exact> */
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var24 = (val*)(396l<<2|1);
var25 = (val*)(384l<<2|1);
var26 = (val*)(29l<<2|1);
var27 = (val*)(29l<<2|1);
var28 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var23->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var23, var24, var25, var26, var27); /* subtexture on <var23:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___beam3].val = var28; /* _beam3 on <self:Spritesheet exact> */
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var30 = (val*)(177l<<2|1);
var31 = (val*)(496l<<2|1);
var32 = (val*)(41l<<2|1);
var33 = (val*)(17l<<2|1);
var34 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var29->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var29, var30, var31, var32, var33); /* subtexture on <var29:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___beam4].val = var34; /* _beam4 on <self:Spritesheet exact> */
{
var35 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var36 = (val*)(186l<<2|1);
var37 = (val*)(377l<<2|1);
var38 = (val*)(40l<<2|1);
var39 = (val*)(25l<<2|1);
var40 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var35->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var35, var36, var37, var38, var39); /* subtexture on <var35:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___beam5].val = var40; /* _beam5 on <self:Spritesheet exact> */
{
var41 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var42 = (val*)(120l<<2|1);
var43 = (val*)(688l<<2|1);
var44 = (val*)(43l<<2|1);
var45 = (val*)(23l<<2|1);
var46 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var41->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var41, var42, var43, var44, var45); /* subtexture on <var41:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___beam6].val = var46; /* _beam6 on <self:Spritesheet exact> */
{
var47 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var48 = (val*)(828l<<2|1);
var49 = (val*)(943l<<2|1);
var50 = (val*)(15l<<2|1);
var51 = (val*)(67l<<2|1);
var52 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var47->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var47, var48, var49, var50, var51); /* subtexture on <var47:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___beam_long1].val = var52; /* _beam_long1 on <self:Spritesheet exact> */
{
var53 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var54 = (val*)(307l<<2|1);
var55 = (val*)(309l<<2|1);
var56 = (val*)(25l<<2|1);
var57 = (val*)(64l<<2|1);
var58 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var53->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var53, var54, var55, var56, var57); /* subtexture on <var53:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___beam_long2].val = var58; /* _beam_long2 on <self:Spritesheet exact> */
{
var59 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var60 = (val*)(810l<<2|1);
var61 = (val*)(837l<<2|1);
var62 = (val*)(19l<<2|1);
var63 = (val*)(30l<<2|1);
var64 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var59->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var59, var60, var61, var62, var63); /* subtexture on <var59:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___bold_silver].val = var64; /* _bold_silver on <self:Spritesheet exact> */
{
var65 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var66 = (val*)(810l<<2|1);
var67 = (val*)(467l<<2|1);
var68 = (val*)(19l<<2|1);
var69 = (val*)(30l<<2|1);
var70 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var65->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var65, var66, var67, var68, var69); /* subtexture on <var65:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___bolt_bronze].val = var70; /* _bolt_bronze on <self:Spritesheet exact> */
{
var71 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var72 = (val*)(809l<<2|1);
var73 = (val*)(437l<<2|1);
var74 = (val*)(19l<<2|1);
var75 = (val*)(30l<<2|1);
var76 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var71->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var71, var72, var73, var74, var75); /* subtexture on <var71:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___bolt_gold].val = var76; /* _bolt_gold on <self:Spritesheet exact> */
{
var77 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var78 = (val*)(0l<<2|1);
var79 = (val*)(78l<<2|1);
var80 = (val*)(222l<<2|1);
var81 = (val*)(39l<<2|1);
var82 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var77->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var77, var78, var79, var80, var81); /* subtexture on <var77:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___button_blue].val = var82; /* _button_blue on <self:Spritesheet exact> */
{
var83 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var84 = (val*)(0l<<2|1);
var85 = (val*)(117l<<2|1);
var86 = (val*)(222l<<2|1);
var87 = (val*)(39l<<2|1);
var88 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var83->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var83, var84, var85, var86, var87); /* subtexture on <var83:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___button_green].val = var88; /* _button_green on <self:Spritesheet exact> */
{
var89 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var90 = (val*)(0l<<2|1);
var91 = (val*)(0l<<2|1);
var92 = (val*)(222l<<2|1);
var93 = (val*)(39l<<2|1);
var94 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var89->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var89, var90, var91, var92, var93); /* subtexture on <var89:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___button_red].val = var94; /* _button_red on <self:Spritesheet exact> */
{
var95 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var96 = (val*)(0l<<2|1);
var97 = (val*)(39l<<2|1);
var98 = (val*)(222l<<2|1);
var99 = (val*)(39l<<2|1);
var100 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var95->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var95, var96, var97, var98, var99); /* subtexture on <var95:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___button_yellow].val = var100; /* _button_yellow on <self:Spritesheet exact> */
{
var101 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var102 = (val*)(586l<<2|1);
var103 = (val*)(0l<<2|1);
var104 = (val*)(51l<<2|1);
var105 = (val*)(75l<<2|1);
var106 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var101->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var101, var102, var103, var104, var105); /* subtexture on <var101:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_blue_95d0].val = var106; /* _cockpit_blue_0 on <self:Spritesheet exact> */
{
var107 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var108 = (val*)(736l<<2|1);
var109 = (val*)(862l<<2|1);
var110 = (val*)(40l<<2|1);
var111 = (val*)(40l<<2|1);
var112 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var107->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var107, var108, var109, var110, var111); /* subtexture on <var107:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_blue_95d1].val = var112; /* _cockpit_blue_1 on <self:Spritesheet exact> */
{
var113 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var114 = (val*)(684l<<2|1);
var115 = (val*)(67l<<2|1);
var116 = (val*)(42l<<2|1);
var117 = (val*)(56l<<2|1);
var118 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var113->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var113, var114, var115, var116, var117); /* subtexture on <var113:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_blue_95d2].val = var118; /* _cockpit_blue_2 on <self:Spritesheet exact> */
{
var119 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var120 = (val*)(336l<<2|1);
var121 = (val*)(384l<<2|1);
var122 = (val*)(60l<<2|1);
var123 = (val*)(61l<<2|1);
var124 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var119->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var119, var120, var121, var122, var123); /* subtexture on <var119:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_blue_95d3].val = var124; /* _cockpit_blue_3 on <self:Spritesheet exact> */
{
var125 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var126 = (val*)(637l<<2|1);
var127 = (val*)(0l<<2|1);
var128 = (val*)(47l<<2|1);
var129 = (val*)(67l<<2|1);
var130 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var125->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var125, var126, var127, var128, var129); /* subtexture on <var125:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_blue_95d4].val = var130; /* _cockpit_blue_4 on <self:Spritesheet exact> */
{
var131 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var132 = (val*)(627l<<2|1);
var133 = (val*)(144l<<2|1);
var134 = (val*)(48l<<2|1);
var135 = (val*)(75l<<2|1);
var136 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var131->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var131, var132, var133, var134, var135); /* subtexture on <var131:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_blue_95d5].val = var136; /* _cockpit_blue_5 on <self:Spritesheet exact> */
{
var137 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var138 = (val*)(684l<<2|1);
var139 = (val*)(0l<<2|1);
var140 = (val*)(42l<<2|1);
var141 = (val*)(67l<<2|1);
var142 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var137->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var137, var138, var139, var140, var141); /* subtexture on <var137:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_blue_95d6].val = var142; /* _cockpit_blue_6 on <self:Spritesheet exact> */
{
var143 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var144 = (val*)(737l<<2|1);
var145 = (val*)(542l<<2|1);
var146 = (val*)(41l<<2|1);
var147 = (val*)(71l<<2|1);
var148 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var143->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var143, var144, var145, var146, var147); /* subtexture on <var143:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_blue_95d7].val = var148; /* _cockpit_blue_7 on <self:Spritesheet exact> */
{
var149 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var150 = (val*)(576l<<2|1);
var151 = (val*)(225l<<2|1);
var152 = (val*)(51l<<2|1);
var153 = (val*)(75l<<2|1);
var154 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var149->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var149, var150, var151, var152, var153); /* subtexture on <var149:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_green_95d0].val = var154; /* _cockpit_green_0 on <self:Spritesheet exact> */
{
var155 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var156 = (val*)(734l<<2|1);
var157 = (val*)(977l<<2|1);
var158 = (val*)(40l<<2|1);
var159 = (val*)(40l<<2|1);
var160 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var155->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var155, var156, var157, var158, var159); /* subtexture on <var155:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_green_95d1].val = var160; /* _cockpit_green_1 on <self:Spritesheet exact> */
{
var161 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var162 = (val*)(696l<<2|1);
var163 = (val*)(659l<<2|1);
var164 = (val*)(42l<<2|1);
var165 = (val*)(56l<<2|1);
var166 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var161->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var161, var162, var163, var164, var165); /* subtexture on <var161:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_green_95d2].val = var166; /* _cockpit_green_2 on <self:Spritesheet exact> */
{
var167 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var168 = (val*)(346l<<2|1);
var169 = (val*)(234l<<2|1);
var170 = (val*)(60l<<2|1);
var171 = (val*)(61l<<2|1);
var172 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var167->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var167, var168, var169, var170, var171); /* subtexture on <var167:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_green_95d3].val = var172; /* _cockpit_green_3 on <self:Spritesheet exact> */
{
var173 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var174 = (val*)(627l<<2|1);
var175 = (val*)(219l<<2|1);
var176 = (val*)(47l<<2|1);
var177 = (val*)(67l<<2|1);
var178 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var173->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var173, var174, var175, var176, var177); /* subtexture on <var173:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_green_95d4].val = var178; /* _cockpit_green_4 on <self:Spritesheet exact> */
{
var179 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var180 = (val*)(694l<<2|1);
var181 = (val*)(364l<<2|1);
var182 = (val*)(42l<<2|1);
var183 = (val*)(67l<<2|1);
var184 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var179->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var179, var180, var181, var182, var183); /* subtexture on <var179:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_green_95d5].val = var184; /* _cockpit_green_5 on <self:Spritesheet exact> */
{
var185 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var186 = (val*)(737l<<2|1);
var187 = (val*)(471l<<2|1);
var188 = (val*)(41l<<2|1);
var189 = (val*)(71l<<2|1);
var190 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var185->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var185, var186, var187, var188, var189); /* subtexture on <var185:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_green_95d6].val = var190; /* _cockpit_green_6 on <self:Spritesheet exact> */
{
var191 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var192 = (val*)(602l<<2|1);
var193 = (val*)(525l<<2|1);
var194 = (val*)(48l<<2|1);
var195 = (val*)(75l<<2|1);
var196 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var191->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var191, var192, var193, var194, var195); /* subtexture on <var191:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_green_95d7].val = var196; /* _cockpit_green_7 on <self:Spritesheet exact> */
{
var197 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var198 = (val*)(535l<<2|1);
var199 = (val*)(75l<<2|1);
var200 = (val*)(51l<<2|1);
var201 = (val*)(75l<<2|1);
var202 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var197->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var197, var198, var199, var200, var201); /* subtexture on <var197:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_red_95d0].val = var202; /* _cockpit_red_0 on <self:Spritesheet exact> */
{
var203 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var204 = (val*)(351l<<2|1);
var205 = (val*)(982l<<2|1);
var206 = (val*)(40l<<2|1);
var207 = (val*)(40l<<2|1);
var208 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var203->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var203, var204, var205, var206, var207); /* subtexture on <var203:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_red_95d1].val = var208; /* _cockpit_red_1 on <self:Spritesheet exact> */
{
var209 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var210 = (val*)(718l<<2|1);
var211 = (val*)(197l<<2|1);
var212 = (val*)(42l<<2|1);
var213 = (val*)(56l<<2|1);
var214 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var209->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var209, var210, var211, var212, var213); /* subtexture on <var209:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_red_95d2].val = var214; /* _cockpit_red_2 on <self:Spritesheet exact> */
{
var215 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var216 = (val*)(520l<<2|1);
var217 = (val*)(661l<<2|1);
var218 = (val*)(60l<<2|1);
var219 = (val*)(61l<<2|1);
var220 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var215->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var215, var216, var217, var218, var219); /* subtexture on <var215:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_red_95d3].val = var220; /* _cockpit_red_3 on <self:Spritesheet exact> */
{
var221 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var222 = (val*)(647l<<2|1);
var223 = (val*)(857l<<2|1);
var224 = (val*)(47l<<2|1);
var225 = (val*)(67l<<2|1);
var226 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var221->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var221, var222, var223, var224, var225); /* subtexture on <var221:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_red_95d4].val = var226; /* _cockpit_red_4 on <self:Spritesheet exact> */
{
var227 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var228 = (val*)(605l<<2|1);
var229 = (val*)(707l<<2|1);
var230 = (val*)(48l<<2|1);
var231 = (val*)(75l<<2|1);
var232 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var227->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var227, var228, var229, var230, var231); /* subtexture on <var227:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_red_95d5].val = var232; /* _cockpit_red_5 on <self:Spritesheet exact> */
{
var233 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var234 = (val*)(736l<<2|1);
var235 = (val*)(795l<<2|1);
var236 = (val*)(42l<<2|1);
var237 = (val*)(67l<<2|1);
var238 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var233->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var233, var234, var235, var236, var237); /* subtexture on <var233:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_red_95d6].val = var238; /* _cockpit_red_6 on <self:Spritesheet exact> */
{
var239 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var240 = (val*)(736l<<2|1);
var241 = (val*)(329l<<2|1);
var242 = (val*)(41l<<2|1);
var243 = (val*)(71l<<2|1);
var244 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var239->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var239, var240, var241, var242, var243); /* subtexture on <var239:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_red_95d7].val = var244; /* _cockpit_red_7 on <self:Spritesheet exact> */
{
var245 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var246 = (val*)(726l<<2|1);
var247 = (val*)(80l<<2|1);
var248 = (val*)(40l<<2|1);
var249 = (val*)(40l<<2|1);
var250 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var245->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var245, var246, var247, var248, var249); /* subtexture on <var245:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_yellow_95d0].val = var250; /* _cockpit_yellow_0 on <self:Spritesheet exact> */
{
var251 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var252 = (val*)(247l<<2|1);
var253 = (val*)(309l<<2|1);
var254 = (val*)(60l<<2|1);
var255 = (val*)(61l<<2|1);
var256 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var251->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var251, var252, var253, var254, var255); /* subtexture on <var251:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_yellow_95d1].val = var256; /* _cockpit_yellow_1 on <self:Spritesheet exact> */
{
var257 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var258 = (val*)(637l<<2|1);
var259 = (val*)(67l<<2|1);
var260 = (val*)(47l<<2|1);
var261 = (val*)(67l<<2|1);
var262 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var257->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var257, var258, var259, var260, var261); /* subtexture on <var257:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_yellow_95d2].val = var262; /* _cockpit_yellow_2 on <self:Spritesheet exact> */
{
var263 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var264 = (val*)(607l<<2|1);
var265 = (val*)(782l<<2|1);
var266 = (val*)(48l<<2|1);
var267 = (val*)(75l<<2|1);
var268 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var263->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var263, var264, var265, var266, var267); /* subtexture on <var263:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_yellow_95d3].val = var268; /* _cockpit_yellow_3 on <self:Spritesheet exact> */
{
var269 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var270 = (val*)(696l<<2|1);
var271 = (val*)(262l<<2|1);
var272 = (val*)(42l<<2|1);
var273 = (val*)(67l<<2|1);
var274 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var269->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var269, var270, var271, var272, var273); /* subtexture on <var269:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_yellow_95d4].val = var274; /* _cockpit_yellow_4 on <self:Spritesheet exact> */
{
var275 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var276 = (val*)(736l<<2|1);
var277 = (val*)(400l<<2|1);
var278 = (val*)(41l<<2|1);
var279 = (val*)(71l<<2|1);
var280 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var275->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var275, var276, var277, var278, var279); /* subtexture on <var275:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_yellow_95d5].val = var280; /* _cockpit_yellow_5 on <self:Spritesheet exact> */
{
var281 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var282 = (val*)(734l<<2|1);
var283 = (val*)(921l<<2|1);
var284 = (val*)(42l<<2|1);
var285 = (val*)(56l<<2|1);
var286 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var281->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var281, var282, var283, var284, var285); /* subtexture on <var281:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_yellow_95d6].val = var286; /* _cockpit_yellow_6 on <self:Spritesheet exact> */
{
var287 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var288 = (val*)(600l<<2|1);
var289 = (val*)(375l<<2|1);
var290 = (val*)(51l<<2|1);
var291 = (val*)(75l<<2|1);
var292 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var287->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var287, var288, var289, var290, var291); /* subtexture on <var287:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cockpit_yellow_95d7].val = var292; /* _cockpit_yellow_7 on <self:Spritesheet exact> */
{
var293 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var294 = (val*)(797l<<2|1);
var295 = (val*)(173l<<2|1);
var296 = (val*)(30l<<2|1);
var297 = (val*)(33l<<2|1);
var298 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var293->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var293, var294, var295, var296, var297); /* subtexture on <var293:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___cursor].val = var298; /* _cursor on <self:Spritesheet exact> */
{
var299 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var300 = (val*)(423l<<2|1);
var301 = (val*)(728l<<2|1);
var302 = (val*)(93l<<2|1);
var303 = (val*)(84l<<2|1);
var304 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var299->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var299, var300, var301, var302, var303); /* subtexture on <var299:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_black1].val = var304; /* _enemy_black1 on <self:Spritesheet exact> */
{
var305 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var306 = (val*)(120l<<2|1);
var307 = (val*)(604l<<2|1);
var308 = (val*)(104l<<2|1);
var309 = (val*)(84l<<2|1);
var310 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var305->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var305, var306, var307, var308, var309); /* subtexture on <var305:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_black2].val = var310; /* _enemy_black2 on <self:Spritesheet exact> */
{
var311 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var312 = (val*)(144l<<2|1);
var313 = (val*)(156l<<2|1);
var314 = (val*)(103l<<2|1);
var315 = (val*)(84l<<2|1);
var316 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var311->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var311, var312, var313, var314, var315); /* subtexture on <var311:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_black3].val = var316; /* _enemy_black3 on <self:Spritesheet exact> */
{
var317 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var318 = (val*)(518l<<2|1);
var319 = (val*)(325l<<2|1);
var320 = (val*)(82l<<2|1);
var321 = (val*)(84l<<2|1);
var322 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var317->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var317, var318, var319, var320, var321); /* subtexture on <var317:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_black4].val = var322; /* _enemy_black4 on <self:Spritesheet exact> */
{
var323 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var324 = (val*)(346l<<2|1);
var325 = (val*)(150l<<2|1);
var326 = (val*)(97l<<2|1);
var327 = (val*)(84l<<2|1);
var328 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var323->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var323, var324, var325, var326, var327); /* subtexture on <var323:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_black5].val = var328; /* _enemy_black5 on <self:Spritesheet exact> */
{
var329 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var330 = (val*)(425l<<2|1);
var331 = (val*)(468l<<2|1);
var332 = (val*)(93l<<2|1);
var333 = (val*)(84l<<2|1);
var334 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var329->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var329, var330, var331, var332, var333); /* subtexture on <var329:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_blue1].val = var334; /* _enemy_blue1 on <self:Spritesheet exact> */
{
var335 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var336 = (val*)(143l<<2|1);
var337 = (val*)(293l<<2|1);
var338 = (val*)(104l<<2|1);
var339 = (val*)(84l<<2|1);
var340 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var335->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var335, var336, var337, var338, var339); /* subtexture on <var335:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_blue2].val = var340; /* _enemy_blue2 on <self:Spritesheet exact> */
{
var341 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var342 = (val*)(222l<<2|1);
var343 = (val*)(0l<<2|1);
var344 = (val*)(103l<<2|1);
var345 = (val*)(84l<<2|1);
var346 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var341->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var341, var342, var343, var344, var345); /* subtexture on <var341:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_blue3].val = var346; /* _enemy_blue3 on <self:Spritesheet exact> */
{
var347 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var348 = (val*)(518l<<2|1);
var349 = (val*)(409l<<2|1);
var350 = (val*)(82l<<2|1);
var351 = (val*)(84l<<2|1);
var352 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var347->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var347, var348, var349, var350, var351); /* subtexture on <var347:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_blue4].val = var352; /* _enemy_blue4 on <self:Spritesheet exact> */
{
var353 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var354 = (val*)(421l<<2|1);
var355 = (val*)(814l<<2|1);
var356 = (val*)(97l<<2|1);
var357 = (val*)(84l<<2|1);
var358 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var353->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var353, var354, var355, var356, var357); /* subtexture on <var353:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_blue5].val = var358; /* _enemy_blue5 on <self:Spritesheet exact> */
{
var359 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var360 = (val*)(425l<<2|1);
var361 = (val*)(552l<<2|1);
var362 = (val*)(93l<<2|1);
var363 = (val*)(84l<<2|1);
var364 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var359->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var359, var360, var361, var362, var363); /* subtexture on <var359:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_green1].val = var364; /* _enemy_green1 on <self:Spritesheet exact> */
{
var365 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var366 = (val*)(133l<<2|1);
var367 = (val*)(412l<<2|1);
var368 = (val*)(104l<<2|1);
var369 = (val*)(84l<<2|1);
var370 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var365->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var365, var366, var367, var368, var369); /* subtexture on <var365:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_green2].val = var370; /* _enemy_green2 on <self:Spritesheet exact> */
{
var371 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var372 = (val*)(224l<<2|1);
var373 = (val*)(496l<<2|1);
var374 = (val*)(103l<<2|1);
var375 = (val*)(84l<<2|1);
var376 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var371->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var371, var372, var373, var374, var375); /* subtexture on <var371:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_green3].val = var376; /* _enemy_green3 on <self:Spritesheet exact> */
{
var377 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var378 = (val*)(518l<<2|1);
var379 = (val*)(493l<<2|1);
var380 = (val*)(82l<<2|1);
var381 = (val*)(84l<<2|1);
var382 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var377->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var377, var378, var379, var380, var381); /* subtexture on <var377:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_green4].val = var382; /* _enemy_green4 on <self:Spritesheet exact> */
{
var383 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var384 = (val*)(408l<<2|1);
var385 = (val*)(907l<<2|1);
var386 = (val*)(97l<<2|1);
var387 = (val*)(84l<<2|1);
var388 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var383->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var383, var384, var385, var386, var387); /* subtexture on <var383:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_green5].val = var388; /* _enemy_green5 on <self:Spritesheet exact> */
{
var389 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var390 = (val*)(425l<<2|1);
var391 = (val*)(384l<<2|1);
var392 = (val*)(93l<<2|1);
var393 = (val*)(84l<<2|1);
var394 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var389->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var389, var390, var391, var392, var393); /* subtexture on <var389:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_red1].val = var394; /* _enemy_red1 on <self:Spritesheet exact> */
{
var395 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var396 = (val*)(120l<<2|1);
var397 = (val*)(520l<<2|1);
var398 = (val*)(104l<<2|1);
var399 = (val*)(84l<<2|1);
var400 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var395->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var395, var396, var397, var398, var399); /* subtexture on <var395:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_red2].val = var400; /* _enemy_red2 on <self:Spritesheet exact> */
{
var401 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var402 = (val*)(224l<<2|1);
var403 = (val*)(580l<<2|1);
var404 = (val*)(103l<<2|1);
var405 = (val*)(84l<<2|1);
var406 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var401->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var401, var402, var403, var404, var405); /* subtexture on <var401:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_red3].val = var406; /* _enemy_red3 on <self:Spritesheet exact> */
{
var407 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var408 = (val*)(520l<<2|1);
var409 = (val*)(577l<<2|1);
var410 = (val*)(82l<<2|1);
var411 = (val*)(84l<<2|1);
var412 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var407->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var407, var408, var409, var410, var411); /* subtexture on <var407:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_red4].val = var412; /* _enemy_red4 on <self:Spritesheet exact> */
{
var413 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var414 = (val*)(423l<<2|1);
var415 = (val*)(644l<<2|1);
var416 = (val*)(97l<<2|1);
var417 = (val*)(84l<<2|1);
var418 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var413->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var413, var414, var415, var416, var417); /* subtexture on <var413:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___enemy_red5].val = var418; /* _enemy_red5 on <self:Spritesheet exact> */
{
var419 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var420 = (val*)(224l<<2|1);
var421 = (val*)(907l<<2|1);
var422 = (val*)(38l<<2|1);
var423 = (val*)(23l<<2|1);
var424 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var419->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var419, var420, var421, var422, var423); /* subtexture on <var419:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___engine1].val = var424; /* _engine1 on <self:Spritesheet exact> */
{
var425 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var426 = (val*)(163l<<2|1);
var427 = (val*)(688l<<2|1);
var428 = (val*)(42l<<2|1);
var429 = (val*)(28l<<2|1);
var430 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var425->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var425, var426, var427, var428, var429); /* subtexture on <var425:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___engine2].val = var430; /* _engine2 on <self:Spritesheet exact> */
{
var431 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var432 = (val*)(644l<<2|1);
var433 = (val*)(1002l<<2|1);
var434 = (val*)(27l<<2|1);
var435 = (val*)(22l<<2|1);
var436 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var431->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var431, var432, var433, var434, var435); /* subtexture on <var431:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___engine3].val = var436; /* _engine3 on <self:Spritesheet exact> */
{
var437 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var438 = (val*)(144l<<2|1);
var439 = (val*)(240l<<2|1);
var440 = (val*)(49l<<2|1);
var441 = (val*)(45l<<2|1);
var442 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var437->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var437, var438, var439, var440, var441); /* subtexture on <var437:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___engine4].val = var442; /* _engine4 on <self:Spritesheet exact> */
{
var443 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var444 = (val*)(133l<<2|1);
var445 = (val*)(496l<<2|1);
var446 = (val*)(44l<<2|1);
var447 = (val*)(24l<<2|1);
var448 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var443->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var443, var444, var445, var446, var447); /* subtexture on <var443:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___engine5].val = var448; /* _engine5 on <self:Spritesheet exact> */
{
var449 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var450 = (val*)(827l<<2|1);
var451 = (val*)(125l<<2|1);
var452 = (val*)(16l<<2|1);
var453 = (val*)(40l<<2|1);
var454 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var449->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var449, var450, var451, var452, var453); /* subtexture on <var449:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire00].val = var454; /* _fire00 on <self:Spritesheet exact> */
{
var455 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var456 = (val*)(828l<<2|1);
var457 = (val*)(206l<<2|1);
var458 = (val*)(14l<<2|1);
var459 = (val*)(31l<<2|1);
var460 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var455->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var455, var456, var457, var458, var459); /* subtexture on <var455:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire01].val = var460; /* _fire01 on <self:Spritesheet exact> */
{
var461 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var462 = (val*)(827l<<2|1);
var463 = (val*)(663l<<2|1);
var464 = (val*)(14l<<2|1);
var465 = (val*)(32l<<2|1);
var466 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var461->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var461, var462, var463, var464, var465); /* subtexture on <var461:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire02].val = var466; /* _fire02 on <self:Spritesheet exact> */
{
var467 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var468 = (val*)(829l<<2|1);
var469 = (val*)(437l<<2|1);
var470 = (val*)(14l<<2|1);
var471 = (val*)(34l<<2|1);
var472 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var467->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var467, var468, var469, var470, var471); /* subtexture on <var467:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire03].val = var472; /* _fire03 on <self:Spritesheet exact> */
{
var473 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var474 = (val*)(831l<<2|1);
var475 = (val*)(0l<<2|1);
var476 = (val*)(14l<<2|1);
var477 = (val*)(31l<<2|1);
var478 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var473->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var473, var474, var475, var476, var477); /* subtexture on <var473:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire04].val = var478; /* _fire04 on <self:Spritesheet exact> */
{
var479 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var480 = (val*)(834l<<2|1);
var481 = (val*)(299l<<2|1);
var482 = (val*)(14l<<2|1);
var483 = (val*)(31l<<2|1);
var484 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var479->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var479, var480, var481, var482, var483); /* subtexture on <var479:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire05].val = var484; /* _fire05 on <self:Spritesheet exact> */
{
var485 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var486 = (val*)(835l<<2|1);
var487 = (val*)(502l<<2|1);
var488 = (val*)(14l<<2|1);
var489 = (val*)(31l<<2|1);
var490 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var485->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var485, var486, var487, var488, var489); /* subtexture on <var485:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire06].val = var490; /* _fire06 on <self:Spritesheet exact> */
{
var491 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var492 = (val*)(835l<<2|1);
var493 = (val*)(330l<<2|1);
var494 = (val*)(14l<<2|1);
var495 = (val*)(31l<<2|1);
var496 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var491->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var491, var492, var493, var494, var495); /* subtexture on <var491:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire07].val = var496; /* _fire07 on <self:Spritesheet exact> */
{
var497 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var498 = (val*)(827l<<2|1);
var499 = (val*)(867l<<2|1);
var500 = (val*)(16l<<2|1);
var501 = (val*)(40l<<2|1);
var502 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var497->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var497, var498, var499, var500, var501); /* subtexture on <var497:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire08].val = var502; /* _fire08 on <self:Spritesheet exact> */
{
var503 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var504 = (val*)(811l<<2|1);
var505 = (val*)(663l<<2|1);
var506 = (val*)(16l<<2|1);
var507 = (val*)(40l<<2|1);
var508 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var503->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var503, var504, var505, var506, var507); /* subtexture on <var503:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire09].val = var508; /* _fire09 on <self:Spritesheet exact> */
{
var509 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var510 = (val*)(812l<<2|1);
var511 = (val*)(206l<<2|1);
var512 = (val*)(16l<<2|1);
var513 = (val*)(40l<<2|1);
var514 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var509->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var509, var510, var511, var512, var513); /* subtexture on <var509:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire10].val = var514; /* _fire10 on <self:Spritesheet exact> */
{
var515 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var516 = (val*)(835l<<2|1);
var517 = (val*)(395l<<2|1);
var518 = (val*)(14l<<2|1);
var519 = (val*)(31l<<2|1);
var520 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var515->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var515, var516, var517, var518, var519); /* subtexture on <var515:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire11].val = var520; /* _fire11 on <self:Spritesheet exact> */
{
var521 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var522 = (val*)(835l<<2|1);
var523 = (val*)(533l<<2|1);
var524 = (val*)(14l<<2|1);
var525 = (val*)(32l<<2|1);
var526 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var521->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var521, var522, var523, var524, var525); /* subtexture on <var521:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire12].val = var526; /* _fire12 on <self:Spritesheet exact> */
{
var527 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var528 = (val*)(835l<<2|1);
var529 = (val*)(361l<<2|1);
var530 = (val*)(14l<<2|1);
var531 = (val*)(34l<<2|1);
var532 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var527->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var527, var528, var529, var530, var531); /* subtexture on <var527:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire13].val = var532; /* _fire13 on <self:Spritesheet exact> */
{
var533 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var534 = (val*)(831l<<2|1);
var535 = (val*)(31l<<2|1);
var536 = (val*)(14l<<2|1);
var537 = (val*)(31l<<2|1);
var538 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var533->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var533, var534, var535, var536, var537); /* subtexture on <var533:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire14].val = var538; /* _fire14 on <self:Spritesheet exact> */
{
var539 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var540 = (val*)(829l<<2|1);
var541 = (val*)(471l<<2|1);
var542 = (val*)(14l<<2|1);
var543 = (val*)(31l<<2|1);
var544 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var539->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var539, var540, var541, var542, var543); /* subtexture on <var539:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire15].val = var544; /* _fire15 on <self:Spritesheet exact> */
{
var545 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var546 = (val*)(828l<<2|1);
var547 = (val*)(268l<<2|1);
var548 = (val*)(14l<<2|1);
var549 = (val*)(31l<<2|1);
var550 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var545->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var545, var546, var547, var548, var549); /* subtexture on <var545:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire16].val = var550; /* _fire16 on <self:Spritesheet exact> */
{
var551 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var552 = (val*)(828l<<2|1);
var553 = (val*)(237l<<2|1);
var554 = (val*)(14l<<2|1);
var555 = (val*)(31l<<2|1);
var556 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var551->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var551, var552, var553, var554, var555); /* subtexture on <var551:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire17].val = var556; /* _fire17 on <self:Spritesheet exact> */
{
var557 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var558 = (val*)(827l<<2|1);
var559 = (val*)(165l<<2|1);
var560 = (val*)(16l<<2|1);
var561 = (val*)(41l<<2|1);
var562 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var557->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var557, var558, var559, var560, var561); /* subtexture on <var557:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire18].val = var562; /* _fire18 on <self:Spritesheet exact> */
{
var563 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var564 = (val*)(812l<<2|1);
var565 = (val*)(246l<<2|1);
var566 = (val*)(16l<<2|1);
var567 = (val*)(41l<<2|1);
var568 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var563->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var563, var564, var565, var566, var567); /* subtexture on <var563:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___fire19].val = var568; /* _fire19 on <self:Spritesheet exact> */
{
var569 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var570 = (val*)(827l<<2|1);
var571 = (val*)(907l<<2|1);
var572 = (val*)(16l<<2|1);
var573 = (val*)(36l<<2|1);
var574 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var569->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var569, var570, var571, var572, var573); /* subtexture on <var569:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___gun00].val = var574; /* _gun00 on <self:Spritesheet exact> */
{
var575 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var576 = (val*)(810l<<2|1);
var577 = (val*)(867l<<2|1);
var578 = (val*)(17l<<2|1);
var579 = (val*)(33l<<2|1);
var580 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var575->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var575, var576, var577, var578, var579); /* subtexture on <var575:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___gun01].val = var580; /* _gun01 on <self:Spritesheet exact> */
{
var581 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var582 = (val*)(829l<<2|1);
var583 = (val*)(611l<<2|1);
var584 = (val*)(14l<<2|1);
var585 = (val*)(36l<<2|1);
var586 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var581->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var581, var582, var583, var584, var585); /* subtexture on <var581:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___gun02].val = var586; /* _gun02 on <self:Spritesheet exact> */
{
var587 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var588 = (val*)(809l<<2|1);
var589 = (val*)(796l<<2|1);
var590 = (val*)(20l<<2|1);
var591 = (val*)(41l<<2|1);
var592 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var587->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var587, var588, var589, var590, var591); /* subtexture on <var587:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___gun03].val = var592; /* _gun03 on <self:Spritesheet exact> */
{
var593 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var594 = (val*)(827l<<2|1);
var595 = (val*)(84l<<2|1);
var596 = (val*)(16l<<2|1);
var597 = (val*)(41l<<2|1);
var598 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var593->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var593, var594, var595, var596, var597); /* subtexture on <var593:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___gun04].val = var598; /* _gun04 on <self:Spritesheet exact> */
{
var599 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var600 = (val*)(423l<<2|1);
var601 = (val*)(0l<<2|1);
var602 = (val*)(21l<<2|1);
var603 = (val*)(41l<<2|1);
var604 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var599->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var599, var600, var601, var602, var603); /* subtexture on <var599:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___gun05].val = var604; /* _gun05 on <self:Spritesheet exact> */
{
var605 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var606 = (val*)(810l<<2|1);
var607 = (val*)(900l<<2|1);
var608 = (val*)(17l<<2|1);
var609 = (val*)(38l<<2|1);
var610 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var605->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var605, var606, var607, var608, var609); /* subtexture on <var605:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___gun06].val = var610; /* _gun06 on <self:Spritesheet exact> */
{
var611 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var612 = (val*)(829l<<2|1);
var613 = (val*)(796l<<2|1);
var614 = (val*)(14l<<2|1);
var615 = (val*)(41l<<2|1);
var616 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var611->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var611, var612, var613, var614, var615); /* subtexture on <var611:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___gun07].val = var616; /* _gun07 on <self:Spritesheet exact> */
{
var617 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var618 = (val*)(848l<<2|1);
var619 = (val*)(263l<<2|1);
var620 = (val*)(10l<<2|1);
var621 = (val*)(47l<<2|1);
var622 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var617->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var617, var618, var619, var620, var621); /* subtexture on <var617:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___gun08].val = var622; /* _gun08 on <self:Spritesheet exact> */
{
var623 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var624 = (val*)(809l<<2|1);
var625 = (val*)(611l<<2|1);
var626 = (val*)(20l<<2|1);
var627 = (val*)(52l<<2|1);
var628 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var623->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var623, var624, var625, var626, var627); /* subtexture on <var623:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___gun09].val = var628; /* _gun09 on <self:Spritesheet exact> */
{
var629 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var630 = (val*)(808l<<2|1);
var631 = (val*)(961l<<2|1);
var632 = (val*)(20l<<2|1);
var633 = (val*)(52l<<2|1);
var634 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var629->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var629, var630, var631, var632, var633); /* subtexture on <var629:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___gun10].val = var634; /* _gun10 on <self:Spritesheet exact> */
{
var635 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var636 = (val*)(856l<<2|1);
var637 = (val*)(421l<<2|1);
var638 = (val*)(9l<<2|1);
var639 = (val*)(54l<<2|1);
var640 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var635->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var635, var636, var637, var638, var639); /* subtexture on <var635:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue01].val = var640; /* _laser_blue01 on <self:Spritesheet exact> */
{
var641 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var642 = (val*)(841l<<2|1);
var643 = (val*)(647l<<2|1);
var644 = (val*)(13l<<2|1);
var645 = (val*)(37l<<2|1);
var646 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var641->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var641, var642, var643, var644, var645); /* subtexture on <var641:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue02].val = var646; /* _laser_blue02 on <self:Spritesheet exact> */
{
var647 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var648 = (val*)(856l<<2|1);
var649 = (val*)(57l<<2|1);
var650 = (val*)(9l<<2|1);
var651 = (val*)(37l<<2|1);
var652 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var647->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var647, var648, var649, var650, var651); /* subtexture on <var647:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue03].val = var652; /* _laser_blue03 on <self:Spritesheet exact> */
{
var653 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var654 = (val*)(835l<<2|1);
var655 = (val*)(565l<<2|1);
var656 = (val*)(13l<<2|1);
var657 = (val*)(37l<<2|1);
var658 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var653->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var653, var654, var655, var656, var657); /* subtexture on <var653:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue04].val = var658; /* _laser_blue04 on <self:Spritesheet exact> */
{
var659 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var660 = (val*)(858l<<2|1);
var661 = (val*)(475l<<2|1);
var662 = (val*)(9l<<2|1);
var663 = (val*)(37l<<2|1);
var664 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var659->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var659, var660, var661, var662, var663); /* subtexture on <var659:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue05].val = var664; /* _laser_blue05 on <self:Spritesheet exact> */
{
var665 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var666 = (val*)(835l<<2|1);
var667 = (val*)(752l<<2|1);
var668 = (val*)(13l<<2|1);
var669 = (val*)(37l<<2|1);
var670 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var665->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var665, var666, var667, var668, var669); /* subtexture on <var665:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue06].val = var670; /* _laser_blue06 on <self:Spritesheet exact> */
{
var671 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var672 = (val*)(856l<<2|1);
var673 = (val*)(775l<<2|1);
var674 = (val*)(9l<<2|1);
var675 = (val*)(37l<<2|1);
var676 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var671->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var671, var672, var673, var674, var675); /* subtexture on <var671:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue07].val = var676; /* _laser_blue07 on <self:Spritesheet exact> */
{
var677 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var678 = (val*)(596l<<2|1);
var679 = (val*)(961l<<2|1);
var680 = (val*)(48l<<2|1);
var681 = (val*)(46l<<2|1);
var682 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var677->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var677, var678, var679, var680, var681); /* subtexture on <var677:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue08].val = var682; /* _laser_blue08 on <self:Spritesheet exact> */
{
var683 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var684 = (val*)(434l<<2|1);
var685 = (val*)(325l<<2|1);
var686 = (val*)(48l<<2|1);
var687 = (val*)(46l<<2|1);
var688 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var683->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var683, var684, var685, var686, var687); /* subtexture on <var683:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue09].val = var688; /* _laser_blue09 on <self:Spritesheet exact> */
{
var689 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var690 = (val*)(740l<<2|1);
var691 = (val*)(724l<<2|1);
var692 = (val*)(37l<<2|1);
var693 = (val*)(37l<<2|1);
var694 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var689->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var689, var690, var691, var692, var693); /* subtexture on <var689:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue10].val = var694; /* _laser_blue10 on <self:Spritesheet exact> */
{
var695 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var696 = (val*)(698l<<2|1);
var697 = (val*)(795l<<2|1);
var698 = (val*)(38l<<2|1);
var699 = (val*)(37l<<2|1);
var700 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var695->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var695, var696, var697, var698, var699); /* subtexture on <var695:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue11].val = var700; /* _laser_blue11 on <self:Spritesheet exact> */
{
var701 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var702 = (val*)(835l<<2|1);
var703 = (val*)(695l<<2|1);
var704 = (val*)(13l<<2|1);
var705 = (val*)(57l<<2|1);
var706 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var701->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var701, var702, var703, var704, var705); /* subtexture on <var701:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue12].val = var706; /* _laser_blue12 on <self:Spritesheet exact> */
{
var707 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var708 = (val*)(856l<<2|1);
var709 = (val*)(869l<<2|1);
var710 = (val*)(9l<<2|1);
var711 = (val*)(57l<<2|1);
var712 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var707->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var707, var708, var709, var710, var711); /* subtexture on <var707:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue13].val = var712; /* _laser_blue13 on <self:Spritesheet exact> */
{
var713 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var714 = (val*)(842l<<2|1);
var715 = (val*)(206l<<2|1);
var716 = (val*)(13l<<2|1);
var717 = (val*)(57l<<2|1);
var718 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var713->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var713, var714, var715, var716, var717); /* subtexture on <var713:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue14].val = var718; /* _laser_blue14 on <self:Spritesheet exact> */
{
var719 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var720 = (val*)(849l<<2|1);
var721 = (val*)(480l<<2|1);
var722 = (val*)(9l<<2|1);
var723 = (val*)(57l<<2|1);
var724 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var719->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var719, var720, var721, var722, var723); /* subtexture on <var719:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue15].val = var724; /* _laser_blue15 on <self:Spritesheet exact> */
{
var725 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var726 = (val*)(843l<<2|1);
var727 = (val*)(62l<<2|1);
var728 = (val*)(13l<<2|1);
var729 = (val*)(54l<<2|1);
var730 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var725->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var725, var726, var727, var728, var729); /* subtexture on <var725:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_blue16].val = var730; /* _laser_blue16 on <self:Spritesheet exact> */
{
var731 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var732 = (val*)(740l<<2|1);
var733 = (val*)(686l<<2|1);
var734 = (val*)(37l<<2|1);
var735 = (val*)(38l<<2|1);
var736 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var731->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var731, var732, var733, var734, var735); /* subtexture on <var731:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green01].val = var736; /* _laser_green01 on <self:Spritesheet exact> */
{
var737 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var738 = (val*)(843l<<2|1);
var739 = (val*)(116l<<2|1);
var740 = (val*)(13l<<2|1);
var741 = (val*)(57l<<2|1);
var742 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var737->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var737, var738, var739, var740, var741); /* subtexture on <var737:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green02].val = var742; /* _laser_green02 on <self:Spritesheet exact> */
{
var743 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var744 = (val*)(855l<<2|1);
var745 = (val*)(173l<<2|1);
var746 = (val*)(9l<<2|1);
var747 = (val*)(57l<<2|1);
var748 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var743->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var743, var744, var745, var746, var747); /* subtexture on <var743:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green03].val = var748; /* _laser_green03 on <self:Spritesheet exact> */
{
var749 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var750 = (val*)(848l<<2|1);
var751 = (val*)(565l<<2|1);
var752 = (val*)(13l<<2|1);
var753 = (val*)(37l<<2|1);
var754 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var749->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var749, var750, var751, var752, var753); /* subtexture on <var749:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green04].val = var754; /* _laser_green04 on <self:Spritesheet exact> */
{
var755 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var756 = (val*)(854l<<2|1);
var757 = (val*)(639l<<2|1);
var758 = (val*)(9l<<2|1);
var759 = (val*)(37l<<2|1);
var760 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var755->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var755, var756, var757, var758, var759); /* subtexture on <var755:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green05].val = var760; /* _laser_green05 on <self:Spritesheet exact> */
{
var761 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var762 = (val*)(845l<<2|1);
var763 = (val*)(0l<<2|1);
var764 = (val*)(13l<<2|1);
var765 = (val*)(57l<<2|1);
var766 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var761->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var761, var762, var763, var764, var765); /* subtexture on <var761:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green06].val = var766; /* _laser_green06 on <self:Spritesheet exact> */
{
var767 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var768 = (val*)(849l<<2|1);
var769 = (val*)(364l<<2|1);
var770 = (val*)(9l<<2|1);
var771 = (val*)(57l<<2|1);
var772 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var767->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var767, var768, var769, var770, var771); /* subtexture on <var767:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green07].val = var772; /* _laser_green07 on <self:Spritesheet exact> */
{
var773 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var774 = (val*)(848l<<2|1);
var775 = (val*)(738l<<2|1);
var776 = (val*)(13l<<2|1);
var777 = (val*)(37l<<2|1);
var778 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var773->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var773, var774, var775, var776, var777); /* subtexture on <var773:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green08].val = var778; /* _laser_green08 on <self:Spritesheet exact> */
{
var779 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var780 = (val*)(856l<<2|1);
var781 = (val*)(94l<<2|1);
var782 = (val*)(9l<<2|1);
var783 = (val*)(37l<<2|1);
var784 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var779->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var779, var780, var781, var782, var783); /* subtexture on <var779:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green09].val = var784; /* _laser_green09 on <self:Spritesheet exact> */
{
var785 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var786 = (val*)(843l<<2|1);
var787 = (val*)(426l<<2|1);
var788 = (val*)(13l<<2|1);
var789 = (val*)(54l<<2|1);
var790 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var785->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var785, var786, var787, var788, var789); /* subtexture on <var785:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green10].val = var790; /* _laser_green10 on <self:Spritesheet exact> */
{
var791 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var792 = (val*)(849l<<2|1);
var793 = (val*)(310l<<2|1);
var794 = (val*)(9l<<2|1);
var795 = (val*)(54l<<2|1);
var796 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var791->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var791, var792, var793, var794, var795); /* subtexture on <var791:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green11].val = var796; /* _laser_green11 on <self:Spritesheet exact> */
{
var797 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var798 = (val*)(843l<<2|1);
var799 = (val*)(602l<<2|1);
var800 = (val*)(13l<<2|1);
var801 = (val*)(37l<<2|1);
var802 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var797->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var797, var798, var799, var800, var801); /* subtexture on <var797:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green12].val = var802; /* _laser_green12 on <self:Spritesheet exact> */
{
var803 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var804 = (val*)(858l<<2|1);
var805 = (val*)(0l<<2|1);
var806 = (val*)(9l<<2|1);
var807 = (val*)(37l<<2|1);
var808 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var803->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var803, var804, var805, var806, var807); /* subtexture on <var803:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green13].val = var808; /* _laser_green13 on <self:Spritesheet exact> */
{
var809 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var810 = (val*)(193l<<2|1);
var811 = (val*)(240l<<2|1);
var812 = (val*)(48l<<2|1);
var813 = (val*)(46l<<2|1);
var814 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var809->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var809, var810, var811, var812, var813); /* subtexture on <var809:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green14].val = var814; /* _laser_green14 on <self:Spritesheet exact> */
{
var815 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var816 = (val*)(443l<<2|1);
var817 = (val*)(182l<<2|1);
var818 = (val*)(48l<<2|1);
var819 = (val*)(46l<<2|1);
var820 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var815->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var815, var816, var817, var818, var819); /* subtexture on <var815:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green15].val = var820; /* _laser_green15 on <self:Spritesheet exact> */
{
var821 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var822 = (val*)(760l<<2|1);
var823 = (val*)(192l<<2|1);
var824 = (val*)(37l<<2|1);
var825 = (val*)(37l<<2|1);
var826 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var821->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var821, var822, var823, var824, var825); /* subtexture on <var821:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_green16].val = var826; /* _laser_green16 on <self:Spritesheet exact> */
{
var827 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var828 = (val*)(858l<<2|1);
var829 = (val*)(230l<<2|1);
var830 = (val*)(9l<<2|1);
var831 = (val*)(54l<<2|1);
var832 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var827->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var827, var828, var829, var830, var831); /* subtexture on <var827:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red01].val = var832; /* _laser_red01 on <self:Spritesheet exact> */
{
var833 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var834 = (val*)(843l<<2|1);
var835 = (val*)(977l<<2|1);
var836 = (val*)(13l<<2|1);
var837 = (val*)(37l<<2|1);
var838 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var833->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var833, var834, var835, var836, var837); /* subtexture on <var833:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red02].val = var838; /* _laser_red02 on <self:Spritesheet exact> */
{
var839 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var840 = (val*)(856l<<2|1);
var841 = (val*)(602l<<2|1);
var842 = (val*)(9l<<2|1);
var843 = (val*)(37l<<2|1);
var844 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var839->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var839, var840, var841, var842, var843); /* subtexture on <var839:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red03].val = var844; /* _laser_red03 on <self:Spritesheet exact> */
{
var845 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var846 = (val*)(843l<<2|1);
var847 = (val*)(940l<<2|1);
var848 = (val*)(13l<<2|1);
var849 = (val*)(37l<<2|1);
var850 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var845->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var845, var846, var847, var848, var849); /* subtexture on <var845:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red04].val = var850; /* _laser_red04 on <self:Spritesheet exact> */
{
var851 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var852 = (val*)(856l<<2|1);
var853 = (val*)(983l<<2|1);
var854 = (val*)(9l<<2|1);
var855 = (val*)(37l<<2|1);
var856 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var851->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var851, var852, var853, var854, var855); /* subtexture on <var851:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red05].val = var856; /* _laser_red05 on <self:Spritesheet exact> */
{
var857 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var858 = (val*)(843l<<2|1);
var859 = (val*)(903l<<2|1);
var860 = (val*)(13l<<2|1);
var861 = (val*)(37l<<2|1);
var862 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var857->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var857, var858, var859, var860, var861); /* subtexture on <var857:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red06].val = var862; /* _laser_red06 on <self:Spritesheet exact> */
{
var863 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var864 = (val*)(856l<<2|1);
var865 = (val*)(131l<<2|1);
var866 = (val*)(9l<<2|1);
var867 = (val*)(37l<<2|1);
var868 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var863->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var863, var864, var865, var866, var867); /* subtexture on <var863:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red07].val = var868; /* _laser_red07 on <self:Spritesheet exact> */
{
var869 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var870 = (val*)(580l<<2|1);
var871 = (val*)(661l<<2|1);
var872 = (val*)(48l<<2|1);
var873 = (val*)(46l<<2|1);
var874 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var869->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var869, var870, var871, var872, var873); /* subtexture on <var869:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red08].val = var874; /* _laser_red08 on <self:Spritesheet exact> */
{
var875 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var876 = (val*)(602l<<2|1);
var877 = (val*)(600l<<2|1);
var878 = (val*)(48l<<2|1);
var879 = (val*)(46l<<2|1);
var880 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var875->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var875, var876, var877, var878, var879); /* subtexture on <var875:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red09].val = var880; /* _laser_red09 on <self:Spritesheet exact> */
{
var881 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var882 = (val*)(738l<<2|1);
var883 = (val*)(650l<<2|1);
var884 = (val*)(37l<<2|1);
var885 = (val*)(36l<<2|1);
var886 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var881->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var881, var882, var883, var884, var885); /* subtexture on <var881:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red10].val = var886; /* _laser_red10 on <self:Spritesheet exact> */
{
var887 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var888 = (val*)(737l<<2|1);
var889 = (val*)(613l<<2|1);
var890 = (val*)(37l<<2|1);
var891 = (val*)(37l<<2|1);
var892 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var887->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var887, var888, var889, var890, var891); /* subtexture on <var887:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red11].val = var892; /* _laser_red11 on <self:Spritesheet exact> */
{
var893 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var894 = (val*)(843l<<2|1);
var895 = (val*)(846l<<2|1);
var896 = (val*)(13l<<2|1);
var897 = (val*)(57l<<2|1);
var898 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var893->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var893, var894, var895, var896, var897); /* subtexture on <var893:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red12].val = var898; /* _laser_red12 on <self:Spritesheet exact> */
{
var899 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var900 = (val*)(856l<<2|1);
var901 = (val*)(812l<<2|1);
var902 = (val*)(9l<<2|1);
var903 = (val*)(57l<<2|1);
var904 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var899->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var899, var900, var901, var902, var903); /* subtexture on <var899:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red13].val = var904; /* _laser_red13 on <self:Spritesheet exact> */
{
var905 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var906 = (val*)(843l<<2|1);
var907 = (val*)(789l<<2|1);
var908 = (val*)(13l<<2|1);
var909 = (val*)(57l<<2|1);
var910 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var905->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var905, var906, var907, var908, var909); /* subtexture on <var905:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red14].val = var910; /* _laser_red14 on <self:Spritesheet exact> */
{
var911 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var912 = (val*)(856l<<2|1);
var913 = (val*)(926l<<2|1);
var914 = (val*)(9l<<2|1);
var915 = (val*)(57l<<2|1);
var916 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var911->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var911, var912, var913, var914, var915); /* subtexture on <var911:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red15].val = var916; /* _laser_red15 on <self:Spritesheet exact> */
{
var917 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var918 = (val*)(848l<<2|1);
var919 = (val*)(684l<<2|1);
var920 = (val*)(13l<<2|1);
var921 = (val*)(54l<<2|1);
var922 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var917->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var917, var918, var919, var920, var921); /* subtexture on <var917:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___laser_red16].val = var922; /* _laser_red16 on <self:Spritesheet exact> */
{
var923 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var924 = (val*)(224l<<2|1);
var925 = (val*)(664l<<2|1);
var926 = (val*)(101l<<2|1);
var927 = (val*)(84l<<2|1);
var928 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var923->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var923, var924, var925, var926, var927); /* subtexture on <var923:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_brown_big1].val = var928; /* _meteor_brown_big1 on <self:Spritesheet exact> */
{
var929 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var930 = (val*)(0l<<2|1);
var931 = (val*)(520l<<2|1);
var932 = (val*)(120l<<2|1);
var933 = (val*)(98l<<2|1);
var934 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var929->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var929, var930, var931, var932, var933); /* subtexture on <var929:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_brown_big2].val = var934; /* _meteor_brown_big2 on <self:Spritesheet exact> */
{
var935 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var936 = (val*)(518l<<2|1);
var937 = (val*)(810l<<2|1);
var938 = (val*)(89l<<2|1);
var939 = (val*)(82l<<2|1);
var940 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var935->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var935, var936, var937, var938, var939); /* subtexture on <var935:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_brown_big3].val = var940; /* _meteor_brown_big3 on <self:Spritesheet exact> */
{
var941 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var942 = (val*)(327l<<2|1);
var943 = (val*)(452l<<2|1);
var944 = (val*)(98l<<2|1);
var945 = (val*)(96l<<2|1);
var946 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var941->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var941, var942, var943, var944, var945); /* subtexture on <var941:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_brown_big4].val = var946; /* _meteor_brown_big4 on <self:Spritesheet exact> */
{
var947 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var948 = (val*)(651l<<2|1);
var949 = (val*)(447l<<2|1);
var950 = (val*)(43l<<2|1);
var951 = (val*)(43l<<2|1);
var952 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var947->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var947, var948, var949, var950, var951); /* subtexture on <var947:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_brown_med1].val = var952; /* _meteor_brown_med1 on <self:Spritesheet exact> */
{
var953 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var954 = (val*)(237l<<2|1);
var955 = (val*)(452l<<2|1);
var956 = (val*)(45l<<2|1);
var957 = (val*)(40l<<2|1);
var958 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var953->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var953, var954, var955, var956, var957); /* subtexture on <var953:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_brown_med3].val = var958; /* _meteor_brown_med3 on <self:Spritesheet exact> */
{
var959 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var960 = (val*)(406l<<2|1);
var961 = (val*)(234l<<2|1);
var962 = (val*)(28l<<2|1);
var963 = (val*)(28l<<2|1);
var964 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var959->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var959, var960, var961, var962, var963); /* subtexture on <var959:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_brown_small1].val = var964; /* _meteor_brown_small1 on <self:Spritesheet exact> */
{
var965 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var966 = (val*)(778l<<2|1);
var967 = (val*)(587l<<2|1);
var968 = (val*)(29l<<2|1);
var969 = (val*)(26l<<2|1);
var970 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var965->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var965, var966, var967, var968, var969); /* subtexture on <var965:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_brown_small2].val = var970; /* _meteor_brown_small2 on <self:Spritesheet exact> */
{
var971 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var972 = (val*)(346l<<2|1);
var973 = (val*)(814l<<2|1);
var974 = (val*)(18l<<2|1);
var975 = (val*)(18l<<2|1);
var976 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var971->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var971, var972, var973, var974, var975); /* subtexture on <var971:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_brown_tiny1].val = var976; /* _meteor_brown_tiny1 on <self:Spritesheet exact> */
{
var977 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var978 = (val*)(399l<<2|1);
var979 = (val*)(814l<<2|1);
var980 = (val*)(16l<<2|1);
var981 = (val*)(15l<<2|1);
var982 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var977->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var977, var978, var979, var980, var981); /* subtexture on <var977:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_brown_tiny2].val = var982; /* _meteor_brown_tiny2 on <self:Spritesheet exact> */
{
var983 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var984 = (val*)(224l<<2|1);
var985 = (val*)(748l<<2|1);
var986 = (val*)(101l<<2|1);
var987 = (val*)(84l<<2|1);
var988 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var983->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var983, var984, var985, var986, var987); /* subtexture on <var983:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_grey_big1].val = var988; /* _meteor_grey_big1 on <self:Spritesheet exact> */
{
var989 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var990 = (val*)(0l<<2|1);
var991 = (val*)(618l<<2|1);
var992 = (val*)(120l<<2|1);
var993 = (val*)(98l<<2|1);
var994 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var989->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var989, var990, var991, var992, var993); /* subtexture on <var989:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_grey_big2].val = var994; /* _meteor_grey_big2 on <self:Spritesheet exact> */
{
var995 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var996 = (val*)(516l<<2|1);
var997 = (val*)(728l<<2|1);
var998 = (val*)(89l<<2|1);
var999 = (val*)(82l<<2|1);
var1000 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var995->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var995, var996, var997, var998, var999); /* subtexture on <var995:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_grey_big3].val = var1000; /* _meteor_grey_big3 on <self:Spritesheet exact> */
{
var1001 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1002 = (val*)(327l<<2|1);
var1003 = (val*)(548l<<2|1);
var1004 = (val*)(98l<<2|1);
var1005 = (val*)(96l<<2|1);
var1006 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1001->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1001, var1002, var1003, var1004, var1005); /* subtexture on <var1001:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_grey_big4].val = var1006; /* _meteor_grey_big4 on <self:Spritesheet exact> */
{
var1007 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1008 = (val*)(674l<<2|1);
var1009 = (val*)(219l<<2|1);
var1010 = (val*)(43l<<2|1);
var1011 = (val*)(43l<<2|1);
var1012 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1007->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1007, var1008, var1009, var1010, var1011); /* subtexture on <var1007:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_grey_med1].val = var1012; /* _meteor_grey_med1 on <self:Spritesheet exact> */
{
var1013 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1014 = (val*)(282l<<2|1);
var1015 = (val*)(452l<<2|1);
var1016 = (val*)(45l<<2|1);
var1017 = (val*)(40l<<2|1);
var1018 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1013->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1013, var1014, var1015, var1016, var1017); /* subtexture on <var1013:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_grey_med2].val = var1018; /* _meteor_grey_med2 on <self:Spritesheet exact> */
{
var1019 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1020 = (val*)(406l<<2|1);
var1021 = (val*)(262l<<2|1);
var1022 = (val*)(28l<<2|1);
var1023 = (val*)(28l<<2|1);
var1024 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1019->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1019, var1020, var1021, var1022, var1023); /* subtexture on <var1019:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_grey_small1].val = var1024; /* _meteor_grey_small1 on <self:Spritesheet exact> */
{
var1025 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1026 = (val*)(396l<<2|1);
var1027 = (val*)(413l<<2|1);
var1028 = (val*)(29l<<2|1);
var1029 = (val*)(26l<<2|1);
var1030 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1025->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1025, var1026, var1027, var1028, var1029); /* subtexture on <var1025:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_grey_small2].val = var1030; /* _meteor_grey_small2 on <self:Spritesheet exact> */
{
var1031 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1032 = (val*)(364l<<2|1);
var1033 = (val*)(814l<<2|1);
var1034 = (val*)(18l<<2|1);
var1035 = (val*)(18l<<2|1);
var1036 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1031->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1031, var1032, var1033, var1034, var1035); /* subtexture on <var1031:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_grey_tiny1].val = var1036; /* _meteor_grey_tiny1 on <self:Spritesheet exact> */
{
var1037 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1038 = (val*)(602l<<2|1);
var1039 = (val*)(646l<<2|1);
var1040 = (val*)(16l<<2|1);
var1041 = (val*)(15l<<2|1);
var1042 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1037->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1037, var1038, var1039, var1040, var1041); /* subtexture on <var1037:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___meteor_grey_tiny2].val = var1042; /* _meteor_grey_tiny2 on <self:Spritesheet exact> */
{
var1043 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1044 = (val*)(367l<<2|1);
var1045 = (val*)(644l<<2|1);
var1046 = (val*)(19l<<2|1);
var1047 = (val*)(19l<<2|1);
var1048 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1043->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1043, var1044, var1045, var1046, var1047); /* subtexture on <var1043:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___numeral0].val = var1048; /* _numeral0 on <self:Spritesheet exact> */
{
var1049 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1050 = (val*)(205l<<2|1);
var1051 = (val*)(688l<<2|1);
var1052 = (val*)(19l<<2|1);
var1053 = (val*)(19l<<2|1);
var1054 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1049->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1049, var1050, var1051, var1052, var1053); /* subtexture on <var1049:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___numeral1].val = var1054; /* _numeral1 on <self:Spritesheet exact> */
{
var1055 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1056 = (val*)(406l<<2|1);
var1057 = (val*)(290l<<2|1);
var1058 = (val*)(19l<<2|1);
var1059 = (val*)(19l<<2|1);
var1060 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1055->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1055, var1056, var1057, var1058, var1059); /* subtexture on <var1055:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___numeral2].val = var1060; /* _numeral2 on <self:Spritesheet exact> */
{
var1061 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1062 = (val*)(580l<<2|1);
var1063 = (val*)(707l<<2|1);
var1064 = (val*)(19l<<2|1);
var1065 = (val*)(19l<<2|1);
var1066 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1061->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1061, var1062, var1063, var1064, var1065); /* subtexture on <var1061:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___numeral3].val = var1066; /* _numeral3 on <self:Spritesheet exact> */
{
var1067 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1068 = (val*)(386l<<2|1);
var1069 = (val*)(644l<<2|1);
var1070 = (val*)(19l<<2|1);
var1071 = (val*)(19l<<2|1);
var1072 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1067->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1067, var1068, var1069, var1070, var1071); /* subtexture on <var1067:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___numeral4].val = var1072; /* _numeral4 on <self:Spritesheet exact> */
{
var1073 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1074 = (val*)(628l<<2|1);
var1075 = (val*)(646l<<2|1);
var1076 = (val*)(19l<<2|1);
var1077 = (val*)(19l<<2|1);
var1078 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1073->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1073, var1074, var1075, var1076, var1077); /* subtexture on <var1073:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___numeral5].val = var1078; /* _numeral5 on <self:Spritesheet exact> */
{
var1079 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1080 = (val*)(671l<<2|1);
var1081 = (val*)(1002l<<2|1);
var1082 = (val*)(19l<<2|1);
var1083 = (val*)(19l<<2|1);
var1084 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1079->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1079, var1080, var1081, var1082, var1083); /* subtexture on <var1079:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___numeral6].val = var1084; /* _numeral6 on <self:Spritesheet exact> */
{
var1085 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1086 = (val*)(690l<<2|1);
var1087 = (val*)(1004l<<2|1);
var1088 = (val*)(19l<<2|1);
var1089 = (val*)(19l<<2|1);
var1090 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1085->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1085, var1086, var1087, var1088, var1089); /* subtexture on <var1085:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___numeral7].val = var1090; /* _numeral7 on <self:Spritesheet exact> */
{
var1091 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1092 = (val*)(709l<<2|1);
var1093 = (val*)(1004l<<2|1);
var1094 = (val*)(19l<<2|1);
var1095 = (val*)(19l<<2|1);
var1096 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1091->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1091, var1092, var1093, var1094, var1095); /* subtexture on <var1091:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___numeral8].val = var1096; /* _numeral8 on <self:Spritesheet exact> */
{
var1097 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1098 = (val*)(491l<<2|1);
var1099 = (val*)(215l<<2|1);
var1100 = (val*)(19l<<2|1);
var1101 = (val*)(19l<<2|1);
var1102 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1097->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1097, var1098, var1099, var1100, var1101); /* subtexture on <var1097:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___numeral9].val = var1102; /* _numeral9 on <self:Spritesheet exact> */
{
var1103 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1104 = (val*)(382l<<2|1);
var1105 = (val*)(814l<<2|1);
var1106 = (val*)(17l<<2|1);
var1107 = (val*)(17l<<2|1);
var1108 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1103->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1103, var1104, var1105, var1106, var1107); /* subtexture on <var1103:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___numeral_x].val = var1108; /* _numeral_x on <self:Spritesheet exact> */
{
var1109 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1110 = (val*)(674l<<2|1);
var1111 = (val*)(262l<<2|1);
var1112 = (val*)(22l<<2|1);
var1113 = (val*)(21l<<2|1);
var1114 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1109->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1109, var1110, var1111, var1112, var1113); /* subtexture on <var1109:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___pill_blue].val = var1114; /* _pill_blue on <self:Spritesheet exact> */
{
var1115 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1116 = (val*)(573l<<2|1);
var1117 = (val*)(989l<<2|1);
var1118 = (val*)(22l<<2|1);
var1119 = (val*)(21l<<2|1);
var1120 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1115->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1115, var1116, var1117, var1118, var1119); /* subtexture on <var1115:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___pill_green].val = var1120; /* _pill_green on <self:Spritesheet exact> */
{
var1121 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1122 = (val*)(222l<<2|1);
var1123 = (val*)(108l<<2|1);
var1124 = (val*)(22l<<2|1);
var1125 = (val*)(21l<<2|1);
var1126 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1121->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1121, var1122, var1123, var1124, var1125); /* subtexture on <var1121:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___pill_red].val = var1126; /* _pill_red on <self:Spritesheet exact> */
{
var1127 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1128 = (val*)(222l<<2|1);
var1129 = (val*)(129l<<2|1);
var1130 = (val*)(22l<<2|1);
var1131 = (val*)(21l<<2|1);
var1132 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1127->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1127, var1128, var1129, var1130, var1131); /* subtexture on <var1127:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___pill_yellow].val = var1132; /* _pill_yellow on <self:Spritesheet exact> */
{
var1133 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1134 = (val*)(482l<<2|1);
var1135 = (val*)(358l<<2|1);
var1136 = (val*)(33l<<2|1);
var1137 = (val*)(26l<<2|1);
var1138 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1133->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1133, var1134, var1135, var1136, var1137); /* subtexture on <var1133:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_life1_blue].val = var1138; /* _player_life1_blue on <self:Spritesheet exact> */
{
var1139 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1140 = (val*)(535l<<2|1);
var1141 = (val*)(150l<<2|1);
var1142 = (val*)(33l<<2|1);
var1143 = (val*)(26l<<2|1);
var1144 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1139->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1139, var1140, var1141, var1142, var1143); /* subtexture on <var1139:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_life1_green].val = var1144; /* _player_life1_green on <self:Spritesheet exact> */
{
var1145 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1146 = (val*)(777l<<2|1);
var1147 = (val*)(327l<<2|1);
var1148 = (val*)(33l<<2|1);
var1149 = (val*)(26l<<2|1);
var1150 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1145->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1145, var1146, var1147, var1148, var1149); /* subtexture on <var1145:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_life1_orange].val = var1150; /* _player_life1_orange on <self:Spritesheet exact> */
{
var1151 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1152 = (val*)(775l<<2|1);
var1153 = (val*)(301l<<2|1);
var1154 = (val*)(33l<<2|1);
var1155 = (val*)(26l<<2|1);
var1156 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1151->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1151, var1152, var1153, var1154, var1155); /* subtexture on <var1151:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_life1_red].val = var1156; /* _player_life1_red on <self:Spritesheet exact> */
{
var1157 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1158 = (val*)(465l<<2|1);
var1159 = (val*)(991l<<2|1);
var1160 = (val*)(37l<<2|1);
var1161 = (val*)(26l<<2|1);
var1162 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1157->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1157, var1158, var1159, var1160, var1161); /* subtexture on <var1157:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_life2_blue].val = var1162; /* _player_life2_blue on <self:Spritesheet exact> */
{
var1163 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1164 = (val*)(391l<<2|1);
var1165 = (val*)(991l<<2|1);
var1166 = (val*)(37l<<2|1);
var1167 = (val*)(26l<<2|1);
var1168 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1163->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1163, var1164, var1165, var1166, var1167); /* subtexture on <var1163:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_life2_green].val = var1168; /* _player_life2_green on <self:Spritesheet exact> */
{
var1169 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1170 = (val*)(428l<<2|1);
var1171 = (val*)(991l<<2|1);
var1172 = (val*)(37l<<2|1);
var1173 = (val*)(26l<<2|1);
var1174 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1169->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1169, var1170, var1171, var1172, var1173); /* subtexture on <var1169:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_life2_orange].val = var1174; /* _player_life2_orange on <self:Spritesheet exact> */
{
var1175 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1176 = (val*)(502l<<2|1);
var1177 = (val*)(991l<<2|1);
var1178 = (val*)(37l<<2|1);
var1179 = (val*)(26l<<2|1);
var1180 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1175->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1175, var1176, var1177, var1178, var1179); /* subtexture on <var1175:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_life2_red].val = var1180; /* _player_life2_red on <self:Spritesheet exact> */
{
var1181 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1182 = (val*)(777l<<2|1);
var1183 = (val*)(385l<<2|1);
var1184 = (val*)(32l<<2|1);
var1185 = (val*)(26l<<2|1);
var1186 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1181->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1181, var1182, var1183, var1184, var1185); /* subtexture on <var1181:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_life3_blue].val = var1186; /* _player_life3_blue on <self:Spritesheet exact> */
{
var1187 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1188 = (val*)(778l<<2|1);
var1189 = (val*)(469l<<2|1);
var1190 = (val*)(32l<<2|1);
var1191 = (val*)(26l<<2|1);
var1192 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1187->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1187, var1188, var1189, var1190, var1191); /* subtexture on <var1187:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_life3_green].val = var1192; /* _player_life3_green on <self:Spritesheet exact> */
{
var1193 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1194 = (val*)(777l<<2|1);
var1195 = (val*)(712l<<2|1);
var1196 = (val*)(32l<<2|1);
var1197 = (val*)(26l<<2|1);
var1198 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1193->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1193, var1194, var1195, var1196, var1197); /* subtexture on <var1193:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_life3_orange].val = var1198; /* _player_life3_orange on <self:Spritesheet exact> */
{
var1199 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1200 = (val*)(777l<<2|1);
var1201 = (val*)(443l<<2|1);
var1202 = (val*)(32l<<2|1);
var1203 = (val*)(26l<<2|1);
var1204 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1199->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1199, var1200, var1201, var1202, var1203); /* subtexture on <var1199:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_life3_red].val = var1204; /* _player_life3_red on <self:Spritesheet exact> */
{
var1205 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1206 = (val*)(211l<<2|1);
var1207 = (val*)(941l<<2|1);
var1208 = (val*)(99l<<2|1);
var1209 = (val*)(75l<<2|1);
var1210 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1205->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1205, var1206, var1207, var1208, var1209); /* subtexture on <var1205:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship1_blue].val = var1210; /* _player_ship1_blue on <self:Spritesheet exact> */
{
var1211 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1212 = (val*)(112l<<2|1);
var1213 = (val*)(941l<<2|1);
var1214 = (val*)(99l<<2|1);
var1215 = (val*)(75l<<2|1);
var1216 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1211->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1211, var1212, var1213, var1214, var1215); /* subtexture on <var1211:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship1_damage1].val = var1216; /* _player_ship1_damage1 on <self:Spritesheet exact> */
{
var1217 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1218 = (val*)(247l<<2|1);
var1219 = (val*)(234l<<2|1);
var1220 = (val*)(99l<<2|1);
var1221 = (val*)(75l<<2|1);
var1222 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1217->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1217, var1218, var1219, var1220, var1221); /* subtexture on <var1217:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship1_damage2].val = var1222; /* _player_ship1_damage2 on <self:Spritesheet exact> */
{
var1223 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1224 = (val*)(247l<<2|1);
var1225 = (val*)(159l<<2|1);
var1226 = (val*)(99l<<2|1);
var1227 = (val*)(75l<<2|1);
var1228 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1223->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1223, var1224, var1225, var1226, var1227); /* subtexture on <var1223:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship1_damage3].val = var1228; /* _player_ship1_damage3 on <self:Spritesheet exact> */
{
var1229 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1230 = (val*)(237l<<2|1);
var1231 = (val*)(377l<<2|1);
var1232 = (val*)(99l<<2|1);
var1233 = (val*)(75l<<2|1);
var1234 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1229->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1229, var1230, var1231, var1232, var1233); /* subtexture on <var1229:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship1_green].val = var1234; /* _player_ship1_green on <self:Spritesheet exact> */
{
var1235 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1236 = (val*)(247l<<2|1);
var1237 = (val*)(84l<<2|1);
var1238 = (val*)(99l<<2|1);
var1239 = (val*)(75l<<2|1);
var1240 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1235->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1235, var1236, var1237, var1238, var1239); /* subtexture on <var1235:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship1_orange].val = var1240; /* _player_ship1_orange on <self:Spritesheet exact> */
{
var1241 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1242 = (val*)(224l<<2|1);
var1243 = (val*)(832l<<2|1);
var1244 = (val*)(99l<<2|1);
var1245 = (val*)(75l<<2|1);
var1246 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1241->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1241, var1242, var1243, var1244, var1245); /* subtexture on <var1241:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship1_red].val = var1246; /* _player_ship1_red on <self:Spritesheet exact> */
{
var1247 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1248 = (val*)(112l<<2|1);
var1249 = (val*)(791l<<2|1);
var1250 = (val*)(112l<<2|1);
var1251 = (val*)(75l<<2|1);
var1252 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1247->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1247, var1248, var1249, var1250, var1251); /* subtexture on <var1247:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship2_blue].val = var1252; /* _player_ship2_blue on <self:Spritesheet exact> */
{
var1253 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1254 = (val*)(0l<<2|1);
var1255 = (val*)(866l<<2|1);
var1256 = (val*)(112l<<2|1);
var1257 = (val*)(75l<<2|1);
var1258 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1253->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1253, var1254, var1255, var1256, var1257); /* subtexture on <var1253:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship2_damage1].val = var1258; /* _player_ship2_damage1 on <self:Spritesheet exact> */
{
var1259 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1260 = (val*)(0l<<2|1);
var1261 = (val*)(791l<<2|1);
var1262 = (val*)(112l<<2|1);
var1263 = (val*)(75l<<2|1);
var1264 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1259->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1259, var1260, var1261, var1262, var1263); /* subtexture on <var1259:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship2_damage2].val = var1264; /* _player_ship2_damage2 on <self:Spritesheet exact> */
{
var1265 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1266 = (val*)(0l<<2|1);
var1267 = (val*)(716l<<2|1);
var1268 = (val*)(112l<<2|1);
var1269 = (val*)(75l<<2|1);
var1270 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1265->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1265, var1266, var1267, var1268, var1269); /* subtexture on <var1265:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship2_damage3].val = var1270; /* _player_ship2_damage3 on <self:Spritesheet exact> */
{
var1271 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1272 = (val*)(112l<<2|1);
var1273 = (val*)(866l<<2|1);
var1274 = (val*)(112l<<2|1);
var1275 = (val*)(75l<<2|1);
var1276 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1271->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1271, var1272, var1273, var1274, var1275); /* subtexture on <var1271:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship2_green].val = var1276; /* _player_ship2_green on <self:Spritesheet exact> */
{
var1277 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1278 = (val*)(112l<<2|1);
var1279 = (val*)(716l<<2|1);
var1280 = (val*)(112l<<2|1);
var1281 = (val*)(75l<<2|1);
var1282 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1277->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1277, var1278, var1279, var1280, var1281); /* subtexture on <var1277:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship2_orange].val = var1282; /* _player_ship2_orange on <self:Spritesheet exact> */
{
var1283 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1284 = (val*)(0l<<2|1);
var1285 = (val*)(941l<<2|1);
var1286 = (val*)(112l<<2|1);
var1287 = (val*)(75l<<2|1);
var1288 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1283->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1283, var1284, var1285, var1286, var1287); /* subtexture on <var1283:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship2_red].val = var1288; /* _player_ship2_red on <self:Spritesheet exact> */
{
var1289 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1290 = (val*)(325l<<2|1);
var1291 = (val*)(739l<<2|1);
var1292 = (val*)(98l<<2|1);
var1293 = (val*)(75l<<2|1);
var1294 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1289->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1289, var1290, var1291, var1292, var1293); /* subtexture on <var1289:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship3_blue].val = var1294; /* _player_ship3_blue on <self:Spritesheet exact> */
{
var1295 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1296 = (val*)(323l<<2|1);
var1297 = (val*)(832l<<2|1);
var1298 = (val*)(98l<<2|1);
var1299 = (val*)(75l<<2|1);
var1300 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1295->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1295, var1296, var1297, var1298, var1299); /* subtexture on <var1295:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship3_damage1].val = var1300; /* _player_ship3_damage1 on <self:Spritesheet exact> */
{
var1301 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1302 = (val*)(310l<<2|1);
var1303 = (val*)(907l<<2|1);
var1304 = (val*)(98l<<2|1);
var1305 = (val*)(75l<<2|1);
var1306 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1301->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1301, var1302, var1303, var1304, var1305); /* subtexture on <var1301:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship3_damage2].val = var1306; /* _player_ship3_damage2 on <self:Spritesheet exact> */
{
var1307 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1308 = (val*)(325l<<2|1);
var1309 = (val*)(664l<<2|1);
var1310 = (val*)(98l<<2|1);
var1311 = (val*)(75l<<2|1);
var1312 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1307->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1307, var1308, var1309, var1310, var1311); /* subtexture on <var1307:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship3_damage3].val = var1312; /* _player_ship3_damage3 on <self:Spritesheet exact> */
{
var1313 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1314 = (val*)(346l<<2|1);
var1315 = (val*)(75l<<2|1);
var1316 = (val*)(98l<<2|1);
var1317 = (val*)(75l<<2|1);
var1318 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1313->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1313, var1314, var1315, var1316, var1317); /* subtexture on <var1313:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship3_green].val = var1318; /* _player_ship3_green on <self:Spritesheet exact> */
{
var1319 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1320 = (val*)(336l<<2|1);
var1321 = (val*)(309l<<2|1);
var1322 = (val*)(98l<<2|1);
var1323 = (val*)(75l<<2|1);
var1324 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1319->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1319, var1320, var1321, var1322, var1323); /* subtexture on <var1319:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship3_orange].val = var1324; /* _player_ship3_orange on <self:Spritesheet exact> */
{
var1325 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1326 = (val*)(325l<<2|1);
var1327 = (val*)(0l<<2|1);
var1328 = (val*)(98l<<2|1);
var1329 = (val*)(75l<<2|1);
var1330 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1325->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1325, var1326, var1327, var1328, var1329); /* subtexture on <var1325:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___player_ship3_red].val = var1330; /* _player_ship3_red on <self:Spritesheet exact> */
{
var1331 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1332 = (val*)(696l<<2|1);
var1333 = (val*)(329l<<2|1);
var1334 = (val*)(34l<<2|1);
var1335 = (val*)(33l<<2|1);
var1336 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1331->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1331, var1332, var1333, var1334, var1335); /* subtexture on <var1331:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_blue].val = var1336; /* _powerup_blue on <self:Spritesheet exact> */
{
var1337 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1338 = (val*)(539l<<2|1);
var1339 = (val*)(989l<<2|1);
var1340 = (val*)(34l<<2|1);
var1341 = (val*)(33l<<2|1);
var1342 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1337->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1337, var1338, var1339, var1340, var1341); /* subtexture on <var1337:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_blue_bolt].val = var1342; /* _powerup_blue_bolt on <self:Spritesheet exact> */
{
var1343 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1344 = (val*)(777l<<2|1);
var1345 = (val*)(679l<<2|1);
var1346 = (val*)(34l<<2|1);
var1347 = (val*)(33l<<2|1);
var1348 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1343->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1343, var1344, var1345, var1346, var1347); /* subtexture on <var1343:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_blue_shield].val = var1348; /* _powerup_blue_shield on <self:Spritesheet exact> */
{
var1349 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1350 = (val*)(776l<<2|1);
var1351 = (val*)(895l<<2|1);
var1352 = (val*)(34l<<2|1);
var1353 = (val*)(33l<<2|1);
var1354 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1349->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1349, var1350, var1351, var1352, var1353); /* subtexture on <var1349:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_blue_star].val = var1354; /* _powerup_blue_star on <self:Spritesheet exact> */
{
var1355 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1356 = (val*)(774l<<2|1);
var1357 = (val*)(613l<<2|1);
var1358 = (val*)(34l<<2|1);
var1359 = (val*)(33l<<2|1);
var1360 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1355->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1355, var1356, var1357, var1358, var1359); /* subtexture on <var1355:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_green].val = var1360; /* _powerup_green on <self:Spritesheet exact> */
{
var1361 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1362 = (val*)(766l<<2|1);
var1363 = (val*)(80l<<2|1);
var1364 = (val*)(34l<<2|1);
var1365 = (val*)(33l<<2|1);
var1366 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1361->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1361, var1362, var1363, var1364, var1365); /* subtexture on <var1361:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_green_bolt].val = var1366; /* _powerup_green_bolt on <self:Spritesheet exact> */
{
var1367 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1368 = (val*)(776l<<2|1);
var1369 = (val*)(862l<<2|1);
var1370 = (val*)(34l<<2|1);
var1371 = (val*)(33l<<2|1);
var1372 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1367->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1367, var1368, var1369, var1370, var1371); /* subtexture on <var1367:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_green_shield].val = var1372; /* _powerup_green_shield on <self:Spritesheet exact> */
{
var1373 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1374 = (val*)(651l<<2|1);
var1375 = (val*)(490l<<2|1);
var1376 = (val*)(34l<<2|1);
var1377 = (val*)(33l<<2|1);
var1378 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1373->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1373, var1374, var1375, var1376, var1377); /* subtexture on <var1373:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_green_star].val = var1378; /* _powerup_green_star on <self:Spritesheet exact> */
{
var1379 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1380 = (val*)(491l<<2|1);
var1381 = (val*)(182l<<2|1);
var1382 = (val*)(34l<<2|1);
var1383 = (val*)(33l<<2|1);
var1384 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1379->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1379, var1380, var1381, var1382, var1383); /* subtexture on <var1379:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_red].val = var1384; /* _powerup_red on <self:Spritesheet exact> */
{
var1385 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1386 = (val*)(775l<<2|1);
var1387 = (val*)(646l<<2|1);
var1388 = (val*)(34l<<2|1);
var1389 = (val*)(33l<<2|1);
var1390 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1385->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1385, var1386, var1387, var1388, var1389); /* subtexture on <var1385:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_red_bolt].val = var1390; /* _powerup_red_bolt on <self:Spritesheet exact> */
{
var1391 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1392 = (val*)(776l<<2|1);
var1393 = (val*)(928l<<2|1);
var1394 = (val*)(34l<<2|1);
var1395 = (val*)(33l<<2|1);
var1396 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1391->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1391, var1392, var1393, var1394, var1395); /* subtexture on <var1391:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_red_shield].val = var1396; /* _powerup_red_shield on <self:Spritesheet exact> */
{
var1397 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1398 = (val*)(774l<<2|1);
var1399 = (val*)(977l<<2|1);
var1400 = (val*)(34l<<2|1);
var1401 = (val*)(33l<<2|1);
var1402 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1397->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1397, var1398, var1399, var1400, var1401); /* subtexture on <var1397:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_red_star].val = var1402; /* _powerup_red_star on <self:Spritesheet exact> */
{
var1403 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1404 = (val*)(774l<<2|1);
var1405 = (val*)(761l<<2|1);
var1406 = (val*)(34l<<2|1);
var1407 = (val*)(33l<<2|1);
var1408 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1403->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1403, var1404, var1405, var1406, var1407); /* subtexture on <var1403:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_yellow].val = var1408; /* _powerup_yellow on <self:Spritesheet exact> */
{
var1409 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1410 = (val*)(740l<<2|1);
var1411 = (val*)(761l<<2|1);
var1412 = (val*)(34l<<2|1);
var1413 = (val*)(33l<<2|1);
var1414 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1409->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1409, var1410, var1411, var1412, var1413); /* subtexture on <var1409:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_yellow_bolt].val = var1414; /* _powerup_yellow_bolt on <self:Spritesheet exact> */
{
var1415 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1416 = (val*)(482l<<2|1);
var1417 = (val*)(325l<<2|1);
var1418 = (val*)(34l<<2|1);
var1419 = (val*)(33l<<2|1);
var1420 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1415->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1415, var1416, var1417, var1418, var1419); /* subtexture on <var1415:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_yellow_shield].val = var1420; /* _powerup_yellow_shield on <self:Spritesheet exact> */
{
var1421 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1422 = (val*)(607l<<2|1);
var1423 = (val*)(857l<<2|1);
var1424 = (val*)(34l<<2|1);
var1425 = (val*)(33l<<2|1);
var1426 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1421->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1421, var1422, var1423, var1424, var1425); /* subtexture on <var1421:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___powerup_yellow_star].val = var1426; /* _powerup_yellow_star on <self:Spritesheet exact> */
{
var1427 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1428 = (val*)(325l<<2|1);
var1429 = (val*)(814l<<2|1);
var1430 = (val*)(21l<<2|1);
var1431 = (val*)(16l<<2|1);
var1432 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1427->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1427, var1428, var1429, var1430, var1431); /* subtexture on <var1427:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___scratch1].val = var1432; /* _scratch1 on <self:Spritesheet exact> */
{
var1433 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1434 = (val*)(423l<<2|1);
var1435 = (val*)(41l<<2|1);
var1436 = (val*)(21l<<2|1);
var1437 = (val*)(16l<<2|1);
var1438 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1433->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1433, var1434, var1435, var1436, var1437); /* subtexture on <var1433:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___scratch2].val = var1438; /* _scratch2 on <self:Spritesheet exact> */
{
var1439 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1440 = (val*)(346l<<2|1);
var1441 = (val*)(295l<<2|1);
var1442 = (val*)(16l<<2|1);
var1443 = (val*)(12l<<2|1);
var1444 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1439->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1439, var1440, var1441, var1442, var1443); /* subtexture on <var1439:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___scratch3].val = var1444; /* _scratch3 on <self:Spritesheet exact> */
{
var1445 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1446 = (val*)(0l<<2|1);
var1447 = (val*)(412l<<2|1);
var1448 = (val*)(133l<<2|1);
var1449 = (val*)(108l<<2|1);
var1450 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1445->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1445, var1446, var1447, var1448, var1449); /* subtexture on <var1445:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___shield1].val = var1450; /* _shield1 on <self:Spritesheet exact> */
{
var1451 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1452 = (val*)(0l<<2|1);
var1453 = (val*)(293l<<2|1);
var1454 = (val*)(143l<<2|1);
var1455 = (val*)(119l<<2|1);
var1456 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1451->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1451, var1452, var1453, var1454, var1455); /* subtexture on <var1451:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___shield2].val = var1456; /* _shield2 on <self:Spritesheet exact> */
{
var1457 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1458 = (val*)(0l<<2|1);
var1459 = (val*)(156l<<2|1);
var1460 = (val*)(144l<<2|1);
var1461 = (val*)(137l<<2|1);
var1462 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1457->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1457, var1458, var1459, var1460, var1461); /* subtexture on <var1457:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___shield3].val = var1462; /* _shield3 on <self:Spritesheet exact> */
{
var1463 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1464 = (val*)(797l<<2|1);
var1465 = (val*)(143l<<2|1);
var1466 = (val*)(30l<<2|1);
var1467 = (val*)(30l<<2|1);
var1468 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1463->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1463, var1464, var1465, var1466, var1467); /* subtexture on <var1463:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___shield_bronze].val = var1468; /* _shield_bronze on <self:Spritesheet exact> */
{
var1469 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1470 = (val*)(797l<<2|1);
var1471 = (val*)(113l<<2|1);
var1472 = (val*)(30l<<2|1);
var1473 = (val*)(30l<<2|1);
var1474 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1469->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1469, var1470, var1471, var1472, var1473); /* subtexture on <var1469:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___shield_gold].val = var1474; /* _shield_gold on <self:Spritesheet exact> */
{
var1475 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1476 = (val*)(778l<<2|1);
var1477 = (val*)(824l<<2|1);
var1478 = (val*)(30l<<2|1);
var1479 = (val*)(30l<<2|1);
var1480 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1475->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1475, var1476, var1477, var1478, var1479); /* subtexture on <var1475:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___shield_silver].val = var1480; /* _shield_silver on <self:Spritesheet exact> */
{
var1481 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1482 = (val*)(858l<<2|1);
var1483 = (val*)(284l<<2|1);
var1484 = (val*)(7l<<2|1);
var1485 = (val*)(108l<<2|1);
var1486 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1481->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1481, var1482, var1483, var1484, var1485); /* subtexture on <var1481:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___speed].val = var1486; /* _speed on <self:Spritesheet exact> */
{
var1487 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1488 = (val*)(628l<<2|1);
var1489 = (val*)(681l<<2|1);
var1490 = (val*)(25l<<2|1);
var1491 = (val*)(24l<<2|1);
var1492 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1487->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1487, var1488, var1489, var1490, var1491); /* subtexture on <var1487:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___star1].val = var1492; /* _star1 on <self:Spritesheet exact> */
{
var1493 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1494 = (val*)(222l<<2|1);
var1495 = (val*)(84l<<2|1);
var1496 = (val*)(25l<<2|1);
var1497 = (val*)(24l<<2|1);
var1498 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1493->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1493, var1494, var1495, var1496, var1497); /* subtexture on <var1493:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___star2].val = var1498; /* _star2 on <self:Spritesheet exact> */
{
var1499 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1500 = (val*)(576l<<2|1);
var1501 = (val*)(300l<<2|1);
var1502 = (val*)(24l<<2|1);
var1503 = (val*)(24l<<2|1);
var1504 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1499->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1499, var1500, var1501, var1502, var1503); /* subtexture on <var1499:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___star3].val = var1504; /* _star3 on <self:Spritesheet exact> */
{
var1505 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1506 = (val*)(778l<<2|1);
var1507 = (val*)(794l<<2|1);
var1508 = (val*)(31l<<2|1);
var1509 = (val*)(30l<<2|1);
var1510 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1505->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1505, var1506, var1507, var1508, var1509); /* subtexture on <var1505:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___star_bronze].val = var1510; /* _star_bronze on <self:Spritesheet exact> */
{
var1511 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1512 = (val*)(778l<<2|1);
var1513 = (val*)(557l<<2|1);
var1514 = (val*)(31l<<2|1);
var1515 = (val*)(30l<<2|1);
var1516 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1511->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1511, var1512, var1513, var1514, var1515); /* subtexture on <var1511:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___star_gold].val = var1516; /* _star_gold on <self:Spritesheet exact> */
{
var1517 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1518 = (val*)(778l<<2|1);
var1519 = (val*)(527l<<2|1);
var1520 = (val*)(31l<<2|1);
var1521 = (val*)(30l<<2|1);
var1522 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1517->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1517, var1518, var1519, var1520, var1521); /* subtexture on <var1517:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___star_silver].val = var1522; /* _star_silver on <self:Spritesheet exact> */
{
var1523 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1524 = (val*)(778l<<2|1);
var1525 = (val*)(495l<<2|1);
var1526 = (val*)(32l<<2|1);
var1527 = (val*)(32l<<2|1);
var1528 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1523->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1523, var1524, var1525, var1526, var1527); /* subtexture on <var1523:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___things_bronze].val = var1528; /* _things_bronze on <self:Spritesheet exact> */
{
var1529 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1530 = (val*)(777l<<2|1);
var1531 = (val*)(411l<<2|1);
var1532 = (val*)(32l<<2|1);
var1533 = (val*)(32l<<2|1);
var1534 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1529->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1529, var1530, var1531, var1532, var1533); /* subtexture on <var1529:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___things_gold].val = var1534; /* _things_gold on <self:Spritesheet exact> */
{
var1535 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1536 = (val*)(777l<<2|1);
var1537 = (val*)(353l<<2|1);
var1538 = (val*)(32l<<2|1);
var1539 = (val*)(32l<<2|1);
var1540 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1535->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1535, var1536, var1537, var1538, var1539); /* subtexture on <var1535:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___things_silver].val = var1540; /* _things_silver on <self:Spritesheet exact> */
{
var1541 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1542 = (val*)(310l<<2|1);
var1543 = (val*)(982l<<2|1);
var1544 = (val*)(41l<<2|1);
var1545 = (val*)(41l<<2|1);
var1546 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1541->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1541, var1542, var1543, var1544, var1545); /* subtexture on <var1541:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___turret_base_big].val = var1546; /* _turret_base_big on <self:Spritesheet exact> */
{
var1547 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1548 = (val*)(808l<<2|1);
var1549 = (val*)(301l<<2|1);
var1550 = (val*)(26l<<2|1);
var1551 = (val*)(26l<<2|1);
var1552 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1547->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1547, var1548, var1549, var1550, var1551); /* subtexture on <var1547:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___turret_base_small].val = var1552; /* _turret_base_small on <self:Spritesheet exact> */
{
var1553 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1554 = (val*)(444l<<2|1);
var1555 = (val*)(91l<<2|1);
var1556 = (val*)(91l<<2|1);
var1557 = (val*)(91l<<2|1);
var1558 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1553->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1553, var1554, var1555, var1556, var1557); /* subtexture on <var1553:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___ufo_blue].val = var1558; /* _ufo_blue on <self:Spritesheet exact> */
{
var1559 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1560 = (val*)(434l<<2|1);
var1561 = (val*)(234l<<2|1);
var1562 = (val*)(91l<<2|1);
var1563 = (val*)(91l<<2|1);
var1564 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1559->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1559, var1560, var1561, var1562, var1563); /* subtexture on <var1559:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___ufo_green].val = var1564; /* _ufo_green on <self:Spritesheet exact> */
{
var1565 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1566 = (val*)(444l<<2|1);
var1567 = (val*)(0l<<2|1);
var1568 = (val*)(91l<<2|1);
var1569 = (val*)(91l<<2|1);
var1570 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1565->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1565, var1566, var1567, var1568, var1569); /* subtexture on <var1565:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___ufo_red].val = var1570; /* _ufo_red on <self:Spritesheet exact> */
{
var1571 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1572 = (val*)(505l<<2|1);
var1573 = (val*)(898l<<2|1);
var1574 = (val*)(91l<<2|1);
var1575 = (val*)(91l<<2|1);
var1576 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1571->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1571, var1572, var1573, var1574, var1575); /* subtexture on <var1571:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___ufo_yellow].val = var1576; /* _ufo_yellow on <self:Spritesheet exact> */
{
var1577 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1578 = (val*)(647l<<2|1);
var1579 = (val*)(924l<<2|1);
var1580 = (val*)(45l<<2|1);
var1581 = (val*)(78l<<2|1);
var1582 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1577->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1577, var1578, var1579, var1580, var1581); /* subtexture on <var1577:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_blue_95d0].val = var1582; /* _wing_blue_0 on <self:Spritesheet exact> */
{
var1583 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1584 = (val*)(738l<<2|1);
var1585 = (val*)(253l<<2|1);
var1586 = (val*)(37l<<2|1);
var1587 = (val*)(72l<<2|1);
var1588 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1583->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1583, var1584, var1585, var1586, var1587); /* subtexture on <var1583:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_blue_95d1].val = var1588; /* _wing_blue_1 on <self:Spritesheet exact> */
{
var1589 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1590 = (val*)(805l<<2|1);
var1591 = (val*)(0l<<2|1);
var1592 = (val*)(26l<<2|1);
var1593 = (val*)(84l<<2|1);
var1594 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1589->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1589, var1590, var1591, var1592, var1593); /* subtexture on <var1589:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_blue_95d2].val = var1594; /* _wing_blue_2 on <self:Spritesheet exact> */
{
var1595 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1596 = (val*)(600l<<2|1);
var1597 = (val*)(450l<<2|1);
var1598 = (val*)(51l<<2|1);
var1599 = (val*)(75l<<2|1);
var1600 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1595->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1595, var1596, var1597, var1598, var1599); /* subtexture on <var1595:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_blue_95d3].val = var1600; /* _wing_blue_3 on <self:Spritesheet exact> */
{
var1601 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1602 = (val*)(692l<<2|1);
var1603 = (val*)(924l<<2|1);
var1604 = (val*)(42l<<2|1);
var1605 = (val*)(80l<<2|1);
var1606 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1601->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1601, var1602, var1603, var1604, var1605); /* subtexture on <var1601:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_blue_95d4].val = var1606; /* _wing_blue_4 on <self:Spritesheet exact> */
{
var1607 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1608 = (val*)(596l<<2|1);
var1609 = (val*)(892l<<2|1);
var1610 = (val*)(51l<<2|1);
var1611 = (val*)(69l<<2|1);
var1612 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1607->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1607, var1608, var1609, var1610, var1611); /* subtexture on <var1607:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_blue_95d5].val = var1612; /* _wing_blue_5 on <self:Spritesheet exact> */
{
var1613 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1614 = (val*)(694l<<2|1);
var1615 = (val*)(847l<<2|1);
var1616 = (val*)(42l<<2|1);
var1617 = (val*)(74l<<2|1);
var1618 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1613->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1613, var1614, var1615, var1616, var1617); /* subtexture on <var1613:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_blue_95d6].val = var1618; /* _wing_blue_6 on <self:Spritesheet exact> */
{
var1619 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1620 = (val*)(675l<<2|1);
var1621 = (val*)(134l<<2|1);
var1622 = (val*)(43l<<2|1);
var1623 = (val*)(83l<<2|1);
var1624 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1619->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1619, var1620, var1621, var1622, var1623); /* subtexture on <var1619:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_blue_95d7].val = var1624; /* _wing_blue_7 on <self:Spritesheet exact> */
{
var1625 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1626 = (val*)(650l<<2|1);
var1627 = (val*)(525l<<2|1);
var1628 = (val*)(45l<<2|1);
var1629 = (val*)(78l<<2|1);
var1630 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1625->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1625, var1626, var1627, var1628, var1629); /* subtexture on <var1625:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_green_95d0].val = var1630; /* _wing_green_0 on <self:Spritesheet exact> */
{
var1631 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1632 = (val*)(775l<<2|1);
var1633 = (val*)(229l<<2|1);
var1634 = (val*)(37l<<2|1);
var1635 = (val*)(72l<<2|1);
var1636 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1631->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1631, var1632, var1633, var1634, var1635); /* subtexture on <var1631:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_green_95d1].val = var1636; /* _wing_green_1 on <self:Spritesheet exact> */
{
var1637 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1638 = (val*)(809l<<2|1);
var1639 = (val*)(527l<<2|1);
var1640 = (val*)(26l<<2|1);
var1641 = (val*)(84l<<2|1);
var1642 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1637->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1637, var1638, var1639, var1640, var1641); /* subtexture on <var1637:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_green_95d2].val = var1642; /* _wing_green_2 on <self:Spritesheet exact> */
{
var1643 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1644 = (val*)(535l<<2|1);
var1645 = (val*)(0l<<2|1);
var1646 = (val*)(51l<<2|1);
var1647 = (val*)(75l<<2|1);
var1648 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1643->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1643, var1644, var1645, var1646, var1647); /* subtexture on <var1643:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_green_95d3].val = var1648; /* _wing_green_3 on <self:Spritesheet exact> */
{
var1649 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1650 = (val*)(694l<<2|1);
var1651 = (val*)(431l<<2|1);
var1652 = (val*)(42l<<2|1);
var1653 = (val*)(80l<<2|1);
var1654 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1649->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1649, var1650, var1651, var1652, var1653); /* subtexture on <var1649:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_green_95d4].val = var1654; /* _wing_green_4 on <self:Spritesheet exact> */
{
var1655 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1656 = (val*)(525l<<2|1);
var1657 = (val*)(251l<<2|1);
var1658 = (val*)(51l<<2|1);
var1659 = (val*)(69l<<2|1);
var1660 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1655->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1655, var1656, var1657, var1658, var1659); /* subtexture on <var1655:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_green_95d5].val = var1660; /* _wing_green_5 on <self:Spritesheet exact> */
{
var1661 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1662 = (val*)(695l<<2|1);
var1663 = (val*)(511l<<2|1);
var1664 = (val*)(42l<<2|1);
var1665 = (val*)(74l<<2|1);
var1666 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1661->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1661, var1662, var1663, var1664, var1665); /* subtexture on <var1661:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_green_95d6].val = var1666; /* _wing_green_6 on <self:Spritesheet exact> */
{
var1667 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1668 = (val*)(655l<<2|1);
var1669 = (val*)(764l<<2|1);
var1670 = (val*)(43l<<2|1);
var1671 = (val*)(83l<<2|1);
var1672 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1667->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1667, var1668, var1669, var1670, var1671); /* subtexture on <var1667:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_green_95d7].val = var1672; /* _wing_green_7 on <self:Spritesheet exact> */
{
var1673 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1674 = (val*)(809l<<2|1);
var1675 = (val*)(712l<<2|1);
var1676 = (val*)(26l<<2|1);
var1677 = (val*)(84l<<2|1);
var1678 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1673->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1673, var1674, var1675, var1676, var1677); /* subtexture on <var1673:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_red_95d0].val = var1678; /* _wing_red_0 on <self:Spritesheet exact> */
{
var1679 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1680 = (val*)(768l<<2|1);
var1681 = (val*)(0l<<2|1);
var1682 = (val*)(37l<<2|1);
var1683 = (val*)(72l<<2|1);
var1684 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1679->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1679, var1680, var1681, var1682, var1683); /* subtexture on <var1679:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_red_95d1].val = var1684; /* _wing_red_1 on <self:Spritesheet exact> */
{
var1685 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1686 = (val*)(600l<<2|1);
var1687 = (val*)(300l<<2|1);
var1688 = (val*)(51l<<2|1);
var1689 = (val*)(75l<<2|1);
var1690 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1685->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1685, var1686, var1687, var1688, var1689); /* subtexture on <var1685:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_red_95d2].val = var1690; /* _wing_red_2 on <self:Spritesheet exact> */
{
var1691 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1692 = (val*)(698l<<2|1);
var1693 = (val*)(715l<<2|1);
var1694 = (val*)(42l<<2|1);
var1695 = (val*)(80l<<2|1);
var1696 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1691->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1691, var1692, var1693, var1694, var1695); /* subtexture on <var1691:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_red_95d3].val = var1696; /* _wing_red_3 on <self:Spritesheet exact> */
{
var1697 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1698 = (val*)(586l<<2|1);
var1699 = (val*)(75l<<2|1);
var1700 = (val*)(51l<<2|1);
var1701 = (val*)(69l<<2|1);
var1702 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1697->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1697, var1698, var1699, var1700, var1701); /* subtexture on <var1697:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_red_95d4].val = var1702; /* _wing_red_4 on <self:Spritesheet exact> */
{
var1703 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1704 = (val*)(718l<<2|1);
var1705 = (val*)(123l<<2|1);
var1706 = (val*)(42l<<2|1);
var1707 = (val*)(74l<<2|1);
var1708 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1703->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1703, var1704, var1705, var1706, var1707); /* subtexture on <var1703:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_red_95d5].val = var1708; /* _wing_red_5 on <self:Spritesheet exact> */
{
var1709 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1710 = (val*)(653l<<2|1);
var1711 = (val*)(681l<<2|1);
var1712 = (val*)(43l<<2|1);
var1713 = (val*)(83l<<2|1);
var1714 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1709->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1709, var1710, var1711, var1712, var1713); /* subtexture on <var1709:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_red_95d6].val = var1714; /* _wing_red_6 on <self:Spritesheet exact> */
{
var1715 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1716 = (val*)(651l<<2|1);
var1717 = (val*)(286l<<2|1);
var1718 = (val*)(45l<<2|1);
var1719 = (val*)(78l<<2|1);
var1720 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1715->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1715, var1716, var1717, var1718, var1719); /* subtexture on <var1715:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_red_95d7].val = var1720; /* _wing_red_7 on <self:Spritesheet exact> */
{
var1721 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1722 = (val*)(650l<<2|1);
var1723 = (val*)(603l<<2|1);
var1724 = (val*)(45l<<2|1);
var1725 = (val*)(78l<<2|1);
var1726 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1721->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1721, var1722, var1723, var1724, var1725); /* subtexture on <var1721:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_yellow_95d0].val = var1726; /* _wing_yellow_0 on <self:Spritesheet exact> */
{
var1727 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1728 = (val*)(760l<<2|1);
var1729 = (val*)(120l<<2|1);
var1730 = (val*)(37l<<2|1);
var1731 = (val*)(72l<<2|1);
var1732 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1727->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1727, var1728, var1729, var1730, var1731); /* subtexture on <var1727:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_yellow_95d1].val = var1732; /* _wing_yellow_1 on <self:Spritesheet exact> */
{
var1733 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1734 = (val*)(809l<<2|1);
var1735 = (val*)(353l<<2|1);
var1736 = (val*)(26l<<2|1);
var1737 = (val*)(84l<<2|1);
var1738 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1733->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1733, var1734, var1735, var1736, var1737); /* subtexture on <var1733:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_yellow_95d2].val = var1738; /* _wing_yellow_2 on <self:Spritesheet exact> */
{
var1739 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1740 = (val*)(576l<<2|1);
var1741 = (val*)(150l<<2|1);
var1742 = (val*)(51l<<2|1);
var1743 = (val*)(75l<<2|1);
var1744 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1739->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1739, var1740, var1741, var1742, var1743); /* subtexture on <var1739:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_yellow_95d3].val = var1744; /* _wing_yellow_3 on <self:Spritesheet exact> */
{
var1745 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1746 = (val*)(726l<<2|1);
var1747 = (val*)(0l<<2|1);
var1748 = (val*)(42l<<2|1);
var1749 = (val*)(80l<<2|1);
var1750 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1745->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1745, var1746, var1747, var1748, var1749); /* subtexture on <var1745:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_yellow_95d4].val = var1750; /* _wing_yellow_4 on <self:Spritesheet exact> */
{
var1751 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1752 = (val*)(525l<<2|1);
var1753 = (val*)(182l<<2|1);
var1754 = (val*)(51l<<2|1);
var1755 = (val*)(69l<<2|1);
var1756 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1751->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1751, var1752, var1753, var1754, var1755); /* subtexture on <var1751:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_yellow_95d5].val = var1756; /* _wing_yellow_5 on <self:Spritesheet exact> */
{
var1757 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1758 = (val*)(695l<<2|1);
var1759 = (val*)(585l<<2|1);
var1760 = (val*)(42l<<2|1);
var1761 = (val*)(74l<<2|1);
var1762 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1757->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1757, var1758, var1759, var1760, var1761); /* subtexture on <var1757:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_yellow_95d6].val = var1762; /* _wing_yellow_6 on <self:Spritesheet exact> */
{
var1763 = ((val*(*)(val* self))(self->class->vft[COLOR_physique__spritesheet__Spritesheet__root_texture]))(self); /* root_texture on <self:Spritesheet exact>*/
}
{
var1764 = (val*)(651l<<2|1);
var1765 = (val*)(364l<<2|1);
var1766 = (val*)(43l<<2|1);
var1767 = (val*)(83l<<2|1);
var1768 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var1763->class->vft[COLOR_gamnit__textures__Texture__subtexture]))(var1763, var1764, var1765, var1766, var1767); /* subtexture on <var1763:Texture>*/
}
self->attrs[COLOR_physique__spritesheet__Spritesheet___wing_yellow_95d7].val = var1768; /* _wing_yellow_7 on <self:Spritesheet exact> */
return self;
}
/* runtime class sdl__SDLDisplay: sdl::SDLDisplay (dead=false; need_corpse=true)*/
const struct class class_sdl__SDLDisplay = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to sdl:SDLDisplay:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to sdl:SDLDisplay:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to sdl:SDLDisplay:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to sdl:SDLDisplay:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to sdl:SDLDisplay:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to sdl:SDLDisplay:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to sdl:SDLDisplay:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to sdl:SDLDisplay:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to sdl:SDLDisplay:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to sdl:SDLDisplay:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to sdl:SDLDisplay:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to sdl:SDLDisplay:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to sdl:SDLDisplay:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to sdl:SDLDisplay:kernel#Pointer#address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to sdl:SDLDisplay:kernel#Pointer#free */
(nitmethod_t)sdl___sdl__SDLDisplay___mnit__display__Sized__width, /* pointer to sdl:SDLDisplay:sdl#SDLDisplay#width */
(nitmethod_t)sdl___sdl__SDLDisplay___mnit__display__Sized__height, /* pointer to sdl:SDLDisplay:sdl#SDLDisplay#height */
(nitmethod_t)sdl___sdl__SDLDisplay___events, /* pointer to sdl:SDLDisplay:sdl#SDLDisplay#events */
(nitmethod_t)sdl___sdl__SDLDisplay___poll_event, /* pointer to sdl:SDLDisplay:sdl#SDLDisplay#poll_event */
(nitmethod_t)sdl___sdl__SDLDisplay___input_focus, /* pointer to sdl:SDLDisplay:sdl#SDLDisplay#input_focus */
(nitmethod_t)sdl___sdl__SDLDisplay___ignore_mouse_motion_events_61d, /* pointer to sdl:SDLDisplay:sdl#SDLDisplay#ignore_mouse_motion_events= */
(nitmethod_t)sdl___sdl__SDLDisplay___warp_mouse, /* pointer to sdl:SDLDisplay:sdl#SDLDisplay#warp_mouse */
(nitmethod_t)sdl___sdl__SDLDisplay___new, /* pointer to sdl:SDLDisplay:sdl#SDLDisplay#new */
(nitmethod_t)sdl___sdl__SDLDisplay___new_key_event, /* pointer to sdl:SDLDisplay:sdl#SDLDisplay#new_key_event */
(nitmethod_t)sdl___sdl__SDLDisplay___new_mouse_motion_event, /* pointer to sdl:SDLDisplay:sdl#SDLDisplay#new_mouse_motion_event */
(nitmethod_t)sdl___sdl__SDLDisplay___new_mouse_button_event, /* pointer to sdl:SDLDisplay:sdl#SDLDisplay#new_mouse_button_event */
(nitmethod_t)sdl___sdl__SDLDisplay___new_quit_event, /* pointer to sdl:SDLDisplay:sdl#SDLDisplay#new_quit_event */
(nitmethod_t)sdl___sdl__SDLDisplay___enable_mouse_motion_events, /* pointer to sdl:SDLDisplay:sdl#SDLDisplay#enable_mouse_motion_events */
}
};
/* allocate extern SDLDisplay */
val* NEW_sdl__SDLDisplay(const struct type* type) {
val* self /* : SDLDisplay */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_sdl__SDLDisplay;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class sdl__SDLDrawable: sdl::SDLDrawable (dead=true; need_corpse=true)*/
const struct class class_sdl__SDLDrawable = {
7, /* box_kind */
{
}
};
/* allocate extern SDLDrawable */
val* NEW_sdl__SDLDrawable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "SDLDrawable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class sdl__SDLImage: sdl::SDLImage (dead=false; need_corpse=true)*/
const struct class class_sdl__SDLImage = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to sdl:SDLImage:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to sdl:SDLImage:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to sdl:SDLImage:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to sdl:SDLImage:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to sdl:SDLImage:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to sdl:SDLImage:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to sdl:SDLImage:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to sdl:SDLImage:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to sdl:SDLImage:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to sdl:SDLImage:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to sdl:SDLImage:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to sdl:SDLImage:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to sdl:SDLImage:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to sdl:SDLImage:kernel#Pointer#address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to sdl:SDLImage:kernel#Pointer#free */
(nitmethod_t)sdl___sdl__SDLImage___mnit__display__Sized__width, /* pointer to sdl:SDLImage:sdl#SDLImage#width */
(nitmethod_t)sdl___sdl__SDLImage___mnit__display__Sized__height, /* pointer to sdl:SDLImage:sdl#SDLImage#height */
(nitmethod_t)sdl___sdl__SDLImage___from_file, /* pointer to sdl:SDLImage:sdl#SDLImage#from_file */
(nitmethod_t)sdl___sdl__SDLImage___amask, /* pointer to sdl:SDLImage:sdl#SDLImage#amask */
(nitmethod_t)sdl___sdl__SDLImage___pixels, /* pointer to sdl:SDLImage:sdl#SDLImage#pixels */
}
};
/* allocate extern SDLImage */
val* NEW_sdl__SDLImage(const struct type* type) {
val* self /* : SDLImage */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_sdl__SDLImage;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class sdl__SDLRectangle: sdl::SDLRectangle (dead=true; need_corpse=true)*/
const struct class class_sdl__SDLRectangle = {
7, /* box_kind */
{
}
};
/* allocate extern SDLRectangle */
val* NEW_sdl__SDLRectangle(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "SDLRectangle is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class sdl__SDLInputEvent: sdl::SDLInputEvent (dead=true; need_corpse=false)*/
/* allocate SDLInputEvent */
val* NEW_sdl__SDLInputEvent(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "SDLInputEvent is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class sdl__SDLMouseEvent: sdl::SDLMouseEvent (dead=true; need_corpse=false)*/
/* allocate SDLMouseEvent */
val* NEW_sdl__SDLMouseEvent(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "SDLMouseEvent is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class sdl__SDLMouseButtonEvent: sdl::SDLMouseButtonEvent (dead=false; need_corpse=false)*/
const struct class class_sdl__SDLMouseButtonEvent = {
0, /* box_kind */
{
(nitmethod_t)sdl___sdl__SDLMouseEvent___core__kernel__Object__init, /* pointer to sdl:SDLMouseButtonEvent:sdl#SDLMouseEvent#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to sdl:SDLMouseButtonEvent:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to sdl:SDLMouseButtonEvent:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to sdl:SDLMouseButtonEvent:kernel#Object#== */
(nitmethod_t)sdl___sdl__SDLMouseButtonEvent___core__abstract_text__Object__to_s, /* pointer to sdl:SDLMouseButtonEvent:sdl#SDLMouseButtonEvent#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to sdl:SDLMouseButtonEvent:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to sdl:SDLMouseButtonEvent:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to sdl:SDLMouseButtonEvent:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to sdl:SDLMouseButtonEvent:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to sdl:SDLMouseButtonEvent:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to sdl:SDLMouseButtonEvent:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to sdl:SDLMouseButtonEvent:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to sdl:SDLMouseButtonEvent:abstract_text#Object#native_class_name */
(nitmethod_t)sdl___sdl__SDLMouseEvent___mnit__input__PointerEvent__x, /* pointer to sdl:SDLMouseButtonEvent:sdl#SDLMouseEvent#x */
(nitmethod_t)sdl___sdl__SDLMouseEvent___mnit__input__PointerEvent__y, /* pointer to sdl:SDLMouseButtonEvent:sdl#SDLMouseEvent#y */
(nitmethod_t)sdl___sdl__SDLMouseButtonEvent___mnit__input__PointerEvent__pressed, /* pointer to sdl:SDLMouseButtonEvent:sdl#SDLMouseButtonEvent#pressed */
(nitmethod_t)sdl___sdl__SDLMouseEvent___x_61d, /* pointer to sdl:SDLMouseButtonEvent:sdl#SDLMouseEvent#x= */
(nitmethod_t)sdl___sdl__SDLMouseEvent___y_61d, /* pointer to sdl:SDLMouseButtonEvent:sdl#SDLMouseEvent#y= */
(nitmethod_t)core___core__Object___init, /* pointer to sdl:SDLMouseButtonEvent:kernel#Object#init */
(nitmethod_t)sdl___sdl__SDLMouseButtonEvent___init, /* pointer to sdl:SDLMouseButtonEvent:sdl#SDLMouseButtonEvent#init */
(nitmethod_t)sdl___sdl__SDLMouseButtonEvent___button, /* pointer to sdl:SDLMouseButtonEvent:sdl#SDLMouseButtonEvent#button */
(nitmethod_t)sdl___sdl__SDLMouseButtonEvent___button_61d, /* pointer to sdl:SDLMouseButtonEvent:sdl#SDLMouseButtonEvent#button= */
(nitmethod_t)sdl___sdl__SDLMouseButtonEvent___pressed_61d, /* pointer to sdl:SDLMouseButtonEvent:sdl#SDLMouseButtonEvent#pressed= */
}
};
/* allocate SDLMouseButtonEvent */
val* NEW_sdl__SDLMouseButtonEvent(const struct type* type) {
val* self /* : SDLMouseButtonEvent */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_sdl__SDLMouseButtonEvent;
return self;
}
/* runtime class sdl__SDLMouseMotionEvent: sdl::SDLMouseMotionEvent (dead=false; need_corpse=false)*/
const struct class class_sdl__SDLMouseMotionEvent = {
0, /* box_kind */
{
(nitmethod_t)sdl___sdl__SDLMouseEvent___core__kernel__Object__init, /* pointer to sdl:SDLMouseMotionEvent:sdl#SDLMouseEvent#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to sdl:SDLMouseMotionEvent:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to sdl:SDLMouseMotionEvent:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to sdl:SDLMouseMotionEvent:kernel#Object#== */
(nitmethod_t)sdl___sdl__SDLMouseMotionEvent___core__abstract_text__Object__to_s, /* pointer to sdl:SDLMouseMotionEvent:sdl#SDLMouseMotionEvent#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to sdl:SDLMouseMotionEvent:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to sdl:SDLMouseMotionEvent:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to sdl:SDLMouseMotionEvent:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to sdl:SDLMouseMotionEvent:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to sdl:SDLMouseMotionEvent:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to sdl:SDLMouseMotionEvent:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to sdl:SDLMouseMotionEvent:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to sdl:SDLMouseMotionEvent:abstract_text#Object#native_class_name */
(nitmethod_t)sdl___sdl__SDLMouseEvent___mnit__input__PointerEvent__x, /* pointer to sdl:SDLMouseMotionEvent:sdl#SDLMouseEvent#x */
(nitmethod_t)sdl___sdl__SDLMouseEvent___mnit__input__PointerEvent__y, /* pointer to sdl:SDLMouseMotionEvent:sdl#SDLMouseEvent#y */
(nitmethod_t)sdl___sdl__SDLMouseMotionEvent___mnit__input__PointerEvent__pressed, /* pointer to sdl:SDLMouseMotionEvent:sdl#SDLMouseMotionEvent#pressed */
(nitmethod_t)sdl___sdl__SDLMouseEvent___x_61d, /* pointer to sdl:SDLMouseMotionEvent:sdl#SDLMouseEvent#x= */
(nitmethod_t)sdl___sdl__SDLMouseEvent___y_61d, /* pointer to sdl:SDLMouseMotionEvent:sdl#SDLMouseEvent#y= */
(nitmethod_t)core___core__Object___init, /* pointer to sdl:SDLMouseMotionEvent:kernel#Object#init */
(nitmethod_t)sdl___sdl__SDLMouseMotionEvent___init, /* pointer to sdl:SDLMouseMotionEvent:sdl#SDLMouseMotionEvent#init */
(nitmethod_t)sdl___sdl__SDLMouseMotionEvent___rel_x_61d, /* pointer to sdl:SDLMouseMotionEvent:sdl#SDLMouseMotionEvent#rel_x= */
(nitmethod_t)sdl___sdl__SDLMouseMotionEvent___rel_y_61d, /* pointer to sdl:SDLMouseMotionEvent:sdl#SDLMouseMotionEvent#rel_y= */
(nitmethod_t)sdl___sdl__SDLMouseMotionEvent___pressed_61d, /* pointer to sdl:SDLMouseMotionEvent:sdl#SDLMouseMotionEvent#pressed= */
}
};
/* allocate SDLMouseMotionEvent */
val* NEW_sdl__SDLMouseMotionEvent(const struct type* type) {
val* self /* : SDLMouseMotionEvent */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_sdl__SDLMouseMotionEvent;
return self;
}
/* runtime class sdl__SDLKeyEvent: sdl::SDLKeyEvent (dead=false; need_corpse=false)*/
const struct class class_sdl__SDLKeyEvent = {
0, /* box_kind */
{
(nitmethod_t)sdl___sdl__SDLKeyEvent___core__kernel__Object__init, /* pointer to sdl:SDLKeyEvent:sdl#SDLKeyEvent#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to sdl:SDLKeyEvent:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to sdl:SDLKeyEvent:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to sdl:SDLKeyEvent:kernel#Object#== */
(nitmethod_t)sdl___sdl__SDLKeyEvent___core__abstract_text__Object__to_s, /* pointer to sdl:SDLKeyEvent:sdl#SDLKeyEvent#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to sdl:SDLKeyEvent:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to sdl:SDLKeyEvent:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to sdl:SDLKeyEvent:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to sdl:SDLKeyEvent:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to sdl:SDLKeyEvent:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to sdl:SDLKeyEvent:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to sdl:SDLKeyEvent:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to sdl:SDLKeyEvent:abstract_text#Object#native_class_name */
(nitmethod_t)physique__engine___mnit__KeyEvent___move, /* pointer to sdl:SDLKeyEvent:engine#KeyEvent#move */
(nitmethod_t)physique__engine___mnit__KeyEvent___move_bis, /* pointer to sdl:SDLKeyEvent:engine#KeyEvent#move_bis */
(nitmethod_t)sdl___sdl__SDLKeyEvent___mnit__input__KeyEvent__is_arrow_right, /* pointer to sdl:SDLKeyEvent:sdl#SDLKeyEvent#is_arrow_right */
(nitmethod_t)sdl___sdl__SDLKeyEvent___mnit__input__KeyEvent__is_arrow_left, /* pointer to sdl:SDLKeyEvent:sdl#SDLKeyEvent#is_arrow_left */
(nitmethod_t)sdl___sdl__SDLKeyEvent___mnit__input__KeyEvent__name, /* pointer to sdl:SDLKeyEvent:sdl#SDLKeyEvent#name */
(nitmethod_t)sdl___sdl__SDLKeyEvent___name_61d, /* pointer to sdl:SDLKeyEvent:sdl#SDLKeyEvent#name= */
(nitmethod_t)sdl___sdl__SDLKeyEvent___down_61d, /* pointer to sdl:SDLKeyEvent:sdl#SDLKeyEvent#down= */
(nitmethod_t)sdl___sdl__SDLKeyEvent___down, /* pointer to sdl:SDLKeyEvent:sdl#SDLKeyEvent#down */
(nitmethod_t)core___core__Object___init, /* pointer to sdl:SDLKeyEvent:kernel#Object#init */
}
};
/* allocate SDLKeyEvent */
val* NEW_sdl__SDLKeyEvent(const struct type* type) {
val* self /* : SDLKeyEvent */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_sdl__SDLKeyEvent;
return self;
}
/* runtime class sdl__SDLQuitEvent: sdl::SDLQuitEvent (dead=false; need_corpse=false)*/
const struct class class_sdl__SDLQuitEvent = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to sdl:SDLQuitEvent:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to sdl:SDLQuitEvent:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to sdl:SDLQuitEvent:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to sdl:SDLQuitEvent:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to sdl:SDLQuitEvent:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to sdl:SDLQuitEvent:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to sdl:SDLQuitEvent:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to sdl:SDLQuitEvent:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to sdl:SDLQuitEvent:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to sdl:SDLQuitEvent:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to sdl:SDLQuitEvent:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to sdl:SDLQuitEvent:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to sdl:SDLQuitEvent:abstract_text#Object#native_class_name */
}
};
/* allocate SDLQuitEvent */
val* NEW_sdl__SDLQuitEvent(const struct type* type) {
val* self /* : SDLQuitEvent */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_sdl__SDLQuitEvent;
return self;
}
/* runtime class sdl__SDLFont: sdl::SDLFont (dead=true; need_corpse=true)*/
const struct class class_sdl__SDLFont = {
7, /* box_kind */
{
}
};
/* allocate extern SDLFont */
val* NEW_sdl__SDLFont(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "SDLFont is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class sdl__SDLSystemWindowManagerInfo: sdl::SDLSystemWindowManagerInfo (dead=false; need_corpse=true)*/
const struct class class_sdl__SDLSystemWindowManagerInfo = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to sdl:SDLSystemWindowManagerInfo:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to sdl:SDLSystemWindowManagerInfo:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to sdl:SDLSystemWindowManagerInfo:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to sdl:SDLSystemWindowManagerInfo:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to sdl:SDLSystemWindowManagerInfo:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to sdl:SDLSystemWindowManagerInfo:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to sdl:SDLSystemWindowManagerInfo:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to sdl:SDLSystemWindowManagerInfo:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to sdl:SDLSystemWindowManagerInfo:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to sdl:SDLSystemWindowManagerInfo:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to sdl:SDLSystemWindowManagerInfo:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to sdl:SDLSystemWindowManagerInfo:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to sdl:SDLSystemWindowManagerInfo:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to sdl:SDLSystemWindowManagerInfo:kernel#Pointer#address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to sdl:SDLSystemWindowManagerInfo:kernel#Pointer#free */
(nitmethod_t)sdl___sdl__SDLSystemWindowManagerInfo___new, /* pointer to sdl:SDLSystemWindowManagerInfo:sdl#SDLSystemWindowManagerInfo#new */
(nitmethod_t)sdl___sdl__SDLSystemWindowManagerInfo___x11_window_handle, /* pointer to sdl:SDLSystemWindowManagerInfo:sdl#SDLSystemWindowManagerInfo#x11_window_handle */
}
};
/* allocate extern SDLSystemWindowManagerInfo */
val* NEW_sdl__SDLSystemWindowManagerInfo(const struct type* type) {
val* self /* : SDLSystemWindowManagerInfo */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_sdl__SDLSystemWindowManagerInfo;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class mnit__Sized: mnit::Sized (dead=true; need_corpse=false)*/
/* allocate Sized */
val* NEW_mnit__Sized(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Sized is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class mnit__Image: mnit::Image (dead=true; need_corpse=false)*/
/* allocate Image */
val* NEW_mnit__Image(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Image is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class mnit__Drawable: mnit::Drawable (dead=true; need_corpse=false)*/
/* allocate Drawable */
val* NEW_mnit__Drawable(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Drawable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class mnit__Display: mnit::Display (dead=true; need_corpse=false)*/
/* allocate Display */
val* NEW_mnit__Display(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Display is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class mnit__DrawableImage: mnit::DrawableImage (dead=true; need_corpse=false)*/
/* allocate DrawableImage */
val* NEW_mnit__DrawableImage(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DrawableImage is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class egl__EGLNativeDisplayType: egl::EGLNativeDisplayType (dead=true; need_corpse=true)*/
const struct class class_egl__EGLNativeDisplayType = {
7, /* box_kind */
{
}
};
/* allocate extern EGLNativeDisplayType */
val* NEW_egl__EGLNativeDisplayType(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "EGLNativeDisplayType is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class egl__EGLDisplay: egl::EGLDisplay (dead=false; need_corpse=true)*/
const struct class class_egl__EGLDisplay = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to egl:EGLDisplay:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to egl:EGLDisplay:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to egl:EGLDisplay:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to egl:EGLDisplay:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to egl:EGLDisplay:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to egl:EGLDisplay:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to egl:EGLDisplay:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to egl:EGLDisplay:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to egl:EGLDisplay:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to egl:EGLDisplay:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to egl:EGLDisplay:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to egl:EGLDisplay:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to egl:EGLDisplay:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to egl:EGLDisplay:kernel#Pointer#address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to egl:EGLDisplay:kernel#Pointer#free */
(nitmethod_t)egl___egl__EGLDisplay___swap_buffers, /* pointer to egl:EGLDisplay:egl#EGLDisplay#swap_buffers */
(nitmethod_t)egl___egl__EGLDisplay___query_surface, /* pointer to egl:EGLDisplay:egl#EGLDisplay#query_surface */
(nitmethod_t)egl___egl__EGLDisplay___new, /* pointer to egl:EGLDisplay:egl#EGLDisplay#new */
(nitmethod_t)egl___egl__EGLDisplay___is_valid, /* pointer to egl:EGLDisplay:egl#EGLDisplay#is_valid */
(nitmethod_t)egl___egl__EGLDisplay___initialize, /* pointer to egl:EGLDisplay:egl#EGLDisplay#initialize */
(nitmethod_t)egl___egl__EGLDisplay___error, /* pointer to egl:EGLDisplay:egl#EGLDisplay#error */
(nitmethod_t)egl___egl__EGLDisplay___create_window_surface, /* pointer to egl:EGLDisplay:egl#EGLDisplay#create_window_surface */
(nitmethod_t)egl___egl__EGLDisplay___create_context, /* pointer to egl:EGLDisplay:egl#EGLDisplay#create_context */
(nitmethod_t)egl___egl__EGLDisplay___make_current, /* pointer to egl:EGLDisplay:egl#EGLDisplay#make_current */
(nitmethod_t)egl___egl__EGLDisplay___choose_configs, /* pointer to egl:EGLDisplay:egl#EGLDisplay#choose_configs */
(nitmethod_t)egl___egl__EGLDisplay___config_attrib, /* pointer to egl:EGLDisplay:egl#EGLDisplay#config_attrib */
(nitmethod_t)egl___egl__EGLDisplay___report_egl_error, /* pointer to egl:EGLDisplay:egl#EGLDisplay#report_egl_error */
}
};
/* allocate extern EGLDisplay */
val* NEW_egl__EGLDisplay(const struct type* type) {
val* self /* : EGLDisplay */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_egl__EGLDisplay;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class egl__EGLConfig: egl::EGLConfig (dead=false; need_corpse=true)*/
const struct class class_egl__EGLConfig = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to egl:EGLConfig:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to egl:EGLConfig:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to egl:EGLConfig:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to egl:EGLConfig:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to egl:EGLConfig:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to egl:EGLConfig:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to egl:EGLConfig:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to egl:EGLConfig:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to egl:EGLConfig:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to egl:EGLConfig:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to egl:EGLConfig:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to egl:EGLConfig:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to egl:EGLConfig:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to egl:EGLConfig:kernel#Pointer#address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to egl:EGLConfig:kernel#Pointer#free */
(nitmethod_t)egl___egl__EGLConfig___attribs, /* pointer to egl:EGLConfig:egl#EGLConfig#attribs */
}
};
/* allocate extern EGLConfig */
val* NEW_egl__EGLConfig(const struct type* type) {
val* self /* : EGLConfig */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_egl__EGLConfig;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class egl__EGLSurface: egl::EGLSurface (dead=false; need_corpse=true)*/
const struct class class_egl__EGLSurface = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to egl:EGLSurface:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to egl:EGLSurface:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to egl:EGLSurface:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to egl:EGLSurface:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to egl:EGLSurface:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to egl:EGLSurface:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to egl:EGLSurface:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to egl:EGLSurface:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to egl:EGLSurface:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to egl:EGLSurface:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to egl:EGLSurface:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to egl:EGLSurface:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to egl:EGLSurface:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to egl:EGLSurface:kernel#Pointer#address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to egl:EGLSurface:kernel#Pointer#free */
(nitmethod_t)egl___egl__EGLSurface___attribs, /* pointer to egl:EGLSurface:egl#EGLSurface#attribs */
(nitmethod_t)egl___egl__EGLSurface___is_ok, /* pointer to egl:EGLSurface:egl#EGLSurface#is_ok */
}
};
/* allocate extern EGLSurface */
val* NEW_egl__EGLSurface(const struct type* type) {
val* self /* : EGLSurface */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_egl__EGLSurface;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class egl__EGLContext: egl::EGLContext (dead=false; need_corpse=true)*/
const struct class class_egl__EGLContext = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to egl:EGLContext:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to egl:EGLContext:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to egl:EGLContext:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to egl:EGLContext:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to egl:EGLContext:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to egl:EGLContext:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to egl:EGLContext:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to egl:EGLContext:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to egl:EGLContext:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to egl:EGLContext:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to egl:EGLContext:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to egl:EGLContext:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to egl:EGLContext:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to egl:EGLContext:kernel#Pointer#address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to egl:EGLContext:kernel#Pointer#free */
(nitmethod_t)egl___egl__EGLContext___is_ok, /* pointer to egl:EGLContext:egl#EGLContext#is_ok */
}
};
/* allocate extern EGLContext */
val* NEW_egl__EGLContext(const struct type* type) {
val* self /* : EGLContext */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_egl__EGLContext;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class egl__EGLConfigAttribs: egl::EGLConfigAttribs (dead=false; need_corpse=false)*/
const struct class class_egl__EGLConfigAttribs = {
0, /* box_kind */
{
(nitmethod_t)egl___egl__EGLConfigAttribs___core__kernel__Object__init, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to egl:EGLConfigAttribs:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to egl:EGLConfigAttribs:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to egl:EGLConfigAttribs:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to egl:EGLConfigAttribs:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to egl:EGLConfigAttribs:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to egl:EGLConfigAttribs:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to egl:EGLConfigAttribs:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to egl:EGLConfigAttribs:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to egl:EGLConfigAttribs:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to egl:EGLConfigAttribs:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to egl:EGLConfigAttribs:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to egl:EGLConfigAttribs:abstract_text#Object#native_class_name */
(nitmethod_t)egl___egl__EGLConfigAttribs___conformant, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#conformant */
(nitmethod_t)egl___egl__EGLConfigAttribs___caveat, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#caveat */
(nitmethod_t)egl___egl__EGLConfigAttribs___red_size, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#red_size */
(nitmethod_t)egl___egl__EGLConfigAttribs___green_size, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#green_size */
(nitmethod_t)egl___egl__EGLConfigAttribs___blue_size, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#blue_size */
(nitmethod_t)egl___egl__EGLConfigAttribs___alpha_size, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#alpha_size */
(nitmethod_t)egl___egl__EGLConfigAttribs___buffer_size, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#buffer_size */
(nitmethod_t)egl___egl__EGLConfigAttribs___depth_size, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#depth_size */
(nitmethod_t)egl___egl__EGLConfigAttribs___stencil_size, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#stencil_size */
(nitmethod_t)egl___egl__EGLConfigAttribs___display_61d, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#display= */
(nitmethod_t)egl___egl__EGLConfigAttribs___config_61d, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#config= */
(nitmethod_t)egl___egl__EGLConfigAttribs___display, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#display */
(nitmethod_t)egl___egl__EGLConfigAttribs___config, /* pointer to egl:EGLConfigAttribs:egl#EGLConfigAttribs#config */
(nitmethod_t)core___core__Object___init, /* pointer to egl:EGLConfigAttribs:kernel#Object#init */
}
};
/* allocate EGLConfigAttribs */
val* NEW_egl__EGLConfigAttribs(const struct type* type) {
val* self /* : EGLConfigAttribs */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_egl__EGLConfigAttribs;
return self;
}
/* runtime class egl__EGLConfigCaveat: egl::EGLConfigCaveat (dead=false; need_corpse=true)*/
const struct class class_egl__EGLConfigCaveat = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to egl:EGLConfigCaveat:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to egl:EGLConfigCaveat:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to egl:EGLConfigCaveat:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to egl:EGLConfigCaveat:kernel#Object#== */
(nitmethod_t)egl___egl__EGLConfigCaveat___core__abstract_text__Object__to_s, /* pointer to egl:EGLConfigCaveat:egl#EGLConfigCaveat#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to egl:EGLConfigCaveat:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to egl:EGLConfigCaveat:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to egl:EGLConfigCaveat:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to egl:EGLConfigCaveat:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to egl:EGLConfigCaveat:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to egl:EGLConfigCaveat:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to egl:EGLConfigCaveat:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to egl:EGLConfigCaveat:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to egl:EGLConfigCaveat:kernel#Pointer#address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to egl:EGLConfigCaveat:kernel#Pointer#free */
(nitmethod_t)egl___egl__EGLConfigCaveat___from_i, /* pointer to egl:EGLConfigCaveat:egl#EGLConfigCaveat#from_i */
(nitmethod_t)egl___egl__EGLConfigCaveat___is_none, /* pointer to egl:EGLConfigCaveat:egl#EGLConfigCaveat#is_none */
(nitmethod_t)egl___egl__EGLConfigCaveat___is_dont_care, /* pointer to egl:EGLConfigCaveat:egl#EGLConfigCaveat#is_dont_care */
(nitmethod_t)egl___egl__EGLConfigCaveat___is_slow, /* pointer to egl:EGLConfigCaveat:egl#EGLConfigCaveat#is_slow */
(nitmethod_t)egl___egl__EGLConfigCaveat___is_non_conformant, /* pointer to egl:EGLConfigCaveat:egl#EGLConfigCaveat#is_non_conformant */
}
};
/* allocate extern EGLConfigCaveat */
val* NEW_egl__EGLConfigCaveat(const struct type* type) {
val* self /* : EGLConfigCaveat */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_egl__EGLConfigCaveat;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class egl__EGLConformant: egl::EGLConformant (dead=false; need_corpse=true)*/
const struct class class_egl__EGLConformant = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to egl:EGLConformant:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to egl:EGLConformant:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to egl:EGLConformant:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to egl:EGLConformant:kernel#Object#== */
(nitmethod_t)egl___egl__EGLConformant___core__abstract_text__Object__to_s, /* pointer to egl:EGLConformant:egl#EGLConformant#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to egl:EGLConformant:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to egl:EGLConformant:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to egl:EGLConformant:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to egl:EGLConformant:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to egl:EGLConformant:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to egl:EGLConformant:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to egl:EGLConformant:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to egl:EGLConformant:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to egl:EGLConformant:kernel#Pointer#address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to egl:EGLConformant:kernel#Pointer#free */
(nitmethod_t)egl___egl__EGLConformant___from_i, /* pointer to egl:EGLConformant:egl#EGLConformant#from_i */
(nitmethod_t)egl___egl__EGLConformant___to_a, /* pointer to egl:EGLConformant:egl#EGLConformant#to_a */
(nitmethod_t)egl___egl__EGLConformant___opengl, /* pointer to egl:EGLConformant:egl#EGLConformant#opengl */
(nitmethod_t)egl___egl__EGLConformant___opengl_es, /* pointer to egl:EGLConformant:egl#EGLConformant#opengl_es */
(nitmethod_t)egl___egl__EGLConformant___opengl_es2, /* pointer to egl:EGLConformant:egl#EGLConformant#opengl_es2 */
(nitmethod_t)egl___egl__EGLConformant___openvg, /* pointer to egl:EGLConformant:egl#EGLConformant#openvg */
}
};
/* allocate extern EGLConformant */
val* NEW_egl__EGLConformant(const struct type* type) {
val* self /* : EGLConformant */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_egl__EGLConformant;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class egl__EGLSurfaceAttribs: egl::EGLSurfaceAttribs (dead=false; need_corpse=false)*/
const struct class class_egl__EGLSurfaceAttribs = {
0, /* box_kind */
{
(nitmethod_t)egl___egl__EGLSurfaceAttribs___core__kernel__Object__init, /* pointer to egl:EGLSurfaceAttribs:egl#EGLSurfaceAttribs#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to egl:EGLSurfaceAttribs:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to egl:EGLSurfaceAttribs:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to egl:EGLSurfaceAttribs:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to egl:EGLSurfaceAttribs:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to egl:EGLSurfaceAttribs:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to egl:EGLSurfaceAttribs:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to egl:EGLSurfaceAttribs:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to egl:EGLSurfaceAttribs:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to egl:EGLSurfaceAttribs:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to egl:EGLSurfaceAttribs:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to egl:EGLSurfaceAttribs:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to egl:EGLSurfaceAttribs:abstract_text#Object#native_class_name */
(nitmethod_t)egl___egl__EGLSurfaceAttribs___width, /* pointer to egl:EGLSurfaceAttribs:egl#EGLSurfaceAttribs#width */
(nitmethod_t)egl___egl__EGLSurfaceAttribs___height, /* pointer to egl:EGLSurfaceAttribs:egl#EGLSurfaceAttribs#height */
(nitmethod_t)egl___egl__EGLSurfaceAttribs___display, /* pointer to egl:EGLSurfaceAttribs:egl#EGLSurfaceAttribs#display */
(nitmethod_t)egl___egl__EGLSurfaceAttribs___surface, /* pointer to egl:EGLSurfaceAttribs:egl#EGLSurfaceAttribs#surface */
(nitmethod_t)egl___egl__EGLSurfaceAttribs___display_61d, /* pointer to egl:EGLSurfaceAttribs:egl#EGLSurfaceAttribs#display= */
(nitmethod_t)egl___egl__EGLSurfaceAttribs___surface_61d, /* pointer to egl:EGLSurfaceAttribs:egl#EGLSurfaceAttribs#surface= */
(nitmethod_t)core___core__Object___init, /* pointer to egl:EGLSurfaceAttribs:kernel#Object#init */
}
};
/* allocate EGLSurfaceAttribs */
val* NEW_egl__EGLSurfaceAttribs(const struct type* type) {
val* self /* : EGLSurfaceAttribs */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_egl__EGLSurfaceAttribs;
return self;
}
/* runtime class egl__EGLError: egl::EGLError (dead=false; need_corpse=true)*/
const struct class class_egl__EGLError = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to egl:EGLError:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to egl:EGLError:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to egl:EGLError:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to egl:EGLError:kernel#Object#== */
(nitmethod_t)egl___egl__EGLError___core__abstract_text__Object__to_s, /* pointer to egl:EGLError:egl#EGLError#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to egl:EGLError:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to egl:EGLError:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to egl:EGLError:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to egl:EGLError:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to egl:EGLError:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to egl:EGLError:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to egl:EGLError:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to egl:EGLError:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to egl:EGLError:kernel#Pointer#address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to egl:EGLError:kernel#Pointer#free */
(nitmethod_t)egl___egl__EGLError___is_not_initialized, /* pointer to egl:EGLError:egl#EGLError#is_not_initialized */
(nitmethod_t)egl___egl__EGLError___is_bad_access, /* pointer to egl:EGLError:egl#EGLError#is_bad_access */
(nitmethod_t)egl___egl__EGLError___is_bad_alloc, /* pointer to egl:EGLError:egl#EGLError#is_bad_alloc */
(nitmethod_t)egl___egl__EGLError___is_bad_attribute, /* pointer to egl:EGLError:egl#EGLError#is_bad_attribute */
(nitmethod_t)egl___egl__EGLError___is_bad_config, /* pointer to egl:EGLError:egl#EGLError#is_bad_config */
(nitmethod_t)egl___egl__EGLError___is_bad_context, /* pointer to egl:EGLError:egl#EGLError#is_bad_context */
(nitmethod_t)egl___egl__EGLError___is_bad_current_surface, /* pointer to egl:EGLError:egl#EGLError#is_bad_current_surface */
(nitmethod_t)egl___egl__EGLError___is_bad_display, /* pointer to egl:EGLError:egl#EGLError#is_bad_display */
(nitmethod_t)egl___egl__EGLError___is_bad_match, /* pointer to egl:EGLError:egl#EGLError#is_bad_match */
(nitmethod_t)egl___egl__EGLError___is_bad_native_pixmap, /* pointer to egl:EGLError:egl#EGLError#is_bad_native_pixmap */
(nitmethod_t)egl___egl__EGLError___is_bad_native_window, /* pointer to egl:EGLError:egl#EGLError#is_bad_native_window */
(nitmethod_t)egl___egl__EGLError___is_bad_parameter, /* pointer to egl:EGLError:egl#EGLError#is_bad_parameter */
(nitmethod_t)egl___egl__EGLError___is_bad_surface, /* pointer to egl:EGLError:egl#EGLError#is_bad_surface */
(nitmethod_t)egl___egl__EGLError___is_context_lost, /* pointer to egl:EGLError:egl#EGLError#is_context_lost */
}
};
/* allocate extern EGLError */
val* NEW_egl__EGLError(const struct type* type) {
val* self /* : EGLError */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_egl__EGLError;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class egl__EGLContextAttribute: egl::EGLContextAttribute (dead=true; need_corpse=true)*/
const struct class class_egl__EGLContextAttribute = {
7, /* box_kind */
{
}
};
/* allocate extern EGLContextAttribute */
val* NEW_egl__EGLContextAttribute(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "EGLContextAttribute is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class egl__EGLConfigChooser: egl::EGLConfigChooser (dead=false; need_corpse=false)*/
const struct class class_egl__EGLConfigChooser = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to egl:EGLConfigChooser:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to egl:EGLConfigChooser:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to egl:EGLConfigChooser:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to egl:EGLConfigChooser:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to egl:EGLConfigChooser:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to egl:EGLConfigChooser:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___is_same_type, /* pointer to egl:EGLConfigChooser:kernel#Object#is_same_type */
(nitmethod_t)core___core__Object___hash, /* pointer to egl:EGLConfigChooser:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to egl:EGLConfigChooser:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to egl:EGLConfigChooser:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to egl:EGLConfigChooser:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to egl:EGLConfigChooser:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to egl:EGLConfigChooser:abstract_text#Object#native_class_name */
(nitmethod_t)egl___egl__EGLConfigChooser___renderable_type_egl, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#renderable_type_egl */
(nitmethod_t)egl___egl__EGLConfigChooser___surface_type_egl, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#surface_type_egl */
(nitmethod_t)egl___egl__EGLConfigChooser___blue_size_61d, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#blue_size= */
(nitmethod_t)egl___egl__EGLConfigChooser___green_size_61d, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#green_size= */
(nitmethod_t)egl___egl__EGLConfigChooser___red_size_61d, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#red_size= */
(nitmethod_t)egl___egl__EGLConfigChooser___alpha_size_61d, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#alpha_size= */
(nitmethod_t)egl___egl__EGLConfigChooser___depth_size_61d, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#depth_size= */
(nitmethod_t)egl___egl__EGLConfigChooser___stencil_size_61d, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#stencil_size= */
(nitmethod_t)egl___egl__EGLConfigChooser___sample_buffers_61d, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#sample_buffers= */
(nitmethod_t)egl___egl__EGLConfigChooser___close, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#close */
(nitmethod_t)egl___egl__EGLConfigChooser___choose, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#choose */
(nitmethod_t)egl___egl__EGLConfigChooser___renderable_type_61d, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#renderable_type= */
(nitmethod_t)egl___egl__EGLConfigChooser___surface_type_61d, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#surface_type= */
(nitmethod_t)egl___egl__EGLConfigChooser___insert_attrib_with_val, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#insert_attrib_with_val */
(nitmethod_t)egl___egl__EGLConfigChooser___insert_attrib_key, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#insert_attrib_key */
(nitmethod_t)egl___egl__EGLConfigChooser___closed_61d, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#closed= */
(nitmethod_t)egl___egl__EGLConfigChooser___closed, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#closed */
(nitmethod_t)egl___egl__EGLConfigChooser___array, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#array */
(nitmethod_t)egl___egl__EGLConfigChooser___inserted_attribs, /* pointer to egl:EGLConfigChooser:egl#EGLConfigChooser#inserted_attribs */
}
};
/* allocate EGLConfigChooser */
val* NEW_egl__EGLConfigChooser(const struct type* type) {
val* self /* : EGLConfigChooser */;
val* var /* : Array[Int] */;
val* var1 /* : Array[Int] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_egl__EGLConfigChooser;
var = NEW_core__Array(&type_core__Array__core__Int);
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Array[Int]>*/
}
self->attrs[COLOR_egl__EGLConfigChooser___array].val = var; /* _array on <self:EGLConfigChooser exact> */
self->attrs[COLOR_egl__EGLConfigChooser___closed].s = 0; /* _closed on <self:EGLConfigChooser exact> */
var1 = NEW_core__Array(&type_core__Array__core__Int);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[Int]>*/
}
self->attrs[COLOR_egl__EGLConfigChooser___inserted_attribs].val = var1; /* _inserted_attribs on <self:EGLConfigChooser exact> */
return self;
}
