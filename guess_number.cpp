#include<iostream>
using namespace std;
int main(){
    //Generate a random number
    int random_no=rand()%100;
    while(true){
        cout<<"Enter a number between 0 to 100"<<endl;
        int x;
        cin>>x;
        //Check for invalid cases
        if(x<0||x>100){
            cout<<"Invalid number"<<endl;
            continue;
        }
        //Main logic
        if(x==random_no){
            cout<<"Bingo You Guessed the number right"<<endl;
            break;
        }else if(x<random_no){
            cout<<"The number is greater"<<endl;
        }else{
            cout<<"The number is lesser"<<endl;
        }
    }
}