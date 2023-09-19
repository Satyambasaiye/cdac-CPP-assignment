#include<iostream>
using namespace std;

class Shape{
	public:
	virtual int area()=0;
	
	
	
};
class Rectangle :public Shape{
	public:
		int l,b;
	Rectangle(){
		
	}
		
	Rectangle(int x,int y):l(x),b(y){
	};

	int area(){
		return l*b;
		
	}
};
class Square:public Shape{
	public:
		int s;
		Square(){
			
		}
		Square(int s){
			this->s=s;
			
		}
		int area()
		{
			return s*s;
		}
};
class circle:public Shape{
	public:
		int c;
		circle(){
		}
		circle(int c)
		{
			this->c=c;
		}
		int area()
		{
			return 2*3.14*c;
		}
};
int main()
{
	Square s(3);
	Rectangle r(2,3);
	circle c(2);
	cout<<"squarea area:"<<s.area()<<endl;
	cout<<"rectangle area:"<<r.area()<<endl;
	cout<<"circle area:"<<c.area()<<endl;

}