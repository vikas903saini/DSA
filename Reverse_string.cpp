#include<bits/stdc++.h>
using namespace std;
void reverse(char str[]){
    int size=0;
    for(;str[size]!='\0';size++);
    int e=size-1;
    int s=0;
    while(s<e){
        swap(str[s++],str[e--]);
    }
}
int main(){
     char str[10];
    cout<<"Enter your name ";
    cin>>str;
    cout<<"Your name is ";
    reverse(str);
    cout<<str<<endl;
    return 0;
}