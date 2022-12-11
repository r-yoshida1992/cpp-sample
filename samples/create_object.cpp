#include <iostream>
#include "object/Human.cpp"

using namespace std;

/**
 * オブジェクト定義のサンプル
 */
class create_object {
public:
    static void run() {
        // 変数の宣言
        string name;
        cout << "your name ? >>";
        // 入力値をname変数に格納
        cin >> name;
        int age;
        cout << "your age ? >>";
        // 入力値をage変数に格納
        cin >> age;
        Human taro(name, age);
        cout << "my name is " << taro.getName() << ". " << taro.getAge() << " years old." << endl;
    }
};