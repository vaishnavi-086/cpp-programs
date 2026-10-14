//eligiblity to vote
#include <iostream>


int main(){
    int age;
    std::cout<<"enter your age:"<<std::endl;
    std::cin>>age;

    if(age>=18){
        std::cout<<"you are eligible to vote";
    }else{
        std::cout<< "you are not eligible to vote";
    }
    return 0;  
}