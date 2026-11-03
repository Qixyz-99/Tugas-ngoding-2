#include <iostream>
using namespace std;

int main() {
    int nilai;
    string grade;

    cout << "masukan nilai  :";
    cin >> nilai;

    if (nilai >= 85) {
        grade = "A";
    } else if (nilai >= 70) {
        grade = "B";
    } else if (nilai >= 55) {
        grade = "C";
    } else {
        grade = "D (REMEDIAL)";
    }

    cout << "Nilai "  << nilai << " = Grade " << grade << endl;

    return 0;
}