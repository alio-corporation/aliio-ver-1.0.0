#include "Filewriter.h"
#include "Fileopener.h"
#include <iostream>
#include <conio.h>
#include <string>
#define maxSize 80

using namespace std;
using namespace fileSystem;

void menu();

int main(void){
	//variables declarations
	char cmd;
	int lines;
	char fileName[maxSize];
	
	//main
	cout<<"welcome to alio!"<<endl<<"press h for the help menu."<<endl;
	getch();
	system("cls");
	while(cmd!='q'){
		cmd=getch();
		switch (cmd){
			case 'n':
				cout<<"number of  lines: ";
				cin>>lines;
				cout<<"\nfile name: ";
				cin>>fileName;
				writeFile(lines,fileName);
				system("cls");
				break;
			case 'h':
				cout<<"help on commands:"<<endl<<"press:"<<endl<<"h to display help"
				<<" (this!)"<<endl<<"n to write a new file"<<endl<<"o to open a file("
				<<"read only)"<<endl<<"c to enter a cmd command"<<endl
				<<"m to clear screen"<<endl<<"q to quit"<<endl;
				system("pause");
				system("cls");
				break;
			case 'o':
				char path[maxSize];
				cout<<"file path: ";
				cin>>path;
				cout<<endl;
				cout<<openFile(path);
				system("pause");
				system("cls");
				break;
			case 'c':
				char C[100];
				cout<<"enter a command: ";
				cin>>C;
				system(C);
				break;
			case 'm':
				system("cls");
				break;
			
		}
	}
	
	//end
	return 0;
}
