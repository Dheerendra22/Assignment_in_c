
//Q.1=> Write a function to find the greatest number from the given array of any size. (TSRS)

 #include<stdio.h>
 int greatest(int arr[],int size)
 { int big=0;
   for(int i=0; i<size; i++)
   { scanf("%d",&arr[i]);
    if(big<arr[i])
     big=arr[i];
  }
   return big;

 }
int main()
{
  int arr[5];

  printf("enter 5 +ve no.s : ");
  
  int x=greatest(arr,5);
  printf("Greatest no. of given array is %d",x);

 return 0;

}

//Q.2=> Write a function to find the smallest number from the given array of any size. (TSRS)

 #include<stdio.h>
 int smallest(int arr[],int size)
 { int small=10000000;
   for(int i=0; i<size; i++)
  {
    scanf("%d",&arr[i]);
    if(small>arr[i])
     small=arr[i];
  }
   return small;

 }
int main()
{
  int arr[5];

  printf("enter 5 +ve no.s : ");
  
  int x=smallest(arr,5);
  printf("smallest no. of given array is %d",x);

 return 0;

}

//Q.3=> Write a function to sort an array of any size. (TSRS)

  
  #include<stdio.h>
  
  int* sort(int arr[],int size)
  {
    for(int i=0; i<size-1; i++)
   {
     for(int j=i; j<size;j++)
      {
        if(arr[i]>arr[j])
       { 
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       }
     }
    }
    return arr;
    
  }
  int main()
 {
  int arr[5];

  printf("enter 5 +ve no.s : ");
  
  for(int i=0; i<5; i++)
    scanf("%d",&arr[i]) ;

int *p=sort(arr,5);

printf("After shorting given array will ");
    for(int i=0; i<5; i++)
   {
    printf("%d ",p[i]);
   }

 return 0;

}

/*Q.4=> Write a function to rotate an array by n position in d direction. 
       The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; 
       n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] ) */


 #include<stdio.h>

 int* rotate(int arr[],int size,int rot)
 {
   int temp[rot];
   for(int i=0; i<rot; i++)
   temp[i]=arr[i];
   
   int i=0;
   for(int j=rot; j<size; j++)
   {
    arr[i]=arr[j];
     i++;
   }
   for(int k=0; k<rot; k++)
   arr[i]=temp[k];
   i++;
    
   return arr;
 }

 int main()
 {
  int arr[5],rot;

  printf("enter 5 +ve no.s : ");
  
  for(int i=0; i<5; i++)
  scanf("%d",&arr[i]) ;

  printf("enter  no. of rotation in array :");
  scanf("%d",&rot);

  int *p=rotate(arr,5,rot);
  
  printf("After rotating given array will ");
  
  for(int i=0; i<5; i++)
  printf("%d ",p[i]);
  

 }





 //Q.5=> Write a function to find the first occurrence of adjacent duplicate values in the array.
 //      Function has to return the value of the element

#include<stdio.h>

 int find(int arr[],int size)
 {
  for(int i=0; i<size-1; i++)
  {
     if(arr[i]==arr[i+1])
     return arr[i];
   }
    return -1;
   }
   
   int main()
   {
     int arr[5];
     printf("enter 5 +ve no.s :");
     for(int i=0; i<5; i++)
     {
      scanf("%d",&arr[i]);
     }

   int x=find(arr,5);
   if(x==-1)
   printf("not any no. in given array is adjacent duplicate ");
   else
   printf("first occurrence of adjacent duplicate values in the array is %d",x);

   return 0;

   }

//Q.6=> Write a function in C to read n number of values in an array and display it in reverse order.

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

//Q.7=> Write a function in C to count a total number of duplicate elements in an array

 #include<stdio.h>

 int find(int arr[],int size)
 {
   int count=0;
  for(int i=0; i<size-1; i++)
  { 
    for(int j=i+1; j<size; j++)
     { if(arr[i]==arr[j])
       { count++;
         arr[i]=arr[j]=-1;
         break;
       }
     }
   }
    return count;
  }
   
 int main()
  {
   int arr[5];
   printf("enter 5 +ve no. :");
   for(int i=0; i<5; i++)
   scanf("%d",&arr[i]);
    int x=find(arr,5);
   printf("total number of duplicate elements in an array is %d",x);
   return 0;

  }

//Q.8=> Write a function in C to print all unique elements in an array.

#include<stdio.h>
void print(int arr[],int size)
{                                   
  for(int i=0; i<size-1; i++)
  {  
    short int count=0;
  
    for(int j=0; j<size; j++)
    {
      if(arr[i] ==arr[j] && j!=i)
      { count++;
        break;
      }
    }
   if(count==0)
   printf("%d ",arr[i]);

  }
}
int main()
  {
   int arr[5];
   printf("enter 5 +ve no. :");
   for(int i=0; i<5; i++)
   scanf("%d",&arr[i]);
   printf("all unique elements in an array are :");
   print(arr,5);
   
   return 0;

  }

//Q.9=> Write a function in C to merge two arrays of the same size sorted in descending order.
 
 #include<stdio.h>
  
int* merge_and_sort(int arr1[],int arr2[],int arr3[])
{ short int i,j;
  for(i=0;i<5; i++)
        {
            arr3[i] = arr1[i];
         }
     for(j=0;j<5; j++)
        {
            arr3[i] = arr2[j];
            i++; 
        }

for(int i=0; i<9; i++)
   {
     for(int j=i; j<10;j++)
      {
        if(arr3[i]<arr3[j])
       { 
        int temp=arr3[i];
        arr3[i]=arr3[j];
        arr3[j]=temp;
       }
     }
    }
    return arr3;
 
}

int main()
{ 
   int arr1[5],arr2[5],arr3[10];
   printf("enter 5 +ve no. for 1st array :");
   for(int i=0; i<5; i++)
   scanf("%d",&arr1[i]);

   printf("enter 5 +ve no. for 2nd array :");
   for(int i=0; i<5; i++)
   scanf("%d",&arr2[i]);
   
    int *p=merge_and_sort(arr1,arr2,arr3);

   printf(" after merge two arrays of the same size sorted in descending order :");
 
   for(int i=0; i<10; i++)
   printf("%d ",p[i]);

return 0;
}

//Q.10=> Write a function in C to count the frequency of each element of an array
  
#include<stdio.h>

 void frequency(int arr[],int index)
 {
   if(index>4)
   return;
   short int count=0;
  
   for(int j=index+1; j<5; j++)
     { 
         if(arr[index]==-1)
         continue;
         if(arr[index]==arr[j])
       { count++;
         arr[index]=arr[j]=-1;
         break;
       }
     }
   
   printf("frequency of %d is %d",arr[index],count);
    frequency(arr,index++);
  }
  
  int main()
  {
   int arr[5];
   printf("enter 5 +ve no. :");
   for(int i=0; i<5; i++)
   scanf("%d",&arr[i]);
   frequency(arr,0);

   return 0;
  }
  
  //*********************************************COMPLETE******************************
