
//Q.1=> Write a program to calculate sum of first N natural numbers

  #include<stdio.h>
 #include<stdio.h>
 int main(){

 int n,m=0;
 printf("enter the no.");
 scanf("%d",&n);

 for(int i=1; i<=n; i++)
  { m+=i;
   }
  printf("%d\n",m);
 
 return 0;
 }

//Q.2=> Write a program to calculate sum of first N even natural numbers

   #include<stdio.h>
 int main(){
 
 int n,m=0,count=0;
 printf("enter the no.");
 scanf("%d",&n);

 for(int i=2; ; i+=2)
 {
   if(count==n)
   break;
    m+=i;
    count++;
 }
 printf("%d\n",m);
 return 0;
 }

//Q.3=> Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
 int main(){
 int n,m=0,count=0;
 printf("enter the no.");
 scanf("%d",&n);


 for(int i=1; ; i+=2)
 { if(count==n)
   break;
    m+=i;
    count++;
 }
 printf("%d\n",m);
 return 0;
 }


//Q.4=> Write a program to calculate sum of squares of first N natural numbers

  #include<stdio.h>
 int main(){

 int n,m=0,count=0;
 printf("enter the no.");
 scanf("%d",&n); 

 for(int i=1; ; i++)
 {if(count==n)
   break;
   m+=i*i;
   count++;
 }
  printf("%d\n",m);
 return 0;
 }

//Q.5=> Write a program to calculate sum of cubes of first N natural numbers

 #include<stdio.h>
 int main(){
  int n,m=0,count=0;
 printf("enter the no.");
 scanf("%d",&n);  

 for(int i=1; ; i++)
 {if(count==n)
   break;
    m+=i*i*i;
    count++;
 }
 printf("%d\n",m);
 return 0;
 }

//Q.6=> Write a program to calculate factorial of a number

 #include<stdio.h>
 int main(){
 int n,m=1;
 printf("enter the no.");
 scanf("%d",&n); 

 for(int i=n; i>=2; i--)
 {
    m*=i;

 }
 printf(" factorial of given no. is => %d",m);
 
 return 0;
 }

//Q.7=> Write a program to count digits in a given number

  #include<stdio.h>
  int main(){
  int n,count=0;
  printf("enter a no. :");
  scanf("%d",&n);

  while(n)
  {
    count++;
    n/=10;
  }
  printf("%d",count);
  return 0;
  }

//Q.8=> Write a program to check whether a given number is a Prime number or not.

    #include<stdio.h>
  int main(){
    int n;
    int check=0;
  printf("enter a no. :");
  scanf("%d",&n);
  for(int i=2; i<n; i++)
  {
    if(n%i==0)
    {
    check=1;
    break;
    }
  }
  if(check==0)printf("given no. is prime no.");
  else printf("not a prime no. ");
  return 0;
  }

//Q.9=> Write a program to calculate LCM of two numbers
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

int lcm=(c*d)/hcf;
printf("HCF of two given two no. is %d \n",hcf);
printf("LCM of given two no. is %d",lcm);



return 0;
}



//Q.10=> Write a program to reverse a given number

    
  #include<stdio.h>
  int main()
  {
   int n;
   printf("enter a three digit no. :");
   scanf("%d",&n);

   int temp=0 ;
   for(int i=0; i<n; i++)
   {  temp*=10;
      temp+=n%10;
      n=n/10;

   }
   printf("after rotate towards right  the will be = %d%d",temp,1);
   return 0;
   

  }

  //*************************COMPLETE******************************


