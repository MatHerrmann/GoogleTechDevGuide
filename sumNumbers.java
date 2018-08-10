public int sumNumbers(String str) {
  int sum = 0;
  int indexStartNumber = -1, indexEndNumber = -1;
  
  for (int i = 0; i < str.length(); ++i){
    if (true == Character.isDigit(str.charAt(i))){
      
      // Check if this is the first digit of the number (which can have more than one digit)
      if (-1 == indexStartNumber){
        
        // First digit
        indexStartNumber = i;
      }
    } else{
      if (-1 != indexStartNumber){
        sum += Integer.parseInt(str.substring(indexStartNumber, i));  
        
        // Reset condition for number detection
        indexStartNumber = -1;
      }
    }
  }
  
  // Check if there is a number at the end of the string
  if (-1 != indexStartNumber )
    sum += Integer.parseInt(str.substring(indexStartNumber, str.length()));  
  return sum;
}