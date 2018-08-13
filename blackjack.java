public int blackjack(int a, int b) {
  int diffA = 21 -a;
  int diffB = 21 -b;
  
  if (diffA < 0 && diffB >= 0){
    return b;
  } else if (diffA >= 0 && diffB < 0){
    return a;
  } else if (diffA >= 0 && diffB >= 0){
    return (diffA < diffB) ? a : b;
  } else {
    return 0;
  }
}
