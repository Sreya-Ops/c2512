// Finding largest number

Pseudocode

BEGIN
FUNCTION Findlargest(n1,n2,n3)
IF n1>=n2 AND n1>=n3
        RETURN n1
ELSE IF n2>=n1 AND n2>=n3
        RETURN n2
ELSE 
        RETURN n3
END IF
END FUNCTION

//Main function

INPUT n1,n2,n3
largest=Findlargest(n1,n2,n3)
PRINT largest
END
