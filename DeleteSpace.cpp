#include <iostream>
#include <string>
using namespace std;
string deleteSpace(string n) {
	
	int count = n.length();
	string withoutSpace = "";
	for(int i = 0; i < count; i++)
	{
		if (n[i] != ' ')
		{
			withoutSpace.push_back(n[i]);
		}
	}
	return withoutSpace;
}
int main()
{
	cout << deleteSpace("Przykladowy tekst ze spacjami zmieni sie w zdanie bez spacji.") << endl;
}