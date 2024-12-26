#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"Not a prime number."<<endl;
        }
        else{
            cout<<"Prime number."<<endl;
        }
        i += 1;
    }
}