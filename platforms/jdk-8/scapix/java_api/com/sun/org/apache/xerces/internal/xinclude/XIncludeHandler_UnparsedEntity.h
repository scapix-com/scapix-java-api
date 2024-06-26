// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XINCLUDE_XINCLUDEHANDLER_UNPARSEDENTITY_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XINCLUDE_XINCLUDEHANDLER_UNPARSEDENTITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::xinclude { class XIncludeHandler_UnparsedEntity; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler_UnparsedEntity>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler$UnparsedEntity";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XINCLUDE_XINCLUDEHANDLER_UNPARSEDENTITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XINCLUDE_XINCLUDEHANDLER_UNPARSEDENTITY)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XINCLUDE_XINCLUDEHANDLER_UNPARSEDENTITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler_UnparsedEntity : public jni::object_base<"com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler$UnparsedEntity",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> name() { return get_field<"name", jni::ref<java::lang::String>>(); }
	void name(jni::ref<java::lang::String> v) { set_field<"name", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> systemId() { return get_field<"systemId", jni::ref<java::lang::String>>(); }
	void systemId(jni::ref<java::lang::String> v) { set_field<"systemId", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> baseURI() { return get_field<"baseURI", jni::ref<java::lang::String>>(); }
	void baseURI(jni::ref<java::lang::String> v) { set_field<"baseURI", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> publicId() { return get_field<"publicId", jni::ref<java::lang::String>>(); }
	void publicId(jni::ref<java::lang::String> v) { set_field<"publicId", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> expandedSystemId() { return get_field<"expandedSystemId", jni::ref<java::lang::String>>(); }
	void expandedSystemId(jni::ref<java::lang::String> v) { set_field<"expandedSystemId", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> notation() { return get_field<"notation", jni::ref<java::lang::String>>(); }
	void notation(jni::ref<java::lang::String> v) { set_field<"notation", jni::ref<java::lang::String>>(v); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> augmentations() { return get_field<"augmentations", jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations>>(); }
	void augmentations(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> v) { set_field<"augmentations", jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations>>(v); }

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean isDuplicate(jni::ref<java::lang::Object> p1) { return call_method<"isDuplicate", jboolean>(p1); }

protected:

	XIncludeHandler_UnparsedEntity(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XINCLUDE_XINCLUDEHANDLER_UNPARSEDENTITY
