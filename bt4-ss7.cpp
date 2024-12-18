#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Nhap vao phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
	printf("Mang vua nhap la: ");
	for(int i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
