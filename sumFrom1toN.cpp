#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;

    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    cout<<"Sum from 1 to "<<n<<" is "<<sum<<endl;
}