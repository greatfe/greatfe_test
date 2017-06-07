#include <iostream>
#include <cstring>
#include <cstdlib>
#include </usr/include/unistd.h>
using namespace std;

#define MALLOC_SIZE 1024*1024*100
int main()
{
	char* testPtr = (char*)malloc(MALLOC_SIZE);

	memset(testPtr, 0x00, MALLOC_SIZE);

	cout << "Hell~ world!! \n";


	sleep(10);

	delete testPtr;

	while(1)
	{
		sleep(10);
	}

	return 0;
}
