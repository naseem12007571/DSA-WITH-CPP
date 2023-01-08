#include<iostream>
#include<vector>
using namespace std;

 int main(){
    
    vector<int> v; // we can initialize vector
    
    vector<int> a(5,1); // we can initialize like a is vector name and 5 is a size and size of vactor and initialize karde 1 ke sath 5 element
                                                              // to 5 element  1 ho jayange
    cout<<"print a "<<endl;
    for(int i:a){
    cout<<i<<" "<<endl;
    }
    
    vector<int> naseem (a);
    cout<< "copy karde a ke element naseem mein ko "<<endl;
    for(int i:naseem){
        cout<<i<<" "<<endl;
    }
    
    
    cout<<" capacity "<< v.capacity()<<endl;
    
    v.push_back(1);
    cout<<" capacity "<< v.capacity() <<endl;
    
    v.push_back(2);
    cout<<" capacity "<< v.capacity() <<endl;
    
    v.push_back(3);
    cout<<" capacity "<< v.capacity() <<endl;
    
    cout<< " size " << v.size() <<endl;
    
    cout<< " element of second index "<< v.at(2)<<endl;
    
    cout<< " front element "<< v.front()<<endl;
    
     cout<< " last element "<< v.back()<<endl;
     
    


}
