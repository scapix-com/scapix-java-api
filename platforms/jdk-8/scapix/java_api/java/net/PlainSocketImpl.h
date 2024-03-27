// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/AbstractPlainSocketImpl.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_PLAINSOCKETIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_NET_PLAINSOCKETIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class PlainSocketImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::PlainSocketImpl>
{
	static constexpr fixed_string class_name = "java/net/PlainSocketImpl";
	using base_classes = std::tuple<scapix::java_api::java::net::AbstractPlainSocketImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_PLAINSOCKETIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_PLAINSOCKETIMPL)
#define SCAPIX_JAVA_API_JAVA_NET_PLAINSOCKETIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::net::PlainSocketImpl : public jni::object_base<"java/net/PlainSocketImpl",
	java::net::AbstractPlainSocketImpl>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void setOption(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"setOption", void>(p1, p2); }
	jni::ref<java::lang::Object> getOption(jint p1) { return call_method<"getOption", jni::ref<java::lang::Object>>(p1); }
	jboolean isConnectionReset() { return call_method<"isConnectionReset", jboolean>(); }
	jboolean isConnectionResetPending() { return call_method<"isConnectionResetPending", jboolean>(); }
	void setConnectionReset() { return call_method<"setConnectionReset", void>(); }
	void setConnectionResetPending() { return call_method<"setConnectionResetPending", void>(); }
	jboolean isClosedOrPending() { return call_method<"isClosedOrPending", jboolean>(); }
	jint getTimeout() { return call_method<"getTimeout", jint>(); }

protected:

	PlainSocketImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_PLAINSOCKETIMPL
