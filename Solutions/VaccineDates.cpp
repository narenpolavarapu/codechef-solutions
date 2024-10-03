#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,D,L,R;
	cin>>T;
	while(T>0){
	    cin>>D>>L>>R;
	    if(D>=L && D<=R)
	        cout<<"Take second dose now"<<endl;
	    else if(D<L)
	        cout<<"Too Early"<<endl;
	    else if(D>R) 
	        cout<<"Too Late"<<endl;
	    T--;
	}

}
