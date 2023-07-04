#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int m = n;
    int res = 0;
    while(n){
        int d = n%10;
        res = (res*10)+d;
        n = n/10;
    }
    return (m==res);
}

int main(){
    int n;
    cin>>n;
    cout<<palindrome(n);
}