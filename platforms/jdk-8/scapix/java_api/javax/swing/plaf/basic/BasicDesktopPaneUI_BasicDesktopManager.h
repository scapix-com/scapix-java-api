// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/DefaultDesktopManager.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDESKTOPPANEUI_BASICDESKTOPMANAGER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDESKTOPPANEUI_BASICDESKTOPMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicDesktopPaneUI_BasicDesktopManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicDesktopPaneUI_BasicDesktopManager>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicDesktopPaneUI$BasicDesktopManager";
	using base_classes = std::tuple<scapix::java_api::javax::swing::DefaultDesktopManager, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDESKTOPPANEUI_BASICDESKTOPMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDESKTOPPANEUI_BASICDESKTOPMANAGER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDESKTOPPANEUI_BASICDESKTOPMANAGER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicDesktopPaneUI_BasicDesktopManager : public jni::object_base<"javax/swing/plaf/basic/BasicDesktopPaneUI$BasicDesktopManager",
	javax::swing::DefaultDesktopManager,
	javax::swing::plaf::UIResource>
{
public:


protected:

	BasicDesktopPaneUI_BasicDesktopManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDESKTOPPANEUI_BASICDESKTOPMANAGER
