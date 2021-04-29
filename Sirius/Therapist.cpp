
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<iomanip>
#include<chrono>
#include<stdio.h>
#include<cstring>
#include <vector>
#include<process.h>
#include<windows.h>
#include"Functions.h"
#include "Variable.h"
#include "Assistant.h"

using namespace std;

//------------------global variables----------------
string input;
string name;
//string answer;

int pos, l_pos, cnt = 0;
string m_word, s_word;
int s_count = 0;
assistant x; //  main  object


int main()
{
    x.clock();
    x.greeting();

    cout << "\n\n\n Hello, my name is Sirius, I go by they/them. What's your name ?\n";
    cin >> name;
    if (name.size() <= 2)
    {
        cout << " It will be easier if I can call you by something, what should I call you ? \n";
        cin >> name;
    }
    else 
    {
        cout << " Nice to meet you " << name << ", before we get started I suggest you to play some musics during this session ^^\n";
        Sleep(4000);
    }


    repeat();

    return 0;

}

void repeat()
{
    system("color b");
    system("cls");
    x.clock();

    cout << "\n\n\n Say 'bye' or thank you' to quit the session, please don't go without saying good bye\n";
    cout << " Here you can write anything you want, and I will try my best to help you : \n";
    cin.clear();
    getline(cin, input);   // get command from user

    pos = input.find(" ");
    m_word = input.substr(0, pos); //main command word
    l_pos = input.find('\0');
    s_word = input.substr(pos + 1, l_pos); //rest word

    check();
}

void check()
{
    // Super powers
    string trashtalk[5] = { "cracher", "trash", "trashtalk", "kill", "myself" };

    pos = input.find(trashtalk[0]);

    if (input.empty())
    {

    }

    else if (m_word == "Thank" || m_word == "bye" || m_word == "Bye" || m_word == "thanks" || m_word == "thank" || m_word == "see")
    {
        time_t now = time(NULL);
        tm* ltm = localtime(&now);
        x.typing(" Bye bye ^^, \n Just a reminder that the Goddess Creator of me, 'Ann the gazelle',\n your friends and you boyfriend/girlfriend congratulate you for trying, even if it's not your best");
        if (ltm->tm_hour > 22)
        {
            x.typing(" Sleep well !");
        }
        Sleep(1000);
        x.timer();
    }


    else if (pos != std::string::npos)
    {
        cracherSurX();
    }


    /*pos = input.find(talk[3 || 4]);
        if (pos != string::npos)
            listen();
    */
    else if (input == "send help pls")
    {
        x.typing(" Here are all the things I can do for you at the moment, ask the Godess Creator of me if you want me to learn new things ;) \n");
        help();
    }

    else
    {
        x.typing(" Sorry, I don't understand :'(, type 'send help pls' below or ask the Goddess Creator of me for more help\n");
    }




    Sleep(700);
    repeat();
}

void cracherSurX()
{
    string victime;
    while (true)
    {
        cout << " To stop trash talking, type 'ty' \n";
        x.typing(" Who you want to 'cracher dessus' ?\n");
        cin >> victime;

        if (victime == "ty")
        {
            x.typing(" You are welcome ! \n");
            break;
        }
        x.typing(" Oh I know this motherfucker " + victime + " is such a bitch\n");

    }

}

void listen()
{
    x.typing("You can say anything you want, I'm a good listener");
}

void help()
{
    cout << " - Just say you want to trash talk someone to trash talk them\n"
        << " - Say bye to me to finish the session \n"
        << " - I can't do more, you can ask The Goddess Creator of me to teach me new things, I will be happy to help you more";

    system("pause");
}

void quotes()
{

}