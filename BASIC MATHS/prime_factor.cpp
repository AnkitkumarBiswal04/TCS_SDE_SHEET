#include<bits/stdc++.h>
using namespace std;
vector<int>primefactors(int n){
    vector<int>res;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            res.emplace_back(i);
        }
        while(n%i==0){
            n=n/i;
        }
    }
    if(n!=1){
        res.emplace_back(n);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "Prime factors of " << arr[i] << " are: ";
        vector<int> factors = primefactors(arr[i]);
        for (int factor : factors) {
            cout << factor << " ";
        }
        cout << endl;
    }
    
    return 0;
}
