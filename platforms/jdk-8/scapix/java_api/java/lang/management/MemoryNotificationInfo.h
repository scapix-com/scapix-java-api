// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_MEMORYNOTIFICATIONINFO_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_MEMORYNOTIFICATIONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::management { class MemoryNotificationInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::management::MemoryNotificationInfo>
{
	static constexpr fixed_string class_name = "java/lang/management/MemoryNotificationInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_MEMORYNOTIFICATIONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_MEMORYNOTIFICATIONINFO)
#define SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_MEMORYNOTIFICATIONINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/management/MemoryUsage.h>
#include <scapix/java_api/javax/management/openmbean/CompositeData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::management::MemoryNotificationInfo : public jni::object_base<"java/lang/management/MemoryNotificationInfo",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> MEMORY_THRESHOLD_EXCEEDED() { return get_static_field<"MEMORY_THRESHOLD_EXCEEDED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MEMORY_COLLECTION_THRESHOLD_EXCEEDED() { return get_static_field<"MEMORY_COLLECTION_THRESHOLD_EXCEEDED", jni::ref<java::lang::String>>(); }

	static jni::ref<java::lang::management::MemoryNotificationInfo> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::management::MemoryUsage> p2, jlong p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::lang::String> getPoolName() { return call_method<"getPoolName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::management::MemoryUsage> getUsage() { return call_method<"getUsage", jni::ref<java::lang::management::MemoryUsage>>(); }
	jlong getCount() { return call_method<"getCount", jlong>(); }
	static jni::ref<java::lang::management::MemoryNotificationInfo> from(jni::ref<javax::management::openmbean::CompositeData> p1) { return call_static_method<"from", jni::ref<java::lang::management::MemoryNotificationInfo>>(p1); }

protected:

	MemoryNotificationInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MANAGEMENT_MEMORYNOTIFICATIONINFO