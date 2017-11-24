#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <sys/time.h>


typedef struct snake {
	int x, y;
	struct snake *next, *prev;
}SNAKE, *Snake;

typedef struct food {
	int x, y;
}FOOD, *Food;

#define WIDTH 80
#define HEIGHT 24

Snake head, tail;
FOOD food;


void drawMap()
{
	for(int x=0; x<WIDTH; x+=2) {
		for(int y=0; y<HEIGHT; y++) {
			if(x==0 || y==0 || x==WIDTH-2 || y==HEIGHT-1){
				move(y,x);
				addch('@');
			}
		}
	} //need obstacle
	refresh();
}

void drawSnake(Snake p)
{
	for(; p!=tail; p=p->next) {
		move(p->y,p->x);
		addch('*');
	}
	refresh();
}

