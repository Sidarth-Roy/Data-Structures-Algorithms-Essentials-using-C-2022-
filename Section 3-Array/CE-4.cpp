//Coding Exercise 4: Sorted Pair Sum
#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    // 2 pointer method
    int s=0;
    int e=arr.size();
    while(s<e)
    {
        if(arr[e]+arr[s]==x)
        {
            return {arr[s],arr[e]};
        }
        if(arr[e]+arr[s]<x)
        {
            s++;
        }
        else
        {
            e--;
        }
    }
    return {arr[s],arr[e]};
}
