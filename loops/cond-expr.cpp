#include <iostream>

using namespace std;

class Condition {
private:
    bool value;
public:
    Condition(bool val) : value(val) {}

    operator bool() const {
        return value;
    }

    void toggle() {
        value = !value;
    }
};

int main() {
    // TODO: Use the Condition class to toggle the condition in the while loop

    while (cond) {
        cout << "Condition is true..." << endl;
        cond.toggle();
    }

    cout << "Condition is false, exiting loop!" << endl;

    return 0;
}