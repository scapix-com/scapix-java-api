// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_PARTICIPATESINPREVIEW_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_PARTICIPATESINPREVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::javac { class ParticipatesInPreview; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::javac::ParticipatesInPreview>
{
	static constexpr fixed_string class_name = "jdk/internal/javac/ParticipatesInPreview";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_PARTICIPATESINPREVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_PARTICIPATESINPREVIEW)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_PARTICIPATESINPREVIEW

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::javac::ParticipatesInPreview : public jni::object_base<"jdk/internal/javac/ParticipatesInPreview",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:


protected:

	ParticipatesInPreview(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JAVAC_PARTICIPATESINPREVIEW