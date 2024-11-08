//Check the number is prime or not

Pseudo function

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

function isPrimeTest()
INPUT number
IF isPrime(number) == True
    PRINT "Number is Prime"
ELSE
    PRINT "Number is Not Prime"
END IF

Pseudocode
  isPrimeTest()
