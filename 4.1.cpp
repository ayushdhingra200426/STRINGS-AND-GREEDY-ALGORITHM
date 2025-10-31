#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string LongCommon(vector<string>& str) {
    int n = str.size();
    string s1 = str[0];
    int ans_len = s1.size();

    for (int i = 1; i < n; i++) {
        int j = 0;
        while (j < ans_len && j < str[i].size() && s1[j] == str[i][j]) {
            j++;
        }
        ans_len = j; // update to actual common prefix length
    }

    string ans = s1.substr(0, ans_len);
    return ans;
}

int main() {
    int n;
    cout << "enter the size of strings you want to insert" << endl;
    cin >> n;
    vector<string> str(n);

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    cout << "Longest Common prefix is " << LongCommon(str) << endl;
}
