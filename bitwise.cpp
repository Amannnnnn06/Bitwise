//Aman Prajapati 23070123017
//ENTC A1
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
     cout<<"enter the value of b:"<<endl;
    cin>>b;
    int bit_and,bit_or,bit_xor,bit_not,ls,rs;
    bit_and=a & b;
    cout<<"AND result:"<<bit_and<<endl;
    bit_or=a||b;
    cout<<"OR result:"<<bit_or<<endl;
    bit_xor=a ^ b;
    cout<<"XOR result:"<<bit_xor<<endl;
    bit_not=~b;
    cout<<"NOT b:"<<bit_not<<endl;
    ls = a << 1;
    cout<<"Left shift:"<<ls<<endl;
     rs = a >> 1;
    cout<<"Right shift:"<<rs<<endl;
    return 0;
}

//enter the value of a:
//1
//enter the value of b:
//2
//AND result:0
//OR result:1
//XOR result:3
//NOT b:-3
//Left shift:2
//Right shift:0