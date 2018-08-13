public boolean makeBricks(int small, int big, int goal) {
  int remainder = 0;
  if (goal >= big*5){
    remainder = goal - 5 * big;
  } else {
    remainder = goal % 5;
  }
  if (small >= remainder){
      return true;
    } else {
      return false;
    }
}
