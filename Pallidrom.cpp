#include<bits/stdc++.h>
using namespace std;
bool check_pallidrome(char str[]){
    int s=0;
    int e=strlen(str)-1;
    while(s<e){
        if(str[s++]!=str[e--])  
            return false;
    }    
    return true;
}
int main(){
     char str[10];
    cout<<"Enter your name ";
    cin>>str;
    cout<<"String is Pallidrome or not :  "<<check_pallidrome(str);
    return 0;
}