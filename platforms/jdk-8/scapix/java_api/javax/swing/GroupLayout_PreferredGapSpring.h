// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/GroupLayout_Spring.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_PREFERREDGAPSPRING_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_PREFERREDGAPSPRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class GroupLayout_PreferredGapSpring; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::GroupLayout_PreferredGapSpring>
{
	static constexpr fixed_string class_name = "javax/swing/GroupLayout$PreferredGapSpring";
	using base_classes = std::tuple<scapix::java_api::javax::swing::GroupLayout_Spring>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_PREFERREDGAPSPRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_PREFERREDGAPSPRING)
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_PREFERREDGAPSPRING

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::GroupLayout_PreferredGapSpring : public jni::object_base<"javax/swing/GroupLayout$PreferredGapSpring",
	javax::swing::GroupLayout_Spring>
{
public:


protected:

	GroupLayout_PreferredGapSpring(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_PREFERREDGAPSPRING
