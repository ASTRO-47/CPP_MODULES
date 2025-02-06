
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
    for (int i =0 ; i < n ;i++)
    {
        int card_1 ;
        int card_2 ;
        int card_3 ;
        int card_4 ;
        cin >> card_1;
        cin >> card_2;
        cin >> card_3;
        cin >> card_4;
        int count  = 0;
        // std::vector<int> result;
        // if (card_1 > card_3 && card_2 > card_4 || (card_2 > card_3 && card_1 > card_4 ))
        //     result.push_back(4);
        int sun_count = 0;
        int sal_count = 0;
        int wins = 0;
        for (int i = 0;i < 4; i++)
        {
            sun_count = 0;
            sal_count  = 0;
            if (card_1 > card_3 && card_2 > card_4)
            wins++;
            
        // Sun plays card_1 vs card_4 and card_2 vs card_3
            if (card_1 > card_4 && card_2 > card_3)
             wins++;
                // sun_count++;

            // if (card_2 > card_3)
            //     sun_count++;

            // if (card_1 > card_3)
            //     sun_count++;
            // if (card_2 > card_4)
            //     sun_count++;

            // if ((card_3 > card_1 && card_4 > card_2) || (card_3 > card_2 && card_4 > card_1))
            //     sal_count++;
            // if (card_4 > card_2)
            //     sal_count++;

            // if (card_3 > card_2)
            //     sal_count++;
            // if (card_4 > card_1)
            //     sal_count++;

            // if (sun_count > sal_count)
            //     wins++;
        }
        cout << wins << endl;
        //     slaivc_count++;
        // if (card_2 > card_4)
        //     sun_count++;
        //  if (card_4 > card_2)
        //     slaivc_count++;
        // cout << count << endl;

    }
}