#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100
using namespace std;

int main() {
    vector<int> math;
    vector<int> english;
    vector<int> bothpassTmp;
    vector<int> bothpassTrue;
    vector<int> num{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "請輸入數學及格者(限十人)";
    for (int i = 0; i < 10; i++) {
        cin >> math.at(i);
    }
    cout << "請輸入英文及格者(限十人)";
    for (int i = 0; i < 10; i++) {
        cin >> english.at(i);
    }
    sort(math.begin(), math.end());
    sort(english.begin(), english.end());
    for(auto i : num) {
        auto it = find(math.begin(), math.end(), i);
        auto it1 = find(english.begin(), english.end(), i);
        if (it != math.end() and it1 != english.end()) {
            bothpassTrue.push_back(i);
        }
    }
    for(auto i : bothpassTrue) {
        cout << i;
    }
}
//https://repl.it/@papayaistrash/ShockedEthicalTree#main.cpp
