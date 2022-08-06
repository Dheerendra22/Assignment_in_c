#include<bits/stdc++.h>
using namespace std;

int
main ()
{
  
 
int n;
  
cin >> n;
  
int r[n];
  
 
for (int i = 0; i < n; i++)
    {
      cin >> r[i];
    } 
 
 
int cd = r[1] - r[0];
  
 
int currlength = 2;
  
int start = 0;
  
 
 
for (int i = 2; i < n; i++)
    {
      
if (cd == r[i] - r[i - 1])
	
	{
	  currlength++;
	
}
      
 
 
      else
	{
	  cd = r[i] - r[i - 1];
	}
    
 
 
 
 
}
  
 
cout << currlength << endl << start;
  
 
 
 
return 0;

}
