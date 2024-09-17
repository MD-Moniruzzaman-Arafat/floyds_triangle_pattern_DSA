// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int number = 1;
//     cout << "number of n : ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << number << " ";
//             number++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}