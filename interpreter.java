public int interpret(int value, String[] commands, int[] args) {
  
  int result = value;
  int argsCounter = 0;
  for (String s : commands){
    if (argsCounter == args.length){
      return -1;
    }
    if (s == "+"){
      result += args[argsCounter];
    } else if (s == "-"){
      result -= args[argsCounter];
    } else if (s == "*"){
      result *= args[argsCounter];
    } else {
      return -1;
    }
    argsCounter++;
  }
  return result;
}
