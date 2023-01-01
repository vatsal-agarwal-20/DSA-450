#include <iostream>
#include <bits/stdc++.h>
#define MAX 256
using namespace std;

bool compare(int text[], int pattern[])
{
    for (int i = 0; i < 256; i++)
    {
        if (text[i] != pattern[i])
            return false;
    }
    return true;
}
bool search(char *text, char *pattern)
{
    int m = strlen(text);
    int n = strlen(pattern);

    if (m > n)
        return false;

    int a1[MAX] = {0};
    int a2[MAX] = {0};

    for (int i = 0; i < m; i++)
    {
        a1[text[i]]++;
        a2[pattern[i]]++;
    }

    for (int i = m; i < n; i++)
    {
        if (compare(a1, a2))
            return true;

        a2[pattern[i]]++;

        a2[pattern[i - m]]--;
    }
    if (compare(a1, a2))
        return true;

    return false;
}
int main()
{
    char text[] = "ABCD";
    char pattern[] = "ABDHLBDJBKJEWBLK";

    if (search(text, pattern))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}