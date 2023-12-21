#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
void helper(){
}
int gcd(int a, int b) 
{ 
    // Find Minimum of a and b 
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
  
    // Return gcd of a and b 
    return result; 
} 

int query(int a) {
    cout << "? " << a << endl;
    int result;
    cin >> result;
    return result;
}

void find_secret_number() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        // First query
        int result_1 = query(1000000000);
        int result_2 = query(4);

        // Third query to find gcd(a, x)
        int result_3 = query(result_1);

        // Calculate lcm(a, x)
        int lcm_ax = (result_1 * result_2) / gcd(result_1, result_2);

        // Calculate x
        int x = (result_3 * 2) / (1 + lcm_ax);

        // Final query
        int result_final = query(x);

        if (result_final == 0) {
            cout << "! " << x << endl;
            break;
        }
    }
}

int main() {
    // Call the function to find the secret number
    find_secret_number();

    return 0;
}