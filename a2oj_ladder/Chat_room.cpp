// #include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    int flag=0;
    string s;
    cin>>s;
    flag = 0;
    for(int i=0; i<s.length(); i++){
        if(flag==0&&s.at(i)=='h'){
            flag=1;
            // cout<<i<<endl;
            // cout<<flag<<endl;
        }
        else if(flag==1&&s.at(i)=='e'){
            flag=2;
            // cout<<i<<endl;
            // cout<<flag<<endl;
        }
        else if(flag==2&&s.at(i)=='l'){
            flag=3;
            // cout<<i<<endl;
            // cout<<flag<<endl;
        }
        else if(flag==3&&s.at(i)=='l'){
            flag=4;
            // cout<<i<<endl;
            // cout<<flag<<endl;
        }
        else if(flag==4&&s.at(i)=='o'){
            flag=5;
            // cout<<i<<endl;
            // cout<<flag<<endl;
        }
    }
    if(flag==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
      
    return 0;
}