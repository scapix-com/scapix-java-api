// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_MODELS_XSDFACM_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_MODELS_XSDFACM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::models { class XSDFACM; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::models::XSDFACM>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/models/XSDFACM";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_MODELS_XSDFACM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_MODELS_XSDFACM)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_MODELS_XSDFACM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/QName.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::models::XSDFACM : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/models/XSDFACM",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::models::XSDFACM> new_object(jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode> p1, jint p2) { return base_::new_object(p1, p2); }
	jboolean isFinalState(jint p1) { return call_method<"isFinalState", jboolean>(p1); }
	jni::ref<java::lang::Object> oneTransition(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<jni::array<jint>> p2, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler> p3) { return call_method<"oneTransition", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jni::ref<jni::array<jint>> startContentModel() { return call_method<"startContentModel", jni::ref<jni::array<jint>>>(); }
	jboolean endContentModel(jni::ref<jni::array<jint>> p1) { return call_method<"endContentModel", jboolean>(p1); }
	jboolean checkUniqueParticleAttribution(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler> p1) { return call_method<"checkUniqueParticleAttribution", jboolean>(p1); }
	jni::ref<java::util::List> whatCanGoHere(jni::ref<jni::array<jint>> p1) { return call_method<"whatCanGoHere", jni::ref<java::util::List>>(p1); }
	jni::ref<java::util::List> checkMinMaxBounds() { return call_method<"checkMinMaxBounds", jni::ref<java::util::List>>(); }
	jni::ref<jni::array<jint>> occurenceInfo(jni::ref<jni::array<jint>> p1) { return call_method<"occurenceInfo", jni::ref<jni::array<jint>>>(p1); }
	jni::ref<java::lang::String> getTermName(jint p1) { return call_method<"getTermName", jni::ref<java::lang::String>>(p1); }
	jboolean isCompactedForUPA() { return call_method<"isCompactedForUPA", jboolean>(); }

protected:

	XSDFACM(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_MODELS_XSDFACM