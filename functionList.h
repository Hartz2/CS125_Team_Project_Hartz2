#define ROWS 16
#define COLS 57

char beginKeyReading();
void collide(int, int);
void clearScreen();
void printTower();
void printArray(char lines[ROWS][COLS]);

char wreckage;
int loop;
int spd;
int points;
int ID;

extern int c;
extern int pos;
extern int playerPosition;

/*char tower[ROWS][COLS]={
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

*/
