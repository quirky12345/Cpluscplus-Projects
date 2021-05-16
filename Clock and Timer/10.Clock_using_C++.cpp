#include<iostream>
#include<windows.h>

/*
  Run this file on windows IDE because of windows header file
  In Linux you will face error because Linux doesn't contain this.
*/

using namespace std;
int main(){
	int h,m,s,for_correct_input,for_clock;
	for_clock = for_correct_input = 0;
	while(for_correct_input == 0){
		cout<<"Enter hour: ";
		//Validating input
		while(!(cin >> h)) {
          cin.clear();
          cin.ignore(1000, '\n');
          cout << "Whoa bad data, try again. Enter hours: ";
        }
        //
		cout<<"Enter minutes: ";
		while(!(cin >> m)) {
          cin.clear();
          cin.ignore(1000, '\n');
          cout << "Whoa bad data, try again. Enter minutes: ";
        }
		cout<<"Enter seconds: ";
		while(!(cin >> s)) {
          cin.clear();
          cin.ignore(1000, '\n');
          cout << "Whoa bad data, try again. Enter seconds: ";
        }
		if(h>23 || m>59 || s>59){
			system("cls");
		}
		else for_correct_input++;
	}
	while(for_clock == 0){
        system("cls");
        cout<<h<<": "<<m<<": "<<s<<endl;
        s++;
        if(s>59){
        	s = 0;
        	m++;
        }
        if(m>59){
        	m = 0;
        	h++;
        }
        if(h>23){
        	h = 0;
        }
        Sleep(1000);
	}
	return 0;
}
