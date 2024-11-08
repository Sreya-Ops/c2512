//Check the number is prime or not

Pseudo function:

FUNCTION isPrime(number)
  IF number <= 1
    RETURN False
  END IF
        
  FOR i = 2.. number/2
    IF number MOD i == 0
      RETURN False
    END IF
  END FOR
        
 RETURN True
END FUNCTION

FUNCTION isPrimeTest()
INPUT number
IF isPrime(number) == True
    PRINT "Number is Prime"
ELSE
    PRINT "Number is Not Prime"
END IF

Pseudocode:
  isPrimeTest()
