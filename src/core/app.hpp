#pragma once

#include "core/core.hpp"
#include "events/event.hpp"
#include "core/window.hpp"

namespace Ampere {
  class AMPERE_API App {
    public:
      App();
      ~App();
      void OnEvent(Event& e);
      void Run();

    private:
      std::unique_ptr<Window> m_Window;
      bool m_Running = true;
  };
}