#include <iostream>
using namespace std;

// Don't work with trailing spaces
// int main() {
//     int n;
//     cin >> n;

//     // Top half (including the middle line)
//     for (int i = 0; i <= n; i++) {
//         // Leading spaces
//         for (int j = 0; j < n - i; j++) {
//             cout << "  "; // 2 spaces for alignment
//         }

//         // Increasing numbers
//         for (int j = 0; j <= i; j++) {
//             cout << j ;
//             if(j!= i+1){
//                 cout << " ";
//             }
//         }

//         // Decreasing numbers
//         for (int j = i - 1; j >= 0; j--) {
//             cout << j;
//             if(j!= 0){
//                 cout << " ";
//             }
//         }

//         cout << endl;
//     }

//     // Bottom half
//     for (int i = n - 1; i >= 0; i--) {
//         // Leading spaces
//         for (int j = 0; j < n - i; j++) {
//             cout << "  ";
//         }

//         for (int j = 0; j <= i; j++) {
//             cout << j ;
//             if(j!= i+1){
//                 cout << " ";
//             }
//         }

//         // Decreasing numbers
//         for (int j = i - 1; j >= 0; j--) {
//             cout << j ;
//             if(j!= 0){
//                 cout << " ";
//             }
//         }

//         cout << endl;
//     }

//     return 0;
// }

///Works with trailing spaces :

//4027858   Jul 5, 2013 8:37:21 PM	fuwutu	 118B - Present from Lena	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = -n; row <= n; ++row)
    {
        int top = n - abs(row);
        for (int i = 0; i < abs(row); ++i)
        {
            cout << "  ";
        }
        for (int i = 0; i < top; ++i)
        {
            cout << i << " ";
        }
        for (int i = top; i > 0; --i)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
    }
    return 0;
}