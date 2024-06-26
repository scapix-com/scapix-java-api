// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/GroupLayout_AutoPreferredGapSpring.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_CONTAINERAUTOPREFERREDGAPSPRING_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_CONTAINERAUTOPREFERREDGAPSPRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class GroupLayout_ContainerAutoPreferredGapSpring; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::GroupLayout_ContainerAutoPreferredGapSpring>
{
	static constexpr fixed_string class_name = "javax/swing/GroupLayout$ContainerAutoPreferredGapSpring";
	using base_classes = std::tuple<scapix::java_api::javax::swing::GroupLayout_AutoPreferredGapSpring>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_CONTAINERAUTOPREFERREDGAPSPRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_CONTAINERAUTOPREFERREDGAPSPRING)
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_CONTAINERAUTOPREFERREDGAPSPRING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/GroupLayout_ComponentSpring.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::GroupLayout_ContainerAutoPreferredGapSpring : public jni::object_base<"javax/swing/GroupLayout$ContainerAutoPreferredGapSpring",
	javax::swing::GroupLayout_AutoPreferredGapSpring>
{
public:

	void addTarget(jni::ref<javax::swing::GroupLayout_ComponentSpring> p1, jint p2) { return call_method<"addTarget", void>(p1, p2); }
	void calculatePadding(jint p1) { return call_method<"calculatePadding", void>(p1); }

protected:

	GroupLayout_ContainerAutoPreferredGapSpring(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_CONTAINERAUTOPREFERREDGAPSPRING
