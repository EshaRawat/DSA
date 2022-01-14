#include<iostream>
using namespace std;
int main(){
    int n,temp,j,minimum,idx,k,count_iteration=0;
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
        minimum=arr[i];
        idx=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<minimum){
                minimum=arr[j];
                idx=j;
            }
        }
        if(idx!=i){
            temp=arr[idx];
            arr[idx]=arr[i];
            arr[i]=temp;
            count_iteration+=1;
        }
        if(k==count_iteration){
                break;
        }
    }
   cout<<"After kth iteration : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}


