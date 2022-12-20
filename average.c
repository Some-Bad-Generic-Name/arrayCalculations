double average(int *array, int arraySize)
{

	double sum, result = 0.0;
	for(int i = 0; i <= arraySize; i++)
	{
		sum = sum += array[i];
	}
	result = sum/(arraySize + 1);
	return result;
}