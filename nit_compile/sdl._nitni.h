/*
	Extern implementation of Nit module sdl
*/
#ifndef SDL_NITG_NITNI_H
#define SDL_NITG_NITNI_H

#ifndef NIT_TYPE_nullable_SDLInputEvent
#define NIT_TYPE_nullable_SDLInputEvent 1
typedef struct nitni_instance *nullable_SDLInputEvent;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_nullable_String
#define NIT_TYPE_nullable_String 1
typedef struct nitni_instance *nullable_String;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_nullable_String
#define NIT_TYPE_nullable_String 1
typedef struct nitni_instance *nullable_String;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#ifndef NIT_TYPE_String
#define NIT_TYPE_String 1
typedef struct nitni_instance *String;
#endif
#include "sdl._ffi.h"
#include <stdint.h>
extern void nitni_global_ref_incr(void*);
extern void nitni_global_ref_decr(void*);
extern int sdl___SDLDisplay_enable_mouse_motion_events( void* self );
#ifndef nullable_SDLInputEvent_incr_ref
	#define nullable_SDLInputEvent_incr_ref(from) nitni_global_ref_incr((nullable_SDLInputEvent)(from))
#endif
#ifndef nullable_SDLInputEvent_decr_ref
	#define nullable_SDLInputEvent_decr_ref(from) nitni_global_ref_decr((nullable_SDLInputEvent)(from))
#endif
extern struct nitni_instance * NIT_NULL___null_SDLInputEvent();
#define null_SDLInputEvent NIT_NULL___null_SDLInputEvent
extern struct nitni_instance * sdl___SDLDisplay_new_key_event( void* self, char* name, int down );
extern struct nitni_instance * sdl___SDLDisplay_new_mouse_motion_event( void* self, double x, double y, double xr, double yr, int down );
extern struct nitni_instance * sdl___SDLDisplay_new_mouse_button_event( void* self, double x, double y, long id, int down );
extern struct nitni_instance * sdl___SDLDisplay_new_quit_event( void* self );
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
extern char* sdl___String_to_cstring( struct nitni_instance * self );
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
extern char* sdl___String_to_cstring( struct nitni_instance * self );
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
extern char* sdl___String_to_cstring( struct nitni_instance * self );
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
extern char* sdl___String_to_cstring( struct nitni_instance * self );
#ifndef nullable_String_incr_ref
	#define nullable_String_incr_ref(from) nitni_global_ref_incr((nullable_String)(from))
#endif
#ifndef nullable_String_decr_ref
	#define nullable_String_decr_ref(from) nitni_global_ref_decr((nullable_String)(from))
#endif
extern struct nitni_instance * NIT_NULL___null_String();
#define null_String NIT_NULL___null_String
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
extern char* sdl___String_to_cstring( struct nitni_instance * self );
extern int sdl___String_is_a_nullable_String(struct nitni_instance *);
#ifndef String_is_a_nullable_String
#define String_is_a_nullable_String sdl___String_is_a_nullable_String
#endif
extern struct nitni_instance * sdl___String_as_nullable_String(struct nitni_instance *);
#ifndef String_as_nullable_String
#define String_as_nullable_String sdl___String_as_nullable_String
#endif
#ifndef String_as_nullable
#define String_as_nullable String_as_nullable_String
#endif
#ifndef nullable_String_incr_ref
	#define nullable_String_incr_ref(from) nitni_global_ref_incr((nullable_String)(from))
#endif
#ifndef nullable_String_decr_ref
	#define nullable_String_decr_ref(from) nitni_global_ref_decr((nullable_String)(from))
#endif
extern struct nitni_instance * NIT_NULL___null_String();
#define null_String NIT_NULL___null_String
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
extern char* sdl___String_to_cstring( struct nitni_instance * self );
extern int sdl___String_is_a_nullable_String(struct nitni_instance *);
#ifndef String_is_a_nullable_String
#define String_is_a_nullable_String sdl___String_is_a_nullable_String
#endif
extern struct nitni_instance * sdl___String_as_nullable_String(struct nitni_instance *);
#ifndef String_as_nullable_String
#define String_as_nullable_String sdl___String_as_nullable_String
#endif
#ifndef String_as_nullable
#define String_as_nullable String_as_nullable_String
#endif
#ifndef String_incr_ref
	#define String_incr_ref(from) nitni_global_ref_incr((String)(from))
#endif
#ifndef String_decr_ref
	#define String_decr_ref(from) nitni_global_ref_decr((String)(from))
#endif
extern struct nitni_instance * sdl___NativeString_to_s( char* self );
#endif
