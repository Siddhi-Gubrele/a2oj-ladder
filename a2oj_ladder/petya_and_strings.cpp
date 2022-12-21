#include<iostream>
#include<string>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    for(int i=0; i<t; i++){
        string s1;
        string s2;
        int flag=0;
        cin>>s1;
        cin>>s2;
        for(int i=0; i<s1.length(); i++){
            if(s1.at(i)<s2.at(i)){
                cout<<"-1"<<endl;
                break;
            }
            else if(s1.at(i)>s2.at(i)){
                cout<<"1"<<endl;
                break;
            }
            else if(s1.at(i)==s2.at(i)){
                flag=1;
            }
        }
        if(flag==1){
            cout<<"0"<<endl;
        }
    }
    return 0;
}