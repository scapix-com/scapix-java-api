// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLATTRIBUTEDECL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLATTRIBUTEDECL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd { class XMLAttributeDecl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::XMLAttributeDecl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dtd/XMLAttributeDecl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLATTRIBUTEDECL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLATTRIBUTEDECL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLATTRIBUTEDECL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dtd/XMLSimpleType.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/QName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::dtd::XMLAttributeDecl : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dtd/XMLAttributeDecl",
	java::lang::Object>
{
public:

	jni::ref<com::sun::org::apache::xerces::internal::xni::QName> name() { return get_field<"name", jni::ref<com::sun::org::apache::xerces::internal::xni::QName>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLSimpleType> simpleType() { return get_field<"simpleType", jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLSimpleType>>(); }
	jboolean optional() { return get_field<"optional", jboolean>(); }
	void optional(jboolean v) { set_field<"optional", jboolean>(v); }

	static jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLAttributeDecl> new_object() { return base_::new_object(); }
	void setValues(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLSimpleType> p2, jboolean p3) { return call_method<"setValues", void>(p1, p2, p3); }
	void clear() { return call_method<"clear", void>(); }

protected:

	XMLAttributeDecl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLATTRIBUTEDECL
