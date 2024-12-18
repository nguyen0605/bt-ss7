#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int rows, cols;
	printf("Nhap vao so hang: ");
	scanf("%d",&rows);
	printf("Nhap vao so cot: ");
	scanf("%d",&cols);
	int matrix[rows][cols];
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("Nhap phan tu [%d][%d]: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Mang 2 chieu sau khi nhap la: \n");
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%5d",matrix[i][j]);
		}
		printf("\n"); 
	}
	return 0;
}
