
calc_test: test.c calculator.c addition.c subtraction.c division.c multiplication.c ../unity/src/unity.c
	gcc test.c calculator.c addition.c subtraction.c division.c multiplication.c ../unity/src/unity.c -o test.exe
	