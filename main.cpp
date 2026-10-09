
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }
};

class Category {
private:
    int CategoryId;
    string CategoryName;
    string Description;

public:
    Category() {
        CategoryId = 0;
        CategoryName = "Unknown";
        Description = "Unknown";
    }
};

class Fish {
private:
    int id;
    string name;
    string color;
    string characteristic;
    int categoryId;

public:
    Fish() {
        id = 0;
        name = "Unknown";
        color = "Unknown";
        characteristic = "Unknown";
        categoryId = 0;
    }
};

class FishShop {
private:
    int id;
    string name;
    string address;
    string owner;
    Date startdate;
    vector<Category> categories;
    vector<Fish> fishes;

public:
    FishShop() {
        id = 0;
        name = "Unknown";
        address = "Unknown";
        owner = "Unknown";
        startdate = Date();
    }
};

int main() {
    FishShop shop;

    cout << "FishShop object created successfully." << endl;

    return 0;
}