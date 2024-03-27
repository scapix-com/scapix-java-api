// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_PROGRESSMETERINGPOLICY_FWD
#define SCAPIX_JAVA_API_SUN_NET_PROGRESSMETERINGPOLICY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net { class ProgressMeteringPolicy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::ProgressMeteringPolicy>
{
	static constexpr fixed_string class_name = "sun/net/ProgressMeteringPolicy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_PROGRESSMETERINGPOLICY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_PROGRESSMETERINGPOLICY)
#define SCAPIX_JAVA_API_SUN_NET_PROGRESSMETERINGPOLICY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::ProgressMeteringPolicy : public jni::object_base<"sun/net/ProgressMeteringPolicy",
	java::lang::Object>
{
public:

	jboolean shouldMeterInput(jni::ref<java::net::URL> p1, jni::ref<java::lang::String> p2) { return call_method<"shouldMeterInput", jboolean>(p1, p2); }
	jint getProgressUpdateThreshold() { return call_method<"getProgressUpdateThreshold", jint>(); }

protected:

	ProgressMeteringPolicy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_PROGRESSMETERINGPOLICY