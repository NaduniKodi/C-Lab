#include <stdio.h>
int main()
{
//Q1
int x=0;
while(x<=100)
    {printf("%d ",x);
    x++;
    }

printf("\n\n");
int y=0;
do
{
 printf("%d ",y);
    y++;

}while(y<=100);

printf("\n\n");
int a;
for(a=0;a<=100;a++)
{
  printf("%d ",a);
}


printf("\n\n");
 //Q2
int count=0,mk,sum=0;
float avg;

while(count<3)
{

printf("Enter %d marks=",count+1);
scanf("%d",&mk);

sum=sum+mk; //sum+=mk;
count++;
}
avg=sum/count;

if(avg>=50){
     printf("You are PASS ");}
else{
      printf("You are FAIL");
    }

printf("\n\n");
//Q3
int n,fac;
printf("Enter a desired number= ");
scanf("%d",&n);

do{
fac=fac*n;
n++;}
while(n<100);

printf("The factorial of %d is ",fac);





}
