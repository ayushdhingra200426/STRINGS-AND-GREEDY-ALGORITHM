#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

struct Item {
    int value;
    int weight;
};

class Solution {
public:
    static bool comp(Item a, Item b) {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1 > r2;
    }

    double fractionalKnap(int W, Item arr[], int n) {
        sort(arr, arr + n, comp);
        double totalValue = 0.0;

        for (int i = 0; i < n; i++) {
            if (arr[i].weight <= W) {
                totalValue += arr[i].value;
                W -= arr[i].weight;
            } else {
                totalValue += ((double)arr[i].value / (double)arr[i].weight) * W;
                break;
            }
        }
        return totalValue;
    }
};

int main() {
    int n = 3, weight = 50;
    Item arr[] = {{100, 20}, {60, 10}, {120, 30}};
    Solution obj;
    double ans = obj.fractionalKnap(weight, arr, n);
    cout << "The maximum value is " << fixed << setprecision(2) << ans;
    return 0;
}
