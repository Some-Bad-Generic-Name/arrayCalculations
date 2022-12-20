int min(int *array, int arraySize)
{
	int min = __INT_MAX__;
	for(int i = 0; i <= arraySize; i++)
	{
		if(min > array[i]) min = array[i];
	}
	return min;
}