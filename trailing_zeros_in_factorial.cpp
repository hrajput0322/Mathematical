#include<bits/stdc++.h>
using namespace std;

int trailing_zeros_in_factorial(int n){
    int m = 5;
    int x = n/m;
    int number_of_zeros = 0;
    while (x){
        number_of_zeros += x;
        m = m*5;
        x = n/m;
    }
    return (number_of_zeros);
}

int main(){
    int n;
    cin>>n;
    cout<<trailing_zeros_in_factorial(n);
}