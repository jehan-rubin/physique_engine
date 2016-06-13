#include "x11.sep.0.h"
/* method x11#Sys#x_open_default_display for (self: Sys): Pointer */
val* x11___core__Sys___x_open_default_display(val* self) {
val* var /* : Pointer */;
val* var1 /* : Pointer */;
val* var2 /* : Pointer */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = x11___Sys_x_open_default_display___impl(var_for_c_0);
var2 = BOX_core__Pointer(var1); /* boxing Pointer */
var2->type = &type_core__Pointer;
var2->class = &class_core__Pointer;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method x11#Sys#x_open_display for (self: Sys, String): Pointer */
val* x11___core__Sys___x_open_display(val* self, val* p0) {
val* var /* : Pointer */;
val* var1 /* : Pointer */;
val* var2 /* : Pointer */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* var_for_c_1;
var_for_c_1 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
var1 = x11___Sys_x_open_display___impl(var_for_c_0, var_for_c_1);
var2 = BOX_core__Pointer(var1); /* boxing Pointer */
var2->type = &type_core__Pointer;
var2->class = &class_core__Pointer;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* nitni callback for core::Text::to_cstring */
char* x11___String_to_cstring( struct nitni_instance * self ) {
char* var /* : NativeString */;
{
var = ((char*(*)(val* self))(self->value->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self->value); /* to_cstring on <self->value:String>*/
}
return var;
}
