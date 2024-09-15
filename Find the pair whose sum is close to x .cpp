#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
void solve(ll ara[],ll n,ll x)
{
    ll i=0,j=n-1,idx1,idx2,sum=0;
    ll dif=INT_MAX;
    while(i<j)
    {
        sum=ara[i]+ara[j];
        if(abs(sum-x)<dif)
        {
            idx1=i;idx2=j;
            dif=abs(sum-x);
        }
        if(sum>x)j--;
        else i++;
    }
    cout<<ara[idx1]<<" + "<<ara[idx2]<<" = "<<ara[idx1]+ara[idx2]<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll ara[n];
        for(ll i=0;i<n;i++)cin>>ara[i];
        sort(ara,ara+n);
        ll x;
        cin>>x;
        solve(ara,n,x);
    }
}
