#include <iostream>
#include <string>

using namespace std;
string func(string str){
    for(int i=0;i<int(str.length());i++){
        int mark_first=i,number=0;
        if(str[i]==str[i+1]&&str[i+1]==str[i+2]){
            char mark_char=str[i];
            int j=i+2;
            while(str[j]==mark_char){
                str.erase(j,1);
                i++;
            }
        }
    }
    // cout<< str<<'\n';
    return str;
}

string func_2(string str){
        for(int i=0;i<str.length();i++){
        int mark_first=i,number=0;
        if(str[i]==str[i+1]&&str[i+2]==str[i+3]){
            str.erase(i+1,1);
            i++;
        }
    }
    // cout<< str<<'\n';
    return str;
}
int main(){
    int N=0;
    cin>>N;
    string str[N];
    for (int i=0;i<N;i++){
        cin>>str[i];
    }
    for(int i=0;i<N;i++){
        string str_temp=func(str[i]);
        str[i]=func_2(str_temp); 
    }
    for(int i=0;i<N;i++){
        cout<<str[i]<<endl;
    }
}