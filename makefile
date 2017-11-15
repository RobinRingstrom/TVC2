calc_test: test.c calculator.c addition.c ../unity/src/unity.h
	gcc test.c ../unity/src/unity.h calculator.c addition.c -o testadd.exe
	