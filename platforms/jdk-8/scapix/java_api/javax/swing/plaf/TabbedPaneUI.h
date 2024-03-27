// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TABBEDPANEUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TABBEDPANEUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf { class TabbedPaneUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::TabbedPaneUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/TabbedPaneUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::ComponentUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TABBEDPANEUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TABBEDPANEUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TABBEDPANEUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/javax/swing/JTabbedPane.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::TabbedPaneUI : public jni::object_base<"javax/swing/plaf/TabbedPaneUI",
	javax::swing::plaf::ComponentUI>
{
public:

	static jni::ref<javax::swing::plaf::TabbedPaneUI> new_object() { return base_::new_object(); }
	jint tabForCoordinate(jni::ref<javax::swing::JTabbedPane> p1, jint p2, jint p3) { return call_method<"tabForCoordinate", jint>(p1, p2, p3); }
	jni::ref<java::awt::Rectangle> getTabBounds(jni::ref<javax::swing::JTabbedPane> p1, jint p2) { return call_method<"getTabBounds", jni::ref<java::awt::Rectangle>>(p1, p2); }
	jint getTabRunCount(jni::ref<javax::swing::JTabbedPane> p1) { return call_method<"getTabRunCount", jint>(p1); }

protected:

	TabbedPaneUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TABBEDPANEUI
