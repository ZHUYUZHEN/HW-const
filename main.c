#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void bubbleSort(int const  *array, size_t size);

int main(int argc, char *argv[]) {
	int x[SIZE]={5,8,12,26,56,4,45,9,2,8};
	
	size_t i;
	puts("Original Data:");
		for (i=0;i<SIZE;++i)
	{
		printf("%4d",x[i]);
	}
	
	bubbleSort(x,SIZE);
	
	puts("\nAscending Data:");
	for(i=0;i<SIZE;++i){
		printf("%4d",x[i]);
	}
}
