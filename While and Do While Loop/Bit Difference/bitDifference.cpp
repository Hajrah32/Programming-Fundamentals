#include<iostream>
using namespace std;
int main(){
    int a=20,b=25;
    int remA,remB,count=0;
    int c=max(a,b);

    while(c>0){
        remA=a%2;
        remB=b%2;
        a/=2;
        b/=2;
        c/=2;
        if(remA != remB){
            count++;
        }
    }
    cout<<"Total Bit Difference: "<<count;
   return 0;
}
