
//Q.1=> Write a program to find the number of vowels in each of the 5 strings 
        stored in two dimensional arrays, taken from the user.

#include<stdio.h>
int main()
{ char arr[5][10];
printf("enter 5 string : ");
for(int i=0; i<5; i++)
scanf("%s",arr[i]);
for(int i=0; i<5; i++)
{  int countvowel=0;
  for(int j=0; arr[i][j]; j++)
  {
    if(arr[i][j]=='a'||arr[i][j]=='e'||arr[i][j]=='i'||arr[i][j]=='o'||arr[i][j]=='u')
    countvowel++;
    else if(arr[i][j]=='A'||arr[i][j]=='E'||arr[i][j]=='I'||arr[i][j]=='O'||arr[i][j]=='U')
    countvowel++;

  }
  printf("\nno. of vowels in %dst string is %d",i+1,countvowel);

}

return 0;
}

//Q.2=> Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.

#include<stdio.h>
#include<string.h>
int main()
{char arr[10][10];
printf("enter 10 city names in india : ");
for(int i=0; i<10; i++)
fgets(arr[i],10,stdin);

for(int k=0; k<10; k++)
{
  char temp;

   int i, j;
   int n = strlen(arr[k]);

  
   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (arr[k][i] > arr[k][j]) {
            temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
         }
      }
   }

}
for(int i=0; i<10; i++)
printf("\n%s",arr[i]);
return 0;
}

//Q.3=> Write a program to read and display a 2D array of strings in C language
 
#include<stdio.h>
int main()
{ char arr[5][10];
  printf("enter 5 string : ");
  for(int i=0; i<5; i++)
  scanf("%s",arr[i]);

  
  for(int i=0; i<5; i++)
  printf("\n%s",arr[i]);

return 0;
}

//Q.4=> Write a program to search a string in the list of strings !

#include<stdio.h>
#include<string.h>
int main()
{ char arr[5][10];
  printf("enter 5 string : ");
  for(int i=0; i<5; i++)
  scanf("%s",arr[i]);

 char find[10];
 printf("enter which string you want to find : ");
 scanf("%s",find);

 for(int i=0; i<5; i++)
 {
   short int check =strcmp(arr[i],find);
   if(check==0)
   { 
     printf("given string exist in list,no. %d",i+1);
     return 0;
   }
 }
 printf("not exist in our list !");

return 0;
}

//Q.5=> Suppose we have a list of email addresses,
//      check whether all email addresses have ‘@’ in it. Print the odd email out.

#include<stdio.h>
#include<string.h>
int main()
{char arr[5][10];
printf("enter 5 email address: ");
for(int i=0; i<5; i++)
fgets(arr[i],10,stdin);

short int check=1;

for(int i=0; i<5; i++)
{ check=1;
  for(int j=0; arr[i][j]; j++)
  {
   if(arr[i][j]=='@')
    { 
      check=0;
      break;
    }
  }
  if(check)
  {
    printf("email address which not have '@ symbol are \n");
    printf("\n%s",arr[i]);
  }
  
}
return 0;
}


//Q.6=> Write a program to print the strings which are palindrome in the list of strings.

#include<stdio.h>
#include<string.h>
int main()
{
char arr[5][10];
printf("enter 5 strings: ");
for(int i=0; i<5; i++)
fgets(arr[i],10,stdin);

printf("plindrome strings in list are \n");

for(int k=0; k<5; k++){

 int i=0;
  int j=strlen(arr[k])-2;
  while(i!=j)
  {
  if(arr[k][i]!=arr[k][j])
   break;
  else
  i++;
  j--;
 
  }
  if(i==j)
  printf("%s",arr[k]);
  
 }
return 0;
}

//Q.9=> Write a program that asks the user to enter a username. If the username entered is one of 
//        the names in the list then the user is allowed to calculate the factorial of a number. 
//         Otherwise, an error message is displayed

#include<stdio.h>
#include<string.h>
int facto(int n)
{ if(n==0)
return 1;
  return (n*facto(n-1));
}
int main()
{
  char arr[3][10]={"shanu","ankit","pransu"};
   char username[20];
   printf("enter username : ");
   fgets(username,10,stdin);
   
   int check=1;
   for(int i=0; i<3; i++)
   {
     check=strcmp(arr[i],username);
     if(check!=0)
     { int n;
      printf("enter a no. to find a fatorial: ");
      scanf("%d",&n);
      printf("factorial of given nno. is %d",facto(n));
      return 0;
     }

   }
   printf("invalid user !");

return 0;
}

//***************************************COMPLETE*********************************
