// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net::ssl { class SSLSessionBindingEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::ssl::SSLSessionBindingEvent>
{
	static constexpr fixed_string class_name = "javax/net/ssl/SSLSessionBindingEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT)
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/net/ssl/SSLSession.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::net::ssl::SSLSessionBindingEvent : public jni::object_base<"javax/net/ssl/SSLSessionBindingEvent",
	java::util::EventObject>
{
public:

	static jni::ref<javax::net::ssl::SSLSessionBindingEvent> new_object(jni::ref<javax::net::ssl::SSLSession> session, jni::ref<java::lang::String> name) { return base_::new_object(session, name); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<javax::net::ssl::SSLSession> getSession() { return call_method<"getSession", jni::ref<javax::net::ssl::SSLSession>>(); }

protected:

	SSLSessionBindingEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSIONBINDINGEVENT
