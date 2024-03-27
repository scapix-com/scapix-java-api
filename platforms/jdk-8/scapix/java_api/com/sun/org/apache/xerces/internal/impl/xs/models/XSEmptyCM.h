// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_MODELS_XSEMPTYCM_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_MODELS_XSEMPTYCM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::models { class XSEmptyCM; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::models::XSEmptyCM>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/models/XSEmptyCM";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_MODELS_XSEMPTYCM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_MODELS_XSEMPTYCM)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_MODELS_XSEMPTYCM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/QName.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::models::XSEmptyCM : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/models/XSEmptyCM",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::models::XSEmptyCM> new_object() { return base_::new_object(); }
	jni::ref<jni::array<jint>> startContentModel() { return call_method<"startContentModel", jni::ref<jni::array<jint>>>(); }
	jni::ref<java::lang::Object> oneTransition(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<jni::array<jint>> p2, jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler> p3) { return call_method<"oneTransition", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jboolean endContentModel(jni::ref<jni::array<jint>> p1) { return call_method<"endContentModel", jboolean>(p1); }
	jboolean checkUniqueParticleAttribution(jni::ref<com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler> p1) { return call_method<"checkUniqueParticleAttribution", jboolean>(p1); }
	jni::ref<java::util::List> whatCanGoHere(jni::ref<jni::array<jint>> p1) { return call_method<"whatCanGoHere", jni::ref<java::util::List>>(p1); }
	jni::ref<java::util::ArrayList> checkMinMaxBounds() { return call_method<"checkMinMaxBounds", jni::ref<java::util::ArrayList>>(); }
	jni::ref<jni::array<jint>> occurenceInfo(jni::ref<jni::array<jint>> p1) { return call_method<"occurenceInfo", jni::ref<jni::array<jint>>>(p1); }
	jni::ref<java::lang::String> getTermName(jint p1) { return call_method<"getTermName", jni::ref<java::lang::String>>(p1); }
	jboolean isCompactedForUPA() { return call_method<"isCompactedForUPA", jboolean>(); }

protected:

	XSEmptyCM(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_MODELS_XSEMPTYCM
