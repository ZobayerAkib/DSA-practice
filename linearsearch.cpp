#include<bits/stdc++.h>

using namespace std;

int linear_search(int a[],int n , int m)
{
    int ans=0;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i]==m)
        {
            ans = m;
        }
        
    }
    
    return ans;
    
}
int main()
{
    int a[100],n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=linear_search(a,n,m);
    
    if(ans>0)
    {
        cout<<m<<" is  present in the array";
        
    }
    else 
        cout<<m<<" is not present in the array";
    
}