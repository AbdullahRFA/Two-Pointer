#include<bits/stdc++.h>
#define ll      long long int
using namespace std;
void solve(int ara[],int n)
{
    int flag=1;
    for(int i=n-1;i>=0;i--)
    {
        int x=ara[i];
        int l=0;
        int r=i-1;
        while(l<r)
        {
            if(ara[l]+ara[r]==x)
            {
                cout<<x<<" "<<ara[l]<<" "<<ara[r]<<endl;
                flag=0;
            }
            if(ara[l]+ara[r]>x)r--;
            else l++;
        }
    }
    if(flag)cout<<"No such triplet exit"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    solve(ara,n);
}
/*
Input:
9
5 32 1 7 10 50 19 21 0
Output:
No such triplet exit

Input:
9
5 32 1 7 10 50 19 21 2
Output:
21 2 19

7 2 5


*/
