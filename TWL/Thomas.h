#pragma once
#include "PlayableCharacter.h"

class Thomas : public PlayableCharacter
{
public:
	Thomas::Thomas();

	bool virtual handleInput();
};
