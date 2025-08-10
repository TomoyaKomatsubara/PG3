#include <stdio.h>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
int turn = 1; // 1→2→3 の順で実行

void PrintT1() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return turn == 1; }); // turnが1になるまで待つ
    printf("     thread1     \n");
    turn = 2;
    cv.notify_all(); // 次のスレッドを起こす
}

void PrintT2() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return turn == 2; }); // turnが2になるまで待つ
    printf("     thread2     \n");
    turn = 3;
    cv.notify_all();
}

void PrintT3() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return turn == 3; }); // turnが3になるまで待つ
    printf("     thread3     \n");
}

int main() {
    std::thread th1(PrintT1);
    std::thread th2(PrintT2);
    std::thread th3(PrintT3);

    th1.join();
    th2.join();
    th3.join();
}
