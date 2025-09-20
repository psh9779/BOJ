#include <iostream>
#include <string>
#include <algorithm> // sort()
using namespace std;

bool compare(const pair<char, int> a, const pair<char, int> b)
{
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string input;
        getline(cin, input);

        pair<char, int> alphabet[26] = {{0, 0}};
        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == ' ')
                continue;
            alphabet[input[i] - 'a'].first = input[i];
            alphabet[input[i] - 'a'].second++;
        }
        sort(alphabet, alphabet + 26, compare); // 빈도수가 큰것부터 내림차순으로 정렬되도록

        if (alphabet[0].second != alphabet[1].second)
            cout << alphabet[0].first << '\n';
        else
            cout << "?\n";
    }

    return 0;
}