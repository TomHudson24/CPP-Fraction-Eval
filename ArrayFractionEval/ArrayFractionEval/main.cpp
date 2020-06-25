#include "PlusMinus.h"
#include <vector>
/*
Given an array of integers, calculate the total num of positive, negative numbers as well as all 0's. Then display them as a fraction of the total.
*/
int main()
{
	PlusMinus function;
	std::vector<int> array = { 5, 3, -1, 0, 7, -4, 0, 4, -50, 0, 0, 0 };

	function.plusMinus(array);
	return 0;
}