#include "stdafx.h"
#include "Level8.h"

Level8::Level8(float gameoverTime, uint32_t playerCount) : Level(gameoverTime, playerCount) {
	CreateDeathAround(float2(-45.0f, -25.0f), float2(45.0f, 25.0f));

	//Left top
	CreateGround(float2(-25, 5), float2(-15, 8));
	CreateGround(float2(-35, 2), float2(-15, 5));
	CreateSpawnpoint(float2(-30, 5));
	//Left bottom
	CreateGround(float2(-25, -13), float2(-15, -10));
	CreateSpawnpoint(float2(-20, -10));
	//Right top
	CreateGround(float2(15, 2), float2(25, 5));
	CreateSpawnpoint(float2(20, 5));
	//Right bottom
	CreateGround(float2(15, -10), float2(25, -7));
	CreateGround(float2(15, -13), float2(35, -10));
	CreateSpawnpoint(float2(30, -10));
	//Center
	CreateGround(float2(-5, -16), float2(5, 8));
}
