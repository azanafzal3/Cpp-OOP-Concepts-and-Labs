#include <iostream>
#include <string>

using namespace std;

class Holiday {
private:
    string name;
    int day;
    string month;
public:
    Holiday() : name(""), day(0), month("") {}
    Holiday(string n, int d, string m) : name(n), day(d), month(m) {}
    Holiday(const Holiday& copy) : name(copy.name), day(copy.day), month(copy.month) {}

    void setName(string n) { name = n.substr(0, 50); }
    string getName() const { return name; }

    void setDay(int d) { day = (d >= 0) ? d : 0; }
    int getDay() const { return day; }

    void setMonth(string m) { month = m.substr(0, 10); }
    string getMonth() const { return month; }
};

bool inSameMonth(const Holiday& a, const Holiday& b) {
    return a.getMonth() == b.getMonth();
}

double avgDate(Holiday arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i].getDay();
    }
    return static_cast<double>(sum) / size;
}

int main() {
    // Example usage
    Holiday h1("New Year's Day", 1, "January");
    Holiday h2("Valentine's Day", 14, "February");
    Holiday h3("Independence Day", 4, "July");
    Holiday h4("Halloween", 31, "October");

    cout << h1.getName() << " is in " << h1.getMonth() << endl;
    cout << h2.getName() << " is in " << h2.getMonth() << endl;

    if (inSameMonth(h1, h2)) {
        cout << "These holidays are in the same month" << endl;
    } else {
        cout << "These holidays are not in the same month" << endl;
    }

    Holiday arr[] = {h1, h2, h3, h4};
    double avg = avgDate(arr, 4);
    cout << "The average day in the array is " << avg << endl;

    return 0;
}
