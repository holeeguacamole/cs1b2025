#include <iostream>
using namespace std;

enum DayOfWeek { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

string getNextDay(int currentDay) {
    if (currentDay < 1 || currentDay > 7) return "Invalid day";
    int nextDay = currentDay % 7 + 1;
    switch (nextDay) {
        case Monday: return "Monday";
        case Tuesday: return "Tuesday";
        case Wednesday: return "Wednesday";
        case Thursday: return "Thursday";
        case Friday: return "Friday";
        case Saturday: return "Saturday";
        case Sunday: return "Sunday";
        default: return "Invalid day";
    }
}

int main() {
    int currentDay = 7; // Sunday
    cout << "Next day is: " << getNextDay(currentDay) << endl;
    return 0;
}


