#include<iostream>
using namespace std;

class Point {
    private: 
        int x,y;
    public:
        void display(){
            cout<<"\nPoints are:("<<x<<","<<y<<")"<<endl;
        }
        int getX()
        {
        	return x;
		}
		int getY()
		{
			return y;
		}
		void setX(int a)
		{
			x=a;
			
		}
		void setY(int a)
		{
			y=a;
		}
		
        void acceptPoint(int i,int p){
            x=i;
            y=p;    
        }   
};

int main(){
    Point p;
    p.acceptPoint(4,5);
    p.display();
    cout<<"p.getX:"<< p.getX()<<endl;
    cout<<"p.getY:"<<p.getY()<<endl;
    p.setX(9);
        cout<<"after setX: ";
                p.display();


    p.setY(8);
    cout<<"\n after setY: ";
        p.display();

    return 0;
}

