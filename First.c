#include <stdio.h>
#define ROWS 5
#define COLUMNS 4

int MinElem(int* arr, int rows, int columns)
{
	int res = arr[0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i*columns+j] < res) 	res = arr[i*columns+j];
		}
	}
	
	return res;
}

void ScanArr(int* arr, int rows, int columns)
{
	for (int i = 0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			printf("arr[%d][%d]\t",i,j);
			scanf("%d", &arr[i*columns+j]);
		}
	}
}

int main(void)
{
	int arr[ROWS][COLUMNS];
	ScanArr((int*)arr, ROWS, COLUMNS);
	int result = MinElem((int*)arr, ROWS, COLUMNS);
	printf("Min elem is %d\n", result);
	
	return 0;
}
