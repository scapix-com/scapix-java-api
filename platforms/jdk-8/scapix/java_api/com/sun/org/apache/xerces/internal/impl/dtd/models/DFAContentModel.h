// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dtd/models/ContentModelValidator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_DFACONTENTMODEL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_DFACONTENTMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::models { class DFAContentModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::models::DFAContentModel>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dtd/models/DFAContentModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_DFACONTENTMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_DFACONTENTMODEL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_DFACONTENTMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/QName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::dtd::models::DFAContentModel : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dtd/models/DFAContentModel",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::models::DFAContentModel> new_object(jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode> p1, jint p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	jint validate(jni::ref<jni::array<com::sun::org::apache::xerces::internal::xni::QName>> p1, jint p2, jint p3) { return call_method<"validate", jint>(p1, p2, p3); }

protected:

	DFAContentModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_DFACONTENTMODEL
