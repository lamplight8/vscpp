//游泳池改造
//一圆形游泳池，现在需在其周围建一圆形过道，并在其四周围上栅栏
//栅栏价格为35元/米，过道造价为20元/平方米
//过道宽度为3米，游泳池半径由键盘输入
//要求编程计算并输出过道和栅栏的造价
#include <iostream>
using namespace std;

const float PI = 3.1415926;
const float FENCE_PRICE = 35;
const float CONCRETE_PRICE = 20;

class Circle
{
private:
	float radius;
public:
    Circle(float r);
    float circumference();
    float area();
};

Circle::Circle(float r)
:radius(r)
{

}

float Circle::circumference()
{
    return 2 * PI * radius;
}

float Circle::area()
{
    return PI * radius * radius;
}

//主程序
int main()
{
    float radius;
    cout << "Please enter the radius of swimming pool: ";
    cin >> radius;
    Circle pool(radius);
    Circle poolRim(radius + 3);
    float fenceCost = poolRim.circumference() * FENCE_PRICE;
    cout << "The price of fence is " << fenceCost<<endl;
    float concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
    cout << "The price of passageway is " << concreteCost << endl;

	return 0;
}