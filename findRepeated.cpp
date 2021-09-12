#include <iostream>
#include <string>


std::string find_repeated(const std::string &mystr){
    std::string returnValue="";
    if (mystr.length()<8){
        //cout<<"mystr.length()="<<mystr.length()<<endl;
        return returnValue;
    }

    for (long unsigned int i=0;i<mystr.length()-4;i++){
        std::string str = mystr.substr(i, 4);
        //cout<<"str="<< str << endl;
        for (long unsigned int j=i+4;j<mystr.length();j++){
            std::string str1 = mystr.substr(j,4);
            //cout<<"str1="<<str1<<endl;
            if (str1.==str){
                return str;
            }
        }
    }
    return returnValue;
}

int main(){
    std::cout<<"find_repeated(7777777)="<<find_repeated("7777777")<<std::endl;
    std::cout<<"find_repeated(99999999)="<<find_repeated("99999999")<<std::endl;
}