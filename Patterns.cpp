//Continues character patern dsa
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
// floyds triangle pattern 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int num =1;
	cout<<"enter number\n";
	cin>>n;
	for(int i =0 ; i<n; i++){
	    cout<<"\n";
	    
	    
	    for(int j=0 ; j<i+1 ; j++){
	        
	        cout<<num<<" ";
	        num++;
	        
	    }
	}

}
// inverted pyramid number
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int num =1;
	cout<<"enter number\n";
	cin>>n;
	for(int i =0 ; i<n; i++){
	    cout<<"\n";
	    
	    
	    for(int j=0 ; j<i+1 ; j++){
	        
	        cout<<" ";
	        
	        
	    }
	    for(int j=0 ; j<n-i ; j++){
	            cout<<i+1<<" ";
	        }
	}

}
// inverted pyramid char
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int num =1;
	cout<<"enter number\n";
	cin>>n;
	for(int i =0 ; i<n; i++){
	    cout<<"\n";
	    
	    
	    for(int j=0 ; j<i+1 ; j++){
	        
	        cout<<" ";
	        
	        
	    }
	    for(int j=0 ; j<n-i ; j++){
	            cout<<i+1<<" ";
	        }
	}

}
