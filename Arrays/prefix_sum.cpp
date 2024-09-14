#include <bits/stdc++.h>
using namespace std;

void preffix_sum(int arr[],int pf[],int n){
    pf[0]=arr[0];
    for(int i=1;i<n;i++){
        pf[i]=pf[i-1]+arr[i];
        }
}
int main() {
    int n;
    cin>>n;
    int arr[n],pf[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    preffix_sum(arr,pf,n);
    for(int i=0;i<n;i++){
        cout<<pf[i]<<" ";
    }
    cout<<endl;
}
