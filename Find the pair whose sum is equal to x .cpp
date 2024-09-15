#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
bool solve(ll ara[],ll n,ll x)
{
    ll i=0,j=n-1;
    while(i<j)
    {
        ll sum=ara[i]+ara[j];
        if(sum==x)
        {
            cout<<ara[i]<<" "<<ara[j]<<endl;
            return true;}
        if(sum>x)j--;
        else i++;
    }
    return false;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ara[n];
        for(ll i=0; i<n; i++)cin>>ara[i];
        sort(ara,ara+n);
        ll x;
        cin>>x;
        bool res=solve(ara,n,x);
        if(res)cout<<"True"<<endl;
        else cout<<"No"<<endl;
    }
}
