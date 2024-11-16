// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p = {2,3};
    cout << p.first << p.second << endl;
    
    pair<int, pair<int, int>> p2 = {2, {4,5}};
    cout   << p2.second.second << " " << p2.second.first << endl;
    
    pair<int, int> arr[] = {{2,3} , {4,5} , {7,5}, {8,5}};
    cout << arr[3].first;

    return 0;
}