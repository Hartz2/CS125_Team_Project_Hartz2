#include<stdio.h>
#include<stdlib.h>
#include "functionList.h"

int c='f';

char beginKeyReading(){
	
/* use system call to make terminal send all keystrokes directly to stdin */

	system ("/bin/stty raw");

	switch (c) {
	
	case 'w' :
		return 'w';
		break ;
	
	case 's' :
		return 's';
		break ;
	case 'o' :
		return 'o';
		break;
	default :
		return 'q';
		break ;
	}

  /* use system call to set terminal behaviour to more normal behaviour */

	system ("/bin/stty cooked") ;

}
