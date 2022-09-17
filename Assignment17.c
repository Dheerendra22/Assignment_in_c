//Q.1=> Write a program to calculate the length of the string. (without using built-in method)

 #include<stdio.h>
 int main()
 {
 char arr[50];
 printf("enter string :");
 fgets(arr,50,stdin);
 int count=0;
 for(int i=0; arr[i]; i++)
 count++;
 printf("length of given string is %d",count-1);

 return 0;
 }

//Q.2=> Write a program to count the occurrence of a given character in a given string

 #include<stdio.h>
 int main()
 {
 char arr[50];
 printf("enter string :");
 fgets(arr,50,stdin);
 char c;
 printf("enter a character ");
 scanf("%c",&c);

 int count=0;
 for(int i=0; arr[i]; i++)
  { if(arr[i]==c)
    count++;
  }

 if(count)
 printf("the occurrence of a given character in a given string is %d",count);
 else
 printf("given chracter not occur in given string");

 return 0;
 }

//Q.3=> Write a program to count vowels in a given string

 #include<stdio.h>
 int main()
 {
 char arr[50];
 printf("enter string :");
 fgets(arr,50,stdin);
 int count=0;
 for(int i=0; arr[i]; i++)
 {
    if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
    count++;
    else if(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
    count++;
 }
 
 printf("no. of vowels in a given string is %d",count);
 return 0;
 }
 
 

//Q.4=> Write a program to convert a given string into uppercase

#include<stdio.h>
#include<string.h>
int main()
{
 char arr[50];
 printf("enter string :");
 fgets(arr,50,stdin);
 printf("%s",strupr(arr));
return 0;
}

//Q.5=> Write a program to convert a given string into lowercase

#include<stdio.h>
#include<string.h>
int main()
{
 char arr[50];
 printf("enter string :");
 fgets(arr,50,stdin);
 printf("%s",strlwr(arr));
return 0;
}

//Q.6=> Write a program to reverse a string
 
 #include<stdio.h>
#include<string.h>
int main()
{
 char arr[50];
 printf("enter string :");
 fgets(arr,50,stdin);
 printf("%s",strrev(arr));
return 0;
}

//Q.7=> Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
int main()
{char arr[50];
 printf("enter string :");
 fgets(arr,50,stdin);
 int alpha=0;
 int digit=0;
 int spechar=0;

for(int i=0; arr[i];i++)
{
  if(arr[i]>='a'&& arr[i]<='z' || arr[i]>='A'&& arr[i]<='Z')
  alpha++;
  else if(arr[i]>='0' && arr[i]<='9')
  digit++;
  else 
  spechar++;
}
printf("total number of alphabets, digits and special characters in a given  string are %d %d %d respectively.",alpha,digit,spechar-1);
return 0;
}

//Q.8=> Write a program in C to copy one string to another string

 #include<stdio.h>
 #include<string.h>
 int main()
 { char arr[50];
   printf("enter string :");
   fgets(arr,50,stdin);
   char arr2[50];
   printf("%s",strcpy(arr2,arr));
    
   return 0;
 }

 //Q.9=> Write a C program to sort a string array in ascending order.
  
  #include<stdio.h>
  int main()
  { char arr[20];
    printf("enter a string lower case ");
    fgets(arr,20,stdin);
    
   int i=0,check;
   
    for(char c='a'; c!='z'; )
    {
       for(int j=i; arr[j]; j++)
       { check=0;
        if(arr[j]==c)
        {
          char temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
          i++;
          check=1;
        }
       }
       if(check==0)
         c++;
   }
  
    printf("%s",arr);
  return 0;
  }

//Q.10=> Write a program in C to Find the Frequency of Characters

 #include<stdio.h>
 int main()
 { char arr[20];
   printf("enter a string ");
   fgets(arr,20,stdin);
   char c;
   printf("enter chracter ,you want to find in string ");
   scanf("%c",&c);
  int count=0;
   for(int i=0; arr[i]; i++)
   { 
    if(arr[i]==c)
     count++;
  
   }
   printf("frequecy of given character in a string is %d",count);

 return 0;
 }

 //************************************************COMPLETE******************************************************