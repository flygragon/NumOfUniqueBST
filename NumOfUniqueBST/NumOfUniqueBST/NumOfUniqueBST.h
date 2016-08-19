#pragma once
#include<vector>

class NumOfUniqueBST {
public:
	int numOfBSTs(int n =0) {
		if (n == 0) return 0;
		std::vector<int> result(n +1);
		result[0] = 1, result[1] = 1;
		for (int i = 2; i <= n; i++)
			for (int j = 0; j <= i - 1; j++)
				result[i] += result[j] * result[i - 1 - j];
		return result[n];
	}
};