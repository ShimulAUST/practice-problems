
/*
Given an array, rotate the array by one position in clock-wise direction.
Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin>>n;
int arr[n];

for(int i =0;i<n;i++){
    cin>>arr[i];
}
int temp = arr[n-1];
for(int i = n;i>0;i--){
        arr[i] = arr[i-1];
}
arr[0] = temp;

for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
}


}
