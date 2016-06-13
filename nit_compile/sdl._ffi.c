/*
	Extern implementation of Nit module sdl
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "sdl._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define SDLDisplay_enable_mouse_motion_events sdl___SDLDisplay_enable_mouse_motion_events
#define SDLDisplay_new_key_event sdl___SDLDisplay_new_key_event
#define SDLDisplay_new_mouse_motion_event sdl___SDLDisplay_new_mouse_motion_event
#define SDLDisplay_new_mouse_button_event sdl___SDLDisplay_new_mouse_button_event
#define SDLDisplay_new_quit_event sdl___SDLDisplay_new_quit_event
#define String_to_cstring sdl___String_to_cstring
#define NativeString_to_s sdl___NativeString_to_s
SDL_Surface * sdl___new_SDLDisplay___impl( long w, long h )
{
#line 40 "../../lib/sdl.nit"


		SDL_Init(SDL_INIT_VIDEO);

		if(TTF_Init()==-1) {
			printf("TTF_Init: %s\n", TTF_GetError());
			exit(2);
		}

 		SDL_Surface *self = SDL_SetVideoMode(w, h, 24, SDL_HWSURFACE);

		if (!SDLDisplay_enable_mouse_motion_events(self)) {
			/* ignores mousemotion for performance reasons */
			SDL_EventState(SDL_MOUSEMOTION, SDL_IGNORE);
		}

		return self;
	}
void sdl___SDLDisplay_destroy___impl( SDL_Surface * self )
{
#line 64 "../../lib/sdl.nit"


		if (SDL_WasInit(SDL_INIT_VIDEO))
			SDL_Quit();

		if (TTF_WasInit())
			TTF_Quit();
	}
void sdl___SDLDisplay_finish___impl( SDL_Surface * self )
{
#line 72 "../../lib/sdl.nit"

 SDL_Flip(self); }
void sdl___SDLDisplay_clear_int___impl( SDL_Surface * self, long r, long g, long b )
{
#line 75 "../../lib/sdl.nit"


		SDL_FillRect(self, NULL, SDL_MapRGB(self->format,r,g,b));
	}
long sdl___SDLDisplay_width___impl( SDL_Surface * self )
{
#line 79 "../../lib/sdl.nit"

 return self->w; }
long sdl___SDLDisplay_height___impl( SDL_Surface * self )
{
#line 80 "../../lib/sdl.nit"

 return self->h; }
void sdl___SDLDisplay_fill_rect___impl( SDL_Surface * self, SDL_Rect* rect, long r, long g, long b )
{
#line 83 "../../lib/sdl.nit"


		SDL_FillRect(self, rect,  SDL_MapRGB(self->format,r,g,b));
	}
void sdl___SDLDisplay_clear___impl( SDL_Surface * self, double r, double g, double b )
{
#line 87 "../../lib/sdl.nit"


		Uint8 ri, gi, bi;
		ri = (Uint8)r*255;
		gi = (Uint8)g*255;
		bi = (Uint8)b*255;
		SDL_FillRect(self, NULL, SDL_MapRGB(self->format,ri,gi,bi));
	}
nullable_SDLInputEvent sdl___SDLDisplay_poll_event___impl( SDL_Surface * self )
{
#line 108 "../../lib/sdl.nit"


		SDL_PumpEvents();

		SDL_Event event;
		if (SDL_PollEvent(&event))
		{
			switch (event.type) {
				case SDL_KEYDOWN:
				case SDL_KEYUP:
					return SDLDisplay_new_key_event(self,
								SDL_GetKeyName(event.key.keysym.sym),
								event.type==SDL_KEYDOWN);

				case SDL_MOUSEMOTION:
					return SDLDisplay_new_mouse_motion_event(self,
						event.motion.x, event.motion.y,
						event.motion.xrel, event.motion.yrel,
						SDL_GetMouseState(NULL, NULL)&SDL_BUTTON(1));

				case SDL_MOUSEBUTTONDOWN:
				case SDL_MOUSEBUTTONUP:
					return SDLDisplay_new_mouse_button_event(self,
						event.button.x, event.button.y,
						event.button.button,
						event.type == SDL_MOUSEBUTTONDOWN);

				case SDL_QUIT:
					return SDLDisplay_new_quit_event(self);
			}
		}

		return null_SDLInputEvent();
	}
void sdl___SDLDisplay_warp_mouse___impl( SDL_Surface * self, long x, long y )
{
#line 155 "../../lib/sdl.nit"

 SDL_WarpMouse(x, y); }
void sdl___SDLDisplay_show_cursor__assign___impl( SDL_Surface * self, int val )
{
#line 158 "../../lib/sdl.nit"

 SDL_ShowCursor(val? SDL_ENABLE: SDL_DISABLE); }
int sdl___SDLDisplay_show_cursor___impl( SDL_Surface * self )
{
#line 161 "../../lib/sdl.nit"

 return SDL_ShowCursor(SDL_QUERY); }
void sdl___SDLDisplay_grab_input__assign___impl( SDL_Surface * self, int val )
{
#line 164 "../../lib/sdl.nit"

 SDL_WM_GrabInput(val? SDL_GRAB_ON: SDL_GRAB_OFF); }
int sdl___SDLDisplay_grab_input___impl( SDL_Surface * self )
{
#line 167 "../../lib/sdl.nit"

 return SDL_WM_GrabInput(SDL_GRAB_QUERY) == SDL_GRAB_ON; }
int sdl___SDLDisplay_ignore_mouse_motion_events___impl( SDL_Surface * self )
{
#line 170 "../../lib/sdl.nit"


		return SDL_EventState(SDL_MOUSEMOTION, SDL_QUERY);
	}
void sdl___SDLDisplay_ignore_mouse_motion_events__assign___impl( SDL_Surface * self, int val )
{
#line 175 "../../lib/sdl.nit"


		SDL_EventState(SDL_MOUSEMOTION, val? SDL_IGNORE: SDL_ENABLE);
	}
int sdl___SDLDisplay_mouse_focus___impl( SDL_Surface * self )
{
#line 180 "../../lib/sdl.nit"

 return SDL_GetAppState() & SDL_APPMOUSEFOCUS; }
int sdl___SDLDisplay_input_focus___impl( SDL_Surface * self )
{
#line 183 "../../lib/sdl.nit"

 return SDL_GetAppState() & SDL_APPINPUTFOCUS; }
void sdl___SDLDrawable_native_blit___impl( SDL_Surface* self, SDL_Surface* img, long x, long y )
{
#line 193 "../../lib/sdl.nit"


		SDL_Rect dst;
		dst.x = x;
		dst.y = y;
		dst.w = 0;
		dst.h = 0;

		SDL_BlitSurface(img, NULL, self, &dst);
	}
SDL_Surface* sdl___new_SDLImage_from_file___impl( String path )
{
#line 217 "../../lib/sdl.nit"


		SDL_Surface *image = IMG_Load(String_to_cstring(path));
		return image;
	}
SDL_Surface* sdl___new_SDLImage_copy_of___impl( SDL_Surface* image )
{
#line 223 "../../lib/sdl.nit"


		SDL_Surface *new_image = SDL_CreateRGBSurface(
			image->flags, image->w, image->h, 24,
			0, 0, 0, 0);

		SDL_Rect dst;
		dst.x = 0;
		dst.y = 0;
		dst.w = image->w;
		dst.h = image->h;
		SDL_BlitSurface(image, NULL, new_image, &dst);

		return new_image;
	}
void sdl___SDLImage_save_to_file___impl( SDL_Surface* self, String path )
{
#line 239 "../../lib/sdl.nit"

 }
void sdl___SDLImage_destroy___impl( SDL_Surface* self )
{
#line 242 "../../lib/sdl.nit"

 SDL_FreeSurface(self); }
long sdl___SDLImage_width___impl( SDL_Surface* self )
{
#line 244 "../../lib/sdl.nit"

 return self->w; }
long sdl___SDLImage_height___impl( SDL_Surface* self )
{
#line 245 "../../lib/sdl.nit"

 return self->h; }
 unsigned char*  sdl___SDLImage_pixels___impl( SDL_Surface* self )
{
#line 250 "../../lib/sdl.nit"

 return self->pixels; }
long sdl___SDLImage_amask___impl( SDL_Surface* self )
{
#line 253 "../../lib/sdl.nit"

 return self->format->Amask; }
SDL_Rect* sdl___new_SDLRectangle___impl( long x, long y, long w, long h )
{
#line 259 "../../lib/sdl.nit"


		SDL_Rect *rect = malloc(sizeof(SDL_Rect));
		rect->x = (Sint16)x;
		rect->y = (Sint16)y;
		rect->w = (Uint16)w;
		rect->h = (Uint16)h;
		return rect;
	}
void sdl___SDLRectangle_x__assign___impl( SDL_Rect* self, long v )
{
#line 268 "../../lib/sdl.nit"

 self->x = (Sint16)v; }
long sdl___SDLRectangle_x___impl( SDL_Rect* self )
{
#line 269 "../../lib/sdl.nit"

 return self->x; }
void sdl___SDLRectangle_y__assign___impl( SDL_Rect* self, long v )
{
#line 271 "../../lib/sdl.nit"

 self->y = (Sint16)v; }
long sdl___SDLRectangle_y___impl( SDL_Rect* self )
{
#line 272 "../../lib/sdl.nit"

 return self->y; }
void sdl___SDLRectangle_w__assign___impl( SDL_Rect* self, long v )
{
#line 274 "../../lib/sdl.nit"

 self->w = (Uint16)v; }
long sdl___SDLRectangle_w___impl( SDL_Rect* self )
{
#line 275 "../../lib/sdl.nit"

 return self->w; }
void sdl___SDLRectangle_h__assign___impl( SDL_Rect* self, long v )
{
#line 277 "../../lib/sdl.nit"

 self->h = (Uint16)v; }
long sdl___SDLRectangle_h___impl( SDL_Rect* self )
{
#line 278 "../../lib/sdl.nit"

 return self->h; }
void sdl___Int_delay___impl( long self )
{
#line 409 "../../lib/sdl.nit"

 SDL_Delay(self); }
TTF_Font * sdl___new_SDLFont___impl( String name, long points )
{
#line 415 "../../lib/sdl.nit"


	char * cname = String_to_cstring(name);

	TTF_Font *font = TTF_OpenFont(cname, (int)points);
	if(!font) {
		printf("TTF_OpenFont: %s\n", TTF_GetError());
		exit(1);
	}

	return font;
	}
void sdl___SDLFont_destroy___impl( TTF_Font * self )
{
#line 427 "../../lib/sdl.nit"

 TTF_CloseFont(self); }
SDL_Surface* sdl___SDLFont_render___impl( TTF_Font * self, String text, long r, long g, long b )
{
#line 430 "../../lib/sdl.nit"


		SDL_Color color;
		SDL_Surface *text_surface;
		char *ctext;

		color.r = r;
		color.g = g;
		color.b = b;

		ctext = String_to_cstring(text);
		if(!(text_surface=TTF_RenderText_Blended(self, ctext, color)))
		{
			fprintf(stderr, "SDL TFF error: %s\n", TTF_GetError());
			exit(1);
		}
		else
			return text_surface;
	}
long sdl___SDLFont_height___impl( TTF_Font * self )
{
#line 457 "../../lib/sdl.nit"


		return TTF_FontHeight(self);
	}
long sdl___SDLFont_ascent___impl( TTF_Font * self )
{
#line 461 "../../lib/sdl.nit"


		return TTF_FontAscent(self);
	}
long sdl___SDLFont_descent___impl( TTF_Font * self )
{
#line 465 "../../lib/sdl.nit"


		return TTF_FontDescent(self);
	}
long sdl___SDLFont_line_skip___impl( TTF_Font * self )
{
#line 470 "../../lib/sdl.nit"


		return TTF_FontLineSkip(self);
	}
int sdl___SDLFont_is_fixed_width___impl( TTF_Font * self )
{
#line 475 "../../lib/sdl.nit"


		return TTF_FontFaceIsFixedWidth(self);
	}
nullable_String sdl___SDLFont_family_name___impl( TTF_Font * self )
{
#line 480 "../../lib/sdl.nit"


		char *fn = TTF_FontFaceFamilyName(self);

		if (fn == NULL)
			return null_String();
		else
			return String_as_nullable(NativeString_to_s(fn));
	}
nullable_String sdl___SDLFont_style_name___impl( TTF_Font * self )
{
#line 490 "../../lib/sdl.nit"


		char *sn = TTF_FontFaceStyleName(self);

		if (sn == NULL)
			return null_String();
		else
			return String_as_nullable(NativeString_to_s(sn));
	}
long sdl___SDLFont_width_of___impl( TTF_Font * self, String text )
{
#line 500 "../../lib/sdl.nit"


		char *ctext = String_to_cstring(text);
		int w;
		if (TTF_SizeText(self, ctext, &w, NULL))
		{
			fprintf(stderr, "SDL TFF error: %s\n", TTF_GetError());
			exit(1);
		}
		else
			return w;
	}
SDL_SysWMinfo * sdl___new_SDLSystemWindowManagerInfo___impl(  )
{
#line 517 "../../lib/sdl.nit"


		SDL_SysWMinfo *val = malloc(sizeof(SDL_SysWMinfo));

		SDL_VERSION(&val->version);

		if(SDL_GetWMInfo(val) <= 0) {
			printf("Unable to get window handle");
			return 0;
		}

		return val;
	}
void* sdl___SDLSystemWindowManagerInfo_x11_window_handle___impl( SDL_SysWMinfo * self )
{
#line 531 "../../lib/sdl.nit"


		return (void*)self->info.x11.window;
	}
