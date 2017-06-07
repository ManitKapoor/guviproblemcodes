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
   
   string A[n]; 
   for(int i=0;i<n;i++)
     cin >> A[i];
	 
   sort(A,A+n);	 
   
   string ans = "";
   
   for(int i=n-1;i>=0;i--)
    ans = ans + A[i];
    
   string fans = ""; 
   int j = 0;
   for(int i=ans.length()-1;i>=0;i--)
   {
   	  if(j == 0 && i != ans.length()-1)
   	    fans =  ","+fans;
   	  fans =  ans[i]+fans;
   	  j=(j+1)%3;
   }
   
   cout << fans;
   
   return 0;
}