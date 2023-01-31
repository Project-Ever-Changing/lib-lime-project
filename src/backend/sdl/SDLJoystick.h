#ifndef LIME_SDL_JOYSTICK_H
#define LIME_SDL_JOYSTICK_H


#ifdef LIME_SDL_LIB
#include <SDL2/SDL.h>
#else
#include <SDL.h>
#endif

#include <ui/Joystick.h>
#include <map>


namespace lime {


	class SDLJoystick {

		public:

			static bool Connect (int id);
			static bool Disconnect (int id);
			static int GetInstanceID (int deviceID);
			static void Init ();
			static bool IsAccelerometer (int id);

	};


}


#endif