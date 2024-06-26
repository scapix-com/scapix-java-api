// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSObject.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSATTRIBUTEUSE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSATTRIBUTEUSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::xs { class XSAttributeUse; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::xs::XSAttributeUse>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/xs/XSAttributeUse";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xs::XSObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSATTRIBUTEUSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSATTRIBUTEUSE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSATTRIBUTEUSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::xs::XSAttributeUse : public jni::object_base<"com/sun/org/apache/xerces/internal/xs/XSAttributeUse",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xs::XSObject>
{
public:

	jboolean getRequired() { return call_method<"getRequired", jboolean>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration> getAttrDeclaration() { return call_method<"getAttrDeclaration", jni::ref<com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration>>(); }
	jshort getConstraintType() { return call_method<"getConstraintType", jshort>(); }
	jni::ref<java::lang::String> getConstraintValue() { return call_method<"getConstraintValue", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> getActualVC() { return call_method<"getActualVC", jni::ref<java::lang::Object>>(); }
	jshort getActualVCType() { return call_method<"getActualVCType", jshort>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::ShortList> getItemValueTypes() { return call_method<"getItemValueTypes", jni::ref<com::sun::org::apache::xerces::internal::xs::ShortList>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSValue> getValueConstraintValue() { return call_method<"getValueConstraintValue", jni::ref<com::sun::org::apache::xerces::internal::xs::XSValue>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> getAnnotations() { return call_method<"getAnnotations", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(); }

protected:

	XSAttributeUse(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XS_XSATTRIBUTEUSE
