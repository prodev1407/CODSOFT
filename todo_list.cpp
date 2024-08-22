#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Create a tasks class for modelling the type of tasks
class Tasks{
    public:
        int id;
        string task;
        bool isCompleted;
};
int main(){
    //Create a task vector
    vector<Tasks*>task_vector;
    //Id counter 
    int id_counter=1;
    //Writing a menu driven program
    int op=0;
    while(true){
    cout<<"Enter 1 to add task 2 to view tasks 3 to mark task as completed and 4 to delete the task 5 to exit"<<endl;
    cin>>op;
    if(op<1||op>5){
        cout<<"Terminating program due to invalid input"<<endl;
        break;
    }
    else if(op==1){
        string task_description;
        cout<<"Enter the task description"<<endl;
        cin>>task_description;
        Tasks* t=new Tasks();
        t->id=id_counter++;
        t->isCompleted=false;
        t->task=task_description;
        task_vector.push_back(t);
        cout<<"Task added sucessfully"<<endl;
    }else if(op==2){
        if(task_vector.empty()){
        cout<<"No tasks present"<<endl;
        }else{
        cout<<"The tasks are as follows"<<endl;
        for(auto it:task_vector){
            string comp;
            if(it->isCompleted){
                comp="Completed";
            }else{
                comp="Not Completed";
            }
            cout<<"Task ID: "<<it->id<<" "<<"Task Description: "<<it->task<<" "<<"Status: "<<comp<<endl;
        }
        }
    }else if(op==3){
        int enter_id;
        cout<<"Enter the id of the task for which you want to mark it as completed"<<endl;
        cin>>enter_id;
        bool found=false;
        for(auto it:task_vector){
            if(it->id==enter_id){
                found=true;
                it->isCompleted=true;
                break;
            }
        }
        if(!found){
            cout<<"The entered id is invalid"<<endl;
        }else{
            cout<<"Marked entered id's task completed"<<endl;
        }
    }else if(op==4){
        int enter_id;
        cout<<"Enter the id of the task for which you want to mark it as deleted"<<endl;
        cin>>enter_id;
        bool found=false;
        int index=0;
        for(auto it:task_vector){
            if(it->id==enter_id){
                found=true;
                break;
            }
            index++;
        }
        if(!found){
            cout<<"The entered id is invalid"<<endl;
        }else{
            task_vector.erase(task_vector.begin()+index);
            cout<<"The task is deleted sucessfully"<<endl;
        }
    }else{
        cout<<"Program terminiation sucessful"<<endl;
        break;
    }
    }
}