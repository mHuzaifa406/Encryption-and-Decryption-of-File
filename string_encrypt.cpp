#include"string_encrypt.h"
#include<iostream>
#include <fstream>
#include <conio.h>
#include <bits/stdc++.h>
#include<windows.h>
using namespace std;

void password_encrypt::encryption_password(){
		system( "Title Secret Keeper(Password Encryption)" );
		system("color 4");
	int i;
   char str[100];

   cout << "Please enter a string:\t";
   cin >> str;
   for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value

         cout << "\nEncrypted string: " << str << endl;
         
}
