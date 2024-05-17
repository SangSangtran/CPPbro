#include <iostream>
#include <ctime>

using namespace std;
void laySoGiay(unsigned long* par);

int main()
{
	unsigned long seconds;

	laySoGiay(&seconds);

	// in gia tri
	cout << "So giay la: " << seconds << endl;
	
	return 0;
}

void laySoGiay(unsigned long* par)
{
	// Lay so giay hien tai
	*par = time(NULL);
	return;
}