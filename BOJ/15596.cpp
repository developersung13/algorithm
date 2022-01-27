#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
    for (int k = 0; k < a.size(); k++)
		ans += a[k];
	return ans;
}