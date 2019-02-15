#include "MainClass.h"
#include <vie/Input.h>

MainClass::MainClass()
{
	runEngine("Example Engine Application", 1280, 728);
}

MainClass::~MainClass() {}

void MainClass::onCreate() {}

void MainClass::update(float et) {}

void MainClass::onMousePress()
{
	mainCamera->setScale(3.5f);
	glm::vec2 mpos = vie::Input::getMousePosition();
	mpos = mainCamera->screenToWorldPos(mpos);
	points.push_back(mpos);
}

void MainClass::render(vie::Graphics* g)
{
	g->setBackgroundColor(vie::COLOR::DARK_GRAY);

	g->setColor(vie::COLOR::YELLOW);
	g->drawPolygon(points);

	g->setColor(vie::COLOR::RED);
	for (auto p : points)
		g->fillRect(p, glm::vec2(8, 8));
}