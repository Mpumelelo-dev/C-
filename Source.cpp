#include<iostream>
#include<string>
using namespace std;
//class declaration section
class RoomType
{
private:
	double length; //declare length as a double variable
	double width; //declare width as a double variable
public:
	RoomType(double = 0.0, double = 0.0); //the constructor's declaration
	void showRoomValues();
	void setNewRoomValues(double, double);
	double calculateRoomArea();
};
//class implementation section 
RoomType::RoomType(double l, double w) //this is a constructor
{
	length = l;
	width = w;
	cout << "Created a new room object using a default constructor .\n\n";
}
void RoomType::showRoomValues()//this is a accessor
{
	cout << " length = " << length << "\n  width = " << width << endl;
}
void RoomType::setNewRoomValues(double l, double w)//this is a mutator
{
	length = l;
	width = w;

}
double RoomType::calculateRoomArea()//this performs a calculation
{
	return length * width;
}
int main()
{
	RoomType roomOne(12.5, 18.2); //declare a variable of type RoomType
	cout << "The values for this room are: \n";
	roomOne.showRoomValues(); //use a class method on this object
	cout << "\nThe floor area of this room is : ";
	cout<<roomOne.calculateRoomArea();//use another class method on this object

	roomOne.setNewRoomValues(5.5, 9.3); //call the mutator
	cout << "\n\nThe values for this room have been changed to: \n";
	roomOne.showRoomValues(); //use a class method on this object
	cout << "\nThe floor area of this room is : ";
	cout<<roomOne.calculateRoomArea();//use another class method on this object
	cout << endl;

	system("pause");
	return 0;
}