#include <bits/stdc++.h>
using namespace std;

int main() {
	int size;
	cout<<"Enter array size"<<endl;
	cin>>size;
	int num[size];
	cout<<"enter array nums"<<endl;
	for (int i = 0 ; i < size ; i++){
	    cin>>num[i];
	}
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
	
	for (int i=0 ; i<size ; i++){
	    if (smallest > num[i]){
            smallest = num[i];
        }
        if(largest < num[i]){
            largest = num[i];
        }
	}
    cout<<"The smallest Number in array is "<< smallest <<endl;
    cout<<"The largest Number in array is "<< largest <<endl;
}
