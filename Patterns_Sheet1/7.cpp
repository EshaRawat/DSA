#include<iostream>
using namespace std;
int main(){
    int n,m,s;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n/2;i++){
        m=n/2;
        for(int j=1;j<=i;j++){
            cout<<m;
            m--;
        }
        cout<<"\n";
    }
    s=n/2+1;
    for(int i=0;i<s;i++){
        m=s-1;
        for(int j=s;j>i;j--){
            cout<<m;
            m--;
        }
    cout<<"\n";
    }
    return 0;

}
