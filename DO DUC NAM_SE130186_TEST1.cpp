//De 1:
//	MSSV:SE130186
	
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void addavalue(int a[],int size)
{	
	for(int i=0;i<size;i++){
		printf("Input a[%d] value : ",i);
		scanf("%d",&a[i]);
	}
}
void swap(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

void pr_array(int a[],int n)
{	int i;
	printf("Array a[]: ");
	for (i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	printf("\n");
}

void sort(int a[],int size)
{
	for (int i=0;i<size;i++){
		for (int j=i+1;j<size;j++){
			if(a[i]>a[j]){
				swap(&a[i],&a[j]);
			}
		}
	}
}

void print_array(int a[],int size){
	for (int i=0;i<size;i++)
	{	printf("%d\t",a[i]);
	}
	printf("\n");
}

int sumEven(int *a, int n)
{
	int i, tong=0, flag=0;
	for(i=0; i<n; i++)
		if(a[i]%2==0)
		{
			flag=1;
			tong = tong + a[i];
		}
		if(flag==1)
			return tong;
		return 0;	
}

int sumOdd(int *a, int n)
{
	int i, tong=0, flag=0;
	for(i=0; i<n; i++)
		if(a[i]%2!=0)
		{
			flag=1;
			tong = tong + a[i];
		}
		if(flag==1)
			return tong;
		return 0;	
}

int findMax(int *a, int n)
{
	int max ;
	int i =0;
	max = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i] > max)
			max = a[i];
	}
	return max;
}

int findMin(int *a, int n)
{
	int min ;
	int i =0;
	min = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i] < min)
			min = a[i];
	}
	return min;
}

int main(){	
	int n;
	int size;
	int a[MAX];
	do{
	
	printf("*************************Menu**********************************\n");
	printf("1 - Input Array. \n");
	printf("2 - Print out the array in ascending order. \n");
	printf("3 - Sum of even elenment and odd element of array. \n");
	printf("4 - Print out max element, min element of array. \n");
	printf("5 - Quit \n");
	printf("---------------------------------\n");
	printf("Input your choice:  ");
	scanf("%d",&n);
	
	switch (n){
		case 1: 
				do{
					printf("Input size of array: ");
					scanf("%d", &size);
				} while(size<0 || size>100);
				addavalue(a,size);
				printf("\n--------------------------------------------------------------------------------\n");
				break;
		case 2: sort(a,size);
				printf("Array in ascending is: ");
				pr_array(a,size);
				printf("\n--------------------------------------------------------------------------------\n");
				break;
		case 3: 
				printf("Sum even: %d\n", sumEven(a,size));
				printf("Sum odd: %d\n", sumOdd(a,size));
				printf("\n--------------------------------------------------------------------------------\n");
				break;
		case 4: printf("Max element: %d\n", findMax(a,size));
				printf("Min element: %d\n", findMin(a,size));
				printf("\n--------------------------Thank-you!!!-and-Goodbye!!!----------------------------\n");
				break;
		case 5: printf("Quit!\n");
				exit(0);
		default: 
				printf("Input Select a option from 1 to 5.\n");
	}
	}
	while(n!=5);
}
