
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int arr1[num],arr2[num];
    for(int i =0; i<num; i++)
    {
        cin>>arr1[i];
    }

    for(int i =0; i<num-1; i++)
    {
        arr2[i] = arr1[i] | arr1[i+1];
    }

    arr2[num-1] = arr1[num-1];


    for(int i=0; i<num; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<num; i++)
    {
        cout<<arr2[i]<<" ";
    }

    return 0;

}
