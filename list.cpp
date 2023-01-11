#include <iostream>
#include<list>
using namespace std;

int main()
{
        list<int> a;
        a.push_back(1);
        a.push_front(2);
        for(int i:a){
        cout<<i<<endl;
     }
     
       a.erase(a.begin());   // begin mtlb first mein 2 tha  to 2 delete ho gaya 
       cout<<" after delete or erase  ";
       for(int i:a){
       cout<<i<<endl;
     }
     
       cout<<" size of list "<<a.size(); // size 1 ayega kiyo ki ek erase kia h
      
       cout<<endl;
     
       list<int> b (a);
       cout<< " a ko copy karde b mein ";   // a mein 1 h toh b mein 1 chiala jaygea
       for(int i:b){
       cout<<i<<endl;
     }
     
     list<int> c(5,3);   // 5 size ke element print karde 3 tpye ke
     cout<<" print karde 5 element ";
     for(int i:c){
         cout<<i;
     }
}
