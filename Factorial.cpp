#include<iostream>
using namespace std;


int Factorial(int num){
    int n=num;
    int result=1;
    for(int i=n;i>=1;i--){
        result=result*i;
    }
    return result;
}
int main(){
    cout<<Factorial(5);
    cout<<endl;
    cout<<Factorial(3);
    cout<<endl;
    cout<<Factorial(6);
    cout<<endl;
    cout<<Factorial(4);
    cout<<endl;
}