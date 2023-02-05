#include<iostream>
using namespace std;

int Search(int arr[], int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return 0;
}
int main(){
    
    int n;
    cout<<" entre array size ";
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    int key;
    cin>>key;
    
    cout<<"your key index is  " <<Search(arr,n,key)<<endl;
}
