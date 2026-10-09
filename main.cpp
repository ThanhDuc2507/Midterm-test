
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

    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    string getColor() {
        return color;
    }

    string getCharacteristic() {
        return characteristic;
    }

    void setId(int i) {
        id = i;
    }

    void setName(string n) {
        name = n;
    }

    void setColor(string c) {
        color = c;
    }

    void setCharacteristic(string ch) {
        characteristic = ch;
    }

    void displayFishInfo() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Characteristic: " << characteristic << endl;
    }
};

int main() {
    Fish fish1;
    Fish fish2(2);
    Fish fish3(3, "Betta");
    Fish fish4(4, "Goldfish", "Orange");
    Fish fish5(5, "Koi", "Red and White", "Friendly");

    cout << "===== ORIGINAL FISH INFORMATION =====" << endl;

    cout << "\nFish 1:" << endl;
    fish1.displayFishInfo();

    cout << "\nFish 2:" << endl;
    fish2.displayFishInfo();

    cout << "\nFish 3:" << endl;
    fish3.displayFishInfo();

    cout << "\nFish 4:" << endl;
    fish4.displayFishInfo();

    cout << "\nFish 5:" << endl;
    fish5.displayFishInfo();

    fish5.setName("Butterfly Koi");
    fish5.setColor("Black and White");
    fish5.setCharacteristic("Peaceful and elegant");

    cout << "\n===== UPDATED FISH INFORMATION =====" << endl;

    cout << "ID: " << fish5.getId() << endl;
    cout << "Name: " << fish5.getName() << endl;
    cout << "Color: " << fish5.getColor() << endl;
    cout << "Characteristic: "
         << fish5.getCharacteristic() << endl;

    cout << "\n===== VERIFY CHANGES =====" << endl;
    fish5.displayFishInfo();

    return 0;
}
