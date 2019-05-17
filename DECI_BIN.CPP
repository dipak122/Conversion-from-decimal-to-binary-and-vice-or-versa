//#include<iostream.h>
#include<stdio.h>
//#include<conio.h>
#include<math.h>
int dec_bin()
{
float n,n2;
int i,n1,m,k;
//clrscr();
printf("\nEnter a number decimal or fraction = ");      //enter decimal or fraction  number
scanf("%f",&n);

n1=(int)n;                   // integer part in n1
n2=n-n1;                    // decimal part in n2
for(i=15;i>=0;i--)
{
m=pow(2,i);
if(n1/m==1)
{ k=i;
break;

}
}

for(i=k;i>=0;i--)               //converting integer part to binary
{
m=pow(2,i);
printf("%d",(n1/m)) ;
n1%=m;
}
if(n2>0)
{
printf(".");
i=1 ;
while(i<=5)                     //converting decimal part to binary
 {  n2*=2;              //presition till 5 digits
 printf("%d",(int)(n2));
 n2-=(int)n2;
 i++;
 }

}
//getch();
return 0;
}