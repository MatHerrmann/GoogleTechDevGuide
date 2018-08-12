int[] sort(int[] a) {
  //HashMap<int, int> returnValueHashMap = new HashMap<int, int>();
  /* This is how to declare HashMap */
      HashMap<Integer, Integer> returnValueHashMap = new HashMap<Integer, Integer>();
  for (int i : a){
    if (returnValueHashMap.containsKey(i) == false){
      returnValueHashMap.put(i, 1);
    }
  }
  Integer[] returnValueArrayInteger =  returnValueHashMap.keySet().toArray(new Integer[0]);
  int [] returnValueArrayInt = new int[returnValueArrayInteger.length];
  for (int i = 0; i < returnValueArrayInteger.length; ++i){
    returnValueArrayInt[i] = returnValueArrayInteger[i];
  }
  return returnValueArrayInt;
}
