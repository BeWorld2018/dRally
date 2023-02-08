#include "drally.h"

extern void_cb ___2432c8h;

void dRally_Sound_quit(void);
#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
	void ___623d4h(void);
#endif

void __VGA3_SETMODE(void);
void dRally_System_clean(void);

void dRally_Keyboard_make(SDL_Scancode);
void dRally_Keyboard_break(SDL_Scancode);

void IO_Loop(void){

    SDL_Event e;

    while(SDL_PollEvent(&e)){

        if(e.type == SDL_KEYDOWN){

            dRally_Keyboard_make(e.key.keysym.scancode);
        }
        else if(e.type == SDL_KEYUP){
           
            dRally_Keyboard_break(e.key.keysym.scancode);
        }
        else if(e.type == SDL_QUIT){
			
            printf("DEATH RALLY Exit: SDL QUIT pressed!\n");
			
			#if defined(DR_MULTIPLAYER)
			if(___19bd60h != 0) ___623d4h();
			#endif

			dRally_Sound_quit();
			dRally_Display_clean();
			dRally_System_clean();
            __VGA3_SETMODE();
			
			exit(0x70);
        }
    }
}
