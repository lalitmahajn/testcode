/*
 * swap.c
 *
 *  Created on: 27-Aug-2019
 *      Author: student
 */

main()
{
	int a,b;
	printf("Enter 2 nos: ");
	scanf("%d %d",&a,&b);
	printf("Before Swap\n a=%d b=%d",a,b);
	swap(&a,&b);
	printf("\nAfter Swap\n a=%d b=%d",a,b);
}
void swap(int* x,int* y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
