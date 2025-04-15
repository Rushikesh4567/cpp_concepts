#include<iostream>
#include<fstream>
using namespace std;
int main()
{	
	ofstream Myfile("Filename.txt");				// Open for writing in file
	
	Myfile<<"I am learning file handling.";			// give the messege
	Myfile.close();
	
	string myText;
	
	ifstream MyReadFile("Filename.txt");			//open for reading the existing file
	
	while(getline(MyReadFile,myText))
	{
		cout<<myText;
	}
	
	MyReadFile.close();
}
