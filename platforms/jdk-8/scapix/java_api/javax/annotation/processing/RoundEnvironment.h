// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ANNOTATION_PROCESSING_ROUNDENVIRONMENT_FWD
#define SCAPIX_JAVA_API_JAVAX_ANNOTATION_PROCESSING_ROUNDENVIRONMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::annotation::processing { class RoundEnvironment; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::annotation::processing::RoundEnvironment>
{
	static constexpr fixed_string class_name = "javax/annotation/processing/RoundEnvironment";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ANNOTATION_PROCESSING_ROUNDENVIRONMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ANNOTATION_PROCESSING_ROUNDENVIRONMENT)
#define SCAPIX_JAVA_API_JAVAX_ANNOTATION_PROCESSING_ROUNDENVIRONMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/javax/lang/model/element/TypeElement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::annotation::processing::RoundEnvironment : public jni::object_base<"javax/annotation/processing/RoundEnvironment",
	java::lang::Object>
{
public:

	jboolean processingOver() { return call_method<"processingOver", jboolean>(); }
	jboolean errorRaised() { return call_method<"errorRaised", jboolean>(); }
	jni::ref<java::util::Set> getRootElements() { return call_method<"getRootElements", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getElementsAnnotatedWith(jni::ref<javax::lang::model::element::TypeElement> p1) { return call_method<"getElementsAnnotatedWith", jni::ref<java::util::Set>>(p1); }
	jni::ref<java::util::Set> getElementsAnnotatedWith(jni::ref<java::lang::Class> p1) { return call_method<"getElementsAnnotatedWith", jni::ref<java::util::Set>>(p1); }

protected:

	RoundEnvironment(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ANNOTATION_PROCESSING_ROUNDENVIRONMENT
