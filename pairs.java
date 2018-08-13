public Map<String, String> pairs(String[] strings) {
  Map<String, String> mmap = new HashMap<String, String>();
  for (String word: strings){
    mmap.put(Character.toString(word.charAt(0)), Character.toString(word.charAt(word.length() - 1)));
  }
  return mmap;
}