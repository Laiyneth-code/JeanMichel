

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <stdio.h>
#include<iomanip>
#include<cstring>
#include<ctime>
#include<chrono>
#include<Windows.h>
#include "assistant.h"
#include "Variable.h"

using namespace std;

extern auto start = chrono::system_clock::now();

void assistant::clock()
{   
    string DAYS[] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
    string numDesc[] = { "th","st","nd","rd","th","th","th","th","th","th" };
    string monthDesc[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };

    time_t now = time(NULL);
    tm* ltm = localtime(&now);
  
        if(ltm->tm_hour < 12)
           greet="Good morning";
        else if (ltm->tm_hour >=12)
           if(ltm->tm_hour >18)
            greet="Good evening";
           else
            greet="Good Afternoon";
   
    cout << "  " << monthDesc[ltm->tm_mon];
    cout << " " << ltm->tm_mday << numDesc[ltm->tm_mday % 10];
    cout << " " << ltm->tm_year + 1900;
    if (DAYS[ltm->tm_wday] == "Monday")
        cout << " (Sunday)";
    else
        cout << " (" << DAYS[ltm->tm_wday - 1] << ")";
    cout << "\t\t\t\t\t\t\t\t\t" << greet << " " << name;
    
    cout << "\n  " << "Therapy Session started at " << (ltm->tm_hour <= 12 ? ltm->tm_hour : ltm->tm_hour - 12);
    cout << ":" << setw(2) << setfill('0') << ltm->tm_min << (ltm->tm_hour < 12 ? " AM" : " PM");

}

void assistant::timer()
{
    auto end = chrono::system_clock::now();

    chrono::duration<double> elapsed_seconds = end - start;
    time_t end_time = chrono::system_clock::to_time_t(end);

    int elapsed_minutes = static_cast<int>(elapsed_seconds.count() / 60);


    cout << "\n" << "finished Therapy Session at " << ctime(&end_time)
        << "Session Duration: " << elapsed_minutes << " min and " << elapsed_seconds.count() << " s\n";
    Sleep(2500);
    exit(0);
}