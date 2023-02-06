#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // first we have a take array input
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
            int temp = arr[j];  // for swap we have a make variable and store value of j
            arr[j]=arr[i];
            arr[i]=temp;
        }
        }
    }
    
    for(int i=0;i<n;i++){  // array print 
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
