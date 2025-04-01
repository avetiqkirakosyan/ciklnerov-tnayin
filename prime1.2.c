#include <stdio.h>
int main()

{
	int a=0;
	int b=0;
	int i=0;
	printf ("print your first number");

scanf("%d", &a);
printf("print your second number");
scanf("%d", &b);
for (int i=a; i<=b; i++){
if (i%5==0){
printf("%d", i);
}


}



return 0;
}
