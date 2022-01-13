#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==0)
        return 0;
	else if(n==1)
        return 1;
	else
        return (fibonacci(n-1)+fibonacci(n-2));

}
int main(){
    int n,sum=0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++) {
		sum+=fibonacci(i);
	}
cout<<sum;
    return 0;
}


