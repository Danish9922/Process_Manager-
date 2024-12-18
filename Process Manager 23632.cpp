#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void processList(){
		
		system("tasklist");
	}
    void terminateProcess(){
    	string pid;
		cout << "Enter the PID to terminate the process from the list: ";
    	cin >> pid;

		string command = "taskkill /F /PID " + pid;

		int result = system(command.c_str());
		if (result == 0){
			cout << "Process with PID " << pid << " was terminated successfully.\n";
		}else{
			cout << "Failed to terminate the process. Ensure the PID is correct and you have the necessary permissions.\n";
		}
	}
int main() 
{
	int choice;
	do{
		cout<<"PROCESS LIST TERMINATER\n"<<endl;
		cout<<"1. Process List\n2. Terminate Process\n0. Exit\nEnter your priority: ";
		cin>>choice;
		switch(choice){
			case 1:
				processList();
				break;
			case 2:
				terminateProcess();
				break;
			case 0:
				break;
			default:
				cout<<"Invalid Choice!!!!!\n";
		}
	}while(choice!=0);
	
	return 0;
