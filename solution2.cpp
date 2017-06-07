#include <bits/stdc++.h>
using namespace std;
/*
 - Given an array of integers, devise an algorithm
 to find the largest number possible from a concatenation 
 of the integers in the array. Each number must be used exactly once. */

int main()
{
   int n;
   cin >> n; 
   
   int A[n]; 
   for(int i=0;i<n;i++)
     cin >> A[i];
	 
   sort(A.rbegin(),A.rend());	 
   
   string ans = "";
   
   for(int i=0;i<n;i++)
    ans = ans + to_string(ans);
	
	string fans = "";
	
    for(int i=0;i<ans.length();i++)
      if(i%3 == 0)
        fans = fans + ans[i] + ",";
      else 
        fans = fans + ans[i]; 	  
   
   return 0;
}