// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/GroupLayout_Spring.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_AUTOPREFERREDGAPSPRING_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_AUTOPREFERREDGAPSPRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class GroupLayout_AutoPreferredGapSpring; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::GroupLayout_AutoPreferredGapSpring>
{
	static constexpr fixed_string class_name = "javax/swing/GroupLayout$AutoPreferredGapSpring";
	using base_classes = std::tuple<scapix::java_api::javax::swing::GroupLayout_Spring>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_AUTOPREFERREDGAPSPRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_AUTOPREFERREDGAPSPRING)
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_AUTOPREFERREDGAPSPRING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/swing/GroupLayout_ComponentSpring.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::GroupLayout_AutoPreferredGapSpring : public jni::object_base<"javax/swing/GroupLayout$AutoPreferredGapSpring",
	javax::swing::GroupLayout_Spring>
{
public:

	void setSource(jni::ref<javax::swing::GroupLayout_ComponentSpring> p1) { return call_method<"setSource", void>(p1); }
	void setSources(jni::ref<java::util::List> p1) { return call_method<"setSources", void>(p1); }
	void setUserCreated(jboolean p1) { return call_method<"setUserCreated", void>(p1); }
	jboolean getUserCreated() { return call_method<"getUserCreated", jboolean>(); }
	void reset() { return call_method<"reset", void>(); }
	void calculatePadding(jint p1) { return call_method<"calculatePadding", void>(p1); }
	void addTarget(jni::ref<javax::swing::GroupLayout_ComponentSpring> p1, jint p2) { return call_method<"addTarget", void>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	GroupLayout_AutoPreferredGapSpring(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_AUTOPREFERREDGAPSPRING