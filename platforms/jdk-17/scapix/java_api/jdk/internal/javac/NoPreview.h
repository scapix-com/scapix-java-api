// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_NOPREVIEW_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_NOPREVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::javac { class NoPreview; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::javac::NoPreview>
{
	static constexpr fixed_string class_name = "jdk/internal/javac/NoPreview";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_NOPREVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_NOPREVIEW)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_NOPREVIEW

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::javac::NoPreview : public jni::object_base<"jdk/internal/javac/NoPreview",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:


protected:

	NoPreview(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_NOPREVIEW
