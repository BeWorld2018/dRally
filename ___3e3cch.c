#include "drally.h"
#include <unistd.h>
extern char ___1a0d60h[0xc8];

void dRally_System_clean(void);

void ___3e3cch(void){

    FILE *  fd;

    if(!(fd = strupr_fopen("CDROM.INI", "rb"))){
		
		getcwd(___1a0d60h, sizeof(___1a0d60h));;
		strcat(___1a0d60h, "/");
		
        //printf("Error reading CDROM.INI file!\n");
        //dRally_System_clean();
        //exit(0x70);
		
    } else {

		fscanf(fd, "%s", ___1a0d60h);
		fclose(fd);

		#ifdef __MORPHOS__
		if (___1a0d60h[0] == '.' && ___1a0d60h[1] == '/') {
			memmove(___1a0d60h, ___1a0d60h + 2, strlen(___1a0d60h));
		}
		#endif
		
		if(___1a0d60h[strlen(___1a0d60h)-1] != '/') strcat(___1a0d60h, "/");
		
	}
}
