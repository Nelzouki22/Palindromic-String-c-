#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& s) {
    string cleaned;
    // إزالة المسافات وتحويل السلسلة إلى أحرف صغيرة
    for (char c : s) {
        if (c != ' ') {
            cleaned += tolower(c);
        }
    }
    // التحقق من كون السلسلة باليندروم
    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());
    return cleaned == reversed;
}

int main() {
    string inputString;
    // قراءة السلسلة النصية من المستخدم
    getline(cin, inputString);

    // التحقق من كون السلسلة باليندروم وطباعة النتيجة
    if (isPalindrome(inputString)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
