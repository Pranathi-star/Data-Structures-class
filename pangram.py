#check whether a string is a pangram or not

alphabet = "abcdefghijklmnopqrstuvwxyz"

def pangram_or_not(input_string):
    return not set(alphabet) - set(input_string.lower())

input_string = input().strip()
result = pangram_or_not(input_string)

if result:
    print("The sentence is a pangram.")
else:
    print("The sentence is not a pangram.")




