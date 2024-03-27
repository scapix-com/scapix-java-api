// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_ABSTRACTCOUNTER_FLAGS_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_ABSTRACTCOUNTER_FLAGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::counter { class AbstractCounter_Flags; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::counter::AbstractCounter_Flags>
{
	static constexpr fixed_string class_name = "sun/management/counter/AbstractCounter$Flags";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_ABSTRACTCOUNTER_FLAGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_ABSTRACTCOUNTER_FLAGS)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_ABSTRACTCOUNTER_FLAGS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::counter::AbstractCounter_Flags : public jni::object_base<"sun/management/counter/AbstractCounter$Flags",
	java::lang::Object>
{
public:


protected:

	AbstractCounter_Flags(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_ABSTRACTCOUNTER_FLAGS
