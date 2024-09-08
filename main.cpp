#include"c1.cpp"
#include"dec.cpp"
#include"df.cpp"
#include"string_encrypt.cpp"
#include<iostream>
#include <fstream>
#include <conio.h>
#include <bits/stdc++.h>
#include<windows.h>
#include"title.cpp"
#include<algorithm>
#include"color.cpp"
#include"login.cpp"
using namespace std;
extern int repeat;
int main(){
	ti();
	cout<<"\n";
	bool sta=m();
	if(!sta){
		cout<<"incorrect details"<<endl;
		system("cls");
		main();
	}
	else{
		system("cls");
	int r;
		repeat:
			setConsoleColor(7); 
			
			system( "Title Secret Keeper" );
 ti();
 	setConsoleColor(10); 

cout<<"\n\t\t\t\t  Press Enter to Run Software";
 setConsoleColor(7);
if(getch()==13){

    
   
  
  	system("cls");
int c;
	dfe d;
	password_encrypt pe1;
	decrypt d1;
	file f1;

	
	                    ti();
cout<<"\n\n\t\t\t\t\tPress Keys for Selection..."<<endl;
	                    setConsoleColor(FOREGROUND_BLUE  );

cout<<"\n1.Encryption (Ctrl + A)\n2.Decryption (Ctrl + B)\n3.Password Encryption(Ctrl + C)\n4.Password Decryption (Press F1)"<<endl;
cout<<"\t\t.........................................................................."<<endl;

if(getch()==1){
	system("cls");
 ti();
		f1.encryption_file();

}
else if(getch()==2){
	system("cls");
 ti();
d1.decryption_file();

}
else if(getch()==3){
	system("cls");
 ti();
	pe1.encryption_password();
}
else if(getch()==59){
	system("cls");
 ti();
	d.password_decrypt();
}
else{
	system("cls");
	setConsoleColor(7); 
	
	ti();
	setConsoleColor(13); 
	cout<<"\n\n\t\t\tInvalid key Pressed....."<<endl;
	
}
cout<<"\n"<<endl;
	setConsoleColor(11); 
system("pause");
system("cls");
	setConsoleColor(7); 
ti();
	setConsoleColor(10); 
cout<<"\nPress Esc for again start the software....."<<endl;

if(getch()==27){
 system("cls"); goto repeat;}
else {
exit(0);}
}
	




		
}	}
