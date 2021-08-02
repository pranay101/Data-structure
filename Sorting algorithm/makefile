bbs: bubble_sort.c helpers.c
	gcc bubble_sort.c helpers.c -o bubble_sort
	./bubble_sort

helpers: helpers.c helpers.h
	gcc -g -c helpers.c

ins: insertion_sort.c helpers.h 
	make helpers
	gcc insertion_sort.c helpers.c -o insertion_sort
	./insertion_sort

sel:selection_sort.c helpers.h 
	make helpers
	gcc selection_sort.c helpers.c -o selection_sort
	./selection_sort.exe
	
del: 
	rm *.exe


# makefile
# main: main.o linked_list.o
# 	gcc -g main.o linked_list.o -o main
# 	./main

# linked_list.o: linked_list.c linked_list.h
# 	gcc -g -c linked_list.c

# clean:
# 	rm *.o main