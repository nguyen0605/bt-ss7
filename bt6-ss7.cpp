#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[5]={0,7,-3,8,-6};
	for(int i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			a[i]=a[i]+3;
		}
		else
		{
			a[i]=a[i]+2;
		}
	}
	printf("Mang sau khi thay doi la: ");
	for(int i=0;i<5;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
