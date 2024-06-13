#include<bits/stdc++.h>
using namespace std;
int length_string(char str[]){
    int i=0;
    for(;str[i]!='\0';i++);
    return(i);
}
int main(){
    char str[10];
    cout<<"Enter your name ";
    cin>>str;
    cout<<"Your name is "<<length_string(str);
    return 0;
}