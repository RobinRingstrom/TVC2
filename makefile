
calc_test: test.c calculator.c addition.c ../unity/src/unity.c
	gcc test.c calculator.c addition.c ../unity/src/unity.c -o test.exe
	