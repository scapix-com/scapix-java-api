// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_VM_ANNOTATION_CHANGESCURRENTTHREAD_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_ANNOTATION_CHANGESCURRENTTHREAD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::vm::annotation { class ChangesCurrentThread; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::vm::annotation::ChangesCurrentThread>
{
	static constexpr fixed_string class_name = "jdk/internal/vm/annotation/ChangesCurrentThread";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_ANNOTATION_CHANGESCURRENTTHREAD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_VM_ANNOTATION_CHANGESCURRENTTHREAD)
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_ANNOTATION_CHANGESCURRENTTHREAD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::vm::annotation::ChangesCurrentThread : public jni::object_base<"jdk/internal/vm/annotation/ChangesCurrentThread",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:


protected:

	ChangesCurrentThread(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_ANNOTATION_CHANGESCURRENTTHREAD
