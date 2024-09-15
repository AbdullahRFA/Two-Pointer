#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
void solve(ll ara[],ll n,ll b[],ll m,ll x)
{
    ll i=0,j=m-1,idx1,idx2,dif=INT_MAX,sum=0;
    while(i<n && j>=0)
    {
        sum=ara[i]+b[j];
        if(abs(sum-x)<dif)
        {
            idx1=i;idx2=j;
            dif=abs(sum-x);
        }
        if(sum>x)j--;
        else i++;
    }
    cout<<"( "<<ara[idx1]<<" + "<<b[idx2]<<" = "<<ara[idx1]+b[idx2]<<" )"<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ara[n+3];
        for(ll i=0;i<n;i++)cin>>ara[i];
        ll m;
        cin>>m;
        ll b[m+3];
        for(ll i=0;i<m;i++)cin>>b[i];
        ll x;
        cin>>x;
        solve(ara,n,b,m,x);
    }
}
