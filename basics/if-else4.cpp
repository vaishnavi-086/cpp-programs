//check greater number
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout <<"enter two numbers(a & b)";
    cout<<" ";
    cin>>a>>b;
    
    cout<<"a = "<<a <<"\n";
    cout<<"b = "<<b <<"\n";
    if(a>b){
        cout<<"a is greater than b";
    }else if(a==b){
        cout<<"a is equal to b";
    }else{
        cout<<"b is greater than a";
    }

  return 0;  
}