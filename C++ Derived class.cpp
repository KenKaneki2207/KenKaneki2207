//derived class
#include <iostream>
using namespace std;

//creating class A
class A{
	public: int a,b;
		void input(){
			cout << "Enter 2 number: ";
			cin >> a >> b;
		}
};

//creating derived class B with base class A
class B:public A
{
	public:
		void add(){
			
			cout << "Addition=" << a+b;
		}
};

int main(){
	//creating object
	B obj;
	obj.input();
	obj.add();
}
