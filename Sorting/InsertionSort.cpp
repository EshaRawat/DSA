#include<iostream>
using namespace std;
int main(){
    int n,temp,j;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(temp<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
    arr[j+1]=temp;
    }
    cout<<"After insertion sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
