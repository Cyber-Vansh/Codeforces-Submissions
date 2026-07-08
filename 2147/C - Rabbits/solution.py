import   sys
import   builtins as  bi     # using builtins for input instead of direct input()
 
sys.setrecursionlimit(1   <<   25)
 
 
# -------------- Helper Function --------------
def  is_valid( seq ):
    if   len(seq)==1 :  return True
    size = len(  seq )
    ok  = True
    for idx in range( size ):
        if   seq[idx]  == 'r' :
            if  idx+1<size   and   seq[idx+1]  == -1: seq[idx+1]=1
        elif seq[idx]== -1:
            if idx+1<size and seq[idx+1]=='l':
                ok =False
                break
        elif seq[idx]==1:
            if idx+1<size and seq[idx+1]=='l':   pass
            else:
                ok =False
                break
    return   ok
 
 
# -------------- Core Recursive Check --------------
def  solve_case(n ,  string ):
    table = {}
 
    def   dfs( pos ,  last , skipL ):
        keyy =  ( pos , last , skipL )
        if keyy  in table:   return  table[ keyy ]
 
        if   pos == n :
            table[keyy]=1
            return 1
 
        ch = string[pos]
 
        if  ch=='1':
            if last==1:
                nxt=pos+1
                if  nxt>=n   or  string[nxt]=='1':
                    table[keyy]=0
                    return 0
                out=dfs( nxt+1 ,0 ,0 )
                table[keyy]=out
                return out
            else:
                out=dfs( pos+1 ,0 ,1 )
                table[keyy]=out
                return out
        else:
            if not skipL:
                if dfs( pos+1 ,0 ,0 ):
                    table[keyy]=1
                    return 1
            if dfs( pos+1 ,1 ,0 ):
                table[keyy]=1
                return 1
            table[keyy]=0
            return 0
 
    return dfs(0 ,0 ,0)
 
 
# -------------- Main Flow --------------
def  main():
    T = int( bi.input().strip() )
    for   _   in   range(  T ):
        ln = int(  bi.input().strip()  )
        txt = bi.input().strip()
        arr=[-1  for __ in  range( ln )]
        ans=solve_case( ln , txt )
        print( "Yes" if ans>0  else  "No" )
 
 
# Run main
if  __name__ == "__main__" :
    main()