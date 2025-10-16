#pragma once
#include "Scene.h"
#include <map>

class SceneManager
{
private:
	std::map<std::string, Scene*> scenes;
	Scene* currentScene;
};

