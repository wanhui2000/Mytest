#include "my.h"
int main()
{
int pid;
if((pid = fork()) < 0)
{
	perror("failed to fork@\n");
	return -1;
}
else if(pid == 0)
{
	
}
}n
