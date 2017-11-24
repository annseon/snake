#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <sys/time.h>
#include "funin.h"

int main()
{
	char ch;

	Init();
	signal(SIGALRM, sig_alrm);
	set_ticker(500);

	while(1) {
	key_ctl();
	}
	endwin();
	return 0;
}
