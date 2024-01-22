#include<iostream>
using namespace std;

void Bubble_Sort(int n,int arr[]){
	int counter=1;
	while(counter<=n){
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
	    }
	    counter++;
	}
	
	cout<<"Sorted Array: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}


int main(){
	int n,arr[n];
	cout<<"Enter Array Size: "<<endl;
	cin>>n;
	cout<<"Enter Array Elements: "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Original Array: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	Bubble_Sort(n,arr);
}
