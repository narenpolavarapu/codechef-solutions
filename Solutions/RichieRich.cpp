#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,A,B,X,c=0,d=0;
	cin>>T;
	while(T>0){
	    cin>>A>>B>>X;
	    c=B-A;
	    d=c/X;
	    cout<<d<<endl;
	    T--;
	}

}
