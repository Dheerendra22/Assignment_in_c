
//Q.1=> Write a program to check whether a given number is positive or non-positive.

  #include<stdio.h>
  int main(){
  
  printf("enter the  integer no. :");

  int n;
  scanf("%d",&n);
  if(n>0)
  printf("given no. is positive");
  else
  printf("given no. is non-positive ");

  return 0;
  }

//Q.2=> Write a program to check whether a given number is divisible by 5 or not
 
  #include<stdio.h>
  int main(){
   
   int n;
   printf("enter a integer no. :");
   scanf("%d",&n);

   if(n%5)
   printf("given no. is not divisible by 5 :");
   else
   printf("given no. is divisible by 5");

  return 0;
  }

//Q.3=> Write a program to check whether a given number is an even number or an odd number.

   #include<stdio.h>
   int main()
 {
   printf("enter a +ve integer no. :");
    int n ;
    scanf("%d",&n);
    if(n&1!=0)
      printf("given no, is odd");
    
    else
      printf("given no. is even");

      return 0;


 }

//Q.4=> Write a program to check whether a given number is an even number or an odd number without using % operator.
 
  #include<stdio.h>
  int main(){
  

    int n;
    printf("enter a integer no. :");
    scanf("%d",&n);
    if(n%2)
    printf("given no, is odd");
    else
    printf("given no. is even ");

  return 0;
  }
   
//Q.5=> Write a program to check whether a given number is a three-digit number or not.

 #include<stdio.h>
 int main(){
    int n;
    printf("enter a integer no. :");
    scanf("%d",&n);
    if(n>99 && n<1000)
    printf("given no. is three digit no.");
    else
    printf("not a three digit no. "); 
 

 return 0;
 }

//Q.6=> Write a program to print greater between two numbers. Print one number of both are the same.

#include<stdio.h>
int main(){
 int n,m;
 printf("enter two no. :");
 scanf("%d %d",&n,&m);
  
n>m?printf("greater no. is %d",n) : printf("greater no. is %d",m);


return 0;
}

//Q.7=> Write a program to check whether roots of a given quadratic equation are 
//      real & distinct, real & equal or imaginary roots


   #include<stdio.h>
   int main()
   {
   int a,b,c,d;
   printf("give value of  a b and c in equation ax^2+bx+c : ");
   scanf("%d %d %d",&a, &b, &c);

   d=(b*b-4*a*c);

   if(d>0)printf("real and  distinct roots");
   else if(d<0)printf("imaginary roots");
   else printf("real and equal roots ");

   return 0;
   }

//Q.8=> Write a program to check whether a given year is a leap year or not.

 #include<stdio.h>
 int main(){
 int n;
 printf("enter year in \"YYYY\" format : ");
 scanf("%d",&n);

if(n%4==0 && n%100==0)
{
    if(n%400==0)printf("given year %d is leap year",n);
    else printf("not a leap year");
}
else if(n%4 !=0 )printf("given no. is not a leap year");
else printf("given year is leap year ");

 return 0;
 }

//Q.9=> Write a program to find the greatest among three given numbers. Print number once 
//      if the greatest number appears two or three times
 #include<stdio.h>
  int main()
  {
     int a,b,c;
     printf("enter 3 no. :");
     scanf("%d %d %d",&a, &b, &c);

     if(a>b && a>c)
     printf("%d is greatest no.",a);
     else if(b>a && b>c)
     printf("%d is greatest no.",b);
     else if("c>a && c>b") printf("%d is gratest no.",c);

    
  return 0;
  }

//Q.10=> Write a program which takes the cost price and selling price of a product from the user.
//        Now calculate and print profit or loss percentage.  

 #include<stdio.h>
 int main(){
 
 int cp,sp;
 printf("enter the integer value the cost price and selling price of a product");
 scanf("%d %d",&cp,&sp);

 float prf=sp-cp;
  float percent = (prf/cp)*100;
 
 if(prf<0)
 printf("%.2f%% loss ",-percent);
 else if(prf>0)
 printf(" %.2f%% profit ",percent);
 else 
printf(" no profit or loss" );



 return 0;
 }

//Q.11=>  Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33.
//           Now display whether the candidate passed the examination or failed.
  

  #include<stdio.h>
  int main(){
  int E,H,M,S,SS,total;
  printf("enter the marks obtaied by student in english:");
  scanf("%d",&E);
  printf("enter the marks obtaied by student in hindi:");
  scanf("%d",&H);
  printf("enter the marks obtaied by student in science:");
  scanf("%d",&S);
  printf("enter the marks obtaied by student in social study:");
  scanf("%d",&SS);
  printf("enter the marks obtaied by student in maths:");
  scanf("%d",&M);

  total=H+E+M+S+SS;
  if(total<165)printf("student is fail in examination");
  else printf("student is pass in examination");

  
  return 0;
  }

//Q.12=> Write a program to check whether a given alphabet is in uppercase or lowercase.

 #include<stdio.h>
  int main(){
 char m;

 printf("enter an alphabet letter :");
 scanf("%c",&m);

 if(m>='A' && m<='Z')
 printf("upper case");
 else if( m>='a' && m<='z')
 printf("lower case");
 
  return 0;
  }

//Q.13=> Write a program to check whether a given number is divisible by 3 and divisible by 2.  

#include<stdio.h>
int main(){
int n;

printf("enter a no. :");
scanf("%d",&n);
if(n%3==0 && n%2==0)printf("yes given number is divisible by 3 and divisible by 2");
else if(n%3==0) printf(" given number is  divisible by 3 only ");
else if(n%2==0) printf("given number is divisible by 2 only ");
else printf(" not divisible by 3 and 2");

return 0;
}

//Q.14=> Write a program to check whether a given number is divisible by 7 or divisible by 3.

  
#include<stdio.h>
int main(){
int n;

printf("enter a no. :");
scanf("%d",&n);
if(n%3==0 && n%7!=0 )printf("given number is divisible by 3 only");
else if(n%3!=0 && n%7==0) printf(" given number is  divisible by 7 only ");
else if(n%3==0 && n%7==0) printf("given number is divisible by  both 7 and 3 ");
else printf(" not divisible by 3 and 2");

return 0;
}

//Q.15=> Write a program to check whether a given number is positive, negative or zero.

  
  #include<stdio.h>
  int main(){
  
  printf("enter the  integer no. :");

  int n;
  scanf("%d",&n);
  if(n>0)
  printf("given no. is positive");
  else if(n<0)
  printf("given no. is negative ");
  else printf("given no. is zero");

  return 0;
  }

//Q.16=> Write a program to check whether a given character is an alphabet (uppercase),
//        an alphabet (lower case), a digit or a special character.

 #include<stdio.h>
 int main(){
 char m;

 printf("enter a character :");
 scanf("%c",&m);

 if(m>='A' && m<='Z')
 printf("upper case");
 else if( m>='a' && m<='z')
 printf("lower case");
 else if(m>='0' && m<='9')
 printf("digit");
 else
 printf("special symol ");
 
  return 0;
  }



//Q.17=> Write a program which takes the length of the sides of a triangle as an input. 
//       Display whether the triangle is valid or not.

#include<stdio.h>
   int main(){
   printf("enter the length of triangle :");
   int a,b,c;
   
   scanf("%d %d %d",&a,&b,&c);
   if(a<= b+c || b<=a+c || c <=a+b)printf("valid triangle");
   else printf("invalid triangle");
   
   return 0;
   }

//Q.18=> Write a program which takes the month number as an input and display number of days in that month

  #include<stdio.h>
  int main(){
  int n;
  printf("enter the no.of month :");
  scanf("%d",&n);

  if(n==1|| n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
  printf("31 days in a month");
  else if(n>12) printf("invalid month");
  else if(n==2) printf("28 or 29 days in a month");
  else printf("30 days in  month");
  return 0;
  }
    
 //            ***********************************COMPLETE*********************************     
 
