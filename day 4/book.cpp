#include<iostream>
#include<string>
using namespace std;

class Book {
    private: string bname,author;
    int id,price;
       
    public:
        Book(){
            
        }
        Book(string bn, string a, int i,int p){
                id=i;
            bname=bn;
            author=a;
            price=p;
            
        }
        void setName(string n)
        {
        	        bname=n	;
		}
		void setPrice(int p)
		{
			price=p;
		}
        int getPrice()
        {
        	return price;
		}
		string getName()
		{
			return bname;
		}
        
        void display(){
            cout<<"\nbook name:"<<bname<<endl;
            cout<<"author: "<<author<<endl;
            cout<<"id: "<<id<<endl;
            cout<<"price:"<<price<<endl;
        }
        void acceptBook(string bn, string a, int i,int p){
            id=i;
            bname=bn;
            author=a;
            price=p;
            
            
        }
           
};

int main(){
    Book b,b2("aws ","connolly ",156,1005);
    b.acceptBook("web development","richardo hoar",123,935);
    
    b.display();
    b.setName("c++ programming");
    cout<<"after setname:\n"<<endl;
    b.display();
    cout<<"after setPrice:\n"<<endl;
    b.display();
    cout<<"get price: "<<b.getPrice();
    cout<<"get name:"<<b.getName();

    
    return 0;
}


