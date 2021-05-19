
#pragma once

#ifndef _RENDER_SYSTEM_HPP_
#define _RENDER_SYSTEM_HPP_

#include "System.hpp"
#include "../Game/Stats/PersonAttack.hpp"

#include <vector>
#include <map>
#include <string>


struct MeshData {
    std::string FileName;
    std::vector<std::string> Textures;
};

class RenderSystem final : public System {
public:
    ~RenderSystem() override = default;

    bool Initialize() override;

    void Update() override;

    void Destroy() override;

    void Render();

    // Flyweight
    bool LoadMesh(const std::string &inFileName, MeshData &outData) {
        auto founded = mMeshCache.find(inFileName);

        if (founded != std::end(mMeshCache)) {
            outData = founded->second;
            return true;
        }

        // load model file
        // parse model file data

        MeshData data;
        data.FileName = inFileName;
        mMeshCache.insert({inFileName, data});

        return true;
    }

private:

    std::map<std::string, MeshData> mMeshCache;

    std::string step = "Battle";//hard code
    PersonAttack Person;
    StatComponentData EnemyData;
};

#endif //_RENDER_SYSTEM_HPP_