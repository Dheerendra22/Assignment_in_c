
//Q.1=> Write a program to print unit digit of a given number

  #include<stdio.h>

  int main()
  {
    printf("enter the no. :");
    int n;
    scanf("%d",&n);
    printf("one's digit of given no. is %d",n%10);
    return 0;

  }


//Q.2=> Write a program to print a given number without its last digit.

 #include<stdio.h>
 int main()
 {
   printf("enter the no. :");
   int x;
   scanf("%d",&x);
   x=x/10;
   printf("%d",x);
   return 0;

 }

 //Q.3=> Write a program to swap values of two int variables
 //Q.4=> Write a program to swap values of two int variables without using a third variable.
 // solution of both above problem below.

   #include<stdio.h>
   int main()
   {
    printf("enter two  integer no. for x and y :");
    int x,y;
    scanf("%d %d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swap value of x is %d and y is %d ",x,y);
    return 0;

   }

//Q.5=> Write a program to input a three-digit number and display the sum of the digits

#include<stdio.h>
int main()
{
  printf("enter three digit no. :");
  int n,m=0;
  scanf("%d",&n);
   while(n)
   {
      m+=n%10;
       n/=10;
   }

 printf("sum of given three digits is %d",m);
 return 0;

}

//Q.6=> Write a program which takes a character as an input and displays its ASCII code.

 #include<stdio.h>
 int main()
 {
   printf("enter a single charcter :");
   char n;
   scanf("%c",&n);
   int x=n;
   printf("ASCII code of given character is => %d",x);
   return 0;

 }

//Q.7=> Write a program to find the position of first 1 in LSB.

#include<stdio.h>
 int main()
 {
    printf("enter a +ve integer no. :");
    int n , count=0,x=0;
    scanf("%d",&n);
 
    while(x!=1)
    {
      count++;
      x=n%2;
      n/=2;

    }
    printf("first position of 1 in lsb at %d place",count);
   
    return 0;
 }


//Q.8=> Write a program to check whether the given number is even or odd using a bitwise operator.


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


//Q.9=> Write a program to print size of an int, a float, a char and a double type variable
 
 #include<stdio.h>
  int main()
  {
      int a;
      float b;
      char c;
      double d;
      
    printf("size of a of type int is %ld \n",sizeof(int));
    
    printf("size of b of type float is %ld \n",sizeof(float));
     
    printf("size of c of type char is %ld \n",sizeof(char));
     
    printf("size of d of type double is %ld",sizeof(double));
      
      return 0;

  }

  //Q.10=> Write a program to make the last digit of a number stored in a variable as zero.
  //         (Example - if x=2345 then make it x=2340)

    #include<stdio.h>
    int main()
    {
      printf("enter a no. :");

      int n,x;
      scanf("%d",&n);

      x=n%10;
      n=n-x;

      printf("result is : %d", n);
      return 0;
     
    }

//Q.11=> Write a program to input a number from the user and also input a digit. Append a digit in the number
//   and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)

  #include<stdio.h>
  int main()
  {
   int number,digit;

   printf("enter a no. and single digit :");
   scanf("%d %d",&number, &digit);

   number*=10;
   number+=digit;
   printf("result number after append a digit is %d",number);
   return 0;

  }
 

//Q.12=> Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

  #include<stdio.h>
  int main()
  {
    printf("enter  Rupees :");

      int n;
    scanf("%d",&n);
    printf(" %f In usd",float(n/76.23));
    return 0;

  }

//Q.13=> Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
  
  #include<stdio.h>
  int main()
  {
    int n,x,y,count=0,temp;
   printf("enter a no.:");
   scanf("%d",&n);
   temp=n;
   n/=10;
   x=temp%10;
   y=temp/10;
   while(y)
   {
    x*=10;
    y/=10;
   }
   printf("%d",x+n);
   
   return 0;
   
  }
