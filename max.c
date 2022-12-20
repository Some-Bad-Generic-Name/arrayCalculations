int max(int *array, int arraySize)
{
	int max = 0;
	for(int i = 0; i <= arraySize; i++)
	{
		if(max < array[i]) max = array[i];
	}

	return max;
}