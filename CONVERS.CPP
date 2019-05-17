#include<stdio.h>
//#include<iostream.h>
#include"BIN_DEC.CPP"
#include"DECI_BIN.CPP"
int main()
{     int ch,m,n;

printf("\n\t\tWELCOME TO CONVERSION OF NUMBERS\n");

do
 {
  printf("\n1. To convert Decimal to Binary \n");
 printf("\n2. To convert Binary to Decimal\n");

 scanf("%d",&ch);
 switch(ch)
 {
   case 1:
   { m=dec_bin();
    break;
    }
    case 2:
    {
    m=bin_dec();
    break;
    }
    default:
   printf("Invalid choice");
 }
 printf("\n\nDo You want to continue  !!  Press  ' 1 '  \nOR   to exit press    ' 0 '   ");
 
 scanf("%d",&n);
 
 }while(n==1);
//exit(1);
 //getch();
 return 0;

}