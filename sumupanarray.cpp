/*
Pitsy needs help in the given task by her teacher. The task is to divide a array into two sub array (left and right) containing n/2 elements each and do the sum of the subarrays and then multiply both the subarrays.
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];

    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }

    int sum1 = 0,sum2 = 0;
    for(int i = 0;i<n/2;i++){

        sum1+= arr[i];
    }
    for(int i = n/2;i<n;i++){

        sum2+= arr[i];
    }
    cout<<"Two sum multiplication: "<< sum1*sum2;

}
