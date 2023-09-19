#include<iostream>
using namespace std;

class Fruit
{
	public:
	virtual void taste()
	{
		cout<<"fruit has no specific taste"<<endl;
			}
					
};
class Mango:public Fruit
{
	public:
		void taste()
		{
			cout<<"mango taste is sweet"<<endl;
		}
		void pulp()
		{
			cout<<"this is mango pulp"<<endl;
		}
};
class Apple:public Fruit
{
	public:
		void taste()
		{
			cout<<"Apple taste is sweet"<<endl;
			
		}
		void jam()
		{
			cout<<"this is apple jam"<<endl;
		}
};
class Orange:public Fruit
{
	public:
	 void taste()
		{
		 cout<<"Orange taste is sweet"<<endl;
	}
			
		void juice()
		{
		 cout<<"this is orange juice"<<endl;
		}
	
};
int main()
{
	int i;
	Fruit f;
	Orange o;
	Mango m;
	Apple a;
//	f.taste();
//	m.taste();
//	o.taste();
//	
	Fruit *ptr=&o;
	ptr->taste();
	
	Fruit *basket[4];
	basket[0]=&f;
	basket[1]=&m;
	basket[2]=&o;
	basket[4]=&a;
	
	for( i=0;i<4;i++)
	{
		basket[i]->taste();
		if(typeid(*basket[i])==typeid(Orange)){
			cout<<"orange is in basket";
		}
	}
	 for (i = 0; i < 4; i++)
    {
        Mango *obj = dynamic_cast<Mango *>(basket[i]);
        if (obj != nullptr)
        {
            cout << "Mango pulp: ";
            obj->pulp();
        }
    }
}
		 
		 
