#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,fact=1;
    cout<<"Enter a Number:";
    cin>>num;
    for(int i=1; i<=num; i++){
        fact*=i;
    }
    cout<<"Factorial: "<<fact;
    return 0;
}
