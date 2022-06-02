#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class employee //class name
{
private: //access specifier
	//data members
	int age;
	string name;
public: //access specifier
	//constructor
	employee() { age = 0; name = " "; }
	//methods
	void setage(int ag){ age = ag; }//setter  method
	void setname(string nm){ name = nm; }//setter method
	int getAge(){ 
		cout << "Enter the age for employee " << endl;
		cin >> age;
		return age; }//getter method
	string getName(){
		cout << "Enter the name for employee " << endl;
		cin >> name;
		return name; }//getter method
	


};

int main()
{
	const int SIZE = 10;
	employee emmployeeDetails[SIZE]; //creating an array of 10 objects
	string name[SIZE];
	int age[SIZE];
	
	for (int i = 0; i < SIZE; i++)
	{
		
		name[i] =emmployeeDetails[i].getName();
		age[i]= emmployeeDetails[i].getAge();
		
	}
	cout << "---------------------------" << endl<< "Employees Details " << endl<<"--------------------------------------" << endl;
	cout << "Names " <<setw(15)<<"Age" << endl;
	for (int j = 0; j < SIZE; j++)
	{
		cout <<name[j] << setw(10) << age[j] << endl;
	}



	system("pause");
	return 0;
}