#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int array[5];
	for(int i=0;i<5;i++)
	{
		printf("Nhap array[%d]: ",i);
		scanf("%d",&array[i]);
	}
	printf("Mang vua nhap array[5]= ");
	for(int i=0;i<5;i++)
	{
		printf("%d  ",array[i]);
	}
	return 0;
}
