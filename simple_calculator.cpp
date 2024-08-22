#include<iostream>
using namespace std;
int main(){
    //Input 2 numbers
    int no_1,no_2;
    cout<<"Enter the two numbers"<<endl;
    cin>>no_1>>no_2;
    int op;
    cout<<"Enter 1 for addition 2 for subtraction 3 for multiplication 4 for division 5 for modulo division"<<endl;
    cin>>op;
    //Check validity can also be done in default
    if(op<1||op>5){
        cout<<"Invalid operation"<<endl;
        return 0;
    }
    //Using switch to determine result
    switch (op)
    {
    case 1:cout<<"The result is "<<no_1+no_2<<endl;
        break;
    case 2:cout<<"The result is "<<no_1-no_2<<endl;
        break;
    case 3:cout<<"The result is "<<no_1*no_2<<endl;
        break;
    case 4:no_2==0?cout<<"The result is infinity"<<endl:cout<<"The result is "<<no_1/no_2<<endl;
        break;
    case 5:no_2==0?cout<<"The operation cannot be performed"<<endl:cout<<"The result is "<<no_1/no_2<<endl;
        break;
    }
}