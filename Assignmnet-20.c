//Q.1=> Write a function to swap values of two int variables of calling function. (TSRS)

#include<stdio.h>

int swap(int* p,int* q)
{
  int temp;
  temp=*p;
  *p=*q;
  *q=temp;
  return 0;
}
int main()
{ printf("enter integer values of a and b variable: ");
  int a,b;
  scanf("%d %d",&a,&b);
  swap(&a,&b);
  printf("after swaping values of a and b is %d and %d",a,b);


return 0;
}

//Q.2=> Write a function to swap strings of two char arrays of calling functions. (TSRS)

#include<stdio.h>

void swap(char **x,char **y)
{
  char *temp;            
  temp=*x;
  *x=*y;
  *y=temp;
  
}

int main()
{ char a1[20],a2[20];
  char *p,*q;
  p = &a1[0];
  q = &a2[0];
  printf("enter two strings ");
  fgets(a1,20,stdin);
  fgets(a2,20,stdin);
  swap(&p,&q);
  printf("%s %s",p,q);
return 0;
}

// OR

#include<stdio.h>

void swap(char **x,char **y)
{
  char *temp;            
  temp=*x;
  *x=*y;
  *y=temp;
  
}

int main()
{ char *a1[20],*a2[20];

  printf("enter two strings ");
  fgets(a1,20,stdin);
  fgets(a2,20,stdin);
  swap(&a1,&a2);
  printf("%s %s",a1,a2);
return 0;
}


//Q.3=> Write a function to sort an array int of type values. [ void sort(int *ptr,int size); ]

#include<stdio.h>

void sort(int* ptr,int size)
{
   
 for(int i=0; i<size-1; i++)
 {
   for(int j=i+1; j<=size-1; j++)
   {
    if(ptr[i]>ptr[j])
    {
      int temp=ptr[i];
      ptr[i]=ptr[j];
      ptr[j]=temp;
    }
   }
 }

}

int main()
{ 
  int ar[]={4,9,2,0,1};
  sort(ar,5);
  
  for(int i=0; i<5; i++)
  printf("%d ",ar[i]);


return 0;
}



//Q.4=> Write a program in C to demonstrate how to handle the pointers in the program.


//Q.5=> Write a program to find the maximum number between two numbers using a pointer.

#include<stdio.h>
void max(int* p,int* q)
{
 *p > *q ? printf("%d",*p):printf("%d",*q);
}
int main()
{
  int a,b;
  printf("enter two no.s ");
  scanf("%d %d",&a,&b);
  max(&a,&b);

return 0;
}



//Q.6=> Write a program to calculate the length of the string using a pointer.

 #include<stdio.h>
 void strlen(char* p)
 {
   int size=0;
  for(int i=0 ; *(p+i); i++)
  size++;
   
  printf("length od given string is %d",size-1);
 }
 int main()
 {
  char ar[20];
  printf("enter string ");
  fgets(ar,20,stdin);
  strlen(ar);

 return 0;
 }



//Q.7=> Write a program to count the number of vowels and consonants in a string using a pointer.

#include<stdio.h>
void count(char* p)
{
 short int consonant=0,vowel=0;
 for(int i=0 ; *(p+i) ; i++)
 {
   if(*(p+i)=='a'|| *(p+i)=='e'|| *(p+i)=='i'|| *(p+i)=='o'|| *(p+i)=='u')
   vowel++;
   else if(*(p+i)=='A'|| *(p+i)=='E'|| *(p+i)=='I'|| *(p+i)=='O'|| *(p+i)=='U')
   vowel++;
   else if(*(p+i)==' ')
   consonant=consonant;
   else
   consonant++;

 }
printf("no. of vowel and consonant in given string is %d  %d",vowel,consonant-1);

}
int main()
{
  char ar[20];
  printf("enter string ");
  fgets(ar,20,stdin);
  count(ar);

return 0;
}


//Q.8=> Write a program to compute the sum of all elements in an array using pointers. 
 
#include<stdio.h>

void sum(int* ptr,int size)
{
   int total=0;
   for(int i=0; i<size; i++)
   total += *(ptr+i);

   printf("the sum of all elements in an array is %d",total);
   
 }

 int main()
 { 
  int ar[]={4,9,2,0,1};
  sum(ar,5);

  return 0;
  }
 
//Q.9=> Write a program to print the elements of an array in reverse order.

 #include<stdio.h>

void sum(int* ptr,int size)
{
   
   for(int i=size-1; i>=0; i--)
   printf("%d ",*(ptr+i));

 }
 int main()
 { 
  int ar[]={4,9,2,0,1};
  sum(ar,5);

  return 0;
  }
  

 //Q.10=> Write a program to print a string in reverse using a pointer.

 #include<stdio.h>

void sum(char* ptr,int size)
{
   for(int i=size-1; i>=0; i--)
   printf("%c ",*(ptr+i));

 }
 int main()
 { 
  char ar[]={'p','r','a','n','s','u'};
  sum(ar,6);

  return 0;
  }
  
//*****************************************COMPLETE****************************************************