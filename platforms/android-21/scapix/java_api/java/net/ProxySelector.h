// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_PROXYSELECTOR_FWD
#define SCAPIX_JAVA_API_JAVA_NET_PROXYSELECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class ProxySelector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::ProxySelector>
{
	static constexpr fixed_string class_name = "java/net/ProxySelector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_PROXYSELECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_PROXYSELECTOR)
#define SCAPIX_JAVA_API_JAVA_NET_PROXYSELECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/IOException.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::ProxySelector : public jni::object_base<"java/net/ProxySelector",
	java::lang::Object>
{
public:

	static jni::ref<java::net::ProxySelector> new_object() { return base_::new_object(); }
	static jni::ref<java::net::ProxySelector> getDefault() { return call_static_method<"getDefault", jni::ref<java::net::ProxySelector>>(); }
	static void setDefault(jni::ref<java::net::ProxySelector> selector) { return call_static_method<"setDefault", void>(selector); }
	jni::ref<java::util::List> select(jni::ref<java::net::URI> p1) { return call_method<"select", jni::ref<java::util::List>>(p1); }
	void connectFailed(jni::ref<java::net::URI> p1, jni::ref<java::net::SocketAddress> p2, jni::ref<java::io::IOException> p3) { return call_method<"connectFailed", void>(p1, p2, p3); }

protected:

	ProxySelector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_PROXYSELECTOR
