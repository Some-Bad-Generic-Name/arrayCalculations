// Recursive bubble sorting algorithm
// Though because it is a bubble sorting algorithm it is VERY slow

void bubbleSort(int *array, int arraySize){ 
	int temp = 0;

	if(arraySize == 0 || arraySize == 1) return;

	for(int i = 0; i < arraySize - 1; i++)
	{
		if(array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
		}
	}
	bubbleSort(array, arraySize - 1);
}