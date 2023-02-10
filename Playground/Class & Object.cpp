#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
        string password;
    public:
        string name;
        int std_id;
        int age;
        string fathers_name;
        string mothers_name;
        Student(string name, int std_id, int age, string fathers_name, string mothers_name){
            this->name = name;
            this->std_id = std_id;
            this->age = age;
            this->fathers_name = fathers_name;
            this->mothers_name = mothers_name;
        }
        void printer(){
            cout<<name<<endl;
            cout<<std_id<<endl;
            cout<<age<<endl;
            cout<<fathers_name<<endl;
            cout<<mothers_name<<endl;
        }
        void setPass(string password){
            this->password = password;
        }
        void getPass(){
            cout<<this->password<<endl;
        }
};

class User{
    protected:
        string name;
        int age;
        void printer(){
            cout<<name<<endl;
            cout<<age<<endl;
        }
};

class Admin:User{
    public:
        int id;
        void printer(){
            cout<<name<<endl;
            cout<<age<<endl;
            cout<<id<<endl;
        }
        Admin(string name, int age, int id){
            this->name = name;
            this->age = age;
            this->id = id;
        }
        ~Admin(){
            cout<<"Called Destructor";
        }
};

class Person{
    public:
        string name;
        Person *father, *mother;
        Person(){
            
        }
        Person(string name, string f_name, string m_name){
            this->name = name;
            this->father = new Person;
            father->name = f_name;
            this->mother = new Person;
            mother->name = m_name;
        }

        void printer(){
            cout<<name<<endl;
            cout<<father->name<<endl;
            cout<<mother->name<<endl;
        }

        ~Person(){
            cout<<"Deconstructor Called"<<endl;
            delete father;
            delete mother;
        }
};
int main(){
    Person p("Debjoty", "Swapan", "Mani");
    p.printer();
}