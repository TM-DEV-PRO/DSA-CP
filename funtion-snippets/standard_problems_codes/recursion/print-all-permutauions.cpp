#include <iostream>
#include <string>
using namespace std;

void printAllPermutaions(string str, int left, int right)
{

    if (left == right)
        cout << str << endl;
    else
    {

        for (int i = left; i <= right; i++)
        {

            swap(str[left], str[i]);

            printAllPermutaions(str, left + 1, right);

            swap(str[left], str[i]);
        }
    }
}
int main()
{
    string str;
    cin >> str;
    int str_len = str.size();
    printAllPermutaions(str, 0, str_len - 1);
    return 0;
}
