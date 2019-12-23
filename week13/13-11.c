#include "my.h"

volatile int global = 0;




int main()
{
	clock_t start,stop;
	struct tms buffer;
	signal(SIGALRM,alarmhandler);
	start=times(&buffer);
	alarm(1);
	while(!global);
	stop=times(&buffer);
	printf("%ld clock ticks per second (start=%ld,stop=%ld)\n",stop-start);
}
