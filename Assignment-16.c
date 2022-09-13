//Q.1=> Write a program to calculate the sum of two matrices each of order 3x3.

#include<stdio.h> 
int main()
{
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={9,8,7,6,5,4,3,2,1};

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        printf("%d ",arr1[i][j]);

         printf("\n");
    }
  printf("\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        printf("%d ",arr2[i][j]);

         printf("\n");
    }
   printf("\n multiply of given two matrices is :\n");
     for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        printf("%d ",arr1[i][j]+arr2[i][j]);

         printf("\n");
    }


 return 0;
}

//Q.2=> Write a program to calculate the product of two matrices each of order 3x3.

 #include<stdio.h> 
int main()
{
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={9,8,7,6,5,4,3,2,1};

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        printf("%d ",arr1[i][j]);

         printf("\n");
    }
  printf("\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        printf("%d ",arr2[i][j]);

         printf("\n");
    }

   printf("\nmultiplication of given two maatrix is :\n");

     for(int i=0; i<3; i++)
    { 
      int x=0;
      for(int k=0; k<3; k++)
      { x=0;
        for(int j=0; j<3; j++)
         x+=arr1[i][j]*arr2[j][k];
          
        printf("%d ",x);
      }
      printf("\n");
    }


 return 0;
}

//Q.3=> Write a program in C to find the transpose of a given matrix.

#include<stdio.h> 
int main()
{
  int arr1[3][3]={1,2,3,4,5,6,7,8,9};

  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    printf("%d ",arr1[i][j]);
    printf("\n");
  }
 for(int i=0; i<3;i++)
  {
    for(int j=i; j<3; j++)
    {
      if(i!=j)
      {
       int temp= arr1[i][j];
       arr1[i][j]=arr1[j][i];
       arr1[j][i]=temp;
      }
    }
  }
  printf("transpose of given matrix are\n");

  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    printf("%d ",arr1[i][j]);
    printf("\n");
  }
  return 0;
}

//Q.4=> Write a program in C to find the sum of right diagonals of a matrix.
 
#include<stdio.h> 
int main()
{
  int arr1[3][3]={1,2,3,4,5,6,7,8,9};
  printf("given matrix are :\n");
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    printf("%d ",arr1[i][j]);
    printf("\n");
  }
  int sum=0;
  for(int i=0; i<3; i++)
  sum+=arr1[i][i];
   
printf("the sum of right diagonals of a matrix.is %d",sum);
return 0;
}

//Q.5=> Write a program in C to find the sum of left diagonals of a matrix

  #include<stdio.h>
  int main()
  { 
  int arr1[3][3]={1,12,3,24,5,6,57,8,19};
  printf("given matrix are :\n");
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    printf("%d ",arr1[i][j]);
    printf("\n");
  }
     
   int j=2,sum=0;
  
  for(int i=0; i<3; i++)
  { sum+=arr1[i][j];
    j-=1; 
  } 
  printf("the sum of left diagonals of a matrix.is %d",sum);
  return 0;
  
   return 0;
  }

//Q.6=> Write a program in C to find the sum of rows and columns of a Matrix.

  #include<stdio.h>
  int main()
  {
    int arr[3][3]={1,2,25,35,68,25,65,45,44};
    printf("given matrix are :\n");
    for(int i=0; i<3; i++)
   {
    for(int j=0; j<3; j++)
    printf("%d ",arr[i][j]);
    printf("\n");
   }

   int sumrow=0;
   for(int i=0; i<3; i++)
   {
    for(int j=0; j<3; j++)
    sumrow+=arr[i][j];
   }
    int sumcol=0;
   for(int i=0; i<3; i++)
   {
    for(int j=0; j<3; j++)
    sumcol+=arr[j][i];
   }
 
   printf("sum rows in given mtrix is %d\n",sumrow);
   printf("sum columns in given mtrix is %d\n",sumcol);
   return 0;
  } 

//Q.7=> Write a program in C to print or display the lower triangular of a given matrix

    #include<stdio.h>
    int main()
    {
     int arr[3][3];
     printf("enter 3*3 matrix means enter 9 integer value :");
     for(int i=0; i<3; i++)
     {
      for(int j=0; j<3; j++)
      scanf("%d",&arr[i][j]);
     }

    for(int i=0; i<3; i++)
     {
      for(int j=i+1; j<3; j++)
      arr[i][j]=0;
     }
     printf("\nlower triangular of given matrix is :are\n");
     for(int i=0; i<3; i++)
     {
      for(int j=0; j<3; j++)
      printf("%d ",arr[i][j]);
      printf("\n");
     }
     return 0;
    }
 
//Q.8=> Write a program in C to print or display an upper triangular matrix.
 #include<stdio.h>
 int main()
 {int arr[3][3];
     printf("enter 3*3 matrix means enter 9 integer value :");
     for(int i=0; i<3; i++)
     {
      for(int j=0; j<3; j++)
      scanf("%d",&arr[i][j]);
     }

    for(int i=0; i<3; i++)
     {
      for(int j=0; j<i; j++)
      arr[i][j]=0;
     }
     printf("\nupper triangular of given matrix is :are\n");
     for(int i=0; i<3; i++)
     {
      for(int j=0; j<3; j++)
      printf("%d ",arr[i][j]);
      printf("\n");
     }
     return 0;
 
 }

//Q.9=> Write a program in C to accept a matrix and determine whether it is a sparse matrix
 #include<stdio.h>
 int main()
 {
    int arr[3][3];
     printf("enter 3*3 matrix means enter 9 integer value :");
     for(int i=0; i<3; i++)
     {
      for(int j=0; j<3; j++)
      scanf("%d",&arr[i][j]);
     }
    int count=0;
    for(int i=0; i<3; i++)
     {
      for(int j=0; j<3; j++)
      { if(arr[i][j]==0)
        count++;
      }
     }
     if(count>4)
     printf("given matrix is a sprase matrix");
     else
     printf("given matrix is not a sprase matrix");
 return 0;
 }

//Q.10=> Write a program in C to find the row with maximum number of 1s.

#include<stdio.h>
int main()
{
 int arr[3][3];
     printf("enter 3*3 matrix means enter 9 integer value :");
     for(int i=0; i<3; i++)
     {
      for(int j=0; j<3; j++)
      scanf("%d",&arr[i][j]);
     }
    int count=0,maxcount=0,row=0;
    for(int i=0; i<3; i++)
     { 
      for(int j=0; j<3; j++)
      { if(arr[i][j]==1)
        count++;
      }
      if(maxcount<count)
      { row=i+1;
        maxcount=count;
        count=0;
      }
     }

  printf("max no. of 1s in rows on given matrix is: %d",row);
return 0;
}

//********************************complete*************************************************

