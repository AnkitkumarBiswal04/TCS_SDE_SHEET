#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(int n){
    int temp=n;
    int reverse=0;
    while(temp!=0){
        reverse=(reverse*10)+(temp%10);
        temp=temp/10;
    }
    return (reverse==temp);
}
int main(){
    int n;
    cin>>n;
    if(checkpalindrome(n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
