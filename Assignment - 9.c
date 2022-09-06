
//Q.1=> Write a program which takes the month number as an input and display number of days in that month

   #include<stdio.h>
   int main()
   {
     int n;
     printf("enter a month no. :");
     scanf("%d",&n);

     switch (n)
     {
     case 1:
      printf("january %d",31);
        break;
        
    case 2:
      printf("february %d/%d",28,29);
        break;
    
    case 3:
      printf("march %d",31);
        break;
    
    case 4:
      printf("april %d",30);
        break;

    case 5:
      printf("may %d",30);
        break;
    
    case 6:
      printf("june %d",30);
        break;
    
    case 7:
      printf("july %d",31);
        break;

    case 8:
      printf("august %d",31);
        break; 
    
    case 9:
      printf("september %d",30);
        break;
    
    case 10:
      printf("october %d",31);
        break;

    case 11:
      printf("november %d",30);
        break;

    case 12:
      printf("december %d",31);
        break;

    
     default:
     printf("invalid month");
        
     }

return 0;
    
    }

/* Q.2=> Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit    */


#include<stdio.h>
#include<stdlib.h>
   int main()
   {
     
     printf("what operation you like to perform b/w two no.s :\n");
     printf("a. Addition\nb. Sustraction\nc. multiplication\nd. Division\ne. Exit\n");
     int n,m;
     char x;
     scanf("%c",&x);
     switch (x)
     {
     case 'a':
        printf("enter two no.s :");
        
        scanf("%d %d",&n,&m);
        printf("addition of given two no. is : %d",n+m);
        break;

     case 'b':
        printf("enter two no.s :");
        
        scanf("%d %d",&n,&m);
        printf("subtraction of given two no. is : %d",n-m);
        break;

     case 'c':
        printf("enter two no.s :");
        
        scanf("%d %d",&n,&m);
        printf("multiplication of given two no. is : %d",n*m);
        break;

     case 'd':
        printf("enter two no.s :");
        
        scanf("%d %d",&n,&m);
        printf("division of given two no. is : %d",n/m);
        break;

     case 'e':
      exit(0);
        break;
     
     default:
       printf("invalid operation !");
        break;
     }

    return 0;
   }

/* Q.3=> Write a program which takes the day number of a week and displays a
unique greeting message for the day.*/

#include<stdio.h>
 int main()
 {  int n;
 printf("enter a day no. of a week :");
 scanf("%d",&n);

 switch (n)
 {
case 1:
      printf("have a nice monday");
        break;
        
    case 2:
      printf("have a nice tuesday ");
        break;
    
    case 3:
      printf("have a nice wednesday ");
        break;
    
    case 4:
      printf("have a nice thursday ");
        break;

    case 5:
      printf("have a nice friday ");
        break;
    
    case 6:
      printf("have a nice saturday ");
        break;
    
    case 7:
      printf("have a nice sunday ");
        break;
 
    default:
       printf("invalid day in a week !");
         break;
 }
   
return 0;
 }

/* Q.4=>  Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit  */

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b,c;
 
  printf("enter the  length of three side of triangle: ");
  scanf("%d %d %d",&a, &b, &c);
 
  printf("what you want to check from given list below ?\n");
  printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
  printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
  printf("3. Check whether a given set of three numbers are equilateral triangle or not\n");
  printf("4. Exit \n");
  printf("enter :");
  
   

   int x;
    scanf("%d",&x);
    
    switch(x)
    {
     case 1:
      if(a==b || b==c || a==c)
        printf("yes ");
          else
            printf("NO !");
             break;
    
     case 2:
      if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
      printf("yes !");
        else printf("No !");
          break;
    
    case 3:
      if(a==b==c)
        printf("yes !");
         else printf("No !");
            break;
     
    case 4:
     exit(0);

    default:
      printf("choosen is invalid !");
        break;

    }


return 0;
  
}

/* Q.5=> Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid"); */

#include<stdio.h>
 int main()
 { int n;
  printf("enter a day no. :");
  scanf("%d",&n);

 switch (n)
 {
case 1:
      printf("\"good\"");
        break;
        
    case 2:
      printf("\"better\"");
        break;
    
    case 3:
      printf("\"best\"");
        break;
    
    default:
      printf("\"invalid\"");
        break;

 }
 return 0;
 }

//Q.6=> Program to check whether a year is a leap year or not. Using switch statement
 
#include<stdio.h>
#include<stdlib.h>
 int main(){
 int n;
 printf("enter year in \"YYYY\" format : ");
 scanf("%d",&n);                                     

switch(n%4==0 )
{
  case 1:
  {
    switch (n%100==0)
    {
      case 1:
      switch(n%400==0)
      {
       case 1:
       printf("given year %d is leap year",n);
       exit(0);

      case 0:
      printf("given year %d is not leap year",n);
      exit(0);

      }
      
      case 0:
      printf("given year %d is a leap year",n);
      exit(0);
    }
  }

  case 0:
 printf("given year %d is not leap year",n);
      exit(0);
  

}


 return 0;
 }


/*Q.7=> Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/

    #include<stdio.h>
  int main()
  {
    int n;
    printf("enter a no. of unity electricity consume : ");
    scanf("%d",&n);

    switch(n)
    {
      case 0 ... 50:
    
      printf("your electricity bill is %f rupees\n",(n*0.5));
      printf("And addition surcharge amount is %f rupees\n",(0.2*(n*0.5)));
      printf("total including surcharge is %f rupees",((n*0.5)+0.2*(n*0.5)));
      break;
      
      
     case 51 ...150:
     printf("your electricity bill is %f rupees\n",(n*0.75));
      printf("And addition surcharge amount is %f rupees\n",(0.2*(n*0.75)));
      printf("total including surcharge is %f rupees",((n*0.75)+0.2*(n*0.75)));
      break;
     

     case 151 ... 250:
    
      printf("your electricity bill is %f rupees\n",n*1.2);
      printf("And addition surcharge amount is %f rupees\n",(0.2*(n*1.2)));
      printf("total including surcharge is %f rupees",((n*1.2)+0.2*(n*1.2)));
      break;

     default:
     
      printf("your electricity bill is %f rupees\n",(n*1.5));
      printf("And  addition surcharge amount is %f rupees\n",(0.2*(n*1.5)));
      printf("total including surcharge is %f rupees",((n*1.5)+0.2*(n*1.5)));
      break;

    
    }
    return 0;
  }


/*Q.8=> Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement*/

 #include<stdio.h>
 int main()
 {
   int n;
   printf("1. convert a positive number into a negative number\n");
   printf("2.negative number into a positive number\n");
   printf("enter choice :");
   scanf("%d",&n);
   int x;

   switch(n)
   {
    case 1:
    
    printf("enter a positive no. : ");
    scanf("%d", &x);
    printf("after converting no. is %d",-1*(x));
    break;

   case 2:
    
    printf("enter a negative no. : ");
    scanf("%d", &x);
    printf("after converting no. is %d",-1*(x));
    break;

   default :
   printf("invalid no. !");
   break;


  }
  return 0;
  
 }


//Q.9=> Program to Convert even number into its upper nearest odd number Switch Statement.

   #include<stdio.h>
   int main()
   {
     int n;
     printf("enter an even no. :");
     scanf("%d",&n);

     switch(n%2==0)
     { 
       case 1:
       printf("upper nearest odd no. will be %d", n+1);
       break;

       default:
       printf("not a even no. !");
       break;

     }

     return 0;

   }

 //Q.10=>  C program to find all roots of a quadratic equation using switch case

   #include<stdio.h>
    #include<math.h>

   int main()
   {
     int a,b,c,d;
     printf("enter value of a,b and c of quadratic equation ax^2+bx+c : ");
     scanf("%d %d %d",&a, &b, &c);
      
     d=((b*b)-(4*a*c));

      switch (d>0)
      {
       float x,y,z;
      case 1 :
         x=sqrt(d);
         y=2*a;
         z=-1*b;
         printf("two real and distinct roots are : \n");
         printf("%f  and %f",(z+x)/y, (z-x)/y);
        break;

      case 0:
       
       switch(d<0)
       {
       case 1:
         x=sqrt(-1*d);
         y=2*a;
         z=-1*b;
         printf("two roots are complex and distinct : \n");
         printf("%f+%f i  and  %f-%fi",z/y, x/y, z/y, x/y);
        break;
        
       case  0 :
         x=sqrt(d);
         y=2*a;
         z=-1*b;
         printf("two  same roots are : \n");
         printf("%f and %f",(z+x)/y, (z+x)/y);
        break;
        
       }
    
    
      }


  return 0;

   } 

   
//****************************************COMPLETE************************************************
    
     














