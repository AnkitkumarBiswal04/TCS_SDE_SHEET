#include<bits/stdc++.h>
using namespace std;
bool checkarmstrong(int n){
    int originalnumber=n;
    int digit=0;
    int sum=0;
    int temp=n;
    while(temp>0){
        digit++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0){
        int lastdigit=temp%10;
        sum=sum+pow(lastdigit,digit);
        temp=temp/10;
    }
    return sum==originalnumber;
}
int main(){
    int n;
    cin>>n;
    if(checkarmstrong(n)){
        cout<<"It is armstrong";
    }
    else{
        cout<<"It is not armstrong";
    }
    return 0;
}
