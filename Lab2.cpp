#include <iostream>
#include <cstring>
using namespace std;

int main(){
		
	int v1;
	int v2;
	int p1;
	int p2;
	
	v1 = 22;
	v2 = 33;
	
	p1 = v1;
	p2 = v2;
	
	p1 = p2;
	v1 = 100;
	v2 = 200;
	/*v1 = 44;
	v2 = 55;
	
	p1 = &v1;*/
	cout << "p1 is: "<< p1 << endl;
	cout << "p2 is: " << p2 << endl;
	
	
	cout << "v1 is: " << v1 << endl;
	cout << "v2 is: " << v2 << endl;
	
	return 0;
}