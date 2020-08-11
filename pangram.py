#!/usr/bin/env python
# coding: utf-8

# In[6]:


#check whether a string is a pangram or not

alphabet = "abcdefghijklmnopqrstuvwxyz"

def pangram_or_not(input_string: str) -> bool:
    return not set(alphabet) - set(input_string.lower())

result = pangram_or_not("The quick brown fox jumps over a lazy dog")

if result:
    print("The sentence is a pangram.")
else:
    print("The sentence is not a pangram.")

    


# In[ ]:




