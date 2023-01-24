#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
    
//     string str = "naseemchoudhary";
//     // cout<<'a'-'A'<<endl;  // here  small a is greater 32 bit  then A 
    
//     // convert string in upper case
//     for(int i=0;i<str.size();i++)
//   {
//     if(str[i] >= 'a' && str[i]<='z')
//         str[i]-=32;
//     }
//     cout<<str;

        // convert string to lower case
        
        // string s="NASEEMCHOUDHARY";
        // for(int i=0;i<s.size();i++){
        //     if(s[i]>= 'A' && s[i]<='Z')
        //     s[i]+=32;
        // }
        // cout<<s;
        
        // ( we work we can direct  with inbuilt function )
        string str="naseeemchoudhary";
        // i have used transform function 
        transform(str.begin(),str.end(),str.begin(),::toupper);
        cout<<str<<endl;
        cout<<" ";
        
        string s="NASEEMHOUDHARY";
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
        
        string num = "98734212211334";
        sort(num.begin(),num.end(), greater<int>());
        cout<<num;
        
        
        
        
    return 0;
}


