
student: student.o main.o
	gcc student.o main.o -o bin/student

main.o: src/main.c include/student.h include/structure.h
	gcc -c src/main.c

student.o: src/student.c include/student.h include/structure.h
	gcc -c src/student.c 

clean:
	rm student.o main.o bin/student
	