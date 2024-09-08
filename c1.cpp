#include "c1.h"

#include<iostream>
#include <fstream>
#include <conio.h>
#include <bits/stdc++.h>

#include<windows.h>

using namespace std;

void file::encryption_file(){
	system( "Title Secret Keeper(Encryption)" );
	system("color 4");
		int key;
			string in;
	
	cout<<"\nEnter File Name -"<<endl;
	cin>>in;
		cout<<"Enter Key -"<<endl;
	cin>>key;
	char c;
		ifstream fin;
		ofstream fout;
		fin.open(in.c_str(), ios::binary);
		in = "output";
		fout.open(in.c_str(), ios::binary);
		while (!fin.eof())
		{
			fin>>noskipws>>c;
			int temp = (c + key);
			fout<<(char)temp;
		}
		fin.close();
		fout.close();
			
}
