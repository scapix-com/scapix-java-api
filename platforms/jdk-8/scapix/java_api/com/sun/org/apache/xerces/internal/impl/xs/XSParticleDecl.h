// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSParticle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSPARTICLEDECL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSPARTICLEDECL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs { class XSParticleDecl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xs::XSParticle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSPARTICLEDECL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSPARTICLEDECL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSPARTICLEDECL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xs::XSParticle>
{
public:

	static jshort PARTICLE_EMPTY() { return get_static_field<"PARTICLE_EMPTY", jshort>(); }
	static jshort PARTICLE_ELEMENT() { return get_static_field<"PARTICLE_ELEMENT", jshort>(); }
	static jshort PARTICLE_WILDCARD() { return get_static_field<"PARTICLE_WILDCARD", jshort>(); }
	static jshort PARTICLE_MODELGROUP() { return get_static_field<"PARTICLE_MODELGROUP", jshort>(); }
	static jshort PARTICLE_ZERO_OR_MORE() { return get_static_field<"PARTICLE_ZERO_OR_MORE", jshort>(); }
	static jshort PARTICLE_ZERO_OR_ONE() { return get_static_field<"PARTICLE_ZERO_OR_ONE", jshort>(); }
	static jshort PARTICLE_ONE_OR_MORE() { return get_static_field<"PARTICLE_ONE_OR_MORE", jshort>(); }
	jshort fType() { return get_field<"fType", jshort>(); }
	void fType(jshort v) { set_field<"fType", jshort>(v); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSTerm> fValue() { return get_field<"fValue", jni::ref<com::sun::org::apache::xerces::internal::xs::XSTerm>>(); }
	void fValue(jni::ref<com::sun::org::apache::xerces::internal::xs::XSTerm> v) { set_field<"fValue", jni::ref<com::sun::org::apache::xerces::internal::xs::XSTerm>>(v); }
	jint fMinOccurs() { return get_field<"fMinOccurs", jint>(); }
	void fMinOccurs(jint v) { set_field<"fMinOccurs", jint>(v); }
	jint fMaxOccurs() { return get_field<"fMaxOccurs", jint>(); }
	void fMaxOccurs(jint v) { set_field<"fMaxOccurs", jint>(v); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> fAnnotations() { return get_field<"fAnnotations", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(); }
	void fAnnotations(jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> v) { set_field<"fAnnotations", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(v); }

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl> new_object() { return base_::new_object(); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl> makeClone() { return call_method<"makeClone", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl>>(); }
	jboolean emptiable() { return call_method<"emptiable", jboolean>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jint minEffectiveTotalRange() { return call_method<"minEffectiveTotalRange", jint>(); }
	jint maxEffectiveTotalRange() { return call_method<"maxEffectiveTotalRange", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void reset() { return call_method<"reset", void>(); }
	jshort getType() { return call_method<"getType", jshort>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getNamespace() { return call_method<"getNamespace", jni::ref<java::lang::String>>(); }
	jint getMinOccurs() { return call_method<"getMinOccurs", jint>(); }
	jboolean getMaxOccursUnbounded() { return call_method<"getMaxOccursUnbounded", jboolean>(); }
	jint getMaxOccurs() { return call_method<"getMaxOccurs", jint>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSTerm> getTerm() { return call_method<"getTerm", jni::ref<com::sun::org::apache::xerces::internal::xs::XSTerm>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamespaceItem> getNamespaceItem() { return call_method<"getNamespaceItem", jni::ref<com::sun::org::apache::xerces::internal::xs::XSNamespaceItem>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList> getAnnotations() { return call_method<"getAnnotations", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObjectList>>(); }

protected:

	XSParticleDecl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_XSPARTICLEDECL
