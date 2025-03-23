#include <iostream>
using namespace std;

int main() {
    // if, if else and switch
    int num1 = 22;
    int num2 = 22;

    int number;

    if (num1==num2){
        cout<<"num1 is equal to num2"<<endl; 
    }else if (num1<num2){
        cout<<"num1 is Less Than num2"<<endl; 
    }else{
        cout<<"num1 is Greater than to num2"<<endl; 
    }

    cout<<"Please Enter number from 1 to 5";
    cin>>number;

    switch (number)
    {
    case 1:
        cout<<"You have Entered 1"<<endl;
        break;
    case 2:
        cout<<"You have Entered 2"<<endl;
        break;
    case 3:
        cout<<"You have Entered 3"<<endl;
        break;
    case 4:
        cout<<"You have Entered 4"<<endl;
        break;
    case 5:
        cout<<"You have Entered 4"<<endl;
        break;
    default:
        break;
    }
    return 0;
}