#include<iostream>
using namespace std;

	template <typename T>
	
		T add(T a,T b)
		{
			return a+b;
		}
		
template<class T>class MyGenric
{
	protected:
		T a;
	public:
		MyGenric(T a)
		{
			this->a=a;
		}
		void display()
		{
			cout<<"you entered:"<<a<<endl;
		}
};
	
int main()
{
//	int a=10,b=8;
//	
//	double c=3.4,d=9;
//	
//
//		cout<<add(c,d);

	MyGenric<int> m(5);
	MyGenric<string> m1("iacsd");
	m1.display();
	m.display();
		return 0;

}