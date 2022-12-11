#include <string>

using namespace std;

/**
 * オブジェクトのサンプル
 */
class Human {
    string name;
    int age;
public :
    Human(string, int);

    string getName();

    int getAge();
};

Human::Human(string name, int age) : name(std::move(name)), age(age) {}

string Human::getName() { return name; }

int Human::getAge(){ return age; }