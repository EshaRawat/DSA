#include<iostream>
using namespace std;
void nat(int n){
    if(n==0)
        return;
    cout<<n ;
    nat(n-1);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    nat(n);
    return 0;
}
