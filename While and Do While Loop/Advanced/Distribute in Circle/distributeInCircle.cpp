#include<iostream>
using namespace std;
int main(){
    /*A items are to be delivered in a circle of size B.
Find the position where the Ath item will be delivered if we start from a given position C.
NOTE: Items are distributed at adjacent positions starting from C.*/
     
    int a,b,c;
    cin>>a>>b>>c;
 /*
a = 2, b = 5, c = 1;
a = 16673, b = 7444, c = 30872;
 */
    cout<<" Position of B where last A has been distributed: "<<(a+c-1)%b;
   return 0;
}
