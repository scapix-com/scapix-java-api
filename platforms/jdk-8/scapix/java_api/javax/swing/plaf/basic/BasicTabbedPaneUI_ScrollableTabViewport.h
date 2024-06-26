// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JViewport.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABBEDPANEUI_SCROLLABLETABVIEWPORT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABBEDPANEUI_SCROLLABLETABVIEWPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicTabbedPaneUI_ScrollableTabViewport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicTabbedPaneUI_ScrollableTabViewport>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabViewport";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JViewport, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABBEDPANEUI_SCROLLABLETABVIEWPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABBEDPANEUI_SCROLLABLETABVIEWPORT)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABBEDPANEUI_SCROLLABLETABVIEWPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicTabbedPaneUI_ScrollableTabViewport : public jni::object_base<"javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabViewport",
	javax::swing::JViewport,
	javax::swing::plaf::UIResource>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicTabbedPaneUI_ScrollableTabViewport> new_object(jni::ref<javax::swing::plaf::basic::BasicTabbedPaneUI> p1) { return base_::new_object(p1); }

protected:

	BasicTabbedPaneUI_ScrollableTabViewport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABBEDPANEUI_SCROLLABLETABVIEWPORT
