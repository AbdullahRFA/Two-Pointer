#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
///brute force tc=n^3
//void solve(ll ara[],ll n)
//{
//    for(int i=0;i<n;i++)
//    {
//        for(int j=i+1;j<n;j++)
//        {
//            for(int k=j+1;k<n;k++)
//            {
//                if(ara[i]+ara[j]+ara[k]==0)
//                {
//                    cout<<ara[i]<<" "<<ara[j]<<" "<<ara[k]<<endl;
//                }
//            }
//        }
//    }
//}
///tc=n^2
void solve(ll ara[],ll n)
{
    for(int i=0;i<n-1;i++)
    {
        unordered_set<int>s;
        for(int j=i+1;j<n;j++)
        {
                int x=-(ara[i]+ara[j]);
                if(s.find(x)!=s.end())
                {
                    cout<<ara[i]<<" "<<ara[j]<<" "<<x<<endl;
                }
                else
                    s.insert(ara[j]);
        }
    }
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
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        solve(ara,n);
    }
}
