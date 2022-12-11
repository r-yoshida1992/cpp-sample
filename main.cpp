#include <iostream>
#include <string>
#include "samples/hello_world_sample.cpp"

void input_string();

void create_object_1();

void create_object_2();

void execute(int);

using namespace std;

int main() {

    // 実行するサンプルを選択させる
    int index;
    cout << "[1] : hello_world_sample" << endl;
    cout << "Please select a sample to run. >>";
    cin >> index;

    execute(index);
    return 0;
}

void execute(int index){
    if (index == 1) {
        hello_world::main();
    }
}

void input_string() {
    // 変数の宣言
    string name;
    cout << "your name ? >>";
    // 入力値をname変数に格納
    cin >> name;
    // 出力処理
    cout << "hello_world! " << name << "!" << endl;
}

/**
 * オブジェクトのサンプル1
 * この書き方だと、呼び出し毎に関数定義をするようコンパイラに要求するため、ファイルサイズが大きくなる。
 */
class Human_1 {
    // 非公開メンバ。publicの上部に書いたものは自動的に非公開になるので省略可能
private:
    string name;
    int age;
public:
    // コンストラクタ
    Human_1(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // getter
    // データの変更を行わないメンバ関数にはconstをつける
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }
};

void create_object_1() {
    Human_1 taro("taro", 23);
    cout << "hello_world my name is " << taro.getName() << ". " << taro.getAge() << " years old." << endl;
}

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