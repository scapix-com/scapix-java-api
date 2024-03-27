// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/CollatorFactory.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_COLLATORFACTORYBASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_COLLATORFACTORYBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class CollatorFactoryBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::CollatorFactoryBase>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/CollatorFactoryBase";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::CollatorFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_COLLATORFACTORYBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_COLLATORFACTORYBASE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_COLLATORFACTORYBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/Collator.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::dom::CollatorFactoryBase : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/CollatorFactoryBase",
	java::lang::Object,
	com::sun::org::apache::xalan::internal::xsltc::CollatorFactory>
{
public:

	static jni::ref<java::util::Locale> DEFAULT_LOCALE() { return get_static_field<"DEFAULT_LOCALE", jni::ref<java::util::Locale>>(); }
	static jni::ref<java::text::Collator> DEFAULT_COLLATOR() { return get_static_field<"DEFAULT_COLLATOR", jni::ref<java::text::Collator>>(); }

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::CollatorFactoryBase> new_object() { return base_::new_object(); }
	jni::ref<java::text::Collator> getCollator(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getCollator", jni::ref<java::text::Collator>>(p1, p2); }
	jni::ref<java::text::Collator> getCollator(jni::ref<java::util::Locale> p1) { return call_method<"getCollator", jni::ref<java::text::Collator>>(p1); }

protected:

	CollatorFactoryBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_COLLATORFACTORYBASE
