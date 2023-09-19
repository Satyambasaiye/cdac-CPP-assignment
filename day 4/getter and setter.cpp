#include<iostream>
using namespace std;

class ComplexNum {
    private: 
        int real,imaginary;
    public:
        void display(){
            cout<<"Comples number : "<<real<<"+i"<<imaginary<<endl;
        }
        void setImg(int im)
        {
        	imaginary=im;
		}
		void setReal(int Real)
		{
			real=Real;
		}
        ComplexNum(int r,int i){
            real=r;
            imaginary=i;    
        }
		int getImg()
		{
			return imaginary;
		   }  
		int getReal()
		{
			return real;
		 } 
};

int main(){
    ComplexNum p(5,6);
    p.display();
    p.setImg(8);
    p.display();
    p.setReal(10);
    p.display();
    cout<<" real number is "<<p.getImg()<<endl;
    cout<<" imaginary number is "<<p.getReal()<<endl;
    return 0;
}


