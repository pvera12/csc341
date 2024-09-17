//Priscilla Vera
//Lab 4

#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int argc, char *argv[])
{
	int i;
	int z = 0;
	int *values;

	values = (int *)malloc(sizeof(int)*5);
	

	printf("local variable i in stack address is %p \n",&i);
	printf("heap malloc address is %p \n",values);
	printf("unitialized x address is %p \n",&x);

	printf("itialized y address is %p \n",&y);

	int array1[5] = {0, 1, 2, 3, 4};

	int *pointer1;

	pointer1 = &z;

	printf("The value of variable z is %d \n",z);
	printf("The address of variable z is %p \n",&z);
	printf("The value of pointer1= %p which is the same address of z which is %p \n",pointer1,&z);

	for(i = 0; i < 5; i++)
	{
		printf("array1[%d] = %d with address of %p \n",i, array1[i],&array1[i]);
	}
	return EXIT_SUCCESS;
}


