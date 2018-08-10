#!/usr/bin/python -tt
# Author:         Matthias Herrmann
# Date:           09.08.2018
# Description:    
""" Given a string S and a set of words D, find the longest word in D that is a subsequence of S.
    Word W is a subsequence of S if some number of characters, possibly zero, can be deleted from S to form W, without reordering the remaining characters.

    Note: D can appear in any format (list, hash table, prefix tree, etc. """
    
S = 'abpppleee'
D = ["able", "ale", "apple", "bale", "kangaroo"]
 
def dbg(text):
  #print "DEBUG: " + text
  return 0
 
def find_longest_word_in_dict(S, list_of_words):
  max_length = 0
  longest_word = ""
  #Sort the list backwards (starting with the longest word)
  list_of_words.sort(key = len, reverse = True)
  print list_of_words
  for list_word in list_of_words:   
    dbg("NEW WORD: " + list_word)  
    index = 0
    index_in_s = 0
    if len(list_word) <= max_length:
      #Check not needed since the length of the current word is smaller than my already found max
      continue
    for character_in_list_word in list_word:      
      max_index_in_S = len(S)
      while index_in_s < max_index_in_S:
        character_in_s = S[index_in_s]
        index_in_s = index_in_s + 1
        dbg("Comparing " + character_in_s + " of " + S + " with " + character_in_list_word + " of " + list_word)
        if character_in_s == character_in_list_word:
          break
        else:
          dbg("Skipped character " + character_in_s)  
      else:
        dbg("Did not find any character in " + S + " to match the current character " + character_in_list_word + " in " + list_word)
        break
    else:
      if max_length < len(list_word):
        max_length = len(list_word)
        longest_word = list_word
        dbg("Found new word: " + list_word + "(New length: " + str(max_length) + ")")
  return longest_word   
         
     
print "The longest word is \"%s\"" % find_longest_word_in_dict(S,D)

