#include <stdio.h>
int main()
{
	int a=0;
	int arjeq=1;

	printf("print the number: ");
	scanf("%d", &a);
	
	
	for(int i=a; i>=1; i-- ){
		arjeq *=i;
	}

	printf("%d", arjeq);

	return 0;


}
