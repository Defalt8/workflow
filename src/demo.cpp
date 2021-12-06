#include <cstdio>
#include <cstdlib>


int main(int argc, char*argv[])
{
	int err = 0;
	printf("CMake demo\n");
	puts("-----------------------------");
	err = argc > 1 ? atoi(argv[1]) : 0;
	if(err != 0) fprintf(stderr, "error %d\n", err);
	puts("-----------------------------");
	return err;
}