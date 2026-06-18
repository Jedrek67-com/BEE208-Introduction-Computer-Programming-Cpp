#include <iostream>
#include<cmath>

int main() {
	double radius;
	double area;
	
	const double PI=3.14159266
	cout<<"Enter the radius of the circle: ";
	cin>>radius;
	area=PI*pow(radius,2);
	cout<<"The area of the circle is:"<<area<<endl;
	
	return 0;
}
