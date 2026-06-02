#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// Function to calculate Stock Span
void StockSpan(vector<int> stock, vector<int> span)
{
    stack<int> s;   // Stack stores indices of stock prices

    // First day's span is always 1
    s.push(0);
    span[0] = 1;

    // Traverse remaining stock prices
    for(int i = 1; i < stock.size(); i++)
    {
        int currPrice = stock[i];

        // Remove all previous prices that are
        // smaller than or equal to current price
        while(!s.empty() && stock[s.top()] <= currPrice)
        {
            s.pop();
        }

        // If stack becomes empty,
        // current price is highest so far
        if(s.empty())
        {
            span[i] = i + 1;
        }
        else
        {
            // Index of previous greater price
            int prevHigh = s.top();

            // Calculate span
            span[i] = i - prevHigh;
        }

        // Push current index into stack
        s.push(i);
    }

    // Print span array
    for(int i = 0; i < span.size(); i++)
    {
        cout << span[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Stock prices
    vector<int> stock = {100, 80, 60, 70, 60, 85, 100};

    // Span array initialized with 0
    vector<int> span = {0, 0, 0, 0, 0, 0, 0};

    // Function call
    StockSpan(stock, span);

    return 0;
}