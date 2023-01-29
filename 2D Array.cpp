#include<iostream>
using namespace std;
int main(){
    
    
     // take input row wise 
    // int arr [3][4];
    // for(int row=0; row<3;row++){
    //     for(int col=0;col<4;col++){
    //         cin>>arr[row][col];
    //     }
    // }
    
    
     // take input col wise 
    //  for(int col=0; col<4;col++){
    //     for(int row=0;row<3;row++){
    //         cin>>arr[row][col];
    //     }
    // }
    
    // we can print arr row wise like that 
    //  int arr [3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    
       // and also like that 
       int arr [3][4] {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    
    
    
    
    
    // print  
    for(int i=0; i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    
}
