#include<iostream>
#include<cstdlib>
#include<fstream>
#include<iomanip>
#include<cstring>
#include <ctype.h>
#include<windows.h>
#include<ctime>
#include "assistant.h"

using namespace std;

void assistant::typing(string t)
{
	for (int i = 0; t[i] != '\0'; i++)
	{
		cout << t[i];
		Sleep(15);
	}
}