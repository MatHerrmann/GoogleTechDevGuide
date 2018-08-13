public int min2(int a, int b){
  return (a < b) ? a : b;
}

public int max2(int a, int b){
  return (a > b) ? a : b;
}

public boolean evenlySpaced(int a, int b, int c) {
  int small, medium, large;
  
  if (a < b && a < c){
    small = a;
    medium = min2(b,c);
    large = max2(b,c);
  } else if (b < a && b < c) {
    small = b;
    medium = min2(a,c);
    large = max2(a,c);
  } else {
    small = c;
    medium = min2(a,b);
    large = max2(a,b);
  }
  if ((large - medium) == (medium - small)){
    return true;
  } else {
    return false;
  }
}
