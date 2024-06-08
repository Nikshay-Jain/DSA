arr = [1,5,6,9,9,8,9,5,2,6,1,0,5,8]
arr.sort()
arr.append(1e9)
freq = []
for k in range((len(arr)-1)):
    m = arr[k]
    if(m!=arr[k+1]):
        freq.append([arr.count(m),m])

p = len(freq)
freq.sort(reverse = True)
for i in range(p):
    for k in range(freq[i][0]):
        print(freq[i][1])