// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_EVENTHELPER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_EVENTHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::event { class EventHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::event::EventHelper>
{
	static constexpr fixed_string class_name = "jdk/internal/event/EventHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_EVENTHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_EVENTHELPER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_EVENTHELPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Instant.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::event::EventHelper : public jni::object_base<"jdk/internal/event/EventHelper",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::event::EventHelper> new_object() { return base_::new_object(); }
	static void logTLSHandshakeEvent(jni::ref<java::time::Instant> start, jni::ref<java::lang::String> peerHost, jint peerPort, jni::ref<java::lang::String> cipherSuite, jni::ref<java::lang::String> protocolVersion, jlong peerCertId) { return call_static_method<"logTLSHandshakeEvent", void>(start, peerHost, peerPort, cipherSuite, protocolVersion, peerCertId); }
	static void logSecurityPropertyEvent(jni::ref<java::lang::String> key, jni::ref<java::lang::String> value) { return call_static_method<"logSecurityPropertyEvent", void>(key, value); }
	static void logX509ValidationEvent(jlong anchorCertId, jni::ref<jni::array<jlong>> p2) { return call_static_method<"logX509ValidationEvent", void>(anchorCertId, p2); }
	static void logX509CertificateEvent(jni::ref<java::lang::String> algId, jni::ref<java::lang::String> serialNum, jni::ref<java::lang::String> subject, jni::ref<java::lang::String> issuer, jni::ref<java::lang::String> keyType, jint length, jlong certId, jlong p8, jlong beginDate) { return call_static_method<"logX509CertificateEvent", void>(algId, serialNum, subject, issuer, keyType, length, certId, p8, beginDate); }
	static jboolean isLoggingSecurity() { return call_static_method<"isLoggingSecurity", jboolean>(); }

protected:

	EventHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_EVENTHELPER
