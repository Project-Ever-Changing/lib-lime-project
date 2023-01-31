#include <system/Mutex.h>

#ifdef LIME_SDL_LIB
#include <SDL2/SDL.h>
#else
#include <SDL.h>
#endif


namespace lime {


	Mutex::Mutex () {

		mutex = SDL_CreateMutex ();

	}


	Mutex::~Mutex () {

		if (mutex) {

			SDL_DestroyMutex ((SDL_mutex*)mutex);

		}

	}


	bool Mutex::Lock () {

		if (mutex) {

			return SDL_LockMutex ((SDL_mutex*)mutex) == 0;

		}

		return false;

	}


	bool Mutex::TryLock () {

		if (mutex) {

			return SDL_TryLockMutex ((SDL_mutex*)mutex) == 0;

		}

		return false;

	}


	bool Mutex::Unlock () {

		if (mutex) {

			return SDL_UnlockMutex ((SDL_mutex*)mutex) == 0;

		}

		return false;

	}


}