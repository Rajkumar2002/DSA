#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int dup=n;
    int rev=0;
    while(n>0){
        if(rev>INT_MAX/10 || rev<INT_MIN/10){
            return 0;
        } 
        else{
            int digit=n%10;
            rev=(rev*10)+digit;
            n=n/10;
        }
    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
};

//TC: W- O(log10(N)+1),
//SC: O(1) 