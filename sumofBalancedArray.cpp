#include<bits/stdc++.h>
using namespace std;

int main()
{

    string N = "1234567";
    int sum =0;
    int sum1=0;
    int n = N.length()-1;
    int m = N.length()/2;
    for(int i=0; i<m; i++)
    {
        sum +=N[i];
    }
    for(int i=n; i>m; i--)
    {

        sum1 +=N[i];
    }
    for(int i=0; i<n; i++)
    {

        if(sum != sum1)
            cout<<"False";
        else
            cout<<"true";
    }










    return 0;
}
