//Coding Exercise 2: Maximum Subarray Sum
#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    // int largest=INT_MIN;
    // int size=A.size();
    // for(int i=1;i<size;i++)
    // {
    //     A[i]+=A[i-1];
    // }
    // for(int i=0;i<size;i++)
    // {
    //     for(int j=i+1;j<size;j++)
    //     {
    //         int lg=((i>0)?(A[j]-A[i-1]):A[j]);
    //         largest=max(largest,lg);
    //     }
    // }
    // return largest;
    
    int cs=0;
    int largest=INT_MIN;
    int size=A.size();
    for(int i=0;i<size;i++)
    {
        cs+=A[i];
        largest=max(cs,largest); // the order of largest=max(cs,largest); before cs<0 is very important as if array has only -ive integers it would work
        if(cs<0)
        {
            cs=0;
        }

        
    }
    return largest;
}
