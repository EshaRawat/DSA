#include<iostream>
using namespace std;
int main(){
    int n,temp,j,k,count_iteration=0;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter kth value ";
    cin>>k;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(temp<=arr[j] && j>=0 && k!=count_iteration ){
            arr[j+1]=arr[j];
            j--;
            count_iteration+=1;

        }
        arr[j+1]=temp;
        }

    cout<<"After kth iteration : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

