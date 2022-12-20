#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
	srand(time(NULL));
	
	int arraySize = 5;
	int array[arraySize];

	int max = 0;
	int min = 0;
	
	double sum = 0;
	double average = 0.0;

	arraySize -= 1; // to account for the fact the arrays start at zero

	for(int i = 0; i <= arraySize; i++)
	{
		array[i] = rand();
		printf("%d\n", array[i]);
	}

	for(int i = 0; i <= arraySize; i++)
	{
		if(max < array[i]) max = array[i];
		else continue;
	}

	min = max;

	for(int i = 0; i <= arraySize; i++)
	{
		if(min > array[i]) min = array[i];
		else continue;
	}

	for(int i = 0; i <= arraySize; i++)
	{
		sum = sum += array[i];
	}
	average = sum/(arraySize + 1);

	printf("\n%d\n%d\n%lf\n%lld", max, min, average, sum);

	return 0;
}