#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int lw=1,hi=n;
    while(lw!=hi)
    {
        long long md=(lw+hi)/2;
        long long v=md,val=0;

        while(v)
        {
            val+=v;
            v/=k;
        }
        if(val>=n)  hi=md;
        else lw=md+1;

    }
    cout<<lw<<endl;
    return 0;
}
