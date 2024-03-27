// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/xml/bind/JAXBException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_VALIDATIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_VALIDATIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind { class ValidationException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::ValidationException>
{
	static constexpr fixed_string class_name = "javax/xml/bind/ValidationException";
	using base_classes = std::tuple<scapix::java_api::javax::xml::bind::JAXBException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_VALIDATIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_VALIDATIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_VALIDATIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::ValidationException : public jni::object_base<"javax/xml/bind/ValidationException",
	javax::xml::bind::JAXBException>
{
public:

	static jni::ref<javax::xml::bind::ValidationException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::bind::ValidationException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::xml::bind::ValidationException> new_object(jni::ref<java::lang::Throwable> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::bind::ValidationException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::xml::bind::ValidationException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Throwable> p3) { return base_::new_object(p1, p2, p3); }

protected:

	ValidationException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_VALIDATIONEXCEPTION
