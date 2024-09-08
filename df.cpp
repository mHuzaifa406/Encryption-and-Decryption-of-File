#include<iostream>
#include <fstream>
#include <conio.h>
#include <bits/stdc++.h>
#include<windows.h>
#include"df.h"
using namespace std;

void dfe::password_decrypt(){
	system("Title Secret Keeper(Decryption)");
system("color 2");
	  int i;
   char str[100];

   cout << "Please enter a string:\t";
   cin >> str;
   for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] - 2; 

         cout << "\nEncrypted string: " << str << endl;
}
