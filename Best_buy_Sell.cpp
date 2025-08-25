#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[7];
    int min_prize = INT_MAX;
    int max_profit = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    cout << "The prize of product on each day :" << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << "day :" << i << endl;
        cout << arr[i] << endl;
    }

    for (int i = 0; i < 7; i++)
    {

        if (arr[i] < min_prize)
        {
            min_prize = arr[i];
            cout << "Stock Bought for prize :" << min_prize << "on day:" << i << endl;
        }
        int profit = arr[i] - min_prize;
        if (profit > max_profit)
        {
            max_profit = profit;
            cout << max_profit << "on day :" << i << endl;
        }
    }

    cout << max_profit << endl;

    return 0;
}
