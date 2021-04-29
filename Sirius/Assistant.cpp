#include<iostream>
#include<windows.h>
#include"Assistant.h"

using namespace std;

assistant::assistant()
{

	system("md data");
	system("attrib +s +h data");
	system("cls");
	system("title   Sirius");
	
}

assistant::~assistant()
{
	system("attrib +s +h data");
}

