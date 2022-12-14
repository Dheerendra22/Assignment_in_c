
//Q.1=> Write a function to calculate LCM of two numbers. (TSRS)

#include<stdio.h>

 int HCF(int n,int m)
 {
   if(n<m)
   {
       for(int i=n-1; i>0; i--)
       {
           if(n%i==0 && m%i==0)
           return i;
       }
   }
   else if(m<n)
   {  for(int i=m-1; i>0; i--)
       {
           if(n%i==0 && m%i==0)
           return i;
       }
       
   }
  
}

int LCM(int n,int m)
{
  return (n*m)/HCF(n,m); 
    
}
int main()
{
  int n,m;
  printf("enter two  diff. +ve  no. :");
  scanf("%d %d",&n,&m);

  int x=LCM(n,m);
  printf("lcm of given two no. is %d",x);

  return 0;

}

//Q.2=> Write a function to calculate HCF of two numbers. (TSRS)

 #include<stdio.h>

 int HCF(int n,int m)
 {
   if(n<m)
   {
       for(int i=n-1; i>0; i--)
       {
           if(n%i==0 && m%i==0)
           return i;
       }
   }
   else if(m<n)
   {  for(int i=m-1; i>0; i--)
       {
           if(n%i==0 && m%i==0)
           return i;
       }
       
   }
   else return n;
  }
  
 int main()
 { int n,m;
    printf("enter two no. :");
    scanf("%d %d",&n,&m);
 
    printf("HCF of given no. is %d",HCF(n,m));

   return 0;
 }

//Q.3=> Write a function to check whether a given number is Prime or not. (TSRS)
#include <stdio.h>


int checkprime(int n)
{
	int i;
   short int x=n;
	for(i=2;i<=x/2;i++)
	{
		if(n%i==0)
			return 1;
	
	}
	return 0;
}
	
int main()
{
	int num,res=0;

	printf("\nENTER A NUMBER: ");
	scanf("%d",&num);
	res=checkprime(num);
	if(res==0)
		printf("\n%d IS  A PRIME NUMBER",num);
	else
		printf("\n%d IS NOT A PRIME NUMBER",num);


	return 0;
}


//Q.4=>  Write a function to find the next prime number of a given number. (TSRS)

#include <stdio.h>

int nextprime(int n)
{ short int a=0;

for(int i=n+1; ;i++)
{
  for(int j=2;j<=(i/2);j++)
  {
    if(i%j==0)
    {
      a=1;
      break;
    }
  }
   if(a==0)
    return i;
    a=0; 
}
}
 
int main()
{
 int n;
 printf("enter a no. :");
 scanf("%d",&n);

 printf("%d is next prime no.",nextprime(n));
return 0;

}

//Q.5=> Write a function to print first N prime numbers (TSRN)

    #include <stdio.h>

   void printprime(int n)
   { short int count=0;
     short int check=0;
      for(int i=2; ; i++)   
     {   
       for(int j=2; j<=(i/2); j++)
       {
         if(i%j==0)
         {check=1;
            break;
         }
       }
      if(check==0)
       { printf("%d ",i);
         count++;
       }

       check=0;
       if(count==n)
       break;
     }
   }

   int main()
   {
    int n;
     printf("enter a no. :");
     scanf("%d",&n);

     printf("first %d prime no.s are :",n);
     printprime(n);

     return 0;

   }


//Q.6=> Write a function to print all Prime numbers between two given numbers. (TSRN)

  #include<stdio.h>

  void print(int x,int y)
  {
     short int a=0;

   for(int i=x+1;i<y; i++)
   {
    for(int j=2;j<i; j++)
    {
     if(i%j==0)
     { a=1;
      break;
     }
    }
     if(a==0)
     printf("%d ",i);
     a=0;
   }
  }

 int main()
 {
  int x,y;
  printf("enter two no. :");
  scanf("%d %d",&x,&y);
   
  printf("prime no.s b/w given two no. are : ");

  print(x,y);

   return 0;
  }

//Q.7=> Write a function to print first N terms of Fibonacci series (TSRN)
  
  #include<stdio.h>

  void fibo(int n)
  { 
    short int a=0,b=1,count=2;
    int c;
    
    printf("%d %d ",a,b);
 
    for(int i=3; ; i++)
    { count++;
      c=a+b;
      printf("%d  ",c);
       a=b;
       b=c;

     if(count==n)
      break;

    }
  }
 
int main()
{
  int n;
   printf("enter a no. :");
    scanf("%d",&n);

    printf("first %d terms of fibonacci series are : ",n);
     
     fibo(n);

     
  return 0;

}

//Q.8=> Write a function to print PASCAL Triangle. (TSRN)

 #include<stdio.h>
 
 int facto(int n)
 { 
    if(n==0)
    return 1;
    else
    return (n*facto(n-1));
 }

  int combi(int n, int r)
   {
     return (facto(n)/(facto(r)*facto(n-r)));

   }

  void pascal(int r)
  {  
     for(int i=0; i<r; i++)
     {
       for(int k=r; k>i-1; k--)
       printf(" ");
       
     for(int j=0; j<=i; j++)
      printf("%d ",combi(i,j));

       printf(" \n");
     }
     
   }
   
  int main()
 {
   int a;
   printf("enter the no. of rows in pascal triangle : ");
   scanf("%d",&a);

   pascal(a);
   
   return 0;
   
  } 


//Q.9=> Write a program in C to find the square of any number using the function

  #include<stdio.h>

   void sqre(int n)
   {
    printf("%d ",n*n);
   }
  
   int main()
   {   int n;
      printf("enter a no. :");
      scanf("%d",&n);

      printf("square of given no. is : ");
      sqre(n);
      
      return 0;
   }

//Q.10=> Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function

  #include<stdio.h>

  int facto(int n)
  { 
    if(n==1)
    return 1;
    else
    return n*facto(n-1);
  
  } 
  void printsum(int n)
  {  int res=0;
     
     for(int i=1; i<=n; i++)
       res+=(facto(i)/i);
  
    printf("sum of given series is %d",res);

  }
 int main()
 {  int n;
    printf("enter a no. of terms in series :");
    scanf("%d",&n);

    printsum(n);

    return 0;
 }
  
// *******************************COMPLETE*************************************





   

