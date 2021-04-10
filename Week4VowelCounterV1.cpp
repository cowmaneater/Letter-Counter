// Week4VowelCounterV1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;



int main(int argc, char* argv[])
{
	ifstream fs;
	//inilizating counter at zero for compiler warning
	int Anum= 0;
	int Enum = 0;
	int Inum = 0 ;
	int Onum = 0;
	int Unum = 0;
	int Xnum = 0;
	int Ynum = 0;
	int Znum = 0;
	int totalVowel= 0;
	string fileName;

	//if more than one arugment the second becomes the filename
	if (argc > 1)
		fileName = (argv[1]);

	//print to console introduction to program
	cout.width(60);
	cout << setfill('*') << setw(60);
	cout << "" << endl;
	cout << "" << right << setfill('*') << setw(12) << "" << " Welcome to my Letter Count Program " << right << setfill('*') << setw(12) << "" << endl;
	cout << setfill('*') << setw(60);
	cout << "" << endl;
	cout << endl;
	cout << endl;




	//throws error box pop up if less than two arugments
	if (argc < 2)
	{
		MessageBoxW(NULL, L"Error- Please specify a file to analyze", L"My Vowel Counter", MB_ICONHAND | MB_OK);
		system("pause");
		return -1;
	}

	cout << "Analyzing file \'" << fileName << "\'" << "..." << endl;

	cout << endl;

	//read the file dynamicly
	fs.open(fileName);
	if (!fs)
	{
		//if file failes to open throws messagebox error
		MessageBoxW(NULL, L"Error- Please specify a file to analyze", L"My Vowel Counter", MB_ICONHAND | MB_OK);
		system("pause");
		return -1;

	}

	// read the lines in the file and add up vowels
	char c;
	while (!fs.eof() && fs >> c)
	{
		if ((c == 'a') || (c == 'A'))
			Anum = Anum + 1;
		else if ((c == 'e') || (c == 'E'))
			Enum = Enum + 1;
		else if ((c == 'i') || (c == 'I'))
			Inum = Inum + 1;
		else if ((c == 'o') || (c == 'O'))
			Onum = Onum + 1;
		else if ((c == 'u') || (c == 'U'))
			Unum = Unum + 1;
		else if ((c == 'x') || (c == 'X'))
			Xnum = Xnum + 1;
		else if ((c == 'y') || (c == 'Y'))
			Ynum = Ynum + 1;
		else if ((c == 'z') || (c == 'Z'))
			Znum = Znum + 1;

	
	}
	//adding all vowels found together

	totalVowel = Anum + Enum + Inum + Onum + Unum;

	//print results to screen
	cout << "The number of A's: "  << setw(41) << setfill('.') << Anum << endl;
	cout << "The number of E's: " << setw(41) << setfill('.') << Enum << endl;
	cout << "The number of I's: " << setw(41) << setfill('.') << Inum << endl;
	cout << "The number of O's: " << setw(41) << setfill('.') << Onum << endl;
	cout << "The number of U's: " << setw(41) << setfill('.') << Unum << endl;
	cout << "The vowel count is: " << setw(40) << setfill('.') << totalVowel << endl;
	cout << "The number of X's: " << setw(41) << setfill('.') << Xnum << endl;
	cout << "The number of Y's: " << setw(41) << setfill('.') << Ynum << endl;
	cout << "The number of Z's: " << setw(41) << setfill('.') << Znum << endl;


	system("pause");
	return 1;
}
