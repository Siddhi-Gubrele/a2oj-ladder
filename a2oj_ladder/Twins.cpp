#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0, sum=0, count=0, t_sum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        t_sum=t_sum+arr[i];
    }
    sort(arr, arr+n);
    for(int i=n-1; i>=0; i--){
        sum=sum+arr[i];
        count++;
        if(sum>t_sum-sum) break;
    }
    cout<<count<<endl;
    return 0;
}