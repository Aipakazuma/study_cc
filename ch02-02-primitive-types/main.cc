#include <iostream>
#include <cstdint>  // これをつけないとサイズ指定付きの整数型を使えないと買いてあったけどコンパイルできた. あれ？

enum Day {
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};

// 列挙子の名前は被らないようにする必要があります。
// まじか

// classで定義することもできる.
// classは他の列挙子の名前と被っても問題ない.
enum class Day2 {
  Sun1,
  Mon1,
  Tue1,
  Wed1,
  Thu1,
  Fri1,
  Sat1
};

int main() {
    // 整数型
    // charは文字と整数を扱える...
    char a = 0;

    // 符号なし整数型
    unsigned int x = 400000000;

    // サイズ指定つき整数型
    int8_t y = 10;

    // enumを扱う
    Day day = Fri;

    // これはok
    int z = Fri;

    // これはng
    // Day day = 5;

    // classの場合下記で扱う必要がある
    Day2 day2 = Day2::Fri1;

    // 数値型にいれるとかはできない
    // int x = Day2::Fri1;

    return 0;
}