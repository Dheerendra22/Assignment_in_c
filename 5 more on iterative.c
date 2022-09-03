
//Q.1=>  Write a program to print MySirG N times on the screen

 #include<stdio.h>
 int main(){
 
 int n;
 printf("enter the no.");
 scanf("%d",&n);
 
for(int i=0; i<n; i++)
{
    printf("MySirG\n");
}
 return 0;
 }

//Q.2=> Write a program to print the first N natural numbers.

 #include<stdio.h>
 int main(){

 int n;
 printf("enter the no.");
 scanf("%d",&n);

 for(int i=1; i<=n; i++)
 {
    printf("%d\n",i);
 }
 return 0;
 }

//Q.3=> Write a program to print the first N natural numbers in reverse order

#include<stdio.h>
 int main(){

 int n;
 printf("enter the no.");
 scanf("%d",&n);


 for(int i=n; i>=1; i--)
 {
    printf("%d\n",i);
 }
 return 0;
 }

//Q.4=> Write a program to print the first N odd natural number
 
 #include<stdio.h>
 int main(){
 int n;
 printf("enter the no.");
 scanf("%d",&n);


 for(int i=1; i<n; i+=2)
 {
    printf("%d\n",i);
 }
 return 0;
 }

//Q.5=> Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
 int main(){
 int n;
 printf("enter the no.");
 scanf("%d",&n);


 for(int i=n; i>1; i-=2)
 {
    printf("%d\n",i);
 }
 return 0;
 }

//Q.6=> Write a program to print the first N even natural numbers

#include<stdio.h>
 int main(){
 
 int n;
 printf("enter the no.");
 scanf("%d",&n);

 for(int i=2; i<=n; i+=2)
 {
    printf("%d\n",i);
 }
 return 0;
 }

//Q.7=> Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>
 int main(){
int n;
 printf("enter the no.");
 scanf("%d",&n);

 for(int i=n; i>=2; i-=2)
 {
    printf("%d\n",i);
 }
 return 0;
 }

//Q.8=> Write a program to print squares of the first N natural numbers

#include<stdio.h>
 int main(){

 int n;
 printf("enter the no.");
 scanf("%d",&n); 

 for(int i=1; i<=n; i++)
 {
    printf("%d\n",i*i);
 }
 return 0;
 }

//Q.9=> Write a program to print cubes of the first N natural numbers

#include<stdio.h>
 int main(){
  int n;
 printf("enter the no.");
 scanf("%d",&n);  

 for(int i=1; i<=n; i++)
 {
    printf("%d\n",i*i*i);
 }
 return 0;
 }

//Q.10=> Write a program to print a table of N. 

#include<stdio.h>
 int main(){
  int n;
  printf("enter the no.");
  scanf("%d",&n);  
 

 for(int i=1; i<=10; i++)
 {
    printf("%d * %d = %d\n",n,i,n*i);
 }
 return 0;
 }

 //*********************************COMPLETE****************************************

 
