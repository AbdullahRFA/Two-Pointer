#include<bits/stdc++.h>
using namespace std;
void solve1(int ara[],int n,int x)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                for(int p=k+1;p<n;p++)
                {
                    if(ara[i]+ara[j]+ara[k]+ara[p]==x)
                    {
                        cout<<ara[i]<<" "<<ara[j]<<" "<<ara[k]<<" "<<ara[p]<<endl;
                        flag=1;
                    }
                }
            }
        }
    }
    if(flag==0)cout<<"NOT FOUND"<<endl;
}
void solve2(int ara[],int n,int x)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int l=j+1,r=n-1;
            while(l<r)
            {
                int sum=ara[i]+ara[j]+ara[l]+ara[r];
                if(sum==x)
                {
                    cout<<ara[i]<<" "<<ara[j]<<" "<<ara[l]<<" "<<ara[r]<<endl;
                    flag=1;
                }
                if(sum>x)r--;
                else l++;
            }
        }
    }
    if(flag==0)cout<<"NOT FOUND"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    int x;cin>>x;
    solve1(ara,n,x);
    cout<<"\n\n\n";
    solve2(ara,n,x);
}
