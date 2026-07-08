t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    mod_value = a[0]
    mod_count=0
    mod_list=[]
    
    for i in a:
        if mod_value==i:
            mod_count+=1
        else:
            mod_value=i
            mod_list.append(mod_count)
            mod_count=1
    mod_list.append(mod_count)
 
    print(len(a) - max(mod_list))