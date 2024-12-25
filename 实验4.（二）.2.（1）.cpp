#include<iostream>
using namespace std;
int indexof(const char *s1, const char*s2)
{
    if (*s1 == '\0' || *s2 == '\0')
    {
        return -1;
    }
    for (int i = 0; s2[i] != '\0'; i++)
    {
        int j = 0;
        while (s1[j] != '\0' && s2[i + j] == s1[j])
        {
            j++;
        }
        if (s1[j] == '\0')
        {
            return i;
        }
        return -1;
    }
}
int main()
{
    char s1[100];
    char s2[100];
    cout << "ÇëÊäÈë×Ö·û´®1£º";
    cin >> s1;
    cout << "ÇëÊäÈë×Ö·û´®2£º";
    cin >> s2;
    int   result = indexof(s1, s2);
    cout << result;
}