
    // cout<<str_2.compare(1,1,str_1,1,2)<<endl;
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void fun(char a);
int main(){
    string str("0123456789012345678901");
    // for_each(str.begin(),str.end(),fun);  //遍历
    sort(str.begin(),str.end(),greater<char>());
    cout<<endl;
    cout<<str<<endl;
}
void fun(char a){  //元素本身的类型
    cout<<a<<"*";
}

void function_test(string str){
    string::iterator ite; //char char*
    const char* a;
    // const string str_1="yes";
    // string str_2=str_1;
    // char* a=;
    char* b=const_cast<char*>(a);
}