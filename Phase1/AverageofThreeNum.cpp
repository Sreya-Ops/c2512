//Find the average of three numbers

BEGIN
FUNCTION Findaverage(num1,num2,num3)
sum=num1+num2+num3
average=sum/3
RETURN average
END FUNCTION

//Main Function
INPUT num1,num2,num
average= Findaverage(num1,num2,num3)
PRINT average
    
