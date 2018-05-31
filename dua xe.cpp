
#include <cstdio>
#include<iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <Windows.h>
#include <fstream>
#include "console.h"

using namespace std;

#define consoleWidth	70
#define consoleHeight	25
#define roadWidth	    25


//---------------------------------------
void introduce()
{
gotoXY(20, 10);
cout << "Game  dua xe";
gotoXY(20, 12);
cout << "Huong Dan: a de di chuyen xe sang trai, d de di chuyen xe sang phai";
gotoXY(20,14);
cout<<"An enter de bat dau";
while(1){
if(kbhit())
{

char key = getch();
if(key == 13){


	clrscr();
	

return;}
}

}

}



