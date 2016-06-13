#include "engine_45dm.main.0.h"
struct nitni_global_ref_list_t *nitni_global_ref_list;
void initialize_nitni_global_refs() {
	nitni_global_ref_list = (struct nitni_global_ref_list_t*)nit_alloc(sizeof(struct nitni_global_ref_list_t));
	nitni_global_ref_list->head = NULL;
	nitni_global_ref_list->tail = NULL;
}

void nitni_global_ref_add( struct nitni_ref *ref ) {
	if ( nitni_global_ref_list->head == NULL ) {
		nitni_global_ref_list->head = ref;
		ref->prev = NULL;
	} else {
		nitni_global_ref_list->tail->next = ref;
		ref->prev = nitni_global_ref_list->tail;
	}
	nitni_global_ref_list->tail = ref;

	ref->next = NULL;
}

void nitni_global_ref_remove( struct nitni_ref *ref ) {
	if ( ref->prev == NULL ) {
		nitni_global_ref_list->head = ref->next;
	} else {
		ref->prev->next = ref->next;
	}

	if ( ref->next == NULL ) {
		nitni_global_ref_list->tail = ref->prev;
	} else {
		ref->next->prev = ref->prev;
	}
}

extern void nitni_global_ref_incr( struct nitni_ref *ref ) {
	if ( ref->count == 0 ) /* not registered */
	{
		/* add to list */
		nitni_global_ref_add( ref );
	}

	ref->count ++;
}

extern void nitni_global_ref_decr( struct nitni_ref *ref ) {
	if ( ref->count == 1 ) /* was last reference */
	{
		/* remove from list */
		nitni_global_ref_remove( ref );
	}

	ref->count --;
}

#include <signal.h>
#ifndef NO_STACKTRACE
#define UNW_LOCAL_ONLY
#include <libunwind.h>
#include "c_functions_hash.h"
#endif
int glob_argc;
char **glob_argv;
val *glob_sys;
static void show_backtrace(void) {
#ifndef NO_STACKTRACE
char* opt = getenv("NIT_NO_STACK");
unw_cursor_t cursor;
if(opt==NULL){
unw_context_t uc;
unw_word_t ip;
char* procname = malloc(sizeof(char) * 100);
unw_getcontext(&uc);
unw_init_local(&cursor, &uc);
PRINT_ERROR("-------------------------------------------------\n");
PRINT_ERROR("--   Stack Trace   ------------------------------\n");
PRINT_ERROR("-------------------------------------------------\n");
while (unw_step(&cursor) > 0) {
	unw_get_proc_name(&cursor, procname, 100, &ip);
	const char* recv = get_nit_name(procname, strlen(procname));
	if (recv != NULL){
		PRINT_ERROR("` %s\n", recv);
	}else{
		PRINT_ERROR("` %s\n", procname);
	}
}
PRINT_ERROR("-------------------------------------------------\n");
free(procname);
}
#endif /* NO_STACKTRACE */
}
void sig_handler(int signo){
PRINT_ERROR("Caught signal : %s\n", strsignal(signo));
show_backtrace();
signal(signo, SIG_DFL);
kill(getpid(), signo);
}
void fatal_exit(int status) {
show_backtrace();
exit(status);
}
int main(int argc, char** argv) {
val* var /* : Sys */;
#if !defined(__ANDROID__) && !defined(TARGET_OS_IPHONE)
signal(SIGABRT, sig_handler);
signal(SIGFPE, sig_handler);
signal(SIGILL, sig_handler);
signal(SIGINT, sig_handler);
signal(SIGTERM, sig_handler);
signal(SIGSEGV, sig_handler);
#endif
signal(SIGPIPE, SIG_IGN);
glob_argc = argc; glob_argv = argv;
initialize_gc_option();
initialize_nitni_global_refs();
var = NEW_core__Sys(&type_core__Sys);
glob_sys = var;
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Sys>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Sys__run]))(var); /* run on <var:Sys>*/
}
return 0;
}
const char FILE_engine_45dm[] = "src/engine.nit";
const char FILE_physique__engine[] = "src/engine.nit";
const char FILE_physique__world[] = "src/world.nit";
const char FILE_date[] = "../../lib/date.nit";
const char FILE_core[] = "../../lib/core/core.nit";
const char FILE_core__posix[] = "../../lib/core/posix.nit";
const char FILE_core__text[] = "../../lib/core/text/text.nit";
const char FILE_core__ropes[] = "../../lib/core/text/ropes.nit";
const char FILE_core__flat[] = "../../lib/core/text/flat.nit";
const char FILE_core__abstract_text[] = "../../lib/core/text/abstract_text.nit";
const char FILE_core__native[] = "../../lib/core/text/native.nit";
const char FILE_core__kernel[] = "../../lib/core/kernel.nit";
const char FILE_core__math[] = "../../lib/core/math.nit";
const char FILE_core__collection[] = "../../lib/core/collection/collection.nit";
const char FILE_core__range[] = "../../lib/core/collection/range.nit";
const char FILE_core__abstract_collection[] = "../../lib/core/collection/abstract_collection.nit";
const char FILE_core__list[] = "../../lib/core/collection/list.nit";
const char FILE_core__array[] = "../../lib/core/collection/array.nit";
const char FILE_core__circular_array[] = "../../lib/core/collection/circular_array.nit";
const char FILE_core__sorter[] = "../../lib/core/collection/sorter.nit";
const char FILE_core__hash_collection[] = "../../lib/core/collection/hash_collection.nit";
const char FILE_core__union_find[] = "../../lib/core/collection/union_find.nit";
const char FILE_core__string_search[] = "../../lib/core/text/string_search.nit";
const char FILE_core__environ[] = "../../lib/core/environ.nit";
const char FILE_core__file[] = "../../lib/core/file.nit";
const char FILE_core__stream[] = "../../lib/core/stream.nit";
const char FILE_core__error[] = "../../lib/core/error.nit";
const char FILE_core__bytes[] = "../../lib/core/bytes.nit";
const char FILE_core__codecs[] = "../../lib/core/codecs/codecs.nit";
const char FILE_core__codec_base[] = "../../lib/core/codecs/codec_base.nit";
const char FILE_core__utf8[] = "../../lib/core/codecs/utf8.nit";
const char FILE_core__time[] = "../../lib/core/time.nit";
const char FILE_core__gc[] = "../../lib/core/gc.nit";
const char FILE_core__exec[] = "../../lib/core/exec.nit";
const char FILE_core__bitset[] = "../../lib/core/bitset.nit";
const char FILE_core__queue[] = "../../lib/core/queue.nit";
const char FILE_core__numeric[] = "../../lib/core/numeric.nit";
const char FILE_core__re[] = "../../lib/core/re.nit";
const char FILE_core__fixed_ints[] = "../../lib/core/fixed_ints.nit";
const char FILE_physique__nitConstraints[] = "src/nitConstraints.nit";
const char FILE_physique__nitPhysics[] = "src/nitPhysics.nit";
const char FILE_physique__nitSimulation[] = "src/nitSimulation.nit";
const char FILE_gamnit__flat[] = "../../lib/gamnit/flat.nit";
const char FILE_glesv2[] = "../../lib/glesv2/glesv2.nit";
const char FILE_android__aware[] = "../../lib/android/aware.nit";
const char FILE_c[] = "../../lib/c.nit";
const char FILE_geometry__points_and_lines[] = "../../lib/geometry/points_and_lines.nit";
const char FILE_serialization[] = "../../lib/serialization/serialization.nit";
const char FILE_matrix__projection[] = "../../lib/matrix/projection.nit";
const char FILE_matrix[] = "../../lib/matrix/matrix.nit";
const char FILE_more_collections[] = "../../lib/more_collections.nit";
const char FILE_realtime[] = "../../lib/realtime.nit";
const char FILE_gamnit[] = "../../lib/gamnit/gamnit.nit";
const char FILE_app[] = "../../lib/app/app.nit";
const char FILE_app__app_base[] = "../../lib/app/app_base.nit";
const char FILE_app__assets[] = "../../lib/app/assets.nit";
const char FILE_gamnit__display[] = "../../lib/gamnit/display.nit";
const char FILE_mnit__input[] = "../../lib/mnit/input.nit";
const char FILE_gamnit__textures[] = "../../lib/gamnit/textures.nit";
const char FILE_gamnit__programs[] = "../../lib/gamnit/programs.nit";
const char FILE_gamnit__cameras[] = "../../lib/gamnit/cameras.nit";
const char FILE_geometry[] = "../../lib/geometry/geometry.nit";
const char FILE_geometry__boxes[] = "../../lib/geometry/boxes.nit";
const char FILE_geometry__angles[] = "../../lib/geometry/angles.nit";
const char FILE_gamnit__limit_fps[] = "../../lib/gamnit/limit_fps.nit";
const char FILE_physique__spritesheet[] = "src/spritesheet.nit";
const char FILE_gamnit__display_linux[] = "../../lib/gamnit/display_linux.nit";
const char FILE_sdl[] = "../../lib/sdl.nit";
const char FILE_mnit__display[] = "../../lib/mnit/display.nit";
const char FILE_x11[] = "../../lib/x11.nit";
const char FILE_gamnit__egl[] = "../../lib/gamnit/egl.nit";
const char FILE_egl[] = "../../lib/egl.nit";
const char FILE_linux[] = "../../lib/linux/linux.nit";
const char FILE_gamnit__gamnit_linux[] = "../../lib/gamnit/gamnit_linux.nit";
void gc_finalize (void *obj, void *client_data) {
val* var /* : Finalizable */;
var = obj;
{
((void(*)(val* self))(var->class->vft[COLOR_core__gc__Finalizable__finalize]))(var); /* finalize on <var:Finalizable>*/
}
}
