#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (auto& now : a) cin >> now;
    int sum = 0;
    for (auto now : a) sum += now;
    cout << sum << "\n";
}
