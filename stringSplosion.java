public String stringSplosion(String str) {
  int lengthInputString = str.length();
  int lengthReturnString = (lengthInputString * (lengthInputString + 1)) / 2;
  
  // No need to allocate an extra char since Strings are dedicated objects in Java (not like C where Strings are basically char arrays -> no \0 needed
  char[] charArrayReturnValue = new char[lengthReturnString];
  
  for (int i = 0; i < lengthInputString; ++i){
    int startIndexReturnValue = i == 0 ? 0 : ((i + 1) * i) / 2;
    for (int j = 0; j < (i + 1); ++j){
      charArrayReturnValue[startIndexReturnValue + j] = str.charAt(j);
    }
  };
  return new String(charArrayReturnValue);
}