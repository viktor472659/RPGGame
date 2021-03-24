
#pragma once

#ifndef _CORE_HPP_
#define _CORE_HPP_

#include <vector>
#include <iostream>

#include "RenderSystem.hpp"
class Core final
{

public:
    Core(const Core&) = delete;
    Core(Core&&) = delete;

    Core& operator=(const Core&) = delete;
    Core& operator=(Core&&) = delete;

    static Core& Shared()
    {
        static Core instance;
        return instance;
    }

    bool InitializeSystems();

    void DestroySystems();

    void RunGameLoop();

    void Quit();

    RenderSystem* GetRenderSystem();

private:
    Core()
        : mQuit(false)
    { }

private:
    RenderSystem* mRenderer;

    bool mQuit;
};

#endif //_CORE_HPP_