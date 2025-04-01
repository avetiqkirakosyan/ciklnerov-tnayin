#include <stdio.h>
int main()


{
int a=0;
	int b=100;
int i=0;
for (int i=a; i<=100; i++)
{
if(i%3==0 && i%5==0){
printf("FizzBuzz\n");}
else if(i%3==0){
printf("Fizz\n");}
else  if (i%5==0){
printf("Buzz\n");}


			
		

else{
printf("%d\n", i);

}
	}	


return 0;
}
