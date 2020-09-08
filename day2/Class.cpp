#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
    int age,standard;
    string first_name,last_name;
    public:
    void set_age(int val){
        age = val;
    }
    void set_first_name(string name){
        first_name = name;
    }
    void set_last_name(string name){
        last_name = name;
    }
    void set_standard(int val){
        standard = val;
    }

    int get_age(){
        return age;
    }
    string get_first_name(){
        return first_name;
    }

    string get_last_name( ){
        return last_name;
    }
    int get_standard( ){
        return standard;
    }

    string to_string(){
        stringstream ss;
        //create a stringstream and write all into it.
        ss << age << "," << first_name << "," << last_name << "," << standard;
        string s;
        // write all the chars from stringstream to a string.
        ss >> s;
        //return string
        return s;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}