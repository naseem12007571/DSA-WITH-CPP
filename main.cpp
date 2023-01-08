#include<iostream>
#include<array>
using namespace std;
main(){
    int arr [5]={4,2,1,6,4};
    array<int,6> a = {10,20,30,40,50,60};
    int size= a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<< " Element at second index"<<a.at(2)<<endl;
    cout<< " Empty or not "<< a.empty()<<endl;
    cout<<"First element  is " <<a.front()<<endl;
    cout<<"Last element is " <<a.back()<<endl;
    cout<< " size of arrya is "<< a.size();
}

