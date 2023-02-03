#include<iostream>
using namespace std;

   bool search(int arr[], int size, int findElement){
       for(int i=0;i<size;i++){
           if(arr[i]==findElement){
               return 1;
           }
       }
       return 0;
       
   }

    int main(){
        
    int arr [10]= {5,7,-2,10,22,24,-2,0,3,22};
    // wheather 1 is present is or not ?
    
    cout<<" Enter the element to search "<<endl;
    
    int findElement;     // variable what you want find 
    cin>>findElement;    // taken input what you want search
     // in store variable bool found 
    bool found = search(arr,10,findElement);  // function call 
    if(found){
        cout<<" Element is present " <<endl;
    } else{
        cout<<"Element is  not present  "<<endl;
    }
}
