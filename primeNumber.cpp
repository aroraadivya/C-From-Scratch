#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    bool isPrime = 1;
    for(int i=2; i<n; i++){

        //rem=0, Not a prime
        if(n%i==0){
            // cout<<"Not a prime number"<<endl;
            isPrime=0;
            break;
        }
    }

    if(isPrime==0){
        cout<<"Not a prime number"<<endl;
    }
    else{
        cout<<"Prime number"<<endl;
    }
}