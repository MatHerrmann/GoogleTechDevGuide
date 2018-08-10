public String withoutString(String base, String remove) {
  
  if (true == base.isEmpty()){
    System.out.print("Base string is empty");
  }
  
  int startIndex = 0;
  String baseLowerCase = base.toLowerCase();
  String removeLowerCase = remove.toLowerCase();
  StringBuffer sb = new StringBuffer(base.length());
  int indexFound = baseLowerCase.indexOf(removeLowerCase, startIndex);
  while (-1 != indexFound){
    sb.append(base.substring(startIndex, indexFound));
    startIndex = indexFound + remove.length();
    indexFound = baseLowerCase.indexOf(removeLowerCase, startIndex);
  }
  sb.append(base.substring(startIndex, base.length()));
  return sb.toString();
}