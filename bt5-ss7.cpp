#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[5]={0,2,-5,7,-9}, min=a[0], max=a[0];
	for(int i=1;i<5;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("phan tu nho nhat la %d\n",min);
	printf("phan tu lon nhat la %d",max);
	return 0;
}
