#ifndef SDL_DEFINITIONS_H
#define SDL_DEFINITIONS_H

#include <SDL.h>
#include <SDL_metal.h>

#ifdef LIME_METAL

#define SDL_CreateContext SDL_Metal_CreateView
#define SDL_DeleteContext SDL_Metal_DestroyView
#define SDL_GetDrawableSize SDL_Metal_GetDrawableSize
#define SDL_Context SDL_MetalView
#define SDL_WINDOW_GRAPHICS SDL_WINDOW_METAL
#define SDL_SetAttribute EMPTY
#define SDL_MakeCurrent EMPTY
#define SDL_SwapWindow EMPTY
#define SDL_SetSwapInterval EMPTY

#elif LIME_OPENGL

#define SDL_CreateContext SDL_GL_CreateContext
#define SDL_DeleteContext SDL_GL_DestroyContext
#define SDL_GetDrawableSize SDL_GL_GetDrawableSize
#define SDL_Context SDL_GLContext
#define SDL_WINDOW_GRAPHICS SDL_WINDOW_OPENGL
#define SDL_SetAttribute SDL_GL_SetAttribute
#define SDL_MakeCurrent SDL_GL_MakeCurrent
#define SDL_SwapWindow SDL_GL_SwapWindow
#define SDL_SetSwapInterval SDL_GL_SetSwapInterval

#endif

#define EMPTY(...) (0)

#endif