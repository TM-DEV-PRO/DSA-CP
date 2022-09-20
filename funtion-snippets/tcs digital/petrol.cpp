#include <iostream>

using namespace std;
int main()
{
   int pet, die;

    int A1, B1, C1, D1, E1, A2, B2, C2, D2, E2;
    cin >> A1 >> B1 >> C1 >> D1 >> E1 >> A2 >> B2 >> C2 >> D2 >> E2;
    pet = C1 + (60 * E1) + ((D1 * B1 * 60) / A1);
    die = C2 + (60 * E2) + ((D2 * B2 * 60) / A2);

    string res;
    if (pet <= die)
        res = "petrol";
    else
        res = "diesel";
    cout << res;
    return 0;
}