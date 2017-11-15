
calc_test: test.c calculator.c addition.c subtraction.c ../unity/src/unity.c
	gcc test.c calculator.c addition.c subtraction.c ../unity/src/unity.c -o test.exe
	