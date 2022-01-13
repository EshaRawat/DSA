#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-1-i;j>=0;j--){
            cout<<" ";
        }
        for(int k=2*i-1;k>=1;k--){
            cout<<k;
        }
        cout<<"\n";
    }
    return 0;
}
