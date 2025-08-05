// Problem: 125. Valid Palindrome
// Link: https://leetcode.com/problems/valid-palindrome/description/
// Difficulty: Easy
// Topic: String
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:

bool valid(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ) return 1;
    return 0;
}

char isLower(char ch){
	if(ch >= 'a' && ch <= 'z') return ch;
	char temp = ch - 'A' + 'a';
	return temp;
}

bool duplicateString(string s){
    string temp = "";
    for(int i = 0; i < s.length(); i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    for(int i = 0; i<temp.length(); i++){
        temp[i] = isLower(temp[i]);
    }
    return checkPalindrome(temp);
}

bool checkPalindrome(string temp){
	int start = 0;
	int end = temp.size() - 1;
	while(start<end){
		
		if(temp[start++] != temp[end--]) return 0;
	}
	return 1;
}

bool isPalindrome(string s) {
    return duplicateString(s);
}
};

