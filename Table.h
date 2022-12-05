#ifndef _TABLE_H_
#define _TABLE_H_

#include "core.h"
#include "Plain.h"
#include "BounceBall.h"

////////////////////////////////////////////////////////////////////////////////

class Table
{
private:
	GLfloat size;
	GLfloat width;
	GLfloat length;
	glm::vec3 origin;
	Plain* tableTop;
	Plain* tableUp;
	Plain* tableBtm;
	Plain* tableLeft;
	Plain* tableRight;
	Plain* leftTube;
	Plain* wallIncline;
	BounceBall* bounceBall1;
	BounceBall* bounceBall2;
	BounceBall* bounceBall3;
	std::vector<Plain*> plains;
	std::vector<BounceBall*> bbs;
	std::vector<Collider*> colliders;
	void addCollider(Plain* plain);


public:
	Table(GLfloat width, GLfloat length, glm::vec3 origin);
	~Table();
	void draw(const glm::mat4& viewProjMtx, GLuint shader);
	void update();
	std::vector<Plain*> getPlains() { return this->plains; }
	std::vector<Collider*> getCollider() { return this->colliders; }
	std::vector<BounceBall*> getBounceBalls() { return this->bbs; }
};

////////////////////////////////////////////////////////////////////////////////

#endif