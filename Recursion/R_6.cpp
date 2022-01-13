#include<iostream>
using namespace std;
void pattern1(int n, int cp, int d){
    if(cp>n)
        return;
    cout<<"1/"<<d*d<<" + ";
    pattern1(n-1,cp+1,d+1);

}
int main(){
    int n,cp=0,d=1;
    cout<<"Enter n: ";
    cin>>n;
    pattern1(n,cp,d);
    return 0;
}
