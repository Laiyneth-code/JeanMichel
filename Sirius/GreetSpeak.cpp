#include<iostream>
#include<cstdlib>
#include<fstream>
#include<iomanip>
#include<cstring>
#include <ctype.h>
#include<windows.h>
#include "assistant.h"
#include "Variable.h"
using namespace std;

string greet;

void assistant::greeting()
{
	system("color a");

	cout << "\n\n\n\n\n\n\n\t\t\t\t\t";
	cout << "Welcome to the therapy session";

	Sleep(2000);
	//speak(greet);
	system("color 08");
	Sleep(400);
}

/*void assistant::speak(string s)
{
	ofstream file;
	file.open("data//speak.vbs", ios::out);
	file << "dim s";
	file << "\n" << "set s = createObject(\"sapi.spvoice\")";
	file << "\n" << "s.speak \"" << s << "\"";
	file.close();
	system("start data//speak.vbs");
	Sleep(300);
}
*/
