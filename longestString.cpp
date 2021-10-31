

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    string arr[n];

    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxLen = 0,index = 0;
    for(int i =0;i<n;i++){


       if(maxLen<arr[i].length()){
        maxLen =arr[i].length();
        index = i;
       }


    }
    cout<<arr[index];

}

