#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    int first=0;
    int second=1;
    int fib=0;
   
    cout<<"Enter a Number: ";
    cin>>num;
    for(int i=0; i<num; i++){
        cout<<first<<" ";
        fib=first+second;
        first=second;
        second=fib;
    }
    return 0;
}
