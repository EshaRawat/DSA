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
    for(int i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                count_iteration+=1;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            if(k==count_iteration){
                break;
                }

            }
        }
    cout<<"After kth Iteration: ";
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
return 0;
}

