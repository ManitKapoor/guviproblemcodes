#include <bits/stdc++.h>
using namespace std;

/*   There are n registration numbers in an array, some of them are repeated, 
  write an algorithm to find the repeated numbers in time complexity of O(nlogn) or O(n) */

int main()
{
   int n;
   cin >> n; // No. of elements
   
   map<int,int> A; 
   for(int i=0;i<n;i++)
   {
      int d;
      cin >> d;
	  A[d]++;
   }
   
   for(auto it:A)
   if(it.second > 1)
     cout << it.first << " "; // output
   
   return 0;
}