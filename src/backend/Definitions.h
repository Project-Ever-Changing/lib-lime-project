#ifndef DEFINITIONS_H
#define DEFINITIONS_H


#if USE_CUSTOM_SDL_DEFINITIONS


#include <sdl_definitions_config.h>


#endif


#ifdef LIME_OPENGL


#define CreateContext SDL_GL_CreateContext
#define DeleteContext SDL_GL_DeleteContext
#define GetDrawableSize SDL_GL_GetDrawableSize
#define Context SDL_GLContext
#define WINDOW_GRAPHICS SDL_WINDOW_OPENGL
#define SetAttribute SDL_GL_SetAttribute
#define MakeCurrent SDL_GL_MakeCurrent
#define SwapWindow SDL_GL_SwapWindow
#define SetSwapInterval SDL_GL_SetSwapInterval


#elif LIME_VULKAN


#include <SDL_vulkan.h>

#define SDL_GetDrawableSize SDL_Vulkan_GetDrawableSize
#define SDL_WINDOW_GRAPHICS SDL_WINDOW_VULKAN
#define SDL_SetAttribute EMPTY


#endif


#define EMPTY(...) (0)


#endif