// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_PROGRESSSOURCE_FWD
#define SCAPIX_JAVA_API_SUN_NET_PROGRESSSOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net { class ProgressSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::ProgressSource>
{
	static constexpr fixed_string class_name = "sun/net/ProgressSource";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_PROGRESSSOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_PROGRESSSOURCE)
#define SCAPIX_JAVA_API_SUN_NET_PROGRESSSOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/sun/net/ProgressSource_State.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::ProgressSource : public jni::object_base<"sun/net/ProgressSource",
	java::lang::Object>
{
public:

	using State = ProgressSource_State;

	static jni::ref<sun::net::ProgressSource> new_object(jni::ref<java::net::URL> url, jni::ref<java::lang::String> method) { return base_::new_object(url, method); }
	static jni::ref<sun::net::ProgressSource> new_object(jni::ref<java::net::URL> url, jni::ref<java::lang::String> method, jlong expected) { return base_::new_object(url, method, expected); }
	jboolean connected() { return call_method<"connected", jboolean>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::net::URL> getURL() { return call_method<"getURL", jni::ref<java::net::URL>>(); }
	jni::ref<java::lang::String> getMethod() { return call_method<"getMethod", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getContentType() { return call_method<"getContentType", jni::ref<java::lang::String>>(); }
	void setContentType(jni::ref<java::lang::String> ct) { return call_method<"setContentType", void>(ct); }
	jlong getProgress() { return call_method<"getProgress", jlong>(); }
	jlong getExpected() { return call_method<"getExpected", jlong>(); }
	jni::ref<sun::net::ProgressSource_State> getState() { return call_method<"getState", jni::ref<sun::net::ProgressSource_State>>(); }
	void beginTracking() { return call_method<"beginTracking", void>(); }
	void finishTracking() { return call_method<"finishTracking", void>(); }
	void updateProgress(jlong latestProgress, jlong p2) { return call_method<"updateProgress", void>(latestProgress, p2); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ProgressSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_PROGRESSSOURCE
