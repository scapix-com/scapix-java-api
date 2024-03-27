// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_URLDECODER_FWD
#define SCAPIX_JAVA_API_JAVA_NET_URLDECODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class URLDecoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::URLDecoder>
{
	static constexpr fixed_string class_name = "java/net/URLDecoder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_URLDECODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_URLDECODER)
#define SCAPIX_JAVA_API_JAVA_NET_URLDECODER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::URLDecoder : public jni::object_base<"java/net/URLDecoder",
	java::lang::Object>
{
public:

	static jni::ref<java::net::URLDecoder> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> decode(jni::ref<java::lang::String> s) { return call_static_method<"decode", jni::ref<java::lang::String>>(s); }
	static jni::ref<java::lang::String> decode(jni::ref<java::lang::String> s, jni::ref<java::lang::String> enc) { return call_static_method<"decode", jni::ref<java::lang::String>>(s, enc); }

protected:

	URLDecoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_URLDECODER
