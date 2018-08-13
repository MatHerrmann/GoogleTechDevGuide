public String collapseDuplicates(String a) {
  Map<Character, Integer> mmap = new HashMap<Character, Integer>();
  StringBuffer sb = new StringBuffer();
  char currentChar = '\u0000';
  
  for (char c : a.toCharArray()){
    if (currentChar !=  c){
      currentChar = c;
      sb.append(c);
    }
  }
  return sb.toString();
}
