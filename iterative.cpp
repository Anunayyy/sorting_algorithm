void insertionSort(vector<int> &nums) {
	int sortedInd, unsortedInd, key, size = nums.size();
	if (size <= 1) return;
	for (unsortedInd = 1; unsortedInd < size; unsortedInd++) {
		key = nums[unsortedInd], sortedInd = unsortedInd;
		while (--sortedInd >= 0 and key < nums[sortedInd])
			nums[sortedInd + 1] = nums[sortedInd];
		nums[sortedInd + 1] = key;
	}
}