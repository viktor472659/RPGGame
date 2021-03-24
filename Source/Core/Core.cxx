
#include "Core.hpp"
#include "Utils.hpp"

bool Core::InitializeSystems()
{
    // Initialize Render System
    mRenderer = new RenderSystem();
    
    if (!mRenderer->Initialize())
    {
        std::cerr << "Failed to initialize Rendering System!\n";
        return false;
    }

}

void Core::DestroySystems()
{
    mRenderer->Destroy();

    Utils::SafeRelease( mRenderer, nullptr);
}

void Core::RunGameLoop()
{
   // while (!mQuit)
    for (int i = 0; i < 2; i++)
    {
        //some usefull code here

		mRenderer->Render();

		// render audio
		// update AI
    }
}

void Core::Quit()
{
    mQuit = true;
}

RenderSystem* Core::GetRenderSystem()
{
    return mRenderer;
}
