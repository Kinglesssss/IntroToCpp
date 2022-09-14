#define RAYGUI_IMPLEMENTATION
#define RAYGUI_SUPPORT_ICONS
#include "raygui.h"
#include "raylib.h"
#include <string>
using namespace std;

void InitGame();
void UpdateGame();
void DrawGame();
int invadersCollide(Rectangle *player, Rectangle *invader);
int screenWidth = 1000;
int screenHeight = 900;
#define NUM_SHOOTS 50
#define NUM_MAX_INVADERS 50
int shootRate;
int activeInvaders;
int score = 0;

typedef struct Player
{
	Rectangle rect;
	Vector2 speed;
	Color color;
};
Player player;
typedef struct Shoot
{
	Rectangle rect;
	Vector2 speed;
	bool active;
	Color color;
};
Shoot shoot[NUM_SHOOTS];
typedef struct Invaders
{
	Rectangle rect;
	Vector2 speed;
	bool active;
	Color color;
};
Invaders invader[NUM_MAX_INVADERS];

int invadersCollide(Rectangle *playerRect, Rectangle *invader)
{
	//If the bottom of the invader is above the top of the player, there is no collision.
	if (invader->y + invader->height / 2 < playerRect->y - playerRect->height / 2
		//If the right side of the invader is left of the left side of the player, there is no collision.
		|| invader->x + invader->width / 2 < playerRect->x - playerRect->width / 2
		//if the left side of the invader is right of the right side of the player, there is no collision.
		|| invader->x - invader->width / 2 > playerRect->x + playerRect->width / 2)
	{
		return 0;
	}

	return 1;
}

void InitGame()
{
	
	//player set up
	player.rect.x = screenWidth / 2.0f;
	player.rect.y = screenHeight - 20;
	player.rect.width = 20;
	player.rect.height = 20;
	player.speed.x = 5;
	player.speed.y = 5;
	player.color = BLACK;
	//shooty shoot set up
	shootRate = 0;

	for (int i = 0; i < NUM_SHOOTS; i++)
	{
		shoot[i].rect.x = player.rect.x;
		shoot[i].rect.y = player.rect.y + player.rect.height / 4;
		shoot[i].rect.width = 5;
		shoot[i].rect.height = 10;
		shoot[i].speed.x = 0;
		shoot[i].speed.y = -10;
		shoot[i].active = false;
		shoot[i].color = MAROON;
	}
	//invader setup
	activeInvaders = 50;

	for (int i = 0; i < NUM_MAX_INVADERS; i++)
	{
		invader[i].rect.width = 20;
		invader[i].rect.height = 20;
		invader[i].rect.x = GetRandomValue(0, screenWidth);
		invader[i].rect.y = GetRandomValue(-screenHeight, -20);
		invader[i].speed.x = 5;
		invader[i].speed.y = 5;
		invader[i].active = true;
		invader[i].color = BLUE;
	}
}
void UpdateGame()
{
	//player movement
	if (IsKeyDown(KEY_RIGHT))player.rect.x += player.speed.x;
	if (IsKeyDown(KEY_LEFT))player.rect.x -= player.speed.x;
	//well behaviour
	if (player.rect.x <= 0) player.rect.x = 0;
	if (player.rect.x + player.rect.width >= screenWidth)player.rect.x = screenWidth - player.rect.width;
	//shooty shoot
	if (IsKeyDown(KEY_SPACE))
	{
		shootRate += 5;
		for (int i = 0; i < NUM_SHOOTS; i++)
		{
			if (!shoot[i].active && shootRate % 40 == 0)
			{
				shoot[i].rect.x = player.rect.x;
				shoot[i].rect.y = player.rect.y + player.rect.height / 4;
				shoot[i].active = true;
				break;
			}
		}
	}
	//shoot move and collide
	for (int i = 0; i < NUM_SHOOTS; i++)
	{
		if (shoot[i].active)
		{
			//move
			shoot[i].rect.y += shoot[i].speed.y;
			//collision
			for (int j = 0; j < activeInvaders; j++)
			{
				if (invader[j].active)
				{
					if (CheckCollisionRecs(shoot[i].rect, invader[j].rect))
					{
						shoot[i].active = false;
						invader[j].rect.x = GetRandomValue(screenWidth, screenWidth + 1000);
						invader[j].rect.y = GetRandomValue(0, screenHeight - invader[j].rect.height);
						shootRate = 0;
						score += 1;
					}
					if (shoot[i].rect.y <= 0)
					{
						shoot[i].active = false;
						shootRate = 0;
					}
				}
			}
		}
	}
	//all running invaders
	for (int i = 0; i < activeInvaders; i++)
	{
		if (invader[i].active)
		{
			invader[i].rect.y += invader[i].speed.y;
			if (invader[i].rect.y > screenHeight)
			{
				invader[i].rect.x = GetRandomValue(0, screenWidth);
				invader[i].rect.y = GetRandomValue(-screenHeight, -20);
			}
		}
	}
	//player and score reset after collide
	for (int i = 0; i < activeInvaders; i++)
	{
		if (invadersCollide(&player.rect, &invader[i].rect))
		{
			player.rect.x = screenWidth / 2.0f;
			player.rect.y = screenHeight - 20;
			score = 0;
		}
	}
	
		
}
void DrawGame()
{
	BeginDrawing();
	ClearBackground(RAYWHITE);
	//show score
	DrawText(("Score:"), 40, 40, 15, RED);
	//draw player
	DrawRectangleRec(player.rect, player.color);
	//for enemy
	for (int i = 0; i < activeInvaders; i++)
	{
		if (invader[i].active) DrawRectangleRec(invader[i].rect, invader[i].color);
	}
	for (int i = 0; i < NUM_SHOOTS; i++)
	{
		if (shoot[i].active) DrawRectangleRec(shoot[i].rect, shoot[i].color);
	}
	DrawText(std::to_string(score).c_str(), 90, 40, 15, RED);

	EndDrawing();
}
int main()
{
	InitWindow(screenWidth, screenHeight, "Space Invaders: the shoddly made game");

	InitGame();

	//setting the frame rate
	SetTargetFPS(60);

	//main game loop
	//tell if game is meant to be open
	while (!WindowShouldClose())
	{
		//Draw
		
		UpdateGame();
			
		DrawGame();
		
	}
	CloseWindow();
	return 0;
}