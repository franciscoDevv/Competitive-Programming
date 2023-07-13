#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,c=1,maxi=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
        maxi=1;
        else
        {
        for(i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
            c++;
        else
            c=1;
            if(maxi<c)
            maxi=c;
    }}
    cout<<maxi<<endl;
    return 0;
}