/*
Given a integer n. We have n*n values of a 2-d array, and  n values of 1-d array. Task is to find the sum of the left diagonal values of the 2-d array and the max element of the 1-d array and print them with space in between.
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cin>>num;

    int arr[num][num],diagonalSum = 0;



    for(int i=0; i<num; i++)
    {
        for(int j =0; j<num; j++)
        {
            cin>>arr[i][j];
            if(i==j)
            {
                diagonalSum += arr[i][j];
            }

        }

    }
    int large = arr[0][0];
    for(int i =0;i<num;i++){
        for(int j =0;j<num;j++)
        {
            if(large<arr[i][j]){
                large = arr[i][j];
            }
        }
    }

    cout<<"Diagonal Sum and Max Value :"<<diagonalSum<<" "<<large;

    return 0;

}
