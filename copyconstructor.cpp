#include<iostream>
using namespace std;
class Student
{
	public:
		string name,rollno;
		Student()
		{
			name="MIGUEL O'HARA";
			rollno="22p31a05c6";
		}
		Student(string name,string rollno)
		{
			this->name=name;
			this->rollno=rollno;
		}
		Student(Student &s)
		{
			this->name=s.name;
			this->rollno=s.rollno;
		}	
		void display()
		{
			cout<<name<<" "<<rollno<<" "<<endl;
			
		}	
};
int main()
{
	Student s1,s2("MIGUEL O'HARA","22p31a05c6"),s3(s2);
	s1.display();
	s2.display();
	s3.display();
}
