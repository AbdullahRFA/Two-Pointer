#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
///Brute force tc=n^3
//void solve(ll ara[],ll n,ll x)
//{
//    for(int i=0;i<n;i++)
//    {
//        for(int j=i+1;j<n;j++)
//        {
//            for(int k=j+1;k<n;k++)
//            {
//                if(ara[i]+ara[j]+ara[k]==x)
//                {
//                    cout<<ara[i]<<" "<<ara[j]<<" "<<ara[k]<<endl;
//                }
//            }
//        }
//    }
//}
///Two pointer tc=n^
void solve(ll ara[],ll n,ll x)
{
    ll fg=0;
    for(int i=0; i<n; i++)
    {
        int j=i+1,k=n-1;
        while(j<k)
        {
            if(ara[i]+ara[j]+ara[k]==x)
            {
                //cout<<ara[i]<<" "<<ara[j]<<" "<<ara[k]<<endl;
                cout<<"YES"<<endl;
                fg=1;
                break;
            }
            if(ara[i]+ara[j]+ara[k]>x)k--;
            else
                j++;
        }
    }
    if(fg==0)cout<<"NO"<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ara[n+2];
        int x;
        cin>>x;

        for(int i=0; i<n; i++)
        {
            ara[i]=i+1;
        }
       // sort(ara,ara+n);
        solve(ara,n,x);
    }
}
