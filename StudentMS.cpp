#include <iostream>
#include <fstream>
using namespace std;

class Student{
private:
    string name;
    int ID;
    float gpa;
    string department;
    int level;
    string email; //optional 
public:
    Student(string name="Not signed",int ID=0,float gpa=0,
         string department="Not signed",int level=0){
        this -> name=name;
        this -> ID=ID;
        this -> gpa=gpa;
        this -> department=department;
        this -> level=level;
    };

};



int main(){
    while(true){
        try_again:
        cout<<"*************************************"<<endl;
        cout<<"***** Student Management System *****"<<endl;
        cout<<"*************************************"<<endl;
        cout<<"1. Add New Student"<<endl;
        cout<<"2. View All Students"<<endl;
        cout<<"3. Search Student"<<endl;
        cout<<"4. Update Student"<<endl;
        cout<<"5. Delete Student"<<endl;
        cout<<"6. Save & Exit"<<endl;
        cout<<"*************************************"<<endl;
    
        int choice;
        cout<<"Enter valid NO. : ";
        while(!(cin>>choice)){ //handle the error if the user entered a string instead of #
            cout<<"Invalid input, try again: ";
            cin.clear();
            cin.ignore(10000,'\n');
        }
        switch (choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        default: //the user entered wrong #
            cout<<"Invalid #, try again! "<<endl;
            goto try_again;
        }
    
    }

    return 0;
}