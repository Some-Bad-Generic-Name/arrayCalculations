#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "generation.c"
#include "max.c"
#include "min.c"
#include "average.c"
#include "sort.c"

int printArray(int *array, int arraySize);

int main(){
	srand(time(NULL));
	
	int arraySize = 1000000000;
	int *array = malloc(sizeof(int[arraySize]));

	int maxNum = 0;
	int minNum = 0;
	double averageNum = 0.0;

	arraySize -= 1; // To make calculating for the majority of functions simpler

	printf("INPUT AMOUNT OF NUMBERS:\n");
	scanf("%d", &arraySize);

	generate(array, arraySize);
	maxNum = max(array, arraySize);
	minNum = min(array, arraySize);
	averageNum = average(array, arraySize);
	bubbleSort(array, arraySize);

	printf("Max: %d\n", maxNum);
	printf("Min: %d\n", minNum);
	printf("Average: %lf\n", averageNum);

	free(array);

	return 0;
}

int printArray(int *array, int arraySize)
{
	for(int i = 0; i <= arraySize; i++)
	{
		printf("%d\n", array[i]);
	}
}