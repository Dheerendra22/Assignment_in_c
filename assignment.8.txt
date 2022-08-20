
//Q.1=>

 #include<stdio.h>
 int main(){
 for(int i=1;i<=5;i++)
 {
   for(int j=1;j<=i; j++)
   {
    printf("*");
   }
  printf(" \n");
 }
 return 0;
 }
 
//Q.2=>

#include<stdio.h>
int main(){
for(int i=1; i<=5; i++)
{
    for(int j=5-i;j>0;j--)
    printf(" ");
    for(int k=1; k<i+1; k++)
    printf("*");

    printf(" \n");
}
return 0;
}

//Q.3=>

   #include<stdio.h>
 int main(){
 for(int i=1;i<=5;i++)
 {
   for(int j=6-i;j>=1; j--)
   {
    printf("*");
   }
  printf(" \n");
 }
 return 0;
 }

//Q.4=>

#include<stdio.h>
int main(){
for(int i=0; i<5; i++)
{
    for(int j=0;j<i;j++)
    printf(" ");
    for(int k=1; k<=5-i; k++)
    printf("*");

    printf(" \n");
}
return 0;
}

//Q.5=> 

 
  #include<stdio.h>
  int main(){
   for(int i=0; i<5; i++)
   {
    for(int j=0; j<5-i; j++)
    printf(" ");
    for(int k=1; k<=i+1; k++)
    printf("*");
    for(int x=0; x<i; x++)
    printf("*");

    printf(" \n");

   }
  return 0;
  }

//Q.6=> 
 
#include<stdio.h>
int main(){
for(int i=0; i<5; i++)
{
    for(int j=0;j<i;j++)
    printf(" ");
    for(int k=1; k<=5-i; k++)
    printf("*");
    for(int x=1; x<5-i; x++)
    printf("*");

    printf(" \n");
}
return 0;
}

//Q.7=>

#include<stdio.h>
 int main(){
 for(int i=0;i<5;i++)
 {
  for(int j=5-i;j>=1; j--)
  {
    printf("*");
  }
  
  for(int y=0; y<2*i; y++)
  printf(" ");

  for(int k=1; k<=5-i; k++)
  printf("*");

  printf(" \n");
}

 return 0;
 }

//Q.8=>

  #include<stdio.h>
  int main(){
    for(int i=1; i<=4; i++)
    {
      for(int j=4-i; j>=1; j--)
      printf(" ");
      for(int k=1; k<=i; k++)
      printf("%d",k);
      for(int x=i-1; x>0;x--)
      printf("%d",x);

      printf(" \n");
    }
  
  
  return 0;
  }

//Q.9=>

  #include<stdio.h>
  int main(){
    for(int i=4; i>=1; i--)
    {
    for(int j=4-i; j>=1; j--)
    printf(" ");
    for(int k=1; k<=i; k++)
    printf("%d",k);
    for(int x=i-1; x>0;x--)
    printf("%d",x);

    printf(" \n");
    }
  
  
  return 0;
  }

//Q.10=> 

#include<stdio.h>
int main()
{ 
    int a=1;
    for(int i=1; i<=7; i++)
    {printf("%d",a);
     if(i>3)
     a--;
     else
     a++;
     
    }
    a=1;
    printf(" \n");
    
    
 for(int i=0; i<3; i++)
 { for(int k=1; k<=3-i; k++)
   printf("%d",k);
   
   for(int j=1; j<=a; j++)
   printf(" ");
   a+=2;
   
   for(int x=3-i; x>0; x--)
   printf("%d",x);
   
   printf(" \n");
   
 }

return 0;
}
 

//Q.11=>

#include<stdio.h>
int main()
{
  for(int i=0; i<5; i++)
  {
    for(int j=5-i; j>1; j--)
    printf("  ");
    char a=65;
    for(int k=1; k<=i+1; k++)
    {
      printf("%c ",a);
      a++;
    }
     a=65;
     for(int x=i-1;x>=0; x--)
     {
      a=65+x;
      printf("%c ",a);
    
     }

   printf(" \n");

  }

return 0;
}

//Q.12=>

#include<stdio.h>
int main()
{
  for(int i=4; i>0; i--)
  {
    for(int j=5-i; j>1; j--)
    printf("  ");
    char a=65;
    for(int k=1; k<=i; k++)
    {
      printf("%c ",a);
      a++;
    }
     a=65;
     for(int x=i-2;x>=0; x--)
     {
      a=65+x;
      printf("%c ",a);
    
     }

   printf(" \n");

  }

return 0;
}

//Q.13=>

#include<stdio.h>
int main()
{
  for(int i=7; i>0; i--)
  {
    
    char a=65;
    for(int k=1; k<=i; k++)
    {    
      printf("%c ",a);
      a++;
    }
    short int c=7-i;
    
    for(int y=1; y<=(2*c)-1 ;y++)
    printf("  ");
    
     char b=65;
     for(int x=i-1;x>=0; x--)
     { 
      if(i==7)
       b=65+x-1;
       else
       b=65+x;
       if(b==64)
       continue;
      printf("%c ",b);
    
     }

   printf(" \n");

  }

return 0;
}



//Q.14=>
 
 
 #include<stdio.h>
 int main()
 {
   for(int i=1; i<=5; i++)
   {
     for(int j=1; j<=i; j++)
     {
      printf("* ");
      if(i==3)
      {printf("  ");
      printf("*");
      break;
          
      }
      else if(i==4)
      {printf("    ");
       printf("*");
       break;
          
      }

     }
     printf(" \n");
   }

  return 0;


 }


//Q.15=>

#include<stdio.h>
 int main()
 {
   for(int i=1; i<=5; i++)
   {

    for(int k=1; k<=5-i; k++)
    printf("  ");

    for(int j=1; j<=i; j++)
     {
      printf("* ");
      if(i==3)
      {printf("  ");
      printf("* ");
      break;
          
      }
      else if(i==4)
      {printf("    ");
      printf("*");
      break;
          
      }

     }
     printf(" \n");
   }

  return 0;


 }

//Q.16=>

 #include<stdio.h>
 int main()
 {
   for(int i=0; i<4; i++)
   {
     for(int j=1; j<5-i; j++)
     printf(" ");
     
     printf("*");
     
     for(int k=1;k<=2*i-1;k++)
     printf(" ");
     if(i>0)
     printf("*");
     
     printf("\n");
     
    
   }
   for(int i=1; i<10; i++)
   printf("*");
   
  return 0;


 }

//Q.17=>

 #include<stdio.h>
 int main()
 {
     for(int i=1; i<10; i++)
   printf("*");
   printf(" \n");
   for(int i=3; i>=0; i--)
   {
     for(int j=4-i; j>0; j--)
     printf(" ");
     
     printf("*");
     
     for(int k=1;k<=2*i-1;k++)
     printf(" ");
     if(i>0)
     printf("*");
     
     printf("\n");
     
    
   }
   
   
  return 0;


 }

//Q.18=>

  #include<stdio.h>
  int main(){
   for(int i=0; i<5; i++)
   {
     for(int j=0; j<4-i; j++)
     printf(" ");
     for(int k=1; k<=i+1; k++)
     printf("*");
     for(int x=0; x<i; x++)
     printf("*");

     printf(" \n");

   }

   for(int i=0; i<5; i++)
{   if(i==0)
    continue;
    for(int j=0;j<i;j++)
    printf(" ");
    for(int k=1; k<=5-i; k++)
    printf("*");
    for(int x=1; x<5-i; x++)
    printf("*");

    printf(" \n");
}


  return 0;
  }

//Q.19=>

  #include<stdio.h>
  int main()
  {short int a=5;
   short int b=5;
   short int c=5;
    short int d=2;
    short int y=17;
       
       
    for(int i=0; i<3; i++)
    {
     for(int j=d;j>0; j--)
     printf(" ");
     d--;

     
     for(int k=1; k<=a; k++)
     printf("*");
     a+=2;

     
     for(int x=b; x>0; x--)
     printf(" ");
    
     b-=2;

     for(int k=1; k<=c; k++)
     printf("*");
     c+=2;

     printf(" \n");

    }
    
    for(int i=1; i<=14; i++)
    {
        if(i==7)
        printf("MYsirG");
        else
        printf("*");
    }
    printf(" \n");
    
    for(int l=1; l<=9; l++)
    {
        for(int j=1;j<=l; j++)
        printf(" ");
        
        for(int k=1; k<=y; k++)
         printf("*");
         
         y-=2;
            
        printf(" \n");
    }

   return 0;

  }

//**************************************CCOMPLETE*********************************************
