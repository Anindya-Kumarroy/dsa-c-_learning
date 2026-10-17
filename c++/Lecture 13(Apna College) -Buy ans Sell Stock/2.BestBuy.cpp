#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main()
{
    vector<int> price = {6, 7, 8, 4, 7, 1, 2};
    int BestBuy = price[0];
    int MaxProfit = 0;
    int BestSell = price[0];

    for(int i = 1; i < price.size(); i++)
    {
       
        if(price[i] < BestBuy) {
            BestBuy = price[i];
        }
        if(price[i] - BestBuy > MaxProfit) {
            MaxProfit = price[i] - BestBuy;
            BestSell = price[i];
        }
    }
    cout << "Best Buy price: " << (BestSell - MaxProfit) << endl; 
    cout << "Best Sell price: " << BestSell << endl;
    cout << "Max Profit: " << MaxProfit << endl;

    return 0;
}