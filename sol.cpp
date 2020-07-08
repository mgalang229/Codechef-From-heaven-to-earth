#include <bits/stdc++.h>

using namespace std;

void test_case() {
	float n, v1, v2;
	cin >> n >> v1 >> v2;
	float sl = sqrt(2) * n;
	float st = sl / v1;
	float et = (2 * n) / v2;
	if(st < et) cout << "Stairs";
	else cout << "Elevator";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
	return 0;
}
