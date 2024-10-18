#include <iostream>
#include <vector>
#include <algorithm> 

int main() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    while (q--) {
        int x;
        std::cin >> x;

        auto lower = std::lower_bound(a.begin(), a.end(), x);
        auto upper = std::upper_bound(a.begin(), a.end(), x);

        if (lower != upper) {
            int count = upper - lower; 
            std::cout << "YES " << count << "\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
