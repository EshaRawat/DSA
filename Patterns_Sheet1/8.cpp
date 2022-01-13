#include<iostream>
using namespace std;
int main(){
    int n,m,o;
    cout<<"Enter n: ";
    cin>>n;
    m=n/2+1;
    for(int i=1;i<=m;i++){
        for(int j=m-1-i;j>=0;j--){
            cout<<" ";
        }
        cout<<i;
        if(i!=1){
           for(int j=2*i-1;j>1;j--){
                cout<<" ";
            }
        }
        if(i!=1){
            cout<<i;
        }

        cout<<"\n";

    }
    m=n/2;
    o=m-1;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<m;
        for(int j=2*o-1;j>=0;j--){
                cout<<" ";

        }

        cout<<m;
        m--;
        o--;


        cout<<"\n";
        if(o==0){
                cout<<m;
            }
    }
return 0;
}
