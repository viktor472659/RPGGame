
#pragma once

#ifndef _STAT_COMPONENT_HPP_
#define _STAT_COMPONENT_HPP_

#include <string>

#include "../../Core/Component.hpp"

struct StatComponentData
{
    int Health;
    int Attack;
    int Speed;
    int Defense;
};

class StatComponent : public Component
{
public:
    StatComponent( std::string inName, int inLevel );
    StatComponent( const std::string &inName, int inLevel, const StatComponentData &inData );

    /* Life-Cycle Methods */
    void Render() override;
    void Update() override;
    void Destroy() override;

    void SetStatData( const StatComponentData &inData );
    StatComponentData& GetStatData();

    // get/set 
    std::string GetName() const;
    int GetLevel() const;

private:
    std::string mName;
    StatComponentData mStat;
    int mLevel;
};

#endif //_STAT_COMPONENT_HPP_