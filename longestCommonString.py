string1 = 'afapp'
string2 = 'agapp'

                    
def lcs(s1, s2):
    length1 = len(s1)
    length2 = len(s2)

    col = length1+1
    row = length2+1
    matchMatrix = [[0]*col for i in range(row)]

    longest, x_longest = 0, 0
    for x in range(1, col):
        for y in range(1, row):
            if s1[x - 1] == s2[y - 1]:
                matchMatrix[x][y] = matchMatrix[x - 1][y - 1] + 1
                if matchMatrix[x][y] > longest:
                    longest = matchMatrix[x][y]
                    x_longest = x
            else:
                matchMatrix[x][y] = 0
    return s1[x_longest - longest: x_longest]
                
print(lcs(string1, string2))




