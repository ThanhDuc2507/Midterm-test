
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

    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }

    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }

    void displayDate() {
        cout << day << "/" << month << "/" << year;
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

    Category(int id, string name, string description) {
        CategoryId = id;
        CategoryName = name;
        Description = description;
    }

    int getCategoryId() { return CategoryId; }
    string getCategoryName() { return CategoryName; }
    string getDescription() { return Description; }

    void setCategoryId(int id) { CategoryId = id; }
    void setCategoryName(string name) { CategoryName = name; }
    void setDescription(string description) {
        Description = description;
    }

    void displayCategoryInfo() {
        cout << "Category ID: " << CategoryId << endl;
        cout << "Category Name: " << CategoryName << endl;
        cout << "Description: " << Description << endl;
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

    Fish(int i, string n, string c, string ch, int cId) {
        id = i;
        name = n;
        color = c;
        characteristic = ch;
        categoryId = cId;
    }

    int getId() { return id; }
    string getName() { return name; }
    string getColor() { return color; }
    string getCharacteristic() { return characteristic; }
    int getCategoryId() { return categoryId; }

    void setId(int i) { id = i; }
    void setName(string n) { name = n; }
    void setColor(string c) { color = c; }
    void setCharacteristic(string ch) { characteristic = ch; }
    void setCategoryId(int cId) { categoryId = cId; }

    void displayFishInfo() {
        cout << "Fish ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Characteristic: " << characteristic << endl;
        cout << "Category ID: " << categoryId << endl;
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

    int getId() { return id; }
    string getName() { return name; }
    string getAddress() { return address; }
    string getOwner() { return owner; }
    Date getStartDate() { return startdate; }
    vector<Category> getCategories() { return categories; }
    vector<Fish> getFishes() { return fishes; }

    void setId(int i) { id = i; }
    void setName(string n) { name = n; }
    void setAddress(string a) { address = a; }
    void setOwner(string o) { owner = o; }
    void setStartDate(Date d) { startdate = d; }

    void setCategories(vector<Category> c) {
        categories = c;
    }

    void setFishes(vector<Fish> f) {
        fishes = f;
    }

    void displayFishShopInfo() {
        cout << "Shop ID: " << id << endl;
        cout << "Shop Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Owner: " << owner << endl;
        cout << "Start Date: ";
        startdate.displayDate();
        cout << endl;
        cout << "Number of Categories: "
             << categories.size() << endl;
        cout << "Number of Fish: "
             << fishes.size() << endl;
    }
};

int main() {
    FishShop shop;

    shop.setId(1);
    shop.setName("Happy Fish Shop");
    shop.setAddress("Ho Chi Minh City");
    shop.setOwner("Nguyen Van A");
    shop.setStartDate(Date(1, 1, 2025));

    shop.displayFishShopInfo();

    return 0;
}