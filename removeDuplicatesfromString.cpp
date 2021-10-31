#include<bits/stdc++.h>
using namespace std;

int main()
{


    string S ="Shimmai";


    // Your code goes here
    string str ="";

    for(int i=0; i<S.length(); i++)
    {
        for(int j =i+1; j<S.length(); j++)
        {
            if(S[i] ==S[j])
            {
                S[j] ='1';
            }
        }
    }
    for(int i=0; i<S.length(); i++)
    {
        if(S[i]!='1')
        {
            str+=S[i];
        }
    }

    cout<<str;


}
