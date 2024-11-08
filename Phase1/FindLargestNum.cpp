// Finding largest number

Pseudo function:

BEGIN
FUNCTION findLargest(number1->, number2->, number3->)->int
IF number1>=number2 AND number1>=number3
        RETURN number1
ELSE IF number2>=number1 AND number2>=number3
        RETURN number2
ELSE 
        RETURN number3
END IF
END FUNCTION

FUNCTION findLargestTest()
INPUT number1, number2, number3
int largest=findLargest(number1, number2, number3)
PRINT largest
END

Pseudocode:
findLargestTest()
