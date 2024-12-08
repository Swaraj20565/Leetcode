class Solution {
public:
    int firstUniqChar(string s) {
        unordered_set<char> ss;
        unordered_set<char> sss;
        char c;
        int num;
        bool flag = false;
        int n = s.length();
        if (n == 1) {
            num = 0;

        } else {

            for (int i = 0; i < n; i++) {
                if (ss.find(s[i]) != ss.end()) {
                    sss.insert(s[i]);
                } else {
                    ss.insert(s[i]);
                }
            }
            cout << endl;

            // for (auto x : ss) {
            //     cout << x << " ";
            // }

            for (int i = 0; i < n; i++) {
                flag = false;

                for (auto x : sss) {

                    if (s[i] == x) {
                        cout << endl;

                        flag = true;

                    } else {
                    }
                }
                if (flag == true and i != n - 1) {

                }
                else if (flag == true and i == n - 1) {
                    cout<<s[i]<<endl;
                    num = -1;
                }
                else if (flag == false and i == n - 1) {
                    num = n-1;
                }
                 else {

                    cout << i;
                    num = i;
                    break;
                }
            }
        }
        cout << num << endl;
        return num;
    }
};