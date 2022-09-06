
//Q.1=> Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
 int main(){
 int a=0,b=1,c,n;
 printf("enter the ith term for fibbonaci series : ");
 scanf("%d",&n);
 
 if(n>2)
 {
 for(int i=3; i<=n; i++)
 {
   c=a+b;
   a=b;
   b=c;

 }
 printf("%d",c);
 }
 else 
 {
     if(n==1)
     printf("%d",0);
     else if(n==2)
     printf("%d",1);
     else printf("invalid term");
 }
 return 0;
 }

//Q.2=> Write a program to print first N terms of Fibonacci series

 #include<stdio.h>
 
 int main(){
 int a=0,b=1,c,n;
 printf("enter the no. of terms for fibbonaci series : ");
 scanf("%d",&n);
 printf("%d %d ",a,b);
 
 for(int i=3; i<=n; i++)
 {
    c=a+b;
    printf("%d  ",c);

   a=b;
   b=c;

 }

 return 0;
 }

//Q.3=> Write a program to check whether a given number is there in the Fibonacci series or not.

   #include<stdio.h>
 
 int main(){
 int a=0,b=1,c,n;
 printf("enter the no. : ");
 scanf("%d",&n);

if(n==0 || n==1)
printf("exist in series");
 
 for(int i=3; ; i++)
 {
    c=a+b;
    if(c==n)
    {  
      printf("%dth term in fibonacci series ",i);
      break;
    }
    else if(c>n)
    {
        printf("not exist in series ");
        break;
    }

   a=b;
   b=c;

 }

 return 0;
 }

//Q.4=> Write a program to calculate HCF of two numbers

  #include<stdio.h>
int main(){

int a,b,c,d;

printf("enter two no. :");
scanf("%d %d",&a,&b);

c=a;  // copy value
d=b;


 short int arr1[20];
 short int i=2,x=0;
 while(a>=i)
 {
  if(a%i==0)
  { arr1[x]=i;
   x++;
   a/=i;

  }
  else i++;
 }


short int arr2[20];
 short int j=2,y=0;
 while(b>=j)
 {
  if(b%j==0)
  { arr2[y]=j;
   y++;
   b/=j;

  }
  else j++;
 }
int hcf=1;
for(int i=0;i<x; i++)
{
  for(int j=0; j<y;j++)
  {
    if(arr1[i]==arr2[j])
    {hcf*=arr2[j];
    arr2[j]=0;
        break;
    }
  }
}


printf("HCF of two given two no. is %d \n",hcf);

return 0;
}


//Q.5=> Write a program to check whether two given numbers are co-prime numbers or not.

 #include<stdio.h>
 int main(){

int a,b,c,d;

printf("enter two no. :");
scanf("%d %d",&a,&b);



 short int arr1[20];
 short int i=2,x=0;
 while(a>=i)
 {
  if(a%i==0)
  { arr1[x]=i;
   x++;
   a/=i;

  }
  else i++;
 }


short int arr2[20];
 short int j=2,y=0;
 while(b>=j)
 {
  if(b%j==0)
  { arr2[y]=j;
   y++;
   b/=j;

  }
  else j++;
 }
int hcf=1;
for(int i=0;i<x; i++)
{
  for(int j=0; j<y;j++)
  {
    if(arr1[i]==arr2[j])
    {hcf*=arr2[j];
    arr2[j]=0;
        break;
    }
  }
}

if(hcf==1)
printf("given no. are co-prime no.");
else printf("given no. are not co-prime no.");

return 0;
}


//Q.6=> Write a program to print all Prime numbers under 100

  #include<stdio.h>
  int main()
  {
    int n=3;
    int check =0;
    
    for(n=2; n<=100; n++)   
    { 
        check=0;
       for(int i=2; i<n; i++)
       {
         if(n%i==0)
         {check=1;
            break;
         }
       }
      if(check==0)
       printf("%d ",n);
       
    }
    return 0;
  }

//Q.7=> Write a program to print all Prime numbers between two given numbers
    
    #include<stdio.h>
    int main()
    {
    int x,y;

   printf("enter two no. :");
   scanf("%d %d",&x,&y);
   
   int a=0;

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

    return 0;
    }

//Q.8=> Write a program to find next Prime number of a given number

#include<stdio.h>
 int main(){
 int n,a=0;
 printf("enter a no.:");
 scanf("%d",&n);

for(int i=n+1; ;i++)
{
  for(int j=2;j<i;j++)
  {
    if(i%j==0)
    {
      a=1;
      break;
    }
   
  }
   if(a==0)
    {printf("next prime no. will be %d ",i);
     break;
    }
    a=0;
 
  
}
 return 0;
 }

//Q.9=> Write a program to check whether a given number is an Armstrong number or not.
 
 #include<stdio.h>
 int main(){
 int n,a,result=0;
 printf("enter a no. :");
 scanf("%d",&n);
 a=n;
 while(a!=0)
 {
   int x=a%10;
   a/=10;
   result+=x*x*x;

 }
 if(result==n)
 printf("yes , given no. is armstrong no.");
 else printf("not a armstrong no.");

 return 0;
 }
 
//Q.10=> Write a program to print all Armstrong numbers under 1000.
 
#include<stdio.h>
int main(){
int a,result;
printf("armstrong no. under 1000 is :\n");
for(int i=1;i<=1000; i++)
{
  
  a=i;
  result=0;
  while(a!=0)
 {
   int x=a%10;
   a/=10;
   result+=x*x*x;

 }
 if(result==i)
 printf("%d ",i);


}
return 0;
} 

//*************************COMPLETE***********************************
