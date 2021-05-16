#include<iostream>
#include<windows.h>

/*
  Run this file on windows IDE because of windows header file
  In Linux you will face error because Linux doesn't contain this.
  I strongly suggest you to use CodeBlocks for this.
*/

using namespace std;
int main(){
	int h,m,s,for_clock;
	for_clock = 0;
	h = m = s = 0;
	cout<<"Timer starts"<<endl;
	Sleep(1000);
	while(for_clock == 0){
        system("cls");
        cout<<h<<": "<<m<<": "<<s<<endl;
        Sleep(1000);
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
        	break;
        }
	}
	return 0;
}

