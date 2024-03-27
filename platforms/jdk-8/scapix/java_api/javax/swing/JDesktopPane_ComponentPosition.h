// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JDESKTOPPANE_COMPONENTPOSITION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JDESKTOPPANE_COMPONENTPOSITION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JDesktopPane_ComponentPosition; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JDesktopPane_ComponentPosition>
{
	static constexpr fixed_string class_name = "javax/swing/JDesktopPane$ComponentPosition";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JDESKTOPPANE_COMPONENTPOSITION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JDESKTOPPANE_COMPONENTPOSITION)
#define SCAPIX_JAVA_API_JAVAX_SWING_JDESKTOPPANE_COMPONENTPOSITION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::JDesktopPane_ComponentPosition : public jni::object_base<"javax/swing/JDesktopPane$ComponentPosition",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	jint compareTo(jni::ref<javax::swing::JDesktopPane_ComponentPosition> p1) { return call_method<"compareTo", jint>(p1); }

protected:

	JDesktopPane_ComponentPosition(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JDESKTOPPANE_COMPONENTPOSITION
