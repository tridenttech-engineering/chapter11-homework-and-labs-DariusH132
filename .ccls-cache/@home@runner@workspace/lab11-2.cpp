//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <Darius Haywood> on <4/16/25>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double getAverage(double times[], int numElements){
    double total = 0.0;
    for (int i = 0; i < numElements; i++){
            total += times[i];   
    }
    return total / numElements;
}
double getLowest(double times[], int numElements){
    double lowest = times[0];
    for (int i = 1; i < numElements; i++){
        if (times[i] < lowest){
            lowest = times[i];
        }
    }
    return lowest;
}

int main()
{
    const int numElements = 5;
    double finishTimes[numElements];
    cout << "Enter the finish times for the five runners: \n";
    for (int i = 0; i < numElements; i++){
        cout << "Runner " << i + 1 << ": ";
        cin >> finishTimes[i];
    }
    double averageTime = getAverage(finishTimes, numElements);
    double lowestTime = getLowest(finishTimes, numElements);

    cout << fixed << setprecision(1);
    cout << "Average time: " << averageTime << " seconds\n";
    cout << "Lowest time: " << lowestTime << " seconds\n";
    return 0;
}//end of main function    
