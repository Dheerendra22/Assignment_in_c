
 /*Q.1=> Write a program to calculate the sum of numbers stored in an array of size 10. Take
         array values from the user*/

#include<stdio.h>

int main()
{
  int arr[10],sum=0;

  printf("enter 10 no.s : ");
  
  for(int i=0; i<10; i++)
  {
    scanf("%d",&arr[i]);
    sum+=arr[i];
  }

 printf("sum of given array is %d",sum);

 return 0;

}

/*Q.2=> Write a program to calculate the average of numbers stored in an array of size 10.
        Take array values from the user */

#include<stdio.h>

int main()
{
  int arr[10],sum=0,count=0;

  printf("enter 10 no.s : ");
  
  for(int i=0; i<10; i++)
  {
    scanf("%d",&arr[i]);
    sum+=arr[i];
    count++;
  }

 printf("Average of given array is %d",sum/count);

 return 0;

}


/*Q.3=> Write a program to calculate the sum of all even numbers and sum of all odd
        numbers, which are stored in an array of size 10. Take array values from the user.*/

#include<stdio.h>

int main()
{
  int arr[10],sumeven=0,sumodd=0;

  printf("enter 10 no.s : ");
  
  for(int i=0; i<10; i++)
  {
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
    sumeven+=arr[i];
    else
    sumodd+=arr[i];
  }

 printf("sum of even no. in array is %d  and sum of odd no. in array is %d",sumeven,sumodd);

 return 0;

}

/*Q.4=> Write a program to find the greatest number stored in an array of size 10. Take array
        values from the user.*/

 #include<stdio.h>

int main()
{
  int arr[10],big=0;

  printf("enter 10 +ve no.s : ");
  
  for(int i=0; i<10; i++)
  {
    scanf("%d",&arr[i]);
    if(big<arr[i])
     big=arr[i];
  }

 printf("Greatest no. of given array is %d",big);

 return 0;

}

/*Q.5=> Write a program to find the smallest number stored in an array of size 10. Take array
          values from the user*/

  
#include<stdio.h>

int main()
{
  int arr[10],small=100000;

  printf("enter 10 +ve no.s : ");
  
  for(int i=0; i<10; i++)
  {
    scanf("%d",&arr[i]);
    if(small>arr[i])
     small=arr[i];
  }

 printf("smallest no. of given array is %d",small);

 return 0;

}

//Q.6=> Write a program to sort elements of an array of size 10. Take array values from the user.

#include<stdio.h>

int main()
{
  int arr[10];

  printf("enter 10 +ve no.s : ");
  
  for(int i=0; i<9; i++)
    scanf("%d",&arr[i]) ;
    
  for(int i=0; i<9; i++)
  {
     for(int j=i; j<10;j++)
     {
        if(arr[i]>arr[j])
      { 
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
      }
    }
  }
    
  
  printf("After shorting given array will ");
    for(int i=0; i<10; i++)
   {
    printf("%d ",arr[i]);
   }

 return 0;

}

//Q.7=> Write a program to find second largest in an array.Take array values from the user.

#include<stdio.h>

int main()
{
  int arr[5],big=0,secbig=0;

  printf("enter 5 +ve  no.s : ");
  
  for(int i=0; i<5; i++)
  {
    scanf("%d",&arr[i]);
    if(big<arr[i])
      big=arr[i];
    if(secbig<arr[i] && arr[i]<big)
      secbig=arr[i];
  }

 printf("greatest no. of given array is %d\nsecond greatest no. of given array is %d",big,secbig);

 return 0;

}

//Q.8=> Write a program to find the second smallest number in an array.Take array values from the user.

   
#include<stdio.h> 

int main()
{
  int arr[5],small=1000000,secsmall=1000000;

  printf("enter 5 +ve no.s : ");
  
  for(int i=0; i<5; i++)
  {
     scanf("%d",&arr[i]);
    if(small>arr[i])
     small=arr[i];
    if(secsmall>arr[i] && arr[i]>small)
      secsmall=arr[i];
  }

 printf("smallest no. of given array is %d\nsecond smallest no. of given array is %d",small,secsmall);

 return 0;

}

/*Q.9=> Write a program in C to read n number of values in an array and display it in reverse
         order. Take array values from the user.*/

   #include<stdio.h>

   void print_reverse( int arr[],int index, int size)
   { 
    if(index>size-1)
    return;
     print_reverse(arr,index+1,5);
     printf("%d ",arr[index]);
   }
  
  int main()
  {
   int arr[5];
   printf("enter 5 +ve no. :");
   for(int i=0; i<5; i++)
   scanf("%d",&arr[i]);
   printf("reverse of given array is :");
   print_reverse(arr,0,5);

  }


/*Q.10=> Write a program in C to copy the elements of one array into another array.Take array
         values from the user.*/

#include<stdio.h>

  int main()
  {
   int arr1[5];
   int arr2[5];
 printf("enter 5 +ve no. :");
   for(int i=0; i<5; i++)
   {
     scanf("%d",&arr1[i]);
     arr2[i]=arr1[i];
   }
 printf("after coping array will be :");
   for(int i=0; i<5; i++)
   printf(" %d",arr2[i]);

  }
         

//***********************************COMPLETE************************
