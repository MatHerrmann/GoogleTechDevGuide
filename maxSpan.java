public int maxSpan(int[] nums) {
  int maxSpan = 0;
  for (int i = 0; i < nums.length; ++i){
    // Do not need to look further since no bigger maxSpan can be found
    if (maxSpan >= (nums.length - i)){
      break;
    }
    int startNumber = nums[i];
    for (int j = i; j < nums.length; ++j){
      if (startNumber == nums[j] && (j - i + 1 ) > maxSpan) {
        maxSpan = j - i + 1;
      }
    }
  }
  return maxSpan;
}