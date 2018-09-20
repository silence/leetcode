#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string J,string S) {
        bool map[256] = {false};
        for (auto i : J){
            cout << i <<": "<< int(i) << endl;
            map[i] = true;
        }
        int cnt=0;
        for (auto c : S) {
            if (map[c])  cnt++;
        }
        return cnt;
    }
};

int main(void) {
    Solution solution;
    int value = solution.numJewelsInStones("ui", "uuuio");
    cout << value << endl;
}

