#ifndef OPENGLLEARNING_CAMERA_CAMERA_H
#define OPENGLLEARNING_CAMERA_CAMERA_H

#include "glm/vec3.hpp"

enum Camera_Movement {
    FORWARD,
    BACKWARD,
    LEFT,
    RIGHT
};

const float YAW = -90.0f;
const float PITCH = 0.0f;
const float SPEED = 2.5f;
const float SENSITIVITY = 0.1f;
const float ZOOM = 45.0f;

class Camera {
public:
    // camera attributes
    glm::vec3 position;
    glm::vec3 front;
    glm::vec3
};


#endif //OPENGLLEARNING_CAMERA_CAMERA_H
