
#include <iostream>
#include <utility>

#include "StatComponent.hpp"

StatComponent::StatComponent( std::string inName, int inLevel )
    : mName(std::move(inName))
    , mLevel(inLevel)
{ 
    memset( &mStat, 0, sizeof(StatComponentData) );
}

StatComponent::StatComponent( const std::string &inName, int inLevel, const StatComponentData &inData )
    : StatComponent(inName, inLevel)
{ 
    mStat = inData;
}

/* Life-Cycle Methods */

void StatComponent::Render()
{
    std::cout << "Render stat component\n";
}

void StatComponent::Update() 
{
    std::cout << "Update stat component\n";
}

void StatComponent::Destroy() 
{
    std::cout << "Destroy stat component\n";
}

void StatComponent::SetStatData( const StatComponentData &inData ) 
{
     mStat = inData; 
}

StatComponentData& StatComponent::GetStatData() 
{
    return mStat; 
}

std::string StatComponent::GetName() const 
{
    return mName; 
}

int StatComponent::GetLevel() const 
{ 
    return mLevel; 
}