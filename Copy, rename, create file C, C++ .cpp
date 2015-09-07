
/* xxx

*/

#include <iostream>
#include <string>
#include <vector> 
#include <fstream> 

using namespace std;
using vectorInt = vector<int>;


int main()
{

	// (1) Create a new file in C
	{
		FILE* pFile = fopen("myfile.txt", "w");
		if (pFile != NULL)
		{
			fputs("hello world", pFile);
			fclose(pFile);
		}
	}

	{
		// (2) Rename file in C
		FILE* pFile;
		pFile = fopen("oldname.txt", "w");
		if (pFile != NULL)
		{
			fputs("abc", pFile);
			fclose(pFile);
			auto result = rename("oldname.txt", "newname.txt");
			if (result == 0) puts("File rename success.");
			else perror("File rename failed.");
		}
	}

	{
		// (3-a) Copy file in C
		FILE* orig = fopen("aa.json", "r");
		if (orig == NULL) {	
			printf("Error: Opening orig. file failed...\n"); 
			exit(EXIT_FAILURE);
		}
			
		FILE* backup = fopen("aa.json.backup", "w");
		if (backup == NULL) {
			fclose(orig);
			printf("Error: Creating backup file failed...\n");
			exit(EXIT_FAILURE);
		}

		char ch;
		while ((ch = fgetc(orig)) != EOF){
			fputc(ch, backup);
		}

		printf("File copied successfully (C).\n");

		fclose(orig);
		fclose(backup);
	}

	// (3-b) Copy file in C++
	{
		ifstream  src("aa.txt", ios::binary);
		ofstream  dst("aa.backup.txt", ios::binary);
		if (src.is_open() && dst.is_open()){
			dst << src.rdbuf();
			printf("File copied successfully (C++).\n");
		}
	}
	

	cout << "" << endl;
	for (int i = 0; i<10; ++i){}
	//vector<int> v = { 1,2,3 };
	//unique_ptr<Base> p = make_unique<Der>();
	//for (auto x : arr) cout << x << " ";

	//------------------------END OF MAIN
	cout << "\n\n........" << endl;
	cout << "End" << endl;
}



 