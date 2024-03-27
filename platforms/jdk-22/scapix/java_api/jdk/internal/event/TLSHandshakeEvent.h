// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/event/Event.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_TLSHANDSHAKEEVENT_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_TLSHANDSHAKEEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::event { class TLSHandshakeEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::event::TLSHandshakeEvent>
{
	static constexpr fixed_string class_name = "jdk/internal/event/TLSHandshakeEvent";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::event::Event>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_TLSHANDSHAKEEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_TLSHANDSHAKEEVENT)
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_TLSHANDSHAKEEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::event::TLSHandshakeEvent : public jni::object_base<"jdk/internal/event/TLSHandshakeEvent",
	jdk::internal::event::Event>
{
public:

	jni::ref<java::lang::String> peerHost() { return get_field<"peerHost", jni::ref<java::lang::String>>(); }
	void peerHost(jni::ref<java::lang::String> v) { set_field<"peerHost", jni::ref<java::lang::String>>(v); }
	jint peerPort() { return get_field<"peerPort", jint>(); }
	void peerPort(jint v) { set_field<"peerPort", jint>(v); }
	jni::ref<java::lang::String> protocolVersion() { return get_field<"protocolVersion", jni::ref<java::lang::String>>(); }
	void protocolVersion(jni::ref<java::lang::String> v) { set_field<"protocolVersion", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> cipherSuite() { return get_field<"cipherSuite", jni::ref<java::lang::String>>(); }
	void cipherSuite(jni::ref<java::lang::String> v) { set_field<"cipherSuite", jni::ref<java::lang::String>>(v); }
	jlong certificateId() { return get_field<"certificateId", jlong>(); }
	void certificateId(jlong v) { set_field<"certificateId", jlong>(v); }

	static jni::ref<jdk::internal::event::TLSHandshakeEvent> new_object() { return base_::new_object(); }

protected:

	TLSHandshakeEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_TLSHANDSHAKEEVENT
