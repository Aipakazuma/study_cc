#include <iostream>

int main() {
    int x = 5;

    // ポインタ
    // *がポインタ型
    // &がxを指すポインタを得るための演算子
    int* p = &x;

    std::cout << x << std::endl; // 5
    std::cout << p << std::endl; // 0x7ffee8e3b958

    // nullポインタ
    int* p2 = nullptr;

    // デリファレンス(?)
    int y = 5;
    int* p3 = &y;
    // yの値を得る.
    int z = *p;
    std::cout << z << std::endl;

    // constポインタ
    int a = 123;
    const int* p4 = &a;
    // *p4 = 456; // エラー

    // またconstをつける位置によって意味合いが異なる...
    // ↑はポインタが指し示す値を書き換えることができなくなる.
    // ↓はポインタ自身を書き換えることができなくなる.
    int* const p5 = &a;
    // p = nullptr; // エラー

    // てか、ポインタ書き換えることできるのか...
    // まぁそれもそうか
    
    // 併用することも可能.
    const int* const p6 = &a;

    // 参照
    // ポインタに似た仕組みとして参照がある(ややこしい)
    int b = 100;
    int* p7 = &b; // p7はポインタ型
    int& r = b; // rは参照型
    
    // ポインタが指し示す値を扱うためには*を使ってデリファレンスする必要がある
    // 参照の場合は何も付与する必要がない...
    // ふむ？どうやって使い分けるんじゃろ？
    return 0;
}