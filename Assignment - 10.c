 
//Q.1=> Write a function to calculate the area of a circle. (TSRS)

  #include<stdio.h>
  float area_of_circle(int r)
  {
    return (3.14*r*r) ;
  }
  int main()
  {
   int n;
   printf("enter radius of circle :");
   scanf("%d",&n);
   printf("area of circle is  %.2f sqre unit",area_of_circle(n));

    return 0;

  }

//Q.2=> Write a function to calculate simple interest. (TSRS)

 #include<stdio.h>
  float r;
 float si(int p, int t)
 {
    float f;
    f=(p*r*t)/100;
    return f;
 } 

 int main()
 {
   int p,t;
   
   printf("enter amout  and time period (years) for deposit at the rate of 5%% : ");
   scanf("%d %d",&p,&t);

   r=5;
   printf(" simple interest for given deposite will be : %.2f =",si(p,t));
   
   return 0;

 }

 /*Q.3=>Write a function to check whether a given number is even or odd.
        Return 1 if the number is even, otherwise return 0. (TSRS) */


   #include<stdio.h>
     
   int evenodd(int n)
   {
     if(n%2)
     return 1;
     else 
     return 0;
   }
   int main()
   {
     int n;
     printf("enter a integer no. : ");
     scanf("%d",&n);

     short int a=evenodd(n);
     if(a==0)
     printf("given no. is even");
     else
     printf("given no. is odd");

     return 0;

   }         

//Q.4=> Write a function to print first N natural numbers (TSRN)
    
   #include<stdio.h>
     
      void print_num(int n)
      { 
        for(int i=1; i<=n; i++)
         printf("%d\n",i);
      }
    int main()
   {
      int n;
      printf("enter a no. : ");
      scanf("%d",&n);
      print_num(n);
   
       return 0;

    }


//Q.5=> Write a function to print first N odd natural numbers. (TSRN)

 #include<stdio.h>
 void odd(int n)
 {
    short int count=0;
   for(int i=1; ; i+=2)
   {if(count==n)
   break;
    printf("%d\n",i);
    count++;
    
   }
 }
 int main()
 {
   int n;
   printf("enter a no. :");
   scanf("%d",&n);
   odd(n);
   return 0;
    
 }

//Q.6=> Write a function to calculate the factorial of a number. (TSRS)
  
  #include<stdio.h>
  
  int facto(int n)
 { 
    if(n==1)
    return 1;
    else
    return (n*facto(n-1));
 }

  int main()
  {
   int n;
   printf("enter a no. :");
   scanf("%d",&n);
   printf("%d",facto(n));

   return 0;
  } 

//Q.7=> Write a function to calculate the number of combinations 
//       one can make from n items and r selected at a time. (TSRS)
  
 #include<stdio.h>

 int facto(int n)
 { 
    if(n==1)
    return 1;
    else
    return (n*facto(n-1));
 }

   float combi(int n, int r)
   {
     return facto(n)/(facto(r)*facto(n-r));

   }

   int main()
   {
     int n,r;
    printf("enter a no. of items : ");
    scanf("%d",&n);

    printf("enter a no. of selected items at time : ");
    scanf("%d",&r);
    if(r>n)
    printf("r will not greater than n !");

    printf("combination for given selected item is%.2f",combi(n,r));

    return 0;

   }

//Q.8=> Write a function to calculate the number of arrangements 
//       one can make from n items and r selected at a time. (TSRS)


#include<stdio.h>

 int facto(int n)
 { 
    if(n==1)
    return 1;
    else
    return (n*facto(n-1));
 }

   float arrangement(int n, int r)
   {
     return facto(n)/facto(n-r);

   }

   int main()
   {
     int n,r;
    printf("enter a no. of items : ");
    scanf("%d",&n);

    printf("enter a no. of selected items at time : ");
    scanf("%d",&r);

    printf(" arrangement for given selected item is %.2f",arrangement(n,r));

    return 0;

   }
  

//Q.9=> Write a function to check whether a given number contains a given digit or not. (TSRS)

 
 #include<stdio.h>

 int check(int n, int digit)
 {
  while(n)
  { int temp=n%10;
    n/=10;
    if(temp==digit)
    return 1;
  }
  
  return 0;

 }

 int main()
 {
   int n,m;
   printf("enter a +ve  no. and digit : ");
   scanf("%d %d",&n,&m);

   short int x=check(n,m);
   if(x==1)
    printf("yes , given no. contain given digit ");
   else 
   printf("no , given no. not contain given digit ");

 return 0;

 }

//Q.10=> Write a function to print all prime factors of a given number. For example,
//         if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include<stdio.h>

 int prime_factor(int n)
 {
  int i=2,x=0;
 while(n>=i)
 {
  if(n%i==0)
  { printf("%d ",i);
   x++;
   n/=i;

  }
  else i++;
 }
 return 0;
 }

int main()
{
  int n;
  printf("enter a +ve no. : ");
  scanf("%d",&n);
 printf("prime factors of given no. is \n ");
  prime_factor(n);
  return 0;

}

// **********************************COMPLETE*************************************
