
#include <iostream>
#include <vector>


using namespace std;
int result(int hello)
{
    return (hello / 10 + (hello % 10));
}
int main()
{
    int  n;
    std::cin >> n;
    bool sh = false;
    for (int i = 0 ; i < n ;i++)
    {
        int time_intervals ;
        cin >> time_intervals;
        int oldest;
        int shower_time ; cin >> shower_time;
        int day_time ; cin >> day_time;
        // sh = false;
        for (int j = 0; j < time_intervals ;j++)
        {
            int one ; cin >> one; 
            int two ; cin >> two;
            if (!j && (one >= shower_time))
            {
                // puts("here");
                // puts ("here we go");exit (0);
                sh = true;
                // break ;
            }
            if ((j == time_intervals - 1) && ((day_time - two) >= shower_time))
            {
                // puts ("here 2");
                sh = true;
                // break;
            }
            if(j && ((one - oldest) >= shower_time))
            {
                // puts ("here 3");
                sh = true;  
                // break ;
            }
            oldest = two;
        }
        if (sh == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        sh = false;
    }
    
}