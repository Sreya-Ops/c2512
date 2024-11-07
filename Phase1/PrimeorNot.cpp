//Check the number is prime or not

Pseudocode

BEGIN
FUNCTION isPrime(n)
  IF n <= 1
    RETURN False
  END IF
        
  FOR i = 2 TO n/2
    IF n MOD i == 0
      RETURN False
    END IF
  END FOR
        
  RETURN True
END FUNCTION
//Main function    
INPUT number
IF isPrime(number) == True
    PRINT number is Prime
ELSE
    PRINT number is Not Prime
END IF
END
