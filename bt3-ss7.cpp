#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[5]={-2,-1,0,6,9},odd=1;
	for(int i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d  ",a[i]);
			odd=0;
		}
	}
	if(odd)
	{
		printf("Mang khong chua so chan!");
	}
	return 0;
}
