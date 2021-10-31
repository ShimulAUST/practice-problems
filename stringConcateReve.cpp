#include<bits/stdc++.h>
using namespace std;
int main(){

    string S1 ="Shimul";
    string S2 ="Paul";
    string s = S1+S2;

    string str="";
    for(int i=s.length()-1;i>=0;i--){
           str+= s[i];
        }
   cout<<str;

}
