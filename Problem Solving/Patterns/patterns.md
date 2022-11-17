# Patterns

Directory : Practice / Patterns

```c++

for(int i = 0; i<6; i++){
    int ascii_char = 65;
      for(int j = 0; i>=j; j++){
        cout<<(char)ascii_char;
        ascii_char++;
      }
      cout<<endl;
  }

//   Method 2

for(int i=1; i<=n; i++){
	for(int j=1; j<=i; j++){
		printf("%c ",j+64);
		
	}
	cout<<endl;
}

```
<pre>
A  
A B  
A B C  
A B C D  
A B C D E  
</pre>

### Star patterns

```c++

/************ Method 1 ***********/

for(int i = 0; i < 6; i++){
    for(int j = 0; j<6; j++){
        if(i<=j)
            cout<<" *";
    }
    cout<<endl;
}

/************ Method 2 **********/

for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        if(j>=i)
            cout<<"* ";   
    }
    cout<<endl;
}

```
<pre>
* * * * * *  
* * * * *  
* * * *  
* * *  
* *  
*
</pre>


```c++

/*********** Method 1 ************/

for(int i = 0; i < 6; i++){
    for(int j = 0; j<6; j ++){
        if(i+j>6-1)
            cout<<"* ";       
    }
    cout<<endl;
}

/************* Method 2 **************/
for(int i=0; i<6; i++){
    for(int j=0; i>=j; j++){ 
            cout<<"* ";
    }
    cout<<endl; 
}

```
<pre>
*   
* *  
* * *    
* * * *  
* * * * *
</pre>

```c++

int n = 6;
for(int i=1; i<=n; i++){
	for(int j=1; j<=n-i; j++){
		// printf("%d",j);
		printf("# ");
	}
	cout<<endl;
}
```

<pre>
# # # # # 
# # # # 
# # # 
# # 
# 
</pre>

```c++
for(int i=1; i<=n; i++){
	for(int j=1; j<=i; j++){
		printf("%d ",i);
		
	}
	cout<<endl;
}
```
<pre>
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6 
</pre>

```c++
for(int i=1; i<=n; i++){
    for(int j=n; j>=i; j--){
        printf("%d ",j);
        
    }
    cout<<endl;
}
```
<pre>
6 5 4 3 2 1 
6 5 4 3 2 
6 5 4 3 
6 5 4 
6 5 
6 
</pre>

```c++
for(int i=1; i<=6; i++){
    for(int j=i; j<=6; j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
```
<pre>
1 2 3 4 5 6 
2 3 4 5 6 
3 4 5 6 
4 5 6 
5 6
6
</pre>

```c++
int n=6;
for(int i=n; i>=1; i--){
    for(int j=i; j>=1; j--){
        cout<<j<<" ";
    }
cout<<endl;
}
```
<pre>
6 5 4 3 2 1
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
</pre>

```c++
for(int i=1; i<=6; i++){
    for(int j=1; j<=6; j++){
    if(i==1 || i==6 || j==1 || j==6)
        printf("# ");
    else
        printf("  "); // There will be two spaces on for # and one will be blank   
    }
    cout<<endl;
}
```
<pre>

# # # # # #
#         #
#         #
#         #
#         #
# # # # # #

</pre>

```c++
for(int i=1; i<=6; i++){
        for(int j=i; j<=6; j++){
            if(j==6 || i==1 || i==j) // here n=6 so we directly uses 6 instead of n
                printf("# ");
            else
                printf("  "); 
        }
        cout<<endl;
    }
```
<pre>
# # # # # # 
#       # 
#     # 
#   # 
# #
#
</pre>

```c++
for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            if(j==6 || i==1 || i==j) // here n=6 so we directly uses 6 instead of n
                printf("# ");
            else
                printf("  "); 
        }
        cout<<endl;
    }
```
<pre>
# # # # # #
  #       #
    #     #
      #   #
        # #
          #
</pre>

```c++
for(int i=1; i<=6; i++){
    for(int j=1; j<=i; j++){
        if(j==1 || i==6 || i==j) // here n=6 so we directly uses 6 instead of n
            printf("# ");
        else
            printf("  "); 
    }
    cout<<endl;
```
<pre>
#
# #
#   #
#     #
#       #
# # # # # #
</pre>

```c++
// Program to print the patterns
int n = 7;
if(n % 2 != 0)
	n = n + 2; // if the number is odd then add two more n + 2
for(int i=1; i<=n; i++){
	// print the two spaces first
	for(int k=n-2; k>=1; k--){
		printf(" ");
	}
	for(int j=1; j<=n; j++)
	{
		if(i==1) // print stars only in first row
		  printf("@");
		
	}
	cout<<endl;
	
	// Print the side spaces in star patterns
	// Whatever will be value of N print spaces n + 2
	for(int k=n+2; k>=i; k--){
		printf(" ");
	}
	// To print the stars
	for(int j=1; j<=i; j++){
		  if(i % 2 !=0)
		  printf("* ");
	}
}
cout<<endl;
// print the stars in downward
for(int i=1; i<=n; i++){
    for(int k=n; k>=n-i; k--)
       printf("  ");
	for(int j=n-2; j>=i; j--){
		if(i % 2 !=0)
		   printf(" *");
	}
	cout<<endl;
    
}
// to print the @
for(int i=1; i<=n; i++){
    for(int k=n+2; k>=1; k--){
		printf(" ");
	}
	for(int j=1; j<=n; j++){
		if(j == n/2)
		   printf("@");
	}
	cout<<endl;
    
}
```
<pre>
       @@@@@@@@@
           *        
                 
         * * *        
               
       * * * * *        
             
     * * * * * * *        
           
   * * * * * * * * * 
     * * * * * * *
      
         * * * * *
          
             * * *
              
                 *
                  
                    
           @
           @
           @
           @
           @
           @
           @
           @
           @
</pre>

```c++
int n = 7;
if(n % 2 != 0)
	n = n + 2; // if the number is odd then add two more n + 2

for(int i=1; i<=n; i++){
    // prin the white spaces
    for(int j=i; j<=n; j++){
		printf("  ");
        // printf("%d ",j);
	}
    // Print the patterns
	for(int j=1; j<=i; j++){
		   printf("@ ");
	}
    // print the horizontal patterns
	for(int j=1; j<=n; j++){
           if(i==1)
		   printf("* ");
           else
           printf("  ");
	}
    // print the patterns again
	for(int j=1; j<=i; j++){
		   printf("@ ");
	}
	cout<<endl;
    
}
```
<pre>
                  @ * * * * * * * @ 
                @ @               @ @
              @ @ @               @ @ @ 
            @ @ @ @               @ @ @ @
          @ @ @ @ @               @ @ @ @ @ 
        @ @ @ @ @ @               @ @ @ @ @ @
      @ @ @ @ @ @ @               @ @ @ @ @ @ @
    @ @ @ @ @ @ @ @               @ @ @ @ @ @ @ @
  @ @ @ @ @ @ @ @ @               @ @ @ @ @ @ @ @ @
</pre>

```c++
// Program to print the patterns
int n = 7;
if(n % 2 != 0)
	n = n + 2; // if the number is odd then add two more n + 2

for(int i=1; i<=n; i++){
    for(int j=i; j<=n; j++){
		printf("  ");
        // printf("%d ",j);
	}
	for(int j=1; j<=i; j++){
		   printf("@ ");
	}
	for(int j=1; j<=n; j++){
           if(i==n)
		   printf("* ");
           else
           printf("  ");
	}
	for(int j=1; j<=i; j++){
		   printf("@ ");
	}
	cout<<endl;
    
}
```
<pre>
                  @                   @
                @ @                   @ @ 
              @ @ @                   @ @ @ 
            @ @ @ @                   @ @ @ @ 
          @ @ @ @ @                   @ @ @ @ @ 
        @ @ @ @ @ @                   @ @ @ @ @ @ 
      @ @ @ @ @ @ @                   @ @ @ @ @ @ @ 
    @ @ @ @ @ @ @ @                   @ @ @ @ @ @ @ @ 
  @ @ @ @ @ @ @ @ @ * * * * * * * * * @ @ @ @ @ @ @ @ @ 
</pre>


```c++
// Program to print the patterns
int n = 3;
// print the at symbol
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        if(i==1)
		printf("@ ");
	}
}
printf("\n");
// print the first pattern
for(int i=1; i<=n; i++){
// print the pattern but instead of pattern just print the blank spaces so it will push the patterns
for(int j=2; j<=n; j++){
		   printf("  ");
}
for(int j=1; j<=i; j++){
		   printf("* ");
}
printf("\n");
}

// Second outer loop
for(int i=1; i<=n; i++){
	// print the pattern but instead of pattern just print the blank spaces so it will push the patterns
for(int j=2; j<=n; j++){
		   printf("  ");
}
for(int j=1; j<=n-i; j++){
		   printf("* ");
	}
printf("\n");
}

// Outer for loop to print patterns
for(int i=1; i<=n; i++){
	// print white space when col>n and row == first(1)
    for(int j=2; j<=n; j++){
        if(i==1 && j>=n)
		printf("  ");
	}
	// print the at smbols
    for(int j=1; j<=n; j++){
        if(i==1)
		printf("@ ");
	}
}
```
<pre>
@ @ @ 
    * 
    * * 
    * * * 
    * * 
    * 
    
  @ @ @
</pre>