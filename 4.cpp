#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string LongCommon(vector<string> &str) {
    sort(str.begin(), str.end());
    string s1 = str[0];
    string s2 = str[str.size() - 1];
    string ans = "";
    int i = 0;
    while (i < s1.size() && i < s2.size()) {
        if (s1[i] == s2[i]) {
            ans += s1[i];
        } else {
            break;
        }
        i++;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the size of strings you want to insert: ";
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    cout << "Longest Common Prefix is " << LongCommon(str) << endl;
    return 0;
}
