#include <iostream>
using namespace std;

double First;
double Second;
char Operator;
char option;


void CaptureData(){
    cout << "===== Simple Calculator ===="<<endl;
    cout << "Enter First Number: ";
    cin >> First;
    cout << "Enter Operator(+,-,*,/): ";
    cin >> Operator;
    cout << "Enter Second Number: ";
    cin >> Second;
}
void DisplayData(){
    switch (Operator){
    case '+':
        cout << First << "+" << Second << "=" << First + Second<<endl;
        break;
    case '-':
        cout << First << "-" << Second << "=" << First - Second<<endl;
        break;
    case '*':
        cout << First << "*" << Second << "=" << First * Second<<endl;
        break;
    case '/':
        if(Second == 0){
            cout << "Error, Cannot Divide A Number From 0"<<endl;
            cout << "Please Try Again"<<endl;
            CaptureData();
            DisplayData();
        }else{
        cout << First << "/" << Second << "=" << First / Second<<endl;
        }
        break;
    default:
        cout << "Invalid Option"<<endl;
        break;
    }
    cout << "Would Like To Continue? (y/n): ";
    cin >> option;
    if (option == 'y'){
        CaptureData();
        DisplayData();
    }
    else if (option == 'n'){
        cout << "Thanks For Using This Calculator"<<endl;
        exit(1);
    }
}



int main(){

    CaptureData();
    DisplayData();

    return 0;
}