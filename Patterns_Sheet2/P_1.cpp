#include<iostream>
using namespace std;
int main(){
    int n,i,j,k=1;
    cout<<"Enter n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=k || j>=n-k+1)
                cout<<j;
            else
                cout<<" ";
        }
            if(i<=n/2)
                k++;
            else
                k--;
        cout<<"\n";
    }
    return 0;
}
