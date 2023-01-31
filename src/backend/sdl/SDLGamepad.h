#ifndef LIME_SDL_GAMEPAD_H
#define LIME_SDL_GAMEPAD_H

#ifdef LIME_SDL_LIB
#include <SDL2/SDL.h>
#else
#include <SDL.h>
#endif

#include <ui/Gamepad.h>
#include <map>


namespace lime {


	class SDLGamepad {

		public:

			static bool Connect (int deviceID);
			static int GetInstanceID (int deviceID);
			static bool Disconnect (int id);

	};


}


#endif