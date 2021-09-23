#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World!\n";
    cout<<"Hello World!"<<endl;
    int num = 5;
    int num1 = 3;
    cout<<num<<endl;
    bool boolnum = false;
    cout<<boolnum<<endl;
    cout<<boolnum<<" Shows the output of the false bool variable\n";
    cout<<num+num1<<" is the output of num + num1"<<endl;
    const float pi = 3.14;
    cout<<pi<<" const keyword is used to declare constant variables whose value cant be changed."<<endl;
    int num2;
    cout<<"Enter a number :"<<endl;
    cin>>num2;
    cout<<"Your number was :"<<num2<<endl;

    string text = "Hello World!!";
    cout << text << endl;
    string input;
    cin>>input;
    cout<<input<<endl;

    return 0;
}