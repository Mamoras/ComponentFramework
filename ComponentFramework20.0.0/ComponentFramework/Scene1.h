#ifndef SCENE1_H
#define SCENE1_H
#include "Scene.h"
#include "Vector.h"
union SDL_Event;
using namespace MATH;

/// Forward declarations 
union SDL_Event;
class Camera;
class DemoObject;
class Mesh;
class Shader;
class Texture;

class Scene1 : public Scene {



public:
	explicit Scene1();
	virtual ~Scene1();
	virtual bool OnCreate() override;
	virtual void OnDestroy() override;
	virtual void HandleEvents(const SDL_Event &sdlEvent) override;
	virtual void Update(const float deltaTime) override;
	virtual void Render() const override;

private:
	DemoObject* demoObject;
	Vec3 lightSource;
	Camera * camera;
	Mesh* meshPtr;
	Shader* shaderPtr;
	Texture* texturePtr;
};


#endif // SCENE1_H