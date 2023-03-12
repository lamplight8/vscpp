//例10-19  成员函数适配器实例。
#include<vector>
#include<functional>
#include<algorithm>
#include<iostream>
using namespace std;

struct Car {
	int id;
	Car(int id) { this->id = id; }
	void display() const { cout << "Car " << id << endl; }
};

int main()
{
	vector<Car*> pcars;
	vector<Car> cars;
	int i;
	for (i = 0; i < 5; i++)
		pcars.push_back(new Car(i));
	for (i = 5; i < 10; i++)
		cars.push_back(Car(i));

	cout << "elements in pcars: " << endl;
	for_each(pcars.begin(), pcars.end(), mem_fn(&Car::display));
	cout << endl;

	cout << "elements in cars: " << endl;
	for_each(cars.begin(), cars.end(), mem_fn(&Car::display));
	cout << endl;

	for (size_t i = 0; i < pcars.size(); ++i)
		delete pcars[i];

	return 0;
}