#include "my.h"

void * fun(void *arg)
{
	int i = 9;
	printf("tid = %p\n",(unisigned int)pthread_self());
	pthread_exit((void*)&i);
}

int main()
{
	pthread_t tid;
	int ret,rv;
	ret=pthread_create(&tid,NULL,fun,NULL);
	if(ret != 0)
	{
		perror("falied!\n");
		return -1;
	}
	pthread_join(tid,(void*)&rv);
	printf("");
}
