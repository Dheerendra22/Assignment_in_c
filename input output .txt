// Q.1=>Write a program to print Hello Students on the screen.

     #include<stdio.h>

      int main(){

     printf("hello");
       return 0;
     }


 // Q.2=> Write a program to print Hello in the first line and Students in the second line.


    #include<stdio.h>
    int main()
    {

        printf("hello \nstudent");
        return 0;
    }    


  // Q.3=> Write a program to print “MySirG” on the screen. (Remember to print in double quotes)


    #include<stdio.h>
    int main()
    {

        printf("\"MySirG\"");
        return 0;
    }  


  // Q.4=> WAP to find the area of the circle. Take radius of circle from user as input and print the result 
  //Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius. 


    #include<stdio.h>
    int main()
    {
      float radius ,area;
      printf("enter the radius of circle:");
      scanf("%f",&radius);
      area=(3.14*radius*radius);
      printf("Area of circle is %f having the radius %f", area,radius);
      return 0;

    }

  // Q.5=>  WAP to calculate the length of String using printf function.
  
        #include<stdio.h>
        
          int main()
        {
        char arr[50];
        printf("enter the string of length less than 50:");
        
        scanf("%s",arr);
         
         int i=0;
           
        // for(i=0; arr[i]!='\0'; ++i);
         

         printf("length of given sting is %d",i);
         return 0;
        }


    // Q.6=>   WAP to print the name of the user in double quotes.
    //Expected output format – “Hello , Amit Kumar”

        #include<stdio.h>

        int main()
        {
          printf("enter your user name:");

          char arr[50];

          scanf("%s",arr);

          printf("\"hello , %s \"", arr);
          return 0;
        }

    // Q.7=> WAP to print “%d” on the screen.

       #include<stdio.h>

       int main()
       {
        char arr[5]={'"','%','d','"'};
        printf("%s",arr);
        return 0;
           
       }

    // Q.8=> WAP to print “\n” on the screen.

      #include<stdio.h>

       int main()
       {
        
        printf("\"\\n\"");
        return 0;
           
       }

     //Q.9=>  WAP to print “\\” on the screen.

       #include<stdio.h>

       int main()
       {
        
        printf("\"\\\\\"");
        return 0;
           
       }

     //Q.10=>  WAP to take date as an input in below given format and convert the date format and display the result as given below.  
    
      #include<stdio.h>

      int main()
      {
        printf("enter date in given format: \"DD\\MM\\YYYY\"");
        
        
        int d,m,y;
        scanf("%d %d %d",&d,&m,&y);
        
        printf("\"Day - %d,Month - %d,Year - %d\"",d,m,y);
        return 0;


      }

    
    //Q.11=>  User Input date format – “HH:MM”
      //       Output format – “HH hour and MM Minute” 


    #include<stdio.h>
      int main()
      {
        printf("enter time in given format: \"HH:MM\"");
        
        int h,m;
        scanf("%d %d",&h,&m);

        printf("\" %d hour and %d minute\"",h,m);
        return 0;
      }

    /*Q.12=> Find output of below code:
    int main()
    {   
     int x = printf(“ineuron”);
      printf(“%d”,x);
     return 0;
     }*/
     


      // ANS= #include<stdio.h>
              int main() 
            { 
          int x = printf("ineuron");
          printf("%d",x);
          return 0;
           }

     // output =>ineuron7         b/c printf() returns the no. of character written inside the double quotes !



   ****************************************COMPLETE*************************************************
