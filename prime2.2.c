#include <stdio.h>

int main()


{
int a=0;
      int b=0;
int tmp=1;
	printf("Print first number ");
	scanf("%d", &a);
printf ("Print second number ");
scanf("%d", &b);
for(int i=0; i<b; ++i){
tmp *=a;


}
printf("%d", tmp);
return 0;
}
