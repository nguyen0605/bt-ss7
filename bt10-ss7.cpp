#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("n phai la so nguyen duong!");
		return 1;
	}
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Cac phan tu la so nguyen to: \n");
	for(int i=0;i<n;i++)
	{
		int isPrime=1;
		for(int j=2;j*j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				isPrime=0;
				break;
			}
		}
		if(isPrime && a[i]>0)
		{
			printf("%d  ",a[i]);
		}
	}
	return 0;
}
