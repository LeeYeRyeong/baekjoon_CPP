﻿#include <iostream>
#include <vector>
using namespace std;

std::vector<int> a, b;

void initialize(std::vector<int> A, std::vector<int> B) {
	a = A;
	b = B;
	return;
}

int answer_question(int i, int j) {
	return a[i] + b[j];
}