#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int j = 0;
    cout<<"enter your num\n";
    cin>>n;
    for(int i=0 ; i<=n ;i++){
        j += i;
        cout<<j<<endl;
    }
  
}

// sum of only odds number from 0 to n
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int j = 0;
    cout<<"enter your num\n";
    cin>>n;
    for(int i=0 ; i<=n;i++){
        if(i%2!=0){
            j += i;
            cout<<j<<endl;
        }
    }
  
}
