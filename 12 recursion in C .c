
//Q.1=> Write a recursive function to print first N natural numbers

#include<stdio.h>

  void print(int n)
  { 
    if(n==0)
    return ;
    print(n-1);
    printf("%d ",n);
  }
int main()
{
int n;
printf("enter a no. :");
scanf("%d",&n);
print(n);

return 0;

}

//Q.2=> Write a recursive function to print first N natural numbers in reverse order

 
#include<stdio.h>

void print(int n)
{
  if(n==0)
  return; 
  printf("%d ",n);
  print(n-1);
  
}
int main()
{
int n;
printf("enter a no. :");
scanf("%d",&n);
print(n);

return 0;

}

//Q.3=> Write a recursive function to print first N odd natural numbers
  
#include<stdio.h>

void print(int n,int x, int count)
{
 if(count==n)
 return;
 printf("%d ",x);
 count++;
 x+=2;
 print(n,x,count);
}
int main()
{
int n;
printf("enter a no. :");
scanf("%d",&n);
print(n,1,0);

return 0;

}  

//Q.4=> Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>

void printodd(int n,int x, int count)
{
 if(count==n)
 return;
 count++;
 x+=2;
 printodd(n,x,count);
 printf("%d ",x-2);
}
int main()
{
int n;
printf("enter a no. :");
scanf("%d",&n);
printodd(n,1,0);

return 0;

}  

//Q.5=> Write a recursive function to print first N even natural numbers
 
#include<stdio.h>

void printeven(int n,int x, int count)
{
 if(count==n)
 return;
 printf("%d ",x);
 count++;
 x+=2;
 printeven(n,x,count);
}
int main()
{
int n;
printf("enter a no. :");
scanf("%d",&n);
printeven(n,2,0);

return 0;

}  

//Q.6=> Write a recursive function to print first N even natural numbers in reverse order

 #include<stdio.h>

void printeven(int n,int x, int count)
{
 if(count==n)
 return;
 count++;
 x+=2;
 printeven(n,x,count);
 printf("%d ",x-2);
}
int main()
{
int n;
printf("enter a no. :");
scanf("%d",&n);
printeven(n,2,0);

return 0;

}

//Q.7=> Write a recursive function to print squares of first N natural numbers.

 #include<stdio.h>

 void printsquare(int n)
  { 
    if(n==0)
    return ;
    printsquare(n-1);
    printf("%d ",n*n);
  }
 int main()
 {
 int n;
 printf("enter a no. :");
 scanf("%d",&n);
 printsquare(n);

 return 0;

}

//Q.8=> Write a recursive function to print binary of a given decimal number.

  #include<stdio.h>

  void print_binary(int n)
  { if(n==0)
    return;
    int x=n%2;
    print_binary(n/2);
    printf("%d",x);

  }
 int main()
 {
 int n;
 printf("enter a no. :");
 scanf("%d",&n);
 printf("binary of given no. is : ");
 print_binary(n);

 return 0;

}

//Q.9=> Write a recursive function to print octal of a given decimal number.

  #include<stdio.h>

  void print_octal(int n)
  { if(n<8)
    { printf("%d",n);
      return ;
      
     }
    int x=n%8;
    print_octal(n/8);
    printf("%d",x);

  }
 int main()
 {
 int n;
 printf("enter a no. :");
 scanf("%d",&n);
 printf("octal of given no. is : ");
 print_octal(n);

 return 0;

}

//Q.10=> Write a recursive function to print reverse of a given number.

  #include<stdio.h>

  void print_reverse(int n)
  {
   if(n==0)
   return;
   int x=n%10;
   printf("%d",x);
   print_reverse(n/10);
  }
  int main()
  {
    int n;
    printf("enter a no. :");
    scanf("%d",&n);
    printf("reverse of given no. is : ");
    print_reverse(n);

   return 0;

  }

  //**************************************COMPLETE***************************
