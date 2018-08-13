public Map<String, Integer> wordLen(String[] strings) {
  Map<String, Integer> mmap = new HashMap<String, Integer>();
  for (String word : strings){
    if (mmap.containsKey(word) == false){
      mmap.put(word, word.length());
    }
  }
  return mmap;
}