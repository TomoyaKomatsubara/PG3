#include <iostream>
#include <string>
#include <chrono>

class Test {
public:
    std::string data;

    // 通常コンストラクタ
    Test(size_t size, char ch) : data(size, ch) {}

    // コピーコンストラクタ
    Test(const Test& other) : data(other.data) {
        std::cout << "コピーコンストラクタ呼び出し\n";
    }

    // ムーブコンストラクタ
    Test(Test&& other) noexcept : data(std::move(other.data)) {
        std::cout << "ムーブコンストラクタ呼び出し\n";
    }
};

int main() {
    using namespace std::chrono;

    Test original(1000000, 'a');

    std::cout << "5回Enterを押します。\n";

    microseconds copy_time{ 0 };
    microseconds move_time{ 0 };

    for (int i = 0; i < 5; i++) {
        std::cin.get();
        if (i == 0) { // 1回目でコピー計測
            auto start = steady_clock::now();
            Test copy_test = original; // コピー
            auto end = steady_clock::now();
            copy_time = duration_cast<microseconds>(end - start);
        }
        if (i == 4) { // 5回目でムーブ計測
            auto start = steady_clock::now();
            Test move_test = std::move(original); // ムーブ
            auto end = steady_clock::now();
            move_time = duration_cast<microseconds>(end - start);
        }
    }

    std::cout << "1000000文字を移動とコピーで比較しました。\n";
    std::cout << "コピー: " << copy_time.count() << "μs\n";
    std::cout << "移動: " << move_time.count() << "μs\n";

    std::cout << "続行するには何かキーを押してください...\n";
    std::cin.get();
}
