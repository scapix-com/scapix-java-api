// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/GroupLayout_ParallelGroup.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_BASELINEGROUP_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_BASELINEGROUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class GroupLayout_BaselineGroup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::GroupLayout_BaselineGroup>
{
	static constexpr fixed_string class_name = "javax/swing/GroupLayout$BaselineGroup";
	using base_classes = std::tuple<scapix::java_api::javax::swing::GroupLayout_ParallelGroup>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_BASELINEGROUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_BASELINEGROUP)
#define SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_BASELINEGROUP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::GroupLayout_BaselineGroup : public jni::object_base<"javax/swing/GroupLayout$BaselineGroup",
	javax::swing::GroupLayout_ParallelGroup>
{
public:


protected:

	GroupLayout_BaselineGroup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_GROUPLAYOUT_BASELINEGROUP
