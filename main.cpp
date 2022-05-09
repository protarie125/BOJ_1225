#include <iostream>
#include <string>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string a, b;
	cin >> a >> b;

	const auto& n = static_cast<int>(a.length());
	const auto& m = static_cast<int>(b.length());

	auto sum = ll{ 0 };
	for (int i = 0; i < n; ++i) {
		const auto& v = a[i] - '0';

		for (int j = 0; j < m; ++j) {
			const auto& w = b[j] - '0';

			sum += v * w;
		}
	}

	cout << sum;

	return 0;
}