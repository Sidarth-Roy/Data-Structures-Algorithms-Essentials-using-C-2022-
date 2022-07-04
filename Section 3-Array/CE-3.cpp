//Coding Exercise 3: Lower Bound
#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // if val is present return val
    //if val is smaller than smallest integer return -1
    //if A[i]>lb && A[i]<Val then lb=A[i]
    int lb=INT_MIN;
    if(A[0]>Val)
     {
        return -1;
      }
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==Val)
        {
            return A[i];
        }
        if(A[i]>lb && A[i]<Val)
        {
            lb=A[i];
        }
        
    }
    
    return lb;
}
