// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/management/MemoryManagerMXBean.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_GARBAGECOLLECTORMXBEAN_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_GARBAGECOLLECTORMXBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::management { class GarbageCollectorMXBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::management::GarbageCollectorMXBean>
{
	static constexpr fixed_string class_name = "java/lang/management/GarbageCollectorMXBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::management::MemoryManagerMXBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_GARBAGECOLLECTORMXBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_GARBAGECOLLECTORMXBEAN)
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_GARBAGECOLLECTORMXBEAN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::management::GarbageCollectorMXBean : public jni::object_base<"java/lang/management/GarbageCollectorMXBean",
	java::lang::Object,
	java::lang::management::MemoryManagerMXBean>
{
public:

	jlong getCollectionCount() { return call_method<"getCollectionCount", jlong>(); }
	jlong getCollectionTime() { return call_method<"getCollectionTime", jlong>(); }

protected:

	GarbageCollectorMXBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_GARBAGECOLLECTORMXBEAN
