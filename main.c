#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num,f, valor=1;
	
	printf(" ingrese un mumero= ");
	scanf("%d",&num);
	
	for(f=1; f<=num; f++)
	{
		valor=valor*f;
	}

	 printf("\n el valor del factorial es: %d",valor);
	return 0;
}
