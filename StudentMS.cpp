#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student{
private:
    string name="Not signed";
    int ID=0;
    float gpa=0;
    string department="Not signed";
    int level=0;
    string email="Not signed"; //optional 
public:
    // Student(string name="Not signed",int ID=0,float gpa=0,
    //      string department="Not signed",int level=0){
    //     this -> ID=ID;
    //     this -> name=name;
    //     this -> gpa=gpa;
    //     this -> department=department;
    //     this -> level=level;
    // };

    void set_name(string name){
        this -> name = name;
    }

    void set_ID(int ID){
        this -> ID = ID;
    }

    void set_gpa(float gpa){
        this -> gpa = gpa;
    }

    void set_department(string department){
        this -> department = department;
    }

    void set_level(int level){
        this -> level = level;
    }

    void set_email(string email){
        if(email.find('@')!= string::npos)
        this -> email=email;
        else{
            cout<<"This email is not valid";
        }
    }

    void display(){
        cout<<"++++++++++++++++++++++++++++"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<ID<<endl;
        cout<<"GPA: "<<gpa<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Level: "<<level<<endl;
        if (email!= "Not signed") 
        cout<<"Email: "<<email<<endl;
        cout<<"++++++++++++++++++++++++++++"<<endl;

    }
    void add_student_to_CSV(int id, string name, float gpa,
         string department, int level,string email){
            ofstream file("student_data.csv",ios::app);
            if(file.is_open()){
            file<<id<<','<<name<<","<<gpa<<","<<department<<","<<level<<","<<email<<endl;
            cout<<"\nYour data added in student_data.csv file!"<<endl;
            file.close();}
            else{
                cout<<"Can't add the student to the file"<<endl;
            }


    }

};



int main(){
    while(true){
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
        {Student s1;

        string name;
        cout<<"Enter your name: ";
        getline(cin>>ws,name);
        s1.set_name(name);
 

        int ID;
        cout<<"Enter your ID: ";
        cin>>ID;
        cout<<endl;
        s1.set_ID(ID);
      
        float gpa;
        cout<<"Enter your GPA: ";
        cin>>gpa;
        cout<<endl;
        s1.set_gpa(gpa);
    
        string dep;
        cout<<"Enter your department: ";
        getline(cin>>ws,dep);
        s1.set_department(dep);

        int level;
        cout<<"Enter your level: ";
        cin>>level;
        cout<<endl;
        s1.set_level(level);


        char add_email_or_no;
        
        cout<<"Do you want to add email?(y/n) : ";
        cin>>add_email_or_no;
        string email;
        if (add_email_or_no=='y' || add_email_or_no=='Y'){
            
            cout<<"\nEnter your Email: ";
            cin>>email;
            s1.set_email(email);

        }
        else{
            s1.set_email("Not signed");
        }
        s1.add_student_to_CSV(ID,name,gpa,dep,level,email);
        
        
        }

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
            cout<<"Thank you for using Pika team program <3"<<endl;
            exit(0);
        default: //the user entered wrong #
            cout<<"Invalid #, try again! "<<endl;
        }
    
    }

    return 0;
}

