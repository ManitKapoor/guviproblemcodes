#include <bits/stdc++.h>
using namespace std;

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
   if(it.second == 1)
    { cout << it.first; break; }
   
   return 0;
}