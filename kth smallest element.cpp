#include<bits/stdc++.h>

using namespace std;

void Kth_element(int a[] , int n , int k)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp = a[j];    
                a[j] = a[i];    
                a[i] = temp;    
            }
        }
    }
    /*for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    sort(a , a+n);*/
    cout<<k<<"th smallest element in the given array is "<<a[k-1]<<endl;
}

int main()
{
    int a[100],n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Kth_element(a,n,k);
}