// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_CMLEAF_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_CMLEAF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::models { class CMLeaf; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::models::CMLeaf>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dtd/models/CMLeaf";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_CMLEAF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_CMLEAF)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_CMLEAF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/QName.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::dtd::models::CMLeaf : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dtd/models/CMLeaf",
	com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::models::CMLeaf> new_object(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::models::CMLeaf> new_object(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1) { return base_::new_object(p1); }
	jboolean isNullable() { return call_method<"isNullable", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CMLeaf(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_CMLEAF