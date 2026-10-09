```cpp
#include <iostream>
#include <string>
using namespace std;

class Fish {
private:
    int id;
    string name;
    string color;
    string characteristic;

public:
    Fish() {
        id = 0;
        name = "Unknown";
        color = "Unknown";
        characteristic = "Unknown";
    }

    Fish(int i) {
        id = i;
        name = "Unknown";
        color = "Unknown";
        characteristic = "Unknown";
    }

    Fish(int i, string n) {
        id = i;
        name = n;
        color = "Unknown";
        characteristic = "Unknown";
    }

    Fish(int i, string n, string c) {
        id = i;
        name = n;
        color = c;
        characteristic = "Unknown";
    }

    Fish(int i, string n, string c, string ch) {
        id = i;
        name = n;
        color = c;
        characteristic = ch;
    }
};

int main() {
    Fish fish1;
    Fish fish2(2);
    Fish fish3(3, "Betta");
    Fish fish4(4, "Goldfish", "Orange");
    Fish fish5(5, "Koi", "Red and White", "Friendly");

    cout << "Five Fish objects created successfully!" << endl;

    return 0;
}
```
