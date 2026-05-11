#include <bits/stdc++.h>

using namespace std;

struct Transaction
{
    string sender, receiver;
    double amount;
    long time;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<Transaction> trans(n);

    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);

        stringstream ss(str);
        ss >> trans[i].sender >> trans[i].receiver >> trans[i].amount >> trans[i].time;
    }

    map<tuple<string, string, double>, vector<pair<int, int>>> mp;

    for (int i = 0; i < trans.size(); i++)
    {
        auto tp = make_tuple(trans[i].sender, trans[i].receiver, trans[i].amount);
        mp[tp].push_back({trans[i].time, i});
    }

    vector<bool> fraud(n, false);

    for (auto &it : mp)
    {
        auto &vec = it.second;
        sort(vec.begin(), vec.end());

        for (int i = 0; i < vec.size() - 1; i++)
        {
            if (vec[i + 1].first - vec[i].first <= 60)
            {
                fraud[vec[i].second] = true;
                fraud[vec[i + 1].second] = true;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (fraud[i])
        {
            cout << trans[i].sender << " " << trans[i].receiver << " " << trans[i].amount << " " << trans[i].time << endl;
        }
    }
}
