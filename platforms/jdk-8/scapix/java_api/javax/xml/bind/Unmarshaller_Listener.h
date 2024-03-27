// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_UNMARSHALLER_LISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_UNMARSHALLER_LISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind { class Unmarshaller_Listener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::Unmarshaller_Listener>
{
	static constexpr fixed_string class_name = "javax/xml/bind/Unmarshaller$Listener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_UNMARSHALLER_LISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_UNMARSHALLER_LISTENER)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_UNMARSHALLER_LISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::Unmarshaller_Listener : public jni::object_base<"javax/xml/bind/Unmarshaller$Listener",
	java::lang::Object>
{
public:

	static jni::ref<javax::xml::bind::Unmarshaller_Listener> new_object() { return base_::new_object(); }
	void beforeUnmarshal(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"beforeUnmarshal", void>(p1, p2); }
	void afterUnmarshal(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"afterUnmarshal", void>(p1, p2); }

protected:

	Unmarshaller_Listener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_UNMARSHALLER_LISTENER