#include <iostream>
#include<algorithm> // this use for inbuilt sort function 
#include<string>
using namespace std;

int main() {
    
    // string str = " hello naseem  ";
    // cout<<str<<endl;
    
    // string str1(5,'n'); // we can print any character 5 time like n 
    // cout<<str1;
    
    // string str;
    // getline(cin,str);//getline function use for we can print space in cin
    // cout<<str;
    
    // string s1 = "fam";
    // string s2 = "ily";
    // s1.append(s2);  // we can add string append func or + s1+s2
    // cout<<s1;
    
    
    // string s1 = "fam";
    // string s2 = "ily";
    // cout<<s1[1];      // we can access character array 
    
    //   string s1 = "naseemchoudhary";
    //   s1.erase(5,2);// 4 means where to from remove or erase character    2 means and how many u remove character 
    //   cout<<s1;
      
      
    //   string s2 = "choudhary";
    //   cout<<s2.find("dh")<<endl;   // it will  print first index of find value like we can find dh so dh is start for 4 index
      
    //   string s3 = "nasee";
    //   s3.insert(5,"mchoudhary"); // insert fun use for where to from insert string like from 5 index we will insert choudhary 
    //   cout<<s3;
    
    
    
    
    // string s1= " naseem choudhary";
    // s1.clear();   /// clear fun use all string is clear
    // cout<<s1;
    
    // string s1 = "abc";
    // string s2 = "abc";
    // if(!s1.compare(s2))       // string compare 
    // cout<<" string are equal ";
    
    // string s1 = "naseem";
    // cout<<s1<<endl;
    
    // if(!s1.empty())    // empty fun use string is not empty here
    // cout<< "string is not  empty " <<endl;
    
    // s1.clear();         // here is string clear 
    // if(s1.empty())      // so here string is empty
    // cout<<" string is empty";
    
    
    // string str = "naseem";
    // cout<<" naseem lenght is ";
    // cout<<str.length()<<endl;  // we can find the length us of lenght fun
    
    // for(int i=0;i<str.length();i++) // we can go every  character 
    // cout<<str[i]<<endl;
    
    // string s1 = "naseemchoudhary";
    // cout<< s1.substr(0,6)<<endl; // substr means how many character u want to print or output ; from  start 0 index to till 6 we can start anywhere
    
    // string s = s1.substr(7,10); // or we can find like that 
    // cout<<s<<endl;
    
    
    // string num = "786"; // this is a numaric string we need to convert to integer
    // int x = stoi(num); // we have converd string to integer fun use stoi
    // cout<<x+4;  
    
    
    string str= "naseemchoudhary";
    sort(str.begin(),str.end()); // we have sorted string naseemchoudhary
    cout<<str;
    
    
    
   

   

    return 0;
}
