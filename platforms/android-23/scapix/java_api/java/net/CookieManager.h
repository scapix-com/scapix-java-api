// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/CookieHandler.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_COOKIEMANAGER_FWD
#define SCAPIX_JAVA_API_JAVA_NET_COOKIEMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class CookieManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::CookieManager>
{
	static constexpr fixed_string class_name = "java/net/CookieManager";
	using base_classes = std::tuple<scapix::java_api::java::net::CookieHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_COOKIEMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_COOKIEMANAGER)
#define SCAPIX_JAVA_API_JAVA_NET_COOKIEMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/CookiePolicy.h>
#include <scapix/java_api/java/net/CookieStore.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::CookieManager : public jni::object_base<"java/net/CookieManager",
	java::net::CookieHandler>
{
public:

	static jni::ref<java::net::CookieManager> new_object() { return base_::new_object(); }
	static jni::ref<java::net::CookieManager> new_object(jni::ref<java::net::CookieStore> store, jni::ref<java::net::CookiePolicy> cookiePolicy) { return base_::new_object(store, cookiePolicy); }
	jni::ref<java::util::Map> get(jni::ref<java::net::URI> uri, jni::ref<java::util::Map> requestHeaders) { return call_method<"get", jni::ref<java::util::Map>>(uri, requestHeaders); }
	void put(jni::ref<java::net::URI> uri, jni::ref<java::util::Map> responseHeaders) { return call_method<"put", void>(uri, responseHeaders); }
	void setCookiePolicy(jni::ref<java::net::CookiePolicy> cookiePolicy) { return call_method<"setCookiePolicy", void>(cookiePolicy); }
	jni::ref<java::net::CookieStore> getCookieStore() { return call_method<"getCookieStore", jni::ref<java::net::CookieStore>>(); }

protected:

	CookieManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_COOKIEMANAGER
