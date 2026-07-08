def solve ( N , A , B ) :
    
    x , y = [] , [] 
    MOD = 998244353
    
    def dfs ( idx ) :
        if idx == N : return 1 
        
        p , q = 0 , 0 
        
        if idx == 0 :
            x . append ( A [ idx ] ) ; y . append ( B [ idx ] ) 
            p = dfs ( idx + 1 ) 
            x . pop ( ) ; y . pop ( ) 
        
        flg = 0 
        if len ( x ) > 0 and x [ -1 ] <= A [ idx ] and y [ -1 ] <= B [ idx ] :
            x . append ( A [ idx ] ) ; y . append ( B [ idx ] ) 
            p = dfs ( idx + 1 ) 
            x . pop ( ) ; y . pop ( ) 
            flg = 1 
        
        if len ( x ) > 0 and x [ -1 ] <= B [ idx ] and y [ -1 ] <= A [ idx ] :
            if flg : return ( p * 2 ) % MOD 
            x . append ( B [ idx ] ) ; y . append ( A [ idx ] ) 
            q = dfs ( idx + 1 ) 
            x . pop ( ) ; y . pop ( ) 
        
        return ( p + q ) % MOD 
    
    print ( ( dfs ( 0 ) * 2 ) % MOD ) 
 
 
T = int ( input ( ) ) 
for __ in range ( T ) : 
    N = int ( input ( ) ) 
    A = list ( map ( int , input ( ).split ( ) ) ) 
    B = list ( map ( int , input ( ).split ( ) ) ) 
    solve ( N , A , B ) 