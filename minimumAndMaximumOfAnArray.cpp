/*

Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.
Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output:
min = 1, max =  10000
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

    int larger=arr[0];
    int smaller = arr[0];

    for(int i=0;i<n;i++)
    {
        if(larger<arr[i]){
            larger = arr[i];
        }
        if(smaller>arr[i]){
            smaller = arr[i];
        }
    }
    cout<<"Larger Element of the array is : "<<larger<<"\n"<<"Smaller Element of the array is: "<<smaller;

}
