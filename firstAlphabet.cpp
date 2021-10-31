
#include<bits/stdc++.h>
using namespace std;

int main(){

        string S = "Shimul loves someone";

	    string ss="";
	    ss  = S[0];
	    for(int i=0;i<S.length();i++){

	        if(S[i]==' '){
	            ss+=S[i+1];
	        }
	    }
	    cout<<ss;

return 0;
}
