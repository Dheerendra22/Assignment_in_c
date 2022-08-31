
//Q.1=> Write a recursive function to calculate sum of first N natural numbers

  #include<stdio.h>
 
  int sum(int n)
  { if(n==0)
   return n;
   return n+sum(n-1);
  }
  int main()
  {
   int n;
   printf("enter a no. :");
   scanf("%d",&n);

   int x=sum(n);
   printf("sum of first %d natural numbers is %d",n,x);
   return 0;
  
  }

//Q.2=> Write a recursive function to calculate sum of first N odd natural numbers.

 #include<stdio.h>

int print(int n,int x, int count)
{
 if(count==n)
 return 0;
 count++; 
  return  x+print(n,x+2,count);
}
int main()
{
int n;
printf("enter a no. :");
scanf("%d",&n);
 int a=print(n,1,0);
 printf("sum of first %d odd natural no. is %d",n,a);

return 0;

} 

//Q.3=> Write a recursive function to calculate sum of squares of first n natural numbers
  
 #include<stdio.h>

 int printsquare(int n)
  { 
    if(n==1)
    return 1;

   return (n*n)+printsquare(n-1);
   
  }
 int main()
 {
 int n;
 printf("enter a no. :");
 scanf("%d",&n);
 int x=printsquare(n);
 printf("sum of squares of first %d natural numbers is %d",n,x);

 return 0;

}

//Q.4=> Write a recursive function to calculate sum of digits of a given number

   #include<stdio.h>

  int print_sum(int n)
  {
   if(n==0)
   return 0;
   int x=n%10;
   return x+print_sum(n/10);
   
  }
  int main()
  {
    int n;
    printf("enter a no. :");
    scanf("%d",&n);
    int x=print_sum(n);
    printf("sum of digits of a given number %d",x);
    

   return 0;

  }

//Q.5=> Write a recursive function to calculate factorial of a given number

   #include<stdio.h>

  int facto(int n)
  { 
    if(n==1)
    return 1;
    else
    return n*facto(n-1);
  
  } 
  int main()
  {
    int n;
    printf("enter a no. :");
    scanf("%d",&n);
    int x=facto(n);
    printf("factorial of a given number is %d",x);
    
   return 0;

  }

//Q.6=> Write a recursive function to calculate HCF of two numbers
      
 #include<stdio.h>

 int HCF(int n,int m) 
 {
    if (n2 != 0)
        return HCF(n2, n1 % n2);
    else
        return n1;
}

int main()
{
   int n,m;
    printf("enter two positive integer :");
    scanf("%d %d",&n,&m);
    int x=HCF(n,m);
    printf("hCF of a given number is %d",x);
    
   return 0;

}
   

//Q.7=> Write a recursive function to print first N terms of Fibonacci series.

  #include<stdio.h>

  void print_fibonaci(int n,int x,int y)
  {  static int count=0;
    if(n<0)                                        
    return;
    if(count==n)
    return ; 
    count++;
     int a=x;
     int b=y;
     printf("%d ",a+b);
     print_fibonaci(n,b,a+b);

  }
int main()
{
    int n;
    printf("enter a no. :");
    scanf("%d",&n);
    printf("first %d terms of Fibonacci series is \n %d ",n,0);
    print_fibonaci(n-1,0,1);
    return 0;
}

//Q.8=> Write a program in C to count the digits of a given number using recursion.
 
#include<stdio.h>

 int num_of_digit(int n)
  { static int count=0;
    if(n==0)
    return count;
    count++;
    num_of_digit(n/10);
  }
  int main()
  {
    int n;
    printf("enter a no. :");
    scanf("%d",&n);
    int x=num_of_digit(n);
    printf("no. of digit in a given no. is  %d",x);
     
   return 0;

  }
  
  //Q.9=> Write a program in C to calculate the power of any number using recursion.

    #include<stdio.h>

    int power(int n,int p)
    { static short int count=1;

      if(count==p)
      return n;
      else 
      count++;
      return power(n*n,p);

    }

    int main()
    {
      int n,m;
     printf("enter  +ve base integer :");
     scanf("%d",&n);
     printf("enter +ve power integer :");
     scanf("%d",&m);
     
     printf("power  %d of a given number %d is %d",m,n,power(n,m));
    
   return 0;
    }


 // ********************************************COMPLETE*****************************************
