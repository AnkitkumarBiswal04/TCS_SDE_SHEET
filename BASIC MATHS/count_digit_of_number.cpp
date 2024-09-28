#include<bits/stdc++.h>
using namespace std;
int countingNumbers(int n){
    int num=n;
    int count=0;
    while(num>0){
        int lastdigit=num%10;
        if(lastdigit>0 && num%lastdigit==0){
            count++;
        }
        num=num/10;
    }
    return count;
    // string num=to_string(n);
    // return num.length();
}
int main(){
    int n;
    cin>>n;
    cout<<"The number of digit is:"<<countingNumbers(n);
    
}
