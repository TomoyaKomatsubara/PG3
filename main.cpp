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

    // 5回Enter待ち
    std::cout << "5回Enterを押すと計測します...\n";
    for (int i = 0; i < 5; i++) {
        std::cin.get();
    }

    // 元データ作成（100万文字）
    Test original(1000000, 'a');

    // コピー計測
    auto start_copy = steady_clock::now();
    Test copy_test = original; // コピー
    auto end_copy = steady_clock::now();
    auto copy_time = duration_cast<microseconds>(end_copy - start_copy).count();

    // ムーブ計測
    auto start_move = steady_clock::now();
    Test move_test = std::move(original); // ムーブ
    auto end_move = steady_clock::now();
    auto move_time = duration_cast<microseconds>(end_move - start_move).count();

    // 結果表示
    std::cout << "1000000文字を移動とコピーで比較しました。\n";
    std::cout << "コピー: " << copy_time << "μs\n";
    std::cout << "移動: " << move_time << "μs\n";

    std::cout << "続行するには何かキーを押してください...\n";
    std::cin.get();
}
