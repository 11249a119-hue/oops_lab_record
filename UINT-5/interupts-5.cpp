#include <iostream>
#include <csignal>
#include <unistd.h>   // For sleep()
using namespace std;

class InterruptHandler {
public:
    static void handleInterrupt(int signalNum) {
        cout << "\nInterrupt signal (" << signalNum << ") received!" << endl;
        cout << "Gracefully shutting down program..." << endl;
        exit(signalNum);
    }
};

int main() {
    // Register signal handler for Ctrl+C (SIGINT)
    signal(SIGINT, InterruptHandler::handleInterrupt);

    cout << "Program running. Press Ctrl + C to trigger interrupt..." << endl;

    while (true) {
        cout << "Working..." << endl;
        sleep(2);  // Pause for 2 seconds
    }

    return 0;
}
