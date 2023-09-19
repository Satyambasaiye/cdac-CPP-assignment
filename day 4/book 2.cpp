#include<iostream>
using namespace std;
class Book1{
	private:
		string bname,author;
		int id,price;
	public:
		Book1(string bname,string author,int id, int price)
		{
			this->bname=bname;
			this->author=author;
			this->id=id;
			this->price=price;
		}
		void setbname(string bname)
		{
			this->bname=bname;
		}
		void setAurhor(string author)
		{
			this->author=author;
		}
		void setId(int id)
		{
			this->id=id;
		}
		void setPrice(int price)
		{
			this->price=price;
		}
		void display()
		{
			cout<<"book name:"<<bname<<endl;
			cout<<"author name:"<<author<<endl;
			cout<<"Id:"<<id<<endl;
			cout<<"price"<<price<<endl;
		}
};
int main()
{
	Book1 b1("let us c","dannis",2365,1500);
	b1.display();
	b1.setbname("web development");
	b1.setAurhor("abc");
	b1.setId(236);
	b1.setPrice(256);
	
	
}
