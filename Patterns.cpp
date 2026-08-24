//Continues character patern
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	char num='A';
	cout<<"enter number\n";
	cin>>n;
	for(int i = 1 ; i<=n; i++){
	    cout<<"\n";
	    for(int j =1 ; j<=n; j++){
	        cout<<num<<" ";
	        num++;
	    }
	}

}
// triangle patter 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	
	cout<<"enter number\n";
	cin>>n;
	for(int i = 0 ; i<n; i++){
	    cout<<"\n";
	    for(int j=0 ; j<i+1 ; j++){
	        char num ='*';
	        cout<<num<<" ";
	        num++;
	    }
	}

}
