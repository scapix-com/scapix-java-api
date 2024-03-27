// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_SOFTREFERENCEGRAMMARPOOL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_SOFTREFERENCEGRAMMARPOOL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::jaxp::validation { class SoftReferenceGrammarPool; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_SOFTREFERENCEGRAMMARPOOL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_SOFTREFERENCEGRAMMARPOOL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_SOFTREFERENCEGRAMMARPOOL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool : public jni::object_base<"com/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool> new_object(jint p1) { return base_::new_object(p1); }
	jni::ref<jni::array<com::sun::org::apache::xerces::internal::xni::grammars::Grammar>> retrieveInitialGrammarSet(jni::ref<java::lang::String> p1) { return call_method<"retrieveInitialGrammarSet", jni::ref<jni::array<com::sun::org::apache::xerces::internal::xni::grammars::Grammar>>>(p1); }
	void cacheGrammars(jni::ref<java::lang::String> p1, jni::ref<jni::array<com::sun::org::apache::xerces::internal::xni::grammars::Grammar>> p2) { return call_method<"cacheGrammars", void>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::Grammar> retrieveGrammar(jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription> p1) { return call_method<"retrieveGrammar", jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::Grammar>>(p1); }
	void putGrammar(jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::Grammar> p1) { return call_method<"putGrammar", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::Grammar> getGrammar(jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription> p1) { return call_method<"getGrammar", jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::Grammar>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::Grammar> removeGrammar(jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription> p1) { return call_method<"removeGrammar", jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::Grammar>>(p1); }
	jboolean containsGrammar(jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription> p1) { return call_method<"containsGrammar", jboolean>(p1); }
	void lockPool() { return call_method<"lockPool", void>(); }
	void unlockPool() { return call_method<"unlockPool", void>(); }
	void clear() { return call_method<"clear", void>(); }
	jboolean equals(jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription> p2) { return call_method<"equals", jboolean>(p1, p2); }
	jint hashCode(jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription> p1) { return call_method<"hashCode", jint>(p1); }

protected:

	SoftReferenceGrammarPool(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_VALIDATION_SOFTREFERENCEGRAMMARPOOL
