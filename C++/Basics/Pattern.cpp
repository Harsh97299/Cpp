#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int num = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for (int k = 0; k < ((num-1)*2)-1; k++)
        {
            cout<<" ";
        }
        num = num-1;
        if (i==n-1)
        {
            break;
        }
        
        cout<<"*\n";
    }
    
    return 0;
}

// in = 4
// *-----*
// -*---*-
// --*-*--
// ---*---