// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_HTTP_HEADERBLOCK_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_HEADERBLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::http { class HeaderBlock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::http::HeaderBlock>
{
	static constexpr fixed_string class_name = "android/net/http/HeaderBlock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_HEADERBLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_HTTP_HEADERBLOCK)
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_HEADERBLOCK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::http::HeaderBlock : public jni::object_base<"android/net/http/HeaderBlock",
	java::lang::Object>
{
public:

	static jni::ref<android::net::http::HeaderBlock> new_object() { return base_::new_object(); }
	jni::ref<java::util::List> getAsList() { return call_method<"getAsList", jni::ref<java::util::List>>(); }
	jni::ref<java::util::Map> getAsMap() { return call_method<"getAsMap", jni::ref<java::util::Map>>(); }

protected:

	HeaderBlock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_HEADERBLOCK
