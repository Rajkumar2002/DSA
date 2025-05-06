// find number of digits in a number
//brute:
#include <bits/stdc++.h> 
using namespace std
int countDigit(long long x) {
    
    int cnt=0;
    while (x != 0) {
        cnt++;
        x=x/10;

    }
    return cnt;
}
int main(){
    long long x=125312;
    cout<<countDigit(x);
   
}
//TC:  W-O(log10(N)+1), b-O(1)
//SC: O(1)

//Optimal:
int countDigit(long long x) {
    int cnt=int(log(x)+1);
    return cnt;
}
int main(){
    long long x=125312;
     cout<<countDigit(x);
   
}
//Notes:
log10(N)=x
10^X=N
Therefore, by taking only integer part and adding 1 to it can give number of digits in number.
