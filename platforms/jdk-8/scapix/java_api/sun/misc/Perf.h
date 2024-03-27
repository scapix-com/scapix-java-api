// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_PERF_FWD
#define SCAPIX_JAVA_API_SUN_MISC_PERF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class Perf; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::Perf>
{
	static constexpr fixed_string class_name = "sun/misc/Perf";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_PERF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_PERF)
#define SCAPIX_JAVA_API_SUN_MISC_PERF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/misc/Perf_GetPerfAction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::Perf : public jni::object_base<"sun/misc/Perf",
	java::lang::Object>
{
public:

	using GetPerfAction = Perf_GetPerfAction;

	static jni::ref<sun::misc::Perf> getPerf() { return call_static_method<"getPerf", jni::ref<sun::misc::Perf>>(); }
	jni::ref<java::nio::ByteBuffer> attach(jint p1, jni::ref<java::lang::String> p2) { return call_method<"attach", jni::ref<java::nio::ByteBuffer>>(p1, p2); }
	jni::ref<java::nio::ByteBuffer> attach(jni::ref<java::lang::String> p1, jint p2, jni::ref<java::lang::String> p3) { return call_method<"attach", jni::ref<java::nio::ByteBuffer>>(p1, p2, p3); }
	jni::ref<java::nio::ByteBuffer> createLong(jni::ref<java::lang::String> p1, jint p2, jint p3, jlong p4) { return call_method<"createLong", jni::ref<java::nio::ByteBuffer>>(p1, p2, p3, p4); }
	jni::ref<java::nio::ByteBuffer> createString(jni::ref<java::lang::String> p1, jint p2, jint p3, jni::ref<java::lang::String> p4, jint p5) { return call_method<"createString", jni::ref<java::nio::ByteBuffer>>(p1, p2, p3, p4, p5); }
	jni::ref<java::nio::ByteBuffer> createString(jni::ref<java::lang::String> p1, jint p2, jint p3, jni::ref<java::lang::String> p4) { return call_method<"createString", jni::ref<java::nio::ByteBuffer>>(p1, p2, p3, p4); }
	jni::ref<java::nio::ByteBuffer> createByteArray(jni::ref<java::lang::String> p1, jint p2, jint p3, jni::ref<jni::array<jbyte>> p4, jint p5) { return call_method<"createByteArray", jni::ref<java::nio::ByteBuffer>>(p1, p2, p3, p4, p5); }
	jlong highResCounter() { return call_method<"highResCounter", jlong>(); }
	jlong highResFrequency() { return call_method<"highResFrequency", jlong>(); }

protected:

	Perf(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_PERF
