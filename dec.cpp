#include <iostream>
#include <fstream>
#include <conio.h>
#include <bits/stdc++.h>
#include"dec.h"
#include<windows.h>
using namespace std;

void decrypt::decryption_file(){
		system( "Title Secret Keeper(Decryption)" );
		system("color 2");
		int key;
			string in;
	
	cout<<"Enter File Name -"<<endl;
	cin>>in;
		cout<<"Enter Key -"<<endl;
	cin>>key;
	char c;
		ifstream fin;
		ofstream fout;
		fin.open(in.c_str(), ios::binary);
		in = "qutput.txt";
		fout.open(in.c_str(), ios::binary);
		while (!fin.eof())
		{
			fin>>noskipws>>c;
			int temp = (c - key);
			fout<<(char)temp;
		}
		fin.close();
		fout.close();
}
