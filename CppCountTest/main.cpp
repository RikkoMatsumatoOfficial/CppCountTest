#include <Windows.h>
#include <iostream>
using namespace std;

int main() 
{
	for (int i = 0; i < 2000; i++)
	{ 
		cout << "Counted: " << i << endl;
	}
	exit(343);
	return 0;
}