/*
 * Bubble Sort Example
 *
 * Bubble sort repeatedly compares adjacent elements and swaps
 * them if they are in the wrong order. After each pass, the
 * largest element moves to its correct position.
 *
 * Example:
 *   Input  : [5, 3, 8, 4, 2]
 *   Output : [2, 3, 4, 5, 8]
 */


#include<stdio.h>
void main() {
	int a[5],i,ele,j,t;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter an array elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("before sorting an array ele: ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}

	printf("after sorting an array ele: ");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

}

