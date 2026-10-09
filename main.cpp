
#include <iostream>
#include <string>
#include <vector>
using namespace std;

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

    Fish(int i) {
        id = i;
        name = "Unknown";
        color = "Unknown";
        characteristic = "Unknown";
        categoryId = 0;
    }

    Fish(int i, string n) {
        id = i;
        name = n;
        color = "Unknown";
        characteristic = "Unknown";
        categoryId = 0;
    }

    Fish(int i, string n, string c) {
        id = i;
        name = n;
        color = c;
        characteristic = "Unknown";
        categoryId = 0;
    }

    Fish(int i, string n, string c, string ch) {
        id = i;
        name = n;
        color = c;
        characteristic = ch;
        categoryId = 0;
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

    int getCategoryId() {
        return categoryId;
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

    void setCategoryId(int cId) {
        categoryId = cId;
    }

    void displayFishInfo() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Characteristic: " << characteristic << endl;
        cout << "Category ID: " << categoryId << endl;
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

    Category(int id) {
        CategoryId = id;
        CategoryName = "Unknown";
        Description = "Unknown";
    }

    Category(int id, string name) {
        CategoryId = id;
        CategoryName = name;
        Description = "Unknown";
    }

    Category(int id, string name, string description) {
        CategoryId = id;
        CategoryName = name;
        Description = description;
    }

    int getCategoryId() {
        return CategoryId;
    }

    string getCategoryName() {
        return CategoryName;
    }

    string getDescription() {
        return Description;
    }

    void setCategoryId(int id) {
        CategoryId = id;
    }

    void setCategoryName(string name) {
        CategoryName = name;
    }

    void setDescription(string description) {
        Description = description;
    }

    void displayCategoryInfo() {
        cout << "Category ID: " << CategoryId << endl;
        cout << "Category Name: " << CategoryName << endl;
        cout << "Description: " << Description << endl;
    }
};

int main() {
    Fish fish1;
    Fish fish2(2);
    Fish fish3(3, "Betta");
    Fish fish4(4, "Goldfish", "Orange");
    Fish fish5(5, "Koi", "Red and White", "Friendly");

    cout << "===== ORIGINAL 5 FISH OBJECTS =====" << endl;

    fish1.displayFishInfo();
    cout << endl;

    fish2.displayFishInfo();
    cout << endl;

    fish3.displayFishInfo();
    cout << endl;

    fish4.displayFishInfo();
    cout << endl;

    fish5.displayFishInfo();
    cout << endl;

    cout << "===== UPDATE FISH INFORMATION =====" << endl;

    fish5.setName("Butterfly Koi");
    fish5.setColor("Black and White");
    fish5.setCharacteristic("Peaceful and elegant");

    cout << "Updated name: " << fish5.getName() << endl;
    cout << "Updated color: " << fish5.getColor() << endl;
    cout << "Updated characteristic: "
         << fish5.getCharacteristic() << endl;

    cout << endl;
    cout << "===== UPDATED FISH INFORMATION =====" << endl;

    fish5.displayFishInfo();

    Fish fishes[] = {
        fish1,
        fish2,
        fish3,
        fish4,
        fish5,
        Fish(6, "Guppy", "Yellow", "Peaceful"),
        Fish(7, "Angelfish", "Black and White", "Elegant"),
        Fish(8, "Discus", "Blue", "Calm"),
        Fish(9, "Molly", "Black", "Hardy"),
        Fish(10, "Platy", "Orange", "Active"),
        Fish(11, "Neon Tetra", "Blue", "Small and active"),
        Fish(12, "Oscar", "Red and Black", "Intelligent"),
        Fish(13, "Flowerhorn", "Red", "Distinctive head"),
        Fish(14, "Swordtail", "Orange", "Long tail"),
        Fish(15, "Corydoras", "Brown", "Bottom-dwelling")
    };

    int size = sizeof(fishes) / sizeof(fishes[0]);

    cout << endl;
    cout << "===== COMPLETE LIST OF 15 ORNAMENTAL FISH ====="
         << endl;

    for (int i = 0; i < size; i++) {
        fishes[i].displayFishInfo();
        cout << "------------------------" << endl;
    }

    vector<string> colors;

    for (int i = 0; i < size; i++) {
        bool colorExists = false;

        for (int j = 0; j < (int)colors.size(); j++) {
            if (colors[j] == fishes[i].getColor()) {
                colorExists = true;
                break;
            }
        }

        if (!colorExists) {
            colors.push_back(fishes[i].getColor());
        }
    }

    cout << endl;
    cout << "===== GROUP FISH BY COLOR =====" << endl;

    for (int i = 0; i < (int)colors.size(); i++) {
        cout << endl;
        cout << "Color: " << colors[i] << endl;

        for (int j = 0; j < size; j++) {
            if (fishes[j].getColor() == colors[i]) {
                cout << "ID: " << fishes[j].getId()
                     << " | Name: " << fishes[j].getName()
                     << " | Characteristic: "
                     << fishes[j].getCharacteristic()
                     << endl;
            }
        }
    }

    Category categories[] = {
        Category(1, "Tropical Fish",
                 "Tropical ornamental fish"),
        Category(2, "Goldfish and Koi",
                 "Goldfish and koi varieties"),
        Category(3, "Community Fish",
                 "Fish suitable for community aquariums")
    };

    int categoryCount =
        sizeof(categories) / sizeof(categories[0]);

    fishes[0].setCategoryId(3);
    fishes[1].setCategoryId(3);
    fishes[2].setCategoryId(1);
    fishes[3].setCategoryId(2);
    fishes[4].setCategoryId(2);
    fishes[5].setCategoryId(3);
    fishes[6].setCategoryId(1);
    fishes[7].setCategoryId(1);
    fishes[8].setCategoryId(3);
    fishes[9].setCategoryId(3);
    fishes[10].setCategoryId(1);
    fishes[11].setCategoryId(1);
    fishes[12].setCategoryId(1);
    fishes[13].setCategoryId(3);
    fishes[14].setCategoryId(3);

    cout << endl;
    cout << "===== ALL CATEGORIES =====" << endl;

    for (int i = 0; i < categoryCount; i++) {
        categories[i].displayCategoryInfo();
        cout << "------------------------" << endl;
    }

    cout << endl;
    cout << "===== FISH BY CATEGORY =====" << endl;

    int selectedCategoryId;

    cout << "Enter category ID (1-3): ";
    cin >> selectedCategoryId;

    bool categoryFound = false;

    for (int i = 0; i < categoryCount; i++) {
        if (categories[i].getCategoryId() == selectedCategoryId) {
            categoryFound = true;

            cout << endl;
            cout << "Selected category: "
                 << categories[i].getCategoryName() << endl;

            cout << "Description: "
                 << categories[i].getDescription() << endl;

            bool fishFound = false;

            for (int j = 0; j < size; j++) {
                if (fishes[j].getCategoryId() == selectedCategoryId) {
                    fishes[j].displayFishInfo();
                    cout << "------------------------" << endl;
                    fishFound = true;
                }
            }

            if (!fishFound) {
                cout << "No fish belongs to this category." << endl;
            }

            break;
        }
    }

    if (!categoryFound) {
        cout << "Invalid category ID." << endl;
    }

    return 0;
}