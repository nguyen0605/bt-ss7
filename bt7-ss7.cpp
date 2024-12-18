#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("n phai la so nguyen duong!");
		return 1;
	}
	int array[n];
	for(int i=0;i<n;i++)
	{
		do
		{
			printf("Nhap vao phan tu thu %d: ",i+1);
		    scanf("%d",&array[i]);
		    if(array[i]%2==0)
		    {
		    	printf("Phan tu phai la so le, vui long nhap lai!\n");
			}
		}while(array[i]%2==0);
	}
	printf("Mang sau khi nhap la: ");
	for(int i=0;i<n;i++)
	{
		printf("%d  ",array[i]);
	}
	return 0;
}
