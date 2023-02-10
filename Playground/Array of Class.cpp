#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int id;
        int age;
        Student(){

        }
        Student(string name, int id, int age){
            this->name = name;
            this->id = id;
            this->age = age;
        }
        void printer(){
            cout<<name<<" "<<id<<" "<<age<<endl;
        }

        // We have to use operator overloading to do any operation between two objects
        bool operator < (Student s){
            return id < s.id;
        }
};

bool comp(Student a, Student b){
    return a.id>b.id;
}

int main(){
    vector<Student> s;
    for(int i=0;i<10;i++){
        s.push_back(Student("A", 20-i, i*20+1));
    }
    
    // We have to use a custom comparator to sort this array of class
    sort(s.begin(), s.end());

    for(int i=0;i<10;i++){
        s[i].printer();
    }
}