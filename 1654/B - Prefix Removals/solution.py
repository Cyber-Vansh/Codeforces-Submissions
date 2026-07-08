t = int(input())
for i in range(t):
    s = input()
 
    dic = {}
 
    for i in range(len(s)):
        if s[i] in dic:
            dic[s[i]] += 1
        else:
            dic[s[i]] = 1
 
    lst = list(s)
    ans = ""
 
    for i in range(len(lst)):
        if dic[lst[i]] > 1:
            dic[lst[i]] -= 1
        else:
            ans = lst[i:]
            break
 
    for i in range(len(ans)):
        print(ans[i],end="")
    print()