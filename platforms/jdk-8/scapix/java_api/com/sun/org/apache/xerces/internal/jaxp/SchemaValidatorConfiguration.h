// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_SCHEMAVALIDATORCONFIGURATION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_SCHEMAVALIDATORCONFIGURATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::jaxp { class SchemaValidatorConfiguration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::jaxp::SchemaValidatorConfiguration>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/jaxp/SchemaValidatorConfiguration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_SCHEMAVALIDATORCONFIGURATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_SCHEMAVALIDATORCONFIGURATION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_SCHEMAVALIDATORCONFIGURATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/jaxp/validation/XSGrammarPoolContainer.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/FeatureState.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/PropertyState.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::jaxp::SchemaValidatorConfiguration : public jni::object_base<"com/sun/org/apache/xerces/internal/jaxp/SchemaValidatorConfiguration",
	java::lang::Object,
	com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::jaxp::SchemaValidatorConfiguration> new_object(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager> p1, jni::ref<com::sun::org::apache::xerces::internal::jaxp::validation::XSGrammarPoolContainer> p2, jni::ref<com::sun::org::apache::xerces::internal::impl::validation::ValidationManager> p3) { return base_::new_object(p1, p2, p3); }
	jboolean getFeature(jni::ref<java::lang::String> p1) { return call_method<"getFeature", jboolean>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::util::FeatureState> getFeatureState(jni::ref<java::lang::String> p1) { return call_method<"getFeatureState", jni::ref<com::sun::org::apache::xerces::internal::util::FeatureState>>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState> getPropertyState(jni::ref<java::lang::String> p1) { return call_method<"getPropertyState", jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState>>(p1); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> p1) { return call_method<"getProperty", jni::ref<java::lang::Object>>(p1); }
	jboolean getFeature(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"getFeature", jboolean>(p1, p2); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"getProperty", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	SchemaValidatorConfiguration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_JAXP_SCHEMAVALIDATORCONFIGURATION
