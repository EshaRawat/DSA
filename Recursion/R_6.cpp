#include <bits/stdc++.h>
using namespace std;
void pattern1(int n,int cp){
    if(cp>=n)
        return;
    cout<<"1/"<<(int)pow(2,cp)<<" + ";
    pattern1(n,cp+1);

}
int main(){
    int n,cp=0;
    cout<<"Enter n: ";
    cin>>n;
    pattern1(n,cp);
    return 0;
}

