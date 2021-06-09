#include <iostream>
#include <string>
using namespace std;

	string zdanie;
	bool jest;

int main() {
	

	
	cout<<"Podaj zdanie"<<endl;
	getline(cin, zdanie);

	
for(int i=0; i<zdanie.length()/2; i++) 
{
	
if(zdanie[i]!=zdanie[zdanie.length()-1-i])
	{
		
		if(i=zdanie.length()/2)
		{
		jest = false;
		}
	
	}
else 
	{	
		jest = true;
	}
	
}

if(jest==true)
	{
		cout<<"Jest palindromem";
	}
else 
	{
		cout<<"nie jest";
	}
	
	

	return 0;
}
