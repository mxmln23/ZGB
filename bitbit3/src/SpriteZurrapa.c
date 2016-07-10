#include "SpriteZurrapa.h"

#include <gb/gb.h>

#include "Scroll.h"
#include "SpriteManager.h"

const UINT8 anim_zurrapa_idle[] = {2, 0, 1};
extern UINT8 zurrapa_idx;

void StartZurrapa(struct Sprite* sprite) {
	InitSprite(sprite, FRAME_16x16, zurrapa_idx >> 2);
	SetSpriteAnim(sprite, anim_zurrapa_idle, 5u);
}

void UpdateZurrapa(struct Sprite* sprite, UINT8 idx) {
	
}