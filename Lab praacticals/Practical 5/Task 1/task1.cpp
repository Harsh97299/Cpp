#include <iostream>
using namespace std;

void Bool(){
	bool n = 1;
	cout<<"Value in boolean variable = "<<n<<endl;
}
void Int(){
	int n = 12038;
	cout<<"Value in integer variable = "<<n<<endl;
}
void Char(){
	char n = 'A';
	cout<<"Value in character variable = "<<n<<endl;
}
void Sh(){
	short n = 1;
	cout<<"Value in short variable = "<<n<<endl;
}
void Long(){
	long n = 32475035;
	cout<<"Value in long variable = "<<n<<endl;
}
void Double(){
	double n = 12415;
	cout<<"Value in double variable = "<<n<<endl;
}
void Float(){
	float n = 34.243;
	cout<<"Value in float variable = "<<n<<endl;
}
void Widech(){
	wchar_t n = L'a';
	cout<<"Value in wide char variable = "<<n<<endl;
}
void Lgdb(){
	long double n = 21542;
	cout<<"Value in long double variable = "<<n<<endl;
}
int main(){
	Bool();
	Int();
	Char();
	Sh();
	Long();
	Double();
	Float();
	Widech();
	Lgdb();
	return 0;
}
