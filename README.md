# GoogleTechDevGuide

This repository contains all source code that was written during completion of the "Foundations of Programming" course of the Google Tech Developer guide (https://techdevguide.withgoogle.com/paths/foundational/). Two challenges of the course refer to former Google Codingg Interviews, hence there is a subdirectory containing those two implementations. As follows, all coding tasks are briefly explained, along with the programming language which was used for implementation.

<b>StringSplosion:</b>
- A given input string will be expanded in the following way: 
  An input string containing N characters will be parsed and used to generate the output string.
    1. Take the first character and copy it to the output string (copy does not mean hard copy - One can use any optimization used for string copy)
    2. Take the first two characters and append the output string with these two.
    3. Repeat until the whole input string is used to append the resulting string.
- Examples:
    - stringSplosion("Code")  →   "CCoCodCode"
    - stringSplosion("abc")   →   "aababc"
    - stringSplosion("ab")    →   "aab
- Language:   Java    
        
<b>maxSpan:</b>
- Consider the leftmost and righmost appearances of some value in an array. We'll say that the "span" is the number of elements between the two inclusive. A single value has a span of 1. Returns the largest span found in the given array. (Efficiency is not a priority.)
- Examples:
    - maxSpan([1, 2, 1, 1, 3])        →   4
    - maxSpan([1, 4, 2, 1, 4, 1, 4])  →   6
    - maxSpan([1, 4, 2, 1, 4, 4, 4])  →   6
- Language:   Java    
    
<b>withoutString:</b>    
- Given two strings, base and remove, return a version of the base string where all instances of the remove string have been removed (not case sensitive). You may assume that the remove string is length 1 or more. Remove only non-overlapping instances, so with "xxx" removing "xx" leaves "x".
- Examples:
    - withoutString("Hello there", "llo") →   "He there"
    - withoutString("Hello there", "e")   →   "Hllo thr"
    - withoutString("Hello there", "x")   →   "Hello there"
- Language:   Java    
    
<b>sumNumbers:</b>
- Given a string, return the sum of the numbers appearing in the string, ignoring all other characters. A number is a series of 1 or more digit chars in a row. (Note: Character.isDigit(char) tests if a char is one of the chars '0', '1', .. '9'. Integer.parseInt(string) converts a string to an int.)
- Examples:
    - sumNumbers("abc123xyz") →   123
    - sumNumbers("aa11b33")   →   44
    - sumNumbers("7 11")      →   18
- Language:   Java    
    
<b>canBalance:</b>
- Given a non-empty array, return true if there is a place to split the array so that the sum of the numbers on one side is equal to the sum of the numbers on the other side.
- Examples:
    - canBalance([1, 1, 1, 2, 1]) → true
    - canBalance([2, 1, 1, 2, 1]) → false
    - canBalance([10, 10]) → true
- Language:   Java    
    
<b>mapShare:</b>
- Modify and return the given map as follows: if the key "a" has a value, set the key "b" to have that same value. In all cases remove the key "c", leaving the rest of the map unchanged.
- Examples:
    - mapShare({"a": "aaa", "b": "bbb", "c": "ccc"}) → {"a": "aaa", "b": "aaa"}
    - mapShare({"b": "xyz", "c": "ccc"}) → {"b": "xyz"}
    - mapShare({"a": "aaa", "c": "meh", "d": "hi"}) → {"a": "aaa", "b": "aaa", "d": "hi"}
- Language:   Java    

<b>sort:</b>    
- Return an array that contains the sorted values from the input array with duplicates removed.
- Examples:
    - sort([]) → []
    - sort([1]) → [1]
    - sort([1, 1]) → [1]
- Language:   Java    

<b>interpret:</b>
- Write a simple interpreter which understands "+", "-", and "*" operations. Apply the operations in order using command/arg pairs starting with the initial value of `value`. If you encounter an unknown command, return -1.
- Examples:
    - interpret(1, ["+"], [1]) → 2
    - interpret(4, ["-"], [2]) → 2
    - interpret(1, ["+", "*"], [1, 3]) → 6
- Language:   Java    

<b>word0:</b>
- Given an array of strings, return a Map<String, Integer> containing a key for every different string in the array, always with the value 0. For example the string "hello" makes the pair "hello":0. We'll do more complicated counting later, but for this problem the value is simply 0.
- Examples:
    - word0(["a", "b", "a", "b"]) → {"a": 0, "b": 0}
    - word0(["a", "b", "a", "c", "b"]) → {"a": 0, "b": 0, "c": 0}
    - word0(["c", "b", "a"]) → {"a": 0, "b": 0, "c": 0}
- Language:   Java    
    
<b>wordLen:</b>
- Given an array of strings, return a Map<String, Integer> containing a key for every different string in the array, and the value is that string's length.
- Examples:
    - wordLen(["a", "bb", "a", "bb"]) → {"bb": 2, "a": 1}
    - wordLen(["this", "and", "that", "and"]) → {"that": 4, "and": 3, "this": 4}
    - wordLen(["code", "code", "code", "bug"]) → {"code": 4, "bug": 3}
- Language:   Java    
    
<b>pairs:</b>
- Given an array of non-empty strings, create and return a Map<String, String> as follows: for each string add its first character as a key with its last character as the value.
- Examples:
    - pairs(["code", "bug"]) → {"b": "g", "c": "e"}
    - pairs(["man", "moon", "main"]) → {"m": "n"}
    - pairs(["man", "moon", "good", "night"]) → {"g": "d", "m": "n", "n": "t"}
- Language:   Java    
    
<b>wordCount:</b>
- The classic word-count algorithm: given an array of strings, return a Map<String, Integer> with a key for each different string, with the value the number of times that string appears in the array.
- Examples:
    - wordCount(["a", "b", "a", "c", "b"]) → {"a": 2, "b": 2, "c": 1}
    - wordCount(["c", "b", "a"]) → {"a": 1, "b": 1, "c": 1}
    - wordCount(["c", "c", "c", "c"]) → {"c": 4}    
- Language:   Java    
    
<b>encoder:</b>
- Write a function that replaces the words in `raw` with the words in `code_words` such that the first occurrence of each word in `raw` is assigned the first unassigned word in `code_words`.
- Examples:
    - encoder(["a"], ["1", "2", "3", "4"]) → ["1"]
    - encoder(["a", "b"], ["1", "2", "3", "4"]) → ["1", "2"]
    - encoder(["a", "b", "a"], ["1", "2", "3", "4"]) → ["1", "2", "1"]    
- Language:   Java    
    
<b>blackjack:</b>
- Given 2 int values greater than 0, return whichever value is nearest to 21 without going over. Return 0 if they both go over.
- Examples:
    - blackjack(19, 21) → 21
    - blackjack(21, 19) → 21
    - blackjack(19, 22) → 19    
- Language:   Java    
    
<b>evenlySpaced:</b>
- Given three ints, a b c, one of them is small, one is medium and one is large. Return true if the three values are evenly spaced, so the difference between small and medium is the same as the difference between medium and large.
- Examples:
    - evenlySpaced(2, 4, 6) → true
    - evenlySpaced(4, 6, 2) → true
    - evenlySpaced(4, 6, 3) → false
- Language:   Java    
    
<b>collapseDuplicates:</b>
- Fix this duplicate collapsing code: public String collapseDuplicates(String a) { int i = 0; String result = ""; while (i < a.length()) { char ch = a.charAt(i); result += ch; while (a.charAt(i+1) == ch) { i++; } i++; } return result; }
- Examples:
    - collapseDuplicates("a") → "a"
    - collapseDuplicates("aa") → "a"
    - collapseDuplicates("abc") → "abc"    
- Language:   Java    
    
<b>makeBricks:</b>
- We want to make a row of bricks that is goal inches long. We have a number of small bricks (1 inch each) and big bricks (5 inches each). Return true if it is possible to make the goal by choosing from the given bricks. This is a little harder than it looks and can be done without any loops. See also: https://codingbat.com/doc/practice/makebricks-introduction.html 
- Examples:
    - makeBricks(3, 1, 8) → true
    - makeBricks(3, 1, 9) → false
    - makeBricks(3, 2, 10) → true    
- Language:   Java    
    
    