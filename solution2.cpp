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
	 
   sort(A,A+n);	 
   
   string ans = "";
   
   for(int i=n-1;i>=0;i--)
    ans = ans + to_string(A[i]);
	
	string fans = "";
	
    for(int i=0;i<ans.length();i++)
      if(i%3 == 0 && i != ans.length()-1)
        fans = fans + ans[i] + ",";
      else 
        fans = fans + ans[i]; 	  
   cout << fans;
   
   return 0;
}