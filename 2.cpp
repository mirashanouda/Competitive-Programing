#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    //x > 10 --> first + n(x-2) + last
    //print 
    int n;
    cin >> n;

    vector<string> w, out;
    w.resize(n);
    out.resize(n);
    //string* w = new string[n], * out = new string[n];

    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        if (w[i].size() <= 10)
            out[i] = w[i];
        else
            out[i] = w[i][0] + to_string(w[i].size() - 2) + w[i][int(w[i].size()) - 1];
    }
    for (int i = 0; i < n; i++) {
        cout << out[i] << endl;
    }
    return 0;
}