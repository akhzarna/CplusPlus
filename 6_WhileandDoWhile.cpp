#include <iostream>
using namespace std;

int main() {

    // Loops
    // While, Do While and For Loop

    // Repitive Tasks 
    // **************
    // **************

        // 1 Student kay 5 Subjects kay Marks Enter karay ga 
        // Us kay Baad aap poochain gai keh Mazeed Marks Enter karnay hain ya nahin ?
        // int flag = 1;
        // while(flag<=10){
        //     cout<<"We are leanring Loops \n";
        //     flag++;
            // flag+=1;
            // flag=flag+1;
        // }

        int sum = 0;
        int marks = 0;
        while(marks!=-1){
            sum = sum+marks;
            cout<<"Enter Marks, -1 to Exit";
            cin>>marks;
        }

        cout<<"Sum is =="<<sum<<endl;

        // counting=counting+1;
        // counting+=1;



    // int counter=0;

    // do{ // Atleast one time zaroor chalta hai
    //     cout<<"*****"<<endl;
    //     cout<<counter<<endl;
    //     counter+=1;
    // }while (counter<10);


    // int marks;
    // int count=0;
    // while(marks!=-1){
    //     cout<<"Enter Marks, Enter -1 to Exit";
    //     cin>>marks;
    //     count=count+marks;
    // }

    // cout<<"Total Marks are = "<<count;


    // int marks = 0;
    // int sum = 0;
    // while(marks!=-1){
    //     sum = sum + marks; 
    //     cout<<"Enter Marks and -1 to Exit"<<endl;
    //     cin>>marks;
    // } 
    // cout<<"Total Marks is == \n"<<sum;

    return 0;
}