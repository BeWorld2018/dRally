#include "drally.h"

	extern byte ___199f3dh[];
	extern byte ___1a1f6ah[];
	extern byte ___199f3eh[];
	extern byte ___199f3fh[];
	extern byte ___199f40h[];
	extern byte ___199f41h[];
	extern byte ___199f42h[];
	extern byte ___199f43h[];
	extern byte ___199f44h[];
	extern byte ___199f45h[];
	extern byte ___19ce70h[];
	extern byte ___1866b8h[];
	extern __DWORD__ ___1a1140h[8];
	extern byte ___1a1164h[];
	extern byte ___1a113ch[];
	extern byte ___1a1110h[];
	extern byte ___1a1130h[];
	extern byte ___1a1120h[];
	extern byte ___1a1118h[];
	extern byte ___1a111ch[];
	
void ___1f6e4h(void){

	int 	n;

	strcpy(___1a1f6ah+0xf*B(___199f3dh), "-           ");
	strcpy(___1a1f6ah+0xf*B(___199f3eh), "left        ");
	strcpy(___1a1f6ah+0xf*B(___199f3fh), "right       ");
	strcpy(___1a1f6ah+0xf*B(___199f40h), "up          ");
	strcpy(___1a1f6ah+0xf*B(___199f41h), "down        ");
	strcpy(___1a1f6ah+0xf*B(___199f42h), "button 1    ");
	strcpy(___1a1f6ah+0xf*B(___199f43h), "button 2    ");
	strcpy(___1a1f6ah+0xf*B(___199f44h), "button 3    ");
	strcpy(___1a1f6ah+0xf*B(___199f45h), "button 4    ");

	n = -1;
	while(++n < 0x100) strcpy(___19ce70h+0xf*n, "UNAVAILABLE ");

	strcpy(___19ce70h+0x00f, "esc         ");
	strcpy(___19ce70h+0x01e, "1           ");
	strcpy(___19ce70h+0x02d, "2           ");
	strcpy(___19ce70h+0x03c, "3           ");
	strcpy(___19ce70h+0x04b, "4           ");
	strcpy(___19ce70h+0x05a, "5           ");
	strcpy(___19ce70h+0x069, "6           ");
	strcpy(___19ce70h+0x078, "7           ");
	strcpy(___19ce70h+0x087, "8           ");
	strcpy(___19ce70h+0x096, "9           ");
	strcpy(___19ce70h+0x0a5, "0           ");
	strcpy(___19ce70h+0x0b4, "minus       ");
	strcpy(___19ce70h+0x0c3, "equal       ");
	strcpy(___19ce70h+0x0d2, "backspace   ");
	strcpy(___19ce70h+0x0e1, "tab         ");
	strcpy(___19ce70h+0x0f0, "q           ");
	strcpy(___19ce70h+0x0ff, "w           ");
	strcpy(___19ce70h+0x10e, "e           ");
	strcpy(___19ce70h+0x11d, "r           ");
	strcpy(___19ce70h+0x12c, "t           ");
	strcpy(___19ce70h+0x13b, "y           ");
	strcpy(___19ce70h+0x14a, "u           ");
	strcpy(___19ce70h+0x159, "i           ");
	strcpy(___19ce70h+0x168, "o           ");
	strcpy(___19ce70h+0x177, "p           ");
	strcpy(___19ce70h+0x186, "left bracket");
	strcpy(___19ce70h+0x195, "right bracket");
	strcpy(___19ce70h+0x1a4, "enter       ");
	strcpy(___19ce70h+0x1b3, "left control");
	strcpy(___19ce70h+0x1c2, "a           ");
	strcpy(___19ce70h+0x1d1, "s           ");
	strcpy(___19ce70h+0x1e0, "d           ");
	strcpy(___19ce70h+0x1ef, "f           ");
	strcpy(___19ce70h+0x1fe, "g           ");
	strcpy(___19ce70h+0x20d, "h           ");
	strcpy(___19ce70h+0x21c, "j           ");
	strcpy(___19ce70h+0x22b, "k           ");
	strcpy(___19ce70h+0x23a, "l           ");
	strcpy(___19ce70h+0x249, "semicolon   ");
	strcpy(___19ce70h+0x258, "tick        ");
	strcpy(___19ce70h+0x267, "apostrophe  ");
	strcpy(___19ce70h+0x276, "left shift  ");
	strcpy(___19ce70h+0x285, "backslash   ");
	strcpy(___19ce70h+0x294, "z           ");
	strcpy(___19ce70h+0x2a3, "x           ");
	strcpy(___19ce70h+0x2b2, "c           ");
	strcpy(___19ce70h+0x2c1, "v           ");
	strcpy(___19ce70h+0x2d0, "b           ");
	strcpy(___19ce70h+0x2df, "n           ");
	strcpy(___19ce70h+0x2ee, "m           ");
	strcpy(___19ce70h+0x2fd, "comma       ");
	strcpy(___19ce70h+0x30c, "period      ");
	strcpy(___19ce70h+0x31b, "slash       ");
	strcpy(___19ce70h+0x32a, "right shift ");
	strcpy(___19ce70h+0x339, "keypad-star ");
	strcpy(___19ce70h+0x348, "left alt    ");
	strcpy(___19ce70h+0x357, "space       ");
	strcpy(___19ce70h+0x366, "capslock    ");
	strcpy(___19ce70h+0x375, "f1          ");
	strcpy(___19ce70h+0x384, "f2          ");
	strcpy(___19ce70h+0x393, "f3          ");
	strcpy(___19ce70h+0x3a2, "f4          ");
	strcpy(___19ce70h+0x3b1, "f5          ");
	strcpy(___19ce70h+0x3c0, "f6          ");
	strcpy(___19ce70h+0x3cf, "f7          ");
	strcpy(___19ce70h+0x3de, "f8          ");
	strcpy(___19ce70h+0x3ed, "f9          ");
	strcpy(___19ce70h+0x3fc, "f10         ");
	strcpy(___19ce70h+0x40b, "numlock     ");
	strcpy(___19ce70h+0x41a, "scrolllock  ");
	strcpy(___19ce70h+0x429, "keypad-7    ");
	strcpy(___19ce70h+0x438, "keypad-8    ");
	strcpy(___19ce70h+0x447, "keypad-9    ");
	strcpy(___19ce70h+0x456, "keypad-minus");
	strcpy(___19ce70h+0x465, "keypad-4    ");
	strcpy(___19ce70h+0x474, "keypad-5    ");
	strcpy(___19ce70h+0x483, "keypad-6    ");
	strcpy(___19ce70h+0x492, "keypad-plus ");
	strcpy(___19ce70h+0x4a1, "keypad-1    ");
	strcpy(___19ce70h+0x4b0, "keypad-2    ");
	strcpy(___19ce70h+0x4bf, "keypad-3    ");
	strcpy(___19ce70h+0x4ce, "keypad-0    ");
	strcpy(___19ce70h+0x4dd, "keypad-del  ");
	strcpy(___19ce70h+0x4ec, "sysreq      ");
	strcpy(___19ce70h+0x519, "f11         ");
	strcpy(___19ce70h+0x528, "f12         ");
	strcpy(___19ce70h+0x924, "keypad-enter");
	strcpy(___19ce70h+0x933, "right control");
	strcpy(___19ce70h+0xa9b, "keypad-slash");
	strcpy(___19ce70h+0xab9, "prtsc       ");	// ???
	strcpy(___19ce70h+0xab9, "printscr    ");	// ???
	strcpy(___19ce70h+0xac8, "right alt   ");
	strcpy(___19ce70h+0xba9, "home        ");
	strcpy(___19ce70h+0xbb8, "up arrow    ");
	strcpy(___19ce70h+0xbc7, "page up     ");
	strcpy(___19ce70h+0xbe5, "left arrow  ");
	strcpy(___19ce70h+0xc03, "right arrow ");
	strcpy(___19ce70h+0xc21, "end         ");
	strcpy(___19ce70h+0xc30, "down arrow  ");
	strcpy(___19ce70h+0xc3f, "page down   ");
	strcpy(___19ce70h+0xc4e, "ins         ");
	strcpy(___19ce70h+0xc5d, "del         ");

	strcpy(___1866b8h+0xa8c, "Accelerate    ");
	strcpy(___1866b8h+0xabe, "Brake        ");
	strcpy(___1866b8h+0xaf0, "Steer Left    \xfa\xfa");
	strcpy(___1866b8h+0xb22, "Steer Right   \xfa\xfa\xfa\xfa\xfa\xfa");
	strcpy(___1866b8h+0xb54, "Turbo Boost  \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
	strcpy(___1866b8h+0xb86, "Machine Gun  \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
	strcpy(___1866b8h+0xbb8, "Drop Mine    \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
	strcpy(___1866b8h+0xbea, "Horn        \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");

	strcat(___1866b8h+0xa8c, ___19ce70h+0xf*___1a1140h[6]);
	strcat(___1866b8h+0xabe, ___19ce70h+0xf*___1a1140h[4]);
	strcat(___1866b8h+0xaf0, ___19ce70h+0xf*___1a1140h[2]);
	strcat(___1866b8h+0xb22, ___19ce70h+0xf*___1a1140h[3]);
	strcat(___1866b8h+0xb54, ___19ce70h+0xf*___1a1140h[0]);
	strcat(___1866b8h+0xb86, ___19ce70h+0xf*___1a1140h[7]);
	strcat(___1866b8h+0xbb8, ___19ce70h+0xf*___1a1140h[5]);
	strcat(___1866b8h+0xbea, ___19ce70h+0xf*___1a1140h[1]);

	strcpy(___1866b8h+0xe10, "Accelerate    ");
	strcpy(___1866b8h+0xe42, "Brake        ");
	strcpy(___1866b8h+0xe74, "Steer Left    \xfa\xfa");
	strcpy(___1866b8h+0xea6, "Steer Right   \xfa\xfa\xfa\xfa\xfa\xfa");
	strcpy(___1866b8h+0xed8, "Turbo Boost  \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
	strcpy(___1866b8h+0xf0a, "Machine Gun  \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
	strcpy(___1866b8h+0xf3c, "Drop Mine    \xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa\xfa");
	strcat(___1866b8h+0xe10, ___1a1f6ah+0xf*D(___1a1164h));
	strcat(___1866b8h+0xe42, ___1a1f6ah+0xf*D(___1a113ch));
	strcat(___1866b8h+0xe74, ___1a1f6ah+0xf*D(___1a1110h));
	strcat(___1866b8h+0xea6, ___1a1f6ah+0xf*D(___1a1130h));
	strcat(___1866b8h+0xed8, ___1a1f6ah+0xf*D(___1a1120h));
	strcat(___1866b8h+0xf0a, ___1a1f6ah+0xf*D(___1a1118h));
	strcat(___1866b8h+0xf3c, ___1a1f6ah+0xf*D(___1a111ch));
}
