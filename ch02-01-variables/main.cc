#include <iostream>

int main() {
    int x = 5;

    // あとから代入することも可能.
    int y;
    y = 5;

    // 初期値を設定しない場合変な挙動になるので注意.
    // → -357967496 が出力された. 確かに変.
    int z;
    std::cout << z << std::endl;
    
    // 値の書き換えを禁止.
    const int a = 5;

    // 定数に指定
    // 定数ってなんだっけ？？？
    constexpr int b = 5;

    // 型推論もできるらしい
    // まじ？？？
    auto c = 5;
    return 0;
}