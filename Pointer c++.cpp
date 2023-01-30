#include<iostream>
using namespace std;
int main(){
    
    int nums=5;
    cout<<nums<<endl;
    
    // address of operator & 
    cout<<" address of nums is "<<&nums<<endl;
    
    int *ptr =&nums;
    cout<<"  value of ptr is "<<*ptr<<endl;
    cout<< " addess of ptr is "<<ptr<<endl;
    
    cout<<endl;
    
    double digit = 4.5;
    double *p2 = &digit;
    cout<<"  value of ptr is "<<*p2<<endl;
    cout<<"  addess of ptr is "<<p2<<endl;
    
    cout<<endl;
    
    cout<<" size of integer is "<<sizeof(nums)<<endl;
    cout<<" size of pointer is "<<sizeof(ptr);
    
}
