#include <iostream>
// #include<stdlib.h>
#include <unistd.h>
using namespace std;
int main()
{
    int hr = 0, min = 0, sec = 0;
    system("cls");
    cout << "Enter Hour ( hr ): ";
    cin >> hr;
    cout << "\nEnter Minute ( min ): ";
    cin >> min;

    while (true)
    {
        system("cls");
        cout << "\n\t\t*************";
        cout << "\n\t\t  " << hr << " : " << min << " : " << sec << endl;
        cout << "\t\t*************";
        sec++;
        if (sec >= 60)
        {
            min++;
            sec = 0;
            if (min >= 60)
            {
                hr++;
                min = 0;
                if (hr >= 23)
                {
                    hr = 0;
                }
            }
        }
        sleep(1);
    }
    return 0;
}