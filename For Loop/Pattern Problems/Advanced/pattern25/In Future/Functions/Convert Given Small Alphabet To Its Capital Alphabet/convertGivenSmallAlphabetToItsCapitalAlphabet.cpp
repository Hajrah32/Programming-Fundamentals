#include<iostream>
using namespace std;
char convertToCapital(char a);
int main(){
    char alph;
    cout<<"Enter a small letter: ";
    cin>>alph;
    cout<<"Capital letter of '"<<alph<<"' : "<<convertToCapital(alph);
    return 0;
}
char convertToCapital(char a){
    //return a-32;
    return a-'a'+'A';
}