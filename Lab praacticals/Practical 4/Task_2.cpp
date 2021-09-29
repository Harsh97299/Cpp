#include<iostream>
using namespace std;

namespace first{
	void print(){
		cout<<"Hello\n";
	}
}
namespace second{
	void print(){
		cout<<"Hello World\n";
	}
}
using namespace first;
using namespace second;
int main(){
	print();
	return 0;
}
