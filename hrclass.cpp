#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    private:
        int age;
        string name;
        string lastname;
        int standard;
    public:
        Student();
        void set_age(int _age){
            age = _age;
        }
        void set_first_name(string _name){
            name = _name;
        }
        void set_last_name(string _lastname){
            lastname = _lastname;
        }
        void set_standard(int _standard){
            standard = _standard;
        }
        int get_age(){            return age;        }
        string get_first_name(){            return name;        }
        string get_last_name(){            return lastname;        }
        int get_standard(){            return standard;        }
        string to_string(){
            stringstream ss;
            char c = ',';
            ss << age << c << lastname << c << name << c <<standard;
            return ss.str();
        }    
};

Student::Student(){
    age = 0;
    standard = 0;
    name.clear();
    lastname.clear();
}

int main() {
    int age, standard;
    string name, last_name;
    
    cin >> age >> name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}


