// ------------------------------------
// ball2.cpp
// Simulate a bouncing ball
// ------------------------------------
#include <iostream>
#include <string>
#include <conio.h>	//For kbhit() and getch()
#include "myMacros.h"

using namespace std;

#define ESC 27				//ESC terminates the program
unsigned long delay = 5000000;		//Delay for output

int main(){
	int x = 2, y = 2, dx = 1, speed = 0;
	bool end = false;
	string floor(80, '-'),
	       header = "**** BOUNCING BALL ****",
	       commands = "[Esc] = Terminate "
		          "[+] = speed up  [-] = slow down";
	COLOR(WHITE,BLUE);
	CLS;
	LOCATE(1,25);
	cout << header;
	LOCATE(24,1);
	cout << floor;
	LOCATE(25,1);
	cout << commands;

	while(!end){		//As long as the flag is not set
		LOCATE(y,x);
		cout << 'o';	//show the ball
		for (long wait = 0; wait < delay; ++wait)
			;
		if(x == 1 || x == 79)
			dx = -dx;	//Bounce off a wall?
		if(y == 23){		//on the floor?
			speed = -speed;
			if(speed == 0)
				speed = -7;	//kick
		}
		speed += 1;		//speed up = 1
		LOCATE(y,x);
		cout << ' ';		//clear screen
		y += speed;		//New position y coordinate
		x += dx;		//New position x coordinate
		if(_kbhit != 0){	//key pressed?
			switch(getch()){	//yes
				case '+' : delay -= delay / 5; //speed up
					  break;
				case '-' : delay += delay / 5; //slow down
					  break;
				case ESC : end = true; //terminate
			}
		}
	}
	NORMAL;
	CLS;
	return 0;
}	
