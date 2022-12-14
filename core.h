#ifndef _CORE_H_
#define _CORE_H_

#ifdef __APPLE__
#include <OpenGL/gl3.h>
#else
#include <GL/glew.h>
#endif
#ifndef GLM_ENABLE_EXPERIMENTAL
	#define GLM_ENABLE_EXPERIMENTAL
#endif
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/quaternion.hpp>

#include <vector>
#include <ctype.h>
#include <algorithm>
#include <Math.h>
#include <tuple>
#include <omp.h>
#include <iostream>

//Miscs
#define EPSILON 1e-4f
#define TOLERANCE 0.01f
#define POINT_SIZE 1.0f

//Object properties
#define DEFAULT_RADIUS 1.0f
#define DEFAULT_ELASTIC 1.0f
#define DEFAULT_WALL_ELASTIC 0.0f
#define DEFAULT_BALL_ELASTIC 0.5f
#define DEFAULT_MASS 1.0f
//springs
#define DEFAULT_SPRING_CONST 1500.0f
#define DEFAULT_DAMPING_CONST 30.0f

//environment Properties
#define DEFAULT_AIRRESIST 0.35f
#define DEFAULT_DRAG_CONST 1.0f
#define DEFAULT_LIFT_CONST 1.0f
#define DEFAULT_FRICTION 0.0f
#define GRAV_COE 9.8f
#define DEFAULT_GRAVMULT 1.0f
#define DEFAULT_GRAVCONST 9.8f

//simulation rates
#define DEFAULT_SIMRATE 300.0f
#define DEFAULT_RENDRATE 100.0f
#endif