#include<stdio.h>
//#include<iostream.h>
//#include<conio.h>
#include<math.h>
int bin_dec()
{

 char ch;
 float sum1=0.0;
 int sum=0,i=0,n1,n2,n3,m;
 //clrscr();
 printf("\nEnter binary number =  ");
 
 while(1)
 {
 scanf("%d",&n1);
 scanf("%c",&ch);
 if(ch==10 || ch==32)
 break;
 scanf("%d",&n2);
 break;
 }

 while(n1)
 {
  sum+=pow(2,i)*(n1%10);
  n1/=10;
  i++;

 } i=0;
// printf("\nsum=%d",sum);
   n3=n2;
 while(n3)
 {
  n3/=10;
  i++;
 }
 for(m=i*-1;m<0;m++)
 {
  sum1+=pow(2,m)*(n2%10);
  n2/=10;
 }
  printf("sum = %f",sum+sum1);
 //getch();
 return 0;
}