#include <stdio.h>
#include <stdlib.h>

void fromUser(int *arr1, int *arr2, int *row, int *column)
{
	int i,j;
	for(i=0; i<*row; i++)
	{
		for(j=0; j<*column; j++)
		{
			printf("matrix1[%d][%d]: ",i,j);
			scanf("%d", (arr1+i*(*column)+j));
		}
	}
	
	for(i=0; i<*row; i++)
	{
		for(j=0; j<*column; j++)
		{
			printf("matrix2[%d][%d]: ",i,j);
			scanf("%d", (arr2+i*(*column)+j));
		}
	}	
}


void askUser(int *row, int *column)
{
	printf("row:");
	scanf("%d",row);
	printf("column:");
	scanf("%d",column);
}

void sum(int *rMatrix, int *arr1, int *arr2, int *row, int *column)
{
	int i,j;
	for(i=0; i<*row; i++)
	{
		for(j=0; j<*column; j++)
			*(rMatrix+i*(*column)+j)=*(arr1+i*(*column)+j)+*(arr2+i*(*column)+j);
	}
}

void print(int *rMatrix, int *arr1, int *arr2, int *row, int *column)
{
	int i,j;
	printf("matrix1:\n");
	for(i=0; i<*row; i++)
	{
		for(j=0; j<*column; j++)
			printf("%d\t",*(arr1+i*(*column)+j));
		printf("\n");
	}
	
	printf("\n");
	
	printf("matrix2:\n");
	for(i=0; i<*row; i++)
	{
		for(j=0; j<*column; j++)
			printf("%d\t",*(arr2+i*(*column)+j));
		printf("\n");
	}
	
	printf("\n");
	
	printf("result:\n");
	for(i=0; i<*row; i++)
	{
		for(j=0; j<*column; j++)
			printf("%d\t",*(rMatrix+i*(*column)+j));
		printf("\n");
	}
}

int main()
{
	int row,column;
	askUser(&row,&column);
	int matrix1[row][column];
	int *ptr1;
	ptr1=&matrix1[0][0];
	int matrix2[row][column];
	int *ptr2;
	ptr2=&matrix2[0][0];
	fromUser(ptr1, ptr2, &row, &column);
	int resultMatrix[row][column];
	int *ptr3;
	ptr3=&resultMatrix[0][0];
	sum(ptr3, ptr1, ptr2, &row, &column);
	print(ptr3, ptr1, ptr2, &row, &column);
	return 0;
}
