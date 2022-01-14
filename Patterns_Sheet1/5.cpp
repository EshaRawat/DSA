#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter n: ";
    cin>>n;
    m=n;
    for(int i=1;i<=n;i++){
        for(int j=n-1-i;j>=0;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=m-1;j>=i;j--){
            cout<<"* ";
        }
        cout<<"\n";
    }

return 0;
}

