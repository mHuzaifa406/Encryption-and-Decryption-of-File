#include <iostream>
#include <fstream>
#include <string>

using namespace std ; 

bool Logged()

{
  string username , password , user , pass ; 

     cout <<"enter username :";
    cin>> username ; 
    cout <<"Enter password :";
    cin>>password ;

  ifstream read("file.txt");

     getline(read , user );
     getline(read , pass) ; 
              
               
            if (username == user  && password==pass)
             {
                 return true ; 
             }
             else 
             {
                 return false ; 
             }
}



int m()
{
    
      
          bool status=Logged() ; 
           
           if (!status)
           {
               cout<<"incorrect username or password , please check again ."<<endl; 
               system("PAUSE");
               return 0 ; 
           }
           else 
           {
     system("color 2");
               cout<<"\t\t\t\tSuccesfully logged in ."<<endl; 
               system("PAUSE");
               return 1 ; 
           }

     
}
