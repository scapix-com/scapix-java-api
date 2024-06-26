// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_DTDGRAMMARBUCKET_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_DTDGRAMMARBUCKET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd { class DTDGrammarBucket; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammarBucket>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammarBucket";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_DTDGRAMMARBUCKET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_DTDGRAMMARBUCKET)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_DTDGRAMMARBUCKET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammarBucket : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammarBucket",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammarBucket> new_object() { return base_::new_object(); }
	void putGrammar(jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar> p1) { return call_method<"putGrammar", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar> getGrammar(jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription> p1) { return call_method<"getGrammar", jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar>>(p1); }
	void clear() { return call_method<"clear", void>(); }

protected:

	DTDGrammarBucket(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_DTDGRAMMARBUCKET
