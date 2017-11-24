typedef struct snake {
	int x, y;
	struct snake *next, *prev;
}SNAKE, *Snake;

void drawMap();
void drawSnake(Snake P);
void eraseSnake(Snake P);
void drawFood();
