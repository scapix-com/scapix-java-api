// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/bind/ValidationEvent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_VALIDATIONEVENTIMPL_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_VALIDATIONEVENTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind::helpers { class ValidationEventImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::helpers::ValidationEventImpl>
{
	static constexpr fixed_string class_name = "javax/xml/bind/helpers/ValidationEventImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::bind::ValidationEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_VALIDATIONEVENTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_VALIDATIONEVENTIMPL)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_VALIDATIONEVENTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/javax/xml/bind/ValidationEventLocator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::helpers::ValidationEventImpl : public jni::object_base<"javax/xml/bind/helpers/ValidationEventImpl",
	java::lang::Object,
	javax::xml::bind::ValidationEvent>
{
public:

	static jni::ref<javax::xml::bind::helpers::ValidationEventImpl> new_object(jint p1, jni::ref<java::lang::String> p2, jni::ref<javax::xml::bind::ValidationEventLocator> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::xml::bind::helpers::ValidationEventImpl> new_object(jint p1, jni::ref<java::lang::String> p2, jni::ref<javax::xml::bind::ValidationEventLocator> p3, jni::ref<java::lang::Throwable> p4) { return base_::new_object(p1, p2, p3, p4); }
	jint getSeverity() { return call_method<"getSeverity", jint>(); }
	void setSeverity(jint p1) { return call_method<"setSeverity", void>(p1); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }
	void setMessage(jni::ref<java::lang::String> p1) { return call_method<"setMessage", void>(p1); }
	jni::ref<java::lang::Throwable> getLinkedException() { return call_method<"getLinkedException", jni::ref<java::lang::Throwable>>(); }
	void setLinkedException(jni::ref<java::lang::Throwable> p1) { return call_method<"setLinkedException", void>(p1); }
	jni::ref<javax::xml::bind::ValidationEventLocator> getLocator() { return call_method<"getLocator", jni::ref<javax::xml::bind::ValidationEventLocator>>(); }
	void setLocator(jni::ref<javax::xml::bind::ValidationEventLocator> p1) { return call_method<"setLocator", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ValidationEventImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_VALIDATIONEVENTIMPL