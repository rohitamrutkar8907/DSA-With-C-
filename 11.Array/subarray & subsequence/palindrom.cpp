#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isPalindrome(string str) {
    int len = str.length();
    for(int i=0; i<len/2; i++) {
        if(str[i] != str[len-i-1])
            return false;
    }
    return true;
}

vector<string> generatePalindromes(string str) {
    vector<string> palindromes;
    int len = str.length();
    for(int i=0; i<len; i++) {
        for(int j=1; j<=len-i; j++) {
            string sub = str.substr(i, j);
            if(isPalindrome(sub))
                palindromes.push_back(sub);
        }
    }
    return palindromes;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    vector<string> palindromes = generatePalindromes(str);


    cout << "Palindromes: " << endl;
    for(int i=0; i<palindromes.size(); i++) {
        cout << palindromes[i] << endl;
    }
    return 0;
}
