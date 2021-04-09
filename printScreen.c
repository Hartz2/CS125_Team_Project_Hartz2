#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include "functionList.h"

int position=3;
int playerPosition=8;

void print_array(char lines[ROWS][COLS]){
srand(time(NULL));
int x;
 for (x=0; x< ROWS; x++){
    printf("%s\n", lines[x]);
 }
}

int b=0;
int findPlayerPos()
{   
   int a;
   char move;
   FILE * f1=fopen("moves.txt", "r");
   fscanf(f1, "%c%d", &move, &a);
   if (b!=a)
   {
	if ((move=='w')&&(playerPosition>0))
	{
		playerPosition=playerPosition-1;
	}
	else if ((move=='s')&&(playerPosition<ROWS)){
		playerPosition=playerPosition+1;
	}
	b=a;
   }
   fclose(f1);
   return playerPosition;
}

void clearScreen(){
//    sleep(3);
    usleep(1*200000);
    printf("\e[2J\e[H");
}

void printTower(){
    int loop;
    char tower[ROWS][COLS]={
     "          ____________________________________________ ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "                                                     | ",
     "          ___________________________________________| "};
    
    int enemyX;    
/*    clearScreen();        
    tower[playerPosition][COLS-5]='@';
    print_array(tower); */
    char read;

    for(enemyX=1; enemyX<(COLS-2); enemyX+=1){	
        clearScreen();	
//	playerPosition=rand()%15+1;
	playerPosition=findPlayerPos();
	tower[playerPosition][COLS-5]='@';		
        tower[position][enemyX]='*';	
        print_array(tower);
///////////////////[NEXT ITERATION]//////////////////////		
	tower[playerPosition][COLS-5]=' ';
        tower[position][enemyX]=' ';
    }
    
        
    
    for(loop=0; loop<15; loop++){
        printf("%s\n", tower[loop]);
    
    }
     printf("\n");     
}
