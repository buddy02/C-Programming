#include<iostream>
using namespace std;
int main() {
    int i,j,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++) 
        cin>>arr[i];
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[j]<arr[i]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++) 
        cout<<arr[i]<<" ";
}