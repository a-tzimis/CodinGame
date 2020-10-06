#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // game loop
    while (1) {
        int max=0;
        int maxindex=0;
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH; cin.ignore();
            if(mountainH > max){
                max= mountainH;
                maxindex=i;
            }
        }
        cout << maxindex << endl; // The index of the mountain to fire on.
    }
}