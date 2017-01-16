OBJECTS = count_sales.out myperson.out class.out nodefault.out vector.out \
		  test.out Debug.out

include ../GNU_makefile_template

count_sales.o: Sales_data.h

myperson.o Person.o: Person.h

myscreen.o: Screen.h

myperson.out: myperson.o Person.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) $^ -o $@

