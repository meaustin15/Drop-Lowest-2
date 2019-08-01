#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void getScore(int  scores[], int  size);
int findLowest(int scores[], int size);
double calcAvg(int scores[], int size, int low);
void display(int  scores[], int  size, int  low, double  average);

int main()
{
    int score[4], low;
    double average;

    getScore(score, 4);


    low = findLowest(score, 4);
    average = calcAvg(score, 4, low);

    display(score, 4, low, average);

    return 0;
}

void getScore(int scores[], int size){
    int x;

    for( x = 0; x < size; x++){
        cout << "Enter Score: ";
       cin >> scores[x];
    }
}



int findLowest(int scores[], int size){
   int x, holder = scores[0];
    for (x = 1; x < size; x++){
        if (scores[x] < holder)
        holder = scores[x];
    }


    return holder;

}

double calcAvg(int scores[], int size, int low){
    int x, tot=0;

    for (x = 0; x<size; x++){
    tot+=scores[x];
    }
    return (tot-low)/(size-1.0);

}



void display(int scores[], int size, int low, double average)
{
    int x;

    cout << " " << endl;

    cout << "score total: "<< average * 3 + 4 << endl;
    cout << "score lowest: " << low << endl;
    cout << "score average: " << average << endl;



}
