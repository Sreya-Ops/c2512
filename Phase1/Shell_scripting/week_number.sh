#!/bin/bash
read -p "Enter day name:" day_name

case $day_name in
    Sunday) 
        day_number=1 
        ;;
    Monday) 
        day_number=2
        ;;
    Tuesday) 
        day_number=3
        ;;
    Wednesday)
        day_number=4
        ;;
    Thursday)  
        day_number=5
        ;;
    Friday)
        day_number=6
        ;;
    Saturday)
        day_number=7
        ;;
    *)
        echo "Invalid day name"
        exit 1
        ;;
esac

echo "Day number of day name $day_name is $day_number."