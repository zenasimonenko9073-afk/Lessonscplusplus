
#include <iostream>
using namespace std;
struct Prmachine
{
	char firm[50];
	char color[50];
	int weight;
	int height;
	int dov;
	int power;
	int speed;
	int temperature;
};
Prmachine Init(Prmachine &machine)
{
	cout << "Enter firm : "; cin >> machine.firm;
	cout << "Enter color : "; cin >> machine.color;
	cout << "Enter weight : "; cin >> machine.weight;
	cout << "Enter height : "; cin >> machine.height;
	cout << "Enter dovzhina : "; cin >> machine.dov;
	cout << "Enter power : "; cin >> machine.power;
	cout << "Enter speed : "; cin >> machine.speed;
	cout << "Enter temperature : "; cin >> machine.temperature;
	return machine;
}

void Show2(Prmachine &machine)
{
	cout << "Firm : " << machine.firm << endl;
	cout << "Color : " << machine.color << endl;
	cout << "Weight : " << machine.weight << endl;
	cout << "Height : " << machine.height << endl;
	cout << "Dovzhina : " << machine.dov << endl;
	cout << "Power : " << machine.power << endl;
	cout << "Speed : " << machine.speed << endl;
	cout << "Temperature : " << machine.temperature << endl;
}

void Show(Prmachine machine)
{
	cout << "Firm : " << machine.firm << endl;
	cout << "Color : " << machine.color << endl;
	cout << "Weight : " << machine.weight << endl;
	cout << "Height : " << machine.height << endl;
	cout << "Dovzhina : " << machine.dov << endl;
	cout << "Power : " << machine.power << endl;
	cout << "Speed : " << machine.speed << endl;
	cout << "Temperature : " << machine.temperature << endl;
}
int main()
{
	Prmachine machine = {"Samsung", "White", 100, 50, 20, 1200, 250, 25};
	Show(machine);
	Init(machine);
	Show2(machine);

}
