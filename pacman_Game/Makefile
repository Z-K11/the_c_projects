pacman: pacman.o map.o menu.o player.o score.o utils.o
		gcc -o pacman pacman.o \
		map.o menu.o player.o score.o utils.o

pacman.o: pacman.c map.h menu.h player.h score.h utils.h
		gcc -c pacman.c

map.o: map.c map.h
		gcc -c map.c

menu.o: menu.c menu.h utils.h
		gcc -c menu.c

player.o: player.c player.h
		gcc -c player.c

score.o: score.c score.h
		gcc -c score.c

utils.o: utils.c utils.h
		gcc -c utils.c

clean:
	rm -f *.o

destroy:
	rm -f *.o pacman