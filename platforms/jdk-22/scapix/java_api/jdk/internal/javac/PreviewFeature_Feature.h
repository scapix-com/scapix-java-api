// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_PREVIEWFEATURE_FEATURE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_PREVIEWFEATURE_FEATURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::javac { class PreviewFeature_Feature; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::javac::PreviewFeature_Feature>
{
	static constexpr fixed_string class_name = "jdk/internal/javac/PreviewFeature$Feature";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_PREVIEWFEATURE_FEATURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_PREVIEWFEATURE_FEATURE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_PREVIEWFEATURE_FEATURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::javac::PreviewFeature_Feature : public jni::object_base<"jdk/internal/javac/PreviewFeature$Feature",
	java::lang::Enum>
{
public:

	static jni::ref<jdk::internal::javac::PreviewFeature_Feature> VIRTUAL_THREADS() { return get_static_field<"VIRTUAL_THREADS", jni::ref<jdk::internal::javac::PreviewFeature_Feature>>(); }
	static jni::ref<jdk::internal::javac::PreviewFeature_Feature> FOREIGN() { return get_static_field<"FOREIGN", jni::ref<jdk::internal::javac::PreviewFeature_Feature>>(); }
	static jni::ref<jdk::internal::javac::PreviewFeature_Feature> STRING_TEMPLATES() { return get_static_field<"STRING_TEMPLATES", jni::ref<jdk::internal::javac::PreviewFeature_Feature>>(); }
	static jni::ref<jdk::internal::javac::PreviewFeature_Feature> UNNAMED_CLASSES() { return get_static_field<"UNNAMED_CLASSES", jni::ref<jdk::internal::javac::PreviewFeature_Feature>>(); }
	static jni::ref<jdk::internal::javac::PreviewFeature_Feature> IMPLICIT_CLASSES() { return get_static_field<"IMPLICIT_CLASSES", jni::ref<jdk::internal::javac::PreviewFeature_Feature>>(); }
	static jni::ref<jdk::internal::javac::PreviewFeature_Feature> SCOPED_VALUES() { return get_static_field<"SCOPED_VALUES", jni::ref<jdk::internal::javac::PreviewFeature_Feature>>(); }
	static jni::ref<jdk::internal::javac::PreviewFeature_Feature> STRUCTURED_CONCURRENCY() { return get_static_field<"STRUCTURED_CONCURRENCY", jni::ref<jdk::internal::javac::PreviewFeature_Feature>>(); }
	static jni::ref<jdk::internal::javac::PreviewFeature_Feature> CLASSFILE_API() { return get_static_field<"CLASSFILE_API", jni::ref<jdk::internal::javac::PreviewFeature_Feature>>(); }
	static jni::ref<jdk::internal::javac::PreviewFeature_Feature> STREAM_GATHERERS() { return get_static_field<"STREAM_GATHERERS", jni::ref<jdk::internal::javac::PreviewFeature_Feature>>(); }
	static jni::ref<jdk::internal::javac::PreviewFeature_Feature> TEST() { return get_static_field<"TEST", jni::ref<jdk::internal::javac::PreviewFeature_Feature>>(); }

	static jni::ref<jni::array<jdk::internal::javac::PreviewFeature_Feature>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::javac::PreviewFeature_Feature>>>(); }
	static jni::ref<jdk::internal::javac::PreviewFeature_Feature> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::javac::PreviewFeature_Feature>>(name); }

protected:

	PreviewFeature_Feature(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_PREVIEWFEATURE_FEATURE
