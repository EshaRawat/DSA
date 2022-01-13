#include <bits/stdc++.h>
using namespace std;
void pattern(int n,int cp){
    if(cp>n)
        return;
    cout<<cp*cp<<" + ";
    pattern(n,cp+1);

}
int main(){
    int n,cp=1;
    cout<<"Enter n: ";
    cin>>n;
    pattern(n,cp);
    return 0;
}

