#include<iostream>
using namespace std;
bool PrimeNumber(int n);
int Factorial(int n);
int main(){
    int start,end;
    cout<<"Enter Start Number: ";
    cin>>start;
    cout<<"Enter End Number: ";
    cin>>end;
    int i=start;
    while(i<=end){
        if(PrimeNumber(i)){
            cout<<"Prime Number: "<<i<<" and Factorial: "<<Factorial(i)<<endl;
        }
        i++;
    }
    return 0;
}
bool PrimeNumber(int n){
    if(n<2)
        return 0;
    for(int i=2; i<n; i++)
        if(n%i==0)
            return 0;
    return 1;
}
int Factorial(int n){
    int fact=1;
    for(int i=1;i<=n; i++){
        fact*=i;
    }
    return fact;
}