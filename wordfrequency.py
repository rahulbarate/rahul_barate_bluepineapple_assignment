wordList = input("Enter something : ").split(" ")
freq = {}
for word in wordList:
    if word in freq.keys():
        freq[word] += 1
    else:
        freq[word] = 1

print(freq)
