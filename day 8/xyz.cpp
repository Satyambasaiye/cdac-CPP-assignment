#include <iostream>
#include<fstream>
using namespace std;

class Person {
protected:
    int id;
    string Fname, Lname;

public:
    Person(int id, string Fname, string Lname) :id(id),Fname(Fname),Lname(Lname){
    }
    Person() {
    }
    virtual double calculate() {
        return 0;
    }
};

class Student : public Person {
protected:
    int sid;
    string fname, lname;

public:
    Student(int sid, string fname, string lname) : Person(sid, fname, lname) {
		
    }
    double calculate() {
        int n = 3;
        int arr[n];
        cout << "enter the marks:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 90) {
                cout << "sub" << i + 1 << " grade: " << "A" << endl;
            }
            else if (arr[i] >= 80 && arr[i] < 90) {
                cout << "sub" << i + 1 << " grade: " << "B" << endl;
            }
            else if (arr[i] >= 70 && arr[i] < 80) {
                cout << "sub" << i + 1 << " grade: " << "C" << endl;
            }
            else if (arr[i] >= 60 &&arr[i]<70) {
                cout << "sub" << i + 1 << " grade: " << "D" << endl;
            }
            else {
                cout << "sub" << i + 1 << " grade: " << "F" << endl;
            }
        }
        return 0;
    }

    void display() {
        cout << "sid: " << id << " name: " << Fname << " " << Lname << endl;
    }
};

int main() {
    int ch = 1, r;
    string fn, ln;

    do {
        cout << "enter student details" << endl;
        cout << "enter roll no.: " << endl;
        cin >> r;
        cout << "enter first name: " << endl;
        cin >> fn;
        cout << "enter last name: " << endl;
        cin >> ln;
        Student s(r, fn, ln);
        s.calculate();
        s.display();
        
        
        
    	ofstream MyFile("std.txt");
	if(MyFile.is_open())
	{
	MyFile<<r<<" "<<fn<<" "<<ln;
	}
	else
	{
		cout<<"unable to open";
}
	MyFile.close();

		
	ifstream MyF("std.txt");

while(!MyF.eof())
	{
		string line;
		getline(MyF,line);
		
		cout<<"---------output from file------------"<<endl;
			cout<<line<<endl;

		MyF.close();
	}	
   cout<<"want to continue 0/1"<<endl; 
        cin >> ch; 
}while (ch != 0);
return 0;
}
