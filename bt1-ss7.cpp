#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int count=0,array[5]={3,6,-4,0,-1};
	for(int i=0;i<5;i++)
	{
		printf("%d\n",array[i]);
		count++;
	}
	printf("Do dai cua mang la %d",count);
	return 0;
}
