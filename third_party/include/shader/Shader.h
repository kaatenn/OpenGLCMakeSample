//
// Created by 86137 on 2023/3/6.
//

#ifndef OPENGLLEARNING_SHADER_01_2_SHADER_H
#define OPENGLLEARNING_SHADER_01_2_SHADER_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include "glad/glad.h"
#include "glm/glm.hpp"

class Shader {
    unsigned int ID;

public:
    // build and compile Shader
    Shader(const char* vertex_path, const char* fragment_path);
    // use and activate the shader
    void use() const;
    // delete program
    void delete_program() const;
    // uniform function
    void set_bool(const std::string &name, bool value) const;
    void set_int(const std::string &name, int value) const;
    void set_float(const std::string &name, float value) const;
    void set_mat4(const std::string &name, glm::mat4 value) const;
};


#endif //OPENGLLEARNING_SHADER_01_2_SHADER_H
