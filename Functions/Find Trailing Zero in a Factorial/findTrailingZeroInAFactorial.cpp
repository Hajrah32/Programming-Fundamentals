#include<iostream>
#include<math.h>
using namespace std;
int countZeros(int n);
int main(){
    int num;
    cout<<"Enter a number to count trailing zeros: ";
    cin>>num;
    cout<<"Trailing Zeros in Factorial of "<<num<<" : "<<countZeros(num);
    return 0;
}
int countZeros(int n){
    int c=0;
    while(n>4){
        n=n/5;
        c=c+n;
    }
    return c;
}