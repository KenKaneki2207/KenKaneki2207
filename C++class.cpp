#include <iostream>
using namespace std;

class Arth{
	float a,b;
	int x;
	public:
		void getdata(){
		cout << "Enter the number ";
		cin >> a >> b;
		cout << "1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\nEnter ur choice ";
		cin >> x;
	}
	void putdata();
};

void Arth::putdata(){
	int i;
	float c;
	switch (x){
		case 1:
			cout << a+b <<endl;
			break;
		case 2:
			cout << a-b <<endl;
			break;
		case 3:
			cout << a*b << endl;
			break;
		case 4:
			c=a/b;
			cout << c << endl;
			break;
		default: //other than 1,2,3,4
			cout << "Wrong Selction ";
			break;
	}
	}

int main(){
	int i=2;
	while (i==2){
		Arth obj1;
		obj1.getdata();
		obj1.putdata();
	}
	
}
