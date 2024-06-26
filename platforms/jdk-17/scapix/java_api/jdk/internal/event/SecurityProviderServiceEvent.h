// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/event/Event.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_SECURITYPROVIDERSERVICEEVENT_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_SECURITYPROVIDERSERVICEEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::event { class SecurityProviderServiceEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::event::SecurityProviderServiceEvent>
{
	static constexpr fixed_string class_name = "jdk/internal/event/SecurityProviderServiceEvent";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::event::Event>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_SECURITYPROVIDERSERVICEEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_SECURITYPROVIDERSERVICEEVENT)
#define SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_SECURITYPROVIDERSERVICEEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::event::SecurityProviderServiceEvent : public jni::object_base<"jdk/internal/event/SecurityProviderServiceEvent",
	jdk::internal::event::Event>
{
public:

	jni::ref<java::lang::String> type() { return get_field<"type", jni::ref<java::lang::String>>(); }
	void type(jni::ref<java::lang::String> v) { set_field<"type", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> algorithm() { return get_field<"algorithm", jni::ref<java::lang::String>>(); }
	void algorithm(jni::ref<java::lang::String> v) { set_field<"algorithm", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> provider() { return get_field<"provider", jni::ref<java::lang::String>>(); }
	void provider(jni::ref<java::lang::String> v) { set_field<"provider", jni::ref<java::lang::String>>(v); }

	static jni::ref<jdk::internal::event::SecurityProviderServiceEvent> new_object() { return base_::new_object(); }
	static jboolean isTurnedOn() { return call_static_method<"isTurnedOn", jboolean>(); }

protected:

	SecurityProviderServiceEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_EVENT_SECURITYPROVIDERSERVICEEVENT
