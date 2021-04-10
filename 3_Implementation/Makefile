all:
	gcc -fprofile-arcs -ftest-coverage bmi.c unity.c -o bmi.out

run:all
	./bmi.out
	
coverage:all
	./bmi.out
	gcov bmi.c

clean:
	rm -r bmi.out *gcda *gcna *gcov
