#include<iostream>
using namespace std;
int main(){
    int n,i,j,a=1,b=1,c;
    cout<<"Enter n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<a<<" ";
            c=a+b;
            a=b;
            b=c;
        }
        cout<<endl;
    }
    return 0;
}
