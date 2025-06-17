#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> v = {
        "a",
        "b",
        "c",
        "d",
        "e"
        };

    for(string s : v) {
        cout << s << ' ';
    }
    cout << endl;


    for_each(v.begin(), v.end(), [](string s){
             cout << s;
             });
    cout << endl;
    return 0;
}
