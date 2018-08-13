public Map<String, Integer> wordCount(String[] strings) {
  Map<String, Integer> mmap = new HashMap<String, Integer>();
  for (String word : strings){
    if (mmap.containsKey(word) == false){
      mmap.put(word, 1);
    }else {
      Integer prevValue = mmap.get(word);
      prevValue += 1;
      mmap.put(word, prevValue);
    }
  }
  return mmap;
}