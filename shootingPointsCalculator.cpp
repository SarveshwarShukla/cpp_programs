// Program to calculate shooting range points obtained and the average of them
// 30 March 2022

#include <iostream>
using namespace std;

int main()
{
    int numberOfBulletsFired = 0;
    cout << "Enter the number of bullets fired : ";
    cin >> numberOfBulletsFired;

    cout << "Enter the scores" << endl;

    int totalScore = 0;
    float averageScore = 0;
    int temp = 0;

    for (int i = 0; i < numberOfBulletsFired; i++)
    {
        cin >> temp;
        totalScore += temp;
    }
    averageScore = totalScore/float(numberOfBulletsFired);

    cout<<"Total score : "<<totalScore<<endl;
    cout<<"Average score : "<<averageScore<<endl;


    return 0;
}