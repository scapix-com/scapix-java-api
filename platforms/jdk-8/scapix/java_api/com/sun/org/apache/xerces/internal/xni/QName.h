// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_QNAME_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_QNAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::xni { class QName; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::xni::QName>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/xni/QName";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_QNAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_QNAME)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_QNAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::xni::QName : public jni::object_base<"com/sun/org/apache/xerces/internal/xni/QName",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	jni::ref<java::lang::String> prefix() { return get_field<"prefix", jni::ref<java::lang::String>>(); }
	void prefix(jni::ref<java::lang::String> v) { set_field<"prefix", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> localpart() { return get_field<"localpart", jni::ref<java::lang::String>>(); }
	void localpart(jni::ref<java::lang::String> v) { set_field<"localpart", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> rawname() { return get_field<"rawname", jni::ref<java::lang::String>>(); }
	void rawname(jni::ref<java::lang::String> v) { set_field<"rawname", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> uri() { return get_field<"uri", jni::ref<java::lang::String>>(); }
	void uri(jni::ref<java::lang::String> v) { set_field<"uri", jni::ref<java::lang::String>>(v); }

	static jni::ref<com::sun::org::apache::xerces::internal::xni::QName> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::xni::QName> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<com::sun::org::apache::xerces::internal::xni::QName> new_object(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1) { return base_::new_object(p1); }
	void setValues(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1) { return call_method<"setValues", void>(p1); }
	void setValues(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return call_method<"setValues", void>(p1, p2, p3, p4); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	QName(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XNI_QNAME
