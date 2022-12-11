#include <iostream>
#include <string>
using namespace std;

/**
 * オブジェクト定義のサンプル
 */
class object_sample {

};

/**
 * オブジェクトのサンプル2
 * 上記の改良版
 */
class Human {
    string name;
    int age;
public :
    Human(string, int);

    string getName() const;

    int getAge() const;
};

Human::Human(string name, int age) : name(name), age(age) {}

string Human::getName() const { return name; }

int Human::getAge() const { return age; }

void create_object_2() {
    Human jiro("jiro", 21);
    cout << "hello_world my name is " << jiro.getName() << ". " << jiro.getAge() << " years old." << endl;
}