#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(){ 
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    string text = "";
    srand(time(0));
    int x = rand()%9;
    if (x == 0)
    {
        text = "A";
    }else if (x == 1)
    {
        text = "B+";
    }else if (x == 2)
    {
        text = "B";
    }else if (x == 3)
    {
        text = "C+";
    }else if (x == 4)
    {
        text = "C";
    }else if (x == 5)
    {
        text = "D+";
    }else if (x == 6)
    {
        text = "D";
    }else if (x == 7)
    {
        text = "F";
    }else{
        text = "W";
    }
    cout << "You will get "<< text <<" in this 261102.";
    return 0;
}
