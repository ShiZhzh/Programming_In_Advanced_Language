#include <iostream>
using namespace std;

class SimpleCircle
{
public:
	SimpleCircle();
	SimpleCircle(int);
	SimpleCircle(const SimpleCircle &);
	~SimpleCircle() {}
	SimpleCircle operator + (const SimpleCircle &a)const;
	SimpleCircle operator - (const SimpleCircle &a)const;
	SimpleCircle operator = (const SimpleCircle &a)const;
	void setRadius(int);
	int getRadius() const;
	
private:
	int *itsRadius;
};
SimpleCircle SimpleCircle::operator+(const SimpleCircle &a)const{
	return SimpleCircle(a.getRadius()+*itsRadius);
}

SimpleCircle SimpleCircle::operator-(const SimpleCircle &a)const{
	return SimpleCircle(*itsRadius-a.getRadius());
}

SimpleCircle SimpleCircle::operator=(const SimpleCircle &a)const{
	return SimpleCircle(*itsRadius=a.getRadius());
}

SimpleCircle::SimpleCircle()
{
	itsRadius = new int(5);
}

SimpleCircle::SimpleCircle(int radius)
{
	itsRadius = new int(radius);
}

SimpleCircle::SimpleCircle(const SimpleCircle & rhs)
{
	int val = rhs.getRadius();
	itsRadius = new int(val);
}

int SimpleCircle::getRadius() const
{
	return *itsRadius;
}

int main()
{
	SimpleCircle CircleOne(3), CircleTwo(9); 
	CircleTwo=CircleTwo-CircleOne;
	CircleOne=CircleTwo;
	cout << "CircleOne: " << CircleOne.getRadius() << endl;
	cout << "CircleTwo: " << CircleTwo.getRadius() << endl;
	return 0;
}