#include<iostream>
#include<vector>
#include<algorithm>   // <-- needed for sort
using namespace std;

struct Jobs{
    int id;
    int deadline;
    int profit;
};

bool comp(Jobs j1, Jobs j2){
    return j1.profit > j2.profit;   // sort by profit (descending)
}

int main(){
    int n;
    cin >> n;

    Jobs arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i].id >> arr[i].deadline >> arr[i].profit;
    }

    // 1. Sort jobs by profit
    sort(arr, arr + n, comp);

    // 2. Find max deadline
    int maxdeadline = 0;
    for(int i = 0; i < n; i++){
        if(arr[i].deadline > maxdeadline){
            maxdeadline = arr[i].deadline;
        }
    }

    // 3. Create hash/slot array
    vector<int> hash(maxdeadline + 1, -1);

    int cntprofit = 0;
    int jobsdone = 0;

    // 4. Try to schedule jobs
    for(int i = 0; i < n; i++){
        for(int j = arr[i].deadline; j > 0; j--){
            if(hash[j] == -1){      // free slot available
                hash[j] = arr[i].id;
                cntprofit += arr[i].profit;
                jobsdone++;
                break;
            }
        }
    }

    // 5. Output result
    cout << jobsdone << " " << cntprofit << endl;

    return 0;
}
