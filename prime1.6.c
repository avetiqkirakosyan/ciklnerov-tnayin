#include <stdio.h>
int main()


{
int num=0;
int rev=0;

printf("Print your number: ");
scanf("%d", &num);
while(num!=0){
rev = rev * 10 + (num%10);
num = num / 10;



}
printf ("%d", rev);



return 0;

}
