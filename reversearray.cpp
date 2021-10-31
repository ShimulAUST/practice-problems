
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n;
    cin>>n>>k;
    int arr[n];
    int arr1[n];

    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }

   for(int i=k-1; i>=0; i--)
    {
       // arr1[i] = arr[i];
        cout<<arr[i];
    }
    for(int i=k+1; i>=n-k+1; i--)
    {
        //arr1[i]=arr[i];
       cout<<arr[i];
    }

}
