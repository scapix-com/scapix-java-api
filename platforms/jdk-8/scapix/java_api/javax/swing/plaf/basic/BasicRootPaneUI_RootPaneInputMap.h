// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/ComponentInputMapUIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICROOTPANEUI_ROOTPANEINPUTMAP_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICROOTPANEUI_ROOTPANEINPUTMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicRootPaneUI_RootPaneInputMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicRootPaneUI_RootPaneInputMap>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicRootPaneUI$RootPaneInputMap";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::ComponentInputMapUIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICROOTPANEUI_ROOTPANEINPUTMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICROOTPANEUI_ROOTPANEINPUTMAP)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICROOTPANEUI_ROOTPANEINPUTMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/JComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicRootPaneUI_RootPaneInputMap : public jni::object_base<"javax/swing/plaf/basic/BasicRootPaneUI$RootPaneInputMap",
	javax::swing::plaf::ComponentInputMapUIResource>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicRootPaneUI_RootPaneInputMap> new_object(jni::ref<javax::swing::JComponent> p1) { return base_::new_object(p1); }

protected:

	BasicRootPaneUI_RootPaneInputMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICROOTPANEUI_ROOTPANEINPUTMAP