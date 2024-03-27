// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_ROOTPANECONTAINER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_ROOTPANECONTAINER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class RootPaneContainer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::RootPaneContainer>
{
	static constexpr fixed_string class_name = "javax/swing/RootPaneContainer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ROOTPANECONTAINER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_ROOTPANECONTAINER)
#define SCAPIX_JAVA_API_JAVAX_SWING_ROOTPANECONTAINER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/javax/swing/JLayeredPane.h>
#include <scapix/java_api/javax/swing/JRootPane.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::RootPaneContainer : public jni::object_base<"javax/swing/RootPaneContainer",
	java::lang::Object>
{
public:

	jni::ref<javax::swing::JRootPane> getRootPane() { return call_method<"getRootPane", jni::ref<javax::swing::JRootPane>>(); }
	void setContentPane(jni::ref<java::awt::Container> p1) { return call_method<"setContentPane", void>(p1); }
	jni::ref<java::awt::Container> getContentPane() { return call_method<"getContentPane", jni::ref<java::awt::Container>>(); }
	void setLayeredPane(jni::ref<javax::swing::JLayeredPane> p1) { return call_method<"setLayeredPane", void>(p1); }
	jni::ref<javax::swing::JLayeredPane> getLayeredPane() { return call_method<"getLayeredPane", jni::ref<javax::swing::JLayeredPane>>(); }
	void setGlassPane(jni::ref<java::awt::Component> p1) { return call_method<"setGlassPane", void>(p1); }
	jni::ref<java::awt::Component> getGlassPane() { return call_method<"getGlassPane", jni::ref<java::awt::Component>>(); }

protected:

	RootPaneContainer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ROOTPANECONTAINER
