#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> ans;
    int N = 4;
    
    for (int i = 0; i < N; i++)
    {
        vector<char> temp(N + 1, ' ');

        if (i < N / 2)
        {
            temp[i] = '*';
            temp[N - i] = '*';
        }
        else if (i >= N / 2)
        {
            temp[N / 2] = '*';
        }

        string str(temp.begin(), temp.end());
        ans.push_back(str);
    }
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << endl;
    }

    return 0;
}