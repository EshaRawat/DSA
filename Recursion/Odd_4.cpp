#include<iostream>
using namespace std;
void odd(int i,int n){
    if(i>n)
        return;
    cout<<i<<" ";
    odd(i+2,n);


}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    odd(1,n);
    return 0;
}
