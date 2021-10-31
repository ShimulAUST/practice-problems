#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    cin>>num;
    int arr[num],sum = 0;
    for(int i=0; i<num; i++)
    {
        cin>>arr[i];
        sum+= arr[i];
    }

    cout<<sum;


    return 0;
}
