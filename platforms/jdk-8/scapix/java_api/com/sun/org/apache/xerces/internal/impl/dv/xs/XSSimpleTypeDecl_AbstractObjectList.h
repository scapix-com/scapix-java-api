// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/datatypes/ObjectList.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_XSSIMPLETYPEDECL_ABSTRACTOBJECTLIST_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_XSSIMPLETYPEDECL_ABSTRACTOBJECTLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv::xs { class XSSimpleTypeDecl_AbstractObjectList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl_AbstractObjectList>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$AbstractObjectList";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractList, scapix::java_api::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_XSSIMPLETYPEDECL_ABSTRACTOBJECTLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_XSSIMPLETYPEDECL_ABSTRACTOBJECTLIST)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_XSSIMPLETYPEDECL_ABSTRACTOBJECTLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl_AbstractObjectList : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$AbstractObjectList",
	java::util::AbstractList,
	com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList>
{
public:

	jni::ref<java::lang::Object> get(jint p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jint size() { return call_method<"size", jint>(); }

protected:

	XSSimpleTypeDecl_AbstractObjectList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_XSSIMPLETYPEDECL_ABSTRACTOBJECTLIST
