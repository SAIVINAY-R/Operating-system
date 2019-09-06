//CPP program to stimulate producer-consumer problem using semaphoers
#include <iostream>
using namespace std;
int main() {
int buffer[10],buffersize=10,in=0,out=0,choice=1;
while((0<choice) && (choice < 3)) {
cout << "\n----------main menu----------\n";
cout << "\n\t1.produce\t2.consume\t3.exit\n";
cout << "\nEnter yout choice : ";
cin >> choice;
switch(choice) {
case 1 : if((in+1)%buffersize==out)
		cout << "\nBuffer is full\n";
	else {
		cout << "\nEnter the value : ";
		cin >> buffer[in];
		in = (in + 1) % buffersize;
	}
	break;					
case 2 : if(in == out)
		cout << "\nbuffer is empty\n";
	else {
		cout << buffer[out] << " is consumer\n";
		out = (out + 1) % buffersize;
	}
	break;
}
}
}
