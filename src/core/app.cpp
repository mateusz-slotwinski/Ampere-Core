#include "app.hpp"
#include "log.hpp"
#include "ampinc.hpp"

#include "events/event_window.hpp"

namespace Ampere {

#define BIND_EVENT_FN(x) std::bind(&App::x, this, std::placeholders::_1)

  App::App() {
    Log log; // Log init
    m_Window = std::unique_ptr<Window>(Window::Create());
    m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));

    AMP_INFO("Creating app");
  }
  App::~App() {}

  void App::OnEvent(Event& e) {
    AMP_CORE_INFO("{0}", e);
  }

  void App::Run() {
    while (m_Running) {
      // glClearColor(0.0, 0.6, 0.8, 1);
      m_Window->OnUpdate();
    }
  }
}