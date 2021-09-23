#include <iostream>
using namespace std;

int main(){
    int x, y;
    char decision;
    cout << "Enter the first integer number : ";
    cin >> x;
    cout << "Enter the second integer number : ";
    cin >> y;
    cout << "Enter a for addition.\n";
    cout << "Enter s for subtraction.\n";
    cout << "Enter m for multiplication.\n";
    cout << "Enter d for division.\n";
    cin >> decision;
    if (decision == 'a')
    {
        cout<<"Addition of "<<x<<" and "<<y<<" = "<<x+y;
    }
    else if (decision == 'm')
    {
        cout<<"Multiplication of "<<x<<" and "<<y<<" = "<<x*y;
    }
    else if (decision == 's')
    {
        cout<<"Subtraction of "<<x<<" and "<<y<<" = "<<x-y;
    }
    else if (decision == 'd')
    {
        cout<<"Division of "<<x<<" and "<<y<<" = "<<x/y;
    }
    return 0;
}