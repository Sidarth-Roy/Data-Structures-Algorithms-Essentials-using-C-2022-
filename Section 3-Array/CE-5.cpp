//Coding Exercise 5: K-Rotate
#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // run loop k number of times
    int size=a.size();
    while(k>0)
    {int ln=a[size-1];
    for(int i=size-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=ln;
    k--;
    }
    return a;
}
