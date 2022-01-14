#include<iostream>
using namespace std;
int main(){
    int n,i,j,c;
    cout<<"Enter n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        c=1;
        for(j=1;j<=i;j++){
            cout<<c<<" ";
            c=c*(i-j)/j;

        }
        cout<<endl;

    }
    return 0;
}
