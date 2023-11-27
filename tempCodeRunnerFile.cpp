#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outData;
    string s;

    cout << "Enter a string: ";
    cin >> s;

    int n = 1;

    outData.open("outfile.csv", ios::app);
    outData << s << endl;
    outData << n << endl;

    outData.close();

    system("pause");
    return 0;
}
