// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_VALIDATIONEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_VALIDATIONEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind { class ValidationEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::ValidationEvent>
{
	static constexpr fixed_string class_name = "javax/xml/bind/ValidationEvent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_VALIDATIONEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_VALIDATIONEVENT)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_VALIDATIONEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/javax/xml/bind/ValidationEventLocator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::ValidationEvent : public jni::object_base<"javax/xml/bind/ValidationEvent",
	java::lang::Object>
{
public:

	static jint WARNING() { return get_static_field<"WARNING", jint>(); }
	static jint ERROR() { return get_static_field<"ERROR", jint>(); }
	static jint FATAL_ERROR() { return get_static_field<"FATAL_ERROR", jint>(); }

	jint getSeverity() { return call_method<"getSeverity", jint>(); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Throwable> getLinkedException() { return call_method<"getLinkedException", jni::ref<java::lang::Throwable>>(); }
	jni::ref<javax::xml::bind::ValidationEventLocator> getLocator() { return call_method<"getLocator", jni::ref<javax::xml::bind::ValidationEventLocator>>(); }

protected:

	ValidationEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_VALIDATIONEVENT
