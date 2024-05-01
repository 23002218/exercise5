#include <iostream>
#include<cmath>

using namespace std;

double distance(int x1, int y1, int x2, int y2);

int main()
{
      int x1, y1, x2, y2;

    cout << "Enter x and y coordinates of point 1: ";
    cin >> x1 >> y1;

    cout << "Enter x and y coordinates of point 2: ";
    cin >> x2 >> y2;

    cout << "Distance between point 1 and 2: " << distance(x1, y1, x2, y2) <<endl;

    return 0;
}
    double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}





