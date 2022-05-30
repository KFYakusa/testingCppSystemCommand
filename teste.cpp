#include <iostream>

using namespace std;

int main(){
	cout<< "file to test simple command input and output."<<endl<<endl;
	
	system("git init; echo 'project to test system command input inside cpp files' >> README.md; git remote add origin https://github.com/KFYakusa/testingCppSystemCommand.git; git add . ; git commit -m 'wip - testing capabilities of system input'; git push origin main;");

	return EXIT_SUCCESS;
}
