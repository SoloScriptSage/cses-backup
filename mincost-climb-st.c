#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        pair<int, string> alph[] = {
            {0, ""},
            {1, ""},
            {2, "abc"},
            {3, "def"},
            {4, "ghi"},
            {5, "jkl"},
            {6, "mno"},
            {7, "pqrs"},
            {8, "tuv"},
            {9, "wxyz"}
        };

        vector<string> comb;

        int a[4] = {1, 1, 1, 1};
        int n = digits.size();

        for (int i = n - 1; i >= 0; --i)
            a[i] = alph[(int)digits[i] - '0'].second.size();

        for (int l1 = 0; l1 < a[0]; ++l1) {
            for (int l2 = 0; l2 < a[1]; ++l2) {
                for (int l3 = 0; l3 < a[2]; ++l3) {
                    for (int l4 = 0; l4 < a[3]; ++l4) {
                        combi += alph[(int)digits[3]-'0'].second[l4];
                        if(n>1) combi += alph[(int)digits[2]-'0'].second[l3];
                        if(n>2) combi += alph[(int)digits[1]-'0'].second[l2];
                        if(n>3) combi += alph[(int)digits[0]-'0'].second[l1];
                        comb.push_back(combi);
                    }
                }
            }
        }

        return comb;
    }
};
