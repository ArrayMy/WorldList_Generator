//
// Created by zdene on 25.03.2018.
//
#include "header.h"
#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;


void world_list::exiting_program(){
    cout<<"Exiting Program"<<endl;
    cout<<"Developed by ARRAY MY"<<endl;
    system("pause");
};

void world_list::choose_free() {
    cout << "quit   OR   exit  FOR  end";
    int my,_numStrings =  0;
    string ArrayString[my];
    while(ArrayString[my] != "quit" || ArrayString[my] != "exit"){
        cout << "Word:"<<endl;
        cin >> ArrayString[my];
        my++;
    }
    _numStrings = my;
    my = 0;
    while(my <= _numStrings){
        world_list::combination_one(ArrayString[my],ArrayString[my+1]);
        world_list::combination_two_stringConvert(ArrayString[my]);
        world_list::combination_three(ArrayString[my]);
        my++;
    }
}

void world_list::combination_three(string help){
    ofstream file("World_List_Array_My.txt");
    int Years=1950;
    int Months=0;
    int Days=0;
  while(Years<=2018){
      Years ++;
      while(Months<=12){
          Months++;
         while(Days<=7) {
             file << help << Years << Months << Days;
             file << help << Years << Days << Months;
             file << help << Days << Years << Months;
             file << help << Days << Months << Years;
             file << help << Months << Years << Days;
             file << help << Months << Days << Years;

             file << Years << Months << Days << help;
             file << Years << Months << help << Days;
             file << Years << Days << Months << help;
             file << Years << Days << help << Months;
             file << Years << help << Months << Days;
             file << Years << help << Days << Months;

             file << Months << Years << Days << help;
             file << Months << Years << help << Days;
             file << Months << Days << help << Years;
             file << Months << Days << Years << help;
             file << Months << help << Years << Days;
             file << Months << help << Days << Years;

             file << Days << help << Months << Years;
             file << Days << help << Years << Months;
             file << Days << Months << Years << Days;
             file << Days << Months << Days << Years;
             file << Days << Years << Days << Months;
             file << Days << Years << Months << Days;
             Days++;
         }
      }
  }

}



void world_list::choose_form(string Name,string Surname,string Date,string Pet,string Daughter,string Daughter_Birthday,string Son,string Birthday_Son){
    cout << "Set Name"<<endl;
    cin >> Name;
    cout << "Set Surname"<<endl;
    cin >> Surname;
    cout << "Set Birthdate"<<endl;
    cin >> Date;
    cout << "Set Pet Name"<<endl;
    cin >> Pet;
    cout << "Set Daughter Name"<<endl;
    cin >> Daughter;
    cout << "Set Daughters Birthday"<<endl;
    cin >> Daughter_Birthday;
    cout << "Son Name"<<endl;
    cin >> Son;
    cout << "Birthday Son"<<endl;
    cin >> Birthday_Son;
    cout << "I'm creating file with WorldList, wait idiot!";
    world_list::write_in_file(Name,Surname,Date,Pet,Daughter,Daughter_Birthday,Son,Birthday_Son);
};

void world_list::convert_to_Ascii(char help){
/*A-Z 65-90
a-z   97-122*/
int My=0;
int oneChar = (int) help;
char Array[My];
Array[My]=(char) oneChar - 32;
My++;

}

void world_list::combination_two_stringConvert(string help){
ofstream file("World_List_Array_My.txt");
int x = 0;
int y = 0;

while(x==0){
    if(help[y]){
    world_list::convert_to_Ascii(help[y]);
    file<<Array[My];
    world_list::combination_two_stringConvert(Array[my],Array[my+1]);
    world_list::combination_three(Array[my]);
        y++;
    }else{
    file<<endl;
    x++;
    }
 }

}

void world_list::charset_dec(){
    system(charset);
    system("cls");
}

void world_list::combination_one(string help,string help1){
    ofstream file("World_List_Array_My.txt");
    file<<help<<endl;
    file<<help1<<endl;
    file<<help<<help1<<endl;
    file<<help1<<help<<endl;
    file<<help<<" "<<help1<<endl;
    file<<help1<<" "<<help<<endl;
    file<<help<<"_"<<help1<<endl;
    file<<help1<<"_"<<help<<endl;
    file<<help<<"."<<help1<<endl;
    file<<help1<<"."<<help<<endl;
}

void world_list::write_in_file(string Name,string Surname,string Date,string Pet,string Daughter,string Daughter_Birthday,string Son,string Birthday_Son){
world_list::combination_one(Name,Surname);
world_list::combination_one(Name,Date);
world_list::combination_one(Name,Pet);
world_list::combination_one(Name,Daughter);
world_list::combination_one(Name,Daughter_Birthday);
world_list::combination_one(Name,Son);
world_list::combination_one(Name,Birthday_Son);
world_list::combination_one(Surname,Date);
world_list::combination_one(Surname,Pet);
world_list::combination_one(Surname,Daughter);
world_list::combination_one(Surname,Daughter_Birthday);
world_list::combination_one(Surname,Son);
world_list::combination_one(Surname,Birthday_Son);
world_list::combination_one(Date,Pet);
world_list::combination_one(Date,Daughter);
world_list::combination_one(Date,Daughter_Birthday);
world_list::combination_one(Date,Son);
world_list::combination_one(Date,Birthday_Son);
world_list::combination_one(Pet,Daughter);
world_list::combination_one(Pet,Daughter_Birthday);
world_list::combination_one(Pet,Son);
world_list::combination_one(Pet,Birthday_Son);
world_list::combination_one(Daughter,Daughter_Birthday);
world_list::combination_one(Daughter,Son);
world_list::combination_one(Daughter,Birthday_Son);
world_list::combination_one(Daughter_Birthday,Son);
world_list::combination_one(Daughter_Birthday,Birthday_Son);
world_list::combination_one(Son,Birthday_Son);
    /*Two combination in development*/
world_list::combination_two_stringConvert(Name);
world_list::combination_two_stringConvert(Surname);
world_list::combination_two_stringConvert(Daughter);
world_list::combination_two_stringConvert(Son);
world_list::combination_two_stringConvert(Pet);
};



void world_list::start_choose(char choose) {
    cout << "Hello I'm World List Generator! :D" << endl;
    cout<<"Write everything with lower case!"<<endl;
    cout<<endl;
    cout<<"TYPE CHARSET!"<<endl;
    cin>>charset;
    cout << "1.Form       OR          2.Random_Strings(not complete!)" << endl;
    cin>>choose;
    if(choose == '1') {
        world_list::choose_form(Name,Surname,Date,Pet,Daughter,Daughter_Birthday,Son,Birthday_Son);
    } else if(choose == '2') {
        world_list::choose_free();
      cout << "Not complete, I'm so Tired";
    } else {
        world_list::exiting_program();
    }
};



