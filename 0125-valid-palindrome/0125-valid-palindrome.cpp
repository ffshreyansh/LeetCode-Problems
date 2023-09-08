class Solution {
private:
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }
public:
    bool isPalindrome(string s) {
      //remove unanted characters
        string temp="";
        for(int i=0; i<=s.length();i++){
            if(valid(s[i])){
                temp.push_back(tolower(s[i]));
            }
        }
        cout<<temp;
        //convert in lowercase
        //check palindrome
        int a=0;
        int b=temp.length()-1;
        while(a<b){
            if(temp[a]!=temp[b])
                return false;
            a++;
            b--;
        }
        return true;
    }
};