#include <vie/Engine.h>
#include <vector>

class MainClass : public vie::Engine
{
public:
	MainClass();
	~MainClass();

	void onCreate();
	void update(float et);
	void render(vie::Graphics* g);
	void onMousePress();

private:
	std::vector<glm::vec2> points;
};