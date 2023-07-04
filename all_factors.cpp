#include<bits/stdc++.h>
using namespace std;

void all_factors(int n){
    for (int i=1; i<=sqrt(n); i++){
        if (n%i==0){
            cout<<i<<" ";
        } 
    }
    for (int i=sqrt(n); i>=1; i--){
        if (n%i==0 && i!=n/i){
            cout<<n/i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    all_factors(n);
}