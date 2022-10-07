
//Q.1=> Write a function to calculate length of the string.

 #include<stdio.h>
 int strlength(char*arr)
 {
 int count=0;
 for(int i=0; arr[i]; i++)
 count++;
 return count-1;
 }
 int main()
 { char arr[50];
  printf("enter string :");
  fgets(arr,50,stdin);
  printf("length of given string is %d",strlength(arr));
 
 return 0;
 }
 
//Q.2=> Write a function to reverse a string

 #include<stdio.h>
 #include<string.h>
 void strreverse(char*arr)
 {
   for(int i=strlen(arr); i>=0; i--)
   printf("%c",arr[i]); 

 }

 int main()
 {char arr[50];
  printf("enter string :");
  fgets(arr,50,stdin);
  printf("reverse of given string is\n");
  strreverse(arr);
 
 return 0;
 }

//Q.3=> Write a function to compare two strings

 #include<stdio.h>

 void strcompare(char*arr1,char*arr2)
 {
   for(int i=0; arr1[i] && arr2[i]; i++)
   {
    if(arr1[i]!=arr2[i])
    {printf("given strings are not same");
    return;}
   }
   printf("given strings are same");

 }
 int main()
 { char arr1[50],arr2[50];
   printf("enter 1st string :");
   fgets(arr1,50,stdin);
   printf("enter 2nd string :");
   fgets(arr2,50,stdin);
   strcompare(arr1,arr2);
    
  return 0;

 }

//Q.4=> Write a function to transform string into uppercase
    #include<stdio.h>
    #include<string.h>
    char* strupper(char* arr)
    {
        for(int i=0; i< strlen(arr)-1; i++)
        {  if(arr[i]>=97 && arr[i]<=122)
            arr[i]-=32;
        }
        return arr;
    }

    int main()
    { char arr[50];
      printf("enter string :");
      fgets(arr,50,stdin);
      printf("%s",strupper(arr));
     
     
    return 0;
    }

//Q.5=> Write a function to transform a string into lowercase
   
 #include<stdio.h>
    #include<string.h>
    char* strupper(char* arr)
    {
        for(int i=0; i< strlen(arr)-1; i++)
        {  if(arr[i]>=65 && arr[i]<=90)
            arr[i]+=32;
        }
        return arr;
    }

    int main()
    { char arr[50];
      printf("enter string :");
      fgets(arr,50,stdin);
      printf("%s",strupper(arr));
     
     
    return 0;
    }

//Q.6=>Write a function to check whether a given string is an alphanumeric string or not.
//       (Alphanumeric string must contain at least one alphabet and one digit)


 #include<stdio.h>
 #include<string.h>

 void alphanumeric(char* arr)
 { int alpha=0;
 int numeric=0;
  for(int i=0; arr[i]; i++)
  { 
    if((arr[i]>='a' && arr[i]<='z') || (arr[i]>='A' && arr[i]<='Z'))
    alpha++;
    if(arr[i]>='0' && arr[i]<='9')
    numeric++;
   
  }
 if(alpha==0 || numeric==0)
 printf("given string is not a alphanumeric string !");
 else
 printf("given string is a alphanumeric string !");

 }

 int main()
 { char arr[20];
 printf("enter a string: ");
 fgets(arr,20,stdin);
 alphanumeric(arr);
 
 return 0;
 }


//Q.7=> Write a function to check whether a given string is palindrome or not.

#include<stdio.h>
#include<string.h>
 
 void palindrome(char* arr)
 {
  int i=0;
  int j=strlen(arr)-2;
  while(i!=j)
  {
  if(arr[i]!=arr[j])
  {
    printf("no");
    break;
  }
  else
  i++;
  j--;
 
  }
  if(i==j)
  printf("yes");

 }
 int main()
 {char arr[20];
  printf("enter string :");
  fgets(arr,20,stdin);
  palindrome(arr);
 
 return 0;
 }

//Q.8=> Write a function to count words in a given string
 
#include<stdio.h>
int main()
{ char arr[50];
  printf("enter string :");
  fgets(arr,50,stdin);
  int count=1;
  for(int i=0; arr[i]; i++)
   {
     if(arr[i]==32)
     count++;
   }

  printf("words in a given string is %d ",count);

return 0;
}

//Q.9=> Write a function to reverse a string word wise. 
//      (For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” ) 10. Write a function

#include<stdio.h>
#include<string.h>

void swap(char* arr,int i,int j)
{  char temp;
  while(i!=j)
  {
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
     i++;
     j--;
  }

}
int main()
{
  char arr[30];
  fgets(arr,30,stdin);
  int i,j,flag=0;
  i=j=0;
  

  while(arr[i]!='\0')
  {
     while(arr[j]!=' ')
     { if(arr[j]=='\0')
     {
      int flag=1;
      break;
     }
       j++; 
     }
     
     swap(arr,i,j-1);
     i=j++;
     if(flag==1)
     break;
     
  }
  printf("%s",arr);    

return 0;
}

 //*************************complete************************************
  
 

   