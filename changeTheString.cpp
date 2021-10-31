#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s="AaVdS";
    int flag=1;
    string str="";
    if(s[0]>=97 && s[0]<=122)
    {
        flag=0;
    }

    if(flag)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                str+=s[i]-32;
            }
            else
            {
                str+=s[i];
            }
        }
    }
    else
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                str+=s[i];
            }
            else
            {
                str+=s[i]+32;
            }
        }
    }
    cout<<str;

    return 0;
}
