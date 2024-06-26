// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ANNOTATION_PROCESSING_COMPLETIONS_FWD
#define SCAPIX_JAVA_API_JAVAX_ANNOTATION_PROCESSING_COMPLETIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::annotation::processing { class Completions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::annotation::processing::Completions>
{
	static constexpr fixed_string class_name = "javax/annotation/processing/Completions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ANNOTATION_PROCESSING_COMPLETIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ANNOTATION_PROCESSING_COMPLETIONS)
#define SCAPIX_JAVA_API_JAVAX_ANNOTATION_PROCESSING_COMPLETIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/annotation/processing/Completion.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::annotation::processing::Completions : public jni::object_base<"javax/annotation/processing/Completions",
	java::lang::Object>
{
public:

	static jni::ref<javax::annotation::processing::Completion> of(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"of", jni::ref<javax::annotation::processing::Completion>>(p1, p2); }
	static jni::ref<javax::annotation::processing::Completion> of(jni::ref<java::lang::String> p1) { return call_static_method<"of", jni::ref<javax::annotation::processing::Completion>>(p1); }

protected:

	Completions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ANNOTATION_PROCESSING_COMPLETIONS
