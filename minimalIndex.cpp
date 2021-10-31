#include<bits/stdc++.h>
using namespace std;


int main()
{

int flag=1;
   string S ="zsyle",patt = "bjz";
    char ss=S[0];
    for(int i=0; i<patt.length(); i++)
    {
        if(patt[i]==ss)
        {
            flag =0;
        }

    }
    if(flag){
        cout<<"$";
    }
    else{
        cout<<ss;
    }




    return 0;
}
