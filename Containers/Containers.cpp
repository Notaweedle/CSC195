#include <string>
#include <array>
#include <iostream>
#include <list>
#include <map>
#include <vector>
using namespace std;

class containers {
public:
    void arrays() {
        array<string, 7> dayOfWeek = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
        cout << dayOfWeek.size() << "\n"; // looks at how large the array is even if data in the spot is not being used.
        for (auto day_of_week : dayOfWeek) {
            cout << day_of_week << endl;
        }
    }
    void vectors() {

        cout << "Vectors\n";
        vector<int> numbers = { 1, 2, 3, 4, 5 };
        cout << numbers.size() << "\n"; // Vector size looks at the data only and add to it when there is new data being add to it.
        numbers.push_back(6);
        numbers.push_back(7);
        cout << numbers.size() << "\n";
        numbers.pop_back();
        cout << numbers.size() << "\n";
        for (auto number : numbers) {
            cout << number << endl;
        }
    }

    void lists() {

        cout << "List\n";
        list<std::string> fruits = { "Apple", "Banana", "Cherry" }; // List are similar to array ,but they are able to be changed and added to freely.
        fruits.push_front("Bob Ross");
        fruits.push_back("The concept of the color red");
        for (auto fruit : fruits) {
            cout << fruit << endl;
        }
    }

    void maps() {
        map<std::string, int > stock = { {"Trees", 10},{"Piles of Fire", 3},{"Wood of Water",0} }; // Map is a key value pair, where the key is the name and the value is the amount of that item.
        for (auto item : stock) {
            cout << item.first << " " << item.second << endl;
        }
        stock["Wood of Water"] = 10;
        for (auto item : stock) {
            cout << item.first << " " << item.second << endl;
        }
    }
};
int main() {

    containers container;
    container.maps();
    return 0;
}
