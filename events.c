#include "drally.h"
#include "drally_display.h"

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
void SetFullscreen();

void IO_Loop(void){

    SDL_Event e;

    while(SDL_PollEvent(&e)){

        if(e.type == SDL_KEYDOWN){

			if (e.key.keysym.sym == SDLK_RETURN && e.key.keysym.mod & KMOD_ALT) 
			{
				SetFullscreen();
			} else		
			
            	dRally_Keyboard_make(e.key.keysym.scancode);
        }
        else if(e.type == SDL_KEYUP){
           
            dRally_Keyboard_break(e.key.keysym.scancode);
        }
		else if (e.type == SDL_JOYBUTTONDOWN || e.type == SDL_JOYBUTTONUP)  {
			SDL_Scancode bu = 0;
			switch (e.jbutton.button) {
				case 2: //START
				case 7: //A
					bu = SDL_SCANCODE_RETURN;
					break;
				case 4: // SELECT
				case 3: //BAK
					bu = SDL_SCANCODE_ESCAPE;
					break;
				case 8: // B
					bu = SDL_SCANCODE_DELETE;
					break;
				case 6: // Y
					bu = SDL_SCANCODE_SPACE;
					break;
				case 5: // X
					bu = SDL_SCANCODE_LALT;
					break;
				case 0:
					bu = SDL_SCANCODE_LCTRL;
					break;
				case 1:
					bu = SDL_SCANCODE_LSHIFT;
					break;
				default:
					break;
			}
			if (bu > 0) {
				if (e.type == SDL_JOYBUTTONDOWN)
					dRally_Keyboard_make(bu);	
				else
					dRally_Keyboard_break(bu);
			}
		}
		else if (e.type == SDL_JOYHATMOTION)
		{
			switch (e.jhat.value)
			{
				case SDL_HAT_UP:
					dRally_Keyboard_make(SDL_SCANCODE_UP);
					break;
				case SDL_HAT_DOWN:
					dRally_Keyboard_make(SDL_SCANCODE_DOWN);
					break;
				case SDL_HAT_LEFT:
					dRally_Keyboard_make(SDL_SCANCODE_LEFT);
					break;
				case SDL_HAT_LEFTUP:
					dRally_Keyboard_make(SDL_SCANCODE_LEFT);
					dRally_Keyboard_make(SDL_SCANCODE_UP);
					break;
				case SDL_HAT_LEFTDOWN:
					dRally_Keyboard_make(SDL_SCANCODE_LEFT);
					dRally_Keyboard_make(SDL_SCANCODE_DOWN);
					break;
				case SDL_HAT_RIGHT:
					dRally_Keyboard_make(SDL_SCANCODE_RIGHT);
					break;
				case SDL_HAT_RIGHTUP:
					dRally_Keyboard_make(SDL_SCANCODE_RIGHT);
					dRally_Keyboard_make(SDL_SCANCODE_UP);
					break;
				case SDL_HAT_RIGHTDOWN:
					dRally_Keyboard_make(SDL_SCANCODE_RIGHT);
					dRally_Keyboard_make(SDL_SCANCODE_DOWN);
					break;
				default:
					dRally_Keyboard_break(SDL_SCANCODE_DOWN);
                    dRally_Keyboard_break(SDL_SCANCODE_UP);
					dRally_Keyboard_break(SDL_SCANCODE_LEFT);
                    dRally_Keyboard_break(SDL_SCANCODE_RIGHT);
					break;
			}
		}
		else if (e.type == SDL_JOYAXISMOTION) {
            switch (e.jaxis.axis) {
            case 0:
                if (e.jaxis.value > 20000) {//RIGHT
                    dRally_Keyboard_make(SDL_SCANCODE_RIGHT);
                }
                else if (e.jaxis.value < -20000) {//LEFT
                    dRally_Keyboard_make(SDL_SCANCODE_LEFT);
                }
                else {
                    dRally_Keyboard_break(SDL_SCANCODE_RIGHT);
                    dRally_Keyboard_break(SDL_SCANCODE_LEFT);
                }
                break;
            case 1:
                if (e.jaxis.value > 20000) {//DOWN
                    dRally_Keyboard_make(SDL_SCANCODE_DOWN);
                }
                else if (e.jaxis.value < -20000) {//UP
                    dRally_Keyboard_make(SDL_SCANCODE_UP);
                } else {
					dRally_Keyboard_break(SDL_SCANCODE_DOWN);
                    dRally_Keyboard_break(SDL_SCANCODE_UP);
				}
                break;
            }


        }
        else if(e.type == SDL_QUIT){
			
            printf("DEATH RALLY Exit: SDL QUIT pressed!\n");
			
			#if defined(DR_MULTIPLAYER)
			if(___19bd60h != 0) ___623d4h();
			#endif

			dRally_Sound_quit();
			dRally_Display_clean();
			dRally_System_clean();

			exit(0x70);
        }
    }
}
