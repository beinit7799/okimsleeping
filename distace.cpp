#include<iostream>
using namespace std;
class Distance
{
	int feet;
	float inches;
	public:
		void read();
		void display();
		Distance add(Distance);
};

int main()
{
	Distance d1,d2,d3;
	d1.read();
	d2.read();
	d1.display();
	d2.display();
	d3=d1.add(d2);
	d3.display();
	return 0;
}
 void Distance::read()
 {
 	cout<<"Enter feet:"<<endl;
 	cin>>feet;
 	cout<<"Enter inches"<<endl;
 	cin>>inches;
 }
 
 void Distance::display()
 {
 	cout<<"The distance is:"<<feet<<"feet and"<<inches<<"inches"<<endl;
 }
 
 Distance Distance::add(Distance d2)
{
	Distance d3;
	d3.inches=inches+d2.inches;
	d3.feet=d3.inches/12;
	d3.inches=d3.inches%12;
	d3.feet+=feet+d1.feet;
	return d3;
}
