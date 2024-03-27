// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dtd/models/ContentModelValidator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_SIMPLECONTENTMODEL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_SIMPLECONTENTMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::models { class SimpleContentModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::models::SimpleContentModel>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dtd/models/SimpleContentModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_SIMPLECONTENTMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_SIMPLECONTENTMODEL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_SIMPLECONTENTMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/QName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::dtd::models::SimpleContentModel : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dtd/models/SimpleContentModel",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator>
{
public:

	static jshort CHOICE() { return get_static_field<"CHOICE", jshort>(); }
	static jshort SEQUENCE() { return get_static_field<"SEQUENCE", jshort>(); }

	static jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::models::SimpleContentModel> new_object(jshort p1, jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p3) { return base_::new_object(p1, p2, p3); }
	jint validate(jni::ref<jni::array<com::sun::org::apache::xerces::internal::xni::QName>> p1, jint p2, jint p3) { return call_method<"validate", jint>(p1, p2, p3); }

protected:

	SimpleContentModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_MODELS_SIMPLECONTENTMODEL
