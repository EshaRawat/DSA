#include<iostream>
using namespace std;
void even(int i,int n){
    if(i>n)
        return;
    cout<<i<<" ";
    even(i+2,n);


}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    even(0,n);
    return 0;
}
