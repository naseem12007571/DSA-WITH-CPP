#include<iostream>
#include<deque>
using namespace std;
 int main()
{
    deque<int> d;
    d.push_back(5);
    d.push_front(2);
    for(int i:d)  
    cout<<i<<endl;
    
    cout<<" print the first index "<<d.at(1)<<endl;
    cout<<" front element "<<d.front()<<endl;
    cout<<" back eleemnt "<<d.back()<<endl;
    cout<<" size of deque "<<d.size();
    
    // d.pop_back();             // pop use for delete mtlb element hatan pop_back mtlb piche ka element hatana
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    
    d.pop_front();        // front mtlb pahle ka element delete hatana to front per 2 h to 2 hat jayega
    cout<<endl;
    for(int i:d){
        cout<< i <<" ";
    }
}
