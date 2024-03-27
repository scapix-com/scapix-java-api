// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_PROLOGUE_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_PROLOGUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::counter::perf { class Prologue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::counter::perf::Prologue>
{
	static constexpr fixed_string class_name = "sun/management/counter/perf/Prologue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_PROLOGUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_PROLOGUE)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_PROLOGUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteOrder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::counter::perf::Prologue : public jni::object_base<"sun/management/counter/perf/Prologue",
	java::lang::Object>
{
public:

	jint getMagic() { return call_method<"getMagic", jint>(); }
	jint getMajorVersion() { return call_method<"getMajorVersion", jint>(); }
	jint getMinorVersion() { return call_method<"getMinorVersion", jint>(); }
	jni::ref<java::nio::ByteOrder> getByteOrder() { return call_method<"getByteOrder", jni::ref<java::nio::ByteOrder>>(); }
	jint getEntryOffset() { return call_method<"getEntryOffset", jint>(); }
	jint getUsed() { return call_method<"getUsed", jint>(); }
	jint getOverflow() { return call_method<"getOverflow", jint>(); }
	jlong getModificationTimeStamp() { return call_method<"getModificationTimeStamp", jlong>(); }
	jint getNumEntries() { return call_method<"getNumEntries", jint>(); }
	jboolean isAccessible() { return call_method<"isAccessible", jboolean>(); }

protected:

	Prologue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_COUNTER_PERF_PROLOGUE
