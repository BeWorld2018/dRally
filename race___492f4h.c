#include "drally.h"

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
	void ___623d4h(void);
#endif

void dRally_System_clean(void);

void race___492f4h(void){

	dRally_System_clean();
#if _DEBUG	
	printf("DEATH RALLY Exit: CTRL+ALT+DEL pressed!\n");
#endif
	
#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0) ___623d4h();
#endif
	exit(0x70);
}
