#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    
    double W; // width of the building.
    double H; // height of the building.
    cin >> W >> H; cin.ignore();
    cerr << W << " " << H << endl;
    int N; // maximum number of turns before game over.
    cin >> N; cin.ignore();
    double X0;
    double Y0;
    cin >> X0 >> Y0; cin.ignore();
    double currentpos[2] = {X0,Y0};
    double maxwidth = W, maxheight = H, minwidth=0, minheight=0, availablesteps;
    // game loop
    while (1) {
        string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bombDir; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        
        if(bombDir[0] == 'U'){
            maxheight = currentpos[1];
            availablesteps = ceil((maxheight-minheight) / 2);
            currentpos[1] -= availablesteps;
        }
        else if (bombDir[0] == 'D') {
            minheight = currentpos[1];
            availablesteps = ceil((maxheight-minheight) / 2);
            currentpos[1] += availablesteps;
        }
        if(bombDir[0] == 'R' || bombDir[1] == 'R'){
            minwidth = currentpos[0];
            availablesteps = ceil((maxwidth-minwidth) / 2);
            currentpos[0] += availablesteps; 
        }
        if(bombDir[0] == 'L' || bombDir[1] == 'L'){
            maxwidth = currentpos[0];
            availablesteps = ceil((maxwidth-minwidth) / 2);
            currentpos[0] -= availablesteps; 
        }
    
        // the location of the next window Batman should jump to.
        cout << currentpos[0] << " " << currentpos[1] << endl;
    }
}