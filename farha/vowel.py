def vowelChecker(inputChar):   
    if inputChar == "a" or inputChar == "e" or inputChar == "i" or inputChar =="o" or inputChar =="u":
        return True
    else:
        return False

print ("Enter the letter to check")
Char = input("What's your letter?:");
print Char;

if vowelChecker(Char) == True:
    print("The enterted letter is Vowel")
else:
    print("The enterted letter is not Vowel")






