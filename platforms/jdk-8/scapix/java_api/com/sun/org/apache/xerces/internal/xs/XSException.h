// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::xs { class XSException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::xs::XSException>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/xs/XSException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::xs::XSException : public jni::object_base<"com/sun/org/apache/xerces/internal/xs/XSException",
	java::lang::RuntimeException>
{
public:

	jshort code() { return get_field<"code", jshort>(); }
	void code(jshort v) { set_field<"code", jshort>(v); }
	static jshort NOT_SUPPORTED_ERR() { return get_static_field<"NOT_SUPPORTED_ERR", jshort>(); }
	static jshort INDEX_SIZE_ERR() { return get_static_field<"INDEX_SIZE_ERR", jshort>(); }

	static jni::ref<com::sun::org::apache::xerces::internal::xs::XSException> new_object(jshort p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }

protected:

	XSException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSEXCEPTION
