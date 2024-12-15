#include <iostream>
#include <cstring>
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z') {
            counts[c - 'a']++;
        }
    }
}

int main() {
    char s[1000];
    int counts[26];
    cout << "请输入一行字符: ";
    cin.getline(s, 1000);
    count(s, counts);
    cout << "字符数:\n";
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            cout << char('a' + i) << ": " << counts[i] << endl;
        }
    }
    return 0;
}