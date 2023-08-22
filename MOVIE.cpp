#include<iostream>
using namespace std;
class Movie{
	public:
		static string TRIOLOGY;
		string name;
		int rating;
		Movie(string n,int r)
		{
			name=n;
			rating=r;	
		}
	void display();		
};
string Movie::TRIOLOGY="BATMAN";
void Movie::display()
{
	cout<<name<<" "<<rating<<endl;
	cout<<TRIOLOGY<<endl;
}
int main()
{
	Movie m1("DARKKNIGHT",10);
	m1.display();
	return 0;
	
}
