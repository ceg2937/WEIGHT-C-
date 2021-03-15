#include <iostream>

using namespace std;

int main()

{
	double feet, weight, inches, inches1, bmi, total, in;

	cout << "Enter Weight: ";
	cin >> weight;

	cout << "Enter Feet:  ";
	cin >> feet;

	cout << "Enter Inches:  ";
	cin >> inches;

	inches1 = feet*12;
	total = inches1 + inches;

	bmi = 703.0*(weight/(total*total));

	//if and else

	if(bmi<18.5){
	cout << "  bmi is  " << bmi << " Under Weight ";
	}
	else if(bmi>=18.5 && bmi<25)
	{
	cout << "  bmi is  " << bmi << "  Normal Weight   ";
	}
	else if(bmi>=25 && bmi<30)
	{
	cout << "  bmi is  " << bmi << "  Over  Weight   ";
	}
	else if(bmi>30)
	{
	cout << "  bmi is  " << bmi << "  Obese   ";
	}

	return 0;


}
