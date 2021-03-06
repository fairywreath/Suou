#pragma once

#include <memory>

#include <SuouBase.h>
#include <Window.h>

#include <RenderLib/RenderDevice.h>

namespace Suou
{

class Application
{
public:
    Application();
    ~Application();

    SUOU_NON_COPYABLE(Application);
    SUOU_NON_MOVEABLE(Application);

    void run();

    void init();
    void destroy();

private:
    bool mIsInitialized;

    std::unique_ptr<Window> mMainWindow;
    std::unique_ptr<RenderDevice> mRenderDevice;
};

} // namespace Suou
