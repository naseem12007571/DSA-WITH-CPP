
#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end= size-1;
    int mid = (start+end)/2;
    while(start <=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start= mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return-1;
}
int main() {
    int even[6]={3,5,6,8,9,10};
    int odd[5]= {1,2,5,7,8};
    
    int evenIndex = binarySearch(even, 6,9);
    cout<<" evenIndex of 9 is "<<evenIndex<<endl;
    
    int oddIndex = binarySearch(odd,5,7);
    cout<<"oddIndex of 7 is "<<oddIndex<<endl;

    return 0;
}