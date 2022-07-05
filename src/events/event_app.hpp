#pragma once
#include "../ampinc.hpp"
#include "./event.hpp"

namespace Ampere {
  class AMPERE_API AppTickEvent : public Event {
    public:
      AppTickEvent() {}

      EVENT_CLASS_TYPE(AppTick);
      EVENT_CLASS_CATEGORY(EventCategoryApp);
  };

  class AMPERE_API AppUpdateEvent : public Event {
    public:
      AppUpdateEvent() {}

      EVENT_CLASS_TYPE(AppUpdate);
      EVENT_CLASS_CATEGORY(EventCategoryApp);
  };

  class AMPERE_API AppRendereEvent : public Event {
    public:
      AppRendereEvent() {}

      EVENT_CLASS_TYPE(AppRender);
      EVENT_CLASS_CATEGORY(EventCategoryApp);
  };
}