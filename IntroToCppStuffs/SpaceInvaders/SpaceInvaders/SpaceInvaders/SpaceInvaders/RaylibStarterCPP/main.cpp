#include "raylib.h"
#include "raygui.h"
#include <iostream>
using namespace std;

void InitGame();
void UpdateGame();
void DrawGame();
static int screenWidth = 800;
static int screenHeight = 450;
#define NUM_SHOOTS 50
static int shootRate;
static int activeInvaders;

struct Player
{
	Rectangle rect;
	Vector2 speed;
	Color color;
};
static Player player;
struct Shoot
{
	Rectangle rect;
	Vector2 speed;
	bool active;
	Color color;
};
static Shoot shoot[NUM_SHOOTS];
struct Invaders
{
	Rectangle rect;
	Vector2 speed;
	bool active;
	Color color;
};
#define NUM_MAX_INVADERS 50
static Invaders invaders[NUM_MAX_INVADERS];
/*int Player()//connecting the player to the image and their movement
{
	//load image go here?
	Image image = LoadImage("playerShip1_blue.png");
	Texture2D texture = LoadTextureFromImage(image);
	UnloadImage(image);
	//drawing the image
	DrawTexture(texture, screenWidth / 2 - texture.width / 2, screenHeight / 2 - texture.height / 2, WHITE);
	//making player
	Vector2 spaceShip = { (float)screenWidth / 2, (float)screenHeight / 2 };

	while (!WindowShouldClose())
	{
		//get position of where the ball is meant to be with user input
		if (IsKeyDown(KEY_RIGHT)) spaceShip.x += 2.0f;
		if (IsKeyDown(KEY_LEFT)) spaceShip.x -= 2.0f;

		Vector2 spaceShip;
	}
}*/
void InitGame()
{
	player.rect.x = screenWidth / 2.0f;
	player.rect.y = screenHeight - 20;
	player.rect.width = 20;
	player.rect.height = 20;
	player.speed.x = 5;
	player.speed.y = 5;
	player.color = BLACK;

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

	activeInvaders = 10;

	for (int i = 0; i < NUM_MAX_INVADERS; i++)
	{
		invaders[i].rect.width = 20;
		invaders[i].rect.height = 20;
		invaders[i].rect.x = GetRandomValue(0, screenWidth);
		invaders[i].rect.y = GetRandomValue(-screenHeight, -20);
		invaders[i].speed.x = 5;
		invaders[i].speed.y = 5;
		invaders[i].active = true;
		invaders[i].color = BLUE;
	}
}
void UpdateGame()
{
	//player movement
	if (IsKeyDown(KEY_RIGHT))player.rect.x += player.speed.x;
	if (IsKeyDown(KEY_LEFT))player.rect.x -= player.speed.x;
	//wall behaviour
	if (player.rect.x <= 0) player.rect.x = 0;
	if (player.rect.x + player.rect.width >= screenWidth)player.rect.x = screenWidth - player.rect.width;

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
	for (int i = 0; i < NUM_SHOOTS; i++)
	{
		if (shoot[i].active)
		{
			shoot[i].rect.y += shoot[i].speed.y;
			if (shoot[i].rect.y <= 0)
			{
				shoot[i].active = false;
				shootRate = 0;
			}
		}
	}

	for (int i = 0; i < activeInvaders; i++)
	{
		if (invaders[i].active)
		{
			invaders[i].rect.y += invaders[i].speed.y;
			if (invaders[i].rect.y > screenHeight)
			{
				invaders[i].rect.x = GetRandomValue(0, screenWidth);
				invaders[i].rect.y = GetRandomValue(-screenHeight, -20);
			}
		}
	}
}
void DrawGame()
{
	BeginDrawing();
	ClearBackground(RAYWHITE);
	//draw player
	DrawRectangleRec(player.rect, player.color);
	//for enemy
	for (int i = 0; i < activeInvaders; i++)
	{
		if (invaders[i].active)
		{
			DrawRectangleRec(invaders[i].rect, invaders[i].color);
			for (int j = 0; j < NUM_SHOOTS; j++)
			{
				if (shoot[j].active)
				{
					if (CheckCollisionRecs(shoot[j].rect, invaders[i].rect))
					{
						shoot[j].active = false;
						invaders[i].rect.x = GetRandomValue(screenWidth, screenWidth + 1000);
						invaders[i].rect.y = GetRandomValue(0, screenHeight - invaders[i].rect.height);
						shootRate = 0;
					}
				}
			}
		}
	}
	for (int i = 0; i < NUM_SHOOTS; i++)
	{
		if (shoot[i].active)
		{
			DrawRectangleRec(shoot[i].rect, shoot[i].color);
		}
	}
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
		
		{
			UpdateGame();
			DrawGame();
			//ClearBackground(RAYWHITE);

			//DrawText("move the ball side to side with the arrow keys", 10, 10, 20, PURPLE);

			//Player();
			
			//DrawCircleV(spaceShip, 50, MAROON);
		}
		
	}
	CloseWindow();
	return 0;
}