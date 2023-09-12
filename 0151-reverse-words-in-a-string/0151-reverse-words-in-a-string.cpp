class Solution {
public:
 string reverseWords(string s) {
     
            vector<string> a;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word.push_back(s[i]);
        } else {
            if (!word.empty()) {
                a.push_back(word);
                word = "";
            }
        }
    }

    if (!word.empty()) {
        a.push_back(word);
    }

    string reversedString = "";
    for (int i = a.size() - 1; i >= 0; i--) {
        reversedString += a[i];
        if (i > 0) {
            reversedString += ' ';
        }
    }
    return reversedString;

     
    }
};