public boolean canBalance(int[] nums) {
  int sumLeft = 0;
  int sumRight = 0;
  int i = 0;
  int j = nums.length - 1;
  do{
    if (sumLeft < sumRight){
      sumLeft += nums[i];
      ++i;
    } else if (sumLeft > sumRight){
      sumRight += nums[j];
      --j;
    } else {
      if (i == j){
        return false;
      }
      sumLeft += nums[i];
      sumRight += nums[j];
      ++i;
      --j;
    }
  }while (i <= j);
  
  if (sumLeft == sumRight){
    return true;
  } else{
    return false;
  }
}