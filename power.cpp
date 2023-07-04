// time complexity O(log(n))

// recursive
#include<bits/stdc++.h>
using namespace std;

// int power(int x, int n){
//     if (n==0){
//         return 1;
//     }
//     int temp = power(x,n/2);
//     temp = temp*temp;
//     if (n%2==0){
//         return temp;
//     }
//     else {
//         return temp*x;
//     }
// }

// iterative

int power(int x, int n){
    int multiplier = x;
    int ans = 1;
    while (n){
        if (n%2==1){
            ans = ans*multiplier;
        }
        multiplier = multiplier*multiplier;
        n = n/2;
    }
    return ans;
}

int main(){
    int x,n;
    cin>>x>>n;
    cout<<power(x,n);
}