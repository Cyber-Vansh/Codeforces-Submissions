t = int(input())
for _ in range(t):
    n = int(input())
    cards = input()
 
    if n==2:
        if cards[0]=="A":
            print("Alice")
        else:
            print("Bob")
    else:
        if cards[0]==cards[-1]=="A":
            print("Alice")
        elif cards[-1]==cards[-2]=="A":
            print("Alice")
        elif list(cards).count("B")==1:
            print("Alice")
        else:
            print("Bob")