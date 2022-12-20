#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
	srand(time(NULL));
	
	int arraySize = 10;
	int array[arraySize];

	for(int i = 0; i <= arraySize; i++)
	{
		array[i] = rand();
		printf("%d\n", array[i]);
	}

	return 0;
}