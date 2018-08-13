public Map<String, Integer> word0(String[] strings) {
  Map<String, Integer> mmap = new HashMap<String, Integer>();
  for (String word : strings){
    if (mmap.containsKey(word) == false){
      mmap.put(word, 0);
    }
  }
  return mmap;
}