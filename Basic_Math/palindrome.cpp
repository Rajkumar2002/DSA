#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n){
    int dup=n;
    int rev=0;
    while(n>0){
        int digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    if(dup==rev)return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    cout<<palindrome(n);
};
//TC: O(log10(N)+1)
//SC: O(1)

/*Appraoch:
  
*/