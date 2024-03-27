// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_GC_LATENCYLOCK_FWD
#define SCAPIX_JAVA_API_SUN_MISC_GC_LATENCYLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class GC_LatencyLock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::GC_LatencyLock>
{
	static constexpr fixed_string class_name = "sun/misc/GC$LatencyLock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_GC_LATENCYLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_GC_LATENCYLOCK)
#define SCAPIX_JAVA_API_SUN_MISC_GC_LATENCYLOCK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::misc::GC_LatencyLock : public jni::object_base<"sun/misc/GC$LatencyLock",
	java::lang::Object>
{
public:


protected:

	GC_LatencyLock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_GC_LATENCYLOCK
