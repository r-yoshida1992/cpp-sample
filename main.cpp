#include <iostream>
#include "samples/hello_world.cpp"
#include "samples/create_object.cpp"

void execute(int);

using namespace std;

int main() {

    // 実行するサンプルを選択させる
    int index;
    cout << "[1] : hello_world" << endl;
    cout << "[2] : create_object" << endl;
    cout << "Please select a sample to run. >>";
    cin >> index;

    execute(index);
    return 0;
}

void execute(int index) {
    if (index == 1) {
        hello_world::run();
    } else if (index == 2) {
        create_object::run();
    }
}