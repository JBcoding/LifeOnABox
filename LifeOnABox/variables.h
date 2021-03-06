#include "structs.h"
using namespace JBnamespace;

#define BLOCK_AIR 0
#define BLOCK_BED_ROCK 1
#define BLOCK_STONE 2
#define BLOCK_DIRT 3
#define BLOCK_WOOD 4
#define BLOCK_LEAVES 5
#define BLOCK_GRASS 6
#define BLOCK_SAND 7
#define BLOCK_DARKSTONE 8
#define BLOCK_LIGHT_WOOD 9
#define BLOCK_YELLOW_GRASS 10

#define WorldBounds 256
Blocks World32[WorldBounds][WorldBounds][WorldBounds];
int MiniMapView[WorldBounds / 2][WorldBounds / 2];
vector3D HeadRotation = vector3D(-45, 0, 0); // Left Right // Up down // Unused
vector3D Position = vector3D(-WorldBounds / 4, -WorldBounds / 4, -WorldBounds / 4);
//vector3D Position = vector3D(WorldBounds / 2, -WorldBounds / 2, WorldBounds / 4);
float CameraSensitivity = 40;

int ScreenWidth;
int ScreenHeight;

float FramesPerSecond = 30;

bool KEYS[256];
float Speed = 0.2;

float PI = 3.14159265359;
float DECTORAD = PI / 180;

float RenderDistance = 16;


bool RotationCube = false;
float TAngle = 0;
float TSpeed = 10;

//Physics
float g = 11.22; // gets multiplyed by 0.875 before added
bool fallDamageActivated = false;
bool healthbarActivated = false;
float playerHeight = 1.8;
float playerRadius = 0.25;
particle bodyParticles[12];

bool IsPlayerOnGround = false;

int RotateCoolDown = 0;
