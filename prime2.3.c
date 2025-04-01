#include <stdio.h>
int main()

{
int a=0;
int b=1;
int c=1;
int i =0;
int q=0;
	printf("Print the number you need: ");
	scanf("%d", &q);
do
{c=a+b;
	a=b;
	b=c;
i++;
}
while(i<q);


printf("%d", c);
return 0;
}
